glabel func_80B41B0C
/* 0592C 80B41B0C 27BDFFC8 */  addiu   $sp, $sp, 0xFFC8           ## $sp = FFFFFFC8
/* 05930 80B41B10 24010010 */  addiu   $at, $zero, 0x0010         ## $at = 00000010
/* 05934 80B41B14 AFBF0014 */  sw      $ra, 0x0014($sp)           
/* 05938 80B41B18 AFA40038 */  sw      $a0, 0x0038($sp)           
/* 0593C 80B41B1C AFA60040 */  sw      $a2, 0x0040($sp)           
/* 05940 80B41B20 14A10019 */  bne     $a1, $at, .L80B41B88       
/* 05944 80B41B24 AFA70044 */  sw      $a3, 0x0044($sp)           
/* 05948 80B41B28 3C0E80B4 */  lui     $t6, %hi(D_80B41F0C)       ## $t6 = 80B40000
/* 0594C 80B41B2C 25CE1F0C */  addiu   $t6, $t6, %lo(D_80B41F0C)  ## $t6 = 80B41F0C
/* 05950 80B41B30 8DD80000 */  lw      $t8, 0x0000($t6)           ## 80B41F0C
/* 05954 80B41B34 27A40028 */  addiu   $a0, $sp, 0x0028           ## $a0 = FFFFFFF0
/* 05958 80B41B38 27A5001C */  addiu   $a1, $sp, 0x001C           ## $a1 = FFFFFFE4
/* 0595C 80B41B3C AC980000 */  sw      $t8, 0x0000($a0)           ## FFFFFFF0
/* 05960 80B41B40 8DCF0004 */  lw      $t7, 0x0004($t6)           ## 80B41F10
/* 05964 80B41B44 AC8F0004 */  sw      $t7, 0x0004($a0)           ## FFFFFFF4
/* 05968 80B41B48 8DD80008 */  lw      $t8, 0x0008($t6)           ## 80B41F14
/* 0596C 80B41B4C 0C0346BD */  jal     Matrix_MultVec3f              
/* 05970 80B41B50 AC980008 */  sw      $t8, 0x0008($a0)           ## FFFFFFF8
/* 05974 80B41B54 8FA20048 */  lw      $v0, 0x0048($sp)           
/* 05978 80B41B58 C7A4001C */  lwc1    $f4, 0x001C($sp)           
/* 0597C 80B41B5C 84590030 */  lh      $t9, 0x0030($v0)           ## 00000030
/* 05980 80B41B60 E4440038 */  swc1    $f4, 0x0038($v0)           ## 00000038
/* 05984 80B41B64 C7A60020 */  lwc1    $f6, 0x0020($sp)           
/* 05988 80B41B68 84480032 */  lh      $t0, 0x0032($v0)           ## 00000032
/* 0598C 80B41B6C 84490034 */  lh      $t1, 0x0034($v0)           ## 00000034
/* 05990 80B41B70 E446003C */  swc1    $f6, 0x003C($v0)           ## 0000003C
/* 05994 80B41B74 C7A80024 */  lwc1    $f8, 0x0024($sp)           
/* 05998 80B41B78 A4590044 */  sh      $t9, 0x0044($v0)           ## 00000044
/* 0599C 80B41B7C A4480046 */  sh      $t0, 0x0046($v0)           ## 00000046
/* 059A0 80B41B80 A4490048 */  sh      $t1, 0x0048($v0)           ## 00000048
/* 059A4 80B41B84 E4480040 */  swc1    $f8, 0x0040($v0)           ## 00000040
.L80B41B88:
/* 059A8 80B41B88 8FBF0014 */  lw      $ra, 0x0014($sp)           
/* 059AC 80B41B8C 27BD0038 */  addiu   $sp, $sp, 0x0038           ## $sp = 00000000
/* 059B0 80B41B90 03E00008 */  jr      $ra                        
/* 059B4 80B41B94 00000000 */  nop