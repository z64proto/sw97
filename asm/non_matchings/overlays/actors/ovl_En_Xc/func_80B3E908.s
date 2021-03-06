.rdata
glabel D_80B42010
    .asciz "../z_en_oA2_inSpot05.c"
    .balign 4

glabel D_80B42028
    .asciz "../z_en_oA2_inSpot05.c"
    .balign 4

.text
glabel func_80B3E908
/* 02728 80B3E908 27BDFF80 */  addiu   $sp, $sp, 0xFF80           ## $sp = FFFFFF80
/* 0272C 80B3E90C AFBF002C */  sw      $ra, 0x002C($sp)
/* 02730 80B3E910 AFB00028 */  sw      $s0, 0x0028($sp)
/* 02734 80B3E914 AFA40080 */  sw      $a0, 0x0080($sp)
/* 02738 80B3E918 AFA50084 */  sw      $a1, 0x0084($sp)
/* 0273C 80B3E91C 8482025C */  lh      $v0, 0x025C($a0)           ## 0000025C
/* 02740 80B3E920 3C0880B4 */  lui     $t0, %hi(D_80B41D6C)       ## $t0 = 80B40000
/* 02744 80B3E924 8CB00000 */  lw      $s0, 0x0000($a1)           ## 00000000
/* 02748 80B3E928 00027880 */  sll     $t7, $v0,  2
/* 0274C 80B3E92C 010F4021 */  addu    $t0, $t0, $t7
/* 02750 80B3E930 8D081D6C */  lw      $t0, %lo(D_80B41D6C)($t0)
/* 02754 80B3E934 3C0680B4 */  lui     $a2, %hi(D_80B42010)       ## $a2 = 80B40000
/* 02758 80B3E938 24C62010 */  addiu   $a2, $a2, %lo(D_80B42010)  ## $a2 = 80B42010
/* 0275C 80B3E93C 27A40050 */  addiu   $a0, $sp, 0x0050           ## $a0 = FFFFFFD0
/* 02760 80B3E940 240705A4 */  addiu   $a3, $zero, 0x05A4         ## $a3 = 000005A4
/* 02764 80B3E944 02002825 */  or      $a1, $s0, $zero            ## $a1 = 00000000
/* 02768 80B3E948 0C031AB1 */  jal     Graph_OpenDisps
/* 0276C 80B3E94C AFA80070 */  sw      $t0, 0x0070($sp)
/* 02770 80B3E950 8FA80070 */  lw      $t0, 0x0070($sp)
/* 02774 80B3E954 8E0202C0 */  lw      $v0, 0x02C0($s0)           ## 000002C0
/* 02778 80B3E958 3C09DB06 */  lui     $t1, 0xDB06                ## $t1 = DB060000
/* 0277C 80B3E95C 00085100 */  sll     $t2, $t0,  4
/* 02780 80B3E960 000A5F02 */  srl     $t3, $t2, 28
/* 02784 80B3E964 3C0D8016 */  lui     $t5, %hi(gSegments)
/* 02788 80B3E968 24590008 */  addiu   $t9, $v0, 0x0008           ## $t9 = 00000008
/* 0278C 80B3E96C AE1902C0 */  sw      $t9, 0x02C0($s0)           ## 000002C0
/* 02790 80B3E970 25AD6FA8 */  addiu   $t5, %lo(gSegments)
/* 02794 80B3E974 000B6080 */  sll     $t4, $t3,  2
/* 02798 80B3E978 35290020 */  ori     $t1, $t1, 0x0020           ## $t1 = DB060020
/* 0279C 80B3E97C 018D2021 */  addu    $a0, $t4, $t5
/* 027A0 80B3E980 AC490000 */  sw      $t1, 0x0000($v0)           ## 00000000
/* 027A4 80B3E984 8C8E0000 */  lw      $t6, 0x0000($a0)           ## 00000000
/* 027A8 80B3E988 3C0100FF */  lui     $at, 0x00FF                ## $at = 00FF0000
/* 027AC 80B3E98C 3421FFFF */  ori     $at, $at, 0xFFFF           ## $at = 00FFFFFF
/* 027B0 80B3E990 01012824 */  and     $a1, $t0, $at
/* 027B4 80B3E994 3C068000 */  lui     $a2, 0x8000                ## $a2 = 80000000
/* 027B8 80B3E998 01C57821 */  addu    $t7, $t6, $a1
/* 027BC 80B3E99C 01E6C021 */  addu    $t8, $t7, $a2
/* 027C0 80B3E9A0 AC580004 */  sw      $t8, 0x0004($v0)           ## 00000004
/* 027C4 80B3E9A4 8E0202C0 */  lw      $v0, 0x02C0($s0)           ## 000002C0
/* 027C8 80B3E9A8 3C09DB06 */  lui     $t1, 0xDB06                ## $t1 = DB060000
/* 027CC 80B3E9AC 35290024 */  ori     $t1, $t1, 0x0024           ## $t1 = DB060024
/* 027D0 80B3E9B0 24590008 */  addiu   $t9, $v0, 0x0008           ## $t9 = 00000008
/* 027D4 80B3E9B4 AE1902C0 */  sw      $t9, 0x02C0($s0)           ## 000002C0
/* 027D8 80B3E9B8 AC490000 */  sw      $t1, 0x0000($v0)           ## 00000000
/* 027DC 80B3E9BC 8C8A0000 */  lw      $t2, 0x0000($a0)           ## 00000000
/* 027E0 80B3E9C0 3C0FFFFF */  lui     $t7, 0xFFFF                ## $t7 = FFFF0000
/* 027E4 80B3E9C4 35EF1400 */  ori     $t7, $t7, 0x1400           ## $t7 = FFFF1400
/* 027E8 80B3E9C8 01455821 */  addu    $t3, $t2, $a1
/* 027EC 80B3E9CC 01666021 */  addu    $t4, $t3, $a2
/* 027F0 80B3E9D0 AC4C0004 */  sw      $t4, 0x0004($v0)           ## 00000004
/* 027F4 80B3E9D4 8E0202C0 */  lw      $v0, 0x02C0($s0)           ## 000002C0
/* 027F8 80B3E9D8 3C0EFA00 */  lui     $t6, 0xFA00                ## $t6 = FA000000
/* 027FC 80B3E9DC 3C093C00 */  lui     $t1, 0x3C00                ## $t1 = 3C000000
/* 02800 80B3E9E0 244D0008 */  addiu   $t5, $v0, 0x0008           ## $t5 = 00000008
/* 02804 80B3E9E4 AE0D02C0 */  sw      $t5, 0x02C0($s0)           ## 000002C0
/* 02808 80B3E9E8 AC4F0004 */  sw      $t7, 0x0004($v0)           ## 00000004
/* 0280C 80B3E9EC AC4E0000 */  sw      $t6, 0x0000($v0)           ## 00000000
/* 02810 80B3E9F0 8E0202C0 */  lw      $v0, 0x02C0($s0)           ## 000002C0
/* 02814 80B3E9F4 3C19FB00 */  lui     $t9, 0xFB00                ## $t9 = FB000000
/* 02818 80B3E9F8 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 0281C 80B3E9FC 24580008 */  addiu   $t8, $v0, 0x0008           ## $t8 = 00000008
/* 02820 80B3EA00 AE1802C0 */  sw      $t8, 0x02C0($s0)           ## 000002C0
/* 02824 80B3EA04 AC490004 */  sw      $t1, 0x0004($v0)           ## 00000004
/* 02828 80B3EA08 0C024F46 */  jal     func_80093D18
/* 0282C 80B3EA0C AC590000 */  sw      $t9, 0x0000($v0)           ## 00000000
/* 02830 80B3EA10 8FA40080 */  lw      $a0, 0x0080($sp)
/* 02834 80B3EA14 8FA50084 */  lw      $a1, 0x0084($sp)
/* 02838 80B3EA18 0C00BAF3 */  jal     Actor_DrawHiliteReflectionOpa
/* 0283C 80B3EA1C 00003025 */  or      $a2, $zero, $zero          ## $a2 = 00000000
/* 02840 80B3EA20 8FAA0080 */  lw      $t2, 0x0080($sp)
/* 02844 80B3EA24 3C0B80B4 */  lui     $t3, %hi(func_80B3E8AC)    ## $t3 = 80B40000
/* 02848 80B3EA28 256BE8AC */  addiu   $t3, $t3, %lo(func_80B3E8AC) ## $t3 = 80B3E8AC
/* 0284C 80B3EA2C 2542014C */  addiu   $v0, $t2, 0x014C           ## $v0 = 0000014C
/* 02850 80B3EA30 8C450004 */  lw      $a1, 0x0004($v0)           ## 00000150
/* 02854 80B3EA34 8C460020 */  lw      $a2, 0x0020($v0)           ## 0000016C
/* 02858 80B3EA38 90470002 */  lbu     $a3, 0x0002($v0)           ## 0000014E
/* 0285C 80B3EA3C AFA00014 */  sw      $zero, 0x0014($sp)
/* 02860 80B3EA40 AFAB0010 */  sw      $t3, 0x0010($sp)
/* 02864 80B3EA44 8FA40084 */  lw      $a0, 0x0084($sp)
/* 02868 80B3EA48 0C0286B2 */  jal     SkelAnime_DrawFlexOpa
/* 0286C 80B3EA4C AFAA0018 */  sw      $t2, 0x0018($sp)
/* 02870 80B3EA50 3C0680B4 */  lui     $a2, %hi(D_80B42028)       ## $a2 = 80B40000
/* 02874 80B3EA54 24C62028 */  addiu   $a2, $a2, %lo(D_80B42028)  ## $a2 = 80B42028
/* 02878 80B3EA58 27A40050 */  addiu   $a0, $sp, 0x0050           ## $a0 = FFFFFFD0
/* 0287C 80B3EA5C 02002825 */  or      $a1, $s0, $zero            ## $a1 = 00000000
/* 02880 80B3EA60 0C031AD5 */  jal     Graph_CloseDisps
/* 02884 80B3EA64 240705D9 */  addiu   $a3, $zero, 0x05D9         ## $a3 = 000005D9
/* 02888 80B3EA68 8FBF002C */  lw      $ra, 0x002C($sp)
/* 0288C 80B3EA6C 8FB00028 */  lw      $s0, 0x0028($sp)
/* 02890 80B3EA70 27BD0080 */  addiu   $sp, $sp, 0x0080           ## $sp = 00000000
/* 02894 80B3EA74 03E00008 */  jr      $ra
/* 02898 80B3EA78 00000000 */  nop
