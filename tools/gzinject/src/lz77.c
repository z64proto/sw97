#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "lz77.h"
#include "gzinject.h"

int lz77_compressed_length(uint8_t *src){
    if(*src!=0x10){
        return -1;
    }
    uint32_t size = *(uint32_t*)src >> 8;
    uint32_t pos = 0;
    int idx = 4;
cloop:
    while(pos<size){
        uint8_t flags = src[idx++];
        uint32_t lab=0;
        while(1){
            if(lab<8 && pos < size){
                if((flags & 0x80)!=0){
                    uint8_t n = (src[idx]>>4 & 0xF) + 3;
                    if(((src[idx] & 0xF)<<8) + (src[idx + 1] + 1) <= pos){
                        pos+=n;
                        idx+=2;
                    }else{
                        break;
                    }
                }else{
                    pos++;
                    idx++;
                }
                flags <<= 1;
                lab++;
            }else{
                goto cloop;
            }
            
        }
        return -1;
    }
    if(idx%4!=0){
        idx+=4-idx%4;
    }
    return idx;
}

int lz77_decompressed_size(uint8_t *source){
    return *(uint32_t*)(source + 1);
}

int lz77_decompress(uint8_t *src, uint8_t *dest){
    if(*src++ != 0x10){
        return -1;
    }
    int index1 = 0;
    int num1 = src[0] + (src[1] << 8) + (src[2]<<16);
    src+=3;
    while(index1<num1){
        uint8_t num2 = *src++;
        for(int index2=0;index2<8;++index2){
            if((num2 & 0x80)!=0){
                int num3 = 3 + (*src>>4);
                int num4 = 1 + ((src[0] & 0xF) << 8) + src[1];
                src+=2;
                if(num4>num1){
                    return -1;
                }
                for(int index3 = 0;index3<num3;++index3){
                    dest[index1] = dest[index1 - index3 - num4 + index3 % num4];
                    ++index1;
                }
            }else{
                dest[index1++] = *src++;
            }
            if(index1<num1){
                num2<<=1;
            }
            else{
                break;
            }
        }
    }
    return 0;
}

void lz77_search(uint8_t *source, int *dest, int *d, int pos, int len){
    
    if(pos>=len){
        dest[0] = -1;
        dest[1] = 0;
        return;
    }
    if(pos<2 || len-pos<2){
        dest[0] = 0;
        dest[1] = 0;
        return;
    }
    
    int didx = 0;
    for(int index = 1; index<0x1000 && index<pos;++index){
        if(source[pos - (index+1)] == source[pos]){
            d[didx++] = index+1;
        }
    }
    if(didx==0){
        dest[0] = 0;
        dest[1] = 0;
        return;
    }
    int num =0;
    uint8_t flag = 1;
    while(num<18 && flag){
        ++num;
        for(int index = didx-1;index>=0;--index){
            if(source[pos+num]!=source[pos-d[index] + num % d[index]]){
                if(didx>1){
                    memmove((void*)d + (sizeof(int) * index),(void*)d + (sizeof(int) * (index+1)),sizeof(int) * (didx - index - 1));
                    didx--;
                }else{
                    flag = 0;
                }
            }
        }
    }
    dest[0] = num;
    dest[1] = d[0];
}

int lz77_compress(uint8_t *src, uint8_t **dest, uint32_t len, uint32_t *lenp){
    int pos = 0;
    int cpos = 0;
    uint8_t *comp = calloc(len,1);
    comp[cpos++] = 0x10;
    uint8_t *cp = (uint8_t*)lenp;
    for(int index=0;index<3;++index){
        comp[cpos++]=*(uint8_t*)cp++;
    }
    int d[2];
    int dbuf[0x4000];
    while(pos<len){
        uint8_t num1 = 0;
        uint8_t comp2[16];
        int bpos = 0;
        
        for(int index=0;index<8;++index){
            lz77_search(src,d,dbuf,pos,len);
            if(d[0] > 2){
                uint8_t num2 = ((((d[0] - 3) & 0xF) << 4) + ((d[1] - 1) >> 8 & 0xF));
                comp2[bpos++] = num2;
                uint8_t num3 = (d[1] - 1) & 0xFF;
                comp2[bpos++] = num3;
                pos+=d[0];
                num1 |= 1 << (8 - (index+1));
            }else if(d[0]>=0){
                comp2[bpos++] = src[pos++];
            }else{
                break;
            }
        }
        comp[cpos++] = num1;
        for(int i=0;i<bpos;i++){
            comp[cpos++] = comp2[i];
        }
    }
    while(cpos%4!=0){
        comp[cpos++] = 0;
    }
    cpos--;
    len = addpadding(cpos,16);
    *dest = calloc(len,1);
    memcpy(*dest,comp,cpos);
    free(comp);
    return len;
}

