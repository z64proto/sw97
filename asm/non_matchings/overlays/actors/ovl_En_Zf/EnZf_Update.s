glabel EnZf_Update
/* 051FC 80B4924C 27BDFFC8 */  addiu   $sp, $sp, 0xFFC8           ## $sp = FFFFFFC8
/* 05200 80B49250 AFBF0024 */  sw      $ra, 0x0024($sp)           
/* 05204 80B49254 AFB00020 */  sw      $s0, 0x0020($sp)           
/* 05208 80B49258 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 0520C 80B4925C 0C2D242D */  jal     func_80B490B4              
/* 05210 80B49260 AFA5003C */  sw      $a1, 0x003C($sp)           
/* 05214 80B49264 920E00B1 */  lbu     $t6, 0x00B1($s0)           ## 000000B1
/* 05218 80B49268 24010006 */  addiu   $at, $zero, 0x0006         ## $at = 00000006
/* 0521C 80B4926C 51C1003C */  beql    $t6, $at, .L80B49360       
/* 05220 80B49270 920D00AF */  lbu     $t5, 0x00AF($s0)           ## 000000AF
/* 05224 80B49274 8E0F03E4 */  lw      $t7, 0x03E4($s0)           ## 000003E4
/* 05228 80B49278 24010001 */  addiu   $at, $zero, 0x0001         ## $at = 00000001
/* 0522C 80B4927C A60003F8 */  sh      $zero, 0x03F8($s0)         ## 000003F8
/* 05230 80B49280 51E1001D */  beql    $t7, $at, .L80B492F8       
/* 05234 80B49284 860803F8 */  lh      $t0, 0x03F8($s0)           ## 000003F8
/* 05238 80B49288 8E1803DC */  lw      $t8, 0x03DC($s0)           ## 000003DC
/* 0523C 80B4928C 24010013 */  addiu   $at, $zero, 0x0013         ## $at = 00000013
/* 05240 80B49290 53010019 */  beql    $t8, $at, .L80B492F8       
/* 05244 80B49294 860803F8 */  lh      $t0, 0x03F8($s0)           ## 000003F8
/* 05248 80B49298 C6000068 */  lwc1    $f0, 0x0068($s0)           ## 00000068
/* 0524C 80B4929C 44802000 */  mtc1    $zero, $f4                 ## $f4 = 0.00
/* 05250 80B492A0 3C013FC0 */  lui     $at, 0x3FC0                ## $at = 3FC00000
/* 05254 80B492A4 46002032 */  c.eq.s  $f4, $f0                   
/* 05258 80B492A8 00000000 */  nop
/* 0525C 80B492AC 4503000A */  bc1tl   .L80B492D8                 
/* 05260 80B492B0 861903F8 */  lh      $t9, 0x03F8($s0)           ## 000003F8
/* 05264 80B492B4 44813000 */  mtc1    $at, $f6                   ## $f6 = 1.50
/* 05268 80B492B8 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 0526C 80B492BC 8FA5003C */  lw      $a1, 0x003C($sp)           
/* 05270 80B492C0 46060202 */  mul.s   $f8, $f0, $f6              
/* 05274 80B492C4 44064000 */  mfc1    $a2, $f8                   
/* 05278 80B492C8 0C2D1016 */  jal     func_80B44058              
/* 0527C 80B492CC 00000000 */  nop
/* 05280 80B492D0 A60203F8 */  sh      $v0, 0x03F8($s0)           ## 000003F8
/* 05284 80B492D4 861903F8 */  lh      $t9, 0x03F8($s0)           ## 000003F8
.L80B492D8:
/* 05288 80B492D8 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 0528C 80B492DC 8FA5003C */  lw      $a1, 0x003C($sp)           
/* 05290 80B492E0 57200005 */  bnel    $t9, $zero, .L80B492F8     
/* 05294 80B492E4 860803F8 */  lh      $t0, 0x03F8($s0)           ## 000003F8
/* 05298 80B492E8 0C2D1016 */  jal     func_80B44058              
/* 0529C 80B492EC 24060000 */  addiu   $a2, $zero, 0x0000         ## $a2 = 00000000
/* 052A0 80B492F0 A60203F8 */  sh      $v0, 0x03F8($s0)           ## 000003F8
/* 052A4 80B492F4 860803F8 */  lh      $t0, 0x03F8($s0)           ## 000003F8
.L80B492F8:
/* 052A8 80B492F8 55000004 */  bnel    $t0, $zero, .L80B4930C     
/* 052AC 80B492FC 3C014270 */  lui     $at, 0x4270                ## $at = 42700000
/* 052B0 80B49300 0C00B638 */  jal      Actor_MoveForwardXZ
              
/* 052B4 80B49304 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 052B8 80B49308 3C014270 */  lui     $at, 0x4270                ## $at = 42700000
.L80B4930C:
/* 052BC 80B4930C 44815000 */  mtc1    $at, $f10                  ## $f10 = 60.00
/* 052C0 80B49310 2409001D */  addiu   $t1, $zero, 0x001D         ## $t1 = 0000001D
/* 052C4 80B49314 AFA90014 */  sw      $t1, 0x0014($sp)           
/* 052C8 80B49318 8FA4003C */  lw      $a0, 0x003C($sp)           
/* 052CC 80B4931C 02002825 */  or      $a1, $s0, $zero            ## $a1 = 00000000
/* 052D0 80B49320 3C0641C8 */  lui     $a2, 0x41C8                ## $a2 = 41C80000
/* 052D4 80B49324 3C0741F0 */  lui     $a3, 0x41F0                ## $a3 = 41F00000
/* 052D8 80B49328 0C00B92D */  jal     Actor_UpdateBgCheckInfo              
/* 052DC 80B4932C E7AA0010 */  swc1    $f10, 0x0010($sp)          
/* 052E0 80B49330 960A0088 */  lhu     $t2, 0x0088($s0)           ## 00000088
/* 052E4 80B49334 240C0001 */  addiu   $t4, $zero, 0x0001         ## $t4 = 00000001
/* 052E8 80B49338 314B0001 */  andi    $t3, $t2, 0x0001           ## $t3 = 00000000
/* 052EC 80B4933C 55600003 */  bnel    $t3, $zero, .L80B4934C     
/* 052F0 80B49340 8E1903E8 */  lw      $t9, 0x03E8($s0)           ## 000003E8
/* 052F4 80B49344 AE0C03E4 */  sw      $t4, 0x03E4($s0)           ## 000003E4
/* 052F8 80B49348 8E1903E8 */  lw      $t9, 0x03E8($s0)           ## 000003E8
.L80B4934C:
/* 052FC 80B4934C 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 05300 80B49350 8FA5003C */  lw      $a1, 0x003C($sp)           
/* 05304 80B49354 0320F809 */  jalr    $ra, $t9                   
/* 05308 80B49358 00000000 */  nop
/* 0530C 80B4935C 920D00AF */  lbu     $t5, 0x00AF($s0)           ## 000000AF
.L80B49360:
/* 05310 80B49360 59A00024 */  blezl   $t5, .L80B493F4            
/* 05314 80B49364 8E0C03DC */  lw      $t4, 0x03DC($s0)           ## 000003DC
/* 05318 80B49368 8E0203DC */  lw      $v0, 0x03DC($s0)           ## 000003DC
/* 0531C 80B4936C 24010009 */  addiu   $at, $zero, 0x0009         ## $at = 00000009
/* 05320 80B49370 10410005 */  beq     $v0, $at, .L80B49388       
/* 05324 80B49374 2401000E */  addiu   $at, $zero, 0x000E         ## $at = 0000000E
/* 05328 80B49378 10410003 */  beq     $v0, $at, .L80B49388       
/* 0532C 80B4937C 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 05330 80B49380 0C2D23E4 */  jal     func_80B48F90              
/* 05334 80B49384 8FA5003C */  lw      $a1, 0x003C($sp)           
.L80B49388:
/* 05338 80B49388 3C0E80B5 */  lui     $t6, %hi(D_80B4A1B0)       ## $t6 = 80B50000
/* 0533C 80B4938C 85CEA1B0 */  lh      $t6, %lo(D_80B4A1B0)($t6)  
/* 05340 80B49390 3C1880B5 */  lui     $t8, %hi(D_80B4A1B4)       ## $t8 = 80B50000
/* 05344 80B49394 51C00017 */  beql    $t6, $zero, .L80B493F4     
/* 05348 80B49398 8E0C03DC */  lw      $t4, 0x03DC($s0)           ## 000003DC
/* 0534C 80B4939C 860F001C */  lh      $t7, 0x001C($s0)           ## 0000001C
/* 05350 80B493A0 8718A1B4 */  lh      $t8, %lo(D_80B4A1B4)($t8)  
/* 05354 80B493A4 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 05358 80B493A8 51F80012 */  beql    $t7, $t8, .L80B493F4       
/* 0535C 80B493AC 8E0C03DC */  lw      $t4, 0x03DC($s0)           ## 000003DC
/* 05360 80B493B0 0C2D1CD8 */  jal     func_80B47360              
/* 05364 80B493B4 8FA5003C */  lw      $a1, 0x003C($sp)           
/* 05368 80B493B8 8608001C */  lh      $t0, 0x001C($s0)           ## 0000001C
/* 0536C 80B493BC 3C0180B5 */  lui     $at, %hi(D_80B4A1B4)       ## $at = 80B50000
/* 05370 80B493C0 2409005A */  addiu   $t1, $zero, 0x005A         ## $t1 = 0000005A
/* 05374 80B493C4 A428A1B4 */  sh      $t0, %lo(D_80B4A1B4)($at)  
/* 05378 80B493C8 3C0180B5 */  lui     $at, %hi(D_80B4A1B0)       ## $at = 80B50000
/* 0537C 80B493CC A420A1B0 */  sh      $zero, %lo(D_80B4A1B0)($at) 
/* 05380 80B493D0 8E020120 */  lw      $v0, 0x0120($s0)           ## 00000120
/* 05384 80B493D4 50400004 */  beql    $v0, $zero, .L80B493E8     
/* 05388 80B493D8 8E0B0124 */  lw      $t3, 0x0124($s0)           ## 00000124
/* 0538C 80B493DC 10000004 */  beq     $zero, $zero, .L80B493F0   
/* 05390 80B493E0 A44903F4 */  sh      $t1, 0x03F4($v0)           ## 000003F4
/* 05394 80B493E4 8E0B0124 */  lw      $t3, 0x0124($s0)           ## 00000124
.L80B493E8:
/* 05398 80B493E8 240A005A */  addiu   $t2, $zero, 0x005A         ## $t2 = 0000005A
/* 0539C 80B493EC A56A03F4 */  sh      $t2, 0x03F4($t3)           ## 000003F4
.L80B493F0:
/* 053A0 80B493F0 8E0C03DC */  lw      $t4, 0x03DC($s0)           ## 000003DC
.L80B493F4:
/* 053A4 80B493F4 260403EC */  addiu   $a0, $s0, 0x03EC           ## $a0 = 000003EC
/* 053A8 80B493F8 00002825 */  or      $a1, $zero, $zero          ## $a1 = 00000000
/* 053AC 80B493FC 2981000F */  slti    $at, $t4, 0x000F           
/* 053B0 80B49400 1420001E */  bne     $at, $zero, .L80B4947C     
/* 053B4 80B49404 24060001 */  addiu   $a2, $zero, 0x0001         ## $a2 = 00000001
/* 053B8 80B49408 240707D0 */  addiu   $a3, $zero, 0x07D0         ## $a3 = 000007D0
/* 053BC 80B4940C 0C01E1A7 */  jal     Math_SmoothStepToS
              
/* 053C0 80B49410 AFA00010 */  sw      $zero, 0x0010($sp)         
/* 053C4 80B49414 8E1903DC */  lw      $t9, 0x03DC($s0)           ## 000003DC
/* 053C8 80B49418 2B210015 */  slti    $at, $t9, 0x0015           
/* 053CC 80B4941C 50200013 */  beql    $at, $zero, .L80B4946C     
/* 053D0 80B49420 860203F4 */  lh      $v0, 0x03F4($s0)           ## 000003F4
/* 053D4 80B49424 860203F4 */  lh      $v0, 0x03F4($s0)           ## 000003F4
/* 053D8 80B49428 24010001 */  addiu   $at, $zero, 0x0001         ## $at = 00000001
/* 053DC 80B4942C 5441000F */  bnel    $v0, $at, .L80B4946C       
/* 053E0 80B49430 860203F4 */  lh      $v0, 0x03F4($s0)           ## 000003F4
/* 053E4 80B49434 960D0088 */  lhu     $t5, 0x0088($s0)           ## 00000088
/* 053E8 80B49438 31AE0001 */  andi    $t6, $t5, 0x0001           ## $t6 = 00000000
/* 053EC 80B4943C 51C0000B */  beql    $t6, $zero, .L80B4946C     
/* 053F0 80B49440 860203F4 */  lh      $v0, 0x03F4($s0)           ## 000003F4
/* 053F4 80B49444 920F00AF */  lbu     $t7, 0x00AF($s0)           ## 000000AF
/* 053F8 80B49448 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 053FC 80B4944C 59E00005 */  blezl   $t7, .L80B49464            
/* 05400 80B49450 2458FFFF */  addiu   $t8, $v0, 0xFFFF           ## $t8 = FFFFFFFF
/* 05404 80B49454 0C2D1F19 */  jal     func_80B47C64              
/* 05408 80B49458 8FA5003C */  lw      $a1, 0x003C($sp)           
/* 0540C 80B4945C 860203F4 */  lh      $v0, 0x03F4($s0)           ## 000003F4
/* 05410 80B49460 2458FFFF */  addiu   $t8, $v0, 0xFFFF           ## $t8 = FFFFFFFF
.L80B49464:
/* 05414 80B49464 A61803F4 */  sh      $t8, 0x03F4($s0)           ## 000003F4
/* 05418 80B49468 860203F4 */  lh      $v0, 0x03F4($s0)           ## 000003F4
.L80B4946C:
/* 0541C 80B4946C 28410002 */  slti    $at, $v0, 0x0002           
/* 05420 80B49470 14200002 */  bne     $at, $zero, .L80B4947C     
/* 05424 80B49474 2448FFFF */  addiu   $t0, $v0, 0xFFFF           ## $t0 = FFFFFFFF
/* 05428 80B49478 A60803F4 */  sh      $t0, 0x03F4($s0)           ## 000003F4
.L80B4947C:
/* 0542C 80B4947C 8E090028 */  lw      $t1, 0x0028($s0)           ## 00000028
/* 05430 80B49480 3C014220 */  lui     $at, 0x4220                ## $at = 42200000
/* 05434 80B49484 8E0A0024 */  lw      $t2, 0x0024($s0)           ## 00000024
/* 05438 80B49488 AE09003C */  sw      $t1, 0x003C($s0)           ## 0000003C
/* 0543C 80B4948C C610003C */  lwc1    $f16, 0x003C($s0)          ## 0000003C
/* 05440 80B49490 44819000 */  mtc1    $at, $f18                  ## $f18 = 40.00
/* 05444 80B49494 920B00AF */  lbu     $t3, 0x00AF($s0)           ## 000000AF
/* 05448 80B49498 AE0A0038 */  sw      $t2, 0x0038($s0)           ## 00000038
/* 0544C 80B4949C 46128100 */  add.s   $f4, $f16, $f18            
/* 05450 80B494A0 8E0A002C */  lw      $t2, 0x002C($s0)           ## 0000002C
/* 05454 80B494A4 E604003C */  swc1    $f4, 0x003C($s0)           ## 0000003C
/* 05458 80B494A8 19600029 */  blez    $t3, .L80B49550            
/* 0545C 80B494AC AE0A0040 */  sw      $t2, 0x0040($s0)           ## 00000040
/* 05460 80B494B0 920C0404 */  lbu     $t4, 0x0404($s0)           ## 00000404
/* 05464 80B494B4 240100FF */  addiu   $at, $zero, 0x00FF         ## $at = 000000FF
/* 05468 80B494B8 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 0546C 80B494BC 15810024 */  bne     $t4, $at, .L80B49550       
/* 05470 80B494C0 26050418 */  addiu   $a1, $s0, 0x0418           ## $a1 = 00000418
/* 05474 80B494C4 0C0189B7 */  jal     Collider_UpdateCylinder
              
/* 05478 80B494C8 AFA50028 */  sw      $a1, 0x0028($sp)           
/* 0547C 80B494CC C6060080 */  lwc1    $f6, 0x0080($s0)           ## 00000080
/* 05480 80B494D0 C6080028 */  lwc1    $f8, 0x0028($s0)           ## 00000028
/* 05484 80B494D4 46083032 */  c.eq.s  $f6, $f8                   
/* 05488 80B494D8 00000000 */  nop
/* 0548C 80B494DC 4502000B */  bc1fl   .L80B4950C                 
/* 05490 80B494E0 8602001C */  lh      $v0, 0x001C($s0)           ## 0000001C
/* 05494 80B494E4 8E1903DC */  lw      $t9, 0x03DC($s0)           ## 000003DC
/* 05498 80B494E8 8FA4003C */  lw      $a0, 0x003C($sp)           
/* 0549C 80B494EC 8FA60028 */  lw      $a2, 0x0028($sp)           
/* 054A0 80B494F0 2B210011 */  slti    $at, $t9, 0x0011           
/* 054A4 80B494F4 10200004 */  beq     $at, $zero, .L80B49508     
/* 054A8 80B494F8 3C010001 */  lui     $at, 0x0001                ## $at = 00010000
/* 054AC 80B494FC 34211E60 */  ori     $at, $at, 0x1E60           ## $at = 00011E60
/* 054B0 80B49500 0C017713 */  jal     CollisionCheck_SetOC
              ## CollisionCheck_setOC
/* 054B4 80B49504 00812821 */  addu    $a1, $a0, $at              
.L80B49508:
/* 054B8 80B49508 8602001C */  lh      $v0, 0x001C($s0)           ## 0000001C
.L80B4950C:
/* 054BC 80B4950C 3C0E80B5 */  lui     $t6, %hi(D_80B4A1B4)       ## $t6 = 80B50000
/* 054C0 80B49510 04420005 */  bltzl   $v0, .L80B49528            
/* 054C4 80B49514 920F0114 */  lbu     $t7, 0x0114($s0)           ## 00000114
/* 054C8 80B49518 85CEA1B4 */  lh      $t6, %lo(D_80B4A1B4)($t6)  
/* 054CC 80B4951C 504E000D */  beql    $v0, $t6, .L80B49554       
/* 054D0 80B49520 8E0A03DC */  lw      $t2, 0x03DC($s0)           ## 000003DC
/* 054D4 80B49524 920F0114 */  lbu     $t7, 0x0114($s0)           ## 00000114
.L80B49528:
/* 054D8 80B49528 3C010001 */  lui     $at, 0x0001                ## $at = 00010000
/* 054DC 80B4952C 34211E60 */  ori     $at, $at, 0x1E60           ## $at = 00011E60
/* 054E0 80B49530 11E00004 */  beq     $t7, $zero, .L80B49544     
/* 054E4 80B49534 8FA4003C */  lw      $a0, 0x003C($sp)           
/* 054E8 80B49538 96180112 */  lhu     $t8, 0x0112($s0)           ## 00000112
/* 054EC 80B4953C 33084000 */  andi    $t0, $t8, 0x4000           ## $t0 = 00000000
/* 054F0 80B49540 15000003 */  bne     $t0, $zero, .L80B49550     
.L80B49544:
/* 054F4 80B49544 00812821 */  addu    $a1, $a0, $at              
/* 054F8 80B49548 0C01767D */  jal     CollisionCheck_SetAC
              ## CollisionCheck_setAC
/* 054FC 80B4954C 8FA60028 */  lw      $a2, 0x0028($sp)           
.L80B49550:
/* 05500 80B49550 8E0A03DC */  lw      $t2, 0x03DC($s0)           ## 000003DC
.L80B49554:
/* 05504 80B49554 24010009 */  addiu   $at, $zero, 0x0009         ## $at = 00000009
/* 05508 80B49558 15410023 */  bne     $t2, $at, .L80B495E8       
/* 0550C 80B4955C 3C014160 */  lui     $at, 0x4160                ## $at = 41600000
/* 05510 80B49560 44815000 */  mtc1    $at, $f10                  ## $f10 = 14.00
/* 05514 80B49564 C6000164 */  lwc1    $f0, 0x0164($s0)           ## 00000164
/* 05518 80B49568 3C0141A0 */  lui     $at, 0x41A0                ## $at = 41A00000
/* 0551C 80B4956C 4600503E */  c.le.s  $f10, $f0                  
/* 05520 80B49570 00000000 */  nop
/* 05524 80B49574 4502001D */  bc1fl   .L80B495EC                 
/* 05528 80B49578 8FBF0024 */  lw      $ra, 0x0024($sp)           
/* 0552C 80B4957C 44818000 */  mtc1    $at, $f16                  ## $f16 = 20.00
/* 05530 80B49580 00000000 */  nop
/* 05534 80B49584 4610003E */  c.le.s  $f0, $f16                  
/* 05538 80B49588 00000000 */  nop
/* 0553C 80B4958C 45020017 */  bc1fl   .L80B495EC                 
/* 05540 80B49590 8FBF0024 */  lw      $ra, 0x0024($sp)           
/* 05544 80B49594 92020474 */  lbu     $v0, 0x0474($s0)           ## 00000474
/* 05548 80B49598 304B0004 */  andi    $t3, $v0, 0x0004           ## $t3 = 00000000
/* 0554C 80B4959C 1560000C */  bne     $t3, $zero, .L80B495D0     
/* 05550 80B495A0 304EFFFB */  andi    $t6, $v0, 0xFFFB           ## $t6 = 00000000
/* 05554 80B495A4 920C0475 */  lbu     $t4, 0x0475($s0)           ## 00000475
/* 05558 80B495A8 3C010001 */  lui     $at, 0x0001                ## $at = 00010000
/* 0555C 80B495AC 34211E60 */  ori     $at, $at, 0x1E60           ## $at = 00011E60
/* 05560 80B495B0 31990002 */  andi    $t9, $t4, 0x0002           ## $t9 = 00000000
/* 05564 80B495B4 17200006 */  bne     $t9, $zero, .L80B495D0     
/* 05568 80B495B8 8FA4003C */  lw      $a0, 0x003C($sp)           
/* 0556C 80B495BC 00812821 */  addu    $a1, $a0, $at              
/* 05570 80B495C0 0C0175E7 */  jal     CollisionCheck_SetAT
              ## CollisionCheck_setAT
/* 05574 80B495C4 26060464 */  addiu   $a2, $s0, 0x0464           ## $a2 = 00000464
/* 05578 80B495C8 10000008 */  beq     $zero, $zero, .L80B495EC   
/* 0557C 80B495CC 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80B495D0:
/* 05580 80B495D0 920F0475 */  lbu     $t7, 0x0475($s0)           ## 00000475
/* 05584 80B495D4 A20E0474 */  sb      $t6, 0x0474($s0)           ## 00000474
/* 05588 80B495D8 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 0558C 80B495DC 31F8FFFD */  andi    $t8, $t7, 0xFFFD           ## $t8 = 00000000
/* 05590 80B495E0 0C2D1B59 */  jal     func_80B46D64              
/* 05594 80B495E4 A2180475 */  sb      $t8, 0x0475($s0)           ## 00000475
.L80B495E8:
/* 05598 80B495E8 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80B495EC:
/* 0559C 80B495EC 8FB00020 */  lw      $s0, 0x0020($sp)           
/* 055A0 80B495F0 27BD0038 */  addiu   $sp, $sp, 0x0038           ## $sp = 00000000
/* 055A4 80B495F4 03E00008 */  jr      $ra                        
/* 055A8 80B495F8 00000000 */  nop
