glabel func_80B40590
/* 043B0 80B40590 AFA50004 */  sw      $a1, 0x0004($sp)           
/* 043B4 80B40594 240E0039 */  addiu   $t6, $zero, 0x0039         ## $t6 = 00000039
/* 043B8 80B40598 240F0005 */  addiu   $t7, $zero, 0x0005         ## $t7 = 00000005
/* 043BC 80B4059C AC8E0260 */  sw      $t6, 0x0260($a0)           ## 00000260
/* 043C0 80B405A0 03E00008 */  jr      $ra                        
/* 043C4 80B405A4 AC8F0264 */  sw      $t7, 0x0264($a0)           ## 00000264