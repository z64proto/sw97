glabel func_8088D434
/* 00574 8088D434 27BDFF90 */  addiu   $sp, $sp, 0xFF90           ## $sp = FFFFFF90
/* 00578 8088D438 3C0142A0 */  lui     $at, 0x42A0                ## $at = 42A00000
/* 0057C 8088D43C 44811000 */  mtc1    $at, $f2                   ## $f2 = 80.00
/* 00580 8088D440 AFBF0034 */  sw      $ra, 0x0034($sp)           
/* 00584 8088D444 AFB70030 */  sw      $s7, 0x0030($sp)           
/* 00588 8088D448 AFB6002C */  sw      $s6, 0x002C($sp)           
/* 0058C 8088D44C AFB50028 */  sw      $s5, 0x0028($sp)           
/* 00590 8088D450 AFB40024 */  sw      $s4, 0x0024($sp)           
/* 00594 8088D454 AFB30020 */  sw      $s3, 0x0020($sp)           
/* 00598 8088D458 AFB2001C */  sw      $s2, 0x001C($sp)           
/* 0059C 8088D45C AFB10018 */  sw      $s1, 0x0018($sp)           
/* 005A0 8088D460 AFB00014 */  sw      $s0, 0x0014($sp)           
/* 005A4 8088D464 3C014396 */  lui     $at, 0x4396                ## $at = 43960000
/* 005A8 8088D468 44813000 */  mtc1    $at, $f6                   ## $f6 = 300.00
/* 005AC 8088D46C C4840090 */  lwc1    $f4, 0x0090($a0)           ## 00000090
/* 005B0 8088D470 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 005B4 8088D474 8CA21C44 */  lw      $v0, 0x1C44($a1)           ## 00001C44
/* 005B8 8088D478 4606203C */  c.lt.s  $f4, $f6                   
/* 005BC 8088D47C 0000B825 */  or      $s7, $zero, $zero          ## $s7 = 00000000
/* 005C0 8088D480 0000A025 */  or      $s4, $zero, $zero          ## $s4 = 00000000
/* 005C4 8088D484 02009025 */  or      $s2, $s0, $zero            ## $s2 = 00000000
/* 005C8 8088D488 45000002 */  bc1f    .L8088D494                 
/* 005CC 8088D48C 00008825 */  or      $s1, $zero, $zero          ## $s1 = 00000000
/* 005D0 8088D490 24170001 */  addiu   $s7, $zero, 0x0001         ## $s7 = 00000001
.L8088D494:
/* 005D4 8088D494 C6080024 */  lwc1    $f8, 0x0024($s0)           ## 00000024
/* 005D8 8088D498 C44A0024 */  lwc1    $f10, 0x0024($v0)          ## 00000024
/* 005DC 8088D49C 00007025 */  or      $t6, $zero, $zero          ## $t6 = 00000000
/* 005E0 8088D4A0 00009825 */  or      $s3, $zero, $zero          ## $s3 = 00000000
/* 005E4 8088D4A4 460A4001 */  sub.s   $f0, $f8, $f10             
/* 005E8 8088D4A8 24160023 */  addiu   $s6, $zero, 0x0023         ## $s6 = 00000023
/* 005EC 8088D4AC 27B50060 */  addiu   $s5, $sp, 0x0060           ## $s5 = FFFFFFF0
/* 005F0 8088D4B0 46000005 */  abs.s   $f0, $f0                   
/* 005F4 8088D4B4 4602003C */  c.lt.s  $f0, $f2                   
/* 005F8 8088D4B8 00000000 */  nop
/* 005FC 8088D4BC 45020003 */  bc1fl   .L8088D4CC                 
/* 00600 8088D4C0 AFAE0060 */  sw      $t6, 0x0060($sp)           
/* 00604 8088D4C4 240E0001 */  addiu   $t6, $zero, 0x0001         ## $t6 = 00000001
/* 00608 8088D4C8 AFAE0060 */  sw      $t6, 0x0060($sp)           
.L8088D4CC:
/* 0060C 8088D4CC C452002C */  lwc1    $f18, 0x002C($v0)          ## 0000002C
/* 00610 8088D4D0 C610002C */  lwc1    $f16, 0x002C($s0)          ## 0000002C
/* 00614 8088D4D4 00007825 */  or      $t7, $zero, $zero          ## $t7 = 00000000
/* 00618 8088D4D8 46128001 */  sub.s   $f0, $f16, $f18            
/* 0061C 8088D4DC 46000005 */  abs.s   $f0, $f0                   
/* 00620 8088D4E0 4602003C */  c.lt.s  $f0, $f2                   
/* 00624 8088D4E4 00000000 */  nop
/* 00628 8088D4E8 45020003 */  bc1fl   .L8088D4F8                 
/* 0062C 8088D4EC AFAF0064 */  sw      $t7, 0x0064($sp)           
/* 00630 8088D4F0 240F0001 */  addiu   $t7, $zero, 0x0001         ## $t7 = 00000001
/* 00634 8088D4F4 AFAF0064 */  sw      $t7, 0x0064($sp)           
.L8088D4F8:
/* 00638 8088D4F8 86580168 */  lh      $t8, 0x0168($s2)           ## 00000168
/* 0063C 8088D4FC 26420168 */  addiu   $v0, $s2, 0x0168           ## $v0 = 00000168
/* 00640 8088D500 57000005 */  bnel    $t8, $zero, .L8088D518     
/* 00644 8088D504 84480000 */  lh      $t0, 0x0000($v0)           ## 00000168
/* 00648 8088D508 8619008A */  lh      $t9, 0x008A($s0)           ## 0000008A
/* 0064C 8088D50C 10000006 */  beq     $zero, $zero, .L8088D528   
/* 00650 8088D510 03331823 */  subu    $v1, $t9, $s3              
/* 00654 8088D514 84480000 */  lh      $t0, 0x0000($v0)           ## 00000168
.L8088D518:
/* 00658 8088D518 2509FFFF */  addiu   $t1, $t0, 0xFFFF           ## $t1 = FFFFFFFF
/* 0065C 8088D51C A4490000 */  sh      $t1, 0x0000($v0)           ## 00000168
/* 00660 8088D520 860A008A */  lh      $t2, 0x008A($s0)           ## 0000008A
/* 00664 8088D524 01531823 */  subu    $v1, $t2, $s3              
.L8088D528:
/* 00668 8088D528 00031400 */  sll     $v0, $v1, 16               
/* 0066C 8088D52C 00021403 */  sra     $v0, $v0, 16               
/* 00670 8088D530 06210004 */  bgez    $s1, .L8088D544            
/* 00674 8088D534 322B0001 */  andi    $t3, $s1, 0x0001           ## $t3 = 00000000
/* 00678 8088D538 11600002 */  beq     $t3, $zero, .L8088D544     
/* 0067C 8088D53C 00000000 */  nop
/* 00680 8088D540 256BFFFE */  addiu   $t3, $t3, 0xFFFE           ## $t3 = FFFFFFFE
.L8088D544:
/* 00684 8088D544 000B6080 */  sll     $t4, $t3,  2               
/* 00688 8088D548 02AC6821 */  addu    $t5, $s5, $t4              
/* 0068C 8088D54C 8DAE0000 */  lw      $t6, 0x0000($t5)           ## 00000000
/* 00690 8088D550 51C0001D */  beql    $t6, $zero, .L8088D5C8     
/* 00694 8088D554 26310001 */  addiu   $s1, $s1, 0x0001           ## $s1 = 00000001
/* 00698 8088D558 52E0001B */  beql    $s7, $zero, .L8088D5C8     
/* 0069C 8088D55C 26310001 */  addiu   $s1, $s1, 0x0001           ## $s1 = 00000002
/* 006A0 8088D560 04400003 */  bltz    $v0, .L8088D570            
/* 006A4 8088D564 00022823 */  subu    $a1, $zero, $v0            
/* 006A8 8088D568 10000001 */  beq     $zero, $zero, .L8088D570   
/* 006AC 8088D56C 00402825 */  or      $a1, $v0, $zero            ## $a1 = 00000168
.L8088D570:
/* 006B0 8088D570 28A14001 */  slti    $at, $a1, 0x4001           
/* 006B4 8088D574 10200013 */  beq     $at, $zero, .L8088D5C4     
/* 006B8 8088D578 26420168 */  addiu   $v0, $s2, 0x0168           ## $v0 = 00000168
/* 006BC 8088D57C 84430000 */  lh      $v1, 0x0000($v0)           ## 00000168
/* 006C0 8088D580 02802825 */  or      $a1, $s4, $zero            ## $a1 = 00000000
/* 006C4 8088D584 28610004 */  slti    $at, $v1, 0x0004           
/* 006C8 8088D588 10200002 */  beq     $at, $zero, .L8088D594     
/* 006CC 8088D58C 02C37823 */  subu    $t7, $s6, $v1              
/* 006D0 8088D590 A44F0000 */  sh      $t7, 0x0000($v0)           ## 00000168
.L8088D594:
/* 006D4 8088D594 2A810002 */  slti    $at, $s4, 0x0002           
/* 006D8 8088D598 14200003 */  bne     $at, $zero, .L8088D5A8     
/* 006DC 8088D59C 00000000 */  nop
/* 006E0 8088D5A0 10000001 */  beq     $zero, $zero, .L8088D5A8   
/* 006E4 8088D5A4 24050001 */  addiu   $a1, $zero, 0x0001         ## $a1 = 00000001
.L8088D5A8:
/* 006E8 8088D5A8 861800B6 */  lh      $t8, 0x00B6($s0)           ## 000000B6
/* 006EC 8088D5AC 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 006F0 8088D5B0 03133021 */  addu    $a2, $t8, $s3              
/* 006F4 8088D5B4 00063400 */  sll     $a2, $a2, 16               
/* 006F8 8088D5B8 0C2233B0 */  jal     func_8088CEC0              
/* 006FC 8088D5BC 00063403 */  sra     $a2, $a2, 16               
/* 00700 8088D5C0 26940001 */  addiu   $s4, $s4, 0x0001           ## $s4 = 00000001
.L8088D5C4:
/* 00704 8088D5C4 26310001 */  addiu   $s1, $s1, 0x0001           ## $s1 = 00000003
.L8088D5C8:
/* 00708 8088D5C8 2A210004 */  slti    $at, $s1, 0x0004           
/* 0070C 8088D5CC 26520002 */  addiu   $s2, $s2, 0x0002           ## $s2 = 00000002
/* 00710 8088D5D0 1420FFC9 */  bne     $at, $zero, .L8088D4F8     
/* 00714 8088D5D4 26734000 */  addiu   $s3, $s3, 0x4000           ## $s3 = 00004000
/* 00718 8088D5D8 00141080 */  sll     $v0, $s4,  2               
/* 0071C 8088D5DC 00541023 */  subu    $v0, $v0, $s4              
/* 00720 8088D5E0 28410006 */  slti    $at, $v0, 0x0006           
/* 00724 8088D5E4 10200043 */  beq     $at, $zero, .L8088D6F4     
/* 00728 8088D5E8 00408825 */  or      $s1, $v0, $zero            ## $s1 = 00000000
/* 0072C 8088D5EC 24060006 */  addiu   $a2, $zero, 0x0006         ## $a2 = 00000006
/* 00730 8088D5F0 00C22023 */  subu    $a0, $a2, $v0              
/* 00734 8088D5F4 30840003 */  andi    $a0, $a0, 0x0003           ## $a0 = 00000000
/* 00738 8088D5F8 10800011 */  beq     $a0, $zero, .L8088D640     
/* 0073C 8088D5FC 00822821 */  addu    $a1, $a0, $v0              
/* 00740 8088D600 00021980 */  sll     $v1, $v0,  6               
/* 00744 8088D604 2404FFFE */  addiu   $a0, $zero, 0xFFFE         ## $a0 = FFFFFFFE
.L8088D608:
/* 00748 8088D608 8E190190 */  lw      $t9, 0x0190($s0)           ## 00000190
/* 0074C 8088D60C 26310001 */  addiu   $s1, $s1, 0x0001           ## $s1 = 00000001
/* 00750 8088D610 03231021 */  addu    $v0, $t9, $v1              
/* 00754 8088D614 90480015 */  lbu     $t0, 0x0015($v0)           ## 00000015
/* 00758 8088D618 01044824 */  and     $t1, $t0, $a0              
/* 0075C 8088D61C A0490015 */  sb      $t1, 0x0015($v0)           ## 00000015
/* 00760 8088D620 8E0A0190 */  lw      $t2, 0x0190($s0)           ## 00000190
/* 00764 8088D624 01431021 */  addu    $v0, $t2, $v1              
/* 00768 8088D628 904B0017 */  lbu     $t3, 0x0017($v0)           ## 00000017
/* 0076C 8088D62C 24630040 */  addiu   $v1, $v1, 0x0040           ## $v1 = 00000040
/* 00770 8088D630 01646024 */  and     $t4, $t3, $a0              
/* 00774 8088D634 14B1FFF4 */  bne     $a1, $s1, .L8088D608       
/* 00778 8088D638 A04C0017 */  sb      $t4, 0x0017($v0)           ## 00000017
/* 0077C 8088D63C 1226002D */  beq     $s1, $a2, .L8088D6F4       
.L8088D640:
/* 00780 8088D640 2404FFFE */  addiu   $a0, $zero, 0xFFFE         ## $a0 = FFFFFFFE
/* 00784 8088D644 00111980 */  sll     $v1, $s1,  6               
/* 00788 8088D648 24050180 */  addiu   $a1, $zero, 0x0180         ## $a1 = 00000180
.L8088D64C:
/* 0078C 8088D64C 8E0D0190 */  lw      $t5, 0x0190($s0)           ## 00000190
/* 00790 8088D650 01A31021 */  addu    $v0, $t5, $v1              
/* 00794 8088D654 904E0015 */  lbu     $t6, 0x0015($v0)           ## 00000015
/* 00798 8088D658 01C47824 */  and     $t7, $t6, $a0              
/* 0079C 8088D65C A04F0015 */  sb      $t7, 0x0015($v0)           ## 00000015
/* 007A0 8088D660 8E180190 */  lw      $t8, 0x0190($s0)           ## 00000190
/* 007A4 8088D664 03031021 */  addu    $v0, $t8, $v1              
/* 007A8 8088D668 90590017 */  lbu     $t9, 0x0017($v0)           ## 00000017
/* 007AC 8088D66C 03244024 */  and     $t0, $t9, $a0              
/* 007B0 8088D670 A0480017 */  sb      $t0, 0x0017($v0)           ## 00000017
/* 007B4 8088D674 8E090190 */  lw      $t1, 0x0190($s0)           ## 00000190
/* 007B8 8088D678 01231021 */  addu    $v0, $t1, $v1              
/* 007BC 8088D67C 904A0055 */  lbu     $t2, 0x0055($v0)           ## 00000055
/* 007C0 8088D680 01445824 */  and     $t3, $t2, $a0              
/* 007C4 8088D684 A04B0055 */  sb      $t3, 0x0055($v0)           ## 00000055
/* 007C8 8088D688 8E0C0190 */  lw      $t4, 0x0190($s0)           ## 00000190
/* 007CC 8088D68C 01831021 */  addu    $v0, $t4, $v1              
/* 007D0 8088D690 904D0057 */  lbu     $t5, 0x0057($v0)           ## 00000057
/* 007D4 8088D694 01A47024 */  and     $t6, $t5, $a0              
/* 007D8 8088D698 A04E0057 */  sb      $t6, 0x0057($v0)           ## 00000057
/* 007DC 8088D69C 8E0F0190 */  lw      $t7, 0x0190($s0)           ## 00000190
/* 007E0 8088D6A0 01E31021 */  addu    $v0, $t7, $v1              
/* 007E4 8088D6A4 90580095 */  lbu     $t8, 0x0095($v0)           ## 00000095
/* 007E8 8088D6A8 0304C824 */  and     $t9, $t8, $a0              
/* 007EC 8088D6AC A0590095 */  sb      $t9, 0x0095($v0)           ## 00000095
/* 007F0 8088D6B0 8E080190 */  lw      $t0, 0x0190($s0)           ## 00000190
/* 007F4 8088D6B4 01031021 */  addu    $v0, $t0, $v1              
/* 007F8 8088D6B8 90490097 */  lbu     $t1, 0x0097($v0)           ## 00000097
/* 007FC 8088D6BC 01245024 */  and     $t2, $t1, $a0              
/* 00800 8088D6C0 A04A0097 */  sb      $t2, 0x0097($v0)           ## 00000097
/* 00804 8088D6C4 8E0B0190 */  lw      $t3, 0x0190($s0)           ## 00000190
/* 00808 8088D6C8 01631021 */  addu    $v0, $t3, $v1              
/* 0080C 8088D6CC 904C00D5 */  lbu     $t4, 0x00D5($v0)           ## 000000D5
/* 00810 8088D6D0 01846824 */  and     $t5, $t4, $a0              
/* 00814 8088D6D4 A04D00D5 */  sb      $t5, 0x00D5($v0)           ## 000000D5
/* 00818 8088D6D8 8E0E0190 */  lw      $t6, 0x0190($s0)           ## 00000190
/* 0081C 8088D6DC 01C31021 */  addu    $v0, $t6, $v1              
/* 00820 8088D6E0 904F00D7 */  lbu     $t7, 0x00D7($v0)           ## 000000D7
/* 00824 8088D6E4 24630100 */  addiu   $v1, $v1, 0x0100           ## $v1 = 00000140
/* 00828 8088D6E8 01E4C024 */  and     $t8, $t7, $a0              
/* 0082C 8088D6EC 1465FFD7 */  bne     $v1, $a1, .L8088D64C       
/* 00830 8088D6F0 A05800D7 */  sb      $t8, 0x00D7($v0)           ## 000000D7
.L8088D6F4:
/* 00834 8088D6F4 8FBF0034 */  lw      $ra, 0x0034($sp)           
/* 00838 8088D6F8 8FB00014 */  lw      $s0, 0x0014($sp)           
/* 0083C 8088D6FC 8FB10018 */  lw      $s1, 0x0018($sp)           
/* 00840 8088D700 8FB2001C */  lw      $s2, 0x001C($sp)           
/* 00844 8088D704 8FB30020 */  lw      $s3, 0x0020($sp)           
/* 00848 8088D708 8FB40024 */  lw      $s4, 0x0024($sp)           
/* 0084C 8088D70C 8FB50028 */  lw      $s5, 0x0028($sp)           
/* 00850 8088D710 8FB6002C */  lw      $s6, 0x002C($sp)           
/* 00854 8088D714 8FB70030 */  lw      $s7, 0x0030($sp)           
/* 00858 8088D718 03E00008 */  jr      $ra                        
/* 0085C 8088D71C 27BD0070 */  addiu   $sp, $sp, 0x0070           ## $sp = 00000000