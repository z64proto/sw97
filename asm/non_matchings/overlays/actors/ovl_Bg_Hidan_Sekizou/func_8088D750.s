glabel func_8088D750
/* 00890 8088D750 27BDFFE0 */  addiu   $sp, $sp, 0xFFE0           ## $sp = FFFFFFE0
/* 00894 8088D754 AFBF001C */  sw      $ra, 0x001C($sp)           
/* 00898 8088D758 AFA40020 */  sw      $a0, 0x0020($sp)           
/* 0089C 8088D75C AFA50024 */  sw      $a1, 0x0024($sp)           
/* 008A0 8088D760 3C014348 */  lui     $at, 0x4348                ## $at = 43480000
/* 008A4 8088D764 44812000 */  mtc1    $at, $f4                   ## $f4 = 200.00
/* 008A8 8088D768 C4860090 */  lwc1    $f6, 0x0090($a0)           ## 00000090
/* 008AC 8088D76C 8FAF0020 */  lw      $t7, 0x0020($sp)           
/* 008B0 8088D770 8FA50020 */  lw      $a1, 0x0020($sp)           
/* 008B4 8088D774 4606203C */  c.lt.s  $f4, $f6                   
/* 008B8 8088D778 3C0640A0 */  lui     $a2, 0x40A0                ## $a2 = 40A00000
/* 008BC 8088D77C 45020004 */  bc1fl   .L8088D790                 
/* 008C0 8088D780 85F8001C */  lh      $t8, 0x001C($t7)           ## 0000001C
/* 008C4 8088D784 10000043 */  beq     $zero, $zero, .L8088D894   
/* 008C8 8088D788 8487008A */  lh      $a3, 0x008A($a0)           ## 0000008A
/* 008CC 8088D78C 85F8001C */  lh      $t8, 0x001C($t7)           ## 0000001C
.L8088D790:
/* 008D0 8088D790 8FA80020 */  lw      $t0, 0x0020($sp)           
/* 008D4 8088D794 5700001E */  bnel    $t8, $zero, .L8088D810     
/* 008D8 8088D798 8507008A */  lh      $a3, 0x008A($t0)           ## 0000008A
/* 008DC 8088D79C 85E200B6 */  lh      $v0, 0x00B6($t7)           ## 000000B6
/* 008E0 8088D7A0 85F9008A */  lh      $t9, 0x008A($t7)           ## 0000008A
/* 008E4 8088D7A4 03223823 */  subu    $a3, $t9, $v0              
/* 008E8 8088D7A8 00073C00 */  sll     $a3, $a3, 16               
/* 008EC 8088D7AC 00073C03 */  sra     $a3, $a3, 16               
/* 008F0 8088D7B0 28E12001 */  slti    $at, $a3, 0x2001           
/* 008F4 8088D7B4 54200006 */  bnel    $at, $zero, .L8088D7D0     
/* 008F8 8088D7B8 28E1E000 */  slti    $at, $a3, 0xE000           
/* 008FC 8088D7BC 24476000 */  addiu   $a3, $v0, 0x6000           ## $a3 = 00006000
/* 00900 8088D7C0 00073C00 */  sll     $a3, $a3, 16               
/* 00904 8088D7C4 10000033 */  beq     $zero, $zero, .L8088D894   
/* 00908 8088D7C8 00073C03 */  sra     $a3, $a3, 16               
/* 0090C 8088D7CC 28E1E000 */  slti    $at, $a3, 0xE000           
.L8088D7D0:
/* 00910 8088D7D0 10200005 */  beq     $at, $zero, .L8088D7E8     
/* 00914 8088D7D4 00000000 */  nop
/* 00918 8088D7D8 2447A000 */  addiu   $a3, $v0, 0xA000           ## $a3 = FFFFA000
/* 0091C 8088D7DC 00073C00 */  sll     $a3, $a3, 16               
/* 00920 8088D7E0 1000002C */  beq     $zero, $zero, .L8088D894   
/* 00924 8088D7E4 00073C03 */  sra     $a3, $a3, 16               
.L8088D7E8:
/* 00928 8088D7E8 18E00004 */  blez    $a3, .L8088D7FC            
/* 0092C 8088D7EC 2447E000 */  addiu   $a3, $v0, 0xE000           ## $a3 = FFFFE000
/* 00930 8088D7F0 00073C00 */  sll     $a3, $a3, 16               
/* 00934 8088D7F4 10000027 */  beq     $zero, $zero, .L8088D894   
/* 00938 8088D7F8 00073C03 */  sra     $a3, $a3, 16               
.L8088D7FC:
/* 0093C 8088D7FC 24472000 */  addiu   $a3, $v0, 0x2000           ## $a3 = 00002000
/* 00940 8088D800 00073C00 */  sll     $a3, $a3, 16               
/* 00944 8088D804 10000023 */  beq     $zero, $zero, .L8088D894   
/* 00948 8088D808 00073C03 */  sra     $a3, $a3, 16               
/* 0094C 8088D80C 8507008A */  lh      $a3, 0x008A($t0)           ## 0000008A
.L8088D810:
/* 00950 8088D810 28E16001 */  slti    $at, $a3, 0x6001           
/* 00954 8088D814 54200004 */  bnel    $at, $zero, .L8088D828     
/* 00958 8088D818 28E14001 */  slti    $at, $a3, 0x4001           
/* 0095C 8088D81C 1000001D */  beq     $zero, $zero, .L8088D894   
/* 00960 8088D820 24074000 */  addiu   $a3, $zero, 0x4000         ## $a3 = 00004000
/* 00964 8088D824 28E14001 */  slti    $at, $a3, 0x4001           
.L8088D828:
/* 00968 8088D828 54200004 */  bnel    $at, $zero, .L8088D83C     
/* 0096C 8088D82C 28E12001 */  slti    $at, $a3, 0x2001           
/* 00970 8088D830 10000018 */  beq     $zero, $zero, .L8088D894   
/* 00974 8088D834 24078000 */  addiu   $a3, $zero, 0x8000         ## $a3 = FFFF8000
/* 00978 8088D838 28E12001 */  slti    $at, $a3, 0x2001           
.L8088D83C:
/* 0097C 8088D83C 14200003 */  bne     $at, $zero, .L8088D84C     
/* 00980 8088D840 00000000 */  nop
/* 00984 8088D844 10000013 */  beq     $zero, $zero, .L8088D894   
/* 00988 8088D848 00003825 */  or      $a3, $zero, $zero          ## $a3 = 00000000
.L8088D84C:
/* 0098C 8088D84C 18E00003 */  blez    $a3, .L8088D85C            
/* 00990 8088D850 28E1A000 */  slti    $at, $a3, 0xA000           
/* 00994 8088D854 1000000F */  beq     $zero, $zero, .L8088D894   
/* 00998 8088D858 24074000 */  addiu   $a3, $zero, 0x4000         ## $a3 = 00004000
.L8088D85C:
/* 0099C 8088D85C 50200004 */  beql    $at, $zero, .L8088D870     
/* 009A0 8088D860 28E1C000 */  slti    $at, $a3, 0xC000           
/* 009A4 8088D864 1000000B */  beq     $zero, $zero, .L8088D894   
/* 009A8 8088D868 2407C000 */  addiu   $a3, $zero, 0xC000         ## $a3 = FFFFC000
/* 009AC 8088D86C 28E1C000 */  slti    $at, $a3, 0xC000           
.L8088D870:
/* 009B0 8088D870 50200004 */  beql    $at, $zero, .L8088D884     
/* 009B4 8088D874 28E1E000 */  slti    $at, $a3, 0xE000           
/* 009B8 8088D878 10000006 */  beq     $zero, $zero, .L8088D894   
/* 009BC 8088D87C 24078000 */  addiu   $a3, $zero, 0x8000         ## $a3 = FFFF8000
/* 009C0 8088D880 28E1E000 */  slti    $at, $a3, 0xE000           
.L8088D884:
/* 009C4 8088D884 10200003 */  beq     $at, $zero, .L8088D894     
/* 009C8 8088D888 2407C000 */  addiu   $a3, $zero, 0xC000         ## $a3 = FFFFC000
/* 009CC 8088D88C 10000001 */  beq     $zero, $zero, .L8088D894   
/* 009D0 8088D890 00003825 */  or      $a3, $zero, $zero          ## $a3 = 00000000
.L8088D894:
/* 009D4 8088D894 3C013F80 */  lui     $at, 0x3F80                ## $at = 3F800000
/* 009D8 8088D898 44814000 */  mtc1    $at, $f8                   ## $f8 = 1.00
/* 009DC 8088D89C 8FA40024 */  lw      $a0, 0x0024($sp)           
/* 009E0 8088D8A0 0C00BDC7 */  jal     func_8002F71C              
/* 009E4 8088D8A4 E7A80010 */  swc1    $f8, 0x0010($sp)           
/* 009E8 8088D8A8 8FBF001C */  lw      $ra, 0x001C($sp)           
/* 009EC 8088D8AC 27BD0020 */  addiu   $sp, $sp, 0x0020           ## $sp = 00000000
/* 009F0 8088D8B0 03E00008 */  jr      $ra                        
/* 009F4 8088D8B4 00000000 */  nop