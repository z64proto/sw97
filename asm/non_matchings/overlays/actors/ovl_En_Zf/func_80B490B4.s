glabel func_80B490B4
/* 05064 80B490B4 27BDFFD0 */  addiu   $sp, $sp, 0xFFD0           ## $sp = FFFFFFD0
/* 05068 80B490B8 AFBF0024 */  sw      $ra, 0x0024($sp)           
/* 0506C 80B490BC AFB00020 */  sw      $s0, 0x0020($sp)           
/* 05070 80B490C0 AFA50034 */  sw      $a1, 0x0034($sp)           
/* 05074 80B490C4 90820429 */  lbu     $v0, 0x0429($a0)           ## 00000429
/* 05078 80B490C8 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 0507C 80B490CC 304E0002 */  andi    $t6, $v0, 0x0002           ## $t6 = 00000000
/* 05080 80B490D0 51C0005A */  beql    $t6, $zero, .L80B4923C     
/* 05084 80B490D4 8FBF0024 */  lw      $ra, 0x0024($sp)           
/* 05088 80B490D8 8C8F03DC */  lw      $t7, 0x03DC($a0)           ## 000003DC
/* 0508C 80B490DC 29E1000F */  slti    $at, $t7, 0x000F           
/* 05090 80B490E0 50200056 */  beql    $at, $zero, .L80B4923C     
/* 05094 80B490E4 8FBF0024 */  lw      $ra, 0x0024($sp)           
/* 05098 80B490E8 8483001C */  lh      $v1, 0x001C($a0)           ## 0000001C
/* 0509C 80B490EC 3058FFFD */  andi    $t8, $v0, 0xFFFD           ## $t8 = 00000000
/* 050A0 80B490F0 A0980429 */  sb      $t8, 0x0429($a0)           ## 00000429
/* 050A4 80B490F4 04600004 */  bltz    $v1, .L80B49108            
/* 050A8 80B490F8 3C1980B5 */  lui     $t9, %hi(D_80B4A1B4)       ## $t9 = 80B50000
/* 050AC 80B490FC 8739A1B4 */  lh      $t9, %lo(D_80B4A1B4)($t9)  
/* 050B0 80B49100 5079004E */  beql    $v1, $t9, .L80B4923C       
/* 050B4 80B49104 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80B49108:
/* 050B8 80B49108 920200B1 */  lbu     $v0, 0x00B1($s0)           ## 000000B1
/* 050BC 80B4910C 24010006 */  addiu   $at, $zero, 0x0006         ## $at = 00000006
/* 050C0 80B49110 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 050C4 80B49114 10410048 */  beq     $v0, $at, .L80B49238       
/* 050C8 80B49118 26050430 */  addiu   $a1, $s0, 0x0430           ## $a1 = 00000430
/* 050CC 80B4911C A2020410 */  sb      $v0, 0x0410($s0)           ## 00000410
/* 050D0 80B49120 0C00D594 */  jal     Actor_SetDropFlag              
/* 050D4 80B49124 00003025 */  or      $a2, $zero, $zero          ## $a2 = 00000000
/* 050D8 80B49128 920200B1 */  lbu     $v0, 0x00B1($s0)           ## 000000B1
/* 050DC 80B4912C 24010001 */  addiu   $at, $zero, 0x0001         ## $at = 00000001
/* 050E0 80B49130 10410003 */  beq     $v0, $at, .L80B49140       
/* 050E4 80B49134 2401000F */  addiu   $at, $zero, 0x000F         ## $at = 0000000F
/* 050E8 80B49138 14410011 */  bne     $v0, $at, .L80B49180       
/* 050EC 80B4913C 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
.L80B49140:
/* 050F0 80B49140 8E0803DC */  lw      $t0, 0x03DC($s0)           ## 000003DC
/* 050F4 80B49144 2401000E */  addiu   $at, $zero, 0x000E         ## $at = 0000000E
/* 050F8 80B49148 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 050FC 80B4914C 1101003A */  beq     $t0, $at, .L80B49238       
/* 05100 80B49150 00002825 */  or      $a1, $zero, $zero          ## $a1 = 00000000
/* 05104 80B49154 24090050 */  addiu   $t1, $zero, 0x0050         ## $t1 = 00000050
/* 05108 80B49158 AFA90010 */  sw      $t1, 0x0010($sp)           
/* 0510C 80B4915C 24060078 */  addiu   $a2, $zero, 0x0078         ## $a2 = 00000078
/* 05110 80B49160 0C00D09B */  jal     Actor_SetColorFilter              
/* 05114 80B49164 00003825 */  or      $a3, $zero, $zero          ## $a3 = 00000000
/* 05118 80B49168 0C00D58A */  jal     Actor_ApplyDamage
              
/* 0511C 80B4916C 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 05120 80B49170 0C2D1C14 */  jal     func_80B47050              
/* 05124 80B49174 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 05128 80B49178 10000030 */  beq     $zero, $zero, .L80B4923C   
/* 0512C 80B4917C 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80B49180:
/* 05130 80B49180 0C00BE0A */  jal     Audio_PlayActorSound2
              
/* 05134 80B49184 24053829 */  addiu   $a1, $zero, 0x3829         ## $a1 = 00003829
/* 05138 80B49188 240A0008 */  addiu   $t2, $zero, 0x0008         ## $t2 = 00000008
/* 0513C 80B4918C AFAA0010 */  sw      $t2, 0x0010($sp)           
/* 05140 80B49190 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 05144 80B49194 24054000 */  addiu   $a1, $zero, 0x4000         ## $a1 = 00004000
/* 05148 80B49198 240600FF */  addiu   $a2, $zero, 0x00FF         ## $a2 = 000000FF
/* 0514C 80B4919C 0C00D09B */  jal     Actor_SetColorFilter              
/* 05150 80B491A0 00003825 */  or      $a3, $zero, $zero          ## $a3 = 00000000
/* 05154 80B491A4 0C00D58A */  jal     Actor_ApplyDamage
              
/* 05158 80B491A8 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 0515C 80B491AC 14400013 */  bne     $v0, $zero, .L80B491FC     
/* 05160 80B491B0 3C0C80B5 */  lui     $t4, %hi(D_80B4A1B4)       ## $t4 = 80B50000
/* 05164 80B491B4 24070040 */  addiu   $a3, $zero, 0x0040         ## $a3 = 00000040
/* 05168 80B491B8 A7A7002A */  sh      $a3, 0x002A($sp)           
/* 0516C 80B491BC 0C2D233B */  jal     func_80B48CEC              
/* 05170 80B491C0 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 05174 80B491C4 860B001C */  lh      $t3, 0x001C($s0)           ## 0000001C
/* 05178 80B491C8 2401FFFE */  addiu   $at, $zero, 0xFFFE         ## $at = FFFFFFFE
/* 0517C 80B491CC 87A7002A */  lh      $a3, 0x002A($sp)           
/* 05180 80B491D0 15610002 */  bne     $t3, $at, .L80B491DC       
/* 05184 80B491D4 8FA40034 */  lw      $a0, 0x0034($sp)           
/* 05188 80B491D8 240700E0 */  addiu   $a3, $zero, 0x00E0         ## $a3 = 000000E0
.L80B491DC:
/* 0518C 80B491DC 02002825 */  or      $a1, $s0, $zero            ## $a1 = 00000000
/* 05190 80B491E0 0C007E50 */  jal     Item_DropCollectibleRandom
              
/* 05194 80B491E4 26060024 */  addiu   $a2, $s0, 0x0024           ## $a2 = 00000024
/* 05198 80B491E8 8FA40034 */  lw      $a0, 0x0034($sp)           
/* 0519C 80B491EC 0C00CB1F */  nop              
/* 051A0 80B491F0 02002825 */  or      $a1, $s0, $zero            ## $a1 = 00000000
/* 051A4 80B491F4 10000011 */  beq     $zero, $zero, .L80B4923C   
/* 051A8 80B491F8 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80B491FC:
/* 051AC 80B491FC 858CA1B4 */  lh      $t4, %lo(D_80B4A1B4)($t4)  
/* 051B0 80B49200 2401FFFF */  addiu   $at, $zero, 0xFFFF         ## $at = FFFFFFFF
/* 051B4 80B49204 1181000A */  beq     $t4, $at, .L80B49230       
/* 051B8 80B49208 00000000 */  nop
/* 051BC 80B4920C 920200AF */  lbu     $v0, 0x00AF($s0)           ## 000000AF
/* 051C0 80B49210 920D00B0 */  lbu     $t5, 0x00B0($s0)           ## 000000B0
/* 051C4 80B49214 004D7021 */  addu    $t6, $v0, $t5              
/* 051C8 80B49218 29C10004 */  slti    $at, $t6, 0x0004           
/* 051CC 80B4921C 14200004 */  bne     $at, $zero, .L80B49230     
/* 051D0 80B49220 28410004 */  slti    $at, $v0, 0x0004           
/* 051D4 80B49224 10200002 */  beq     $at, $zero, .L80B49230     
/* 051D8 80B49228 240F000D */  addiu   $t7, $zero, 0x000D         ## $t7 = 0000000D
/* 051DC 80B4922C A20F0410 */  sb      $t7, 0x0410($s0)           ## 00000410
.L80B49230:
/* 051E0 80B49230 0C2D1F6A */  jal     func_80B47DA8              
/* 051E4 80B49234 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
.L80B49238:
/* 051E8 80B49238 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80B4923C:
/* 051EC 80B4923C 8FB00020 */  lw      $s0, 0x0020($sp)           
/* 051F0 80B49240 27BD0030 */  addiu   $sp, $sp, 0x0030           ## $sp = 00000000
/* 051F4 80B49244 03E00008 */  jr      $ra                        
/* 051F8 80B49248 00000000 */  nop
