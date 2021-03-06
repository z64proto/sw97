.rdata
glabel D_8013C458
    .asciz "\nnext_zelda_time=[%x]"
    .balign 4

glabel D_8013C470
    .asciz "../z_kankyo.c"
    .balign 4

glabel D_8013C480
    .asciz "../z_kankyo.c"
    .balign 4

glabel D_8013C490
    .asciz "\x1b[41;37m\nカラーパレットの設定がおかしいようです！\x1b[m"
    # EUC-JP: カラーパレットの設定がおかしいようです！ | The color palette settings seem to be wrong!
    .balign 4

glabel D_8013C4C8
    .asciz "\x1b[41;37m\n設定パレット＝[%d] 最後パレット番号＝[%d]\n\x1b[m"
    # EUC-JP: 設定パレット＝[%d] 最後パレット番号＝ | Set pallet = [% d] Last pallet number =
    .balign 4

glabel D_8013C500
    .asciz "\n\x1b[31mカラーパレットがおかしいようです！"
    # EUC-JP: カラーパレットがおかしいようです！ | The color palette seems strange!
    .balign 4

glabel D_8013C52C
    .asciz "\n\x1b[33m設定パレット＝[%d] パレット数＝[%d]\n\x1b[m"
    # EUC-JP: 設定パレット＝[%d] パレット数＝[%d] | Set pallet = [% d] Number of pallets = [% d]
    .balign 4

.late_rodata
glabel D_8013C7A4
    .float 0.001

glabel D_8013C7A8
    .float 0.005

.text
glabel func_80070C24
/* AE7DC4 80070C24 27BDFF70 */  addiu $sp, $sp, -0x90
/* AE7DC8 80070C28 3C0D8016 */  lui   $t5, %hi(gSaveContext) # $t5, 0x8016
/* AE7DCC 80070C2C 25ADE660 */  addiu $t5, %lo(gSaveContext) # addiu $t5, $t5, -0x19a0
/* AE7DD0 80070C30 8DA2135C */  lw    $v0, 0x135c($t5)
/* AE7DD4 80070C34 3C010001 */  li    $at, 0x00010000 # 0.000000
/* AE7DD8 80070C38 00817021 */  addu  $t6, $a0, $at
/* AE7DDC 80070C3C AFBF001C */  sw    $ra, 0x1c($sp)
/* AE7DE0 80070C40 AFB10018 */  sw    $s1, 0x18($sp)
/* AE7DE4 80070C44 AFB00014 */  sw    $s0, 0x14($sp)
/* AE7DE8 80070C48 AFA7009C */  sw    $a3, 0x9c($sp)
/* AE7DEC 80070C4C 44807000 */  mtc1  $zero, $f14
/* AE7DF0 80070C50 AFAE0040 */  sw    $t6, 0x40($sp)
/* AE7DF4 80070C54 00A08025 */  move  $s0, $a1
/* AE7DF8 80070C58 00C08825 */  move  $s1, $a2
/* AE7DFC 80070C5C 1040000B */  beqz  $v0, .L80070C8C
/* AE7E00 80070C60 8DCA0ADC */   lw    $t2, 0xadc($t6)
/* AE7E04 80070C64 24010003 */  li    $at, 3
/* AE7E08 80070C68 50410009 */  beql  $v0, $at, .L80070C90
/* AE7E0C 80070C6C 8FB8009C */   lw    $t8, 0x9c($sp)
/* AE7E10 80070C70 AFA40090 */  sw    $a0, 0x90($sp)
/* AE7E14 80070C74 AFAA007C */  sw    $t2, 0x7c($sp)
/* AE7E18 80070C78 0C02A85B */  jal   func_800AA16C
/* AE7E1C 80070C7C E7AE0088 */   swc1  $f14, 0x88($sp)
/* AE7E20 80070C80 8FAA007C */  lw    $t2, 0x7c($sp)
/* AE7E24 80070C84 C7AE0088 */  lwc1  $f14, 0x88($sp)
/* AE7E28 80070C88 8FA40090 */  lw    $a0, 0x90($sp)
.L80070C8C:
/* AE7E2C 80070C8C 8FB8009C */  lw    $t8, 0x9c($sp)
.L80070C90:
/* AE7E30 80070C90 8FAE0040 */  lw    $t6, 0x40($sp)
/* AE7E34 80070C94 971901D4 */  lhu   $t9, 0x1d4($t8)
/* AE7E38 80070C98 5720090C */  bnezl $t9, .L800730CC
/* AE7E3C 80070C9C 8FBF001C */   lw    $ra, 0x1c($sp)
/* AE7E40 80070CA0 95CF0934 */  lhu   $t7, 0x934($t6)
/* AE7E44 80070CA4 55E00015 */  bnezl $t7, .L80070CFC
/* AE7E48 80070CA8 AFA40090 */   sw    $a0, 0x90($sp)
/* AE7E4C 80070CAC 95D80936 */  lhu   $t8, 0x936($t6)
/* AE7E50 80070CB0 57000012 */  bnezl $t8, .L80070CFC
/* AE7E54 80070CB4 AFA40090 */   sw    $a0, 0x90($sp)
/* AE7E58 80070CB8 91C21E14 */  lbu   $v0, 0x1e14($t6)
/* AE7E5C 80070CBC 24010001 */  li    $at, 1
/* AE7E60 80070CC0 14410006 */  bne   $v0, $at, .L80070CDC
/* AE7E64 80070CC4 3C018014 */   lui   $at, %hi(D_8013C7A4)
/* AE7E68 80070CC8 C426C7A4 */  lwc1  $f6, %lo(D_8013C7A4)($at)
/* AE7E6C 80070CCC C48420C0 */  lwc1  $f4, 0x20c0($a0)
/* AE7E70 80070CD0 46062201 */  sub.s $f8, $f4, $f6
/* AE7E74 80070CD4 10000008 */  b     .L80070CF8
/* AE7E78 80070CD8 E48820C0 */   swc1  $f8, 0x20c0($a0)
.L80070CDC:
/* AE7E7C 80070CDC 24010005 */  li    $at, 5
/* AE7E80 80070CE0 14410005 */  bne   $v0, $at, .L80070CF8
/* AE7E84 80070CE4 3C018014 */   lui   $at, %hi(D_8013C7A8)
/* AE7E88 80070CE8 C430C7A8 */  lwc1  $f16, %lo(D_8013C7A8)($at)
/* AE7E8C 80070CEC C48A20C0 */  lwc1  $f10, 0x20c0($a0)
/* AE7E90 80070CF0 46105481 */  sub.s $f18, $f10, $f16
/* AE7E94 80070CF4 E49220C0 */  swc1  $f18, 0x20c0($a0)
.L80070CF8:
/* AE7E98 80070CF8 AFA40090 */  sw    $a0, 0x90($sp)
.L80070CFC:
/* AE7E9C 80070CFC AFAA007C */  sw    $t2, 0x7c($sp)
/* AE7EA0 80070D00 0C01D9B1 */  jal   func_800766C4
/* AE7EA4 80070D04 E7AE0088 */   swc1  $f14, 0x88($sp)
/* AE7EA8 80070D08 0C01D6D1 */  jal   func_80075B44
/* AE7EAC 80070D0C 8FA40090 */   lw    $a0, 0x90($sp)
/* AE7EB0 80070D10 3C0D8016 */  lui   $t5, %hi(gSaveContext) # $t5, 0x8016
/* AE7EB4 80070D14 25ADE660 */  addiu $t5, %lo(gSaveContext) # addiu $t5, $t5, -0x19a0
/* AE7EB8 80070D18 95A21416 */  lhu   $v0, 0x1416($t5)
/* AE7EBC 80070D1C 3401FF00 */  li    $at, 65280
/* AE7EC0 80070D20 8FAA007C */  lw    $t2, 0x7c($sp)
/* AE7EC4 80070D24 0041082A */  slt   $at, $v0, $at
/* AE7EC8 80070D28 14200029 */  bnez  $at, .L80070DD0
/* AE7ECC 80070D2C C7AE0088 */   lwc1  $f14, 0x88($sp)
/* AE7ED0 80070D30 341FFFFF */  li    $ra, 65535
/* AE7ED4 80070D34 13E20026 */  beq   $ra, $v0, .L80070DD0
/* AE7ED8 80070D38 2459FFF0 */   addiu $t9, $v0, -0x10
/* AE7EDC 80070D3C 3C048014 */  lui   $a0, %hi(D_8013C458) # $a0, 0x8014
/* AE7EE0 80070D40 A5B91416 */  sh    $t9, 0x1416($t5)
/* AE7EE4 80070D44 2484C458 */  addiu $a0, %lo(D_8013C458) # addiu $a0, $a0, -0x3ba8
/* AE7EE8 80070D48 3325FFFF */  andi  $a1, $t9, 0xffff
/* AE7EEC 80070D4C AFAA007C */  sw    $t2, 0x7c($sp)
/* AE7EF0 80070D50 0C00084C */  jal   osSyncPrintf
/* AE7EF4 80070D54 E7AE0088 */   swc1  $f14, 0x88($sp)
/* AE7EF8 80070D58 3C0D8016 */  lui   $t5, %hi(gSaveContext) # $t5, 0x8016
/* AE7EFC 80070D5C 25ADE660 */  addiu $t5, %lo(gSaveContext) # addiu $t5, $t5, -0x19a0
/* AE7F00 80070D60 95A21416 */  lhu   $v0, 0x1416($t5)
/* AE7F04 80070D64 3401FF0E */  li    $at, 65294
/* AE7F08 80070D68 8FAA007C */  lw    $t2, 0x7c($sp)
/* AE7F0C 80070D6C 1441000C */  bne   $v0, $at, .L80070DA0
/* AE7F10 80070D70 C7AE0088 */   lwc1  $f14, 0x88($sp)
/* AE7F14 80070D74 24042813 */  li    $a0, 10259
/* AE7F18 80070D78 AFAA007C */  sw    $t2, 0x7c($sp)
/* AE7F1C 80070D7C 0C01E221 */  jal   func_80078884
/* AE7F20 80070D80 E7AE0088 */   swc1  $f14, 0x88($sp)
/* AE7F24 80070D84 3C0D8016 */  lui   $t5, %hi(gSaveContext) # $t5, 0x8016
/* AE7F28 80070D88 25ADE660 */  addiu $t5, %lo(gSaveContext) # addiu $t5, $t5, -0x19a0
/* AE7F2C 80070D8C 340FFFFF */  li    $t7, 65535
/* AE7F30 80070D90 8FAA007C */  lw    $t2, 0x7c($sp)
/* AE7F34 80070D94 C7AE0088 */  lwc1  $f14, 0x88($sp)
/* AE7F38 80070D98 1000000D */  b     .L80070DD0
/* AE7F3C 80070D9C A5AF1416 */   sh    $t7, 0x1416($t5)
.L80070DA0:
/* AE7F40 80070DA0 3401FF0D */  li    $at, 65293
/* AE7F44 80070DA4 1441000A */  bne   $v0, $at, .L80070DD0
/* AE7F48 80070DA8 240428AE */   li    $a0, 10414
/* AE7F4C 80070DAC AFAA007C */  sw    $t2, 0x7c($sp)
/* AE7F50 80070DB0 0C01E233 */  jal   func_800788CC
/* AE7F54 80070DB4 E7AE0088 */   swc1  $f14, 0x88($sp)
/* AE7F58 80070DB8 3C0D8016 */  lui   $t5, %hi(gSaveContext) # $t5, 0x8016
/* AE7F5C 80070DBC 25ADE660 */  addiu $t5, %lo(gSaveContext) # addiu $t5, $t5, -0x19a0
/* AE7F60 80070DC0 3418FFFF */  li    $t8, 65535
/* AE7F64 80070DC4 8FAA007C */  lw    $t2, 0x7c($sp)
/* AE7F68 80070DC8 C7AE0088 */  lwc1  $f14, 0x88($sp)
/* AE7F6C 80070DCC A5B81416 */  sh    $t8, 0x1416($t5)
.L80070DD0:
/* AE7F70 80070DD0 8FAE009C */  lw    $t6, 0x9c($sp)
/* AE7F74 80070DD4 341FFFFF */  li    $ra, 65535
/* AE7F78 80070DD8 95D901D4 */  lhu   $t9, 0x1d4($t6)
/* AE7F7C 80070DDC 5720003A */  bnezl $t9, .L80070EC8
/* AE7F80 80070DE0 8DAF1360 */   lw    $t7, 0x1360($t5)
/* AE7F84 80070DE4 8FAF00A4 */  lw    $t7, 0xa4($sp)
/* AE7F88 80070DE8 8FA200A0 */  lw    $v0, 0xa0($sp)
/* AE7F8C 80070DEC 34018000 */  li    $at, 32768
/* AE7F90 80070DF0 95F80000 */  lhu   $t8, ($t7)
/* AE7F94 80070DF4 00411021 */  addu  $v0, $v0, $at
/* AE7F98 80070DF8 57000033 */  bnezl $t8, .L80070EC8
/* AE7F9C 80070DFC 8DAF1360 */   lw    $t7, 0x1360($t5)
/* AE7FA0 80070E00 8C4E6300 */  lw    $t6, 0x6300($v0)
/* AE7FA4 80070E04 55C00005 */  bnezl $t6, .L80070E1C
/* AE7FA8 80070E08 8DAF135C */   lw    $t7, 0x135c($t5)
/* AE7FAC 80070E0C 90596304 */  lbu   $t9, 0x6304($v0)
/* AE7FB0 80070E10 53200006 */  beql  $t9, $zero, .L80070E2C
/* AE7FB4 80070E14 9618001A */   lhu   $t8, 0x1a($s0)
/* AE7FB8 80070E18 8DAF135C */  lw    $t7, 0x135c($t5)
.L80070E1C:
/* AE7FBC 80070E1C 24010003 */  li    $at, 3
/* AE7FC0 80070E20 55E10029 */  bnel  $t7, $at, .L80070EC8
/* AE7FC4 80070E24 8DAF1360 */   lw    $t7, 0x1360($t5)
/* AE7FC8 80070E28 9618001A */  lhu   $t8, 0x1a($s0)
.L80070E2C:
/* AE7FCC 80070E2C 8FA40090 */  lw    $a0, 0x90($sp)
/* AE7FD0 80070E30 57000025 */  bnezl $t8, .L80070EC8
/* AE7FD4 80070E34 8DAF1360 */   lw    $t7, 0x1360($t5)
/* AE7FD8 80070E38 AFAA007C */  sw    $t2, 0x7c($sp)
/* AE7FDC 80070E3C 0C03034A */  jal   FrameAdvance_IsEnabled
/* AE7FE0 80070E40 E7AE0088 */   swc1  $f14, 0x88($sp)
/* AE7FE4 80070E44 3C0D8016 */  lui   $t5, %hi(gSaveContext) # $t5, 0x8016
/* AE7FE8 80070E48 25ADE660 */  addiu $t5, %lo(gSaveContext) # addiu $t5, $t5, -0x19a0
/* AE7FEC 80070E4C 8FAA007C */  lw    $t2, 0x7c($sp)
/* AE7FF0 80070E50 341FFFFF */  li    $ra, 65535
/* AE7FF4 80070E54 1440001B */  bnez  $v0, .L80070EC4
/* AE7FF8 80070E58 C7AE0088 */   lwc1  $f14, 0x88($sp)
/* AE7FFC 80070E5C 8FAE0040 */  lw    $t6, 0x40($sp)
/* AE8000 80070E60 91D9241B */  lbu   $t9, 0x241b($t6)
/* AE8004 80070E64 53200005 */  beql  $t9, $zero, .L80070E7C
/* AE8008 80070E68 8DB80010 */   lw    $t8, 0x10($t5)
/* AE800C 80070E6C 8DAF135C */  lw    $t7, 0x135c($t5)
/* AE8010 80070E70 51E00015 */  beql  $t7, $zero, .L80070EC8
/* AE8014 80070E74 8DAF1360 */   lw    $t7, 0x1360($t5)
/* AE8018 80070E78 8DB80010 */  lw    $t8, 0x10($t5)
.L80070E7C:
/* AE801C 80070E7C 3C038012 */  lui   $v1, %hi(gTimeSpeed) # $v1, 0x8012
/* AE8020 80070E80 2463FB40 */  addiu $v1, %lo(gTimeSpeed) # addiu $v1, $v1, -0x4c0
/* AE8024 80070E84 13000004 */  beqz  $t8, .L80070E98
/* AE8028 80070E88 00000000 */   nop   
/* AE802C 80070E8C 94620000 */  lhu   $v0, ($v1)
/* AE8030 80070E90 28410190 */  slti  $at, $v0, 0x190
/* AE8034 80070E94 14200007 */  bnez  $at, .L80070EB4
.L80070E98:
/* AE8038 80070E98 3C038012 */   lui   $v1, %hi(gTimeSpeed) # $v1, 0x8012
/* AE803C 80070E9C 2463FB40 */  addiu $v1, %lo(gTimeSpeed) # addiu $v1, $v1, -0x4c0
/* AE8040 80070EA0 94790000 */  lhu   $t9, ($v1)
/* AE8044 80070EA4 95AE000C */  lhu   $t6, 0xc($t5)
/* AE8048 80070EA8 01D97821 */  addu  $t7, $t6, $t9
/* AE804C 80070EAC 10000005 */  b     .L80070EC4
/* AE8050 80070EB0 A5AF000C */   sh    $t7, 0xc($t5)
.L80070EB4:
/* AE8054 80070EB4 95B8000C */  lhu   $t8, 0xc($t5)
/* AE8058 80070EB8 00027040 */  sll   $t6, $v0, 1
/* AE805C 80070EBC 030EC821 */  addu  $t9, $t8, $t6
/* AE8060 80070EC0 A5B9000C */  sh    $t9, 0xc($t5)
.L80070EC4:
/* AE8064 80070EC4 8DAF1360 */  lw    $t7, 0x1360($t5)
.L80070EC8:
/* AE8068 80070EC8 3C038012 */  lui   $v1, %hi(gTimeSpeed) # $v1, 0x8012
/* AE806C 80070ECC 2463FB40 */  addiu $v1, %lo(gTimeSpeed) # addiu $v1, $v1, -0x4c0
/* AE8070 80070ED0 29E10005 */  slti  $at, $t7, 5
/* AE8074 80070ED4 10200004 */  beqz  $at, .L80070EE8
/* AE8078 80070ED8 3C0B8016 */   lui   $t3, %hi(gGameInfo) # $t3, 0x8016
/* AE807C 80070EDC 94780000 */  lhu   $t8, ($v1)
/* AE8080 80070EE0 53000007 */  beql  $t8, $zero, .L80070F00
/* AE8084 80070EE4 95A2000C */   lhu   $v0, 0xc($t5)
.L80070EE8:
/* AE8088 80070EE8 95A2000C */  lhu   $v0, 0xc($t5)
/* AE808C 80070EEC 95AE141A */  lhu   $t6, 0x141a($t5)
/* AE8090 80070EF0 01C2082A */  slt   $at, $t6, $v0
/* AE8094 80070EF4 54200009 */  bnezl $at, .L80070F1C
/* AE8098 80070EF8 A5A2141A */   sh    $v0, 0x141a($t5)
/* AE809C 80070EFC 95A2000C */  lhu   $v0, 0xc($t5)
.L80070F00:
/* AE80A0 80070F00 28410AAB */  slti  $at, $v0, 0xaab
/* AE80A4 80070F04 54200005 */  bnezl $at, .L80070F1C
/* AE80A8 80070F08 A5A2141A */   sh    $v0, 0x141a($t5)
/* AE80AC 80070F0C 94790000 */  lhu   $t9, ($v1)
/* AE80B0 80070F10 07230003 */  bgezl $t9, .L80070F20
/* AE80B4 80070F14 3043FFFF */   andi  $v1, $v0, 0xffff
/* AE80B8 80070F18 A5A2141A */  sh    $v0, 0x141a($t5)
.L80070F1C:
/* AE80BC 80070F1C 3043FFFF */  andi  $v1, $v0, 0xffff
.L80070F20:
/* AE80C0 80070F20 3401C001 */  li    $at, 49153
/* AE80C4 80070F24 0061082A */  slt   $at, $v1, $at
/* AE80C8 80070F28 10200003 */  beqz  $at, .L80070F38
/* AE80CC 80070F2C 256BFA90 */   addiu $t3, %lo(gGameInfo) # addiu $t3, $t3, -0x570
/* AE80D0 80070F30 28614555 */  slti  $at, $v1, 0x4555
/* AE80D4 80070F34 10200003 */  beqz  $at, .L80070F44
.L80070F38:
/* AE80D8 80070F38 240F0001 */   li    $t7, 1
/* AE80DC 80070F3C 10000002 */  b     .L80070F48
/* AE80E0 80070F40 ADAF0010 */   sw    $t7, 0x10($t5)
.L80070F44:
/* AE80E4 80070F44 ADA00010 */  sw    $zero, 0x10($t5)
.L80070F48:
/* AE80E8 80070F48 8D620000 */  lw    $v0, ($t3)
/* AE80EC 80070F4C 3C068014 */  lui   $a2, %hi(D_8013C470) # $a2, 0x8014
/* AE80F0 80070F50 24C6C470 */  addiu $a2, %lo(D_8013C470) # addiu $a2, $a2, -0x3b90
/* AE80F4 80070F54 845800D4 */  lh    $t8, 0xd4($v0)
/* AE80F8 80070F58 8FB90090 */  lw    $t9, 0x90($sp)
/* AE80FC 80070F5C 27A4005C */  addiu $a0, $sp, 0x5c
/* AE8100 80070F60 17000004 */  bnez  $t8, .L80070F74
/* AE8104 80070F64 24070692 */   li    $a3, 1682
/* AE8108 80070F68 844E0858 */  lh    $t6, 0x858($v0)
/* AE810C 80070F6C 51C0003D */  beql  $t6, $zero, .L80071064
/* AE8110 80070F70 920300BF */   lbu   $v1, 0xbf($s0)
.L80070F74:
/* AE8114 80070F74 8F250000 */  lw    $a1, ($t9)
/* AE8118 80070F78 E7AE0088 */  swc1  $f14, 0x88($sp)
/* AE811C 80070F7C AFAA007C */  sw    $t2, 0x7c($sp)
/* AE8120 80070F80 0C031AB1 */  jal   Graph_OpenDisps
/* AE8124 80070F84 AFA5006C */   sw    $a1, 0x6c($sp)
/* AE8128 80070F88 8FAF006C */  lw    $t7, 0x6c($sp)
/* AE812C 80070F8C 8DE402C0 */  lw    $a0, 0x2c0($t7)
/* AE8130 80070F90 0C031B08 */  jal   Graph_GfxPlusOne
/* AE8134 80070F94 AFA40070 */   sw    $a0, 0x70($sp)
/* AE8138 80070F98 8FA6006C */  lw    $a2, 0x6c($sp)
/* AE813C 80070F9C AFA20074 */  sw    $v0, 0x74($sp)
/* AE8140 80070FA0 8FAA007C */  lw    $t2, 0x7c($sp)
/* AE8144 80070FA4 8CC302B0 */  lw    $v1, 0x2b0($a2)
/* AE8148 80070FA8 C7AE0088 */  lwc1  $f14, 0x88($sp)
/* AE814C 80070FAC 3C0EDE00 */  lui   $t6, 0xde00
/* AE8150 80070FB0 24780008 */  addiu $t8, $v1, 8
/* AE8154 80070FB4 ACD802B0 */  sw    $t8, 0x2b0($a2)
/* AE8158 80070FB8 AC6E0000 */  sw    $t6, ($v1)
/* AE815C 80070FBC 8FB90074 */  lw    $t9, 0x74($sp)
/* AE8160 80070FC0 27A50074 */  addiu $a1, $sp, 0x74
/* AE8164 80070FC4 AC790004 */  sw    $t9, 4($v1)
/* AE8168 80070FC8 8FA40090 */  lw    $a0, 0x90($sp)
/* AE816C 80070FCC AFAA007C */  sw    $t2, 0x7c($sp)
/* AE8170 80070FD0 0C01C1C6 */  jal   func_80070718
/* AE8174 80070FD4 E7AE0088 */   swc1  $f14, 0x88($sp)
/* AE8178 80070FD8 8FAF0074 */  lw    $t7, 0x74($sp)
/* AE817C 80070FDC 8FAA007C */  lw    $t2, 0x7c($sp)
/* AE8180 80070FE0 C7AE0088 */  lwc1  $f14, 0x88($sp)
/* AE8184 80070FE4 25F80008 */  addiu $t8, $t7, 8
/* AE8188 80070FE8 AFB80074 */  sw    $t8, 0x74($sp)
/* AE818C 80070FEC 3C0EDF00 */  lui   $t6, 0xdf00
/* AE8190 80070FF0 ADEE0000 */  sw    $t6, ($t7)
/* AE8194 80070FF4 ADE00004 */  sw    $zero, 4($t7)
/* AE8198 80070FF8 8FA50074 */  lw    $a1, 0x74($sp)
/* AE819C 80070FFC 8FA40070 */  lw    $a0, 0x70($sp)
/* AE81A0 80071000 AFAA007C */  sw    $t2, 0x7c($sp)
/* AE81A4 80071004 0C031B0A */  jal   Graph_BranchDlist
/* AE81A8 80071008 E7AE0088 */   swc1  $f14, 0x88($sp)
/* AE81AC 8007100C 8FB90074 */  lw    $t9, 0x74($sp)
/* AE81B0 80071010 8FAF006C */  lw    $t7, 0x6c($sp)
/* AE81B4 80071014 8FAA007C */  lw    $t2, 0x7c($sp)
/* AE81B8 80071018 C7AE0088 */  lwc1  $f14, 0x88($sp)
/* AE81BC 8007101C ADF902C0 */  sw    $t9, 0x2c0($t7)
/* AE81C0 80071020 8FB80090 */  lw    $t8, 0x90($sp)
/* AE81C4 80071024 3C068014 */  lui   $a2, %hi(D_8013C480) # $a2, 0x8014
/* AE81C8 80071028 24C6C480 */  addiu $a2, %lo(D_8013C480) # addiu $a2, $a2, -0x3b80
/* AE81CC 8007102C 8F050000 */  lw    $a1, ($t8)
/* AE81D0 80071030 27A4005C */  addiu $a0, $sp, 0x5c
/* AE81D4 80071034 2407069A */  li    $a3, 1690
/* AE81D8 80071038 AFAA007C */  sw    $t2, 0x7c($sp)
/* AE81DC 8007103C 0C031AD5 */  jal   Graph_CloseDisps
/* AE81E0 80071040 E7AE0088 */   swc1  $f14, 0x88($sp)
/* AE81E4 80071044 3C0B8016 */  lui   $t3, %hi(gGameInfo) # $t3, 0x8016
/* AE81E8 80071048 3C0D8016 */  lui   $t5, %hi(gSaveContext) # $t5, 0x8016
/* AE81EC 8007104C 25ADE660 */  addiu $t5, %lo(gSaveContext) # addiu $t5, $t5, -0x19a0
/* AE81F0 80071050 256BFA90 */  addiu $t3, %lo(gGameInfo) # addiu $t3, $t3, -0x570
/* AE81F4 80071054 8FAA007C */  lw    $t2, 0x7c($sp)
/* AE81F8 80071058 341FFFFF */  li    $ra, 65535
/* AE81FC 8007105C C7AE0088 */  lwc1  $f14, 0x88($sp)
/* AE8200 80071060 920300BF */  lbu   $v1, 0xbf($s0)
.L80071064:
/* AE8204 80071064 240400FF */  li    $a0, 255
/* AE8208 80071068 10830016 */  beq   $a0, $v1, .L800710C4
/* AE820C 8007106C 00601025 */   move  $v0, $v1
/* AE8210 80071070 920E00DC */  lbu   $t6, 0xdc($s0)
/* AE8214 80071074 24010002 */  li    $at, 2
/* AE8218 80071078 51C10013 */  beql  $t6, $at, .L800710C8
/* AE821C 8007107C 3C013F80 */   lui   $at, 0x3f80
/* AE8220 80071080 920600BD */  lbu   $a2, 0xbd($s0)
/* AE8224 80071084 3C013F80 */  lui   $at, 0x3f80
/* AE8228 80071088 5066000F */  beql  $v1, $a2, .L800710C8
/* AE822C 8007108C 3C013F80 */   li    $at, 0x3F800000 # 0.000000
/* AE8230 80071090 44811000 */  mtc1  $at, $f2
/* AE8234 80071094 C60400D8 */  lwc1  $f4, 0xd8($s0)
/* AE8238 80071098 28610020 */  slti  $at, $v1, 0x20
/* AE823C 8007109C 4604103E */  c.le.s $f2, $f4
/* AE8240 800710A0 00000000 */  nop   
/* AE8244 800710A4 45020008 */  bc1fl .L800710C8
/* AE8248 800710A8 3C013F80 */   lui   $at, 0x3f80
/* AE824C 800710AC 50200006 */  beql  $at, $zero, .L800710C8
/* AE8250 800710B0 3C013F80 */   li    $at, 0x3F800000 # 0.000000
/* AE8254 800710B4 44803000 */  mtc1  $zero, $f6
/* AE8258 800710B8 A20600BE */  sb    $a2, 0xbe($s0)
/* AE825C 800710BC A20300BD */  sb    $v1, 0xbd($s0)
/* AE8260 800710C0 E60600D8 */  swc1  $f6, 0xd8($s0)
.L800710C4:
/* AE8264 800710C4 3C013F80 */  li    $at, 0x3F800000 # 0.000000
.L800710C8:
/* AE8268 800710C8 44811000 */  mtc1  $at, $f2
/* AE826C 800710CC 240100FE */  li    $at, 254
/* AE8270 800710D0 50410664 */  beql  $v0, $at, .L80072A64
/* AE8274 800710D4 240F0001 */   li    $t7, 1
/* AE8278 800710D8 9219001E */  lbu   $t9, 0x1e($s0)
/* AE827C 800710DC 57200471 */  bnezl $t9, .L800722A4
/* AE8280 800710E0 920E00BC */   lbu   $t6, 0xbc($s0)
/* AE8284 800710E4 1482046E */  bne   $a0, $v0, .L800722A0
/* AE8288 800710E8 3C0E8012 */   lui   $t6, %hi(D_8011FB48) # $t6, 0x8012
/* AE828C 800710EC 920F001F */  lbu   $t7, 0x1f($s0)
/* AE8290 800710F0 95AC141A */  lhu   $t4, 0x141a($t5)
/* AE8294 800710F4 25CEFB48 */  addiu $t6, %lo(D_8011FB48) # addiu $t6, $t6, -0x4b8
/* AE8298 800710F8 000FC080 */  sll   $t8, $t7, 2
/* AE829C 800710FC 030FC021 */  addu  $t8, $t8, $t7
/* AE82A0 80071100 0018C080 */  sll   $t8, $t8, 2
/* AE82A4 80071104 030FC021 */  addu  $t8, $t8, $t7
/* AE82A8 80071108 0018C040 */  sll   $t8, $t8, 1
/* AE82AC 8007110C 030E3021 */  addu  $a2, $t8, $t6
/* AE82B0 80071110 00002025 */  move  $a0, $zero
/* AE82B4 80071114 24090006 */  li    $t1, 6
/* AE82B8 80071118 01802825 */  move  $a1, $t4
.L8007111C:
/* AE82BC 8007111C 00890019 */  multu $a0, $t1
/* AE82C0 80071120 24840001 */  addiu $a0, $a0, 1
/* AE82C4 80071124 3084FFFF */  andi  $a0, $a0, 0xffff
/* AE82C8 80071128 00004012 */  mflo  $t0
/* AE82CC 8007112C 00C81821 */  addu  $v1, $a2, $t0
/* AE82D0 80071130 94670000 */  lhu   $a3, ($v1)
/* AE82D4 80071134 00A7082A */  slt   $at, $a1, $a3
/* AE82D8 80071138 54200455 */  bnezl $at, .L80072290
/* AE82DC 8007113C 28810007 */   slti  $at, $a0, 7
/* AE82E0 80071140 94790002 */  lhu   $t9, 2($v1)
/* AE82E4 80071144 00B9082A */  slt   $at, $a1, $t9
/* AE82E8 80071148 14200003 */  bnez  $at, .L80071158
/* AE82EC 8007114C AFB90028 */   sw    $t9, 0x28($sp)
/* AE82F0 80071150 57F9044F */  bnel  $ra, $t9, .L80072290
/* AE82F4 80071154 28810007 */   slti  $at, $a0, 7
.L80071158:
/* AE82F8 80071158 3186FFFF */  andi  $a2, $t4, 0xffff
/* AE82FC 8007115C 97A4002A */  lhu   $a0, 0x2a($sp)
/* AE8300 80071160 30E5FFFF */  andi  $a1, $a3, 0xffff
/* AE8304 80071164 AFA80034 */  sw    $t0, 0x34($sp)
/* AE8308 80071168 AFAA007C */  sw    $t2, 0x7c($sp)
/* AE830C 8007116C 0C01BE4F */  jal   func_8006F93C
/* AE8310 80071170 E7AE0088 */   swc1  $f14, 0x88($sp)
/* AE8314 80071174 920F001F */  lbu   $t7, 0x1f($s0)
/* AE8318 80071178 8FA80034 */  lw    $t0, 0x34($sp)
/* AE831C 8007117C 3C098012 */  lui   $t1, %hi(D_8011FB48) # $t1, 0x8012
/* AE8320 80071180 000FC080 */  sll   $t8, $t7, 2
/* AE8324 80071184 030FC021 */  addu  $t8, $t8, $t7
/* AE8328 80071188 0018C080 */  sll   $t8, $t8, 2
/* AE832C 8007118C 030FC021 */  addu  $t8, $t8, $t7
/* AE8330 80071190 2529FB48 */  addiu $t1, %lo(D_8011FB48) # addiu $t1, $t1, -0x4b8
/* AE8334 80071194 0018C040 */  sll   $t8, $t8, 1
/* AE8338 80071198 01387021 */  addu  $t6, $t1, $t8
/* AE833C 8007119C 01C8C821 */  addu  $t9, $t6, $t0
/* AE8340 800711A0 932F0004 */  lbu   $t7, 4($t9)
/* AE8344 800711A4 3C018012 */  lui   $at, %hi(D_8011FDCC) # $at, 0x8012
/* AE8348 800711A8 3C0D8016 */  lui   $t5, %hi(gSaveContext) # $t5, 0x8016
/* AE834C 800711AC 31F80003 */  andi  $t8, $t7, 3
/* AE8350 800711B0 A038FDCC */  sb    $t8, %lo(D_8011FDCC)($at)
/* AE8354 800711B4 920E001F */  lbu   $t6, 0x1f($s0)
/* AE8358 800711B8 3C018012 */  lui   $at,  %hi(D_8011FDD0)
/* AE835C 800711BC 25ADE660 */  addiu $t5, %lo(gSaveContext) # addiu $t5, $t5, -0x19a0
/* AE8360 800711C0 000EC880 */  sll   $t9, $t6, 2
/* AE8364 800711C4 032EC821 */  addu  $t9, $t9, $t6
/* AE8368 800711C8 0019C880 */  sll   $t9, $t9, 2
/* AE836C 800711CC 032EC821 */  addu  $t9, $t9, $t6
/* AE8370 800711D0 0019C840 */  sll   $t9, $t9, 1
/* AE8374 800711D4 01397821 */  addu  $t7, $t1, $t9
/* AE8378 800711D8 01E8C021 */  addu  $t8, $t7, $t0
/* AE837C 800711DC 930E0005 */  lbu   $t6, 5($t8)
/* AE8380 800711E0 8FAA007C */  lw    $t2, 0x7c($sp)
/* AE8384 800711E4 C7AE0088 */  lwc1  $f14, 0x88($sp)
/* AE8388 800711E8 31D90003 */  andi  $t9, $t6, 3
/* AE838C 800711EC A039FDD0 */  sb    $t9, %lo(D_8011FDD0)($at)
/* AE8390 800711F0 3C018012 */  lui   $at, %hi(D_8011FDD4)
/* AE8394 800711F4 E420FDD4 */  swc1  $f0, %lo(D_8011FDD4)($at)
/* AE8398 800711F8 920F0021 */  lbu   $t7, 0x21($s0)
/* AE839C 800711FC 46000086 */  mov.s $f2, $f0
/* AE83A0 80071200 51E0001B */  beql  $t7, $zero, .L80071270
/* AE83A4 80071204 00001025 */   move  $v0, $zero
/* AE83A8 80071208 96180024 */  lhu   $t8, 0x24($s0)
/* AE83AC 8007120C 3C014F80 */  li    $at, 0x4F800000 # 0.000000
/* AE83B0 80071210 44984000 */  mtc1  $t8, $f8
/* AE83B4 80071214 07010004 */  bgez  $t8, .L80071228
/* AE83B8 80071218 46804320 */   cvt.s.w $f12, $f8
/* AE83BC 8007121C 44815000 */  mtc1  $at, $f10
/* AE83C0 80071220 00000000 */  nop   
/* AE83C4 80071224 460A6300 */  add.s $f12, $f12, $f10
.L80071228:
/* AE83C8 80071228 96020022 */  lhu   $v0, 0x22($s0)
/* AE83CC 8007122C 3C014F80 */  li    $at, 0x4F800000 # 0.000000
/* AE83D0 80071230 44828000 */  mtc1  $v0, $f16
/* AE83D4 80071234 244EFFFF */  addiu $t6, $v0, -1
/* AE83D8 80071238 04410004 */  bgez  $v0, .L8007124C
/* AE83DC 8007123C 468084A0 */   cvt.s.w $f18, $f16
/* AE83E0 80071240 44812000 */  mtc1  $at, $f4
/* AE83E4 80071244 00000000 */  nop   
/* AE83E8 80071248 46049480 */  add.s $f18, $f18, $f4
.L8007124C:
/* AE83EC 8007124C 46126181 */  sub.s $f6, $f12, $f18
/* AE83F0 80071250 31D9FFFF */  andi  $t9, $t6, 0xffff
/* AE83F4 80071254 A60E0022 */  sh    $t6, 0x22($s0)
/* AE83F8 80071258 1F200004 */  bgtz  $t9, .L8007126C
/* AE83FC 8007125C 460C3383 */   div.s $f14, $f6, $f12
/* AE8400 80071260 920F0020 */  lbu   $t7, 0x20($s0)
/* AE8404 80071264 A2000021 */  sb    $zero, 0x21($s0)
/* AE8408 80071268 A20F001F */  sb    $t7, 0x1f($s0)
.L8007126C:
/* AE840C 8007126C 00001025 */  move  $v0, $zero
.L80071270:
/* AE8410 80071270 9218001F */  lbu   $t8, 0x1f($s0)
/* AE8414 80071274 3C014F80 */  li    $at, 0x4F800000 # 0.000000
/* AE8418 80071278 00187080 */  sll   $t6, $t8, 2
/* AE841C 8007127C 01D87021 */  addu  $t6, $t6, $t8
/* AE8420 80071280 000E7080 */  sll   $t6, $t6, 2
/* AE8424 80071284 01D87021 */  addu  $t6, $t6, $t8
/* AE8428 80071288 000E7040 */  sll   $t6, $t6, 1
/* AE842C 8007128C 012EC821 */  addu  $t9, $t1, $t6
/* AE8430 80071290 03281821 */  addu  $v1, $t9, $t0
/* AE8434 80071294 906F0004 */  lbu   $t7, 4($v1)
/* AE8438 80071298 000FC080 */  sll   $t8, $t7, 2
/* AE843C 8007129C 030FC023 */  subu  $t8, $t8, $t7
/* AE8440 800712A0 0018C080 */  sll   $t8, $t8, 2
/* AE8444 800712A4 030FC023 */  subu  $t8, $t8, $t7
/* AE8448 800712A8 0018C040 */  sll   $t8, $t8, 1
/* AE844C 800712AC 01587021 */  addu  $t6, $t2, $t8
/* AE8450 800712B0 01C2C821 */  addu  $t9, $t6, $v0
/* AE8454 800712B4 93250000 */  lbu   $a1, ($t9)
/* AE8458 800712B8 44854000 */  mtc1  $a1, $f8
/* AE845C 800712BC 04A10004 */  bgez  $a1, .L800712D0
/* AE8460 800712C0 468042A0 */   cvt.s.w $f10, $f8
/* AE8464 800712C4 44818000 */  mtc1  $at, $f16
/* AE8468 800712C8 00000000 */  nop   
/* AE846C 800712CC 46105280 */  add.s $f10, $f10, $f16
.L800712D0:
/* AE8470 800712D0 906F0005 */  lbu   $t7, 5($v1)
/* AE8474 800712D4 3C014F00 */  li    $at, 0x4F000000 # 0.000000
/* AE8478 800712D8 000FC080 */  sll   $t8, $t7, 2
/* AE847C 800712DC 030FC023 */  subu  $t8, $t8, $t7
/* AE8480 800712E0 0018C080 */  sll   $t8, $t8, 2
/* AE8484 800712E4 030FC023 */  subu  $t8, $t8, $t7
/* AE8488 800712E8 0018C040 */  sll   $t8, $t8, 1
/* AE848C 800712EC 01587021 */  addu  $t6, $t2, $t8
/* AE8490 800712F0 01C2C821 */  addu  $t9, $t6, $v0
/* AE8494 800712F4 932F0000 */  lbu   $t7, ($t9)
/* AE8498 800712F8 24190001 */  li    $t9, 1
/* AE849C 800712FC 01E5C023 */  subu  $t8, $t7, $a1
/* AE84A0 80071300 44982000 */  mtc1  $t8, $f4
/* AE84A4 80071304 00000000 */  nop   
/* AE84A8 80071308 468024A0 */  cvt.s.w $f18, $f4
/* AE84AC 8007130C 46009182 */  mul.s $f6, $f18, $f0
/* AE84B0 80071310 46065200 */  add.s $f8, $f10, $f6
/* AE84B4 80071314 444EF800 */  cfc1  $t6, $31
/* AE84B8 80071318 44D9F800 */  ctc1  $t9, $31
/* AE84BC 8007131C 00000000 */  nop   
/* AE84C0 80071320 46004424 */  cvt.w.s $f16, $f8
/* AE84C4 80071324 4459F800 */  cfc1  $t9, $31
/* AE84C8 80071328 00000000 */  nop   
/* AE84CC 8007132C 33390078 */  andi  $t9, $t9, 0x78
/* AE84D0 80071330 53200013 */  beql  $t9, $zero, .L80071380
/* AE84D4 80071334 44198000 */   mfc1  $t9, $f16
/* AE84D8 80071338 44818000 */  mtc1  $at, $f16
/* AE84DC 8007133C 24190001 */  li    $t9, 1
/* AE84E0 80071340 46104401 */  sub.s $f16, $f8, $f16
/* AE84E4 80071344 44D9F800 */  ctc1  $t9, $31
/* AE84E8 80071348 00000000 */  nop   
/* AE84EC 8007134C 46008424 */  cvt.w.s $f16, $f16
/* AE84F0 80071350 4459F800 */  cfc1  $t9, $31
/* AE84F4 80071354 00000000 */  nop   
/* AE84F8 80071358 33390078 */  andi  $t9, $t9, 0x78
/* AE84FC 8007135C 17200005 */  bnez  $t9, .L80071374
/* AE8500 80071360 00000000 */   nop   
/* AE8504 80071364 44198000 */  mfc1  $t9, $f16
/* AE8508 80071368 3C018000 */  lui   $at, 0x8000
/* AE850C 8007136C 10000007 */  b     .L8007138C
/* AE8510 80071370 0321C825 */   or    $t9, $t9, $at
.L80071374:
/* AE8514 80071374 10000005 */  b     .L8007138C
/* AE8518 80071378 2419FFFF */   li    $t9, -1
/* AE851C 8007137C 44198000 */  mfc1  $t9, $f16
.L80071380:
/* AE8520 80071380 00000000 */  nop   
/* AE8524 80071384 0720FFFB */  bltz  $t9, .L80071374
/* AE8528 80071388 00000000 */   nop   
.L8007138C:
/* AE852C 8007138C A3B90050 */  sb    $t9, 0x50($sp)
/* AE8530 80071390 920F0020 */  lbu   $t7, 0x20($s0)
/* AE8534 80071394 44CEF800 */  ctc1  $t6, $31
/* AE8538 80071398 3C014F80 */  li    $at, 0x4F800000 # 0.000000
/* AE853C 8007139C 000FC080 */  sll   $t8, $t7, 2
/* AE8540 800713A0 030FC021 */  addu  $t8, $t8, $t7
/* AE8544 800713A4 0018C080 */  sll   $t8, $t8, 2
/* AE8548 800713A8 030FC021 */  addu  $t8, $t8, $t7
/* AE854C 800713AC 0018C040 */  sll   $t8, $t8, 1
/* AE8550 800713B0 01387021 */  addu  $t6, $t1, $t8
/* AE8554 800713B4 01C82021 */  addu  $a0, $t6, $t0
/* AE8558 800713B8 908F0004 */  lbu   $t7, 4($a0)
/* AE855C 800713BC 000FC080 */  sll   $t8, $t7, 2
/* AE8560 800713C0 030FC023 */  subu  $t8, $t8, $t7
/* AE8564 800713C4 0018C080 */  sll   $t8, $t8, 2
/* AE8568 800713C8 030FC023 */  subu  $t8, $t8, $t7
/* AE856C 800713CC 0018C040 */  sll   $t8, $t8, 1
/* AE8570 800713D0 01587021 */  addu  $t6, $t2, $t8
/* AE8574 800713D4 01C27821 */  addu  $t7, $t6, $v0
/* AE8578 800713D8 91E60000 */  lbu   $a2, ($t7)
/* AE857C 800713DC 44862000 */  mtc1  $a2, $f4
/* AE8580 800713E0 04C10004 */  bgez  $a2, .L800713F4
/* AE8584 800713E4 468024A0 */   cvt.s.w $f18, $f4
/* AE8588 800713E8 44815000 */  mtc1  $at, $f10
/* AE858C 800713EC 00000000 */  nop   
/* AE8590 800713F0 460A9480 */  add.s $f18, $f18, $f10
.L800713F4:
/* AE8594 800713F4 90980005 */  lbu   $t8, 5($a0)
/* AE8598 800713F8 3C014F00 */  li    $at, 0x4F000000 # 0.000000
/* AE859C 800713FC 00187080 */  sll   $t6, $t8, 2
/* AE85A0 80071400 01D87023 */  subu  $t6, $t6, $t8
/* AE85A4 80071404 000E7080 */  sll   $t6, $t6, 2
/* AE85A8 80071408 01D87023 */  subu  $t6, $t6, $t8
/* AE85AC 8007140C 000E7040 */  sll   $t6, $t6, 1
/* AE85B0 80071410 014E7821 */  addu  $t7, $t2, $t6
/* AE85B4 80071414 01E2C021 */  addu  $t8, $t7, $v0
/* AE85B8 80071418 930E0000 */  lbu   $t6, ($t8)
/* AE85BC 8007141C 01C67823 */  subu  $t7, $t6, $a2
/* AE85C0 80071420 448F3000 */  mtc1  $t7, $f6
/* AE85C4 80071424 240E0001 */  li    $t6, 1
/* AE85C8 80071428 332F00FF */  andi  $t7, $t9, 0xff
/* AE85CC 8007142C 46803220 */  cvt.s.w $f8, $f6
/* AE85D0 80071430 46004402 */  mul.s $f16, $f8, $f0
/* AE85D4 80071434 46109100 */  add.s $f4, $f18, $f16
/* AE85D8 80071438 4458F800 */  cfc1  $t8, $31
/* AE85DC 8007143C 44CEF800 */  ctc1  $t6, $31
/* AE85E0 80071440 00000000 */  nop   
/* AE85E4 80071444 460022A4 */  cvt.w.s $f10, $f4
/* AE85E8 80071448 444EF800 */  cfc1  $t6, $31
/* AE85EC 8007144C 00000000 */  nop   
/* AE85F0 80071450 31CE0078 */  andi  $t6, $t6, 0x78
/* AE85F4 80071454 51C00013 */  beql  $t6, $zero, .L800714A4
/* AE85F8 80071458 440E5000 */   mfc1  $t6, $f10
/* AE85FC 8007145C 44815000 */  mtc1  $at, $f10
/* AE8600 80071460 240E0001 */  li    $t6, 1
/* AE8604 80071464 460A2281 */  sub.s $f10, $f4, $f10
/* AE8608 80071468 44CEF800 */  ctc1  $t6, $31
/* AE860C 8007146C 00000000 */  nop   
/* AE8610 80071470 460052A4 */  cvt.w.s $f10, $f10
/* AE8614 80071474 444EF800 */  cfc1  $t6, $31
/* AE8618 80071478 00000000 */  nop   
/* AE861C 8007147C 31CE0078 */  andi  $t6, $t6, 0x78
/* AE8620 80071480 15C00005 */  bnez  $t6, .L80071498
/* AE8624 80071484 00000000 */   nop   
/* AE8628 80071488 440E5000 */  mfc1  $t6, $f10
/* AE862C 8007148C 3C018000 */  li    $at, 0x80000000 # 0.000000
/* AE8630 80071490 10000007 */  b     .L800714B0
/* AE8634 80071494 01C17025 */   or    $t6, $t6, $at
.L80071498:
/* AE8638 80071498 10000005 */  b     .L800714B0
/* AE863C 8007149C 240EFFFF */   li    $t6, -1
/* AE8640 800714A0 440E5000 */  mfc1  $t6, $f10
.L800714A4:
/* AE8644 800714A4 00000000 */  nop   
/* AE8648 800714A8 05C0FFFB */  bltz  $t6, .L80071498
/* AE864C 800714AC 00000000 */   nop   
.L800714B0:
/* AE8650 800714B0 44D8F800 */  ctc1  $t8, $31
/* AE8654 800714B4 448F3000 */  mtc1  $t7, $f6
/* AE8658 800714B8 A3AE0051 */  sb    $t6, 0x51($sp)
/* AE865C 800714BC 05E10005 */  bgez  $t7, .L800714D4
/* AE8660 800714C0 46803220 */   cvt.s.w $f8, $f6
/* AE8664 800714C4 3C014F80 */  li    $at, 0x4F800000 # 0.000000
/* AE8668 800714C8 44819000 */  mtc1  $at, $f18
/* AE866C 800714CC 00000000 */  nop   
/* AE8670 800714D0 46124200 */  add.s $f8, $f8, $f18
.L800714D4:
/* AE8674 800714D4 31D800FF */  andi  $t8, $t6, 0xff
/* AE8678 800714D8 332F00FF */  andi  $t7, $t9, 0xff
/* AE867C 800714DC 030F7023 */  subu  $t6, $t8, $t7
/* AE8680 800714E0 448E8000 */  mtc1  $t6, $f16
/* AE8684 800714E4 24180001 */  li    $t8, 1
/* AE8688 800714E8 02027821 */  addu  $t7, $s0, $v0
/* AE868C 800714EC 46808120 */  cvt.s.w $f4, $f16
/* AE8690 800714F0 24420001 */  addiu $v0, $v0, 1
/* AE8694 800714F4 3042FFFF */  andi  $v0, $v0, 0xffff
/* AE8698 800714F8 3C014F00 */  li    $at, 0x4F000000 # 0.000000
/* AE869C 800714FC 460E2282 */  mul.s $f10, $f4, $f14
/* AE86A0 80071500 460A4180 */  add.s $f6, $f8, $f10
/* AE86A4 80071504 4459F800 */  cfc1  $t9, $31
/* AE86A8 80071508 44D8F800 */  ctc1  $t8, $31
/* AE86AC 8007150C 00000000 */  nop   
/* AE86B0 80071510 460034A4 */  cvt.w.s $f18, $f6
/* AE86B4 80071514 4458F800 */  cfc1  $t8, $31
/* AE86B8 80071518 00000000 */  nop   
/* AE86BC 8007151C 33180078 */  andi  $t8, $t8, 0x78
/* AE86C0 80071520 53000013 */  beql  $t8, $zero, .L80071570
/* AE86C4 80071524 44189000 */   mfc1  $t8, $f18
/* AE86C8 80071528 44819000 */  mtc1  $at, $f18
/* AE86CC 8007152C 24180001 */  li    $t8, 1
/* AE86D0 80071530 46123481 */  sub.s $f18, $f6, $f18
/* AE86D4 80071534 44D8F800 */  ctc1  $t8, $31
/* AE86D8 80071538 00000000 */  nop   
/* AE86DC 8007153C 460094A4 */  cvt.w.s $f18, $f18
/* AE86E0 80071540 4458F800 */  cfc1  $t8, $31
/* AE86E4 80071544 00000000 */  nop   
/* AE86E8 80071548 33180078 */  andi  $t8, $t8, 0x78
/* AE86EC 8007154C 17000005 */  bnez  $t8, .L80071564
/* AE86F0 80071550 00000000 */   nop   
/* AE86F4 80071554 44189000 */  mfc1  $t8, $f18
/* AE86F8 80071558 3C018000 */  lui   $at, 0x8000
/* AE86FC 8007155C 10000007 */  b     .L8007157C
/* AE8700 80071560 0301C025 */   or    $t8, $t8, $at
.L80071564:
/* AE8704 80071564 10000005 */  b     .L8007157C
/* AE8708 80071568 2418FFFF */   li    $t8, -1
/* AE870C 8007156C 44189000 */  mfc1  $t8, $f18
.L80071570:
/* AE8710 80071570 00000000 */  nop   
/* AE8714 80071574 0700FFFB */  bltz  $t8, .L80071564
/* AE8718 80071578 00000000 */   nop   
.L8007157C:
/* AE871C 8007157C 28410003 */  slti  $at, $v0, 3
/* AE8720 80071580 44D9F800 */  ctc1  $t9, $31
/* AE8724 80071584 1420FF3A */  bnez  $at, .L80071270
/* AE8728 80071588 A1F800C0 */   sb    $t8, 0xc0($t7)
/* AE872C 8007158C 95A6000C */  lhu   $a2, 0xc($t5)
/* AE8730 80071590 24018000 */  li    $at, -32768
/* AE8734 80071594 AFA80034 */  sw    $t0, 0x34($sp)
/* AE8738 80071598 00C12021 */  addu  $a0, $a2, $at
/* AE873C 8007159C 00042400 */  sll   $a0, $a0, 0x10
/* AE8740 800715A0 00042403 */  sra   $a0, $a0, 0x10
/* AE8744 800715A4 AFAA007C */  sw    $t2, 0x7c($sp)
/* AE8748 800715A8 E7A2008C */  swc1  $f2, 0x8c($sp)
/* AE874C 800715AC 0C01DE1C */  jal   Math_SinS
/* AE8750 800715B0 E7AE0088 */   swc1  $f14, 0x88($sp)
/* AE8754 800715B4 3C0142F0 */  li    $at, 0x42F00000 # 0.000000
/* AE8758 800715B8 44818000 */  mtc1  $at, $f16
/* AE875C 800715BC 3C0D8016 */  lui   $t5, %hi(gSaveContext) # $t5, 0x8016
/* AE8760 800715C0 25ADE660 */  addiu $t5, %lo(gSaveContext) # addiu $t5, $t5, -0x19a0
/* AE8764 800715C4 46100102 */  mul.s $f4, $f0, $f16
/* AE8768 800715C8 24018000 */  li    $at, -32768
/* AE876C 800715CC 46002207 */  neg.s $f8, $f4
/* AE8770 800715D0 4600428D */  trunc.w.s $f10, $f8
/* AE8774 800715D4 44195000 */  mfc1  $t9, $f10
/* AE8778 800715D8 00000000 */  nop   
/* AE877C 800715DC A21900C3 */  sb    $t9, 0xc3($s0)
/* AE8780 800715E0 95A6000C */  lhu   $a2, 0xc($t5)
/* AE8784 800715E4 00C12021 */  addu  $a0, $a2, $at
/* AE8788 800715E8 00042400 */  sll   $a0, $a0, 0x10
/* AE878C 800715EC 0C01DE0D */  jal   Math_CosS
/* AE8790 800715F0 00042403 */   sra   $a0, $a0, 0x10
/* AE8794 800715F4 3C0142F0 */  li    $at, 0x42F00000 # 0.000000
/* AE8798 800715F8 44813000 */  mtc1  $at, $f6
/* AE879C 800715FC 3C0D8016 */  lui   $t5, %hi(gSaveContext) # $t5, 0x8016
/* AE87A0 80071600 25ADE660 */  addiu $t5, %lo(gSaveContext) # addiu $t5, $t5, -0x19a0
/* AE87A4 80071604 46060482 */  mul.s $f18, $f0, $f6
/* AE87A8 80071608 24018000 */  li    $at, -32768
/* AE87AC 8007160C 4600940D */  trunc.w.s $f16, $f18
/* AE87B0 80071610 440F8000 */  mfc1  $t7, $f16
/* AE87B4 80071614 00000000 */  nop   
/* AE87B8 80071618 A20F00C4 */  sb    $t7, 0xc4($s0)
/* AE87BC 8007161C 95A6000C */  lhu   $a2, 0xc($t5)
/* AE87C0 80071620 00C12021 */  addu  $a0, $a2, $at
/* AE87C4 80071624 00042400 */  sll   $a0, $a0, 0x10
/* AE87C8 80071628 0C01DE0D */  jal   Math_CosS
/* AE87CC 8007162C 00042403 */   sra   $a0, $a0, 0x10
/* AE87D0 80071630 3C0141A0 */  li    $at, 0x41A00000 # 0.000000
/* AE87D4 80071634 44812000 */  mtc1  $at, $f4
/* AE87D8 80071638 821800C3 */  lb    $t8, 0xc3($s0)
/* AE87DC 8007163C 8FA80034 */  lw    $t0, 0x34($sp)
/* AE87E0 80071640 46040202 */  mul.s $f8, $f0, $f4
/* AE87E4 80071644 8FAA007C */  lw    $t2, 0x7c($sp)
/* AE87E8 80071648 C7A2008C */  lwc1  $f2, 0x8c($sp)
/* AE87EC 8007164C C7AE0088 */  lwc1  $f14, 0x88($sp)
/* AE87F0 80071650 00187823 */  negu  $t7, $t8
/* AE87F4 80071654 820E00C4 */  lb    $t6, 0xc4($s0)
/* AE87F8 80071658 A20F00C9 */  sb    $t7, 0xc9($s0)
/* AE87FC 8007165C 4600428D */  trunc.w.s $f10, $f8
/* AE8800 80071660 3C098012 */  lui   $t1, %hi(D_8011FB48) # $t1, 0x8012
/* AE8804 80071664 3C0B8016 */  lui   $t3, %hi(gGameInfo) # $t3, 0x8016
/* AE8808 80071668 256BFA90 */  addiu $t3, %lo(gGameInfo) # addiu $t3, $t3, -0x570
/* AE880C 8007166C 44195000 */  mfc1  $t9, $f10
/* AE8810 80071670 2529FB48 */  addiu $t1, %lo(D_8011FB48) # addiu $t1, $t1, -0x4b8
/* AE8814 80071674 00001025 */  move  $v0, $zero
/* AE8818 80071678 A21900C5 */  sb    $t9, 0xc5($s0)
/* AE881C 8007167C 821800C5 */  lb    $t8, 0xc5($s0)
/* AE8820 80071680 000EC823 */  negu  $t9, $t6
/* AE8824 80071684 A21900CA */  sb    $t9, 0xca($s0)
/* AE8828 80071688 00187823 */  negu  $t7, $t8
/* AE882C 8007168C A20F00CB */  sb    $t7, 0xcb($s0)
.L80071690:
/* AE8830 80071690 920E001F */  lbu   $t6, 0x1f($s0)
/* AE8834 80071694 3C014F80 */  li    $at, 0x4F800000 # 0.000000
/* AE8838 80071698 02023821 */  addu  $a3, $s0, $v0
/* AE883C 8007169C 000EC880 */  sll   $t9, $t6, 2
/* AE8840 800716A0 032EC821 */  addu  $t9, $t9, $t6
/* AE8844 800716A4 0019C880 */  sll   $t9, $t9, 2
/* AE8848 800716A8 032EC821 */  addu  $t9, $t9, $t6
/* AE884C 800716AC 0019C840 */  sll   $t9, $t9, 1
/* AE8850 800716B0 0139C021 */  addu  $t8, $t1, $t9
/* AE8854 800716B4 03081821 */  addu  $v1, $t8, $t0
/* AE8858 800716B8 906F0004 */  lbu   $t7, 4($v1)
/* AE885C 800716BC 000F7080 */  sll   $t6, $t7, 2
/* AE8860 800716C0 01CF7023 */  subu  $t6, $t6, $t7
/* AE8864 800716C4 000E7080 */  sll   $t6, $t6, 2
/* AE8868 800716C8 01CF7023 */  subu  $t6, $t6, $t7
/* AE886C 800716CC 000E7040 */  sll   $t6, $t6, 1
/* AE8870 800716D0 014EC821 */  addu  $t9, $t2, $t6
/* AE8874 800716D4 0322C021 */  addu  $t8, $t9, $v0
/* AE8878 800716D8 93050006 */  lbu   $a1, 6($t8)
/* AE887C 800716DC 44853000 */  mtc1  $a1, $f6
/* AE8880 800716E0 04A10004 */  bgez  $a1, .L800716F4
/* AE8884 800716E4 468034A0 */   cvt.s.w $f18, $f6
/* AE8888 800716E8 44818000 */  mtc1  $at, $f16
/* AE888C 800716EC 00000000 */  nop   
/* AE8890 800716F0 46109480 */  add.s $f18, $f18, $f16
.L800716F4:
/* AE8894 800716F4 906F0005 */  lbu   $t7, 5($v1)
/* AE8898 800716F8 3C014F00 */  li    $at, 0x4F000000 # 0.000000
/* AE889C 800716FC 000F7080 */  sll   $t6, $t7, 2
/* AE88A0 80071700 01CF7023 */  subu  $t6, $t6, $t7
/* AE88A4 80071704 000E7080 */  sll   $t6, $t6, 2
/* AE88A8 80071708 01CF7023 */  subu  $t6, $t6, $t7
/* AE88AC 8007170C 000E7040 */  sll   $t6, $t6, 1
/* AE88B0 80071710 014EC821 */  addu  $t9, $t2, $t6
/* AE88B4 80071714 0322C021 */  addu  $t8, $t9, $v0
/* AE88B8 80071718 930F0006 */  lbu   $t7, 6($t8)
/* AE88BC 8007171C 24180001 */  li    $t8, 1
/* AE88C0 80071720 01E57023 */  subu  $t6, $t7, $a1
/* AE88C4 80071724 448E2000 */  mtc1  $t6, $f4
/* AE88C8 80071728 00000000 */  nop   
/* AE88CC 8007172C 46802220 */  cvt.s.w $f8, $f4
/* AE88D0 80071730 46024282 */  mul.s $f10, $f8, $f2
/* AE88D4 80071734 460A9180 */  add.s $f6, $f18, $f10
/* AE88D8 80071738 4459F800 */  cfc1  $t9, $31
/* AE88DC 8007173C 44D8F800 */  ctc1  $t8, $31
/* AE88E0 80071740 00000000 */  nop   
/* AE88E4 80071744 46003424 */  cvt.w.s $f16, $f6
/* AE88E8 80071748 4458F800 */  cfc1  $t8, $31
/* AE88EC 8007174C 00000000 */  nop   
/* AE88F0 80071750 33180078 */  andi  $t8, $t8, 0x78
/* AE88F4 80071754 53000013 */  beql  $t8, $zero, .L800717A4
/* AE88F8 80071758 44188000 */   mfc1  $t8, $f16
/* AE88FC 8007175C 44818000 */  mtc1  $at, $f16
/* AE8900 80071760 24180001 */  li    $t8, 1
/* AE8904 80071764 46103401 */  sub.s $f16, $f6, $f16
/* AE8908 80071768 44D8F800 */  ctc1  $t8, $31
/* AE890C 8007176C 00000000 */  nop   
/* AE8910 80071770 46008424 */  cvt.w.s $f16, $f16
/* AE8914 80071774 4458F800 */  cfc1  $t8, $31
/* AE8918 80071778 00000000 */  nop   
/* AE891C 8007177C 33180078 */  andi  $t8, $t8, 0x78
/* AE8920 80071780 17000005 */  bnez  $t8, .L80071798
/* AE8924 80071784 00000000 */   nop   
/* AE8928 80071788 44188000 */  mfc1  $t8, $f16
/* AE892C 8007178C 3C018000 */  lui   $at, 0x8000
/* AE8930 80071790 10000007 */  b     .L800717B0
/* AE8934 80071794 0301C025 */   or    $t8, $t8, $at
.L80071798:
/* AE8938 80071798 10000005 */  b     .L800717B0
/* AE893C 8007179C 2418FFFF */   li    $t8, -1
/* AE8940 800717A0 44188000 */  mfc1  $t8, $f16
.L800717A4:
/* AE8944 800717A4 00000000 */  nop   
/* AE8948 800717A8 0700FFFB */  bltz  $t8, .L80071798
/* AE894C 800717AC 00000000 */   nop   
.L800717B0:
/* AE8950 800717B0 A3B80050 */  sb    $t8, 0x50($sp)
/* AE8954 800717B4 920F0020 */  lbu   $t7, 0x20($s0)
/* AE8958 800717B8 44D9F800 */  ctc1  $t9, $31
/* AE895C 800717BC 3C014F80 */  li    $at, 0x4F800000 # 0.000000
/* AE8960 800717C0 000F7080 */  sll   $t6, $t7, 2
/* AE8964 800717C4 01CF7021 */  addu  $t6, $t6, $t7
/* AE8968 800717C8 000E7080 */  sll   $t6, $t6, 2
/* AE896C 800717CC 01CF7021 */  addu  $t6, $t6, $t7
/* AE8970 800717D0 000E7040 */  sll   $t6, $t6, 1
/* AE8974 800717D4 012EC821 */  addu  $t9, $t1, $t6
/* AE8978 800717D8 03282021 */  addu  $a0, $t9, $t0
/* AE897C 800717DC 908F0004 */  lbu   $t7, 4($a0)
/* AE8980 800717E0 000F7080 */  sll   $t6, $t7, 2
/* AE8984 800717E4 01CF7023 */  subu  $t6, $t6, $t7
/* AE8988 800717E8 000E7080 */  sll   $t6, $t6, 2
/* AE898C 800717EC 01CF7023 */  subu  $t6, $t6, $t7
/* AE8990 800717F0 000E7040 */  sll   $t6, $t6, 1
/* AE8994 800717F4 014EC821 */  addu  $t9, $t2, $t6
/* AE8998 800717F8 03227821 */  addu  $t7, $t9, $v0
/* AE899C 800717FC 91E60006 */  lbu   $a2, 6($t7)
/* AE89A0 80071800 44862000 */  mtc1  $a2, $f4
/* AE89A4 80071804 04C10004 */  bgez  $a2, .L80071818
/* AE89A8 80071808 46802220 */   cvt.s.w $f8, $f4
/* AE89AC 8007180C 44819000 */  mtc1  $at, $f18
/* AE89B0 80071810 00000000 */  nop   
/* AE89B4 80071814 46124200 */  add.s $f8, $f8, $f18
.L80071818:
/* AE89B8 80071818 908E0005 */  lbu   $t6, 5($a0)
/* AE89BC 8007181C 3C014F00 */  li    $at, 0x4F000000 # 0.000000
/* AE89C0 80071820 000EC880 */  sll   $t9, $t6, 2
/* AE89C4 80071824 032EC823 */  subu  $t9, $t9, $t6
/* AE89C8 80071828 0019C880 */  sll   $t9, $t9, 2
/* AE89CC 8007182C 032EC823 */  subu  $t9, $t9, $t6
/* AE89D0 80071830 0019C840 */  sll   $t9, $t9, 1
/* AE89D4 80071834 01597821 */  addu  $t7, $t2, $t9
/* AE89D8 80071838 01E27021 */  addu  $t6, $t7, $v0
/* AE89DC 8007183C 91D90006 */  lbu   $t9, 6($t6)
/* AE89E0 80071840 03267823 */  subu  $t7, $t9, $a2
/* AE89E4 80071844 448F5000 */  mtc1  $t7, $f10
/* AE89E8 80071848 24190001 */  li    $t9, 1
/* AE89EC 8007184C 330F00FF */  andi  $t7, $t8, 0xff
/* AE89F0 80071850 468051A0 */  cvt.s.w $f6, $f10
/* AE89F4 80071854 46023402 */  mul.s $f16, $f6, $f2
/* AE89F8 80071858 46104100 */  add.s $f4, $f8, $f16
/* AE89FC 8007185C 444EF800 */  cfc1  $t6, $31
/* AE8A00 80071860 44D9F800 */  ctc1  $t9, $31
/* AE8A04 80071864 00000000 */  nop   
/* AE8A08 80071868 460024A4 */  cvt.w.s $f18, $f4
/* AE8A0C 8007186C 4459F800 */  cfc1  $t9, $31
/* AE8A10 80071870 00000000 */  nop   
/* AE8A14 80071874 33390078 */  andi  $t9, $t9, 0x78
/* AE8A18 80071878 53200013 */  beql  $t9, $zero, .L800718C8
/* AE8A1C 8007187C 44199000 */   mfc1  $t9, $f18
/* AE8A20 80071880 44819000 */  mtc1  $at, $f18
/* AE8A24 80071884 24190001 */  li    $t9, 1
/* AE8A28 80071888 46122481 */  sub.s $f18, $f4, $f18
/* AE8A2C 8007188C 44D9F800 */  ctc1  $t9, $31
/* AE8A30 80071890 00000000 */  nop   
/* AE8A34 80071894 460094A4 */  cvt.w.s $f18, $f18
/* AE8A38 80071898 4459F800 */  cfc1  $t9, $31
/* AE8A3C 8007189C 00000000 */  nop   
/* AE8A40 800718A0 33390078 */  andi  $t9, $t9, 0x78
/* AE8A44 800718A4 17200005 */  bnez  $t9, .L800718BC
/* AE8A48 800718A8 00000000 */   nop   
/* AE8A4C 800718AC 44199000 */  mfc1  $t9, $f18
/* AE8A50 800718B0 3C018000 */  li    $at, 0x80000000 # 0.000000
/* AE8A54 800718B4 10000007 */  b     .L800718D4
/* AE8A58 800718B8 0321C825 */   or    $t9, $t9, $at
.L800718BC:
/* AE8A5C 800718BC 10000005 */  b     .L800718D4
/* AE8A60 800718C0 2419FFFF */   li    $t9, -1
/* AE8A64 800718C4 44199000 */  mfc1  $t9, $f18
.L800718C8:
/* AE8A68 800718C8 00000000 */  nop   
/* AE8A6C 800718CC 0720FFFB */  bltz  $t9, .L800718BC
/* AE8A70 800718D0 00000000 */   nop   
.L800718D4:
/* AE8A74 800718D4 44CEF800 */  ctc1  $t6, $31
/* AE8A78 800718D8 448F5000 */  mtc1  $t7, $f10
/* AE8A7C 800718DC A3B90051 */  sb    $t9, 0x51($sp)
/* AE8A80 800718E0 05E10005 */  bgez  $t7, .L800718F8
/* AE8A84 800718E4 468051A0 */   cvt.s.w $f6, $f10
/* AE8A88 800718E8 3C014F80 */  li    $at, 0x4F800000 # 0.000000
/* AE8A8C 800718EC 44814000 */  mtc1  $at, $f8
/* AE8A90 800718F0 00000000 */  nop   
/* AE8A94 800718F4 46083180 */  add.s $f6, $f6, $f8
.L800718F8:
/* AE8A98 800718F8 332E00FF */  andi  $t6, $t9, 0xff
/* AE8A9C 800718FC 330F00FF */  andi  $t7, $t8, 0xff
/* AE8AA0 80071900 01CFC823 */  subu  $t9, $t6, $t7
/* AE8AA4 80071904 44998000 */  mtc1  $t9, $f16
/* AE8AA8 80071908 240E0001 */  li    $t6, 1
/* AE8AAC 8007190C 3C014F00 */  li    $at, 0x4F000000 # 0.000000
/* AE8AB0 80071910 46808120 */  cvt.s.w $f4, $f16
/* AE8AB4 80071914 460E2482 */  mul.s $f18, $f4, $f14
/* AE8AB8 80071918 46123280 */  add.s $f10, $f6, $f18
/* AE8ABC 8007191C 4458F800 */  cfc1  $t8, $31
/* AE8AC0 80071920 44CEF800 */  ctc1  $t6, $31
/* AE8AC4 80071924 00000000 */  nop   
/* AE8AC8 80071928 46005224 */  cvt.w.s $f8, $f10
/* AE8ACC 8007192C 444EF800 */  cfc1  $t6, $31
/* AE8AD0 80071930 00000000 */  nop   
/* AE8AD4 80071934 31CE0078 */  andi  $t6, $t6, 0x78
/* AE8AD8 80071938 51C00013 */  beql  $t6, $zero, .L80071988
/* AE8ADC 8007193C 440E4000 */   mfc1  $t6, $f8
/* AE8AE0 80071940 44814000 */  mtc1  $at, $f8
/* AE8AE4 80071944 240E0001 */  li    $t6, 1
/* AE8AE8 80071948 46085201 */  sub.s $f8, $f10, $f8
/* AE8AEC 8007194C 44CEF800 */  ctc1  $t6, $31
/* AE8AF0 80071950 00000000 */  nop   
/* AE8AF4 80071954 46004224 */  cvt.w.s $f8, $f8
/* AE8AF8 80071958 444EF800 */  cfc1  $t6, $31
/* AE8AFC 8007195C 00000000 */  nop   
/* AE8B00 80071960 31CE0078 */  andi  $t6, $t6, 0x78
/* AE8B04 80071964 15C00005 */  bnez  $t6, .L8007197C
/* AE8B08 80071968 00000000 */   nop   
/* AE8B0C 8007196C 440E4000 */  mfc1  $t6, $f8
/* AE8B10 80071970 3C018000 */  lui   $at, 0x8000
/* AE8B14 80071974 10000007 */  b     .L80071994
/* AE8B18 80071978 01C17025 */   or    $t6, $t6, $at
.L8007197C:
/* AE8B1C 8007197C 10000005 */  b     .L80071994
/* AE8B20 80071980 240EFFFF */   li    $t6, -1
/* AE8B24 80071984 440E4000 */  mfc1  $t6, $f8
.L80071988:
/* AE8B28 80071988 00000000 */  nop   
/* AE8B2C 8007198C 05C0FFFB */  bltz  $t6, .L8007197C
/* AE8B30 80071990 00000000 */   nop   
.L80071994:
/* AE8B34 80071994 A0EE00C6 */  sb    $t6, 0xc6($a3)
/* AE8B38 80071998 920F001F */  lbu   $t7, 0x1f($s0)
/* AE8B3C 8007199C 44D8F800 */  ctc1  $t8, $31
/* AE8B40 800719A0 3C014F80 */  li    $at, 0x4F800000 # 0.000000
/* AE8B44 800719A4 000FC880 */  sll   $t9, $t7, 2
/* AE8B48 800719A8 032FC821 */  addu  $t9, $t9, $t7
/* AE8B4C 800719AC 0019C880 */  sll   $t9, $t9, 2
/* AE8B50 800719B0 032FC821 */  addu  $t9, $t9, $t7
/* AE8B54 800719B4 0019C840 */  sll   $t9, $t9, 1
/* AE8B58 800719B8 0139C021 */  addu  $t8, $t1, $t9
/* AE8B5C 800719BC 03081821 */  addu  $v1, $t8, $t0
/* AE8B60 800719C0 906E0004 */  lbu   $t6, 4($v1)
/* AE8B64 800719C4 000E7880 */  sll   $t7, $t6, 2
/* AE8B68 800719C8 01EE7823 */  subu  $t7, $t7, $t6
/* AE8B6C 800719CC 000F7880 */  sll   $t7, $t7, 2
/* AE8B70 800719D0 01EE7823 */  subu  $t7, $t7, $t6
/* AE8B74 800719D4 000F7840 */  sll   $t7, $t7, 1
/* AE8B78 800719D8 014FC821 */  addu  $t9, $t2, $t7
/* AE8B7C 800719DC 0322C021 */  addu  $t8, $t9, $v0
/* AE8B80 800719E0 9305000C */  lbu   $a1, 0xc($t8)
/* AE8B84 800719E4 44858000 */  mtc1  $a1, $f16
/* AE8B88 800719E8 04A10004 */  bgez  $a1, .L800719FC
/* AE8B8C 800719EC 46808120 */   cvt.s.w $f4, $f16
/* AE8B90 800719F0 44813000 */  mtc1  $at, $f6
/* AE8B94 800719F4 00000000 */  nop   
/* AE8B98 800719F8 46062100 */  add.s $f4, $f4, $f6
.L800719FC:
/* AE8B9C 800719FC 906E0005 */  lbu   $t6, 5($v1)
/* AE8BA0 80071A00 3C014F00 */  li    $at, 0x4F000000 # 0.000000
/* AE8BA4 80071A04 000E7880 */  sll   $t7, $t6, 2
/* AE8BA8 80071A08 01EE7823 */  subu  $t7, $t7, $t6
/* AE8BAC 80071A0C 000F7880 */  sll   $t7, $t7, 2
/* AE8BB0 80071A10 01EE7823 */  subu  $t7, $t7, $t6
/* AE8BB4 80071A14 000F7840 */  sll   $t7, $t7, 1
/* AE8BB8 80071A18 014FC821 */  addu  $t9, $t2, $t7
/* AE8BBC 80071A1C 0322C021 */  addu  $t8, $t9, $v0
/* AE8BC0 80071A20 930E000C */  lbu   $t6, 0xc($t8)
/* AE8BC4 80071A24 24180001 */  li    $t8, 1
/* AE8BC8 80071A28 01C57823 */  subu  $t7, $t6, $a1
/* AE8BCC 80071A2C 448F9000 */  mtc1  $t7, $f18
/* AE8BD0 80071A30 00000000 */  nop   
/* AE8BD4 80071A34 468092A0 */  cvt.s.w $f10, $f18
/* AE8BD8 80071A38 46025202 */  mul.s $f8, $f10, $f2
/* AE8BDC 80071A3C 46082400 */  add.s $f16, $f4, $f8
/* AE8BE0 80071A40 4459F800 */  cfc1  $t9, $31
/* AE8BE4 80071A44 44D8F800 */  ctc1  $t8, $31
/* AE8BE8 80071A48 00000000 */  nop   
/* AE8BEC 80071A4C 460081A4 */  cvt.w.s $f6, $f16
/* AE8BF0 80071A50 4458F800 */  cfc1  $t8, $31
/* AE8BF4 80071A54 00000000 */  nop   
/* AE8BF8 80071A58 33180078 */  andi  $t8, $t8, 0x78
/* AE8BFC 80071A5C 53000013 */  beql  $t8, $zero, .L80071AAC
/* AE8C00 80071A60 44183000 */   mfc1  $t8, $f6
/* AE8C04 80071A64 44813000 */  mtc1  $at, $f6
/* AE8C08 80071A68 24180001 */  li    $t8, 1
/* AE8C0C 80071A6C 46068181 */  sub.s $f6, $f16, $f6
/* AE8C10 80071A70 44D8F800 */  ctc1  $t8, $31
/* AE8C14 80071A74 00000000 */  nop   
/* AE8C18 80071A78 460031A4 */  cvt.w.s $f6, $f6
/* AE8C1C 80071A7C 4458F800 */  cfc1  $t8, $31
/* AE8C20 80071A80 00000000 */  nop   
/* AE8C24 80071A84 33180078 */  andi  $t8, $t8, 0x78
/* AE8C28 80071A88 17000005 */  bnez  $t8, .L80071AA0
/* AE8C2C 80071A8C 00000000 */   nop   
/* AE8C30 80071A90 44183000 */  mfc1  $t8, $f6
/* AE8C34 80071A94 3C018000 */  lui   $at, 0x8000
/* AE8C38 80071A98 10000007 */  b     .L80071AB8
/* AE8C3C 80071A9C 0301C025 */   or    $t8, $t8, $at
.L80071AA0:
/* AE8C40 80071AA0 10000005 */  b     .L80071AB8
/* AE8C44 80071AA4 2418FFFF */   li    $t8, -1
/* AE8C48 80071AA8 44183000 */  mfc1  $t8, $f6
.L80071AAC:
/* AE8C4C 80071AAC 00000000 */  nop   
/* AE8C50 80071AB0 0700FFFB */  bltz  $t8, .L80071AA0
/* AE8C54 80071AB4 00000000 */   nop   
.L80071AB8:
/* AE8C58 80071AB8 A3B80050 */  sb    $t8, 0x50($sp)
/* AE8C5C 80071ABC 920E0020 */  lbu   $t6, 0x20($s0)
/* AE8C60 80071AC0 44D9F800 */  ctc1  $t9, $31
/* AE8C64 80071AC4 3C014F80 */  li    $at, 0x4F800000 # 0.000000
/* AE8C68 80071AC8 000E7880 */  sll   $t7, $t6, 2
/* AE8C6C 80071ACC 01EE7821 */  addu  $t7, $t7, $t6
/* AE8C70 80071AD0 000F7880 */  sll   $t7, $t7, 2
/* AE8C74 80071AD4 01EE7821 */  addu  $t7, $t7, $t6
/* AE8C78 80071AD8 000F7840 */  sll   $t7, $t7, 1
/* AE8C7C 80071ADC 012FC821 */  addu  $t9, $t1, $t7
/* AE8C80 80071AE0 03282021 */  addu  $a0, $t9, $t0
/* AE8C84 80071AE4 908E0004 */  lbu   $t6, 4($a0)
/* AE8C88 80071AE8 000E7880 */  sll   $t7, $t6, 2
/* AE8C8C 80071AEC 01EE7823 */  subu  $t7, $t7, $t6
/* AE8C90 80071AF0 000F7880 */  sll   $t7, $t7, 2
/* AE8C94 80071AF4 01EE7823 */  subu  $t7, $t7, $t6
/* AE8C98 80071AF8 000F7840 */  sll   $t7, $t7, 1
/* AE8C9C 80071AFC 014FC821 */  addu  $t9, $t2, $t7
/* AE8CA0 80071B00 03227021 */  addu  $t6, $t9, $v0
/* AE8CA4 80071B04 91C6000C */  lbu   $a2, 0xc($t6)
/* AE8CA8 80071B08 44869000 */  mtc1  $a2, $f18
/* AE8CAC 80071B0C 04C10004 */  bgez  $a2, .L80071B20
/* AE8CB0 80071B10 468092A0 */   cvt.s.w $f10, $f18
/* AE8CB4 80071B14 44812000 */  mtc1  $at, $f4
/* AE8CB8 80071B18 00000000 */  nop   
/* AE8CBC 80071B1C 46045280 */  add.s $f10, $f10, $f4
.L80071B20:
/* AE8CC0 80071B20 908F0005 */  lbu   $t7, 5($a0)
/* AE8CC4 80071B24 3C014F00 */  li    $at, 0x4F000000 # 0.000000
/* AE8CC8 80071B28 000FC880 */  sll   $t9, $t7, 2
/* AE8CCC 80071B2C 032FC823 */  subu  $t9, $t9, $t7
/* AE8CD0 80071B30 0019C880 */  sll   $t9, $t9, 2
/* AE8CD4 80071B34 032FC823 */  subu  $t9, $t9, $t7
/* AE8CD8 80071B38 0019C840 */  sll   $t9, $t9, 1
/* AE8CDC 80071B3C 01597021 */  addu  $t6, $t2, $t9
/* AE8CE0 80071B40 01C27821 */  addu  $t7, $t6, $v0
/* AE8CE4 80071B44 91F9000C */  lbu   $t9, 0xc($t7)
/* AE8CE8 80071B48 24420001 */  addiu $v0, $v0, 1
/* AE8CEC 80071B4C 3042FFFF */  andi  $v0, $v0, 0xffff
/* AE8CF0 80071B50 03267023 */  subu  $t6, $t9, $a2
/* AE8CF4 80071B54 448E4000 */  mtc1  $t6, $f8
/* AE8CF8 80071B58 24190001 */  li    $t9, 1
/* AE8CFC 80071B5C 330E00FF */  andi  $t6, $t8, 0xff
/* AE8D00 80071B60 46804420 */  cvt.s.w $f16, $f8
/* AE8D04 80071B64 46028182 */  mul.s $f6, $f16, $f2
/* AE8D08 80071B68 46065480 */  add.s $f18, $f10, $f6
/* AE8D0C 80071B6C 444FF800 */  cfc1  $t7, $31
/* AE8D10 80071B70 44D9F800 */  ctc1  $t9, $31
/* AE8D14 80071B74 00000000 */  nop   
/* AE8D18 80071B78 46009124 */  cvt.w.s $f4, $f18
/* AE8D1C 80071B7C 4459F800 */  cfc1  $t9, $31
/* AE8D20 80071B80 00000000 */  nop   
/* AE8D24 80071B84 33390078 */  andi  $t9, $t9, 0x78
/* AE8D28 80071B88 53200013 */  beql  $t9, $zero, .L80071BD8
/* AE8D2C 80071B8C 44192000 */   mfc1  $t9, $f4
/* AE8D30 80071B90 44812000 */  mtc1  $at, $f4
/* AE8D34 80071B94 24190001 */  li    $t9, 1
/* AE8D38 80071B98 46049101 */  sub.s $f4, $f18, $f4
/* AE8D3C 80071B9C 44D9F800 */  ctc1  $t9, $31
/* AE8D40 80071BA0 00000000 */  nop   
/* AE8D44 80071BA4 46002124 */  cvt.w.s $f4, $f4
/* AE8D48 80071BA8 4459F800 */  cfc1  $t9, $31
/* AE8D4C 80071BAC 00000000 */  nop   
/* AE8D50 80071BB0 33390078 */  andi  $t9, $t9, 0x78
/* AE8D54 80071BB4 17200005 */  bnez  $t9, .L80071BCC
/* AE8D58 80071BB8 00000000 */   nop   
/* AE8D5C 80071BBC 44192000 */  mfc1  $t9, $f4
/* AE8D60 80071BC0 3C018000 */  li    $at, 0x80000000 # 0.000000
/* AE8D64 80071BC4 10000007 */  b     .L80071BE4
/* AE8D68 80071BC8 0321C825 */   or    $t9, $t9, $at
.L80071BCC:
/* AE8D6C 80071BCC 10000005 */  b     .L80071BE4
/* AE8D70 80071BD0 2419FFFF */   li    $t9, -1
/* AE8D74 80071BD4 44192000 */  mfc1  $t9, $f4
.L80071BD8:
/* AE8D78 80071BD8 00000000 */  nop   
/* AE8D7C 80071BDC 0720FFFB */  bltz  $t9, .L80071BCC
/* AE8D80 80071BE0 00000000 */   nop   
.L80071BE4:
/* AE8D84 80071BE4 44CFF800 */  ctc1  $t7, $31
/* AE8D88 80071BE8 448E4000 */  mtc1  $t6, $f8
/* AE8D8C 80071BEC A3B90051 */  sb    $t9, 0x51($sp)
/* AE8D90 80071BF0 05C10005 */  bgez  $t6, .L80071C08
/* AE8D94 80071BF4 46804420 */   cvt.s.w $f16, $f8
/* AE8D98 80071BF8 3C014F80 */  li    $at, 0x4F800000 # 0.000000
/* AE8D9C 80071BFC 44815000 */  mtc1  $at, $f10
/* AE8DA0 80071C00 00000000 */  nop   
/* AE8DA4 80071C04 460A8400 */  add.s $f16, $f16, $f10
.L80071C08:
/* AE8DA8 80071C08 332F00FF */  andi  $t7, $t9, 0xff
/* AE8DAC 80071C0C 330E00FF */  andi  $t6, $t8, 0xff
/* AE8DB0 80071C10 01EEC823 */  subu  $t9, $t7, $t6
/* AE8DB4 80071C14 44993000 */  mtc1  $t9, $f6
/* AE8DB8 80071C18 240F0001 */  li    $t7, 1
/* AE8DBC 80071C1C 3C014F00 */  li    $at, 0x4F000000 # 0.000000
/* AE8DC0 80071C20 468034A0 */  cvt.s.w $f18, $f6
/* AE8DC4 80071C24 460E9102 */  mul.s $f4, $f18, $f14
/* AE8DC8 80071C28 46048200 */  add.s $f8, $f16, $f4
/* AE8DCC 80071C2C 4458F800 */  cfc1  $t8, $31
/* AE8DD0 80071C30 44CFF800 */  ctc1  $t7, $31
/* AE8DD4 80071C34 00000000 */  nop   
/* AE8DD8 80071C38 460042A4 */  cvt.w.s $f10, $f8
/* AE8DDC 80071C3C 444FF800 */  cfc1  $t7, $31
/* AE8DE0 80071C40 00000000 */  nop   
/* AE8DE4 80071C44 31EF0078 */  andi  $t7, $t7, 0x78
/* AE8DE8 80071C48 51E00013 */  beql  $t7, $zero, .L80071C98
/* AE8DEC 80071C4C 440F5000 */   mfc1  $t7, $f10
/* AE8DF0 80071C50 44815000 */  mtc1  $at, $f10
/* AE8DF4 80071C54 240F0001 */  li    $t7, 1
/* AE8DF8 80071C58 460A4281 */  sub.s $f10, $f8, $f10
/* AE8DFC 80071C5C 44CFF800 */  ctc1  $t7, $31
/* AE8E00 80071C60 00000000 */  nop   
/* AE8E04 80071C64 460052A4 */  cvt.w.s $f10, $f10
/* AE8E08 80071C68 444FF800 */  cfc1  $t7, $31
/* AE8E0C 80071C6C 00000000 */  nop   
/* AE8E10 80071C70 31EF0078 */  andi  $t7, $t7, 0x78
/* AE8E14 80071C74 15E00005 */  bnez  $t7, .L80071C8C
/* AE8E18 80071C78 00000000 */   nop   
/* AE8E1C 80071C7C 440F5000 */  mfc1  $t7, $f10
/* AE8E20 80071C80 3C018000 */  lui   $at, 0x8000
/* AE8E24 80071C84 10000007 */  b     .L80071CA4
/* AE8E28 80071C88 01E17825 */   or    $t7, $t7, $at
.L80071C8C:
/* AE8E2C 80071C8C 10000005 */  b     .L80071CA4
/* AE8E30 80071C90 240FFFFF */   li    $t7, -1
/* AE8E34 80071C94 440F5000 */  mfc1  $t7, $f10
.L80071C98:
/* AE8E38 80071C98 00000000 */  nop   
/* AE8E3C 80071C9C 05E0FFFB */  bltz  $t7, .L80071C8C
/* AE8E40 80071CA0 00000000 */   nop   
.L80071CA4:
/* AE8E44 80071CA4 28410003 */  slti  $at, $v0, 3
/* AE8E48 80071CA8 44D8F800 */  ctc1  $t8, $31
/* AE8E4C 80071CAC 1420FE78 */  bnez  $at, .L80071690
/* AE8E50 80071CB0 A0EF00CC */   sb    $t7, 0xcc($a3)
/* AE8E54 80071CB4 00001025 */  move  $v0, $zero
.L80071CB8:
/* AE8E58 80071CB8 920E001F */  lbu   $t6, 0x1f($s0)
/* AE8E5C 80071CBC 3C014F80 */  li    $at, 0x4F800000 # 0.000000
/* AE8E60 80071CC0 000EC880 */  sll   $t9, $t6, 2
/* AE8E64 80071CC4 032EC821 */  addu  $t9, $t9, $t6
/* AE8E68 80071CC8 0019C880 */  sll   $t9, $t9, 2
/* AE8E6C 80071CCC 032EC821 */  addu  $t9, $t9, $t6
/* AE8E70 80071CD0 0019C840 */  sll   $t9, $t9, 1
/* AE8E74 80071CD4 0139C021 */  addu  $t8, $t1, $t9
/* AE8E78 80071CD8 03081821 */  addu  $v1, $t8, $t0
/* AE8E7C 80071CDC 906F0004 */  lbu   $t7, 4($v1)
/* AE8E80 80071CE0 000F7080 */  sll   $t6, $t7, 2
/* AE8E84 80071CE4 01CF7023 */  subu  $t6, $t6, $t7
/* AE8E88 80071CE8 000E7080 */  sll   $t6, $t6, 2
/* AE8E8C 80071CEC 01CF7023 */  subu  $t6, $t6, $t7
/* AE8E90 80071CF0 000E7040 */  sll   $t6, $t6, 1
/* AE8E94 80071CF4 014EC821 */  addu  $t9, $t2, $t6
/* AE8E98 80071CF8 0322C021 */  addu  $t8, $t9, $v0
/* AE8E9C 80071CFC 9305000F */  lbu   $a1, 0xf($t8)
/* AE8EA0 80071D00 44853000 */  mtc1  $a1, $f6
/* AE8EA4 80071D04 04A10004 */  bgez  $a1, .L80071D18
/* AE8EA8 80071D08 468034A0 */   cvt.s.w $f18, $f6
/* AE8EAC 80071D0C 44818000 */  mtc1  $at, $f16
/* AE8EB0 80071D10 00000000 */  nop   
/* AE8EB4 80071D14 46109480 */  add.s $f18, $f18, $f16
.L80071D18:
/* AE8EB8 80071D18 906F0005 */  lbu   $t7, 5($v1)
/* AE8EBC 80071D1C 3C014F00 */  li    $at, 0x4F000000 # 0.000000
/* AE8EC0 80071D20 000F7080 */  sll   $t6, $t7, 2
/* AE8EC4 80071D24 01CF7023 */  subu  $t6, $t6, $t7
/* AE8EC8 80071D28 000E7080 */  sll   $t6, $t6, 2
/* AE8ECC 80071D2C 01CF7023 */  subu  $t6, $t6, $t7
/* AE8ED0 80071D30 000E7040 */  sll   $t6, $t6, 1
/* AE8ED4 80071D34 014EC821 */  addu  $t9, $t2, $t6
/* AE8ED8 80071D38 0322C021 */  addu  $t8, $t9, $v0
/* AE8EDC 80071D3C 930F000F */  lbu   $t7, 0xf($t8)
/* AE8EE0 80071D40 24180001 */  li    $t8, 1
/* AE8EE4 80071D44 01E57023 */  subu  $t6, $t7, $a1
/* AE8EE8 80071D48 448E2000 */  mtc1  $t6, $f4
/* AE8EEC 80071D4C 00000000 */  nop   
/* AE8EF0 80071D50 46802220 */  cvt.s.w $f8, $f4
/* AE8EF4 80071D54 46024282 */  mul.s $f10, $f8, $f2
/* AE8EF8 80071D58 460A9180 */  add.s $f6, $f18, $f10
/* AE8EFC 80071D5C 4459F800 */  cfc1  $t9, $31
/* AE8F00 80071D60 44D8F800 */  ctc1  $t8, $31
/* AE8F04 80071D64 00000000 */  nop   
/* AE8F08 80071D68 46003424 */  cvt.w.s $f16, $f6
/* AE8F0C 80071D6C 4458F800 */  cfc1  $t8, $31
/* AE8F10 80071D70 00000000 */  nop   
/* AE8F14 80071D74 33180078 */  andi  $t8, $t8, 0x78
/* AE8F18 80071D78 53000013 */  beql  $t8, $zero, .L80071DC8
/* AE8F1C 80071D7C 44188000 */   mfc1  $t8, $f16
/* AE8F20 80071D80 44818000 */  mtc1  $at, $f16
/* AE8F24 80071D84 24180001 */  li    $t8, 1
/* AE8F28 80071D88 46103401 */  sub.s $f16, $f6, $f16
/* AE8F2C 80071D8C 44D8F800 */  ctc1  $t8, $31
/* AE8F30 80071D90 00000000 */  nop   
/* AE8F34 80071D94 46008424 */  cvt.w.s $f16, $f16
/* AE8F38 80071D98 4458F800 */  cfc1  $t8, $31
/* AE8F3C 80071D9C 00000000 */  nop   
/* AE8F40 80071DA0 33180078 */  andi  $t8, $t8, 0x78
/* AE8F44 80071DA4 17000005 */  bnez  $t8, .L80071DBC
/* AE8F48 80071DA8 00000000 */   nop   
/* AE8F4C 80071DAC 44188000 */  mfc1  $t8, $f16
/* AE8F50 80071DB0 3C018000 */  lui   $at, 0x8000
/* AE8F54 80071DB4 10000007 */  b     .L80071DD4
/* AE8F58 80071DB8 0301C025 */   or    $t8, $t8, $at
.L80071DBC:
/* AE8F5C 80071DBC 10000005 */  b     .L80071DD4
/* AE8F60 80071DC0 2418FFFF */   li    $t8, -1
/* AE8F64 80071DC4 44188000 */  mfc1  $t8, $f16
.L80071DC8:
/* AE8F68 80071DC8 00000000 */  nop   
/* AE8F6C 80071DCC 0700FFFB */  bltz  $t8, .L80071DBC
/* AE8F70 80071DD0 00000000 */   nop   
.L80071DD4:
/* AE8F74 80071DD4 A3B80050 */  sb    $t8, 0x50($sp)
/* AE8F78 80071DD8 920F0020 */  lbu   $t7, 0x20($s0)
/* AE8F7C 80071DDC 44D9F800 */  ctc1  $t9, $31
/* AE8F80 80071DE0 3C014F80 */  li    $at, 0x4F800000 # 0.000000
/* AE8F84 80071DE4 000F7080 */  sll   $t6, $t7, 2
/* AE8F88 80071DE8 01CF7021 */  addu  $t6, $t6, $t7
/* AE8F8C 80071DEC 000E7080 */  sll   $t6, $t6, 2
/* AE8F90 80071DF0 01CF7021 */  addu  $t6, $t6, $t7
/* AE8F94 80071DF4 000E7040 */  sll   $t6, $t6, 1
/* AE8F98 80071DF8 012EC821 */  addu  $t9, $t1, $t6
/* AE8F9C 80071DFC 03282021 */  addu  $a0, $t9, $t0
/* AE8FA0 80071E00 908F0004 */  lbu   $t7, 4($a0)
/* AE8FA4 80071E04 000F7080 */  sll   $t6, $t7, 2
/* AE8FA8 80071E08 01CF7023 */  subu  $t6, $t6, $t7
/* AE8FAC 80071E0C 000E7080 */  sll   $t6, $t6, 2
/* AE8FB0 80071E10 01CF7023 */  subu  $t6, $t6, $t7
/* AE8FB4 80071E14 000E7040 */  sll   $t6, $t6, 1
/* AE8FB8 80071E18 014EC821 */  addu  $t9, $t2, $t6
/* AE8FBC 80071E1C 03227821 */  addu  $t7, $t9, $v0
/* AE8FC0 80071E20 91E6000F */  lbu   $a2, 0xf($t7)
/* AE8FC4 80071E24 44862000 */  mtc1  $a2, $f4
/* AE8FC8 80071E28 04C10004 */  bgez  $a2, .L80071E3C
/* AE8FCC 80071E2C 46802220 */   cvt.s.w $f8, $f4
/* AE8FD0 80071E30 44819000 */  mtc1  $at, $f18
/* AE8FD4 80071E34 00000000 */  nop   
/* AE8FD8 80071E38 46124200 */  add.s $f8, $f8, $f18
.L80071E3C:
/* AE8FDC 80071E3C 908E0005 */  lbu   $t6, 5($a0)
/* AE8FE0 80071E40 3C014F00 */  li    $at, 0x4F000000 # 0.000000
/* AE8FE4 80071E44 000EC880 */  sll   $t9, $t6, 2
/* AE8FE8 80071E48 032EC823 */  subu  $t9, $t9, $t6
/* AE8FEC 80071E4C 0019C880 */  sll   $t9, $t9, 2
/* AE8FF0 80071E50 032EC823 */  subu  $t9, $t9, $t6
/* AE8FF4 80071E54 0019C840 */  sll   $t9, $t9, 1
/* AE8FF8 80071E58 01597821 */  addu  $t7, $t2, $t9
/* AE8FFC 80071E5C 01E27021 */  addu  $t6, $t7, $v0
/* AE9000 80071E60 91D9000F */  lbu   $t9, 0xf($t6)
/* AE9004 80071E64 03267823 */  subu  $t7, $t9, $a2
/* AE9008 80071E68 448F5000 */  mtc1  $t7, $f10
/* AE900C 80071E6C 24190001 */  li    $t9, 1
/* AE9010 80071E70 330F00FF */  andi  $t7, $t8, 0xff
/* AE9014 80071E74 468051A0 */  cvt.s.w $f6, $f10
/* AE9018 80071E78 46023402 */  mul.s $f16, $f6, $f2
/* AE901C 80071E7C 46104100 */  add.s $f4, $f8, $f16
/* AE9020 80071E80 444EF800 */  cfc1  $t6, $31
/* AE9024 80071E84 44D9F800 */  ctc1  $t9, $31
/* AE9028 80071E88 00000000 */  nop   
/* AE902C 80071E8C 460024A4 */  cvt.w.s $f18, $f4
/* AE9030 80071E90 4459F800 */  cfc1  $t9, $31
/* AE9034 80071E94 00000000 */  nop   
/* AE9038 80071E98 33390078 */  andi  $t9, $t9, 0x78
/* AE903C 80071E9C 53200013 */  beql  $t9, $zero, .L80071EEC
/* AE9040 80071EA0 44199000 */   mfc1  $t9, $f18
/* AE9044 80071EA4 44819000 */  mtc1  $at, $f18
/* AE9048 80071EA8 24190001 */  li    $t9, 1
/* AE904C 80071EAC 46122481 */  sub.s $f18, $f4, $f18
/* AE9050 80071EB0 44D9F800 */  ctc1  $t9, $31
/* AE9054 80071EB4 00000000 */  nop   
/* AE9058 80071EB8 460094A4 */  cvt.w.s $f18, $f18
/* AE905C 80071EBC 4459F800 */  cfc1  $t9, $31
/* AE9060 80071EC0 00000000 */  nop   
/* AE9064 80071EC4 33390078 */  andi  $t9, $t9, 0x78
/* AE9068 80071EC8 17200005 */  bnez  $t9, .L80071EE0
/* AE906C 80071ECC 00000000 */   nop   
/* AE9070 80071ED0 44199000 */  mfc1  $t9, $f18
/* AE9074 80071ED4 3C018000 */  li    $at, 0x80000000 # 0.000000
/* AE9078 80071ED8 10000007 */  b     .L80071EF8
/* AE907C 80071EDC 0321C825 */   or    $t9, $t9, $at
.L80071EE0:
/* AE9080 80071EE0 10000005 */  b     .L80071EF8
/* AE9084 80071EE4 2419FFFF */   li    $t9, -1
/* AE9088 80071EE8 44199000 */  mfc1  $t9, $f18
.L80071EEC:
/* AE908C 80071EEC 00000000 */  nop   
/* AE9090 80071EF0 0720FFFB */  bltz  $t9, .L80071EE0
/* AE9094 80071EF4 00000000 */   nop   
.L80071EF8:
/* AE9098 80071EF8 44CEF800 */  ctc1  $t6, $31
/* AE909C 80071EFC 448F5000 */  mtc1  $t7, $f10
/* AE90A0 80071F00 A3B90051 */  sb    $t9, 0x51($sp)
/* AE90A4 80071F04 05E10005 */  bgez  $t7, .L80071F1C
/* AE90A8 80071F08 468051A0 */   cvt.s.w $f6, $f10
/* AE90AC 80071F0C 3C014F80 */  li    $at, 0x4F800000 # 0.000000
/* AE90B0 80071F10 44814000 */  mtc1  $at, $f8
/* AE90B4 80071F14 00000000 */  nop   
/* AE90B8 80071F18 46083180 */  add.s $f6, $f6, $f8
.L80071F1C:
/* AE90BC 80071F1C 332E00FF */  andi  $t6, $t9, 0xff
/* AE90C0 80071F20 330F00FF */  andi  $t7, $t8, 0xff
/* AE90C4 80071F24 01CFC823 */  subu  $t9, $t6, $t7
/* AE90C8 80071F28 44998000 */  mtc1  $t9, $f16
/* AE90CC 80071F2C 240E0001 */  li    $t6, 1
/* AE90D0 80071F30 02027821 */  addu  $t7, $s0, $v0
/* AE90D4 80071F34 46808120 */  cvt.s.w $f4, $f16
/* AE90D8 80071F38 24420001 */  addiu $v0, $v0, 1
/* AE90DC 80071F3C 3042FFFF */  andi  $v0, $v0, 0xffff
/* AE90E0 80071F40 3C014F00 */  li    $at, 0x4F000000 # 0.000000
/* AE90E4 80071F44 460E2482 */  mul.s $f18, $f4, $f14
/* AE90E8 80071F48 46123280 */  add.s $f10, $f6, $f18
/* AE90EC 80071F4C 4458F800 */  cfc1  $t8, $31
/* AE90F0 80071F50 44CEF800 */  ctc1  $t6, $31
/* AE90F4 80071F54 00000000 */  nop   
/* AE90F8 80071F58 46005224 */  cvt.w.s $f8, $f10
/* AE90FC 80071F5C 444EF800 */  cfc1  $t6, $31
/* AE9100 80071F60 00000000 */  nop   
/* AE9104 80071F64 31CE0078 */  andi  $t6, $t6, 0x78
/* AE9108 80071F68 51C00013 */  beql  $t6, $zero, .L80071FB8
/* AE910C 80071F6C 440E4000 */   mfc1  $t6, $f8
/* AE9110 80071F70 44814000 */  mtc1  $at, $f8
/* AE9114 80071F74 240E0001 */  li    $t6, 1
/* AE9118 80071F78 46085201 */  sub.s $f8, $f10, $f8
/* AE911C 80071F7C 44CEF800 */  ctc1  $t6, $31
/* AE9120 80071F80 00000000 */  nop   
/* AE9124 80071F84 46004224 */  cvt.w.s $f8, $f8
/* AE9128 80071F88 444EF800 */  cfc1  $t6, $31
/* AE912C 80071F8C 00000000 */  nop   
/* AE9130 80071F90 31CE0078 */  andi  $t6, $t6, 0x78
/* AE9134 80071F94 15C00005 */  bnez  $t6, .L80071FAC
/* AE9138 80071F98 00000000 */   nop   
/* AE913C 80071F9C 440E4000 */  mfc1  $t6, $f8
/* AE9140 80071FA0 3C018000 */  lui   $at, 0x8000
/* AE9144 80071FA4 10000007 */  b     .L80071FC4
/* AE9148 80071FA8 01C17025 */   or    $t6, $t6, $at
.L80071FAC:
/* AE914C 80071FAC 10000005 */  b     .L80071FC4
/* AE9150 80071FB0 240EFFFF */   li    $t6, -1
/* AE9154 80071FB4 440E4000 */  mfc1  $t6, $f8
.L80071FB8:
/* AE9158 80071FB8 00000000 */  nop   
/* AE915C 80071FBC 05C0FFFB */  bltz  $t6, .L80071FAC
/* AE9160 80071FC0 00000000 */   nop   
.L80071FC4:
/* AE9164 80071FC4 28410003 */  slti  $at, $v0, 3
/* AE9168 80071FC8 44D8F800 */  ctc1  $t8, $31
/* AE916C 80071FCC 1420FF3A */  bnez  $at, .L80071CB8
/* AE9170 80071FD0 A1EE00CF */   sb    $t6, 0xcf($t7)
/* AE9174 80071FD4 9219001F */  lbu   $t9, 0x1f($s0)
/* AE9178 80071FD8 24070016 */  li    $a3, 22
/* AE917C 80071FDC 0019C080 */  sll   $t8, $t9, 2
/* AE9180 80071FE0 0319C021 */  addu  $t8, $t8, $t9
/* AE9184 80071FE4 0018C080 */  sll   $t8, $t8, 2
/* AE9188 80071FE8 0319C021 */  addu  $t8, $t8, $t9
/* AE918C 80071FEC 0018C040 */  sll   $t8, $t8, 1
/* AE9190 80071FF0 01387021 */  addu  $t6, $t1, $t8
/* AE9194 80071FF4 01C81821 */  addu  $v1, $t6, $t0
/* AE9198 80071FF8 906F0004 */  lbu   $t7, 4($v1)
/* AE919C 80071FFC 906E0005 */  lbu   $t6, 5($v1)
/* AE91A0 80072000 01E70019 */  multu $t7, $a3
/* AE91A4 80072004 0000C812 */  mflo  $t9
/* AE91A8 80072008 0159C021 */  addu  $t8, $t2, $t9
/* AE91AC 8007200C 87020012 */  lh    $v0, 0x12($t8)
/* AE91B0 80072010 01C70019 */  multu $t6, $a3
/* AE91B4 80072014 304203FF */  andi  $v0, $v0, 0x3ff
/* AE91B8 80072018 00007812 */  mflo  $t7
/* AE91BC 8007201C 014FC821 */  addu  $t9, $t2, $t7
/* AE91C0 80072020 87380012 */  lh    $t8, 0x12($t9)
/* AE91C4 80072024 330E03FF */  andi  $t6, $t8, 0x3ff
/* AE91C8 80072028 01C27823 */  subu  $t7, $t6, $v0
/* AE91CC 8007202C 448F8000 */  mtc1  $t7, $f16
/* AE91D0 80072030 00000000 */  nop   
/* AE91D4 80072034 46808120 */  cvt.s.w $f4, $f16
/* AE91D8 80072038 46022182 */  mul.s $f6, $f4, $f2
/* AE91DC 8007203C 4600348D */  trunc.w.s $f18, $f6
/* AE91E0 80072040 440F9000 */  mfc1  $t7, $f18
/* AE91E4 80072044 00000000 */  nop   
/* AE91E8 80072048 004FC821 */  addu  $t9, $v0, $t7
/* AE91EC 8007204C A7B9004C */  sh    $t9, 0x4c($sp)
/* AE91F0 80072050 92180020 */  lbu   $t8, 0x20($s0)
/* AE91F4 80072054 00187080 */  sll   $t6, $t8, 2
/* AE91F8 80072058 01D87021 */  addu  $t6, $t6, $t8
/* AE91FC 8007205C 000E7080 */  sll   $t6, $t6, 2
/* AE9200 80072060 01D87021 */  addu  $t6, $t6, $t8
/* AE9204 80072064 000E7040 */  sll   $t6, $t6, 1
/* AE9208 80072068 012E7821 */  addu  $t7, $t1, $t6
/* AE920C 8007206C 01E82021 */  addu  $a0, $t7, $t0
/* AE9210 80072070 90990004 */  lbu   $t9, 4($a0)
/* AE9214 80072074 908F0005 */  lbu   $t7, 5($a0)
/* AE9218 80072078 03270019 */  multu $t9, $a3
/* AE921C 8007207C 0000C012 */  mflo  $t8
/* AE9220 80072080 01587021 */  addu  $t6, $t2, $t8
/* AE9224 80072084 85C50012 */  lh    $a1, 0x12($t6)
/* AE9228 80072088 01E70019 */  multu $t7, $a3
/* AE922C 8007208C 30A503FF */  andi  $a1, $a1, 0x3ff
/* AE9230 80072090 0000C812 */  mflo  $t9
/* AE9234 80072094 0159C021 */  addu  $t8, $t2, $t9
/* AE9238 80072098 870E0012 */  lh    $t6, 0x12($t8)
/* AE923C 8007209C 31CF03FF */  andi  $t7, $t6, 0x3ff
/* AE9240 800720A0 01E5C823 */  subu  $t9, $t7, $a1
/* AE9244 800720A4 44995000 */  mtc1  $t9, $f10
/* AE9248 800720A8 87AF004C */  lh    $t7, 0x4c($sp)
/* AE924C 800720AC 46805220 */  cvt.s.w $f8, $f10
/* AE9250 800720B0 46024402 */  mul.s $f16, $f8, $f2
/* AE9254 800720B4 4600810D */  trunc.w.s $f4, $f16
/* AE9258 800720B8 44192000 */  mfc1  $t9, $f4
/* AE925C 800720BC 00000000 */  nop   
/* AE9260 800720C0 00B9C021 */  addu  $t8, $a1, $t9
/* AE9264 800720C4 A7B8004E */  sh    $t8, 0x4e($sp)
/* AE9268 800720C8 87AE004E */  lh    $t6, 0x4e($sp)
/* AE926C 800720CC 01CFC823 */  subu  $t9, $t6, $t7
/* AE9270 800720D0 44993000 */  mtc1  $t9, $f6
/* AE9274 800720D4 9219001F */  lbu   $t9, 0x1f($s0)
/* AE9278 800720D8 468034A0 */  cvt.s.w $f18, $f6
/* AE927C 800720DC 460E9282 */  mul.s $f10, $f18, $f14
/* AE9280 800720E0 4600520D */  trunc.w.s $f8, $f10
/* AE9284 800720E4 44184000 */  mfc1  $t8, $f8
/* AE9288 800720E8 00000000 */  nop   
/* AE928C 800720EC 01F87021 */  addu  $t6, $t7, $t8
/* AE9290 800720F0 00197880 */  sll   $t7, $t9, 2
/* AE9294 800720F4 01F97821 */  addu  $t7, $t7, $t9
/* AE9298 800720F8 000F7880 */  sll   $t7, $t7, 2
/* AE929C 800720FC 01F97821 */  addu  $t7, $t7, $t9
/* AE92A0 80072100 000F7840 */  sll   $t7, $t7, 1
/* AE92A4 80072104 012FC021 */  addu  $t8, $t1, $t7
/* AE92A8 80072108 A60E00D2 */  sh    $t6, 0xd2($s0)
/* AE92AC 8007210C 03081821 */  addu  $v1, $t8, $t0
/* AE92B0 80072110 906E0004 */  lbu   $t6, 4($v1)
/* AE92B4 80072114 90780005 */  lbu   $t8, 5($v1)
/* AE92B8 80072118 01C70019 */  multu $t6, $a3
/* AE92BC 8007211C 0000C812 */  mflo  $t9
/* AE92C0 80072120 01597821 */  addu  $t7, $t2, $t9
/* AE92C4 80072124 85E20014 */  lh    $v0, 0x14($t7)
/* AE92C8 80072128 03070019 */  multu $t8, $a3
/* AE92CC 8007212C 00007012 */  mflo  $t6
/* AE92D0 80072130 014EC821 */  addu  $t9, $t2, $t6
/* AE92D4 80072134 872F0014 */  lh    $t7, 0x14($t9)
/* AE92D8 80072138 01E2C023 */  subu  $t8, $t7, $v0
/* AE92DC 8007213C 44988000 */  mtc1  $t8, $f16
/* AE92E0 80072140 00000000 */  nop   
/* AE92E4 80072144 46808120 */  cvt.s.w $f4, $f16
/* AE92E8 80072148 46022182 */  mul.s $f6, $f4, $f2
/* AE92EC 8007214C 4600348D */  trunc.w.s $f18, $f6
/* AE92F0 80072150 44189000 */  mfc1  $t8, $f18
/* AE92F4 80072154 00000000 */  nop   
/* AE92F8 80072158 00587021 */  addu  $t6, $v0, $t8
/* AE92FC 8007215C A7AE004C */  sh    $t6, 0x4c($sp)
/* AE9300 80072160 92190020 */  lbu   $t9, 0x20($s0)
/* AE9304 80072164 00197880 */  sll   $t7, $t9, 2
/* AE9308 80072168 01F97821 */  addu  $t7, $t7, $t9
/* AE930C 8007216C 000F7880 */  sll   $t7, $t7, 2
/* AE9310 80072170 01F97821 */  addu  $t7, $t7, $t9
/* AE9314 80072174 000F7840 */  sll   $t7, $t7, 1
/* AE9318 80072178 012FC021 */  addu  $t8, $t1, $t7
/* AE931C 8007217C 03082021 */  addu  $a0, $t8, $t0
/* AE9320 80072180 908E0004 */  lbu   $t6, 4($a0)
/* AE9324 80072184 90980005 */  lbu   $t8, 5($a0)
/* AE9328 80072188 3C048014 */  lui   $a0, %hi(D_8013C490) # $a0, 0x8014
/* AE932C 8007218C 01C70019 */  multu $t6, $a3
/* AE9330 80072190 2484C490 */  addiu $a0, %lo(D_8013C490) # addiu $a0, $a0, -0x3b70
/* AE9334 80072194 0000C812 */  mflo  $t9
/* AE9338 80072198 01597821 */  addu  $t7, $t2, $t9
/* AE933C 8007219C 85E50014 */  lh    $a1, 0x14($t7)
/* AE9340 800721A0 03070019 */  multu $t8, $a3
/* AE9344 800721A4 00007012 */  mflo  $t6
/* AE9348 800721A8 014EC821 */  addu  $t9, $t2, $t6
/* AE934C 800721AC 872F0014 */  lh    $t7, 0x14($t9)
/* AE9350 800721B0 01E5C023 */  subu  $t8, $t7, $a1
/* AE9354 800721B4 44985000 */  mtc1  $t8, $f10
/* AE9358 800721B8 87AF004C */  lh    $t7, 0x4c($sp)
/* AE935C 800721BC 46805220 */  cvt.s.w $f8, $f10
/* AE9360 800721C0 46024402 */  mul.s $f16, $f8, $f2
/* AE9364 800721C4 4600810D */  trunc.w.s $f4, $f16
/* AE9368 800721C8 44182000 */  mfc1  $t8, $f4
/* AE936C 800721CC 00000000 */  nop   
/* AE9370 800721D0 00B87021 */  addu  $t6, $a1, $t8
/* AE9374 800721D4 A7AE004E */  sh    $t6, 0x4e($sp)
/* AE9378 800721D8 87B9004E */  lh    $t9, 0x4e($sp)
/* AE937C 800721DC 032FC023 */  subu  $t8, $t9, $t7
/* AE9380 800721E0 44983000 */  mtc1  $t8, $f6
/* AE9384 800721E4 92180020 */  lbu   $t8, 0x20($s0)
/* AE9388 800721E8 468034A0 */  cvt.s.w $f18, $f6
/* AE938C 800721EC 460E9282 */  mul.s $f10, $f18, $f14
/* AE9390 800721F0 4600520D */  trunc.w.s $f8, $f10
/* AE9394 800721F4 440E4000 */  mfc1  $t6, $f8
/* AE9398 800721F8 00000000 */  nop   
/* AE939C 800721FC 01EEC821 */  addu  $t9, $t7, $t6
/* AE93A0 80072200 00187880 */  sll   $t7, $t8, 2
/* AE93A4 80072204 01F87821 */  addu  $t7, $t7, $t8
/* AE93A8 80072208 000F7880 */  sll   $t7, $t7, 2
/* AE93AC 8007220C 01F87821 */  addu  $t7, $t7, $t8
/* AE93B0 80072210 000F7840 */  sll   $t7, $t7, 1
/* AE93B4 80072214 A61900D4 */  sh    $t9, 0xd4($s0)
/* AE93B8 80072218 012F7021 */  addu  $t6, $t1, $t7
/* AE93BC 8007221C 01C8C821 */  addu  $t9, $t6, $t0
/* AE93C0 80072220 93380005 */  lbu   $t8, 5($t9)
/* AE93C4 80072224 920F00B4 */  lbu   $t7, 0xb4($s0)
/* AE93C8 80072228 030F082A */  slt   $at, $t8, $t7
/* AE93CC 8007222C 5420020D */  bnezl $at, .L80072A64
/* AE93D0 80072230 240F0001 */   li    $t7, 1
/* AE93D4 80072234 0C00084C */  jal   osSyncPrintf
/* AE93D8 80072238 AFA80034 */   sw    $t0, 0x34($sp)
/* AE93DC 8007223C 920E0020 */  lbu   $t6, 0x20($s0)
/* AE93E0 80072240 8FA80034 */  lw    $t0, 0x34($sp)
/* AE93E4 80072244 3C098012 */  lui   $t1, %hi(D_8011FB48) # $t1, 0x8012
/* AE93E8 80072248 000EC880 */  sll   $t9, $t6, 2
/* AE93EC 8007224C 032EC821 */  addu  $t9, $t9, $t6
/* AE93F0 80072250 0019C880 */  sll   $t9, $t9, 2
/* AE93F4 80072254 032EC821 */  addu  $t9, $t9, $t6
/* AE93F8 80072258 2529FB48 */  addiu $t1, %lo(D_8011FB48) # addiu $t1, $t1, -0x4b8
/* AE93FC 8007225C 0019C840 */  sll   $t9, $t9, 1
/* AE9400 80072260 920600B4 */  lbu   $a2, 0xb4($s0)
/* AE9404 80072264 0139C021 */  addu  $t8, $t1, $t9
/* AE9408 80072268 3C048014 */  lui   $a0, %hi(D_8013C4C8) # $a0, 0x8014
/* AE940C 8007226C 03087821 */  addu  $t7, $t8, $t0
/* AE9410 80072270 91E50005 */  lbu   $a1, 5($t7)
/* AE9414 80072274 2484C4C8 */  addiu $a0, %lo(D_8013C4C8) # addiu $a0, $a0, -0x3b38
/* AE9418 80072278 0C00084C */  jal   osSyncPrintf
/* AE941C 8007227C 24C6FFFF */   addiu $a2, $a2, -1
/* AE9420 80072280 3C0B8016 */  lui   $t3, %hi(gGameInfo) # $t3, 0x8016
/* AE9424 80072284 100001F6 */  b     .L80072A60
/* AE9428 80072288 256BFA90 */   addiu $t3, %lo(gGameInfo) # addiu $t3, $t3, -0x570
/* AE942C 8007228C 28810007 */  slti  $at, $a0, 7
.L80072290:
/* AE9430 80072290 1420FBA2 */  bnez  $at, .L8007111C
/* AE9434 80072294 00000000 */   nop   
/* AE9438 80072298 100001F2 */  b     .L80072A64
/* AE943C 8007229C 240F0001 */   li    $t7, 1
.L800722A0:
/* AE9440 800722A0 920E00BC */  lbu   $t6, 0xbc($s0)
.L800722A4:
/* AE9444 800722A4 00002025 */  move  $a0, $zero
/* AE9448 800722A8 55C0004F */  bnezl $t6, .L800723E8
/* AE944C 800722AC 920F00BD */   lbu   $t7, 0xbd($s0)
.L800722B0:
/* AE9450 800722B0 921900BD */  lbu   $t9, 0xbd($s0)
/* AE9454 800722B4 02041021 */  addu  $v0, $s0, $a0
/* AE9458 800722B8 0019C080 */  sll   $t8, $t9, 2
/* AE945C 800722BC 0319C023 */  subu  $t8, $t8, $t9
/* AE9460 800722C0 0018C080 */  sll   $t8, $t8, 2
/* AE9464 800722C4 0319C023 */  subu  $t8, $t8, $t9
/* AE9468 800722C8 0018C040 */  sll   $t8, $t8, 1
/* AE946C 800722CC 01587821 */  addu  $t7, $t2, $t8
/* AE9470 800722D0 01E47021 */  addu  $t6, $t7, $a0
/* AE9474 800722D4 91D90000 */  lbu   $t9, ($t6)
/* AE9478 800722D8 A05900C0 */  sb    $t9, 0xc0($v0)
/* AE947C 800722DC 921800BD */  lbu   $t8, 0xbd($s0)
/* AE9480 800722E0 00187880 */  sll   $t7, $t8, 2
/* AE9484 800722E4 01F87823 */  subu  $t7, $t7, $t8
/* AE9488 800722E8 000F7880 */  sll   $t7, $t7, 2
/* AE948C 800722EC 01F87823 */  subu  $t7, $t7, $t8
/* AE9490 800722F0 000F7840 */  sll   $t7, $t7, 1
/* AE9494 800722F4 014F7021 */  addu  $t6, $t2, $t7
/* AE9498 800722F8 01C4C821 */  addu  $t9, $t6, $a0
/* AE949C 800722FC 83380003 */  lb    $t8, 3($t9)
/* AE94A0 80072300 A05800C3 */  sb    $t8, 0xc3($v0)
/* AE94A4 80072304 920F00BD */  lbu   $t7, 0xbd($s0)
/* AE94A8 80072308 000F7080 */  sll   $t6, $t7, 2
/* AE94AC 8007230C 01CF7023 */  subu  $t6, $t6, $t7
/* AE94B0 80072310 000E7080 */  sll   $t6, $t6, 2
/* AE94B4 80072314 01CF7023 */  subu  $t6, $t6, $t7
/* AE94B8 80072318 000E7040 */  sll   $t6, $t6, 1
/* AE94BC 8007231C 014EC821 */  addu  $t9, $t2, $t6
/* AE94C0 80072320 0324C021 */  addu  $t8, $t9, $a0
/* AE94C4 80072324 930F0006 */  lbu   $t7, 6($t8)
/* AE94C8 80072328 A04F00C6 */  sb    $t7, 0xc6($v0)
/* AE94CC 8007232C 920E00BD */  lbu   $t6, 0xbd($s0)
/* AE94D0 80072330 000EC880 */  sll   $t9, $t6, 2
/* AE94D4 80072334 032EC823 */  subu  $t9, $t9, $t6
/* AE94D8 80072338 0019C880 */  sll   $t9, $t9, 2
/* AE94DC 8007233C 032EC823 */  subu  $t9, $t9, $t6
/* AE94E0 80072340 0019C840 */  sll   $t9, $t9, 1
/* AE94E4 80072344 0159C021 */  addu  $t8, $t2, $t9
/* AE94E8 80072348 03047821 */  addu  $t7, $t8, $a0
/* AE94EC 8007234C 81EE0009 */  lb    $t6, 9($t7)
/* AE94F0 80072350 A04E00C9 */  sb    $t6, 0xc9($v0)
/* AE94F4 80072354 921900BD */  lbu   $t9, 0xbd($s0)
/* AE94F8 80072358 0019C080 */  sll   $t8, $t9, 2
/* AE94FC 8007235C 0319C023 */  subu  $t8, $t8, $t9
/* AE9500 80072360 0018C080 */  sll   $t8, $t8, 2
/* AE9504 80072364 0319C023 */  subu  $t8, $t8, $t9
/* AE9508 80072368 0018C040 */  sll   $t8, $t8, 1
/* AE950C 8007236C 01587821 */  addu  $t7, $t2, $t8
/* AE9510 80072370 01E47021 */  addu  $t6, $t7, $a0
/* AE9514 80072374 91D9000C */  lbu   $t9, 0xc($t6)
/* AE9518 80072378 A05900CC */  sb    $t9, 0xcc($v0)
/* AE951C 8007237C 921800BD */  lbu   $t8, 0xbd($s0)
/* AE9520 80072380 00187880 */  sll   $t7, $t8, 2
/* AE9524 80072384 01F87823 */  subu  $t7, $t7, $t8
/* AE9528 80072388 000F7880 */  sll   $t7, $t7, 2
/* AE952C 8007238C 01F87823 */  subu  $t7, $t7, $t8
/* AE9530 80072390 000F7840 */  sll   $t7, $t7, 1
/* AE9534 80072394 014F7021 */  addu  $t6, $t2, $t7
/* AE9538 80072398 01C4C821 */  addu  $t9, $t6, $a0
/* AE953C 8007239C 24840001 */  addiu $a0, $a0, 1
/* AE9540 800723A0 9338000F */  lbu   $t8, 0xf($t9)
/* AE9544 800723A4 3084FFFF */  andi  $a0, $a0, 0xffff
/* AE9548 800723A8 28810003 */  slti  $at, $a0, 3
/* AE954C 800723AC 1420FFC0 */  bnez  $at, .L800722B0
/* AE9550 800723B0 A05800CF */   sb    $t8, 0xcf($v0)
/* AE9554 800723B4 920600BD */  lbu   $a2, 0xbd($s0)
/* AE9558 800723B8 24070016 */  li    $a3, 22
/* AE955C 800723BC 00C70019 */  multu $a2, $a3
/* AE9560 800723C0 00007812 */  mflo  $t7
/* AE9564 800723C4 014F1021 */  addu  $v0, $t2, $t7
/* AE9568 800723C8 844E0012 */  lh    $t6, 0x12($v0)
/* AE956C 800723CC 31D903FF */  andi  $t9, $t6, 0x3ff
/* AE9570 800723D0 A61900D2 */  sh    $t9, 0xd2($s0)
/* AE9574 800723D4 84580014 */  lh    $t8, 0x14($v0)
/* AE9578 800723D8 E60200D8 */  swc1  $f2, 0xd8($s0)
/* AE957C 800723DC 10000192 */  b     .L80072A28
/* AE9580 800723E0 A61800D4 */   sh    $t8, 0xd4($s0)
/* AE9584 800723E4 920F00BD */  lbu   $t7, 0xbd($s0)
.L800723E8:
/* AE9588 800723E8 24070016 */  li    $a3, 22
/* AE958C 800723EC 920400DC */  lbu   $a0, 0xdc($s0)
/* AE9590 800723F0 01E70019 */  multu $t7, $a3
/* AE9594 800723F4 C60000D8 */  lwc1  $f0, 0xd8($s0)
/* AE9598 800723F8 00007012 */  mflo  $t6
/* AE959C 800723FC 014EC821 */  addu  $t9, $t2, $t6
/* AE95A0 80072400 87220012 */  lh    $v0, 0x12($t9)
/* AE95A4 80072404 00021283 */  sra   $v0, $v0, 0xa
/* AE95A8 80072408 00021080 */  sll   $v0, $v0, 2
/* AE95AC 8007240C 304200FF */  andi  $v0, $v0, 0xff
/* AE95B0 80072410 54400004 */  bnezl $v0, .L80072424
/* AE95B4 80072414 960300D6 */   lhu   $v1, 0xd6($s0)
/* Changed for SW, sets the fog blend rate to always be 4 */
/* AE95B8 80072418 24420001 */  li    $v0, 4
/* AE95BC 8007241C 304200FF */  andi  $v0, $v0, 0xff
/* AE95C0 80072420 960300D6 */  lhu   $v1, 0xd6($s0)
.L80072424:
/* AE95C4 80072424 13E30002 */  beq   $ra, $v1, .L80072430
/* AE95C8 80072428 00000000 */   nop   
/* AE95CC 8007242C 306200FF */  andi  $v0, $v1, 0xff
.L80072430:
/* AE95D0 80072430 54800010 */  bnezl $a0, .L80072474
/* AE95D4 80072434 4600103C */   c.lt.s $f2, $f0
/* AE95D8 80072438 44828000 */  mtc1  $v0, $f16
/* AE95DC 8007243C 3C014F80 */  li    $at, 0x4F800000 # 0.000000
/* AE95E0 80072440 04410004 */  bgez  $v0, .L80072454
/* AE95E4 80072444 46808120 */   cvt.s.w $f4, $f16
/* AE95E8 80072448 44813000 */  mtc1  $at, $f6
/* AE95EC 8007244C 00000000 */  nop   
/* AE95F0 80072450 46062100 */  add.s $f4, $f4, $f6
.L80072454:
/* AE95F4 80072454 3C01437F */  li    $at, 0x437F0000 # 0.000000
/* AE95F8 80072458 44819000 */  mtc1  $at, $f18
/* AE95FC 8007245C 00000000 */  nop   
/* AE9600 80072460 46122283 */  div.s $f10, $f4, $f18
/* AE9604 80072464 460A0200 */  add.s $f8, $f0, $f10
/* AE9608 80072468 E60800D8 */  swc1  $f8, 0xd8($s0)
/* AE960C 8007246C C60000D8 */  lwc1  $f0, 0xd8($s0)
/* AE9610 80072470 4600103C */  c.lt.s $f2, $f0
.L80072474:
/* AE9614 80072474 00002025 */  move  $a0, $zero
/* AE9618 80072478 45000002 */  bc1f  .L80072484
/* AE961C 8007247C 00000000 */   nop   
/* AE9620 80072480 E60200D8 */  swc1  $f2, 0xd8($s0)
.L80072484:
/* AE9624 80072484 921800BE */  lbu   $t8, 0xbe($s0)
/* AE9628 80072488 C60400D8 */  lwc1  $f4, 0xd8($s0)
/* AE962C 8007248C 02041021 */  addu  $v0, $s0, $a0
/* AE9630 80072490 00187880 */  sll   $t7, $t8, 2
/* AE9634 80072494 01F87823 */  subu  $t7, $t7, $t8
/* AE9638 80072498 000F7880 */  sll   $t7, $t7, 2
/* AE963C 8007249C 01F87823 */  subu  $t7, $t7, $t8
/* AE9640 800724A0 921800BD */  lbu   $t8, 0xbd($s0)
/* AE9644 800724A4 000F7840 */  sll   $t7, $t7, 1
/* AE9648 800724A8 014F7021 */  addu  $t6, $t2, $t7
/* AE964C 800724AC 00187880 */  sll   $t7, $t8, 2
/* AE9650 800724B0 01F87823 */  subu  $t7, $t7, $t8
/* AE9654 800724B4 000F7880 */  sll   $t7, $t7, 2
/* AE9658 800724B8 01C4C821 */  addu  $t9, $t6, $a0
/* AE965C 800724BC 01F87823 */  subu  $t7, $t7, $t8
/* AE9660 800724C0 000F7840 */  sll   $t7, $t7, 1
/* AE9664 800724C4 93230000 */  lbu   $v1, ($t9)
/* AE9668 800724C8 014F7021 */  addu  $t6, $t2, $t7
/* AE966C 800724CC 01C4C821 */  addu  $t9, $t6, $a0
/* AE9670 800724D0 93380000 */  lbu   $t8, ($t9)
/* AE9674 800724D4 44835000 */  mtc1  $v1, $f10
/* AE9678 800724D8 3C014F80 */  li    $at, 0x4F800000 # 0.000000
/* AE967C 800724DC 03037823 */  subu  $t7, $t8, $v1
/* AE9680 800724E0 448F8000 */  mtc1  $t7, $f16
/* AE9684 800724E4 46805220 */  cvt.s.w $f8, $f10
/* AE9688 800724E8 468081A0 */  cvt.s.w $f6, $f16
/* AE968C 800724EC 46043482 */  mul.s $f18, $f6, $f4
/* AE9690 800724F0 04630005 */  bgezl $v1, .L80072508
/* AE9694 800724F4 46124180 */   add.s $f6, $f8, $f18
/* AE9698 800724F8 44818000 */  mtc1  $at, $f16
/* AE969C 800724FC 00000000 */  nop   
/* AE96A0 80072500 46104200 */  add.s $f8, $f8, $f16
/* AE96A4 80072504 46124180 */  add.s $f6, $f8, $f18
.L80072508:
/* AE96A8 80072508 24190001 */  li    $t9, 1
/* AE96AC 8007250C 3C014F00 */  li    $at, 0x4F000000 # 0.000000
/* AE96B0 80072510 444EF800 */  cfc1  $t6, $31
/* AE96B4 80072514 44D9F800 */  ctc1  $t9, $31
/* AE96B8 80072518 00000000 */  nop   
/* AE96BC 8007251C 46003124 */  cvt.w.s $f4, $f6
/* AE96C0 80072520 4459F800 */  cfc1  $t9, $31
/* AE96C4 80072524 00000000 */  nop   
/* AE96C8 80072528 33390078 */  andi  $t9, $t9, 0x78
/* AE96CC 8007252C 53200013 */  beql  $t9, $zero, .L8007257C
/* AE96D0 80072530 44192000 */   mfc1  $t9, $f4
/* AE96D4 80072534 44812000 */  mtc1  $at, $f4
/* AE96D8 80072538 24190001 */  li    $t9, 1
/* AE96DC 8007253C 46043101 */  sub.s $f4, $f6, $f4
/* AE96E0 80072540 44D9F800 */  ctc1  $t9, $31
/* AE96E4 80072544 00000000 */  nop   
/* AE96E8 80072548 46002124 */  cvt.w.s $f4, $f4
/* AE96EC 8007254C 4459F800 */  cfc1  $t9, $31
/* AE96F0 80072550 00000000 */  nop   
/* AE96F4 80072554 33390078 */  andi  $t9, $t9, 0x78
/* AE96F8 80072558 17200005 */  bnez  $t9, .L80072570
/* AE96FC 8007255C 00000000 */   nop   
/* AE9700 80072560 44192000 */  mfc1  $t9, $f4
/* AE9704 80072564 3C018000 */  lui   $at, 0x8000
/* AE9708 80072568 10000007 */  b     .L80072588
/* AE970C 8007256C 0321C825 */   or    $t9, $t9, $at
.L80072570:
/* AE9710 80072570 10000005 */  b     .L80072588
/* AE9714 80072574 2419FFFF */   li    $t9, -1
/* AE9718 80072578 44192000 */  mfc1  $t9, $f4
.L8007257C:
/* AE971C 8007257C 00000000 */  nop   
/* AE9720 80072580 0720FFFB */  bltz  $t9, .L80072570
/* AE9724 80072584 00000000 */   nop   
.L80072588:
/* AE9728 80072588 A05900C0 */  sb    $t9, 0xc0($v0)
/* AE972C 8007258C 921800BE */  lbu   $t8, 0xbe($s0)
/* AE9730 80072590 44CEF800 */  ctc1  $t6, $31
/* AE9734 80072594 C60800D8 */  lwc1  $f8, 0xd8($s0)
/* AE9738 80072598 00187880 */  sll   $t7, $t8, 2
/* AE973C 8007259C 01F87823 */  subu  $t7, $t7, $t8
/* AE9740 800725A0 000F7880 */  sll   $t7, $t7, 2
/* AE9744 800725A4 01F87823 */  subu  $t7, $t7, $t8
/* AE9748 800725A8 921800BD */  lbu   $t8, 0xbd($s0)
/* AE974C 800725AC 000F7840 */  sll   $t7, $t7, 1
/* AE9750 800725B0 014F7021 */  addu  $t6, $t2, $t7
/* AE9754 800725B4 00187880 */  sll   $t7, $t8, 2
/* AE9758 800725B8 01F87823 */  subu  $t7, $t7, $t8
/* AE975C 800725BC 000F7880 */  sll   $t7, $t7, 2
/* AE9760 800725C0 01C4C821 */  addu  $t9, $t6, $a0
/* AE9764 800725C4 01F87823 */  subu  $t7, $t7, $t8
/* AE9768 800725C8 000F7840 */  sll   $t7, $t7, 1
/* AE976C 800725CC 83250003 */  lb    $a1, 3($t9)
/* AE9770 800725D0 014F7021 */  addu  $t6, $t2, $t7
/* AE9774 800725D4 01C4C821 */  addu  $t9, $t6, $a0
/* AE9778 800725D8 83380003 */  lb    $t8, 3($t9)
/* AE977C 800725DC 3C014F80 */  li    $at, 0x4F800000 # 0.000000
/* AE9780 800725E0 03057823 */  subu  $t7, $t8, $a1
/* AE9784 800725E4 448F5000 */  mtc1  $t7, $f10
/* AE9788 800725E8 00000000 */  nop   
/* AE978C 800725EC 46805420 */  cvt.s.w $f16, $f10
/* AE9790 800725F0 46088482 */  mul.s $f18, $f16, $f8
/* AE9794 800725F4 4600918D */  trunc.w.s $f6, $f18
/* AE9798 800725F8 440F3000 */  mfc1  $t7, $f6
/* AE979C 800725FC 00000000 */  nop   
/* AE97A0 80072600 00AF7021 */  addu  $t6, $a1, $t7
/* AE97A4 80072604 A04E00C3 */  sb    $t6, 0xc3($v0)
/* AE97A8 80072608 921900BE */  lbu   $t9, 0xbe($s0)
/* AE97AC 8007260C C61000D8 */  lwc1  $f16, 0xd8($s0)
/* AE97B0 80072610 0019C080 */  sll   $t8, $t9, 2
/* AE97B4 80072614 0319C023 */  subu  $t8, $t8, $t9
/* AE97B8 80072618 0018C080 */  sll   $t8, $t8, 2
/* AE97BC 8007261C 0319C023 */  subu  $t8, $t8, $t9
/* AE97C0 80072620 921900BD */  lbu   $t9, 0xbd($s0)
/* AE97C4 80072624 0018C040 */  sll   $t8, $t8, 1
/* AE97C8 80072628 01587821 */  addu  $t7, $t2, $t8
/* AE97CC 8007262C 0019C080 */  sll   $t8, $t9, 2
/* AE97D0 80072630 0319C023 */  subu  $t8, $t8, $t9
/* AE97D4 80072634 0018C080 */  sll   $t8, $t8, 2
/* AE97D8 80072638 01E47021 */  addu  $t6, $t7, $a0
/* AE97DC 8007263C 0319C023 */  subu  $t8, $t8, $t9
/* AE97E0 80072640 0018C040 */  sll   $t8, $t8, 1
/* AE97E4 80072644 91C30006 */  lbu   $v1, 6($t6)
/* AE97E8 80072648 01587821 */  addu  $t7, $t2, $t8
/* AE97EC 8007264C 01E47021 */  addu  $t6, $t7, $a0
/* AE97F0 80072650 91D90006 */  lbu   $t9, 6($t6)
/* AE97F4 80072654 44839000 */  mtc1  $v1, $f18
/* AE97F8 80072658 0323C023 */  subu  $t8, $t9, $v1
/* AE97FC 8007265C 44982000 */  mtc1  $t8, $f4
/* AE9800 80072660 468091A0 */  cvt.s.w $f6, $f18
/* AE9804 80072664 468022A0 */  cvt.s.w $f10, $f4
/* AE9808 80072668 46105202 */  mul.s $f8, $f10, $f16
/* AE980C 8007266C 04630005 */  bgezl $v1, .L80072684
/* AE9810 80072670 46083280 */   add.s $f10, $f6, $f8
/* AE9814 80072674 44812000 */  mtc1  $at, $f4
/* AE9818 80072678 00000000 */  nop   
/* AE981C 8007267C 46043180 */  add.s $f6, $f6, $f4
/* AE9820 80072680 46083280 */  add.s $f10, $f6, $f8
.L80072684:
/* AE9824 80072684 240E0001 */  li    $t6, 1
/* AE9828 80072688 3C014F00 */  li    $at, 0x4F000000 # 0.000000
/* AE982C 8007268C 444FF800 */  cfc1  $t7, $31
/* AE9830 80072690 44CEF800 */  ctc1  $t6, $31
/* AE9834 80072694 00000000 */  nop   
/* AE9838 80072698 46005424 */  cvt.w.s $f16, $f10
/* AE983C 8007269C 444EF800 */  cfc1  $t6, $31
/* AE9840 800726A0 00000000 */  nop   
/* AE9844 800726A4 31CE0078 */  andi  $t6, $t6, 0x78
/* AE9848 800726A8 51C00013 */  beql  $t6, $zero, .L800726F8
/* AE984C 800726AC 440E8000 */   mfc1  $t6, $f16
/* AE9850 800726B0 44818000 */  mtc1  $at, $f16
/* AE9854 800726B4 240E0001 */  li    $t6, 1
/* AE9858 800726B8 46105401 */  sub.s $f16, $f10, $f16
/* AE985C 800726BC 44CEF800 */  ctc1  $t6, $31
/* AE9860 800726C0 00000000 */  nop   
/* AE9864 800726C4 46008424 */  cvt.w.s $f16, $f16
/* AE9868 800726C8 444EF800 */  cfc1  $t6, $31
/* AE986C 800726CC 00000000 */  nop   
/* AE9870 800726D0 31CE0078 */  andi  $t6, $t6, 0x78
/* AE9874 800726D4 15C00005 */  bnez  $t6, .L800726EC
/* AE9878 800726D8 00000000 */   nop   
/* AE987C 800726DC 440E8000 */  mfc1  $t6, $f16
/* AE9880 800726E0 3C018000 */  lui   $at, 0x8000
/* AE9884 800726E4 10000007 */  b     .L80072704
/* AE9888 800726E8 01C17025 */   or    $t6, $t6, $at
.L800726EC:
/* AE988C 800726EC 10000005 */  b     .L80072704
/* AE9890 800726F0 240EFFFF */   li    $t6, -1
/* AE9894 800726F4 440E8000 */  mfc1  $t6, $f16
.L800726F8:
/* AE9898 800726F8 00000000 */  nop   
/* AE989C 800726FC 05C0FFFB */  bltz  $t6, .L800726EC
/* AE98A0 80072700 00000000 */   nop   
.L80072704:
/* AE98A4 80072704 A04E00C6 */  sb    $t6, 0xc6($v0)
/* AE98A8 80072708 921900BE */  lbu   $t9, 0xbe($s0)
/* AE98AC 8007270C 44CFF800 */  ctc1  $t7, $31
/* AE98B0 80072710 C60600D8 */  lwc1  $f6, 0xd8($s0)
/* AE98B4 80072714 0019C080 */  sll   $t8, $t9, 2
/* AE98B8 80072718 0319C023 */  subu  $t8, $t8, $t9
/* AE98BC 8007271C 0018C080 */  sll   $t8, $t8, 2
/* AE98C0 80072720 0319C023 */  subu  $t8, $t8, $t9
/* AE98C4 80072724 921900BD */  lbu   $t9, 0xbd($s0)
/* AE98C8 80072728 0018C040 */  sll   $t8, $t8, 1
/* AE98CC 8007272C 01587821 */  addu  $t7, $t2, $t8
/* AE98D0 80072730 0019C080 */  sll   $t8, $t9, 2
/* AE98D4 80072734 0319C023 */  subu  $t8, $t8, $t9
/* AE98D8 80072738 0018C080 */  sll   $t8, $t8, 2
/* AE98DC 8007273C 01E47021 */  addu  $t6, $t7, $a0
/* AE98E0 80072740 0319C023 */  subu  $t8, $t8, $t9
/* AE98E4 80072744 0018C040 */  sll   $t8, $t8, 1
/* AE98E8 80072748 81C50009 */  lb    $a1, 9($t6)
/* AE98EC 8007274C 01587821 */  addu  $t7, $t2, $t8
/* AE98F0 80072750 01E47021 */  addu  $t6, $t7, $a0
/* AE98F4 80072754 81D90009 */  lb    $t9, 9($t6)
/* AE98F8 80072758 3C014F80 */  li    $at, 0x4F800000 # 0.000000
/* AE98FC 8007275C 0325C023 */  subu  $t8, $t9, $a1
/* AE9900 80072760 44989000 */  mtc1  $t8, $f18
/* AE9904 80072764 00000000 */  nop   
/* AE9908 80072768 46809120 */  cvt.s.w $f4, $f18
/* AE990C 8007276C 46062202 */  mul.s $f8, $f4, $f6
/* AE9910 80072770 4600428D */  trunc.w.s $f10, $f8
/* AE9914 80072774 44185000 */  mfc1  $t8, $f10
/* AE9918 80072778 00000000 */  nop   
/* AE991C 8007277C 00B87821 */  addu  $t7, $a1, $t8
/* AE9920 80072780 A04F00C9 */  sb    $t7, 0xc9($v0)
/* AE9924 80072784 920E00BE */  lbu   $t6, 0xbe($s0)
/* AE9928 80072788 C60400D8 */  lwc1  $f4, 0xd8($s0)
/* AE992C 8007278C 000EC880 */  sll   $t9, $t6, 2
/* AE9930 80072790 032EC823 */  subu  $t9, $t9, $t6
/* AE9934 80072794 0019C880 */  sll   $t9, $t9, 2
/* AE9938 80072798 032EC823 */  subu  $t9, $t9, $t6
/* AE993C 8007279C 920E00BD */  lbu   $t6, 0xbd($s0)
/* AE9940 800727A0 0019C840 */  sll   $t9, $t9, 1
/* AE9944 800727A4 0159C021 */  addu  $t8, $t2, $t9
/* AE9948 800727A8 000EC880 */  sll   $t9, $t6, 2
/* AE994C 800727AC 032EC823 */  subu  $t9, $t9, $t6
/* AE9950 800727B0 0019C880 */  sll   $t9, $t9, 2
/* AE9954 800727B4 03047821 */  addu  $t7, $t8, $a0
/* AE9958 800727B8 032EC823 */  subu  $t9, $t9, $t6
/* AE995C 800727BC 0019C840 */  sll   $t9, $t9, 1
/* AE9960 800727C0 91E3000C */  lbu   $v1, 0xc($t7)
/* AE9964 800727C4 0159C021 */  addu  $t8, $t2, $t9
/* AE9968 800727C8 03047821 */  addu  $t7, $t8, $a0
/* AE996C 800727CC 91EE000C */  lbu   $t6, 0xc($t7)
/* AE9970 800727D0 44834000 */  mtc1  $v1, $f8
/* AE9974 800727D4 01C3C823 */  subu  $t9, $t6, $v1
/* AE9978 800727D8 44998000 */  mtc1  $t9, $f16
/* AE997C 800727DC 468042A0 */  cvt.s.w $f10, $f8
/* AE9980 800727E0 468084A0 */  cvt.s.w $f18, $f16
/* AE9984 800727E4 46049182 */  mul.s $f6, $f18, $f4
/* AE9988 800727E8 04630005 */  bgezl $v1, .L80072800
/* AE998C 800727EC 46065480 */   add.s $f18, $f10, $f6
/* AE9990 800727F0 44818000 */  mtc1  $at, $f16
/* AE9994 800727F4 00000000 */  nop   
/* AE9998 800727F8 46105280 */  add.s $f10, $f10, $f16
/* AE999C 800727FC 46065480 */  add.s $f18, $f10, $f6
.L80072800:
/* AE99A0 80072800 240F0001 */  li    $t7, 1
/* AE99A4 80072804 3C014F00 */  li    $at, 0x4F000000 # 0.000000
/* AE99A8 80072808 4458F800 */  cfc1  $t8, $31
/* AE99AC 8007280C 44CFF800 */  ctc1  $t7, $31
/* AE99B0 80072810 00000000 */  nop   
/* AE99B4 80072814 46009124 */  cvt.w.s $f4, $f18
/* AE99B8 80072818 444FF800 */  cfc1  $t7, $31
/* AE99BC 8007281C 00000000 */  nop   
/* AE99C0 80072820 31EF0078 */  andi  $t7, $t7, 0x78
/* AE99C4 80072824 51E00013 */  beql  $t7, $zero, .L80072874
/* AE99C8 80072828 440F2000 */   mfc1  $t7, $f4
/* AE99CC 8007282C 44812000 */  mtc1  $at, $f4
/* AE99D0 80072830 240F0001 */  li    $t7, 1
/* AE99D4 80072834 46049101 */  sub.s $f4, $f18, $f4
/* AE99D8 80072838 44CFF800 */  ctc1  $t7, $31
/* AE99DC 8007283C 00000000 */  nop   
/* AE99E0 80072840 46002124 */  cvt.w.s $f4, $f4
/* AE99E4 80072844 444FF800 */  cfc1  $t7, $31
/* AE99E8 80072848 00000000 */  nop   
/* AE99EC 8007284C 31EF0078 */  andi  $t7, $t7, 0x78
/* AE99F0 80072850 15E00005 */  bnez  $t7, .L80072868
/* AE99F4 80072854 00000000 */   nop   
/* AE99F8 80072858 440F2000 */  mfc1  $t7, $f4
/* AE99FC 8007285C 3C018000 */  lui   $at, 0x8000
/* AE9A00 80072860 10000007 */  b     .L80072880
/* AE9A04 80072864 01E17825 */   or    $t7, $t7, $at
.L80072868:
/* AE9A08 80072868 10000005 */  b     .L80072880
/* AE9A0C 8007286C 240FFFFF */   li    $t7, -1
/* AE9A10 80072870 440F2000 */  mfc1  $t7, $f4
.L80072874:
/* AE9A14 80072874 00000000 */  nop   
/* AE9A18 80072878 05E0FFFB */  bltz  $t7, .L80072868
/* AE9A1C 8007287C 00000000 */   nop   
.L80072880:
/* AE9A20 80072880 A04F00CC */  sb    $t7, 0xcc($v0)
/* AE9A24 80072884 920E00BE */  lbu   $t6, 0xbe($s0)
/* AE9A28 80072888 44D8F800 */  ctc1  $t8, $31
/* AE9A2C 8007288C C60A00D8 */  lwc1  $f10, 0xd8($s0)
/* AE9A30 80072890 000EC880 */  sll   $t9, $t6, 2
/* AE9A34 80072894 032EC823 */  subu  $t9, $t9, $t6
/* AE9A38 80072898 0019C880 */  sll   $t9, $t9, 2
/* AE9A3C 8007289C 032EC823 */  subu  $t9, $t9, $t6
/* AE9A40 800728A0 920E00BD */  lbu   $t6, 0xbd($s0)
/* AE9A44 800728A4 0019C840 */  sll   $t9, $t9, 1
/* AE9A48 800728A8 0159C021 */  addu  $t8, $t2, $t9
/* AE9A4C 800728AC 000EC880 */  sll   $t9, $t6, 2
/* AE9A50 800728B0 032EC823 */  subu  $t9, $t9, $t6
/* AE9A54 800728B4 0019C880 */  sll   $t9, $t9, 2
/* AE9A58 800728B8 03047821 */  addu  $t7, $t8, $a0
/* AE9A5C 800728BC 032EC823 */  subu  $t9, $t9, $t6
/* AE9A60 800728C0 0019C840 */  sll   $t9, $t9, 1
/* AE9A64 800728C4 91E5000F */  lbu   $a1, 0xf($t7)
/* AE9A68 800728C8 0159C021 */  addu  $t8, $t2, $t9
/* AE9A6C 800728CC 03047821 */  addu  $t7, $t8, $a0
/* AE9A70 800728D0 91EE000F */  lbu   $t6, 0xf($t7)
/* AE9A74 800728D4 44859000 */  mtc1  $a1, $f18
/* AE9A78 800728D8 24840001 */  addiu $a0, $a0, 1
/* AE9A7C 800728DC 01C5C823 */  subu  $t9, $t6, $a1
/* AE9A80 800728E0 44994000 */  mtc1  $t9, $f8
/* AE9A84 800728E4 46809120 */  cvt.s.w $f4, $f18
/* AE9A88 800728E8 46804420 */  cvt.s.w $f16, $f8
/* AE9A8C 800728EC 460A8182 */  mul.s $f6, $f16, $f10
/* AE9A90 800728F0 04A10004 */  bgez  $a1, .L80072904
/* AE9A94 800728F4 3C014F80 */   li    $at, 0x4F800000 # 0.000000
/* AE9A98 800728F8 44814000 */  mtc1  $at, $f8
/* AE9A9C 800728FC 00000000 */  nop   
/* AE9AA0 80072900 46082100 */  add.s $f4, $f4, $f8
.L80072904:
/* AE9AA4 80072904 46062400 */  add.s $f16, $f4, $f6
/* AE9AA8 80072908 240F0001 */  li    $t7, 1
/* AE9AAC 8007290C 3084FFFF */  andi  $a0, $a0, 0xffff
/* AE9AB0 80072910 3C014F00 */  li    $at, 0x4F000000 # 0.000000
/* AE9AB4 80072914 4458F800 */  cfc1  $t8, $31
/* AE9AB8 80072918 44CFF800 */  ctc1  $t7, $31
/* AE9ABC 8007291C 00000000 */  nop   
/* AE9AC0 80072920 460082A4 */  cvt.w.s $f10, $f16
/* AE9AC4 80072924 444FF800 */  cfc1  $t7, $31
/* AE9AC8 80072928 00000000 */  nop   
/* AE9ACC 8007292C 31EF0078 */  andi  $t7, $t7, 0x78
/* AE9AD0 80072930 51E00013 */  beql  $t7, $zero, .L80072980
/* AE9AD4 80072934 440F5000 */   mfc1  $t7, $f10
/* AE9AD8 80072938 44815000 */  mtc1  $at, $f10
/* AE9ADC 8007293C 240F0001 */  li    $t7, 1
/* AE9AE0 80072940 460A8281 */  sub.s $f10, $f16, $f10
/* AE9AE4 80072944 44CFF800 */  ctc1  $t7, $31
/* AE9AE8 80072948 00000000 */  nop   
/* AE9AEC 8007294C 460052A4 */  cvt.w.s $f10, $f10
/* AE9AF0 80072950 444FF800 */  cfc1  $t7, $31
/* AE9AF4 80072954 00000000 */  nop   
/* AE9AF8 80072958 31EF0078 */  andi  $t7, $t7, 0x78
/* AE9AFC 8007295C 15E00005 */  bnez  $t7, .L80072974
/* AE9B00 80072960 00000000 */   nop   
/* AE9B04 80072964 440F5000 */  mfc1  $t7, $f10
/* AE9B08 80072968 3C018000 */  lui   $at, 0x8000
/* AE9B0C 8007296C 10000007 */  b     .L8007298C
/* AE9B10 80072970 01E17825 */   or    $t7, $t7, $at
.L80072974:
/* AE9B14 80072974 10000005 */  b     .L8007298C
/* AE9B18 80072978 240FFFFF */   li    $t7, -1
/* AE9B1C 8007297C 440F5000 */  mfc1  $t7, $f10
.L80072980:
/* AE9B20 80072980 00000000 */  nop   
/* AE9B24 80072984 05E0FFFB */  bltz  $t7, .L80072974
/* AE9B28 80072988 00000000 */   nop   
.L8007298C:
/* AE9B2C 8007298C 28810003 */  slti  $at, $a0, 3
/* AE9B30 80072990 44D8F800 */  ctc1  $t8, $31
/* AE9B34 80072994 1420FEBB */  bnez  $at, .L80072484
/* AE9B38 80072998 A04F00CF */   sb    $t7, 0xcf($v0)
/* AE9B3C 8007299C 920E00BE */  lbu   $t6, 0xbe($s0)
/* AE9B40 800729A0 920600BD */  lbu   $a2, 0xbd($s0)
/* AE9B44 800729A4 C60000D8 */  lwc1  $f0, 0xd8($s0)
/* AE9B48 800729A8 01C70019 */  multu $t6, $a3
/* AE9B4C 800729AC 0000C812 */  mflo  $t9
/* AE9B50 800729B0 01591821 */  addu  $v1, $t2, $t9
/* AE9B54 800729B4 84640012 */  lh    $a0, 0x12($v1)
/* AE9B58 800729B8 00C70019 */  multu $a2, $a3
/* AE9B5C 800729BC 308403FF */  andi  $a0, $a0, 0x3ff
/* AE9B60 800729C0 0000C012 */  mflo  $t8
/* AE9B64 800729C4 01581021 */  addu  $v0, $t2, $t8
/* AE9B68 800729C8 844F0012 */  lh    $t7, 0x12($v0)
/* AE9B6C 800729CC 31EE03FF */  andi  $t6, $t7, 0x3ff
/* AE9B70 800729D0 01C4C823 */  subu  $t9, $t6, $a0
/* AE9B74 800729D4 44999000 */  mtc1  $t9, $f18
/* AE9B78 800729D8 00000000 */  nop   
/* AE9B7C 800729DC 46809220 */  cvt.s.w $f8, $f18
/* AE9B80 800729E0 46004102 */  mul.s $f4, $f8, $f0
/* AE9B84 800729E4 4600218D */  trunc.w.s $f6, $f4
/* AE9B88 800729E8 44193000 */  mfc1  $t9, $f6
/* AE9B8C 800729EC 00000000 */  nop   
/* AE9B90 800729F0 0099C021 */  addu  $t8, $a0, $t9
/* AE9B94 800729F4 A61800D2 */  sh    $t8, 0xd2($s0)
/* AE9B98 800729F8 844F0014 */  lh    $t7, 0x14($v0)
/* AE9B9C 800729FC 84650014 */  lh    $a1, 0x14($v1)
/* AE9BA0 80072A00 01E57023 */  subu  $t6, $t7, $a1
/* AE9BA4 80072A04 448E8000 */  mtc1  $t6, $f16
/* AE9BA8 80072A08 00000000 */  nop   
/* AE9BAC 80072A0C 468082A0 */  cvt.s.w $f10, $f16
/* AE9BB0 80072A10 46005482 */  mul.s $f18, $f10, $f0
/* AE9BB4 80072A14 4600920D */  trunc.w.s $f8, $f18
/* AE9BB8 80072A18 440E4000 */  mfc1  $t6, $f8
/* AE9BBC 80072A1C 00000000 */  nop   
/* AE9BC0 80072A20 00AEC821 */  addu  $t9, $a1, $t6
/* AE9BC4 80072A24 A61900D4 */  sh    $t9, 0xd4($s0)
.L80072A28:
/* AE9BC8 80072A28 921800B4 */  lbu   $t8, 0xb4($s0)
/* AE9BCC 80072A2C 3C048014 */  lui   $a0, %hi(D_8013C500) # $a0, 0x8014
/* AE9BD0 80072A30 00D8082A */  slt   $at, $a2, $t8
/* AE9BD4 80072A34 5420000B */  bnezl $at, .L80072A64
/* AE9BD8 80072A38 240F0001 */   li    $t7, 1
/* AE9BDC 80072A3C 0C00084C */  jal   osSyncPrintf
/* AE9BE0 80072A40 2484C500 */   addiu $a0, %lo(D_8013C500) # addiu $a0, $a0, -0x3b00
/* AE9BE4 80072A44 3C048014 */  lui   $a0, %hi(D_8013C52C) # $a0, 0x8014
/* AE9BE8 80072A48 2484C52C */  addiu $a0, %lo(D_8013C52C) # addiu $a0, $a0, -0x3ad4
/* AE9BEC 80072A4C 920500BD */  lbu   $a1, 0xbd($s0)
/* AE9BF0 80072A50 0C00084C */  jal   osSyncPrintf
/* AE9BF4 80072A54 920600B4 */   lbu   $a2, 0xb4($s0)
/* AE9BF8 80072A58 3C0B8016 */  lui   $t3, %hi(gGameInfo) # $t3, 0x8016
/* AE9BFC 80072A5C 256BFA90 */  addiu $t3, %lo(gGameInfo) # addiu $t3, $t3, -0x570
.L80072A60:
/* AE9C00 80072A60 240F0001 */  li    $t7, 1
.L80072A64:
/* AE9C04 80072A64 A20F00BC */  sb    $t7, 0xbc($s0)
/* AE9C08 80072A68 00002025 */  move  $a0, $zero
/* AE9C0C 80072A6C 240700FF */  li    $a3, 255
/* AE9C10 80072A70 00047040 */  sll   $t6, $a0, 1
.L80072A74:
/* AE9C14 80072A74 020E3021 */  addu  $a2, $s0, $t6
/* AE9C18 80072A78 02041021 */  addu  $v0, $s0, $a0
/* AE9C1C 80072A7C 905800C0 */  lbu   $t8, 0xc0($v0)
/* AE9C20 80072A80 84D9008C */  lh    $t9, 0x8c($a2)
/* AE9C24 80072A84 02242821 */  addu  $a1, $s1, $a0
/* AE9C28 80072A88 03381821 */  addu  $v1, $t9, $t8
/* AE9C2C 80072A8C 00031C00 */  sll   $v1, $v1, 0x10
/* AE9C30 80072A90 00031C03 */  sra   $v1, $v1, 0x10
/* AE9C34 80072A94 28610100 */  slti  $at, $v1, 0x100
/* AE9C38 80072A98 14200003 */  bnez  $at, .L80072AA8
/* AE9C3C 80072A9C 00000000 */   nop   
/* AE9C40 80072AA0 10000007 */  b     .L80072AC0
/* AE9C44 80072AA4 A0A70004 */   sb    $a3, 4($a1)
.L80072AA8:
/* AE9C48 80072AA8 04610004 */  bgez  $v1, .L80072ABC
/* AE9C4C 80072AAC 02242821 */   addu  $a1, $s1, $a0
/* AE9C50 80072AB0 02242821 */  addu  $a1, $s1, $a0
/* AE9C54 80072AB4 10000002 */  b     .L80072AC0
/* AE9C58 80072AB8 A0A00004 */   sb    $zero, 4($a1)
.L80072ABC:
/* AE9C5C 80072ABC A0A30004 */  sb    $v1, 4($a1)
.L80072AC0:
/* AE9C60 80072AC0 84CF0092 */  lh    $t7, 0x92($a2)
/* AE9C64 80072AC4 904E00C6 */  lbu   $t6, 0xc6($v0)
/* AE9C68 80072AC8 24840001 */  addiu $a0, $a0, 1
/* AE9C6C 80072ACC 3084FFFF */  andi  $a0, $a0, 0xffff
/* AE9C70 80072AD0 01EE1821 */  addu  $v1, $t7, $t6
/* AE9C74 80072AD4 00031C00 */  sll   $v1, $v1, 0x10
/* AE9C78 80072AD8 00031C03 */  sra   $v1, $v1, 0x10
/* AE9C7C 80072ADC 28610100 */  slti  $at, $v1, 0x100
/* AE9C80 80072AE0 14200003 */  bnez  $at, .L80072AF0
/* AE9C84 80072AE4 00000000 */   nop   
/* AE9C88 80072AE8 10000006 */  b     .L80072B04
/* AE9C8C 80072AEC A047002D */   sb    $a3, 0x2d($v0)
.L80072AF0:
/* AE9C90 80072AF0 04630004 */  bgezl $v1, .L80072B04
/* AE9C94 80072AF4 A043002D */   sb    $v1, 0x2d($v0)
/* AE9C98 80072AF8 10000002 */  b     .L80072B04
/* AE9C9C 80072AFC A040002D */   sb    $zero, 0x2d($v0)
/* AE9CA0 80072B00 A043002D */  sb    $v1, 0x2d($v0)
.L80072B04:
/* AE9CA4 80072B04 84D90092 */  lh    $t9, 0x92($a2)
/* AE9CA8 80072B08 905800CC */  lbu   $t8, 0xcc($v0)
/* AE9CAC 80072B0C 03381821 */  addu  $v1, $t9, $t8
/* AE9CB0 80072B10 00031C00 */  sll   $v1, $v1, 0x10
/* AE9CB4 80072B14 00031C03 */  sra   $v1, $v1, 0x10
/* AE9CB8 80072B18 28610100 */  slti  $at, $v1, 0x100
/* AE9CBC 80072B1C 14200003 */  bnez  $at, .L80072B2C
/* AE9CC0 80072B20 00000000 */   nop   
/* AE9CC4 80072B24 10000006 */  b     .L80072B40
/* AE9CC8 80072B28 A047003B */   sb    $a3, 0x3b($v0)
.L80072B2C:
/* AE9CCC 80072B2C 04630004 */  bgezl $v1, .L80072B40
/* AE9CD0 80072B30 A043003B */   sb    $v1, 0x3b($v0)
/* AE9CD4 80072B34 10000002 */  b     .L80072B40
/* AE9CD8 80072B38 A040003B */   sb    $zero, 0x3b($v0)
/* AE9CDC 80072B3C A043003B */  sb    $v1, 0x3b($v0)
.L80072B40:
/* AE9CE0 80072B40 84CF0098 */  lh    $t7, 0x98($a2)
/* AE9CE4 80072B44 904E00CF */  lbu   $t6, 0xcf($v0)
/* AE9CE8 80072B48 01EE1821 */  addu  $v1, $t7, $t6
/* AE9CEC 80072B4C 00031C00 */  sll   $v1, $v1, 0x10
/* AE9CF0 80072B50 00031C03 */  sra   $v1, $v1, 0x10
/* AE9CF4 80072B54 28610100 */  slti  $at, $v1, 0x100
/* AE9CF8 80072B58 14200003 */  bnez  $at, .L80072B68
/* AE9CFC 80072B5C 00000000 */   nop   
/* AE9D00 80072B60 10000006 */  b     .L80072B7C
/* AE9D04 80072B64 A0A70007 */   sb    $a3, 7($a1)
.L80072B68:
/* AE9D08 80072B68 04630004 */  bgezl $v1, .L80072B7C
/* AE9D0C 80072B6C A0A30007 */   sb    $v1, 7($a1)
/* AE9D10 80072B70 10000002 */  b     .L80072B7C
/* AE9D14 80072B74 A0A00007 */   sb    $zero, 7($a1)
/* AE9D18 80072B78 A0A30007 */  sb    $v1, 7($a1)
.L80072B7C:
/* AE9D1C 80072B7C 28810003 */  slti  $at, $a0, 3
/* AE9D20 80072B80 5420FFBC */  bnezl $at, .L80072A74
/* AE9D24 80072B84 00047040 */   sll   $t6, $a0, 1
/* AE9D28 80072B88 820F00C5 */  lb    $t7, 0xc5($s0)
/* AE9D2C 80072B8C 820E00C9 */  lb    $t6, 0xc9($s0)
/* AE9D30 80072B90 821900C3 */  lb    $t9, 0xc3($s0)
/* AE9D34 80072B94 821800C4 */  lb    $t8, 0xc4($s0)
/* AE9D38 80072B98 A20F002C */  sb    $t7, 0x2c($s0)
/* AE9D3C 80072B9C A20E0038 */  sb    $t6, 0x38($s0)
/* AE9D40 80072BA0 860E009E */  lh    $t6, 0x9e($s0)
/* AE9D44 80072BA4 860F00D2 */  lh    $t7, 0xd2($s0)
/* AE9D48 80072BA8 A219002A */  sb    $t9, 0x2a($s0)
/* AE9D4C 80072BAC A218002B */  sb    $t8, 0x2b($s0)
/* AE9D50 80072BB0 821900CA */  lb    $t9, 0xca($s0)
/* AE9D54 80072BB4 821800CB */  lb    $t8, 0xcb($s0)
/* AE9D58 80072BB8 01EE1021 */  addu  $v0, $t7, $t6
/* AE9D5C 80072BBC 284103E5 */  slti  $at, $v0, 0x3e5
/* AE9D60 80072BC0 A2190039 */  sb    $t9, 0x39($s0)
/* AE9D64 80072BC4 10200003 */  beqz  $at, .L80072BD4
/* AE9D68 80072BC8 A218003A */   sb    $t8, 0x3a($s0)
/* AE9D6C 80072BCC 10000003 */  b     .L80072BDC
/* AE9D70 80072BD0 A622000A */   sh    $v0, 0xa($s1)
.L80072BD4:
/* AE9D74 80072BD4 241903E4 */  li    $t9, 996
/* AE9D78 80072BD8 A639000A */  sh    $t9, 0xa($s1)
.L80072BDC:
/* AE9D7C 80072BDC 861800D4 */  lh    $t8, 0xd4($s0)
/* AE9D80 80072BE0 860F00A0 */  lh    $t7, 0xa0($s0)
/* AE9D84 80072BE4 240E3200 */  li    $t6, 12800
/* AE9D88 80072BE8 030F1021 */  addu  $v0, $t8, $t7
/* AE9D8C 80072BEC 28413201 */  slti  $at, $v0, 0x3201
/* AE9D90 80072BF0 50200004 */  beql  $at, $zero, .L80072C04
/* AE9D94 80072BF4 A62E000C */   sh    $t6, 0xc($s1)
/* AE9D98 80072BF8 10000002 */  b     .L80072C04
/* AE9D9C 80072BFC A622000C */   sh    $v0, 0xc($s1)
/* AE9DA0 80072C00 A62E000C */  sh    $t6, 0xc($s1)
.L80072C04:
/* AE9DA4 80072C04 8D620000 */  lw    $v0, ($t3)
/* AE9DA8 80072C08 84590026 */  lh    $t9, 0x26($v0)
/* AE9DAC 80072C0C 5320004C */  beql  $t9, $zero, .L80072D40
/* AE9DB0 80072C10 84580014 */   lh    $t8, 0x14($v0)
/* AE9DB4 80072C14 92380004 */  lbu   $t8, 4($s1)
/* AE9DB8 80072C18 A4580014 */  sh    $t8, 0x14($v0)
/* AE9DBC 80072C1C 8D6E0000 */  lw    $t6, ($t3)
/* AE9DC0 80072C20 922F0005 */  lbu   $t7, 5($s1)
/* AE9DC4 80072C24 A5CF0016 */  sh    $t7, 0x16($t6)
/* AE9DC8 80072C28 8D780000 */  lw    $t8, ($t3)
/* AE9DCC 80072C2C 92390006 */  lbu   $t9, 6($s1)
/* AE9DD0 80072C30 A7190018 */  sh    $t9, 0x18($t8)
/* AE9DD4 80072C34 8D6E0000 */  lw    $t6, ($t3)
/* AE9DD8 80072C38 920F002D */  lbu   $t7, 0x2d($s0)
/* AE9DDC 80072C3C A5CF001A */  sh    $t7, 0x1a($t6)
/* AE9DE0 80072C40 8D780000 */  lw    $t8, ($t3)
/* AE9DE4 80072C44 9219002E */  lbu   $t9, 0x2e($s0)
/* AE9DE8 80072C48 A719001C */  sh    $t9, 0x1c($t8)
/* AE9DEC 80072C4C 8D6E0000 */  lw    $t6, ($t3)
/* AE9DF0 80072C50 920F002F */  lbu   $t7, 0x2f($s0)
/* AE9DF4 80072C54 A5CF001E */  sh    $t7, 0x1e($t6)
/* AE9DF8 80072C58 8D780000 */  lw    $t8, ($t3)
/* AE9DFC 80072C5C 9219003B */  lbu   $t9, 0x3b($s0)
/* AE9E00 80072C60 A7190020 */  sh    $t9, 0x20($t8)
/* AE9E04 80072C64 8D6E0000 */  lw    $t6, ($t3)
/* AE9E08 80072C68 920F003C */  lbu   $t7, 0x3c($s0)
/* AE9E0C 80072C6C A5CF0022 */  sh    $t7, 0x22($t6)
/* AE9E10 80072C70 8D780000 */  lw    $t8, ($t3)
/* AE9E14 80072C74 9219003D */  lbu   $t9, 0x3d($s0)
/* AE9E18 80072C78 A7190024 */  sh    $t9, 0x24($t8)
/* AE9E1C 80072C7C 8D6E0000 */  lw    $t6, ($t3)
/* AE9E20 80072C80 922F0007 */  lbu   $t7, 7($s1)
/* AE9E24 80072C84 A5CF0028 */  sh    $t7, 0x28($t6)
/* AE9E28 80072C88 8D780000 */  lw    $t8, ($t3)
/* AE9E2C 80072C8C 92390008 */  lbu   $t9, 8($s1)
/* AE9E30 80072C90 A719002A */  sh    $t9, 0x2a($t8)
/* AE9E34 80072C94 8D6E0000 */  lw    $t6, ($t3)
/* AE9E38 80072C98 922F0009 */  lbu   $t7, 9($s1)
/* AE9E3C 80072C9C A5CF002C */  sh    $t7, 0x2c($t6)
/* AE9E40 80072CA0 8D780000 */  lw    $t8, ($t3)
/* AE9E44 80072CA4 8639000C */  lh    $t9, 0xc($s1)
/* AE9E48 80072CA8 A719002E */  sh    $t9, 0x2e($t8)
/* AE9E4C 80072CAC 8D6E0000 */  lw    $t6, ($t3)
/* AE9E50 80072CB0 862F000A */  lh    $t7, 0xa($s1)
/* AE9E54 80072CB4 A5CF0030 */  sh    $t7, 0x30($t6)
/* AE9E58 80072CB8 8D780000 */  lw    $t8, ($t3)
/* AE9E5C 80072CBC 8219002A */  lb    $t9, 0x2a($s0)
/* AE9E60 80072CC0 A7190B5A */  sh    $t9, 0xb5a($t8)
/* AE9E64 80072CC4 8D6E0000 */  lw    $t6, ($t3)
/* AE9E68 80072CC8 820F002B */  lb    $t7, 0x2b($s0)
/* AE9E6C 80072CCC A5CF0B5C */  sh    $t7, 0xb5c($t6)
/* AE9E70 80072CD0 8D780000 */  lw    $t8, ($t3)
/* AE9E74 80072CD4 8219002C */  lb    $t9, 0x2c($s0)
/* AE9E78 80072CD8 A7190B5E */  sh    $t9, 0xb5e($t8)
/* AE9E7C 80072CDC 8D6E0000 */  lw    $t6, ($t3)
/* AE9E80 80072CE0 820F0038 */  lb    $t7, 0x38($s0)
/* AE9E84 80072CE4 A5CF0B60 */  sh    $t7, 0xb60($t6)
/* AE9E88 80072CE8 8D780000 */  lw    $t8, ($t3)
/* AE9E8C 80072CEC 82190039 */  lb    $t9, 0x39($s0)
/* AE9E90 80072CF0 A7190B62 */  sh    $t9, 0xb62($t8)
/* AE9E94 80072CF4 8D6E0000 */  lw    $t6, ($t3)
/* AE9E98 80072CF8 820F003A */  lb    $t7, 0x3a($s0)
/* AE9E9C 80072CFC A5CF0B64 */  sh    $t7, 0xb64($t6)
/* AE9EA0 80072D00 8D780000 */  lw    $t8, ($t3)
/* AE9EA4 80072D04 861900A8 */  lh    $t9, 0xa8($s0)
/* AE9EA8 80072D08 A7190874 */  sh    $t9, 0x874($t8)
/* AE9EAC 80072D0C 8D6E0000 */  lw    $t6, ($t3)
/* AE9EB0 80072D10 860F00AA */  lh    $t7, 0xaa($s0)
/* AE9EB4 80072D14 A5CF0876 */  sh    $t7, 0x876($t6)
/* AE9EB8 80072D18 8D780000 */  lw    $t8, ($t3)
/* AE9EBC 80072D1C 861900AC */  lh    $t9, 0xac($s0)
/* AE9EC0 80072D20 A7190878 */  sh    $t9, 0x878($t8)
/* AE9EC4 80072D24 C60400B0 */  lwc1  $f4, 0xb0($s0)
/* AE9EC8 80072D28 8D790000 */  lw    $t9, ($t3)
/* AE9ECC 80072D2C 4600218D */  trunc.w.s $f6, $f4
/* AE9ED0 80072D30 440E3000 */  mfc1  $t6, $f6
/* AE9ED4 80072D34 100000CE */  b     .L80073070
/* AE9ED8 80072D38 A72E087A */   sh    $t6, 0x87a($t9)
/* AE9EDC 80072D3C 84580014 */  lh    $t8, 0x14($v0)
.L80072D40:
/* AE9EE0 80072D40 A2380004 */  sb    $t8, 4($s1)
/* AE9EE4 80072D44 8D6F0000 */  lw    $t7, ($t3)
/* AE9EE8 80072D48 85EE0016 */  lh    $t6, 0x16($t7)
/* AE9EEC 80072D4C A22E0005 */  sb    $t6, 5($s1)
/* AE9EF0 80072D50 8D790000 */  lw    $t9, ($t3)
/* AE9EF4 80072D54 87380018 */  lh    $t8, 0x18($t9)
/* AE9EF8 80072D58 A2380006 */  sb    $t8, 6($s1)
/* AE9EFC 80072D5C 8D6F0000 */  lw    $t7, ($t3)
/* AE9F00 80072D60 85EE001A */  lh    $t6, 0x1a($t7)
/* AE9F04 80072D64 A20E002D */  sb    $t6, 0x2d($s0)
/* AE9F08 80072D68 8D790000 */  lw    $t9, ($t3)
/* AE9F0C 80072D6C 8738001C */  lh    $t8, 0x1c($t9)
/* AE9F10 80072D70 A218002E */  sb    $t8, 0x2e($s0)
/* AE9F14 80072D74 8D6F0000 */  lw    $t7, ($t3)
/* AE9F18 80072D78 85EE001E */  lh    $t6, 0x1e($t7)
/* AE9F1C 80072D7C A20E002F */  sb    $t6, 0x2f($s0)
/* AE9F20 80072D80 8D790000 */  lw    $t9, ($t3)
/* AE9F24 80072D84 87380020 */  lh    $t8, 0x20($t9)
/* AE9F28 80072D88 A218003B */  sb    $t8, 0x3b($s0)
/* AE9F2C 80072D8C 8D6F0000 */  lw    $t7, ($t3)
/* AE9F30 80072D90 85EE0022 */  lh    $t6, 0x22($t7)
/* AE9F34 80072D94 A20E003C */  sb    $t6, 0x3c($s0)
/* AE9F38 80072D98 8D790000 */  lw    $t9, ($t3)
/* AE9F3C 80072D9C 87380024 */  lh    $t8, 0x24($t9)
/* AE9F40 80072DA0 A218003D */  sb    $t8, 0x3d($s0)
/* AE9F44 80072DA4 8D6F0000 */  lw    $t7, ($t3)
/* AE9F48 80072DA8 85EE0028 */  lh    $t6, 0x28($t7)
/* AE9F4C 80072DAC A22E0007 */  sb    $t6, 7($s1)
/* AE9F50 80072DB0 8D790000 */  lw    $t9, ($t3)
/* AE9F54 80072DB4 8738002A */  lh    $t8, 0x2a($t9)
/* AE9F58 80072DB8 A2380008 */  sb    $t8, 8($s1)
/* AE9F5C 80072DBC 8D6F0000 */  lw    $t7, ($t3)
/* AE9F60 80072DC0 85EE002C */  lh    $t6, 0x2c($t7)
/* AE9F64 80072DC4 A22E0009 */  sb    $t6, 9($s1)
/* AE9F68 80072DC8 8D790000 */  lw    $t9, ($t3)
/* AE9F6C 80072DCC 87380030 */  lh    $t8, 0x30($t9)
/* AE9F70 80072DD0 A638000A */  sh    $t8, 0xa($s1)
/* AE9F74 80072DD4 8D6F0000 */  lw    $t7, ($t3)
/* AE9F78 80072DD8 85EE002E */  lh    $t6, 0x2e($t7)
/* AE9F7C 80072DDC A62E000C */  sh    $t6, 0xc($s1)
/* AE9F80 80072DE0 8D620000 */  lw    $v0, ($t3)
/* AE9F84 80072DE4 84590B70 */  lh    $t9, 0xb70($v0)
/* AE9F88 80072DE8 53200082 */  beql  $t9, $zero, .L80072FF4
/* AE9F8C 80072DEC 84590B5A */   lh    $t9, 0xb5a($v0)
/* AE9F90 80072DF0 0C01DE0D */  jal   Math_CosS
/* AE9F94 80072DF4 84440B68 */   lh    $a0, 0xb68($v0)
/* AE9F98 80072DF8 3C0B8016 */  lui   $t3, %hi(gGameInfo) # $t3, 0x8016
/* AE9F9C 80072DFC 256BFA90 */  addiu $t3, %lo(gGameInfo) # addiu $t3, $t3, -0x570
/* AE9FA0 80072E00 8D780000 */  lw    $t8, ($t3)
/* AE9FA4 80072E04 E7A00044 */  swc1  $f0, 0x44($sp)
/* AE9FA8 80072E08 0C01DE0D */  jal   Math_CosS
/* AE9FAC 80072E0C 87040B6A */   lh    $a0, 0xb6a($t8)
/* AE9FB0 80072E10 C7B00044 */  lwc1  $f16, 0x44($sp)
/* AE9FB4 80072E14 3C0142F0 */  li    $at, 0x42F00000 # 0.000000
/* AE9FB8 80072E18 44819000 */  mtc1  $at, $f18
/* AE9FBC 80072E1C 46100282 */  mul.s $f10, $f0, $f16
/* AE9FC0 80072E20 3C0B8016 */  lui   $t3, %hi(gGameInfo) # $t3, 0x8016
/* AE9FC4 80072E24 256BFA90 */  addiu $t3, %lo(gGameInfo) # addiu $t3, $t3, -0x570
/* AE9FC8 80072E28 8D790000 */  lw    $t9, ($t3)
/* AE9FCC 80072E2C 46125202 */  mul.s $f8, $f10, $f18
/* AE9FD0 80072E30 4600410D */  trunc.w.s $f4, $f8
/* AE9FD4 80072E34 440E2000 */  mfc1  $t6, $f4
/* AE9FD8 80072E38 00000000 */  nop   
/* AE9FDC 80072E3C A72E0B5A */  sh    $t6, 0xb5a($t9)
/* AE9FE0 80072E40 8D780000 */  lw    $t8, ($t3)
/* AE9FE4 80072E44 870F0B5A */  lh    $t7, 0xb5a($t8)
/* AE9FE8 80072E48 A20F002A */  sb    $t7, 0x2a($s0)
/* AE9FEC 80072E4C 8D6E0000 */  lw    $t6, ($t3)
/* AE9FF0 80072E50 0C01DE1C */  jal   Math_SinS
/* AE9FF4 80072E54 85C40B68 */   lh    $a0, 0xb68($t6)
/* AE9FF8 80072E58 3C0B8016 */  lui   $t3, %hi(gGameInfo) # $t3, 0x8016
/* AE9FFC 80072E5C 256BFA90 */  addiu $t3, %lo(gGameInfo) # addiu $t3, $t3, -0x570
/* AEA000 80072E60 8D790000 */  lw    $t9, ($t3)
/* AEA004 80072E64 E7A00044 */  swc1  $f0, 0x44($sp)
/* AEA008 80072E68 0C01DE0D */  jal   Math_CosS
/* AEA00C 80072E6C 87240B6A */   lh    $a0, 0xb6a($t9)
/* AEA010 80072E70 C7A60044 */  lwc1  $f6, 0x44($sp)
/* AEA014 80072E74 3C0142F0 */  li    $at, 0x42F00000 # 0.000000
/* AEA018 80072E78 44815000 */  mtc1  $at, $f10
/* AEA01C 80072E7C 46060402 */  mul.s $f16, $f0, $f6
/* AEA020 80072E80 3C0B8016 */  lui   $t3, %hi(gGameInfo) # $t3, 0x8016
/* AEA024 80072E84 256BFA90 */  addiu $t3, %lo(gGameInfo) # addiu $t3, $t3, -0x570
/* AEA028 80072E88 8D6E0000 */  lw    $t6, ($t3)
/* AEA02C 80072E8C 460A8482 */  mul.s $f18, $f16, $f10
/* AEA030 80072E90 4600920D */  trunc.w.s $f8, $f18
/* AEA034 80072E94 440F4000 */  mfc1  $t7, $f8
/* AEA038 80072E98 00000000 */  nop   
/* AEA03C 80072E9C A5CF0B5C */  sh    $t7, 0xb5c($t6)
/* AEA040 80072EA0 8D790000 */  lw    $t9, ($t3)
/* AEA044 80072EA4 87380B5C */  lh    $t8, 0xb5c($t9)
/* AEA048 80072EA8 A218002B */  sb    $t8, 0x2b($s0)
/* AEA04C 80072EAC 8D6F0000 */  lw    $t7, ($t3)
/* AEA050 80072EB0 0C01DE1C */  jal   Math_SinS
/* AEA054 80072EB4 85E40B6A */   lh    $a0, 0xb6a($t7)
/* AEA058 80072EB8 3C0142F0 */  li    $at, 0x42F00000 # 0.000000
/* AEA05C 80072EBC 44812000 */  mtc1  $at, $f4
/* AEA060 80072EC0 3C0B8016 */  lui   $t3, %hi(gGameInfo) # $t3, 0x8016
/* AEA064 80072EC4 256BFA90 */  addiu $t3, %lo(gGameInfo) # addiu $t3, $t3, -0x570
/* AEA068 80072EC8 46040182 */  mul.s $f6, $f0, $f4
/* AEA06C 80072ECC 8D780000 */  lw    $t8, ($t3)
/* AEA070 80072ED0 4600340D */  trunc.w.s $f16, $f6
/* AEA074 80072ED4 44198000 */  mfc1  $t9, $f16
/* AEA078 80072ED8 00000000 */  nop   
/* AEA07C 80072EDC A7190B5E */  sh    $t9, 0xb5e($t8)
/* AEA080 80072EE0 8D6F0000 */  lw    $t7, ($t3)
/* AEA084 80072EE4 85EE0B5E */  lh    $t6, 0xb5e($t7)
/* AEA088 80072EE8 A20E002C */  sb    $t6, 0x2c($s0)
/* AEA08C 80072EEC 8D790000 */  lw    $t9, ($t3)
/* AEA090 80072EF0 0C01DE0D */  jal   Math_CosS
/* AEA094 80072EF4 87240B6C */   lh    $a0, 0xb6c($t9)
/* AEA098 80072EF8 3C0B8016 */  lui   $t3, %hi(gGameInfo) # $t3, 0x8016
/* AEA09C 80072EFC 256BFA90 */  addiu $t3, %lo(gGameInfo) # addiu $t3, $t3, -0x570
/* AEA0A0 80072F00 8D780000 */  lw    $t8, ($t3)
/* AEA0A4 80072F04 E7A00044 */  swc1  $f0, 0x44($sp)
/* AEA0A8 80072F08 0C01DE0D */  jal   Math_CosS
/* AEA0AC 80072F0C 87040B6E */   lh    $a0, 0xb6e($t8)
/* AEA0B0 80072F10 C7AA0044 */  lwc1  $f10, 0x44($sp)
/* AEA0B4 80072F14 3C0142F0 */  li    $at, 0x42F00000 # 0.000000
/* AEA0B8 80072F18 44814000 */  mtc1  $at, $f8
/* AEA0BC 80072F1C 460A0482 */  mul.s $f18, $f0, $f10
/* AEA0C0 80072F20 3C0B8016 */  lui   $t3, %hi(gGameInfo) # $t3, 0x8016
/* AEA0C4 80072F24 256BFA90 */  addiu $t3, %lo(gGameInfo) # addiu $t3, $t3, -0x570
/* AEA0C8 80072F28 8D790000 */  lw    $t9, ($t3)
/* AEA0CC 80072F2C 46089102 */  mul.s $f4, $f18, $f8
/* AEA0D0 80072F30 4600218D */  trunc.w.s $f6, $f4
/* AEA0D4 80072F34 440E3000 */  mfc1  $t6, $f6
/* AEA0D8 80072F38 00000000 */  nop   
/* AEA0DC 80072F3C A72E0B60 */  sh    $t6, 0xb60($t9)
/* AEA0E0 80072F40 8D780000 */  lw    $t8, ($t3)
/* AEA0E4 80072F44 870F0B60 */  lh    $t7, 0xb60($t8)
/* AEA0E8 80072F48 A20F0038 */  sb    $t7, 0x38($s0)
/* AEA0EC 80072F4C 8D6E0000 */  lw    $t6, ($t3)
/* AEA0F0 80072F50 0C01DE1C */  jal   Math_SinS
/* AEA0F4 80072F54 85C40B6C */   lh    $a0, 0xb6c($t6)
/* AEA0F8 80072F58 3C0B8016 */  lui   $t3, %hi(gGameInfo) # $t3, 0x8016
/* AEA0FC 80072F5C 256BFA90 */  addiu $t3, %lo(gGameInfo) # addiu $t3, $t3, -0x570
/* AEA100 80072F60 8D790000 */  lw    $t9, ($t3)
/* AEA104 80072F64 E7A00044 */  swc1  $f0, 0x44($sp)
/* AEA108 80072F68 0C01DE0D */  jal   Math_CosS
/* AEA10C 80072F6C 87240B6E */   lh    $a0, 0xb6e($t9)
/* AEA110 80072F70 C7B00044 */  lwc1  $f16, 0x44($sp)
/* AEA114 80072F74 3C0142F0 */  li    $at, 0x42F00000 # 0.000000
/* AEA118 80072F78 44819000 */  mtc1  $at, $f18
/* AEA11C 80072F7C 46100282 */  mul.s $f10, $f0, $f16
/* AEA120 80072F80 3C0B8016 */  lui   $t3, %hi(gGameInfo) # $t3, 0x8016
/* AEA124 80072F84 256BFA90 */  addiu $t3, %lo(gGameInfo) # addiu $t3, $t3, -0x570
/* AEA128 80072F88 8D6E0000 */  lw    $t6, ($t3)
/* AEA12C 80072F8C 46125202 */  mul.s $f8, $f10, $f18
/* AEA130 80072F90 4600410D */  trunc.w.s $f4, $f8
/* AEA134 80072F94 440F2000 */  mfc1  $t7, $f4
/* AEA138 80072F98 00000000 */  nop   
/* AEA13C 80072F9C A5CF0B62 */  sh    $t7, 0xb62($t6)
/* AEA140 80072FA0 8D790000 */  lw    $t9, ($t3)
/* AEA144 80072FA4 87380B62 */  lh    $t8, 0xb62($t9)
/* AEA148 80072FA8 A2180039 */  sb    $t8, 0x39($s0)
/* AEA14C 80072FAC 8D6F0000 */  lw    $t7, ($t3)
/* AEA150 80072FB0 0C01DE1C */  jal   Math_SinS
/* AEA154 80072FB4 85E40B6E */   lh    $a0, 0xb6e($t7)
/* AEA158 80072FB8 3C0142F0 */  li    $at, 0x42F00000 # 0.000000
/* AEA15C 80072FBC 44813000 */  mtc1  $at, $f6
/* AEA160 80072FC0 3C0B8016 */  lui   $t3, %hi(gGameInfo) # $t3, 0x8016
/* AEA164 80072FC4 256BFA90 */  addiu $t3, %lo(gGameInfo) # addiu $t3, $t3, -0x570
/* AEA168 80072FC8 46060402 */  mul.s $f16, $f0, $f6
/* AEA16C 80072FCC 8D780000 */  lw    $t8, ($t3)
/* AEA170 80072FD0 4600828D */  trunc.w.s $f10, $f16
/* AEA174 80072FD4 44195000 */  mfc1  $t9, $f10
/* AEA178 80072FD8 00000000 */  nop   
/* AEA17C 80072FDC A7190B64 */  sh    $t9, 0xb64($t8)
/* AEA180 80072FE0 8D6F0000 */  lw    $t7, ($t3)
/* AEA184 80072FE4 85EE0B64 */  lh    $t6, 0xb64($t7)
/* AEA188 80072FE8 10000012 */  b     .L80073034
/* AEA18C 80072FEC A20E003A */   sb    $t6, 0x3a($s0)
/* AEA190 80072FF0 84590B5A */  lh    $t9, 0xb5a($v0)
.L80072FF4:
/* AEA194 80072FF4 A219002A */  sb    $t9, 0x2a($s0)
/* AEA198 80072FF8 8D780000 */  lw    $t8, ($t3)
/* AEA19C 80072FFC 870F0B5C */  lh    $t7, 0xb5c($t8)
/* AEA1A0 80073000 A20F002B */  sb    $t7, 0x2b($s0)
/* AEA1A4 80073004 8D6E0000 */  lw    $t6, ($t3)
/* AEA1A8 80073008 85D90B5E */  lh    $t9, 0xb5e($t6)
/* AEA1AC 8007300C A219002C */  sb    $t9, 0x2c($s0)
/* AEA1B0 80073010 8D780000 */  lw    $t8, ($t3)
/* AEA1B4 80073014 870F0B60 */  lh    $t7, 0xb60($t8)
/* AEA1B8 80073018 A20F0038 */  sb    $t7, 0x38($s0)
/* AEA1BC 8007301C 8D6E0000 */  lw    $t6, ($t3)
/* AEA1C0 80073020 85D90B62 */  lh    $t9, 0xb62($t6)
/* AEA1C4 80073024 A2190039 */  sb    $t9, 0x39($s0)
/* AEA1C8 80073028 8D780000 */  lw    $t8, ($t3)
/* AEA1CC 8007302C 870F0B64 */  lh    $t7, 0xb64($t8)
/* AEA1D0 80073030 A20F003A */  sb    $t7, 0x3a($s0)
.L80073034:
/* AEA1D4 80073034 8D6E0000 */  lw    $t6, ($t3)
/* AEA1D8 80073038 85D90874 */  lh    $t9, 0x874($t6)
/* AEA1DC 8007303C A61900A8 */  sh    $t9, 0xa8($s0)
/* AEA1E0 80073040 8D780000 */  lw    $t8, ($t3)
/* AEA1E4 80073044 870F0876 */  lh    $t7, 0x876($t8)
/* AEA1E8 80073048 A60F00AA */  sh    $t7, 0xaa($s0)
/* AEA1EC 8007304C 8D6E0000 */  lw    $t6, ($t3)
/* AEA1F0 80073050 85D90878 */  lh    $t9, 0x878($t6)
/* AEA1F4 80073054 A61900AC */  sh    $t9, 0xac($s0)
/* AEA1F8 80073058 8D780000 */  lw    $t8, ($t3)
/* AEA1FC 8007305C 870F087A */  lh    $t7, 0x87a($t8)
/* AEA200 80073060 448F9000 */  mtc1  $t7, $f18
/* AEA204 80073064 00000000 */  nop   
/* AEA208 80073068 46809220 */  cvt.s.w $f8, $f18
/* AEA20C 8007306C E60800B0 */  swc1  $f8, 0xb0($s0)
.L80073070:
/* AEA210 80073070 820E002A */  lb    $t6, 0x2a($s0)
/* AEA214 80073074 55C0000A */  bnezl $t6, .L800730A0
/* AEA218 80073078 820E0038 */   lb    $t6, 0x38($s0)
/* AEA21C 8007307C 8219002B */  lb    $t9, 0x2b($s0)
/* AEA220 80073080 57200007 */  bnezl $t9, .L800730A0
/* AEA224 80073084 820E0038 */   lb    $t6, 0x38($s0)
/* AEA228 80073088 8218002C */  lb    $t8, 0x2c($s0)
/* AEA22C 8007308C 240F0001 */  li    $t7, 1
/* AEA230 80073090 57000003 */  bnezl $t8, .L800730A0
/* AEA234 80073094 820E0038 */   lb    $t6, 0x38($s0)
/* AEA238 80073098 A20F002A */  sb    $t7, 0x2a($s0)
/* AEA23C 8007309C 820E0038 */  lb    $t6, 0x38($s0)
.L800730A0:
/* AEA240 800730A0 55C0000A */  bnezl $t6, .L800730CC
/* AEA244 800730A4 8FBF001C */   lw    $ra, 0x1c($sp)
/* AEA248 800730A8 82190039 */  lb    $t9, 0x39($s0)
/* AEA24C 800730AC 57200007 */  bnezl $t9, .L800730CC
/* AEA250 800730B0 8FBF001C */   lw    $ra, 0x1c($sp)
/* AEA254 800730B4 8218003A */  lb    $t8, 0x3a($s0)
/* AEA258 800730B8 240F0001 */  li    $t7, 1
/* AEA25C 800730BC 57000003 */  bnezl $t8, .L800730CC
/* AEA260 800730C0 8FBF001C */   lw    $ra, 0x1c($sp)
/* AEA264 800730C4 A20F0038 */  sb    $t7, 0x38($s0)
/* AEA268 800730C8 8FBF001C */  lw    $ra, 0x1c($sp)
.L800730CC:
/* AEA26C 800730CC 8FB00014 */  lw    $s0, 0x14($sp)
/* AEA270 800730D0 8FB10018 */  lw    $s1, 0x18($sp)
/* AEA274 800730D4 03E00008 */  jr    $ra
/* AEA278 800730D8 27BD0090 */   addiu $sp, $sp, 0x90

