glabel EnEiyer_Update
/* 015D0 80A01570 27BDFFC8 */  addiu   $sp, $sp, 0xFFC8           ## $sp = FFFFFFC8
/* 015D4 80A01574 AFBF0024 */  sw      $ra, 0x0024($sp)           
/* 015D8 80A01578 AFB00020 */  sw      $s0, 0x0020($sp)           
/* 015DC 80A0157C 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 015E0 80A01580 0C28050B */  jal     func_80A0142C              
/* 015E4 80A01584 AFA5003C */  sw      $a1, 0x003C($sp)           
/* 015E8 80A01588 8E190190 */  lw      $t9, 0x0190($s0)           ## 00000190
/* 015EC 80A0158C 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 015F0 80A01590 8FA5003C */  lw      $a1, 0x003C($sp)           
/* 015F4 80A01594 0320F809 */  jalr    $ra, $t9                   
/* 015F8 80A01598 00000000 */  nop
/* 015FC 80A0159C 860E0030 */  lh      $t6, 0x0030($s0)           ## 00000030
/* 01600 80A015A0 11C00006 */  beq     $t6, $zero, .L80A015BC     
/* 01604 80A015A4 00000000 */  nop
/* 01608 80A015A8 8E180190 */  lw      $t8, 0x0190($s0)           ## 00000190
/* 0160C 80A015AC 3C0F80A0 */  lui     $t7, %hi(func_80A01374)    ## $t7 = 80A00000
/* 01610 80A015B0 25EF1374 */  addiu   $t7, $t7, %lo(func_80A01374) ## $t7 = 80A01374
/* 01614 80A015B4 15F80005 */  bne     $t7, $t8, .L80A015CC       
/* 01618 80A015B8 00000000 */  nop
.L80A015BC:
/* 0161C 80A015BC 0C00B638 */  jal      Actor_MoveForwardXZ
              
/* 01620 80A015C0 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 01624 80A015C4 10000004 */  beq     $zero, $zero, .L80A015D8   
/* 01628 80A015C8 8E020190 */  lw      $v0, 0x0190($s0)           ## 00000190
.L80A015CC:
/* 0162C 80A015CC 0C00B65F */  jal      Actor_MoveForwardXYZ              
/* 01630 80A015D0 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 01634 80A015D4 8E020190 */  lw      $v0, 0x0190($s0)           ## 00000190
.L80A015D8:
/* 01638 80A015D8 3C0880A0 */  lui     $t0, %hi(func_80A00C70)    ## $t0 = 80A00000
/* 0163C 80A015DC 25080C70 */  addiu   $t0, $t0, %lo(func_80A00C70) ## $t0 = 80A00C70
/* 01640 80A015E0 11020013 */  beq     $t0, $v0, .L80A01630       
/* 01644 80A015E4 3C0980A0 */  lui     $t1, %hi(func_80A00F84)    ## $t1 = 80A00000
/* 01648 80A015E8 25290F84 */  addiu   $t1, $t1, %lo(func_80A00F84) ## $t1 = 80A00F84
/* 0164C 80A015EC 11220010 */  beq     $t1, $v0, .L80A01630       
/* 01650 80A015F0 3C0A80A0 */  lui     $t2, %hi(func_80A01374)    ## $t2 = 80A00000
/* 01654 80A015F4 254A1374 */  addiu   $t2, $t2, %lo(func_80A01374) ## $t2 = 80A01374
/* 01658 80A015F8 1142000D */  beq     $t2, $v0, .L80A01630       
/* 0165C 80A015FC 3C0B80A0 */  lui     $t3, %hi(func_80A01240)    ## $t3 = 80A00000
/* 01660 80A01600 256B1240 */  addiu   $t3, $t3, %lo(func_80A01240) ## $t3 = 80A01240
/* 01664 80A01604 1162000A */  beq     $t3, $v0, .L80A01630       
/* 01668 80A01608 3C0C80A0 */  lui     $t4, %hi(func_80A01104)    ## $t4 = 80A00000
/* 0166C 80A0160C 258C1104 */  addiu   $t4, $t4, %lo(func_80A01104) ## $t4 = 80A01104
/* 01670 80A01610 11820007 */  beq     $t4, $v0, .L80A01630       
/* 01674 80A01614 3C0D80A0 */  lui     $t5, %hi(func_80A01010)    ## $t5 = 80A00000
/* 01678 80A01618 25AD1010 */  addiu   $t5, $t5, %lo(func_80A01010) ## $t5 = 80A01010
/* 0167C 80A0161C 55A2000F */  bnel    $t5, $v0, .L80A0165C       
/* 01680 80A01620 8603001C */  lh      $v1, 0x001C($s0)           ## 0000001C
/* 01684 80A01624 86190194 */  lh      $t9, 0x0194($s0)           ## 00000194
/* 01688 80A01628 2401FFFF */  addiu   $at, $zero, 0xFFFF         ## $at = FFFFFFFF
/* 0168C 80A0162C 1721000A */  bne     $t9, $at, .L80A01658       
.L80A01630:
/* 01690 80A01630 3C0141F0 */  lui     $at, 0x41F0                ## $at = 41F00000
/* 01694 80A01634 44812000 */  mtc1    $at, $f4                   ## $f4 = 30.00
/* 01698 80A01638 240E0007 */  addiu   $t6, $zero, 0x0007         ## $t6 = 00000007
/* 0169C 80A0163C AFAE0014 */  sw      $t6, 0x0014($sp)           
/* 016A0 80A01640 8FA4003C */  lw      $a0, 0x003C($sp)           
/* 016A4 80A01644 02002825 */  or      $a1, $s0, $zero            ## $a1 = 00000000
/* 016A8 80A01648 3C0640A0 */  lui     $a2, 0x40A0                ## $a2 = 40A00000
/* 016AC 80A0164C 3C0741D8 */  lui     $a3, 0x41D8                ## $a3 = 41D80000
/* 016B0 80A01650 0C00B92D */  jal     Actor_UpdateBgCheckInfo              
/* 016B4 80A01654 E7A40010 */  swc1    $f4, 0x0010($sp)           
.L80A01658:
/* 016B8 80A01658 8603001C */  lh      $v1, 0x001C($s0)           ## 0000001C
.L80A0165C:
/* 016BC 80A0165C 2404000A */  addiu   $a0, $zero, 0x000A         ## $a0 = 0000000A
/* 016C0 80A01660 26050288 */  addiu   $a1, $s0, 0x0288           ## $a1 = 00000288
/* 016C4 80A01664 5083000A */  beql    $a0, $v1, .L80A01690       
/* 016C8 80A01668 86080032 */  lh      $t0, 0x0032($s0)           ## 00000032
/* 016CC 80A0166C 8E020190 */  lw      $v0, 0x0190($s0)           ## 00000190
/* 016D0 80A01670 3C0F80A0 */  lui     $t7, %hi(func_80A00858)    ## $t7 = 80A00000
/* 016D4 80A01674 25EF0858 */  addiu   $t7, $t7, %lo(func_80A00858) ## $t7 = 80A00858
/* 016D8 80A01678 11E20007 */  beq     $t7, $v0, .L80A01698       
/* 016DC 80A0167C 3C1880A0 */  lui     $t8, %hi(func_80A008D4)    ## $t8 = 80A00000
/* 016E0 80A01680 271808D4 */  addiu   $t8, $t8, %lo(func_80A008D4) ## $t8 = 80A008D4
/* 016E4 80A01684 13020004 */  beq     $t8, $v0, .L80A01698       
/* 016E8 80A01688 00000000 */  nop
/* 016EC 80A0168C 86080032 */  lh      $t0, 0x0032($s0)           ## 00000032
.L80A01690:
/* 016F0 80A01690 8603001C */  lh      $v1, 0x001C($s0)           ## 0000001C
/* 016F4 80A01694 A60800B6 */  sh      $t0, 0x00B6($s0)           ## 000000B6
.L80A01698:
/* 016F8 80A01698 50600003 */  beql    $v1, $zero, .L80A016A8     
/* 016FC 80A0169C 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 01700 80A016A0 1483001F */  bne     $a0, $v1, .L80A01720       
/* 01704 80A016A4 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
.L80A016A8:
/* 01708 80A016A8 0C0189B7 */  jal     Collider_UpdateCylinder
              
/* 0170C 80A016AC AFA5002C */  sw      $a1, 0x002C($sp)           
/* 01710 80A016B0 92090298 */  lbu     $t1, 0x0298($s0)           ## 00000298
/* 01714 80A016B4 3C010001 */  lui     $at, 0x0001                ## $at = 00010000
/* 01718 80A016B8 8FA4003C */  lw      $a0, 0x003C($sp)           
/* 0171C 80A016BC 312A0001 */  andi    $t2, $t1, 0x0001           ## $t2 = 00000000
/* 01720 80A016C0 11400004 */  beq     $t2, $zero, .L80A016D4     
/* 01724 80A016C4 34211E60 */  ori     $at, $at, 0x1E60           ## $at = 00011E60
/* 01728 80A016C8 00812821 */  addu    $a1, $a0, $at              
/* 0172C 80A016CC 0C0175E7 */  jal     CollisionCheck_SetAT
              ## CollisionCheck_setAT
/* 01730 80A016D0 8FA6002C */  lw      $a2, 0x002C($sp)           
.L80A016D4:
/* 01734 80A016D4 920B0299 */  lbu     $t3, 0x0299($s0)           ## 00000299
/* 01738 80A016D8 3C010001 */  lui     $at, 0x0001                ## $at = 00010000
/* 0173C 80A016DC 8FA4003C */  lw      $a0, 0x003C($sp)           
/* 01740 80A016E0 316C0001 */  andi    $t4, $t3, 0x0001           ## $t4 = 00000000
/* 01744 80A016E4 11800004 */  beq     $t4, $zero, .L80A016F8     
/* 01748 80A016E8 34211E60 */  ori     $at, $at, 0x1E60           ## $at = 00011E60
/* 0174C 80A016EC 00812821 */  addu    $a1, $a0, $at              
/* 01750 80A016F0 0C01767D */  jal     CollisionCheck_SetAC
              ## CollisionCheck_setAC
/* 01754 80A016F4 8FA6002C */  lw      $a2, 0x002C($sp)           
.L80A016F8:
/* 01758 80A016F8 8E190190 */  lw      $t9, 0x0190($s0)           ## 00000190
/* 0175C 80A016FC 3C0D80A0 */  lui     $t5, %hi(func_80A00B18)    ## $t5 = 80A00000
/* 01760 80A01700 25AD0B18 */  addiu   $t5, $t5, %lo(func_80A00B18) ## $t5 = 80A00B18
/* 01764 80A01704 11B90006 */  beq     $t5, $t9, .L80A01720       
/* 01768 80A01708 8FA4003C */  lw      $a0, 0x003C($sp)           
/* 0176C 80A0170C 3C010001 */  lui     $at, 0x0001                ## $at = 00010000
/* 01770 80A01710 34211E60 */  ori     $at, $at, 0x1E60           ## $at = 00011E60
/* 01774 80A01714 00812821 */  addu    $a1, $a0, $at              
/* 01778 80A01718 0C017713 */  jal     CollisionCheck_SetOC
              ## CollisionCheck_setOC
/* 0177C 80A0171C 8FA6002C */  lw      $a2, 0x002C($sp)           
.L80A01720:
/* 01780 80A01720 8E0F0004 */  lw      $t7, 0x0004($s0)           ## 00000004
/* 01784 80A01724 31F80001 */  andi    $t8, $t7, 0x0001           ## $t8 = 00000000
/* 01788 80A01728 53000014 */  beql    $t8, $zero, .L80A0177C     
/* 0178C 80A0172C 8FBF0024 */  lw      $ra, 0x0024($sp)           
/* 01790 80A01730 0C01DE1C */  jal     Math_SinS
              ## sins?
/* 01794 80A01734 860400B6 */  lh      $a0, 0x00B6($s0)           ## 000000B6
/* 01798 80A01738 3C014148 */  lui     $at, 0x4148                ## $at = 41480000
/* 0179C 80A0173C 44813000 */  mtc1    $at, $f6                   ## $f6 = 12.50
/* 017A0 80A01740 C60A0024 */  lwc1    $f10, 0x0024($s0)          ## 00000024
/* 017A4 80A01744 860400B6 */  lh      $a0, 0x00B6($s0)           ## 000000B6
/* 017A8 80A01748 46060202 */  mul.s   $f8, $f0, $f6              
/* 017AC 80A0174C 460A4400 */  add.s   $f16, $f8, $f10            
/* 017B0 80A01750 0C01DE0D */  jal     Math_CosS
              ## coss?
/* 017B4 80A01754 E6100038 */  swc1    $f16, 0x0038($s0)          ## 00000038
/* 017B8 80A01758 3C014148 */  lui     $at, 0x4148                ## $at = 41480000
/* 017BC 80A0175C 44819000 */  mtc1    $at, $f18                  ## $f18 = 12.50
/* 017C0 80A01760 C606002C */  lwc1    $f6, 0x002C($s0)           ## 0000002C
/* 017C4 80A01764 C60A0028 */  lwc1    $f10, 0x0028($s0)          ## 00000028
/* 017C8 80A01768 46120102 */  mul.s   $f4, $f0, $f18             
/* 017CC 80A0176C E60A003C */  swc1    $f10, 0x003C($s0)          ## 0000003C
/* 017D0 80A01770 46062200 */  add.s   $f8, $f4, $f6              
/* 017D4 80A01774 E6080040 */  swc1    $f8, 0x0040($s0)           ## 00000040
/* 017D8 80A01778 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80A0177C:
/* 017DC 80A0177C 8FB00020 */  lw      $s0, 0x0020($sp)           
/* 017E0 80A01780 27BD0038 */  addiu   $sp, $sp, 0x0038           ## $sp = 00000000
/* 017E4 80A01784 03E00008 */  jr      $ra                        
/* 017E8 80A01788 00000000 */  nop
