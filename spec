/*
 * ROM spec file
 */

beginseg
    name "makerom"
    include "build/asm/rom_header.o"
    include "build/asm/ipl3.o"
    include "build/asm/entry.o"
endseg

beginseg
    name "boot"
    address 0x80000460
    include "build/src/boot/boot_main.o"
    include "build/src/boot/idle.o"
    include "build/src/boot/viconfig.o"
    include "build/src/boot/z_std_dma.o"
#ifdef USE_LZO
    include "build/src/boot/lzo.o"
#else
    include "build/src/boot/yaz0.o"
#endif
    include "build/src/boot/z_locale.o"
    include "build/src/boot/assert.o"
    include "build/src/boot/is_debug.o"
    include "build/src/libultra_boot_O2/osDriveRomInit.o"
    include "build/asm/mio0.o"
    include "build/src/boot/stackcheck.o"
    include "build/src/boot/logutils.o"
    include "build/src/libultra_boot_O2/sprintf.o"
    include "build/src/libultra_boot_O1/piacs.o"
    include "build/src/libultra_boot_O1/osSendMesg.o"
    include "build/src/libultra_boot_O1/osStopThread.o"
    include "build/src/libultra_boot_O1/osViExtendVStart.o"
    include "build/src/libultra_boot_O1/osViModePalLan1.o"
    include "build/src/libultra_boot_O1/osRecvMesg.o"
    include "build/src/libultra_boot_O1/initialize.o"
    include "build/src/libultra_boot_O1/ll.o"
    include "build/asm/exceptasm.o"
    include "build/src/libultra_boot_O1/__osDequeueThread.o"
    include "build/src/libultra_boot_O1/osDestroyThread.o"
    include "build/asm/bzero.o"
    include "build/src/libultra_boot_O1/osCreateThread.o"
    include "build/asm/__osSetSR.o"
    include "build/asm/__osGetSR.o"
    include "build/asm/osWritebackDCache.o"
    include "build/src/libultra_boot_O2/osViGetNextFramebuffer.o"
    include "build/src/libultra_boot_O2/pimgr.o"
    include "build/src/libultra_boot_O2/__osDevMgrMain.o"
    include "build/src/libultra_boot_O2/__osPiRawStartDma.o"
    include "build/src/libultra_boot_O1/osVirtualToPhysical.o"
    include "build/src/libultra_boot_O2/osViBlack.o"
    include "build/src/libultra_boot_O2/__osSiRawReadIo.o"
    include "build/src/libultra_boot_O1/osGetThreadId.o"
    include "build/asm/osSetIntMask.o"
    include "build/src/libultra_boot_O2/osViSetMode.o"
    include "build/asm/__osProbeTLB.o"
    include "build/src/libultra_boot_O1/osGetMemSize.o"
    include "build/src/libultra_boot_O1/osSetEventMesg.o"
    include "build/src/libultra_boot_O2/_Printf.o"
    include "build/asm/osUnmapTLBAll.o"
    include "build/src/libultra_boot_O2/osEPiStartDma.o"
    include "build/src/libultra_boot_O2/string.o"
    include "build/asm/osInvalICache.o"
    include "build/src/libultra_boot_O1/osCreateMesgQueue.o"
    include "build/asm/osInvalDCache.o"
    include "build/src/libultra_boot_O2/__osSiDeviceBusy.o"
    include "build/src/libultra_boot_O1/osJamMesg.o"
    include "build/src/libultra_boot_O1/osSetThreadPri.o"
    include "build/src/libultra_boot_O1/osGetThreadPri.o"
    include "build/src/libultra_boot_O2/__osEPiRawReadIo.o"
    include "build/src/libultra_boot_O2/osViSwapBuffer.o"
    include "build/src/libultra_boot_O2/__osEPiRawStartDma.o"
    include "build/asm/bcmp.o"
    include "build/src/libultra_boot_O1/osGetTime.o"
    include "build/src/libultra_boot_O1/timerintr.o"
    include "build/asm/osGetCount.o"
    include "build/src/libultra_boot_O1/__osSetGlobalIntMask.o"
    include "build/asm/__osSetCompare.o"
    include "build/asm/bcopy.o"
    include "build/src/libultra_boot_O1/__osResetGlobalIntMask.o"
    include "build/asm/__osDisableInt.o"
    include "build/asm/__osRestoreInt.o"
    include "build/src/libultra_boot_O2/osViModeNtscLan1.o"
    include "build/src/libultra_boot_O2/osViModeMpalLan1.o"
    include "build/src/libultra_boot_O2/__osViInit.o"
    include "build/src/libultra_boot_O2/__osViSwapContext.o"
    include "build/src/libultra_boot_O2/osPiGetCmdQueue.o"
    include "build/src/libultra_boot_O2/osEPiReadIo.o"
    include "build/src/libultra_boot_O2/osViSetSpecialFeatures.o"
    include "build/src/libultra_boot_O2/osCartRomInit.o"
    include "build/src/libultra_boot_O2/osViModeFpalLan1.o"
    include "build/asm/__osSetFpcCsr.o"
    include "build/asm/__osGetFpcCsr.o"
    include "build/src/libultra_boot_O2/osEPiWriteIo.o"
    include "build/asm/osMapTLBRdb.o"
    include "build/src/libultra_boot_O1/osYieldThread.o"
    include "build/asm/__osGetCause.o"
    include "build/src/libultra_boot_O2/__osEPiRawWriteIo.o"
    include "build/src/libultra_boot_O2/_Litob.o"
    include "build/src/libultra_boot_O2/ldiv.o"
    include "build/src/libultra_boot_O2/_Ldtob.o"
    include "build/src/boot/build.o"
    include "build/src/libultra_boot_O2/__osSiRawWriteIo.o"
    include "build/src/libultra_boot_O2/vimgr.o"
    include "build/src/libultra_boot_O2/__osViGetCurrentContext.o"
    include "build/src/libultra_boot_O1/osStartThread.o"
    include "build/src/libultra_boot_O2/osViSetYScale.o"
    include "build/src/libultra_boot_O2/osViSetXScale.o"
    include "build/src/libultra_boot_O1/__osSetHWIntrRoutine.o"
    include "build/src/libultra_boot_O1/__osGetHWIntrRoutine.o"
    include "build/asm/__osSetWatchLo.o"
    include "build/data/rsp_boot.text.o"
endseg

beginseg
    name "dmadata"
    include "build/asm/dmadata.o"
endseg

beginseg
    name "Audiobank"
    address 0x10 // fake RAM address to avoid map lookup inaccuracies
    include "build/baserom/Audiobank.o"
endseg

beginseg
    name "Audioseq"
    include "build/baserom/Audioseq.o"
endseg

beginseg
    name "Audiotable"
    include "build/baserom/Audiotable.o"
endseg

beginseg
    name "link_animetion"
    include "build/baserom/link_animetion.o"
    include "build/assets/link_animations/link_animations.o"
    number 7
endseg

beginseg
    name "icon_item_static"
    romalign 0x1000
    include "build/assets/textures/icon_item_static/icon_item_static.o"
    number 8
endseg

beginseg
    name "icon_item_24_static"
    romalign 0x1000
    include "build/assets/textures/icon_item_24_static/icon_item_24_static.o"
    number 9
endseg

beginseg
    name "icon_item_field_static"
    compress
    romalign 0x1000
    include "build/assets/textures/icon_item_field_static/icon_item_field_static.o"
    number 12
endseg

beginseg
    name "icon_item_dungeon_static"
    compress
    romalign 0x1000
    include "build/assets/textures/icon_item_dungeon_static/icon_item_dungeon_static.o"
    number 12
endseg

beginseg
    name "icon_item_gameover_static"
    compress
    romalign 0x1000
    include "build/assets/textures/icon_item_gameover_static/icon_item_gameover_static.o"
    number 12
endseg

beginseg
    name "icon_item_nes_static"
    compress
    romalign 0x1000
    include "build/assets/textures/icon_item_nes_static/icon_item_nes_static.o"
    number 13
endseg

beginseg
    name "icon_item_ger_static"
    compress
    romalign 0x1000
    include "build/assets/textures/icon_item_ger_static/icon_item_ger_static.o"
    number 13
endseg

beginseg
    name "icon_item_fra_static"
    compress
    romalign 0x1000
    include "build/assets/textures/icon_item_fra_static/icon_item_fra_static.o"
    number 13
endseg

beginseg
    name "item_name_static"
    romalign 0x1000
    include "build/assets/textures/item_name_static/item_name_static.o"
    number 10
endseg

beginseg
    name "map_name_static"
    romalign 0x1000
    include "build/assets/textures/map_name_static/map_name_static.o"
    number 11
endseg

beginseg
    name "do_action_static"
    romalign 0x1000
    include "build/assets/textures/do_action_static/do_action_static.o"
    number 7
endseg

beginseg
    name "message_static"
    romalign 0x1000
    include "build/assets/textures/message_static/message_static.o"
    number 7
endseg

beginseg
    name "message_texture_static"
    romalign 0x1000
    include "build/assets/textures/message_texture_static/message_texture_static.o"
    number 9
endseg

beginseg
    name "nes_font_static"
    romalign 0x1000
    include "build/assets/textures/nes_font_static/nes_font_static.o"
    number 10
endseg

beginseg
    name "nes_message_data_static"
    romalign 0x1000
    include "build/text/nes_message_data_static.o"
    number 07
endseg

beginseg
    name "ger_message_data_static"
    romalign 0x1000
    include "build/text/ger_message_data_static.o"
    number 07
endseg

beginseg
    name "fra_message_data_static"
    romalign 0x1000
    include "build/text/fra_message_data_static.o"
    number 07
endseg

beginseg
    name "staff_message_data_static"
    romalign 0x1000
    include "build/text/staff_message_data_static.o"
    number 07
endseg

// beginseg
//     name "map_grand_static"
//     romalign 0x1000
//     include "build/assets/textures/map_grand_static/map_grand_static.o"
//     number 11
// endseg

// beginseg
//     name "map_48x85_static"
//     romalign 0x1000
//     include "build/baserom/map_48x85_static.o"
// endseg

beginseg
    name "code"
    compress
    after "dmadata"
    include "build/src/code/z_en_a_keep.o"
    include "build/src/code/z_en_item00.o"
    include "build/src/code/z_eff_blure.o"
    include "build/src/code/z_eff_shield_particle.o"
    include "build/src/code/z_eff_spark.o"
    include "build/src/code/z_eff_ss_dead.o"
    include "build/src/code/z_effect.o"
    include "build/src/code/z_effect_soft_sprite.o"
    include "build/src/code/z_effect_soft_sprite_old_init.o"
    include "build/src/code/z_effect_soft_sprite_dlftbls.o"
    include "build/src/code/z_DLF.o"
    include "build/src/code/z_actor.o"
    include "build/src/code/z_actor_dlftbls.o"
    include "build/src/code/z_bgcheck.o"
    include "build/src/code/code_800430A0.o"
    include "build/src/code/code_80043480.o"
    include "build/src/code/z_camera.o"
    include "build/src/code/z_collision_btltbls.o"
    include "build/src/code/z_collision_check.o"
    include "build/src/code/z_common_data.o"
    include "build/src/code/z_debug.o"
    include "build/src/code/z_demo.o"
    include "build/src/code/code_80069420.o"
    include "build/src/code/z_draw.o"
    include "build/src/code/code_8006BA00.o"
    include "build/src/code/z_elf_message.o"
    include "build/src/code/z_face_reaction.o"
    include "build/src/code/code_8006C3A0.o"
    include "build/src/code/code_8006C510.o"
    include "build/src/code/z_fcurve_data_skelanime.o"
    include "build/src/code/z_game_dlftbls.o"
    include "build/src/code/z_horse.o"
    include "build/src/code/z_jpeg.o"
    include "build/src/code/z_kaleido_setup.o"
    include "build/src/code/z_kanfont.o"
    include "build/src/code/z_kankyo.o"
    include "build/data/z_kankyo.data.o"
    include "build/data/z_kankyo.bss.o"
    include "build/src/code/z_lib.o"
    include "build/src/code/z_lifemeter.o"
    include "build/src/code/z_lights.o"
    include "build/src/code/z_malloc.o"
    // include "build/src/code/z_map_mark.o"
    include "build/src/code/z_moji.o"
    include "build/src/code/z_prenmi_buff.o"
    include "build/src/code/z_msgevent.o"
    include "build/src/code/z_olib.o"
    include "build/src/code/z_onepointdemo.o"
    // include "build/src/code/z_map_exp.o"
    // include "build/src/code/z_map_data.o"
    include "build/src/code/z_parameter.o"
    include "build/src/code/map/map.o"
    include "build/src/code/map/map_data.o"
    include "build/src/code/z_path.o"
    include "build/src/code/z_frame_advance.o"
    include "build/src/code/physics.o"
    include "build/src/code/z_player_lib.o"
    include "build/src/code/z_prenmi.o"
    include "build/src/code/z_quake.o"
    include "build/src/code/z_rcp.o"
    include "build/src/code/z_room.o"
    include "build/src/code/z_sample.o"
    include "build/src/code/code_80097A00.o"
    include "build/src/code/z_scene.o"
    include "build/src/code/z_scene_table.o"
    include "build/src/code/scene_draw.o"
    include "build/src/code/z_skelanime.o"
    include "build/src/code/z_skin.o"
    include "build/src/code/z_skin_awb.o"
    include "build/src/code/z_skin_matrix.o"
    // include "build/src/code/z_sram.o"
    // include "build/src/code/z_ss_sram.o"
    include "build/src/code/save.o"
    include "build/src/code/code_800A9F30.o"
    include "build/data/z_text.data.o"
    include "build/src/code/z_view.o"
    include "build/src/code/z_vimode.o"
    include "build/src/code/code_800ACE70.o"
    include "build/src/code/z_vismono.o"
    include "build/src/code/code_800AD920.o"
    include "build/src/code/z_vr_box.o"
    include "build/src/code/z_vr_box_draw.o"
    include "build/src/code/z_player_call.o"
    include "build/src/code/z_fbdemo.o"
    include "build/src/code/z_fbdemo_triforce.o"
    include "build/src/code/z_fbdemo_wipe1.o"
    include "build/src/code/z_fbdemo_circle.o"
    include "build/src/code/z_fbdemo_fade.o"
    include "build/src/code/shrink_window.o"
    include "build/src/code/code_800BB0A0.o"
    include "build/src/code/z_kaleido_manager.o"
    include "build/src/code/z_kaleido_scope_call.o"
    include "build/src/code/z_play.o"
    include "build/src/code/PreRender.o"
    include "build/src/code/TwoHeadArena.o"
    include "build/src/code/code_800C3C20.o"
    include "build/src/code/audioMgr.o"
    include "build/src/code/title_setup.o"
    include "build/src/code/game.o"
    include "build/src/code/gamealloc.o"
    include "build/src/code/graph.o"
    include "build/src/code/listalloc.o"
    include "build/src/code/main.o"
    include "build/src/code/padmgr.o"
    include "build/src/code/sched.o"
    include "build/src/code/sys_cfb.o"
    include "build/src/code/sys_math.o"
    include "build/src/code/sys_math3d.o"
    include "build/src/code/sys_math_atan.o"
    include "build/src/code/sys_matrix.o"
    include "build/src/code/sys_ucode.o"
    include "build/src/code/code_800D2E30.o"
    include "build/data/code_800D2E30.data.o"
    include "build/src/code/code_800D31A0.o"
    include "build/src/code/irqmgr.o"
    include "build/src/code/debug_malloc.o"
    include "build/src/code/fault.o"
    include "build/src/code/fault_drawer.o"
     include "build/asm/code_800D71F0.o"
    include "build/src/code/ucode_disas.o"
    include "build/src/code/code_800DACC0.o"
    include "build/data/code_800DACC0.data.o"
    include "build/data/code_800DACC0.bss.o"
    include "build/src/code/audio_heap.o"
    include "build/src/code/code_800E11F0.o"
    include "build/data/code_800E11F0.data.o"
    include "build/data/code_800E11F0.rodata.o"
    include "build/src/libultra_code_O2/code_800E6840.o"
    include "build/src/libultra_code_O2/osAiSetNextBuffer.o"
    include "build/src/code/audio_playback.o"
    include "build/src/code/audio_effects.o"
    include "build/data/audio_effects.data.o"
    include "build/src/code/audio_seqplayer.o"
    include "build/src/code/code_800EC960.o"
    include "build/data/code_800EC960.data.o"
    include "build/src/code/code_800F7260.o"
    include "build/src/code/code_800F9280.o"
    include "build/data/code_800F9280.data.o"
    include "build/data/code_800F9280.rodata.o"
    include "build/src/code/logseverity.o"
    include "build/src/code/gfxprint.o"
    include "build/src/code/code_800FBCE0.o"
    include "build/src/code/loadfragment2.o"
    include "build/src/code/mtxuty-cvt.o"
    include "build/src/code/relocation.o"
    include "build/src/code/code_800FC620.o"
    include "build/src/code/padutils.o"
    include "build/src/code/padsetup.o"
    include "build/src/code/code_800FCE80.o"
    include "build/asm/fp.o"
    include "build/src/code/system_malloc.o"
    include "build/src/code/code_800FD970.o"
    include "build/src/code/__osMalloc.o"
    include "build/src/code/printutils.o"
    include "build/src/code/sleep.o"
    include "build/src/code/jpegutils.o"
    include "build/src/code/jpegdecoder.o"
    include "build/src/libultra_code_O2/osPfsFreeBlocks.o"
    include "build/asm/guScale.o"
    include "build/src/libultra_code_O2/sinf.o"
    include "build/src/libultra_code_O2/sins.o"
    include "build/src/libultra_code_O2/sptask.o"
    include "build/src/libultra_code_O2/osRumblePak.o"
    include "build/src/libultra_code_O2/__osSiCreateAccessQueue.o"
    include "build/src/libultra_code_O2/osContInit.o"
    include "build/src/libultra_code_O2/osContStartReadData.o"
    include "build/src/libultra_code_O2/guPerspectiveF.o"
    include "build/src/libultra_code_O2/__osSpRawStartDma.o"
    include "build/src/libultra_code_O2/__osSiRawStartDma.o"
    include "build/src/libultra_code_O2/osSpTaskYield.o"
    include "build/src/libultra_code_O2/pfsreadwritefile.o"
    include "build/src/libultra_code_O2/__osPfsGetStatus.o"
    include "build/asm/guMtxIdentF.o"
    include "build/src/libultra_code_O2/guLookAt.o"
    include "build/src/libultra_code_O2/pfsallocatefile.o"
    include "build/src/libultra_code_O1/osStopTimer.o"
    include "build/src/libultra_code_O2/contpfs.o"
    include "build/asm/guMtxL2F.o"
    include "build/src/libultra_code_O2/osPfsFindFile.o"
    include "build/src/libultra_code_O2/sqrtf.o"
    include "build/src/libultra_code_O2/osAfterPreNMI.o"
    include "build/src/libultra_code_O2/contquery.o"
    include "build/src/libultra_code_O2/guLookAtHilite.o"
    include "build/src/libultra_code_O2/sp.o"
    include "build/asm/guMtxIdent.o"
    include "build/src/libultra_code_O2/guPosition.o"
    include "build/src/libultra_code_O2/osSpTaskYielded.o"
    include "build/src/libultra_code_O2/rotate.o"
    include "build/src/libultra_code_O2/osAiSetFrequency.o"
    include "build/src/libultra_code_O2/__osGetActiveQueue.o"
    include "build/asm/guNormalize.o"
    include "build/src/libultra_code_O2/osDpGetStatus.o"
    include "build/src/libultra_code_O2/osDpSetStatus.o"
    include "build/src/libultra_code_O2/osPfsDeleteFile.o"
    include "build/src/libultra_code_O2/ortho.o"
    include "build/src/libultra_code_O2/cosf.o"
    include "build/data/__libm_qnan_f.rodata.o"
    include "build/src/libultra_code_O2/coss.o"
    include "build/src/libultra_code_O2/osViSetEvent.o"
    include "build/src/libultra_code_O2/osPfsIsPlug.o"
    include "build/src/libultra_code_O2/guS2DInitBg.o"
    include "build/src/libultra_code_O2/__osPfsSelectBank.o"
    include "build/src/libultra_code_O2/osContSetCh.o"
    include "build/src/libultra_code_O2/osPfsFileState.o"
    include "build/src/libultra_code_O2/pfsinitpak.o"
    include "build/src/libultra_code_O2/pfschecker.o"
    include "build/src/libultra_code_O2/osAiGetLength.o"
    include "build/asm/guTranslate.o"
    include "build/src/libultra_code_O2/__osContRamWrite.o"
    include "build/src/libultra_code_O2/__osContRamRead.o"
    include "build/src/libultra_code_O2/__osContAddressCrc.o"
    include "build/src/libultra_code_O1/osSetTimer.o"
    include "build/src/libultra_code_O2/__osSpGetStatus.o"
    include "build/src/libultra_code_O2/__osSpSetStatus.o"
    include "build/asm/osWritebackDCacheAll.o"
    include "build/src/libultra_code_O2/__osGetCurrFaultedThread.o"
    include "build/asm/guMtxF2L.o"
    include "build/src/libultra_code_O1/llcvt.o"
    include "build/src/libultra_code_O2/osViGetCurrentFramebuffer.o"
    include "build/src/libultra_code_O2/__osSpSetPc.o"
    include "build/src/libultra_code_O2_g3/sqrt.o"
    include "build/src/libultra_code_O2_g3/absf.o"
    include "build/src/code/code_801067F0.o"
    include "build/src/code/code_80106860.o"
    include "build/src/code/code_801068B0.o"
    include "build/src/code/z_message_PAL.o"
    include "build/src/code/z_game_over.o"
    include "build/src/code/z_construct.o"
    include "build/data/rsp.text.o"
    include "build/data/rsp.rodata.o"
endseg

beginseg
    name "buffers"
    flags NOLOAD
    align 0x40
#ifdef USE_LZO
    include "build/src/buffers/decbuffer.o"
#endif
    include "build/src/buffers/zbuffer.o"
    include "build/src/buffers/gfxbuffers.o"
    include "build/src/buffers/heaps.o"
endseg

beginseg
    name "ovl_title"
    compress
    address 0x80800000
    include "build/src/overlays/gamestates/ovl_title/z_title.o"
    include "build/src/overlays/gamestates/ovl_title/ovl_title_reloc.o"
endseg

beginseg
    name "ovl_select"
    compress
    include "build/src/overlays/gamestates/ovl_select/z_select.o"
    include "build/src/overlays/gamestates/ovl_select/ovl_select_reloc.o"
endseg

beginseg
    name "ovl_opening"
    compress
    include "build/src/overlays/gamestates/ovl_opening/z_opening.o"
    include "build/src/overlays/gamestates/ovl_opening/ovl_opening_reloc.o"
endseg

beginseg
    name "ovl_file_choose"
    compress
    include "build/src/overlays/gamestates/ovl_file_choose/z_file_choose.o"
    include "build/src/overlays/gamestates/ovl_file_choose/ovl_file_choose_reloc.o"
endseg

beginseg
    name "ovl_kaleido_scope"
    compress
    include "build/src/overlays/actors/ovl_kaleido_scope/z_kaleido_collect.o"
    include "build/src/overlays/actors/ovl_kaleido_scope/z_kaleido_debug.o"
    include "build/src/overlays/actors/ovl_kaleido_scope/z_kaleido_equipment.o"
    include "build/src/overlays/actors/ovl_kaleido_scope/z_kaleido_item.o"
    include "build/src/overlays/actors/ovl_kaleido_scope/z_kaleido_map_PAL.o"
    include "build/src/overlays/actors/ovl_kaleido_scope/z_kaleido_prompt.o"
    include "build/src/overlays/actors/ovl_kaleido_scope/z_kaleido_scope_PAL.o"
    // include "build/src/overlays/actors/ovl_kaleido_scope/z_lmap_mark.o"
    // include "build/src/overlays/actors/ovl_kaleido_scope/z_lmap_mark_data.o"
#ifdef NON_MATCHING
    include "build/src/overlays/actors/ovl_kaleido_scope/ovl_kaleido_scope_reloc.o"
#else
    include "build/data/overlays/actors/z_kaleido_scope.reloc.o"
#endif
endseg

beginseg
    name "ovl_disclaimer"
    compress
    include "build/src/overlays/gamestates/ovl_disclaimer/disclaimer_state.o"
    include "build/src/overlays/gamestates/ovl_disclaimer/ovl_disclaimer_reloc.o"
endseg

beginseg
    name "ovl_player_actor"
    compress
    include "build/src/overlays/actors/ovl_player_actor/z_player.o"
    include "build/src/overlays/actors/ovl_player_actor/ovl_player_actor_reloc.o"
endseg

beginseg
    name "ovl_map_mark_data"
    compress
    include "build/src/overlays/ovl_map_mark_data/z_map_mark_data.o"
    include "build/src/overlays/ovl_map_mark_data/ovl_map_mark_data_reloc.o"
endseg

beginseg
    name "ovl_En_Test"
    compress
    include "build/src/overlays/actors/ovl_En_Test/z_en_test.o"
    include "build/data/overlays/actors/z_en_test.data.o"
    include "build/data/overlays/actors/z_en_test.reloc.o"
endseg

beginseg
    name "ovl_Arms_Hook"
    compress
    include "build/src/overlays/actors/ovl_Arms_Hook/z_arms_hook.o"
    include "build/src/overlays/actors/ovl_Arms_Hook/ovl_Arms_Hook_reloc.o"
endseg

beginseg
    name "ovl_Arrow_Dark"
    compress
    include "build/src/overlays/actors/ovl_Arrow_Dark/z_arrow_dark.o"
    include "build/src/overlays/actors/ovl_Arrow_Dark/ovl_Arrow_Dark_reloc.o"
endseg

beginseg
    name "ovl_Arrow_Fire"
    compress
    include "build/src/overlays/actors/ovl_Arrow_Fire/z_arrow_fire.o"
    include "build/src/overlays/actors/ovl_Arrow_Fire/ovl_Arrow_Fire_reloc.o"
endseg

beginseg
    name "ovl_Arrow_Ice"
    compress
    include "build/src/overlays/actors/ovl_Arrow_Ice/z_arrow_ice.o"
    include "build/src/overlays/actors/ovl_Arrow_Ice/ovl_Arrow_Ice_reloc.o"
endseg

beginseg
    name "ovl_Arrow_Light"
    compress
    include "build/src/overlays/actors/ovl_Arrow_Light/z_arrow_light.o"
    include "build/src/overlays/actors/ovl_Arrow_Light/ovl_Arrow_Light_reloc.o"
endseg

beginseg
    name "ovl_Arrow_Soul"
    compress
    include "build/src/overlays/actors/ovl_Arrow_Soul/z_arrow_soul.o"
    include "build/src/overlays/actors/ovl_Arrow_Soul/ovl_Arrow_Soul_reloc.o"
endseg

beginseg
    name "ovl_Arrow_Wind"
    compress
    include "build/src/overlays/actors/ovl_Arrow_Wind/z_arrow_wind.o"
    include "build/src/overlays/actors/ovl_Arrow_Wind/ovl_Arrow_Wind_reloc.o"
endseg

beginseg
    name "ovl_Bg_Bdan_Objects"
    compress
    include "build/src/overlays/actors/ovl_Bg_Bdan_Objects/z_bg_bdan_objects.o"
    include "build/src/overlays/actors/ovl_Bg_Bdan_Objects/ovl_Bg_Bdan_Objects_reloc.o"
endseg

beginseg
    name "ovl_Bg_Bdan_Switch"
    compress
    include "build/src/overlays/actors/ovl_Bg_Bdan_Switch/z_bg_bdan_switch.o"
    include "build/src/overlays/actors/ovl_Bg_Bdan_Switch/ovl_Bg_Bdan_Switch_reloc.o"
endseg

beginseg
    name "ovl_Bg_Bom_Guard"
    compress
    include "build/src/overlays/actors/ovl_Bg_Bom_Guard/z_bg_bom_guard.o"
    include "build/src/overlays/actors/ovl_Bg_Bom_Guard/ovl_Bg_Bom_Guard_reloc.o"
endseg

beginseg
    name "ovl_Bg_Bombwall"
    compress
    include "build/src/overlays/actors/ovl_Bg_Bombwall/z_bg_bombwall.o"
    include "build/src/overlays/actors/ovl_Bg_Bombwall/ovl_Bg_Bombwall_reloc.o"
endseg

beginseg
    name "ovl_Bg_Bowl_Wall"
    compress
    include "build/src/overlays/actors/ovl_Bg_Bowl_Wall/z_bg_bowl_wall.o"
    include "build/src/overlays/actors/ovl_Bg_Bowl_Wall/ovl_Bg_Bowl_Wall_reloc.o"
endseg

beginseg
    name "ovl_Bg_Breakwall"
    compress
    include "build/src/overlays/actors/ovl_Bg_Breakwall/z_bg_breakwall.o"
    include "build/src/overlays/actors/ovl_Bg_Breakwall/ovl_Bg_Breakwall_reloc.o"
endseg

beginseg
    name "ovl_Bg_Ddan_Jd"
    compress
    include "build/src/overlays/actors/ovl_Bg_Ddan_Jd/z_bg_ddan_jd.o"
    include "build/src/overlays/actors/ovl_Bg_Ddan_Jd/ovl_Bg_Ddan_Jd_reloc.o"
endseg

beginseg
    name "ovl_Bg_Ddan_Kd"
    compress
    include "build/src/overlays/actors/ovl_Bg_Ddan_Kd/z_bg_ddan_kd.o"
    include "build/src/overlays/actors/ovl_Bg_Ddan_Kd/ovl_Bg_Ddan_Kd_reloc.o"
endseg

beginseg
    name "ovl_Bg_Dodoago"
    compress
    include "build/src/overlays/actors/ovl_Bg_Dodoago/z_bg_dodoago.o"
    include "build/src/overlays/actors/ovl_Bg_Dodoago/ovl_Bg_Dodoago_reloc.o"
endseg

beginseg
    name "ovl_Bg_Dy_Yoseizo"
    compress
    include "build/src/overlays/actors/ovl_Bg_Dy_Yoseizo/z_bg_dy_yoseizo.o"
    include "build/src/overlays/actors/ovl_Bg_Dy_Yoseizo/ovl_Bg_Dy_Yoseizo_reloc.o"
endseg

beginseg
    name "ovl_Bg_Gate_Shutter"
    compress
    include "build/src/overlays/actors/ovl_Bg_Gate_Shutter/z_bg_gate_shutter.o"
    include "build/src/overlays/actors/ovl_Bg_Gate_Shutter/ovl_Bg_Gate_Shutter_reloc.o"
endseg

beginseg
    name "ovl_Bg_Gjyo_Bridge"
    compress
    include "build/src/overlays/actors/ovl_Bg_Gjyo_Bridge/z_bg_gjyo_bridge.o"
    include "build/src/overlays/actors/ovl_Bg_Gjyo_Bridge/ovl_Bg_Gjyo_Bridge_reloc.o"
endseg

beginseg
    name "ovl_Bg_Gnd_Darkmeiro"
    compress
    include "build/src/overlays/actors/ovl_Bg_Gnd_Darkmeiro/z_bg_gnd_darkmeiro.o"
    include "build/src/overlays/actors/ovl_Bg_Gnd_Darkmeiro/ovl_Bg_Gnd_Darkmeiro_reloc.o"
endseg

beginseg
    name "ovl_Bg_Gnd_Firemeiro"
    compress
    include "build/src/overlays/actors/ovl_Bg_Gnd_Firemeiro/z_bg_gnd_firemeiro.o"
    include "build/data/overlays/actors/z_bg_gnd_firemeiro.data.o"
    include "build/data/overlays/actors/z_bg_gnd_firemeiro.reloc.o"
endseg

beginseg
    name "ovl_Bg_Gnd_Iceblock"
    compress
    include "build/src/overlays/actors/ovl_Bg_Gnd_Iceblock/z_bg_gnd_iceblock.o"
    include "build/src/overlays/actors/ovl_Bg_Gnd_Iceblock/ovl_Bg_Gnd_Iceblock_reloc.o"
endseg

beginseg
    name "ovl_Bg_Gnd_Nisekabe"
    compress
    include "build/src/overlays/actors/ovl_Bg_Gnd_Nisekabe/z_bg_gnd_nisekabe.o"
    include "build/src/overlays/actors/ovl_Bg_Gnd_Nisekabe/ovl_Bg_Gnd_Nisekabe_reloc.o"
endseg

beginseg
    name "ovl_Bg_Gnd_Soulmeiro"
    compress
    include "build/src/overlays/actors/ovl_Bg_Gnd_Soulmeiro/z_bg_gnd_soulmeiro.o"
    include "build/src/overlays/actors/ovl_Bg_Gnd_Soulmeiro/ovl_Bg_Gnd_Soulmeiro_reloc.o"
endseg

beginseg
    name "ovl_Bg_Haka"
    compress
    include "build/src/overlays/actors/ovl_Bg_Haka/z_bg_haka.o"
    include "build/src/overlays/actors/ovl_Bg_Haka/ovl_Bg_Haka_reloc.o"
endseg

beginseg
    name "ovl_Bg_Haka_Gate"
    compress
    include "build/src/overlays/actors/ovl_Bg_Haka_Gate/z_bg_haka_gate.o"
    include "build/src/overlays/actors/ovl_Bg_Haka_Gate/ovl_Bg_Haka_Gate_reloc.o"
endseg

beginseg
    name "ovl_Bg_Haka_Huta"
    compress
    include "build/src/overlays/actors/ovl_Bg_Haka_Huta/z_bg_haka_huta.o"
    include "build/src/overlays/actors/ovl_Bg_Haka_Huta/ovl_Bg_Haka_Huta_reloc.o"
endseg

beginseg
    name "ovl_Bg_Haka_Megane"
    compress
    include "build/src/overlays/actors/ovl_Bg_Haka_Megane/z_bg_haka_megane.o"
    include "build/src/overlays/actors/ovl_Bg_Haka_Megane/ovl_Bg_Haka_Megane_reloc.o"
endseg

beginseg
    name "ovl_Bg_Haka_MeganeBG"
    compress
    include "build/src/overlays/actors/ovl_Bg_Haka_MeganeBG/z_bg_haka_meganebg.o"
    include "build/src/overlays/actors/ovl_Bg_Haka_MeganeBG/ovl_Bg_Haka_MeganeBG_reloc.o"
endseg

beginseg
    name "ovl_Bg_Haka_Sgami"
    compress
    include "build/src/overlays/actors/ovl_Bg_Haka_Sgami/z_bg_haka_sgami.o"
    include "build/src/overlays/actors/ovl_Bg_Haka_Sgami/ovl_Bg_Haka_Sgami_reloc.o"
endseg

beginseg
    name "ovl_Bg_Haka_Ship"
    compress
    include "build/src/overlays/actors/ovl_Bg_Haka_Ship/z_bg_haka_ship.o"
    include "build/src/overlays/actors/ovl_Bg_Haka_Ship/ovl_Bg_Haka_Ship_reloc.o"
endseg

beginseg
    name "ovl_Bg_Haka_Trap"
    compress
    include "build/src/overlays/actors/ovl_Bg_Haka_Trap/z_bg_haka_trap.o"
    include "build/src/overlays/actors/ovl_Bg_Haka_Trap/ovl_Bg_Haka_Trap_reloc.o"
endseg

beginseg
    name "ovl_Bg_Haka_Tubo"
    compress
    include "build/src/overlays/actors/ovl_Bg_Haka_Tubo/z_bg_haka_tubo.o"
    include "build/src/overlays/actors/ovl_Bg_Haka_Tubo/ovl_Bg_Haka_Tubo_reloc.o"
endseg

beginseg
    name "ovl_Bg_Haka_Water"
    compress
    include "build/src/overlays/actors/ovl_Bg_Haka_Water/z_bg_haka_water.o"
    include "build/src/overlays/actors/ovl_Bg_Haka_Water/ovl_Bg_Haka_Water_reloc.o"
endseg

beginseg
    name "ovl_Bg_Haka_Zou"
    compress
    include "build/src/overlays/actors/ovl_Bg_Haka_Zou/z_bg_haka_zou.o"
    include "build/src/overlays/actors/ovl_Bg_Haka_Zou/ovl_Bg_Haka_Zou_reloc.o"
endseg

beginseg
    name "ovl_Bg_Heavy_Block"
    compress
    include "build/src/overlays/actors/ovl_Bg_Heavy_Block/z_bg_heavy_block.o"
    include "build/src/overlays/actors/ovl_Bg_Heavy_Block/ovl_Bg_Heavy_Block_reloc.o"
endseg

beginseg
    name "ovl_Bg_Hidan_Curtain"
    compress
    include "build/src/overlays/actors/ovl_Bg_Hidan_Curtain/z_bg_hidan_curtain.o"
    include "build/src/overlays/actors/ovl_Bg_Hidan_Curtain/ovl_Bg_Hidan_Curtain_reloc.o"
endseg

beginseg
    name "ovl_Bg_Hidan_Dalm"
    compress
    include "build/src/overlays/actors/ovl_Bg_Hidan_Dalm/z_bg_hidan_dalm.o"
    include "build/src/overlays/actors/ovl_Bg_Hidan_Dalm/ovl_Bg_Hidan_Dalm_reloc.o"
endseg

beginseg
    name "ovl_Bg_Hidan_Firewall"
    compress
    include "build/src/overlays/actors/ovl_Bg_Hidan_Firewall/z_bg_hidan_firewall.o"
    include "build/src/overlays/actors/ovl_Bg_Hidan_Firewall/ovl_Bg_Hidan_Firewall_reloc.o"
endseg

beginseg
    name "ovl_Bg_Hidan_Fslift"
    compress
    include "build/src/overlays/actors/ovl_Bg_Hidan_Fslift/z_bg_hidan_fslift.o"
    include "build/src/overlays/actors/ovl_Bg_Hidan_Fslift/ovl_Bg_Hidan_Fslift_reloc.o"
endseg

beginseg
    name "ovl_Bg_Hidan_Fwbig"
    compress
    include "build/src/overlays/actors/ovl_Bg_Hidan_Fwbig/z_bg_hidan_fwbig.o"
    include "build/src/overlays/actors/ovl_Bg_Hidan_Fwbig/ovl_Bg_Hidan_Fwbig_reloc.o"
endseg

beginseg
    name "ovl_Bg_Hidan_Hamstep"
    compress
    include "build/src/overlays/actors/ovl_Bg_Hidan_Hamstep/z_bg_hidan_hamstep.o"
    include "build/src/overlays/actors/ovl_Bg_Hidan_Hamstep/ovl_Bg_Hidan_Hamstep_reloc.o"
endseg

beginseg
    name "ovl_Bg_Hidan_Hrock"
    compress
    include "build/src/overlays/actors/ovl_Bg_Hidan_Hrock/z_bg_hidan_hrock.o"
    include "build/src/overlays/actors/ovl_Bg_Hidan_Hrock/ovl_Bg_Hidan_Hrock_reloc.o"
endseg

beginseg
    name "ovl_Bg_Hidan_Kousi"
    compress
    include "build/src/overlays/actors/ovl_Bg_Hidan_Kousi/z_bg_hidan_kousi.o"
    include "build/src/overlays/actors/ovl_Bg_Hidan_Kousi/ovl_Bg_Hidan_Kousi_reloc.o"
endseg

beginseg
    name "ovl_Bg_Hidan_Kowarerukabe"
    compress
    include "build/src/overlays/actors/ovl_Bg_Hidan_Kowarerukabe/z_bg_hidan_kowarerukabe.o"
    include "build/src/overlays/actors/ovl_Bg_Hidan_Kowarerukabe/ovl_Bg_Hidan_Kowarerukabe_reloc.o"
endseg

beginseg
    name "ovl_Bg_Hidan_Rock"
    compress
    include "build/src/overlays/actors/ovl_Bg_Hidan_Rock/z_bg_hidan_rock.o"
    include "build/src/overlays/actors/ovl_Bg_Hidan_Rock/ovl_Bg_Hidan_Rock_reloc.o"
endseg

beginseg
    name "ovl_Bg_Hidan_Rsekizou"
    compress
    include "build/src/overlays/actors/ovl_Bg_Hidan_Rsekizou/z_bg_hidan_rsekizou.o"
    include "build/src/overlays/actors/ovl_Bg_Hidan_Rsekizou/ovl_Bg_Hidan_Rsekizou_reloc.o"
endseg

beginseg
    name "ovl_Bg_Hidan_Sekizou"
    compress
    include "build/src/overlays/actors/ovl_Bg_Hidan_Sekizou/z_bg_hidan_sekizou.o"
    include "build/src/overlays/actors/ovl_Bg_Hidan_Sekizou/ovl_Bg_Hidan_Sekizou_reloc.o"
endseg

beginseg
    name "ovl_Bg_Hidan_Sima"
    compress
    include "build/src/overlays/actors/ovl_Bg_Hidan_Sima/z_bg_hidan_sima.o"
    include "build/src/overlays/actors/ovl_Bg_Hidan_Sima/ovl_Bg_Hidan_Sima_reloc.o"
endseg

beginseg
    name "ovl_Bg_Hidan_Syoku"
    compress
    include "build/src/overlays/actors/ovl_Bg_Hidan_Syoku/z_bg_hidan_syoku.o"
    include "build/src/overlays/actors/ovl_Bg_Hidan_Syoku/ovl_Bg_Hidan_Syoku_reloc.o"
endseg

beginseg
    name "ovl_Bg_Ice_Objects"
    compress
    include "build/src/overlays/actors/ovl_Bg_Ice_Objects/z_bg_ice_objects.o"
    include "build/src/overlays/actors/ovl_Bg_Ice_Objects/ovl_Bg_Ice_Objects_reloc.o"
endseg

beginseg
    name "ovl_Bg_Ice_Shelter"
    compress
    include "build/src/overlays/actors/ovl_Bg_Ice_Shelter/z_bg_ice_shelter.o"
    include "build/src/overlays/actors/ovl_Bg_Ice_Shelter/ovl_Bg_Ice_Shelter_reloc.o"
endseg

beginseg
    name "ovl_Bg_Ice_Shutter"
    compress
    include "build/src/overlays/actors/ovl_Bg_Ice_Shutter/z_bg_ice_shutter.o"
    include "build/src/overlays/actors/ovl_Bg_Ice_Shutter/ovl_Bg_Ice_Shutter_reloc.o"
endseg

beginseg
    name "ovl_Bg_Ice_Turara"
    compress
    include "build/src/overlays/actors/ovl_Bg_Ice_Turara/z_bg_ice_turara.o"
    include "build/src/overlays/actors/ovl_Bg_Ice_Turara/ovl_Bg_Ice_Turara_reloc.o"
endseg

beginseg
    name "ovl_Bg_Ingate"
    compress
    include "build/src/overlays/actors/ovl_Bg_Ingate/z_bg_ingate.o"
    include "build/src/overlays/actors/ovl_Bg_Ingate/ovl_Bg_Ingate_reloc.o"
endseg

beginseg
    name "ovl_Bg_Jya_1flift"
    compress
    include "build/src/overlays/actors/ovl_Bg_Jya_1flift/z_bg_jya_1flift.o"
    include "build/src/overlays/actors/ovl_Bg_Jya_1flift/ovl_Bg_Jya_1flift_reloc.o"
endseg

beginseg
    name "ovl_Bg_Jya_Amishutter"
    compress
    include "build/src/overlays/actors/ovl_Bg_Jya_Amishutter/z_bg_jya_amishutter.o"
    include "build/src/overlays/actors/ovl_Bg_Jya_Amishutter/ovl_Bg_Jya_Amishutter_reloc.o"
endseg

beginseg
    name "ovl_Bg_Jya_Bigmirror"
    compress
    include "build/src/overlays/actors/ovl_Bg_Jya_Bigmirror/z_bg_jya_bigmirror.o"
    include "build/src/overlays/actors/ovl_Bg_Jya_Bigmirror/ovl_Bg_Jya_Bigmirror_reloc.o"
endseg

beginseg
    name "ovl_Bg_Jya_Block"
    compress
    include "build/src/overlays/actors/ovl_Bg_Jya_Block/z_bg_jya_block.o"
    include "build/src/overlays/actors/ovl_Bg_Jya_Block/ovl_Bg_Jya_Block_reloc.o"
endseg

beginseg
    name "ovl_Bg_Jya_Bombchuiwa"
    compress
    include "build/src/overlays/actors/ovl_Bg_Jya_Bombchuiwa/z_bg_jya_bombchuiwa.o"
    include "build/src/overlays/actors/ovl_Bg_Jya_Bombchuiwa/ovl_Bg_Jya_Bombchuiwa_reloc.o"
endseg

beginseg
    name "ovl_Bg_Jya_Bombiwa"
    compress
    include "build/src/overlays/actors/ovl_Bg_Jya_Bombiwa/z_bg_jya_bombiwa.o"
    include "build/src/overlays/actors/ovl_Bg_Jya_Bombiwa/ovl_Bg_Jya_Bombiwa_reloc.o"
endseg

beginseg
    name "ovl_Bg_Jya_Cobra"
    compress
    include "build/src/overlays/actors/ovl_Bg_Jya_Cobra/z_bg_jya_cobra.o"
#ifdef NON_MATCHING
    include "build/src/overlays/actors/ovl_Bg_Jya_Cobra/ovl_Bg_Jya_Cobra_reloc.o"
#else
    include "build/data/overlays/actors/z_bg_jya_cobra.reloc.o"
#endif
endseg

beginseg
    name "ovl_Bg_Jya_Goroiwa"
    compress
    include "build/src/overlays/actors/ovl_Bg_Jya_Goroiwa/z_bg_jya_goroiwa.o"
    include "build/src/overlays/actors/ovl_Bg_Jya_Goroiwa/ovl_Bg_Jya_Goroiwa_reloc.o"
endseg

beginseg
    name "ovl_Bg_Jya_Haheniron"
    compress
    include "build/src/overlays/actors/ovl_Bg_Jya_Haheniron/z_bg_jya_haheniron.o"
    include "build/src/overlays/actors/ovl_Bg_Jya_Haheniron/ovl_Bg_Jya_Haheniron_reloc.o"
endseg

beginseg
    name "ovl_Bg_Jya_Ironobj"
    compress
    include "build/src/overlays/actors/ovl_Bg_Jya_Ironobj/z_bg_jya_ironobj.o"
    include "build/src/overlays/actors/ovl_Bg_Jya_Ironobj/ovl_Bg_Jya_Ironobj_reloc.o"
endseg

beginseg
    name "ovl_Bg_Jya_Kanaami"
    compress
    include "build/src/overlays/actors/ovl_Bg_Jya_Kanaami/z_bg_jya_kanaami.o"
    include "build/src/overlays/actors/ovl_Bg_Jya_Kanaami/ovl_Bg_Jya_Kanaami_reloc.o"
endseg

beginseg
    name "ovl_Bg_Jya_Lift"
    compress
    include "build/src/overlays/actors/ovl_Bg_Jya_Lift/z_bg_jya_lift.o"
    include "build/src/overlays/actors/ovl_Bg_Jya_Lift/ovl_Bg_Jya_Lift_reloc.o"
endseg

beginseg
    name "ovl_Bg_Jya_Megami"
    compress
    include "build/src/overlays/actors/ovl_Bg_Jya_Megami/z_bg_jya_megami.o"
    include "build/src/overlays/actors/ovl_Bg_Jya_Megami/ovl_Bg_Jya_Megami_reloc.o"
endseg

beginseg
    name "ovl_Bg_Jya_Zurerukabe"
    compress
    include "build/src/overlays/actors/ovl_Bg_Jya_Zurerukabe/z_bg_jya_zurerukabe.o"
    include "build/src/overlays/actors/ovl_Bg_Jya_Zurerukabe/ovl_Bg_Jya_Zurerukabe_reloc.o"
endseg

beginseg
    name "ovl_Bg_Menkuri_Eye"
    compress
    include "build/src/overlays/actors/ovl_Bg_Menkuri_Eye/z_bg_menkuri_eye.o"
    include "build/src/overlays/actors/ovl_Bg_Menkuri_Eye/ovl_Bg_Menkuri_Eye_reloc.o"
endseg

beginseg
    name "ovl_Bg_Menkuri_Kaiten"
    compress
    include "build/src/overlays/actors/ovl_Bg_Menkuri_Kaiten/z_bg_menkuri_kaiten.o"
    include "build/src/overlays/actors/ovl_Bg_Menkuri_Kaiten/ovl_Bg_Menkuri_Kaiten_reloc.o"
endseg

beginseg
    name "ovl_Bg_Menkuri_Nisekabe"
    compress
    include "build/src/overlays/actors/ovl_Bg_Menkuri_Nisekabe/z_bg_menkuri_nisekabe.o"
    include "build/src/overlays/actors/ovl_Bg_Menkuri_Nisekabe/ovl_Bg_Menkuri_Nisekabe_reloc.o"
endseg

beginseg
    name "ovl_Bg_Mizu_Bwall"
    compress
    include "build/src/overlays/actors/ovl_Bg_Mizu_Bwall/z_bg_mizu_bwall.o"
    include "build/src/overlays/actors/ovl_Bg_Mizu_Bwall/ovl_Bg_Mizu_Bwall_reloc.o"
endseg

beginseg
    name "ovl_Bg_Mizu_Movebg"
    compress
    include "build/src/overlays/actors/ovl_Bg_Mizu_Movebg/z_bg_mizu_movebg.o"
    include "build/data/overlays/actors/z_bg_mizu_movebg.data.o"
    include "build/data/overlays/actors/z_bg_mizu_movebg.bss.o"
    include "build/data/overlays/actors/z_bg_mizu_movebg.reloc.o"
endseg

beginseg
    name "ovl_Bg_Mizu_Shutter"
    compress
    include "build/src/overlays/actors/ovl_Bg_Mizu_Shutter/z_bg_mizu_shutter.o"
    include "build/src/overlays/actors/ovl_Bg_Mizu_Shutter/ovl_Bg_Mizu_Shutter_reloc.o"
endseg

beginseg
    name "ovl_Bg_Mizu_Uzu"
    compress
    include "build/src/overlays/actors/ovl_Bg_Mizu_Uzu/z_bg_mizu_uzu.o"
    include "build/src/overlays/actors/ovl_Bg_Mizu_Uzu/ovl_Bg_Mizu_Uzu_reloc.o"
endseg

beginseg
    name "ovl_Bg_Mizu_Water"
    compress
    include "build/src/overlays/actors/ovl_Bg_Mizu_Water/z_bg_mizu_water.o"
    include "build/src/overlays/actors/ovl_Bg_Mizu_Water/ovl_Bg_Mizu_Water_reloc.o"
endseg

beginseg
    name "ovl_Bg_Mjin"
    compress
    include "build/src/overlays/actors/ovl_Bg_Mjin/z_bg_mjin.o"
    include "build/src/overlays/actors/ovl_Bg_Mjin/ovl_Bg_Mjin_reloc.o"
endseg

beginseg
    name "ovl_Bg_Mori_Bigst"
    compress
    include "build/src/overlays/actors/ovl_Bg_Mori_Bigst/z_bg_mori_bigst.o"
    include "build/src/overlays/actors/ovl_Bg_Mori_Bigst/ovl_Bg_Mori_Bigst_reloc.o"
endseg

beginseg
    name "ovl_Bg_Mori_Elevator"
    compress
    include "build/src/overlays/actors/ovl_Bg_Mori_Elevator/z_bg_mori_elevator.o"
    include "build/src/overlays/actors/ovl_Bg_Mori_Elevator/ovl_Bg_Mori_Elevator_reloc.o"
endseg

beginseg
    name "ovl_Bg_Mori_Hashigo"
    compress
    include "build/src/overlays/actors/ovl_Bg_Mori_Hashigo/z_bg_mori_hashigo.o"
    include "build/src/overlays/actors/ovl_Bg_Mori_Hashigo/ovl_Bg_Mori_Hashigo_reloc.o"
endseg

beginseg
    name "ovl_Bg_Mori_Hashira4"
    compress
    include "build/src/overlays/actors/ovl_Bg_Mori_Hashira4/z_bg_mori_hashira4.o"
    include "build/src/overlays/actors/ovl_Bg_Mori_Hashira4/ovl_Bg_Mori_Hashira4_reloc.o"
endseg

beginseg
    name "ovl_Bg_Mori_Hineri"
    compress
    include "build/src/overlays/actors/ovl_Bg_Mori_Hineri/z_bg_mori_hineri.o"
    include "build/src/overlays/actors/ovl_Bg_Mori_Hineri/ovl_Bg_Mori_Hineri_reloc.o"
endseg

beginseg
    name "ovl_Bg_Mori_Idomizu"
    compress
    include "build/src/overlays/actors/ovl_Bg_Mori_Idomizu/z_bg_mori_idomizu.o"
    include "build/src/overlays/actors/ovl_Bg_Mori_Idomizu/ovl_Bg_Mori_Idomizu_reloc.o"
endseg

beginseg
    name "ovl_Bg_Mori_Kaitenkabe"
    compress
    include "build/src/overlays/actors/ovl_Bg_Mori_Kaitenkabe/z_bg_mori_kaitenkabe.o"
    include "build/src/overlays/actors/ovl_Bg_Mori_Kaitenkabe/ovl_Bg_Mori_Kaitenkabe_reloc.o"
endseg

beginseg
    name "ovl_Bg_Mori_Rakkatenjo"
    compress
    include "build/src/overlays/actors/ovl_Bg_Mori_Rakkatenjo/z_bg_mori_rakkatenjo.o"
    include "build/src/overlays/actors/ovl_Bg_Mori_Rakkatenjo/ovl_Bg_Mori_Rakkatenjo_reloc.o"
endseg

beginseg
    name "ovl_Bg_Po_Event"
    compress
    include "build/src/overlays/actors/ovl_Bg_Po_Event/z_bg_po_event.o"
    include "build/src/overlays/actors/ovl_Bg_Po_Event/ovl_Bg_Po_Event_reloc.o"
endseg

beginseg
    name "ovl_Bg_Po_Syokudai"
    compress
    include "build/src/overlays/actors/ovl_Bg_Po_Syokudai/z_bg_po_syokudai.o"
    include "build/src/overlays/actors/ovl_Bg_Po_Syokudai/ovl_Bg_Po_Syokudai_reloc.o"
endseg

beginseg
    name "ovl_Bg_Pushbox"
    compress
    include "build/src/overlays/actors/ovl_Bg_Pushbox/z_bg_pushbox.o"
    include "build/src/overlays/actors/ovl_Bg_Pushbox/ovl_Bg_Pushbox_reloc.o"
endseg

beginseg
    name "ovl_Bg_Relay_Objects"
    compress
    include "build/src/overlays/actors/ovl_Bg_Relay_Objects/z_bg_relay_objects.o"
    include "build/src/overlays/actors/ovl_Bg_Relay_Objects/ovl_Bg_Relay_Objects_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot00_Break"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot00_Break/z_bg_spot00_break.o"
    include "build/src/overlays/actors/ovl_Bg_Spot00_Break/ovl_Bg_Spot00_Break_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot00_Hanebasi"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot00_Hanebasi/z_bg_spot00_hanebasi.o"
    include "build/src/overlays/actors/ovl_Bg_Spot00_Hanebasi/ovl_Bg_Spot00_Hanebasi_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot01_Fusya"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot01_Fusya/z_bg_spot01_fusya.o"
    include "build/src/overlays/actors/ovl_Bg_Spot01_Fusya/ovl_Bg_Spot01_Fusya_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot01_Idohashira"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot01_Idohashira/z_bg_spot01_idohashira.o"
    include "build/src/overlays/actors/ovl_Bg_Spot01_Idohashira/ovl_Bg_Spot01_Idohashira_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot01_Idomizu"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot01_Idomizu/z_bg_spot01_idomizu.o"
    include "build/src/overlays/actors/ovl_Bg_Spot01_Idomizu/ovl_Bg_Spot01_Idomizu_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot01_Idosoko"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot01_Idosoko/z_bg_spot01_idosoko.o"
    include "build/src/overlays/actors/ovl_Bg_Spot01_Idosoko/ovl_Bg_Spot01_Idosoko_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot01_Objects2"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot01_Objects2/z_bg_spot01_objects2.o"
    include "build/src/overlays/actors/ovl_Bg_Spot01_Objects2/ovl_Bg_Spot01_Objects2_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot02_Objects"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot02_Objects/z_bg_spot02_objects.o"
    include "build/src/overlays/actors/ovl_Bg_Spot02_Objects/ovl_Bg_Spot02_Objects_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot03_Taki"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot03_Taki/z_bg_spot03_taki.o"
    include "build/src/overlays/actors/ovl_Bg_Spot03_Taki/ovl_Bg_Spot03_Taki_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot05_Soko"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot05_Soko/z_bg_spot05_soko.o"
    include "build/src/overlays/actors/ovl_Bg_Spot05_Soko/ovl_Bg_Spot05_Soko_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot06_Objects"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot06_Objects/z_bg_spot06_objects.o"
    include "build/src/overlays/actors/ovl_Bg_Spot06_Objects/ovl_Bg_Spot06_Objects_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot07_Taki"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot07_Taki/z_bg_spot07_taki.o"
    include "build/src/overlays/actors/ovl_Bg_Spot07_Taki/ovl_Bg_Spot07_Taki_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot08_Bakudankabe"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot08_Bakudankabe/z_bg_spot08_bakudankabe.o"
    include "build/src/overlays/actors/ovl_Bg_Spot08_Bakudankabe/ovl_Bg_Spot08_Bakudankabe_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot08_Iceblock"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot08_Iceblock/z_bg_spot08_iceblock.o"
    include "build/src/overlays/actors/ovl_Bg_Spot08_Iceblock/ovl_Bg_Spot08_Iceblock_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot09_Obj"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot09_Obj/z_bg_spot09_obj.o"
    include "build/src/overlays/actors/ovl_Bg_Spot09_Obj/ovl_Bg_Spot09_Obj_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot11_Bakudankabe"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot11_Bakudankabe/z_bg_spot11_bakudankabe.o"
    include "build/src/overlays/actors/ovl_Bg_Spot11_Bakudankabe/ovl_Bg_Spot11_Bakudankabe_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot11_Oasis"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot11_Oasis/z_bg_spot11_oasis.o"
    include "build/src/overlays/actors/ovl_Bg_Spot11_Oasis/ovl_Bg_Spot11_Oasis_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot12_Gate"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot12_Gate/z_bg_spot12_gate.o"
    include "build/src/overlays/actors/ovl_Bg_Spot12_Gate/ovl_Bg_Spot12_Gate_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot12_Saku"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot12_Saku/z_bg_spot12_saku.o"
    include "build/src/overlays/actors/ovl_Bg_Spot12_Saku/ovl_Bg_Spot12_Saku_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot15_Rrbox"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot15_Rrbox/z_bg_spot15_rrbox.o"
    include "build/src/overlays/actors/ovl_Bg_Spot15_Rrbox/ovl_Bg_Spot15_Rrbox_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot15_Saku"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot15_Saku/z_bg_spot15_saku.o"
    include "build/src/overlays/actors/ovl_Bg_Spot15_Saku/ovl_Bg_Spot15_Saku_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot16_Bombstone"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot16_Bombstone/z_bg_spot16_bombstone.o"
    include "build/src/overlays/actors/ovl_Bg_Spot16_Bombstone/ovl_Bg_Spot16_Bombstone_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot16_Doughnut"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot16_Doughnut/z_bg_spot16_doughnut.o"
    include "build/src/overlays/actors/ovl_Bg_Spot16_Doughnut/ovl_Bg_Spot16_Doughnut_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot17_Bakudankabe"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot17_Bakudankabe/z_bg_spot17_bakudankabe.o"
    include "build/src/overlays/actors/ovl_Bg_Spot17_Bakudankabe/ovl_Bg_Spot17_Bakudankabe_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot17_Funen"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot17_Funen/z_bg_spot17_funen.o"
    include "build/src/overlays/actors/ovl_Bg_Spot17_Funen/ovl_Bg_Spot17_Funen_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot18_Basket"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot18_Basket/z_bg_spot18_basket.o"
    include "build/src/overlays/actors/ovl_Bg_Spot18_Basket/ovl_Bg_Spot18_Basket_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot18_Futa"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot18_Futa/z_bg_spot18_futa.o"
    include "build/src/overlays/actors/ovl_Bg_Spot18_Futa/ovl_Bg_Spot18_Futa_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot18_Obj"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot18_Obj/z_bg_spot18_obj.o"
    include "build/src/overlays/actors/ovl_Bg_Spot18_Obj/ovl_Bg_Spot18_Obj_reloc.o"
endseg

beginseg
    name "ovl_Bg_Spot18_Shutter"
    compress
    include "build/src/overlays/actors/ovl_Bg_Spot18_Shutter/z_bg_spot18_shutter.o"
    include "build/src/overlays/actors/ovl_Bg_Spot18_Shutter/ovl_Bg_Spot18_Shutter_reloc.o"
endseg

beginseg
    name "ovl_Bg_Toki_Hikari"
    compress
    include "build/src/overlays/actors/ovl_Bg_Toki_Hikari/z_bg_toki_hikari.o"
    include "build/data/overlays/actors/z_bg_toki_hikari.data.o"
    include "build/data/overlays/actors/z_bg_toki_hikari.reloc.o"
endseg

beginseg
    name "ovl_Bg_Toki_Swd"
    compress
    include "build/src/overlays/actors/ovl_Bg_Toki_Swd/z_bg_toki_swd_cutscene_data_1.o"
    include "build/src/overlays/actors/ovl_Bg_Toki_Swd/z_bg_toki_swd_cutscene_data_2.o"
    include "build/src/overlays/actors/ovl_Bg_Toki_Swd/z_bg_toki_swd_cutscene_data_3.o"
    include "build/src/overlays/actors/ovl_Bg_Toki_Swd/z_bg_toki_swd.o"
    include "build/src/overlays/actors/ovl_Bg_Toki_Swd/ovl_Bg_Toki_Swd_reloc.o"
endseg

beginseg
    name "ovl_Bg_Treemouth"
    compress
    include "build/src/overlays/actors/ovl_Bg_Treemouth/z_bg_treemouth.o"
    include "build/src/overlays/actors/ovl_Bg_Treemouth/ovl_Bg_Treemouth_reloc.o"
endseg

beginseg
    name "ovl_Bg_Umajump"
    compress
    include "build/src/overlays/actors/ovl_Bg_Umajump/z_bg_umajump.o"
    include "build/src/overlays/actors/ovl_Bg_Umajump/ovl_Bg_Umajump_reloc.o"
endseg

beginseg
    name "ovl_Bg_Vb_Sima"
    compress
    include "build/src/overlays/actors/ovl_Bg_Vb_Sima/z_bg_vb_sima.o"
    include "build/data/overlays/actors/z_bg_vb_sima.data.o"
    include "build/data/overlays/actors/z_bg_vb_sima.reloc.o"
endseg

beginseg
    name "ovl_Bg_Ydan_Hasi"
    compress
    include "build/src/overlays/actors/ovl_Bg_Ydan_Hasi/z_bg_ydan_hasi.o"
    include "build/src/overlays/actors/ovl_Bg_Ydan_Hasi/ovl_Bg_Ydan_Hasi_reloc.o"
endseg

beginseg
    name "ovl_Bg_Ydan_Maruta"
    compress
    include "build/src/overlays/actors/ovl_Bg_Ydan_Maruta/z_bg_ydan_maruta.o"
    include "build/src/overlays/actors/ovl_Bg_Ydan_Maruta/ovl_Bg_Ydan_Maruta_reloc.o"
endseg

beginseg
    name "ovl_Bg_Ydan_Sp"
    compress
    include "build/src/overlays/actors/ovl_Bg_Ydan_Sp/z_bg_ydan_sp.o"
    include "build/src/overlays/actors/ovl_Bg_Ydan_Sp/ovl_Bg_Ydan_Sp_reloc.o"
endseg

beginseg
    name "ovl_Bg_Zg"
    compress
    include "build/src/overlays/actors/ovl_Bg_Zg/z_bg_zg.o"
    include "build/src/overlays/actors/ovl_Bg_Zg/ovl_Bg_Zg_reloc.o"
endseg

beginseg
    name "ovl_Boss_Dodongo"
    compress
    include "build/src/overlays/actors/ovl_Boss_Dodongo/z_boss_dodongo.o"
    include "build/src/overlays/actors/ovl_Boss_Dodongo/ovl_Boss_Dodongo_reloc.o"
endseg

beginseg
    name "ovl_Boss_Ganondrof"
    compress
    include "build/src/overlays/actors/ovl_Boss_Ganondrof/z_boss_ganondrof.o"
    include "build/src/overlays/actors/ovl_Boss_Ganondrof/ovl_Boss_Ganondrof_reloc.o"
endseg

beginseg
    name "ovl_Boss_Goma"
    compress
    include "build/src/overlays/actors/ovl_Boss_Goma/z_boss_goma.o"
    include "build/src/overlays/actors/ovl_Boss_Goma/ovl_Boss_Goma_reloc.o"
endseg

beginseg
    name "ovl_Demo_6K"
    compress
    include "build/src/overlays/actors/ovl_Demo_6K/z_demo_6k.o"
    include "build/src/overlays/actors/ovl_Demo_6K/ovl_Demo_6K_reloc.o"
endseg

beginseg
    name "ovl_Demo_Du"
    compress
    include "build/src/overlays/actors/ovl_Demo_Du/z_demo_du.o"
    include "build/src/overlays/actors/ovl_Demo_Du/ovl_Demo_Du_reloc.o"
endseg

beginseg
    name "ovl_Demo_Ec"
    compress
    include "build/src/overlays/actors/ovl_Demo_Ec/z_demo_ec.o"
    include "build/src/overlays/actors/ovl_Demo_Ec/ovl_Demo_Ec_reloc.o"
endseg

beginseg
    name "ovl_Demo_Effect"
    compress
    include "build/src/overlays/actors/ovl_Demo_Effect/z_demo_effect.o"
    include "build/src/overlays/actors/ovl_Demo_Effect/ovl_Demo_Effect_reloc.o"
endseg

beginseg
    name "ovl_Demo_Ext"
    compress
    include "build/src/overlays/actors/ovl_Demo_Ext/z_demo_ext.o"
    include "build/src/overlays/actors/ovl_Demo_Ext/ovl_Demo_Ext_reloc.o"
endseg

beginseg
    name "ovl_Demo_Geff"
    compress
    include "build/src/overlays/actors/ovl_Demo_Geff/z_demo_geff.o"
    include "build/src/overlays/actors/ovl_Demo_Geff/ovl_Demo_Geff_reloc.o"
endseg

beginseg
    name "ovl_Demo_Go"
    compress
    include "build/src/overlays/actors/ovl_Demo_Go/z_demo_go.o"
    include "build/src/overlays/actors/ovl_Demo_Go/ovl_Demo_Go_reloc.o"
endseg

beginseg
    name "ovl_Demo_Gt"
    compress
    include "build/src/overlays/actors/ovl_Demo_Gt/z_demo_gt.o"
    include "build/src/overlays/actors/ovl_Demo_Gt/ovl_Demo_Gt_reloc.o"
endseg

beginseg
    name "ovl_Demo_Ik"
    compress
    include "build/src/overlays/actors/ovl_Demo_Ik/z_demo_ik.o"
    include "build/src/overlays/actors/ovl_Demo_Ik/ovl_Demo_Ik_reloc.o"
endseg

beginseg
    name "ovl_Demo_Im"
    compress
    include "build/src/overlays/actors/ovl_Demo_Im/z_demo_im.o"
    include "build/src/overlays/actors/ovl_Demo_Im/ovl_Demo_Im_reloc.o"
endseg

beginseg
    name "ovl_Demo_Kankyo"
    compress
    include "build/src/overlays/actors/ovl_Demo_Kankyo/z_demo_kankyo_cutscene_data1.o"
    include "build/src/overlays/actors/ovl_Demo_Kankyo/z_demo_kankyo_cutscene_data2.o"
    include "build/src/overlays/actors/ovl_Demo_Kankyo/z_demo_kankyo_cutscene_data3.o"
    include "build/src/overlays/actors/ovl_Demo_Kankyo/z_demo_kankyo_cutscene_data4.o"
    include "build/src/overlays/actors/ovl_Demo_Kankyo/z_demo_kankyo_cutscene_data5.o"
    include "build/src/overlays/actors/ovl_Demo_Kankyo/z_demo_kankyo_cutscene_data6.o"
    include "build/src/overlays/actors/ovl_Demo_Kankyo/z_demo_kankyo_cutscene_data7.o"
    include "build/src/overlays/actors/ovl_Demo_Kankyo/z_demo_kankyo_cutscene_data8.o"
    include "build/src/overlays/actors/ovl_Demo_Kankyo/z_demo_kankyo.o"
    include "build/src/overlays/actors/ovl_Demo_Kankyo/ovl_Demo_Kankyo_reloc.o"
endseg

beginseg
    name "ovl_Demo_Kekkai"
    compress
    include "build/src/overlays/actors/ovl_Demo_Kekkai/z_demo_kekkai.o"
    include "build/src/overlays/actors/ovl_Demo_Kekkai/ovl_Demo_Kekkai_reloc.o"
endseg

beginseg
    name "ovl_Demo_Sa"
    compress
    include "build/src/overlays/actors/ovl_Demo_Sa/z_demo_sa.o"
    include "build/src/overlays/actors/ovl_Demo_Sa/ovl_Demo_Sa_reloc.o"
endseg

beginseg
    name "ovl_Demo_Shd"
    compress
    include "build/src/overlays/actors/ovl_Demo_Shd/z_demo_shd.o"
    include "build/src/overlays/actors/ovl_Demo_Shd/ovl_Demo_Shd_reloc.o"
endseg

beginseg
    name "ovl_Demo_Tre_Lgt"
    compress
    include "build/src/overlays/actors/ovl_Demo_Tre_Lgt/z_demo_tre_lgt.o"
    include "build/src/overlays/actors/ovl_Demo_Tre_Lgt/ovl_Demo_Tre_Lgt_reloc.o"
endseg

beginseg
    name "ovl_Door_Ana"
    compress
    include "build/src/overlays/actors/ovl_Door_Ana/z_door_ana.o"
    include "build/src/overlays/actors/ovl_Door_Ana/ovl_Door_Ana_reloc.o"
endseg

beginseg
    name "ovl_Door_Gerudo"
    compress
    include "build/src/overlays/actors/ovl_Door_Gerudo/z_door_gerudo.o"
    include "build/src/overlays/actors/ovl_Door_Gerudo/ovl_Door_Gerudo_reloc.o"
endseg

beginseg
    name "ovl_Door_Killer"
    compress
    include "build/src/overlays/actors/ovl_Door_Killer/z_door_killer.o"
    include "build/src/overlays/actors/ovl_Door_Killer/ovl_Door_Killer_reloc.o"
endseg

beginseg
    name "ovl_Door_Shutter"
    compress
    include "build/src/overlays/actors/ovl_Door_Shutter/z_door_shutter.o"
    include "build/src/overlays/actors/ovl_Door_Shutter/ovl_Door_Shutter_reloc.o"
endseg

beginseg
    name "ovl_Door_Toki"
    compress
    include "build/src/overlays/actors/ovl_Door_Toki/z_door_toki.o"
    include "build/src/overlays/actors/ovl_Door_Toki/ovl_Door_Toki_reloc.o"
endseg

beginseg
    name "ovl_Door_Warp1"
    compress
    include "build/src/overlays/actors/ovl_Door_Warp1/z_door_warp1.o"
    include "build/src/overlays/actors/ovl_Door_Warp1/ovl_Door_Warp1_reloc.o"
endseg

beginseg
    name "ovl_Efc_Erupc"
    compress
    include "build/src/overlays/actors/ovl_Efc_Erupc/z_efc_erupc.o"
    include "build/data/overlays/actors/z_efc_erupc.data.o"
    include "build/data/overlays/actors/z_efc_erupc.reloc.o"
endseg

beginseg
    name "ovl_Eff_Dust"
    compress
    include "build/src/overlays/actors/ovl_Eff_Dust/z_eff_dust.o"
    include "build/src/overlays/actors/ovl_Eff_Dust/ovl_Eff_Dust_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Blast"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Blast/z_eff_ss_blast.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Blast/ovl_Effect_Ss_Blast_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Bomb"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Bomb/z_eff_ss_bomb.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Bomb/ovl_Effect_Ss_Bomb_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Bomb2"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Bomb2/z_eff_ss_bomb2.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Bomb2/ovl_Effect_Ss_Bomb2_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Bubble"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Bubble/z_eff_ss_bubble.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Bubble/ovl_Effect_Ss_Bubble_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_D_Fire"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_D_Fire/z_eff_ss_d_fire.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_D_Fire/ovl_Effect_Ss_D_Fire_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Dead_Db"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Dead_Db/z_eff_ss_dead_db.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Dead_Db/ovl_Effect_Ss_Dead_Db_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Dead_Dd"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Dead_Dd/z_eff_ss_dead_dd.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Dead_Dd/ovl_Effect_Ss_Dead_Dd_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Dead_Ds"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Dead_Ds/z_eff_ss_dead_ds.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Dead_Ds/ovl_Effect_Ss_Dead_Ds_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Dead_Sound"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Dead_Sound/z_eff_ss_dead_sound.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Dead_Sound/ovl_Effect_Ss_Dead_Sound_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Dt_Bubble"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Dt_Bubble/z_eff_ss_dt_bubble.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Dt_Bubble/ovl_Effect_Ss_Dt_Bubble_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Dust"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Dust/z_eff_ss_dust.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Dust/ovl_Effect_Ss_Dust_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_En_Fire"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_En_Fire/z_eff_ss_en_fire.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_En_Fire/ovl_Effect_Ss_En_Fire_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_En_Ice"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_En_Ice/z_eff_ss_en_ice.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_En_Ice/ovl_Effect_Ss_En_Ice_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Extra"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Extra/z_eff_ss_extra.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Extra/ovl_Effect_Ss_Extra_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Fcircle"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Fcircle/z_eff_ss_fcircle.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Fcircle/ovl_Effect_Ss_Fcircle_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Fhg_Flash"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Fhg_Flash/z_eff_ss_fhg_flash.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Fhg_Flash/ovl_Effect_Ss_Fhg_Flash_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Fire_Tail"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Fire_Tail/z_eff_ss_fire_tail.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Fire_Tail/ovl_Effect_Ss_Fire_Tail_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_G_Fire"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_G_Fire/z_eff_ss_g_fire.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_G_Fire/ovl_Effect_Ss_G_Fire_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_G_Magma"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_G_Magma/z_eff_ss_g_magma.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_G_Magma/ovl_Effect_Ss_G_Magma_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_G_Magma2"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_G_Magma2/z_eff_ss_g_magma2.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_G_Magma2/ovl_Effect_Ss_G_Magma2_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_G_Ripple"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_G_Ripple/z_eff_ss_g_ripple.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_G_Ripple/ovl_Effect_Ss_G_Ripple_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_G_Spk"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_G_Spk/z_eff_ss_g_spk.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_G_Spk/ovl_Effect_Ss_G_Spk_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_G_Splash"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_G_Splash/z_eff_ss_g_splash.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_G_Splash/ovl_Effect_Ss_G_Splash_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Hahen"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Hahen/z_eff_ss_hahen.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Hahen/ovl_Effect_Ss_Hahen_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_HitMark"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_HitMark/z_eff_ss_hitmark.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_HitMark/ovl_Effect_Ss_HitMark_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Ice_Piece"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Ice_Piece/z_eff_ss_ice_piece.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Ice_Piece/ovl_Effect_Ss_Ice_Piece_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Ice_Smoke"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Ice_Smoke/z_eff_ss_ice_smoke.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Ice_Smoke/ovl_Effect_Ss_Ice_Smoke_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_K_Fire"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_K_Fire/z_eff_ss_k_fire.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_K_Fire/ovl_Effect_Ss_K_Fire_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Kakera"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Kakera/z_eff_ss_kakera.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Kakera/ovl_Effect_Ss_Kakera_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_KiraKira"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_KiraKira/z_eff_ss_kirakira.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_KiraKira/ovl_Effect_Ss_KiraKira_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Lightning"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Lightning/z_eff_ss_lightning.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Lightning/ovl_Effect_Ss_Lightning_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Sibuki"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Sibuki/z_eff_ss_sibuki.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Sibuki/ovl_Effect_Ss_Sibuki_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Sibuki2"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Sibuki2/z_eff_ss_sibuki2.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Sibuki2/ovl_Effect_Ss_Sibuki2_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Solder_Srch_Ball"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Solder_Srch_Ball/z_eff_ss_solder_srch_ball.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Solder_Srch_Ball/ovl_Effect_Ss_Solder_Srch_Ball_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Stick"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Stick/z_eff_ss_stick.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Stick/ovl_Effect_Ss_Stick_reloc.o"
endseg

beginseg
    name "ovl_Effect_Ss_Stone1"
    compress
    include "build/src/overlays/effects/ovl_Effect_Ss_Stone1/z_eff_ss_stone1.o"
    include "build/src/overlays/effects/ovl_Effect_Ss_Stone1/ovl_Effect_Ss_Stone1_reloc.o"
endseg

beginseg
    name "ovl_Elf_Msg"
    compress
    include "build/src/overlays/actors/ovl_Elf_Msg/z_elf_msg.o"
    include "build/src/overlays/actors/ovl_Elf_Msg/ovl_Elf_Msg_reloc.o"
endseg

beginseg
    name "ovl_Elf_Msg2"
    compress
    include "build/src/overlays/actors/ovl_Elf_Msg2/z_elf_msg2.o"
    include "build/src/overlays/actors/ovl_Elf_Msg2/ovl_Elf_Msg2_reloc.o"
endseg

beginseg
    name "ovl_En_Am"
    compress
    include "build/src/overlays/actors/ovl_En_Am/z_en_am.o"
    include "build/src/overlays/actors/ovl_En_Am/ovl_En_Am_reloc.o"
endseg

beginseg
    name "ovl_En_Ani"
    compress
    include "build/src/overlays/actors/ovl_En_Ani/z_en_ani.o"
    include "build/src/overlays/actors/ovl_En_Ani/ovl_En_Ani_reloc.o"
endseg

beginseg
    name "ovl_En_Anubice"
    compress
    include "build/src/overlays/actors/ovl_En_Anubice/z_en_anubice.o"
    include "build/src/overlays/actors/ovl_En_Anubice/ovl_En_Anubice_reloc.o"
endseg

beginseg
    name "ovl_En_Anubice_Fire"
    compress
    include "build/src/overlays/actors/ovl_En_Anubice_Fire/z_en_anubice_fire.o"
    include "build/src/overlays/actors/ovl_En_Anubice_Fire/ovl_En_Anubice_Fire_reloc.o"
endseg

beginseg
    name "ovl_En_Anubice_Tag"
    compress
    include "build/src/overlays/actors/ovl_En_Anubice_Tag/z_en_anubice_tag.o"
    include "build/src/overlays/actors/ovl_En_Anubice_Tag/ovl_En_Anubice_Tag_reloc.o"
endseg

beginseg
    name "ovl_En_Arow_Trap"
    compress
    include "build/src/overlays/actors/ovl_En_Arow_Trap/z_en_arow_trap.o"
    include "build/src/overlays/actors/ovl_En_Arow_Trap/ovl_En_Arow_Trap_reloc.o"
endseg

beginseg
    name "ovl_En_Arrow"
    compress
    include "build/src/overlays/actors/ovl_En_Arrow/z_en_arrow.o"
    include "build/src/overlays/actors/ovl_En_Arrow/ovl_En_Arrow_reloc.o"
endseg

beginseg
    name "ovl_En_Attack_Niw"
    compress
    include "build/src/overlays/actors/ovl_En_Attack_Niw/z_en_attack_niw.o"
    include "build/src/overlays/actors/ovl_En_Attack_Niw/ovl_En_Attack_Niw_reloc.o"
endseg

beginseg
    name "ovl_En_Ba"
    compress
    include "build/src/overlays/actors/ovl_En_Ba/z_en_ba.o"
    include "build/src/overlays/actors/ovl_En_Ba/ovl_En_Ba_reloc.o"
endseg

beginseg
    name "ovl_En_Bb"
    compress
    include "build/src/overlays/actors/ovl_En_Bb/z_en_bb.o"
    include "build/src/overlays/actors/ovl_En_Bb/ovl_En_Bb_reloc.o"
endseg

beginseg
    name "ovl_En_Bdfire"
    compress
    include "build/src/overlays/actors/ovl_En_Bdfire/z_en_bdfire.o"
    include "build/src/overlays/actors/ovl_En_Bdfire/ovl_En_Bdfire_reloc.o"
endseg

beginseg
    name "ovl_En_Bigokuta"
    compress
    include "build/src/overlays/actors/ovl_En_Bigokuta/z_en_bigokuta.o"
    include "build/data/overlays/actors/z_en_bigokuta.data.o"
    include "build/data/overlays/actors/z_en_bigokuta.reloc.o"
endseg

beginseg
    name "ovl_En_Bili"
    compress
    include "build/src/overlays/actors/ovl_En_Bili/z_en_bili.o"
    include "build/src/overlays/actors/ovl_En_Bili/ovl_En_Bili_reloc.o"
endseg

beginseg
    name "ovl_En_Bird"
    compress
    include "build/src/overlays/actors/ovl_En_Bird/z_en_bird.o"
    include "build/src/overlays/actors/ovl_En_Bird/ovl_En_Bird_reloc.o"
endseg

beginseg
    name "ovl_En_Blkobj"
    compress
    include "build/src/overlays/actors/ovl_En_Blkobj/z_en_blkobj.o"
    include "build/src/overlays/actors/ovl_En_Blkobj/ovl_En_Blkobj_reloc.o"
endseg

beginseg
    name "ovl_En_Bom"
    compress
    include "build/src/overlays/actors/ovl_En_Bom/z_en_bom.o"
    include "build/src/overlays/actors/ovl_En_Bom/ovl_En_Bom_reloc.o"
endseg

beginseg
    name "ovl_En_Bom_Bowl_Man"
    compress
    include "build/src/overlays/actors/ovl_En_Bom_Bowl_Man/z_en_bom_bowl_man.o"
    include "build/src/overlays/actors/ovl_En_Bom_Bowl_Man/ovl_En_Bom_Bowl_Man_reloc.o"
endseg

beginseg
    name "ovl_En_Bom_Bowl_Pit"
    compress
    include "build/src/overlays/actors/ovl_En_Bom_Bowl_Pit/z_en_bom_bowl_pit.o"
    include "build/src/overlays/actors/ovl_En_Bom_Bowl_Pit/ovl_En_Bom_Bowl_Pit_reloc.o"
endseg

beginseg
    name "ovl_En_Bom_Chu"
    compress
    include "build/src/overlays/actors/ovl_En_Bom_Chu/z_en_bom_chu.o"
    include "build/src/overlays/actors/ovl_En_Bom_Chu/ovl_En_Bom_Chu_reloc.o"
endseg

beginseg
    name "ovl_En_Bombf"
    compress
    include "build/src/overlays/actors/ovl_En_Bombf/z_en_bombf.o"
    include "build/src/overlays/actors/ovl_En_Bombf/ovl_En_Bombf_reloc.o"
endseg

beginseg
    name "ovl_En_Boom"
    compress
    include "build/src/overlays/actors/ovl_En_Boom/z_en_boom.o"
    include "build/src/overlays/actors/ovl_En_Boom/ovl_En_Boom_reloc.o"
endseg

beginseg
    name "ovl_En_Box"
    compress
    include "build/src/overlays/actors/ovl_En_Box/z_en_box.o"
    include "build/src/overlays/actors/ovl_En_Box/ovl_En_Box_reloc.o"
endseg

beginseg
    name "ovl_En_Brob"
    compress
    include "build/src/overlays/actors/ovl_En_Brob/z_en_brob.o"
    include "build/src/overlays/actors/ovl_En_Brob/ovl_En_Brob_reloc.o"
endseg

beginseg
    name "ovl_En_Bubble"
    compress
    include "build/src/overlays/actors/ovl_En_Bubble/z_en_bubble.o"
    include "build/src/overlays/actors/ovl_En_Bubble/ovl_En_Bubble_reloc.o"
endseg

beginseg
    name "ovl_En_Butte"
    compress
    include "build/src/overlays/actors/ovl_En_Butte/z_en_butte.o"
    include "build/src/overlays/actors/ovl_En_Butte/ovl_En_Butte_reloc.o"
endseg

beginseg
    name "ovl_En_Bw"
    compress
    include "build/src/overlays/actors/ovl_En_Bw/z_en_bw.o"
    include "build/src/overlays/actors/ovl_En_Bw/ovl_En_Bw_reloc.o"
endseg

beginseg
    name "ovl_En_Bx"
    compress
    include "build/src/overlays/actors/ovl_En_Bx/z_en_bx.o"
    include "build/src/overlays/actors/ovl_En_Bx/ovl_En_Bx_reloc.o"
endseg

beginseg
    name "ovl_En_Changer"
    compress
    include "build/src/overlays/actors/ovl_En_Changer/z_en_changer.o"
    include "build/src/overlays/actors/ovl_En_Changer/ovl_En_Changer_reloc.o"
endseg

beginseg
    name "ovl_En_Clear_Tag"
    compress
    include "build/src/overlays/actors/ovl_En_Clear_Tag/z_en_clear_tag.o"
    include "build/src/overlays/actors/ovl_En_Clear_Tag/ovl_En_Clear_Tag_reloc.o"
endseg

beginseg
    name "ovl_En_Cow"
    compress
    include "build/src/overlays/actors/ovl_En_Cow/z_en_cow.o"
    include "build/src/overlays/actors/ovl_En_Cow/ovl_En_Cow_reloc.o"
endseg

beginseg
    name "ovl_En_Crow"
    compress
    include "build/src/overlays/actors/ovl_En_Crow/z_en_crow.o"
    include "build/src/overlays/actors/ovl_En_Crow/ovl_En_Crow_reloc.o"
endseg

beginseg
    name "ovl_En_Cs"
    compress
    include "build/src/overlays/actors/ovl_En_Cs/z_en_cs.o"
    include "build/src/overlays/actors/ovl_En_Cs/ovl_En_Cs_reloc.o"
endseg

beginseg
    name "ovl_En_Daiku"
    compress
    include "build/src/overlays/actors/ovl_En_Daiku/z_en_daiku.o"
#ifdef NON_MATCHING
    include "build/src/overlays/actors/ovl_En_Daiku/ovl_En_Daiku_reloc.o"
#else
    include "build/data/overlays/actors/z_en_daiku.reloc.o"
#endif
endseg

beginseg
    name "ovl_En_Daiku_Kakariko"
    compress
    include "build/src/overlays/actors/ovl_En_Daiku_Kakariko/z_en_daiku_kakariko.o"
    include "build/src/overlays/actors/ovl_En_Daiku_Kakariko/ovl_En_Daiku_Kakariko_reloc.o"
endseg

beginseg
    name "ovl_En_Dekubaba"
    compress
    include "build/src/overlays/actors/ovl_En_Dekubaba/z_en_dekubaba.o"
    include "build/src/overlays/actors/ovl_En_Dekubaba/ovl_En_Dekubaba_reloc.o"
endseg

beginseg
    name "ovl_En_Dekunuts"
    compress
    include "build/src/overlays/actors/ovl_En_Dekunuts/z_en_dekunuts.o"
    include "build/src/overlays/actors/ovl_En_Dekunuts/ovl_En_Dekunuts_reloc.o"
endseg

beginseg
    name "ovl_En_Dh"
    compress
    include "build/src/overlays/actors/ovl_En_Dh/z_en_dh.o"
    include "build/src/overlays/actors/ovl_En_Dh/ovl_En_Dh_reloc.o"
endseg

beginseg
    name "ovl_En_Dha"
    compress
    include "build/src/overlays/actors/ovl_En_Dha/z_en_dha.o"
    include "build/src/overlays/actors/ovl_En_Dha/ovl_En_Dha_reloc.o"
endseg

beginseg
    name "ovl_En_Diving_Game"
    compress
    include "build/src/overlays/actors/ovl_En_Diving_Game/z_en_diving_game.o"
    include "build/src/overlays/actors/ovl_En_Diving_Game/ovl_En_Diving_Game_reloc.o"
endseg

beginseg
    name "ovl_En_Dns"
    compress
    include "build/src/overlays/actors/ovl_En_Dns/z_en_dns.o"
    include "build/src/overlays/actors/ovl_En_Dns/ovl_En_Dns_reloc.o"
endseg

beginseg
    name "ovl_En_Dnt_Demo"
    compress
    include "build/src/overlays/actors/ovl_En_Dnt_Demo/z_en_dnt_demo.o"
    include "build/src/overlays/actors/ovl_En_Dnt_Demo/ovl_En_Dnt_Demo_reloc.o"
endseg

beginseg
    name "ovl_En_Dnt_Jiji"
    compress
    include "build/src/overlays/actors/ovl_En_Dnt_Jiji/z_en_dnt_jiji.o"
    include "build/src/overlays/actors/ovl_En_Dnt_Jiji/ovl_En_Dnt_Jiji_reloc.o"
endseg

beginseg
    name "ovl_En_Dnt_Nomal"
    compress
    include "build/src/overlays/actors/ovl_En_Dnt_Nomal/z_en_dnt_nomal.o"
    include "build/src/overlays/actors/ovl_En_Dnt_Nomal/ovl_En_Dnt_Nomal_reloc.o"
endseg

beginseg
    name "ovl_En_Dodojr"
    compress
    include "build/src/overlays/actors/ovl_En_Dodojr/z_en_dodojr.o"
    include "build/src/overlays/actors/ovl_En_Dodojr/ovl_En_Dodojr_reloc.o"
endseg

beginseg
    name "ovl_En_Dodongo"
    compress
    include "build/src/overlays/actors/ovl_En_Dodongo/z_en_dodongo.o"
    include "build/src/overlays/actors/ovl_En_Dodongo/ovl_En_Dodongo_reloc.o"
endseg

beginseg
    name "ovl_En_Dog"
    compress
    include "build/src/overlays/actors/ovl_En_Dog/z_en_dog.o"
    include "build/src/overlays/actors/ovl_En_Dog/ovl_En_Dog_reloc.o"
endseg

beginseg
    name "ovl_En_Door"
    compress
    include "build/src/overlays/actors/ovl_En_Door/z_en_door.o"
    include "build/src/overlays/actors/ovl_En_Door/ovl_En_Door_reloc.o"
endseg

beginseg
    name "ovl_En_Ds"
    compress
    include "build/src/overlays/actors/ovl_En_Ds/z_en_ds.o"
    include "build/src/overlays/actors/ovl_En_Ds/ovl_En_Ds_reloc.o"
endseg

beginseg
    name "ovl_En_Du"
    compress
    include "build/src/overlays/actors/ovl_En_Du/z_en_du.o"
    include "build/src/overlays/actors/ovl_En_Du/ovl_En_Du_reloc.o"
endseg

beginseg
    name "ovl_En_Dy_Extra"
    compress
    include "build/src/overlays/actors/ovl_En_Dy_Extra/z_en_dy_extra.o"
    include "build/src/overlays/actors/ovl_En_Dy_Extra/ovl_En_Dy_Extra_reloc.o"
endseg

beginseg
    name "ovl_En_Eg"
    compress
    include "build/src/overlays/actors/ovl_En_Eg/z_en_eg.o"
    include "build/src/overlays/actors/ovl_En_Eg/ovl_En_Eg_reloc.o"
endseg

beginseg
    name "ovl_En_Eiyer"
    compress
    include "build/src/overlays/actors/ovl_En_Eiyer/z_en_eiyer.o"
    include "build/data/overlays/actors/z_en_eiyer.data.o"
    include "build/data/overlays/actors/z_en_eiyer.reloc.o"
endseg

beginseg
    name "ovl_En_Elf"
    compress
    include "build/src/overlays/actors/ovl_En_Elf/z_en_elf.o"
#ifdef NON_MATCHING
    include "build/src/overlays/actors/ovl_En_Elf/ovl_En_Elf_reloc.o"
#else
    include "build/data/overlays/actors/z_en_elf.reloc.o"
#endif
endseg

beginseg
    name "ovl_En_Encount1"
    compress
    include "build/src/overlays/actors/ovl_En_Encount1/z_en_encount1.o"
    include "build/src/overlays/actors/ovl_En_Encount1/ovl_En_Encount1_reloc.o"
endseg

beginseg
    name "ovl_En_Encount2"
    compress
    include "build/src/overlays/actors/ovl_En_Encount2/z_en_encount2.o"
    include "build/src/overlays/actors/ovl_En_Encount2/ovl_En_Encount2_reloc.o"
endseg

beginseg
    name "ovl_En_Ex_Item"
    compress
    include "build/src/overlays/actors/ovl_En_Ex_Item/z_en_ex_item.o"
    include "build/src/overlays/actors/ovl_En_Ex_Item/ovl_En_Ex_Item_reloc.o"
endseg

beginseg
    name "ovl_En_Ex_Ruppy"
    compress
    include "build/src/overlays/actors/ovl_En_Ex_Ruppy/z_en_ex_ruppy.o"
    include "build/src/overlays/actors/ovl_En_Ex_Ruppy/ovl_En_Ex_Ruppy_reloc.o"
endseg

beginseg
    name "ovl_En_Fd"
    compress
    include "build/src/overlays/actors/ovl_En_Fd/z_en_fd.o"
    include "build/src/overlays/actors/ovl_En_Fd/ovl_En_Fd_reloc.o"
endseg

beginseg
    name "ovl_En_Fd_Fire"
    compress
    include "build/src/overlays/actors/ovl_En_Fd_Fire/z_en_fd_fire.o"
    include "build/src/overlays/actors/ovl_En_Fd_Fire/ovl_En_Fd_Fire_reloc.o"
endseg

beginseg
    name "ovl_En_Fhg_Fire"
    compress
    include "build/src/overlays/actors/ovl_En_Fhg_Fire/z_en_fhg_fire.o"
    include "build/src/overlays/actors/ovl_En_Fhg_Fire/ovl_En_Fhg_Fire_reloc.o"
endseg

beginseg
    name "ovl_En_Fire_Rock"
    compress
    include "build/src/overlays/actors/ovl_En_Fire_Rock/z_en_fire_rock.o"
    include "build/src/overlays/actors/ovl_En_Fire_Rock/ovl_En_Fire_Rock_reloc.o"
endseg

beginseg
    name "ovl_En_Firefly"
    compress
    include "build/src/overlays/actors/ovl_En_Firefly/z_en_firefly.o"
    include "build/src/overlays/actors/ovl_En_Firefly/ovl_En_Firefly_reloc.o"
endseg

beginseg
    name "ovl_En_Fish"
    compress
    include "build/src/overlays/actors/ovl_En_Fish/z_en_fish.o"
    include "build/src/overlays/actors/ovl_En_Fish/ovl_En_Fish_reloc.o"
endseg

beginseg
    name "ovl_En_Floormas"
    compress
    include "build/src/overlays/actors/ovl_En_Floormas/z_en_floormas.o"
    include "build/src/overlays/actors/ovl_En_Floormas/ovl_En_Floormas_reloc.o"
endseg

beginseg
    name "ovl_En_Fr"
    compress
    include "build/src/overlays/actors/ovl_En_Fr/z_en_fr.o"
    include "build/src/overlays/actors/ovl_En_Fr/ovl_En_Fr_reloc.o"
endseg

beginseg
    name "ovl_En_Fu"
    compress
    include "build/src/overlays/actors/ovl_En_Fu/z_en_fu.o"
    include "build/src/overlays/actors/ovl_En_Fu/ovl_En_Fu_reloc.o"
endseg

beginseg
    name "ovl_En_Fw"
    compress
    include "build/src/overlays/actors/ovl_En_Fw/z_en_fw.o"
    include "build/src/overlays/actors/ovl_En_Fw/ovl_En_Fw_reloc.o"
endseg

beginseg
    name "ovl_En_Fz"
    compress
    include "build/src/overlays/actors/ovl_En_Fz/z_en_fz.o"
    include "build/src/overlays/actors/ovl_En_Fz/ovl_En_Fz_reloc.o"
endseg

beginseg
    name "ovl_En_G_Switch"
    compress
    include "build/src/overlays/actors/ovl_En_G_Switch/z_en_g_switch.o"
    include "build/src/overlays/actors/ovl_En_G_Switch/ovl_En_G_Switch_reloc.o"
endseg

beginseg
    name "ovl_En_Ganon_Mant"
    compress
    include "build/src/overlays/actors/ovl_En_Ganon_Mant/z_en_ganon_mant.o"
    include "build/data/overlays/actors/z_en_ganon_mant.data.o"
    include "build/data/overlays/actors/z_en_ganon_mant.reloc.o"
endseg

beginseg
    name "ovl_En_Gb"
    compress
    include "build/src/overlays/actors/ovl_En_Gb/z_en_gb.o"
    include "build/src/overlays/actors/ovl_En_Gb/ovl_En_Gb_reloc.o"
endseg

beginseg
    name "ovl_En_Ge1"
    compress
    include "build/src/overlays/actors/ovl_En_Ge1/z_en_ge1.o"
    include "build/src/overlays/actors/ovl_En_Ge1/ovl_En_Ge1_reloc.o"
endseg

beginseg
    name "ovl_En_Ge2"
    compress
    include "build/src/overlays/actors/ovl_En_Ge2/z_en_ge2.o"
    include "build/src/overlays/actors/ovl_En_Ge2/ovl_En_Ge2_reloc.o"
endseg

beginseg
    name "ovl_En_Ge3"
    compress
    include "build/src/overlays/actors/ovl_En_Ge3/z_en_ge3.o"
    include "build/src/overlays/actors/ovl_En_Ge3/ovl_En_Ge3_reloc.o"
endseg

beginseg
    name "ovl_En_GeldB"
    compress
    include "build/src/overlays/actors/ovl_En_GeldB/z_en_geldb.o"
    include "build/src/overlays/actors/ovl_En_GeldB/ovl_En_GeldB_reloc.o"
endseg

beginseg
    name "ovl_En_GirlA"
    compress
    include "build/src/overlays/actors/ovl_En_GirlA/z_en_girla.o"
    include "build/src/overlays/actors/ovl_En_GirlA/ovl_En_GirlA_reloc.o"
endseg

beginseg
    name "ovl_En_Gm"
    compress
    include "build/src/overlays/actors/ovl_En_Gm/z_en_gm.o"
    include "build/src/overlays/actors/ovl_En_Gm/ovl_En_Gm_reloc.o"
endseg

beginseg
    name "ovl_En_Go"
    compress
    include "build/src/overlays/actors/ovl_En_Go/z_en_go.o"
    include "build/src/overlays/actors/ovl_En_Go/ovl_En_Go_reloc.o"
endseg

beginseg
    name "ovl_En_Go2"
    compress
    include "build/src/overlays/actors/ovl_En_Go2/z_en_go2.o"
    include "build/src/overlays/actors/ovl_En_Go2/ovl_En_Go2_reloc.o"
endseg

beginseg
    name "ovl_En_Goma"
    compress
    include "build/src/overlays/actors/ovl_En_Goma/z_en_goma.o"
    include "build/data/overlays/actors/z_en_goma.data.o"
    include "build/data/overlays/actors/z_en_goma.reloc.o"
endseg

beginseg
    name "ovl_En_Goroiwa"
    compress
    include "build/src/overlays/actors/ovl_En_Goroiwa/z_en_goroiwa.o"
    include "build/src/overlays/actors/ovl_En_Goroiwa/ovl_En_Goroiwa_reloc.o"
endseg

beginseg
    name "ovl_En_Gs"
    compress
    include "build/src/overlays/actors/ovl_En_Gs/z_en_gs.o"
    include "build/src/overlays/actors/ovl_En_Gs/ovl_En_Gs_reloc.o"
endseg

beginseg
    name "ovl_En_Guest"
    compress
    include "build/src/overlays/actors/ovl_En_Guest/z_en_guest.o"
    include "build/src/overlays/actors/ovl_En_Guest/ovl_En_Guest_reloc.o"
endseg

beginseg
    name "ovl_En_Hata"
    compress
    include "build/src/overlays/actors/ovl_En_Hata/z_en_hata.o"
    include "build/src/overlays/actors/ovl_En_Hata/ovl_En_Hata_reloc.o"
endseg

beginseg
    name "ovl_En_Heishi1"
    compress
    include "build/src/overlays/actors/ovl_En_Heishi1/z_en_heishi1.o"
    include "build/src/overlays/actors/ovl_En_Heishi1/ovl_En_Heishi1_reloc.o"
endseg

beginseg
    name "ovl_En_Heishi2"
    compress
    include "build/src/overlays/actors/ovl_En_Heishi2/z_en_heishi2.o"
    include "build/src/overlays/actors/ovl_En_Heishi2/ovl_En_Heishi2_reloc.o"
endseg

beginseg
    name "ovl_En_Heishi3"
    compress
    include "build/src/overlays/actors/ovl_En_Heishi3/z_en_heishi3.o"
    include "build/src/overlays/actors/ovl_En_Heishi3/ovl_En_Heishi3_reloc.o"
endseg

beginseg
    name "ovl_En_Heishi4"
    compress
    include "build/src/overlays/actors/ovl_En_Heishi4/z_en_heishi4.o"
    include "build/src/overlays/actors/ovl_En_Heishi4/ovl_En_Heishi4_reloc.o"
endseg

beginseg
    name "ovl_En_Hintnuts"
    compress
    include "build/src/overlays/actors/ovl_En_Hintnuts/z_en_hintnuts.o"
    include "build/src/overlays/actors/ovl_En_Hintnuts/ovl_En_Hintnuts_reloc.o"
endseg

beginseg
    name "ovl_En_Holl"
    compress
    include "build/src/overlays/actors/ovl_En_Holl/z_en_holl.o"
#ifdef NON_MATCHING
    include "build/src/overlays/actors/ovl_En_Holl/ovl_En_Holl_reloc.o"
#else
    include "build/data/overlays/actors/z_en_holl.reloc.o"
#endif
endseg

beginseg
    name "ovl_En_Honotrap"
    compress
    include "build/src/overlays/actors/ovl_En_Honotrap/z_en_honotrap.o"
    include "build/src/overlays/actors/ovl_En_Honotrap/ovl_En_Honotrap_reloc.o"
endseg

beginseg
    name "ovl_En_Horse"
    compress
    include "build/src/overlays/actors/ovl_En_Horse/z_en_horse.o"
    include "build/src/overlays/actors/ovl_En_Horse/ovl_En_Horse_reloc.o"
endseg

beginseg
    name "ovl_En_Horse_Game_Check"
    compress
    include "build/src/overlays/actors/ovl_En_Horse_Game_Check/z_en_horse_game_check.o"
    include "build/src/overlays/actors/ovl_En_Horse_Game_Check/ovl_En_Horse_Game_Check_reloc.o"
endseg

beginseg
    name "ovl_En_Horse_Ganon"
    compress
    include "build/src/overlays/actors/ovl_En_Horse_Ganon/z_en_horse_ganon.o"
    include "build/src/overlays/actors/ovl_En_Horse_Ganon/ovl_En_Horse_Ganon_reloc.o"
endseg

beginseg
    name "ovl_En_Horse_Link_Child"
    compress
    include "build/src/overlays/actors/ovl_En_Horse_Link_Child/z_en_horse_link_child.o"
    include "build/src/overlays/actors/ovl_En_Horse_Link_Child/ovl_En_Horse_Link_Child_reloc.o"
endseg

beginseg
    name "ovl_En_Horse_Normal"
    compress
    include "build/src/overlays/actors/ovl_En_Horse_Normal/z_en_horse_normal.o"
    include "build/src/overlays/actors/ovl_En_Horse_Normal/ovl_En_Horse_Normal_reloc.o"
endseg

beginseg
    name "ovl_En_Horse_Zelda"
    compress
    include "build/src/overlays/actors/ovl_En_Horse_Zelda/z_en_horse_zelda.o"
    include "build/src/overlays/actors/ovl_En_Horse_Zelda/ovl_En_Horse_Zelda_reloc.o"
endseg

beginseg
    name "ovl_En_Hs"
    compress
    include "build/src/overlays/actors/ovl_En_Hs/z_en_hs.o"
    include "build/src/overlays/actors/ovl_En_Hs/ovl_En_Hs_reloc.o"
endseg

beginseg
    name "ovl_En_Hs2"
    compress
    include "build/src/overlays/actors/ovl_En_Hs2/z_en_hs2.o"
    include "build/src/overlays/actors/ovl_En_Hs2/ovl_En_Hs2_reloc.o"
endseg

beginseg
    name "ovl_En_Hy"
    compress
    include "build/src/overlays/actors/ovl_En_Hy/z_en_hy.o"
    include "build/src/overlays/actors/ovl_En_Hy/ovl_En_Hy_reloc.o"
endseg

beginseg
    name "ovl_En_Ice_Hono"
    compress
    include "build/src/overlays/actors/ovl_En_Ice_Hono/z_en_ice_hono.o"
    include "build/src/overlays/actors/ovl_En_Ice_Hono/ovl_En_Ice_Hono_reloc.o"
endseg

beginseg
    name "ovl_En_Ik"
    compress
    include "build/src/overlays/actors/ovl_En_Ik/z_en_ik.o"
    include "build/src/overlays/actors/ovl_En_Ik/ovl_En_Ik_reloc.o"
endseg

beginseg
    name "ovl_En_In"
    compress
    include "build/src/overlays/actors/ovl_En_In/z_en_in.o"
    include "build/src/overlays/actors/ovl_En_In/ovl_En_In_reloc.o"
endseg

beginseg
    name "ovl_En_Insect"
    compress
    include "build/src/overlays/actors/ovl_En_Insect/z_en_insect.o"
    include "build/src/overlays/actors/ovl_En_Insect/ovl_En_Insect_reloc.o"
endseg

beginseg
    name "ovl_En_Ishi"
    compress
    include "build/src/overlays/actors/ovl_En_Ishi/z_en_ishi.o"
    include "build/src/overlays/actors/ovl_En_Ishi/ovl_En_Ishi_reloc.o"
endseg

beginseg
    name "ovl_En_It"
    compress
    include "build/src/overlays/actors/ovl_En_It/z_en_it.o"
    include "build/src/overlays/actors/ovl_En_It/ovl_En_It_reloc.o"
endseg

beginseg
    name "ovl_En_Jj"
    compress
    include "build/src/overlays/actors/ovl_En_Jj/z_en_jj.o"
    include "build/src/overlays/actors/ovl_En_Jj/ovl_En_Jj_reloc.o"
endseg

beginseg
    name "ovl_En_Js"
    compress
    include "build/src/overlays/actors/ovl_En_Js/z_en_js.o"
    include "build/src/overlays/actors/ovl_En_Js/ovl_En_Js_reloc.o"
endseg

beginseg
    name "ovl_En_Jsjutan"
    compress
    include "build/src/overlays/actors/ovl_En_Jsjutan/z_en_jsjutan.o"
    include "build/src/overlays/actors/ovl_En_Jsjutan/ovl_En_Jsjutan_reloc.o"
endseg

beginseg
    name "ovl_En_Kakasi"
    compress
    include "build/src/overlays/actors/ovl_En_Kakasi/z_en_kakasi.o"
    include "build/src/overlays/actors/ovl_En_Kakasi/ovl_En_Kakasi_reloc.o"
endseg

beginseg
    name "ovl_En_Kakasi2"
    compress
    include "build/src/overlays/actors/ovl_En_Kakasi2/z_en_kakasi2.o"
    include "build/src/overlays/actors/ovl_En_Kakasi2/ovl_En_Kakasi2_reloc.o"
endseg

beginseg
    name "ovl_En_Kakasi3"
    compress
    include "build/src/overlays/actors/ovl_En_Kakasi3/z_en_kakasi3.o"
    include "build/src/overlays/actors/ovl_En_Kakasi3/ovl_En_Kakasi3_reloc.o"
endseg

beginseg
    name "ovl_En_Kanban"
    compress
    include "build/src/overlays/actors/ovl_En_Kanban/z_en_kanban.o"
    include "build/src/overlays/actors/ovl_En_Kanban/ovl_En_Kanban_reloc.o"
endseg

beginseg
    name "ovl_En_Karebaba"
    compress
    include "build/src/overlays/actors/ovl_En_Karebaba/z_en_karebaba.o"
    include "build/src/overlays/actors/ovl_En_Karebaba/ovl_En_Karebaba_reloc.o"
endseg

beginseg
    name "ovl_En_Ko"
    compress
    include "build/src/overlays/actors/ovl_En_Ko/z_en_ko.o"
    include "build/data/overlays/actors/z_en_ko.data.o"
    include "build/data/overlays/actors/z_en_ko.reloc.o"
endseg

beginseg
    name "ovl_En_Kusa"
    compress
    include "build/src/overlays/actors/ovl_En_Kusa/z_en_kusa.o"
    include "build/src/overlays/actors/ovl_En_Kusa/ovl_En_Kusa_reloc.o"
endseg

beginseg
    name "ovl_En_Kz"
    compress
    include "build/src/overlays/actors/ovl_En_Kz/z_en_kz.o"
    include "build/src/overlays/actors/ovl_En_Kz/ovl_En_Kz_reloc.o"
endseg

beginseg
    name "ovl_En_Light"
    compress
    include "build/src/overlays/actors/ovl_En_Light/z_en_light.o"
    include "build/src/overlays/actors/ovl_En_Light/ovl_En_Light_reloc.o"
endseg

beginseg
    name "ovl_En_Lightbox"
    compress
    include "build/src/overlays/actors/ovl_En_Lightbox/z_en_lightbox.o"
    include "build/src/overlays/actors/ovl_En_Lightbox/ovl_En_Lightbox_reloc.o"
endseg

beginseg
    name "ovl_En_M_Fire1"
    compress
    include "build/src/overlays/actors/ovl_En_M_Fire1/z_en_m_fire1.o"
    include "build/src/overlays/actors/ovl_En_M_Fire1/ovl_En_M_Fire1_reloc.o"
endseg

beginseg
    name "ovl_En_M_Thunder"
    compress
    include "build/src/overlays/actors/ovl_En_M_Thunder/z_en_m_thunder.o"
    include "build/src/overlays/actors/ovl_En_M_Thunder/ovl_En_M_Thunder_reloc.o"
endseg

beginseg
    name "ovl_En_Ma1"
    compress
    include "build/src/overlays/actors/ovl_En_Ma1/z_en_ma1.o"
    include "build/src/overlays/actors/ovl_En_Ma1/ovl_En_Ma1_reloc.o"
endseg

beginseg
    name "ovl_En_Ma2"
    compress
    include "build/src/overlays/actors/ovl_En_Ma2/z_en_ma2.o"
    include "build/src/overlays/actors/ovl_En_Ma2/ovl_En_Ma2_reloc.o"
endseg

beginseg
    name "ovl_En_Ma3"
    compress
    include "build/src/overlays/actors/ovl_En_Ma3/z_en_ma3.o"
    include "build/src/overlays/actors/ovl_En_Ma3/ovl_En_Ma3_reloc.o"
endseg

beginseg
    name "ovl_En_Mag"
    compress
    include "build/src/overlays/actors/ovl_En_Mag/z_en_mag.o"
    include "build/src/overlays/actors/ovl_En_Mag/ovl_En_Mag_reloc.o"
endseg

beginseg
    name "ovl_En_Mb"
    compress
    include "build/src/overlays/actors/ovl_En_Mb/z_en_mb.o"
    include "build/src/overlays/actors/ovl_En_Mb/ovl_En_Mb_reloc.o"
endseg

beginseg
    name "ovl_En_Md"
    compress
    include "build/src/overlays/actors/ovl_En_Md/z_en_md.o"
    include "build/src/overlays/actors/ovl_En_Md/ovl_En_Md_reloc.o"
endseg

beginseg
    name "ovl_En_Mk"
    compress
    include "build/src/overlays/actors/ovl_En_Mk/z_en_mk.o"
    include "build/src/overlays/actors/ovl_En_Mk/ovl_En_Mk_reloc.o"
endseg

beginseg
    name "ovl_En_Mm"
    compress
    include "build/src/overlays/actors/ovl_En_Mm/z_en_mm.o"
    include "build/src/overlays/actors/ovl_En_Mm/ovl_En_Mm_reloc.o"
endseg

beginseg
    name "ovl_En_Mm2"
    compress
    include "build/src/overlays/actors/ovl_En_Mm2/z_en_mm2.o"
    include "build/src/overlays/actors/ovl_En_Mm2/ovl_En_Mm2_reloc.o"
endseg

beginseg
    name "ovl_En_Ms"
    compress
    include "build/src/overlays/actors/ovl_En_Ms/z_en_ms.o"
    include "build/src/overlays/actors/ovl_En_Ms/ovl_En_Ms_reloc.o"
endseg

beginseg
    name "ovl_En_Mu"
    compress
    include "build/src/overlays/actors/ovl_En_Mu/z_en_mu.o"
    include "build/src/overlays/actors/ovl_En_Mu/ovl_En_Mu_reloc.o"
endseg

beginseg
    name "ovl_En_Nb"
    compress
    include "build/src/overlays/actors/ovl_En_Nb/z_en_nb.o"
    include "build/src/overlays/actors/ovl_En_Nb/ovl_En_Nb_reloc.o"
endseg

beginseg
    name "ovl_En_Niw"
    compress
    include "build/src/overlays/actors/ovl_En_Niw/z_en_niw.o"
    include "build/src/overlays/actors/ovl_En_Niw/ovl_En_Niw_reloc.o"
endseg

beginseg
    name "ovl_En_Niw_Girl"
    compress
    include "build/src/overlays/actors/ovl_En_Niw_Girl/z_en_niw_girl.o"
    include "build/src/overlays/actors/ovl_En_Niw_Girl/ovl_En_Niw_Girl_reloc.o"
endseg

beginseg
    name "ovl_En_Niw_Lady"
    compress
    include "build/src/overlays/actors/ovl_En_Niw_Lady/z_en_niw_lady.o"
    include "build/src/overlays/actors/ovl_En_Niw_Lady/ovl_En_Niw_Lady_reloc.o"
endseg

beginseg
    name "ovl_En_Nutsball"
    compress
    include "build/src/overlays/actors/ovl_En_Nutsball/z_en_nutsball.o"
    include "build/src/overlays/actors/ovl_En_Nutsball/ovl_En_Nutsball_reloc.o"
endseg

beginseg
    name "ovl_En_Nwc"
    compress
    include "build/src/overlays/actors/ovl_En_Nwc/z_en_nwc.o"
    include "build/src/overlays/actors/ovl_En_Nwc/ovl_En_Nwc_reloc.o"
endseg

beginseg
    name "ovl_En_Ny"
    compress
    include "build/src/overlays/actors/ovl_En_Ny/z_en_ny.o"
    include "build/src/overlays/actors/ovl_En_Ny/ovl_En_Ny_reloc.o"
endseg

beginseg
    name "ovl_En_OE2"
    compress
    include "build/src/overlays/actors/ovl_En_OE2/z_en_oe2.o"
    include "build/src/overlays/actors/ovl_En_OE2/ovl_En_OE2_reloc.o"
endseg

beginseg
    name "ovl_En_Okarina_Effect"
    compress
    include "build/src/overlays/actors/ovl_En_Okarina_Effect/z_en_okarina_effect.o"
    include "build/src/overlays/actors/ovl_En_Okarina_Effect/ovl_En_Okarina_Effect_reloc.o"
endseg

beginseg
    name "ovl_En_Okarina_Tag"
    compress
    include "build/src/overlays/actors/ovl_En_Okarina_Tag/z_en_okarina_tag_cutscene_data.o"
    include "build/src/overlays/actors/ovl_En_Okarina_Tag/z_en_okarina_tag.o"
    include "build/src/overlays/actors/ovl_En_Okarina_Tag/ovl_En_Okarina_Tag_reloc.o"
endseg

beginseg
    name "ovl_En_Okuta"
    compress
    include "build/src/overlays/actors/ovl_En_Okuta/z_en_okuta.o"
    include "build/src/overlays/actors/ovl_En_Okuta/ovl_En_Okuta_reloc.o"
endseg

beginseg
    name "ovl_En_Ossan"
    compress
    include "build/src/overlays/actors/ovl_En_Ossan/z_en_ossan.o"
    include "build/data/overlays/actors/z_en_ossan.data.o"
    include "build/data/overlays/actors/z_en_ossan.reloc.o"
endseg

beginseg
    name "ovl_En_Owl"
    compress
    include "build/src/overlays/actors/ovl_En_Owl/z_en_owl.o"
    include "build/src/overlays/actors/ovl_En_Owl/ovl_En_Owl_reloc.o"
endseg

beginseg
    name "ovl_En_Part"
    compress
    include "build/src/overlays/actors/ovl_En_Part/z_en_part.o"
    include "build/src/overlays/actors/ovl_En_Part/ovl_En_Part_reloc.o"
endseg

beginseg
    name "ovl_En_Peehat"
    compress
    include "build/src/overlays/actors/ovl_En_Peehat/z_en_peehat.o"
    include "build/src/overlays/actors/ovl_En_Peehat/ovl_En_Peehat_reloc.o"
endseg

beginseg
    name "ovl_En_Po_Desert"
    compress
    include "build/src/overlays/actors/ovl_En_Po_Desert/z_en_po_desert.o"
    include "build/src/overlays/actors/ovl_En_Po_Desert/ovl_En_Po_Desert_reloc.o"
endseg

beginseg
    name "ovl_En_Po_Field"
    compress
    include "build/src/overlays/actors/ovl_En_Po_Field/z_en_po_field.o"
    include "build/src/overlays/actors/ovl_En_Po_Field/ovl_En_Po_Field_reloc.o"
endseg

beginseg
    name "ovl_En_Po_Relay"
    compress
    include "build/src/overlays/actors/ovl_En_Po_Relay/z_en_po_relay.o"
    include "build/src/overlays/actors/ovl_En_Po_Relay/ovl_En_Po_Relay_reloc.o"
endseg

beginseg
    name "ovl_En_Po_Sisters"
    compress
    include "build/src/overlays/actors/ovl_En_Po_Sisters/z_en_po_sisters.o"
    include "build/src/overlays/actors/ovl_En_Po_Sisters/ovl_En_Po_Sisters_reloc.o"
endseg

beginseg
    name "ovl_En_Poh"
    compress
    include "build/src/overlays/actors/ovl_En_Poh/z_en_poh.o"
    include "build/src/overlays/actors/ovl_En_Poh/ovl_En_Poh_reloc.o"
endseg

beginseg
    name "ovl_En_Pu_box"
    compress
    include "build/src/overlays/actors/ovl_En_Pu_box/z_en_pu_box.o"
    include "build/src/overlays/actors/ovl_En_Pu_box/ovl_En_Pu_box_reloc.o"
endseg

beginseg
    name "ovl_En_Rd"
    compress
    include "build/src/overlays/actors/ovl_En_Rd/z_en_rd.o"
    include "build/src/overlays/actors/ovl_En_Rd/ovl_En_Rd_reloc.o"
endseg

beginseg
    name "ovl_En_Reeba"
    compress
    include "build/src/overlays/actors/ovl_En_Reeba/z_en_reeba.o"
    include "build/src/overlays/actors/ovl_En_Reeba/ovl_En_Reeba_reloc.o"
endseg

beginseg
    name "ovl_En_River_Sound"
    compress
    include "build/src/overlays/actors/ovl_En_River_Sound/z_en_river_sound.o"
    include "build/data/overlays/actors/z_en_river_sound.data.o"
    include "build/data/overlays/actors/z_en_river_sound.reloc.o"
endseg

beginseg
    name "ovl_En_Rl"
    compress
    include "build/src/overlays/actors/ovl_En_Rl/z_en_rl.o"
    include "build/src/overlays/actors/ovl_En_Rl/ovl_En_Rl_reloc.o"
endseg

beginseg
    name "ovl_En_Rr"
    compress
    include "build/src/overlays/actors/ovl_En_Rr/z_en_rr.o"
    include "build/src/overlays/actors/ovl_En_Rr/ovl_En_Rr_reloc.o"
endseg

beginseg
    name "ovl_En_Ru1"
    compress
    include "build/src/overlays/actors/ovl_En_Ru1/z_en_ru1.o"
    include "build/src/overlays/actors/ovl_En_Ru1/ovl_En_Ru1_reloc.o"
endseg

beginseg
    name "ovl_En_Ru2"
    compress
    include "build/src/overlays/actors/ovl_En_Ru2/z_en_ru2.o"
    include "build/src/overlays/actors/ovl_En_Ru2/ovl_En_Ru2_reloc.o"
endseg

beginseg
    name "ovl_En_Sa"
    compress
    include "build/src/overlays/actors/ovl_En_Sa/z_en_sa.o"
    include "build/src/overlays/actors/ovl_En_Sa/ovl_En_Sa_reloc.o"
endseg

beginseg
    name "ovl_En_Sb"
    compress
    include "build/src/overlays/actors/ovl_En_Sb/z_en_sb.o"
    include "build/src/overlays/actors/ovl_En_Sb/ovl_En_Sb_reloc.o"
endseg

beginseg
    name "ovl_En_Scene_Change"
    compress
    include "build/src/overlays/actors/ovl_En_Scene_Change/z_en_scene_change.o"
    include "build/src/overlays/actors/ovl_En_Scene_Change/ovl_En_Scene_Change_reloc.o"
endseg

beginseg
    name "ovl_En_Sda"
    compress
    include "build/src/overlays/actors/ovl_En_Sda/z_en_sda.o"
    include "build/src/overlays/actors/ovl_En_Sda/ovl_En_Sda_reloc.o"
endseg

beginseg
    name "ovl_En_Shopnuts"
    compress
    include "build/src/overlays/actors/ovl_En_Shopnuts/z_en_shopnuts.o"
    include "build/src/overlays/actors/ovl_En_Shopnuts/ovl_En_Shopnuts_reloc.o"
endseg

beginseg
    name "ovl_En_Si"
    compress
    include "build/src/overlays/actors/ovl_En_Si/z_en_si.o"
    include "build/src/overlays/actors/ovl_En_Si/ovl_En_Si_reloc.o"
endseg

beginseg
    name "ovl_En_Siofuki"
    compress
    include "build/src/overlays/actors/ovl_En_Siofuki/z_en_siofuki.o"
    include "build/src/overlays/actors/ovl_En_Siofuki/ovl_En_Siofuki_reloc.o"
endseg

beginseg
    name "ovl_En_Skb"
    compress
    include "build/src/overlays/actors/ovl_En_Skb/z_en_skb.o"
#ifdef NON_MATCHING
    include "build/src/overlays/actors/ovl_En_Skb/ovl_En_Skb_reloc.o"
#else
    include "build/data/overlays/actors/z_en_skb.reloc.o"
#endif
endseg

beginseg
    name "ovl_En_Skj"
    compress
    include "build/src/overlays/actors/ovl_En_Skj/z_en_skj.o"
#ifdef NON_MATCHING
    include "build/src/overlays/actors/ovl_En_Skj/ovl_En_Skj_reloc.o"
#else
    include "build/data/overlays/actors/z_en_skj.reloc.o"
#endif
endseg

beginseg
    name "ovl_En_Skjneedle"
    compress
    include "build/src/overlays/actors/ovl_En_Skjneedle/z_en_skjneedle.o"
    include "build/src/overlays/actors/ovl_En_Skjneedle/ovl_En_Skjneedle_reloc.o"
endseg

beginseg
    name "ovl_En_Slim"
    compress
    include "build/src/overlays/actors/ovl_En_Slim/z_en_slim.o"
    include "build/src/overlays/actors/ovl_En_Slim/ovl_En_Slim_reloc.o"
endseg

beginseg
    name "ovl_En_Ssh"
    compress
    include "build/src/overlays/actors/ovl_En_Ssh/z_en_ssh.o"
    include "build/src/overlays/actors/ovl_En_Ssh/ovl_En_Ssh_reloc.o"
endseg

beginseg
    name "ovl_En_St"
    compress
    include "build/src/overlays/actors/ovl_En_St/z_en_st.o"
    include "build/src/overlays/actors/ovl_En_St/ovl_En_St_reloc.o"
endseg

beginseg
    name "ovl_En_Sth"
    compress
    include "build/src/overlays/actors/ovl_En_Sth/z_en_sth.o"
    include "build/src/overlays/actors/ovl_En_Sth/ovl_En_Sth_reloc.o"
endseg

beginseg
    name "ovl_En_Stream"
    compress
    include "build/src/overlays/actors/ovl_En_Stream/z_en_stream.o"
    include "build/src/overlays/actors/ovl_En_Stream/ovl_En_Stream_reloc.o"
endseg

beginseg
    name "ovl_En_Sw"
    compress
    include "build/src/overlays/actors/ovl_En_Sw/z_en_sw.o"
    include "build/src/overlays/actors/ovl_En_Sw/ovl_En_Sw_reloc.o"
endseg

beginseg
    name "ovl_En_Syateki_Itm"
    compress
    include "build/src/overlays/actors/ovl_En_Syateki_Itm/z_en_syateki_itm.o"
    include "build/src/overlays/actors/ovl_En_Syateki_Itm/ovl_En_Syateki_Itm_reloc.o"
endseg

beginseg
    name "ovl_En_Syateki_Man"
    compress
    include "build/src/overlays/actors/ovl_En_Syateki_Man/z_en_syateki_man.o"
    include "build/src/overlays/actors/ovl_En_Syateki_Man/ovl_En_Syateki_Man_reloc.o"
endseg

beginseg
    name "ovl_En_Syateki_Niw"
    compress
    include "build/src/overlays/actors/ovl_En_Syateki_Niw/z_en_syateki_niw.o"
    include "build/src/overlays/actors/ovl_En_Syateki_Niw/ovl_En_Syateki_Niw_reloc.o"
endseg

beginseg
    name "ovl_En_Ta"
    compress
    include "build/src/overlays/actors/ovl_En_Ta/z_en_ta.o"
    include "build/src/overlays/actors/ovl_En_Ta/ovl_En_Ta_reloc.o"
endseg

beginseg
    name "ovl_En_Takara_Man"
    compress
    include "build/src/overlays/actors/ovl_En_Takara_Man/z_en_takara_man.o"
    include "build/src/overlays/actors/ovl_En_Takara_Man/ovl_En_Takara_Man_reloc.o"
endseg

beginseg
    name "ovl_En_Tana"
    compress
    include "build/src/overlays/actors/ovl_En_Tana/z_en_tana.o"
    include "build/src/overlays/actors/ovl_En_Tana/ovl_En_Tana_reloc.o"
endseg

beginseg
    name "ovl_En_Tg"
    compress
    include "build/src/overlays/actors/ovl_En_Tg/z_en_tg.o"
    include "build/data/overlays/actors/z_en_tg.data.o"
    include "build/data/overlays/actors/z_en_tg.reloc.o"
endseg

beginseg
    name "ovl_En_Tite"
    compress
    include "build/src/overlays/actors/ovl_En_Tite/z_en_tite.o"
    include "build/src/overlays/actors/ovl_En_Tite/ovl_En_Tite_reloc.o"
endseg

beginseg
    name "ovl_En_Tk"
    compress
    include "build/src/overlays/actors/ovl_En_Tk/z_en_tk.o"
    include "build/src/overlays/actors/ovl_En_Tk/ovl_En_Tk_reloc.o"
endseg

beginseg
    name "ovl_En_Torch"
    compress
    include "build/src/overlays/actors/ovl_En_Torch/z_en_torch.o"
    include "build/src/overlays/actors/ovl_En_Torch/ovl_En_Torch_reloc.o"
endseg

beginseg
    name "ovl_En_Torch2"
    compress
    include "build/src/overlays/actors/ovl_En_Torch2/z_en_torch2.o"
#ifdef NON_MATCHING
    include "build/src/overlays/actors/ovl_En_Torch2/ovl_En_Torch2_reloc.o"
#else
    include "build/data/overlays/actors/z_en_torch2.reloc.o"
#endif
endseg

beginseg
    name "ovl_En_Toryo"
    compress
    include "build/src/overlays/actors/ovl_En_Toryo/z_en_toryo.o"
    include "build/src/overlays/actors/ovl_En_Toryo/ovl_En_Toryo_reloc.o"
endseg

beginseg
    name "ovl_En_Tp"
    compress
    include "build/src/overlays/actors/ovl_En_Tp/z_en_tp.o"
    include "build/src/overlays/actors/ovl_En_Tp/ovl_En_Tp_reloc.o"
endseg

beginseg
    name "ovl_En_Tr"
    compress
    include "build/src/overlays/actors/ovl_En_Tr/z_en_tr.o"
    include "build/src/overlays/actors/ovl_En_Tr/ovl_En_Tr_reloc.o"
endseg

beginseg
    name "ovl_En_Trap"
    compress
    include "build/src/overlays/actors/ovl_En_Trap/z_en_trap.o"
    include "build/src/overlays/actors/ovl_En_Trap/ovl_En_Trap_reloc.o"
endseg

beginseg
    name "ovl_En_Tubo_Trap"
    compress
    include "build/src/overlays/actors/ovl_En_Tubo_Trap/z_en_tubo_trap.o"
    include "build/src/overlays/actors/ovl_En_Tubo_Trap/ovl_En_Tubo_Trap_reloc.o"
endseg

beginseg
    name "ovl_En_Vali"
    compress
    include "build/src/overlays/actors/ovl_En_Vali/z_en_vali.o"
    include "build/data/overlays/actors/z_en_vali.data.o"
    include "build/data/overlays/actors/z_en_vali.reloc.o"
endseg

beginseg
    name "ovl_En_Vase"
    compress
    include "build/src/overlays/actors/ovl_En_Vase/z_en_vase.o"
    include "build/src/overlays/actors/ovl_En_Vase/ovl_En_Vase_reloc.o"
endseg

beginseg
    name "ovl_En_Vb_Ball"
    compress
    include "build/src/overlays/actors/ovl_En_Vb_Ball/z_en_vb_ball.o"
    include "build/data/overlays/actors/z_en_vb_ball.data.o"
    include "build/data/overlays/actors/z_en_vb_ball.reloc.o"
endseg

beginseg
    name "ovl_En_Viewer"
    compress
    include "build/src/overlays/actors/ovl_En_Viewer/z_en_viewer.o"
    include "build/src/overlays/actors/ovl_En_Viewer/ovl_En_Viewer_reloc.o"
endseg

beginseg
    name "ovl_En_Vm"
    compress
    include "build/src/overlays/actors/ovl_En_Vm/z_en_vm.o"
    include "build/src/overlays/actors/ovl_En_Vm/ovl_En_Vm_reloc.o"
endseg

beginseg
    name "ovl_En_Wall_Tubo"
    compress
    include "build/src/overlays/actors/ovl_En_Wall_Tubo/z_en_wall_tubo.o"
    include "build/src/overlays/actors/ovl_En_Wall_Tubo/ovl_En_Wall_Tubo_reloc.o"
endseg

beginseg
    name "ovl_En_Wallmas"
    compress
    include "build/src/overlays/actors/ovl_En_Wallmas/z_en_wallmas.o"
    include "build/src/overlays/actors/ovl_En_Wallmas/ovl_En_Wallmas_reloc.o"
endseg

beginseg
    name "ovl_En_Weather_Tag"
    compress
    include "build/src/overlays/actors/ovl_En_Weather_Tag/z_en_weather_tag.o"
    include "build/src/overlays/actors/ovl_En_Weather_Tag/ovl_En_Weather_Tag_reloc.o"
endseg

beginseg
    name "ovl_En_Weiyer"
    compress
    include "build/src/overlays/actors/ovl_En_Weiyer/z_en_weiyer.o"
    include "build/src/overlays/actors/ovl_En_Weiyer/ovl_En_Weiyer_reloc.o"
endseg

beginseg
    name "ovl_En_Wf"
    compress
    include "build/src/overlays/actors/ovl_En_Wf/z_en_wf.o"
    include "build/data/overlays/actors/z_en_wf.data.o"
    include "build/data/overlays/actors/z_en_wf.reloc.o"
endseg

beginseg
    name "ovl_En_Wonder_Item"
    compress
    include "build/src/overlays/actors/ovl_En_Wonder_Item/z_en_wonder_item.o"
    include "build/src/overlays/actors/ovl_En_Wonder_Item/ovl_En_Wonder_Item_reloc.o"
endseg

beginseg
    name "ovl_En_Wonder_Talk"
    compress
    include "build/src/overlays/actors/ovl_En_Wonder_Talk/z_en_wonder_talk.o"
    include "build/src/overlays/actors/ovl_En_Wonder_Talk/ovl_En_Wonder_Talk_reloc.o"
endseg

beginseg
    name "ovl_En_Wonder_Talk2"
    compress
    include "build/src/overlays/actors/ovl_En_Wonder_Talk2/z_en_wonder_talk2.o"
    include "build/src/overlays/actors/ovl_En_Wonder_Talk2/ovl_En_Wonder_Talk2_reloc.o"
endseg

beginseg
    name "ovl_En_Wood02"
    compress
    include "build/src/overlays/actors/ovl_En_Wood02/z_en_wood02.o"
    include "build/src/overlays/actors/ovl_En_Wood02/ovl_En_Wood02_reloc.o"
endseg

beginseg
    name "ovl_En_Xc"
    compress
    include "build/src/overlays/actors/ovl_En_Xc/z_en_xc.o"
    include "build/data/overlays/actors/z_en_xc.data.o"
    include "build/data/overlays/actors/z_en_xc.bss.o"
    include "build/data/overlays/actors/z_en_xc.reloc.o"
endseg

beginseg
    name "ovl_En_Yabusame_Mark"
    compress
    include "build/src/overlays/actors/ovl_En_Yabusame_Mark/z_en_yabusame_mark.o"
#ifdef NON_MATCHING
    include "build/src/overlays/actors/ovl_En_Yabusame_Mark/ovl_En_Yabusame_Mark_reloc.o"
#else
    include "build/data/overlays/actors/z_en_yabusame_mark.reloc.o"
#endif
endseg

beginseg
    name "ovl_En_Yukabyun"
    compress
    include "build/src/overlays/actors/ovl_En_Yukabyun/z_en_yukabyun.o"
    include "build/src/overlays/actors/ovl_En_Yukabyun/ovl_En_Yukabyun_reloc.o"
endseg

beginseg
    name "ovl_En_Zf"
    compress
    include "build/src/overlays/actors/ovl_En_Zf/z_en_zf.o"
    include "build/src/overlays/actors/ovl_En_Zf/ovl_En_Zf_reloc.o"
endseg

beginseg
    name "ovl_En_Zl1"
    compress
    include "build/src/overlays/actors/ovl_En_Zl1/z_en_zl1.o"
    include "build/src/overlays/actors/ovl_En_Zl1/ovl_En_Zl1_reloc.o"
endseg

beginseg
    name "ovl_En_Zl2"
    compress
    include "build/src/overlays/actors/ovl_En_Zl2/z_en_zl2.o"
    include "build/src/overlays/actors/ovl_En_Zl2/ovl_En_Zl2_reloc.o"
endseg

beginseg
    name "ovl_En_Zl4"
    compress
    include "build/src/overlays/actors/ovl_En_Zl4/z_en_zl4.o"
    include "build/src/overlays/actors/ovl_En_Zl4/ovl_En_Zl4_reloc.o"
endseg

beginseg
    name "ovl_En_Zo"
    compress
    include "build/src/overlays/actors/ovl_En_Zo/z_en_zo.o"
    include "build/src/overlays/actors/ovl_En_Zo/ovl_En_Zo_reloc.o"
endseg

beginseg
    name "ovl_En_fHG"
    compress
    include "build/src/overlays/actors/ovl_En_fHG/z_en_fhg.o"
    include "build/src/overlays/actors/ovl_En_fHG/ovl_En_fHG_reloc.o"
endseg

beginseg
    name "ovl_End_Title"
    compress
    include "build/src/overlays/actors/ovl_End_Title/z_end_title.o"
    include "build/src/overlays/actors/ovl_End_Title/ovl_End_Title_reloc.o"
endseg

beginseg
    name "ovl_Item_B_Heart"
    compress
    include "build/src/overlays/actors/ovl_Item_B_Heart/z_item_b_heart.o"
    include "build/src/overlays/actors/ovl_Item_B_Heart/ovl_Item_B_Heart_reloc.o"
endseg

beginseg
    name "ovl_Item_Etcetera"
    compress
    include "build/src/overlays/actors/ovl_Item_Etcetera/z_item_etcetera.o"
    include "build/src/overlays/actors/ovl_Item_Etcetera/ovl_Item_Etcetera_reloc.o"
endseg

beginseg
    name "ovl_Item_Inbox"
    compress
    include "build/src/overlays/actors/ovl_Item_Inbox/z_item_inbox.o"
    include "build/src/overlays/actors/ovl_Item_Inbox/ovl_Item_Inbox_reloc.o"
endseg

beginseg
    name "ovl_Item_Ocarina"
    compress
    include "build/src/overlays/actors/ovl_Item_Ocarina/z_item_ocarina.o"
    include "build/src/overlays/actors/ovl_Item_Ocarina/ovl_Item_Ocarina_reloc.o"
endseg

beginseg
    name "ovl_Item_Shield"
    compress
    include "build/src/overlays/actors/ovl_Item_Shield/z_item_shield.o"
    include "build/src/overlays/actors/ovl_Item_Shield/ovl_Item_Shield_reloc.o"
endseg

beginseg
    name "ovl_Magic_Dark"
    compress
    include "build/src/overlays/actors/ovl_Magic_Dark/z_magic_dark.o"
    include "build/src/overlays/actors/ovl_Magic_Dark/ovl_Magic_Dark_reloc.o"
endseg

beginseg
    name "ovl_Magic_Fire"
    compress
    include "build/src/overlays/actors/ovl_Magic_Fire/z_magic_fire.o"
    include "build/src/overlays/actors/ovl_Magic_Fire/ovl_Magic_Fire_reloc.o"
endseg

beginseg
    name "ovl_Magic_Ice"
    compress
    include "build/src/overlays/actors/ovl_Magic_Ice/z_magic_ice.o"
    include "build/src/overlays/actors/ovl_Magic_Ice/ovl_Magic_Ice_reloc.o"
endseg

beginseg
    name "ovl_Magic_Light"
    compress
    include "build/src/overlays/actors/ovl_Magic_Light/z_magic_light.o"
    include "build/src/overlays/actors/ovl_Magic_Light/ovl_Magic_Light_reloc.o"
endseg

beginseg
    name "ovl_Magic_Soul"
    compress
    include "build/src/overlays/actors/ovl_Magic_Soul/z_magic_soul.o"
    include "build/src/overlays/actors/ovl_Magic_Soul/ovl_Magic_Soul_reloc.o"
endseg

beginseg
    name "ovl_Magic_Wind"
    compress
    include "build/src/overlays/actors/ovl_Magic_Wind/z_magic_wind.o"
    include "build/src/overlays/actors/ovl_Magic_Wind/ovl_Magic_Wind_reloc.o"
endseg

beginseg
    name "ovl_Mir_Ray"
    compress
    include "build/src/overlays/actors/ovl_Mir_Ray/z_mir_ray.o"
    include "build/src/overlays/actors/ovl_Mir_Ray/ovl_Mir_Ray_reloc.o"
endseg

beginseg
    name "ovl_Obj_Bean"
    compress
    include "build/src/overlays/actors/ovl_Obj_Bean/z_obj_bean.o"
    include "build/data/overlays/actors/z_obj_bean.data.o"
    include "build/data/overlays/actors/z_obj_bean.reloc.o"
endseg

beginseg
    name "ovl_Obj_Blockstop"
    compress
    include "build/src/overlays/actors/ovl_Obj_Blockstop/z_obj_blockstop.o"
    include "build/src/overlays/actors/ovl_Obj_Blockstop/ovl_Obj_Blockstop_reloc.o"
endseg

beginseg
    name "ovl_Obj_Bombiwa"
    compress
    include "build/src/overlays/actors/ovl_Obj_Bombiwa/z_obj_bombiwa.o"
    include "build/src/overlays/actors/ovl_Obj_Bombiwa/ovl_Obj_Bombiwa_reloc.o"
endseg

beginseg
    name "ovl_Obj_Comb"
    compress
    include "build/src/overlays/actors/ovl_Obj_Comb/z_obj_comb.o"
    include "build/src/overlays/actors/ovl_Obj_Comb/ovl_Obj_Comb_reloc.o"
endseg

beginseg
    name "ovl_Obj_Dekujr"
    compress
    include "build/src/overlays/actors/ovl_Obj_Dekujr/z_obj_dekujr.o"
    include "build/src/overlays/actors/ovl_Obj_Dekujr/ovl_Obj_Dekujr_reloc.o"
endseg

beginseg
    name "ovl_Obj_Elevator"
    compress
    include "build/src/overlays/actors/ovl_Obj_Elevator/z_obj_elevator.o"
    include "build/src/overlays/actors/ovl_Obj_Elevator/ovl_Obj_Elevator_reloc.o"
endseg

beginseg
    name "ovl_Obj_Hamishi"
    compress
    include "build/src/overlays/actors/ovl_Obj_Hamishi/z_obj_hamishi.o"
    include "build/src/overlays/actors/ovl_Obj_Hamishi/ovl_Obj_Hamishi_reloc.o"
endseg

beginseg
    name "ovl_Obj_Hana"
    compress
    include "build/src/overlays/actors/ovl_Obj_Hana/z_obj_hana.o"
    include "build/src/overlays/actors/ovl_Obj_Hana/ovl_Obj_Hana_reloc.o"
endseg

beginseg
    name "ovl_Obj_Hsblock"
    compress
    include "build/src/overlays/actors/ovl_Obj_Hsblock/z_obj_hsblock.o"
    include "build/src/overlays/actors/ovl_Obj_Hsblock/ovl_Obj_Hsblock_reloc.o"
endseg

beginseg
    name "ovl_Obj_Ice_Poly"
    compress
    include "build/src/overlays/actors/ovl_Obj_Ice_Poly/z_obj_ice_poly.o"
    include "build/src/overlays/actors/ovl_Obj_Ice_Poly/ovl_Obj_Ice_Poly_reloc.o"
endseg

beginseg
    name "ovl_Obj_Kibako"
    compress
    include "build/src/overlays/actors/ovl_Obj_Kibako/z_obj_kibako.o"
    include "build/src/overlays/actors/ovl_Obj_Kibako/ovl_Obj_Kibako_reloc.o"
endseg

beginseg
    name "ovl_Obj_Kibako2"
    compress
    include "build/src/overlays/actors/ovl_Obj_Kibako2/z_obj_kibako2.o"
    include "build/src/overlays/actors/ovl_Obj_Kibako2/ovl_Obj_Kibako2_reloc.o"
endseg

beginseg
    name "ovl_Obj_Lift"
    compress
    include "build/src/overlays/actors/ovl_Obj_Lift/z_obj_lift.o"
    include "build/data/overlays/actors/z_obj_lift.data.o"
    include "build/data/overlays/actors/z_obj_lift.reloc.o"
endseg

beginseg
    name "ovl_Obj_Lightswitch"
    compress
    include "build/src/overlays/actors/ovl_Obj_Lightswitch/z_obj_lightswitch.o"
    include "build/src/overlays/actors/ovl_Obj_Lightswitch/ovl_Obj_Lightswitch_reloc.o"
endseg

beginseg
    name "ovl_Obj_Makekinsuta"
    compress
    include "build/src/overlays/actors/ovl_Obj_Makekinsuta/z_obj_makekinsuta.o"
    include "build/src/overlays/actors/ovl_Obj_Makekinsuta/ovl_Obj_Makekinsuta_reloc.o"
endseg

beginseg
    name "ovl_Obj_Makeoshihiki"
    compress
    include "build/src/overlays/actors/ovl_Obj_Makeoshihiki/z_obj_makeoshihiki.o"
    include "build/src/overlays/actors/ovl_Obj_Makeoshihiki/ovl_Obj_Makeoshihiki_reloc.o"
endseg

beginseg
    name "ovl_Obj_Mure"
    compress
    include "build/src/overlays/actors/ovl_Obj_Mure/z_obj_mure.o"
    include "build/data/overlays/actors/z_obj_mure.data.o"
    include "build/data/overlays/actors/z_obj_mure.reloc.o"
endseg

beginseg
    name "ovl_Obj_Mure2"
    compress
    include "build/src/overlays/actors/ovl_Obj_Mure2/z_obj_mure2.o"
    include "build/src/overlays/actors/ovl_Obj_Mure2/ovl_Obj_Mure2_reloc.o"
endseg

beginseg
    name "ovl_Obj_Mure3"
    compress
    include "build/src/overlays/actors/ovl_Obj_Mure3/z_obj_mure3.o"
    include "build/src/overlays/actors/ovl_Obj_Mure3/ovl_Obj_Mure3_reloc.o"
endseg

beginseg
    name "ovl_Obj_Oshihiki"
    compress
    include "build/src/overlays/actors/ovl_Obj_Oshihiki/z_obj_oshihiki.o"
    include "build/src/overlays/actors/ovl_Obj_Oshihiki/ovl_Obj_Oshihiki_reloc.o"
endseg

beginseg
    name "ovl_Obj_Roomtimer"
    compress
    include "build/src/overlays/actors/ovl_Obj_Roomtimer/z_obj_roomtimer.o"
    include "build/src/overlays/actors/ovl_Obj_Roomtimer/ovl_Obj_Roomtimer_reloc.o"
endseg

beginseg
    name "ovl_Obj_Switch"
    compress
    include "build/src/overlays/actors/ovl_Obj_Switch/z_obj_switch.o"
    include "build/src/overlays/actors/ovl_Obj_Switch/ovl_Obj_Switch_reloc.o"
endseg

beginseg
    name "ovl_Obj_Syokudai"
    compress
    include "build/src/overlays/actors/ovl_Obj_Syokudai/z_obj_syokudai.o"
    include "build/src/overlays/actors/ovl_Obj_Syokudai/ovl_Obj_Syokudai_reloc.o"
endseg

beginseg
    name "ovl_Obj_Timeblock"
    compress
    include "build/src/overlays/actors/ovl_Obj_Timeblock/z_obj_timeblock.o"
    include "build/src/overlays/actors/ovl_Obj_Timeblock/ovl_Obj_Timeblock_reloc.o"
endseg

beginseg
    name "ovl_Obj_Tsubo"
    compress
    include "build/src/overlays/actors/ovl_Obj_Tsubo/z_obj_tsubo.o"
    include "build/src/overlays/actors/ovl_Obj_Tsubo/ovl_Obj_Tsubo_reloc.o"
endseg

beginseg
    name "ovl_Obj_Warp2block"
    compress
    include "build/src/overlays/actors/ovl_Obj_Warp2block/z_obj_warp2block.o"
    include "build/src/overlays/actors/ovl_Obj_Warp2block/ovl_Obj_Warp2block_reloc.o"
endseg

beginseg
    name "ovl_Object_Kankyo"
    compress
    include "build/src/overlays/actors/ovl_Object_Kankyo/z_object_kankyo.o"
    include "build/data/overlays/actors/z_object_kankyo.data.o"
    include "build/data/overlays/actors/z_object_kankyo.reloc.o"
endseg

beginseg
    name "ovl_Oceff_Spot"
    compress
    include "build/src/overlays/actors/ovl_Oceff_Spot/z_oceff_spot.o"
    include "build/src/overlays/actors/ovl_Oceff_Spot/ovl_Oceff_Spot_reloc.o"
endseg

beginseg
    name "ovl_Oceff_Storm"
    compress
    include "build/src/overlays/actors/ovl_Oceff_Storm/z_oceff_storm.o"
    include "build/src/overlays/actors/ovl_Oceff_Storm/ovl_Oceff_Storm_reloc.o"
endseg

beginseg
    name "ovl_Oceff_Wipe"
    compress
    include "build/src/overlays/actors/ovl_Oceff_Wipe/z_oceff_wipe.o"
    include "build/src/overlays/actors/ovl_Oceff_Wipe/ovl_Oceff_Wipe_reloc.o"
endseg

beginseg
    name "ovl_Oceff_Wipe2"
    compress
    include "build/src/overlays/actors/ovl_Oceff_Wipe2/z_oceff_wipe2.o"
    include "build/src/overlays/actors/ovl_Oceff_Wipe2/ovl_Oceff_Wipe2_reloc.o"
endseg

beginseg
    name "ovl_Oceff_Wipe3"
    compress
    include "build/src/overlays/actors/ovl_Oceff_Wipe3/z_oceff_wipe3.o"
    include "build/src/overlays/actors/ovl_Oceff_Wipe3/ovl_Oceff_Wipe3_reloc.o"
endseg

beginseg
    name "ovl_Oceff_Wipe4"
    compress
    include "build/src/overlays/actors/ovl_Oceff_Wipe4/z_oceff_wipe4.o"
    include "build/src/overlays/actors/ovl_Oceff_Wipe4/ovl_Oceff_Wipe4_reloc.o"
endseg

beginseg
    name "ovl_Shot_Sun"
    compress
    include "build/src/overlays/actors/ovl_Shot_Sun/z_shot_sun.o"
    include "build/src/overlays/actors/ovl_Shot_Sun/ovl_Shot_Sun_reloc.o"
endseg

beginseg
    name "ovl_Field_Keep"
    compress
    include "build/src/overlays/actors/ovl_Field_Keep/field_keep_actors.o"
    include "build/src/overlays/actors/ovl_Field_Keep/ovl_Field_Keep_reloc.o"
endseg

beginseg
    name "ovl_Dungeon_Keep"
    compress
    include "build/src/overlays/actors/ovl_Dungeon_Keep/dungeon_keep_actors.o"
    include "build/src/overlays/actors/ovl_Dungeon_Keep/beta_floor_switch.o"
    include "build/src/overlays/actors/ovl_Dungeon_Keep/floater.o"
    include "build/src/overlays/actors/ovl_Dungeon_Keep/crashbox.o"
    include "build/src/overlays/actors/ovl_Dungeon_Keep/flame_thrower.o"
    include "build/src/overlays/actors/ovl_Dungeon_Keep/ovl_Dungeon_Keep_reloc.o"
endseg

beginseg
    name "ovl_Green_Cube"
    compress
    include "build/src/overlays/actors/ovl_Green_Cube/green_cube.o"
    include "build/src/overlays/actors/ovl_Green_Cube/ovl_Green_Cube_reloc.o"
endseg

beginseg
    name "ovl_En_Npc"
    compress
    include "build/src/overlays/actors/ovl_En_Npc/z_en_npc.o"
    include "build/src/overlays/actors/ovl_En_Npc/ovl_En_Npc_reloc.o"
endseg

beginseg
    name "gameplay_keep"
    compress
    romalign 0x1000
    include "build/assets/objects/gameplay_keep/gameplay_keep.o"
    number 4
endseg

beginseg
    name "gameplay_field_keep"
    compress
    romalign 0x1000
    include "build/baserom/gameplay_field_keep.o"
endseg

beginseg
    name "gameplay_dangeon_keep"
    compress
    romalign 0x1000
    include "build/assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep.o"
    number 5
endseg

beginseg
    name "gameplay_object_exchange_static"
    compress
    romalign 0x1000
    include "build/baserom/gameplay_object_exchange_static.o"
endseg

beginseg
    name "object_link_boy"
    compress
    romalign 0x1000
    include "build/assets/objects/object_link_boy/object_link_boy.o"
    include "build/assets/objects/object_link_boy/gLinkAdultSkel.o"
    include "build/assets/objects/object_link_boy/hat_adult.o"
    include "build/assets/objects/object_link_boy/gLinkAdultRightFistNearDL.o"
    include "build/assets/objects/object_link_boy/gSWLinkAdultMirrorShieldInHandDL.o"
    include "build/assets/objects/object_link_boy/gSWLinkAdultHylianShieldInHandDL.o"
    include "build/assets/objects/object_link_boy/gSWLinkAdultMegatonHammerInHandDL.o"
    include "build/assets/objects/object_link_boy/gSWLinkAdultHookshotInHandDL.o"
    include "build/assets/objects/object_link_boy/gSWLinkAdultFairyBowInHandDL.o"
    include "build/assets/objects/object_link_boy/gLinkAdultLeftFistNearDL.o"
    include "build/assets/objects/object_link_boy/gSWLinkAdultGiantsKnifeInHandDL.o"
    include "build/assets/objects/object_link_boy/gSWLinkAdultMasterSwordInHandDL.o"
    include "build/assets/objects/object_link_boy/gSWLinkBrokenGiantsKnifeInHandDL.o"
    include "build/assets/objects/object_link_boy/gLinkAdultBottleHandNearDL.o"
    include "build/assets/objects/object_link_boy/gLinkAdultFPLeftHandDL.o"
    include "build/assets/objects/object_link_boy/gLinkAdultLeftHandNearDL.o"
    include "build/assets/objects/object_link_boy/gLinkAdultRightHandNearDL.o"
    include "build/assets/objects/object_link_boy/gLinkAdultFPRightHandDL.o"
    include "build/assets/objects/object_link_boy/gSWLinkAdultFairyBowFPDL.o"
    include "build/assets/objects/object_link_boy/gSWLinkAdultFPHookshotDL.o"
    include "build/assets/objects/object_link_boy/gSWLinkAdultOOTInHandDL.o"
    include "build/assets/objects/object_link_boy/gLinkAdultFPRightForearmDL.o"
    include "build/assets/objects/object_link_boy/gLinkAdultFPLeftForearmDL.o"
    include "build/assets/objects/object_link_boy/chains.o"
    include "build/assets/objects/object_link_boy/gSWLinkAdultStaticHatDL.o"
    number 6
endseg

beginseg
    name "object_link_child"
    compress
    romalign 0x1000
    include "build/assets/objects/object_link_child/object_link_child.o"
    include "build/assets/objects/object_link_child/gLinkChildSkel.o"
    include "build/assets/objects/object_link_child/hat_child.o"
    include "build/assets/objects/object_link_child/gLinkChildRightHandAndOOTNearDL.o"
    include "build/assets/objects/object_link_child/gLinkChildStaticHatDL.o"
    number 6
endseg

beginseg
    name "object_box"
    compress
    romalign 0x1000
    include "build/assets/objects/object_box/object_box.o"
    number 6
endseg

beginseg
    name "object_human"
    compress
    romalign 0x1000
    include "build/assets/objects/object_human/zelda_tg2_zelda_tg2.o"
    number 6
endseg

beginseg
    name "object_okuta"
    compress
    romalign 0x1000
    include "build/assets/objects/object_okuta/object_okuta.o"
    number 6
endseg

beginseg
    name "object_poh"
    compress
    romalign 0x1000
    include "build/assets/objects/object_poh/object_poh.o"
    number 6
endseg

beginseg
    name "object_wallmaster"
    compress
    romalign 0x1000
    include "build/assets/objects/object_wallmaster/object_wallmaster.o"
    number 6
endseg

beginseg
    name "object_dy_obj"
    compress
    romalign 0x1000
    include "build/assets/objects/object_beta_soldier/object_beta_soldier.o"
    number 6
endseg

beginseg
    name "object_firefly"
    compress
    romalign 0x1000
    include "build/assets/objects/object_firefly/object_firefly.o"
    number 6
endseg

beginseg
    name "object_dodongo"
    compress
    romalign 0x1000
    include "build/assets/objects/object_dodongo/object_dodongo.o"
    number 6
endseg

beginseg
    name "object_fire"
    compress
    romalign 0x1000
    include "build/assets/objects/object_fire/object_fire.o"
    number 6
endseg

beginseg
    name "object_niw"
    compress
    romalign 0x1000
    include "build/assets/objects/object_niw/object_niw.o"
    number 6
endseg

beginseg
    name "object_tite"
    compress
    romalign 0x1000
    include "build/baserom/object_tite.o"
endseg

beginseg
    name "object_reeba"
    compress
    romalign 0x1000
    include "build/baserom/object_reeba.o"
endseg

beginseg
    name "object_peehat"
    compress
    romalign 0x1000
    include "build/baserom/object_peehat.o"
endseg

beginseg
    name "object_kingdodongo"
    compress
    romalign 0x1000
    include "build/baserom/object_kingdodongo.o"
endseg

beginseg
    name "object_horse"
    compress
    romalign 0x1000
    include "build/baserom/object_horse.o"
endseg

beginseg
    name "object_zf"
    compress
    romalign 0x1000
    include "build/baserom/object_zf.o"
endseg

beginseg
    name "object_goma"
    compress
    romalign 0x1000
    include "build/assets/objects/object_goma/object_goma.o"
    number 6
endseg

beginseg
    name "object_zl1"
    compress
    romalign 0x1000
    include "build/baserom/object_zl1.o"
    include "build/assets/objects/object_zl1/gSWZL1ChildZeldaSkel.o"
    include "build/assets/objects/object_zl1/zl1_face.o"
    number 6
endseg

beginseg
    name "object_gol"
    compress
    romalign 0x1000
    include "build/baserom/object_gol.o"
endseg

beginseg
    name "object_bubble"
    compress
    romalign 0x1000
    include "build/baserom/object_bubble.o"
endseg

beginseg
    name "object_dodojr"
    compress
    romalign 0x1000
    include "build/baserom/object_dodojr.o"
endseg

beginseg
    name "object_torch2"
    compress
    romalign 0x1000
    include "build/assets/objects/object_torch2/object_torch2.o"
    number 6
endseg

beginseg
    name "object_bl"
    compress
    romalign 0x1000
    include "build/baserom/object_bl.o"
endseg

beginseg
    name "object_tp"
    compress
    romalign 0x1000
    include "build/baserom/object_tp.o"
endseg

beginseg
    name "object_oA1"
    compress
    romalign 0x1000
    include "build/baserom/object_oA1.o"
endseg

beginseg
    name "object_st"
    compress
    romalign 0x1000
    include "build/baserom/object_st.o"
endseg

beginseg
    name "object_bw"
    compress
    romalign 0x1000
    include "build/baserom/object_bw.o"
endseg

beginseg
    name "object_ei"
    compress
    romalign 0x1000
    include "build/baserom/object_ei.o"
endseg

beginseg
    name "object_horse_normal"
    compress
    romalign 0x1000
    include "build/assets/objects/object_horse_normal/object_horse_normal.o"
    number 6
endseg

beginseg
    name "object_oB1"
    compress
    romalign 0x1000
    include "build/baserom/object_oB1.o"
endseg

beginseg
    name "object_o_anime"
    compress
    romalign 0x1000
    include "build/baserom/object_o_anime.o"
endseg

beginseg
    name "object_spot04_objects"
    compress
    romalign 0x1000
    include "build/baserom/object_spot04_objects.o"
endseg

beginseg
    name "object_ddan_objects"
    compress
    romalign 0x1000
    include "build/assets/objects/object_ddan_objects/object_ddan_objects.o"
    number 6
endseg

beginseg
    name "object_hidan_objects"
    compress
    romalign 0x1000
    include "build/assets/objects/object_hidan_objects/object_hidan_objects.o"
    number 6
endseg

beginseg
    name "object_horse_ganon"
    compress
    romalign 0x1000
    include "build/assets/objects/object_horse_ganon/object_horse_ganon.o"
    number 6
endseg

beginseg
    name "object_oA2"
    compress
    romalign 0x1000
    include "build/baserom/object_oA2.o"
endseg

beginseg
    name "object_spot00_objects"
    compress
    romalign 0x1000
    include "build/baserom/object_spot00_objects.o"
endseg

beginseg
    name "object_mb"
    compress
    romalign 0x1000
    include "build/baserom/object_mb.o"
endseg

beginseg
    name "object_bombf"
    compress
    romalign 0x1000
    include "build/baserom/object_bombf.o"
endseg

beginseg
    name "object_sk2"
    compress
    romalign 0x1000
    include "build/assets/objects/object_sk2/object_sk2.o"
    number 6
endseg

beginseg
    name "object_oE1"
    compress
    romalign 0x1000
    include "build/baserom/object_oE1.o"
endseg

beginseg
    name "object_oE_anime"
    compress
    romalign 0x1000
    include "build/baserom/object_oE_anime.o"
endseg

beginseg
    name "object_oE2"
    compress
    romalign 0x1000
    include "build/baserom/object_oE2.o"
endseg

beginseg
    name "object_ydan_objects"
    compress
    romalign 0x1000
    include "build/assets/objects/object_ydan_objects/object_ydan_objects.o"
    number 6
endseg

beginseg
    name "object_gnd"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gnd/object_gnd.o"
    number 6
endseg

beginseg
    name "object_am"
    compress
    romalign 0x1000
    include "build/assets/objects/object_am/object_am.o"
    number 6
endseg

beginseg
    name "object_dekubaba"
    compress
    romalign 0x1000
    include "build/assets/objects/object_dekubaba/object_dekubaba.o"
    number 6
endseg

beginseg
    name "object_oA3"
    compress
    romalign 0x1000
    include "build/baserom/object_oA3.o"
endseg

beginseg
    name "object_oA4"
    compress
    romalign 0x1000
    include "build/baserom/object_oA4.o"
endseg

beginseg
    name "object_oA5"
    compress
    romalign 0x1000
    include "build/baserom/object_oA5.o"
endseg

beginseg
    name "object_oA6"
    compress
    romalign 0x1000
    include "build/baserom/object_oA6.o"
endseg

beginseg
    name "object_oA7"
    compress
    romalign 0x1000
    include "build/baserom/object_oA7.o"
endseg

beginseg
    name "object_jj"
    compress
    romalign 0x1000
    include "build/assets/objects/object_jj/object_jj.o"
    number 6
endseg

beginseg
    name "object_oA8"
    compress
    romalign 0x1000
    include "build/baserom/object_oA8.o"
endseg

beginseg
    name "object_oA9"
    compress
    romalign 0x1000
    include "build/baserom/object_oA9.o"
endseg

beginseg
    name "object_oB2"
    romalign 0x1000
    include "build/assets/objects/object_oB2/object_oB2.o"
    number 6
endseg

beginseg
    name "object_oB3"
    compress
    romalign 0x1000
    include "build/baserom/object_oB3.o"
endseg

beginseg
    name "object_oB4"
    compress
    romalign 0x1000
    include "build/baserom/object_oB4.o"
endseg

beginseg
    name "object_horse_zelda"
    compress
    romalign 0x1000
    include "build/baserom/object_horse_zelda.o"
    number 6
endseg

beginseg
    name "object_opening_demo1"
    compress
    romalign 0x1000
    include "build/baserom/object_opening_demo1.o"
endseg

beginseg
    name "object_warp1"
    compress
    romalign 0x1000
    include "build/baserom/object_warp1.o"
endseg

beginseg
    name "object_b_heart"
    compress
    romalign 0x1000
    include "build/baserom/object_b_heart.o"
endseg

beginseg
    name "object_dekunuts"
    compress
    romalign 0x1000
    include "build/assets/objects/object_dekunuts/mad_scrub_models.o"
    include "build/assets/objects/object_dekunuts/mad_scrub_anims.o"
    include "build/assets/objects/object_dekunuts/gDekuNutsSkel.o"
    number 6
endseg

beginseg
    name "object_oE3"
    compress
    romalign 0x1000
    include "build/baserom/object_oE3.o"
endseg

beginseg
    name "object_oE4"
    compress
    romalign 0x1000
    include "build/baserom/object_oE4.o"
endseg

beginseg
    name "object_menkuri_objects"
    compress
    romalign 0x1000
    include "build/baserom/object_menkuri_objects.o"
endseg

beginseg
    name "object_oE5"
    compress
    romalign 0x1000
    include "build/baserom/object_oE5.o"
endseg

beginseg
    name "object_oE6"
    compress
    romalign 0x1000
    include "build/baserom/object_oE6.o"
endseg

beginseg
    name "object_oE7"
    compress
    romalign 0x1000
    include "build/baserom/object_oE7.o"
endseg

beginseg
    name "object_oE8"
    compress
    romalign 0x1000
    include "build/baserom/object_oE8.o"
endseg

beginseg
    name "object_oE9"
    compress
    romalign 0x1000
    include "build/baserom/object_oE9.o"
endseg

beginseg
    name "object_oE10"
    compress
    romalign 0x1000
    include "build/baserom/object_oE10.o"
endseg

beginseg
    name "object_oE11"
    compress
    romalign 0x1000
    include "build/baserom/object_oE11.o"
endseg

beginseg
    name "object_oE12"
    compress
    romalign 0x1000
    include "build/baserom/object_oE12.o"
endseg

beginseg
    name "object_vali"
    compress
    romalign 0x1000
    include "build/baserom/object_vali.o"
endseg

beginseg
    name "object_oA10"
    compress
    romalign 0x1000
    include "build/baserom/object_oA10.o"
endseg

beginseg
    name "object_oA11"
    compress
    romalign 0x1000
    include "build/baserom/object_oA11.o"
endseg

beginseg
    name "object_mizu_objects"
    compress
    romalign 0x1000
    include "build/baserom/object_mizu_objects.o"
endseg

beginseg
    name "object_fhg"
    compress
    romalign 0x1000
    include "build/assets/objects/object_fhg/object_fhg.o"
    number 6
endseg

beginseg
    name "object_ossan"
    compress
    romalign 0x1000
    include "build/baserom/object_ossan.o"
endseg

beginseg
    name "object_mori_hineri1"
    compress
    romalign 0x1000
    include "build/baserom/object_mori_hineri1.o"
endseg

beginseg
    name "object_Bb"
    compress
    romalign 0x1000
    include "build/baserom/object_Bb.o"
endseg

beginseg
    name "object_toki_objects"
    compress
    romalign 0x1000
    include "build/baserom/object_toki_objects.o"
endseg

beginseg
    name "object_yukabyun"
    compress
    romalign 0x1000
    include "build/baserom/object_yukabyun.o"
endseg

beginseg
    name "object_zl2"
    compress
    romalign 0x1000
    include "build/assets/objects/object_zl2/object_zl2.o"
    number 6
endseg

beginseg
    name "object_mjin"
    compress
    romalign 0x1000
    include "build/baserom/object_mjin.o"
endseg

beginseg
    name "object_mjin_flash"
    compress
    romalign 0x1000
    include "build/baserom/object_mjin_flash.o"
endseg

beginseg
    name "object_mjin_dark"
    compress
    romalign 0x1000
    include "build/baserom/object_mjin_dark.o"
endseg

beginseg
    name "object_mjin_flame"
    compress
    romalign 0x1000
    include "build/baserom/object_mjin_flame.o"
endseg

beginseg
    name "object_mjin_ice"
    compress
    romalign 0x1000
    include "build/baserom/object_mjin_ice.o"
endseg

beginseg
    name "object_mjin_soul"
    compress
    romalign 0x1000
    include "build/baserom/object_mjin_soul.o"
endseg

beginseg
    name "object_mjin_wind"
    compress
    romalign 0x1000
    include "build/baserom/object_mjin_wind.o"
endseg

beginseg
    name "object_mjin_oka"
    compress
    romalign 0x1000
    include "build/baserom/object_mjin_oka.o"
endseg

beginseg
    name "object_haka_objects"
    compress
    romalign 0x1000
    include "build/baserom/object_haka_objects.o"
endseg

beginseg
    name "object_spot06_objects"
    compress
    romalign 0x1000
    include "build/baserom/object_spot06_objects.o"
endseg

beginseg
    name "object_ice_objects"
    compress
    romalign 0x1000
    include "build/baserom/object_ice_objects.o"
endseg

beginseg
    name "object_relay_objects"
    compress
    romalign 0x1000
    include "build/baserom/object_relay_objects.o"
endseg

beginseg
    name "object_mori_hineri1a"
    compress
    romalign 0x1000
    include "build/baserom/object_mori_hineri1a.o"
endseg

beginseg
    name "object_mori_hineri2"
    compress
    romalign 0x1000
    include "build/baserom/object_mori_hineri2.o"
endseg

beginseg
    name "object_mori_hineri2a"
    compress
    romalign 0x1000
    include "build/baserom/object_mori_hineri2a.o"
endseg

beginseg
    name "object_mori_objects"
    compress
    romalign 0x1000
    include "build/baserom/object_mori_objects.o"
endseg

beginseg
    name "object_mori_tex"
    compress
    romalign 0x1000
    include "build/baserom/object_mori_tex.o"
endseg

beginseg
    name "object_spot08_obj"
    compress
    romalign 0x1000
    include "build/baserom/object_spot08_obj.o"
endseg

beginseg
    name "object_warp2"
    compress
    romalign 0x1000
    include "build/baserom/object_warp2.o"
endseg

beginseg
    name "object_hata"
    compress
    romalign 0x1000
    include "build/baserom/object_hata.o"
endseg

beginseg
    name "object_bird"
    compress
    romalign 0x1000
    include "build/baserom/object_bird.o"
endseg

beginseg
    name "object_wood02"
    compress
    romalign 0x1000
    include "build/baserom/object_wood02.o"
endseg

beginseg
    name "object_lightbox"
    compress
    romalign 0x1000
    include "build/baserom/object_lightbox.o"
endseg

beginseg
    name "object_pu_box"
    compress
    romalign 0x1000
    include "build/assets/objects/object_pu_box/object_pu_box.o"
    number 6
endseg

beginseg
    name "object_trap"
    compress
    romalign 0x1000
    include "build/baserom/object_trap.o"
endseg

beginseg
    name "object_vase"
    compress
    romalign 0x1000
    include "build/assets/objects/object_vase/object_vase.o"
    number 6
endseg

beginseg
    name "object_im"
    compress
    romalign 0x1000
    include "build/assets/objects/object_imSW/impa_anims.o"
    include "build/assets/objects/object_imSW/gSWImpaSkel.o"
    number 6
endseg

beginseg
    name "object_ta"
    compress
    romalign 0x1000
    include "build/baserom/object_ta.o"
endseg

beginseg
    name "object_tk"
    compress
    romalign 0x1000
    include "build/assets/objects/object_tk/object_tk.o"
    number 6
endseg

beginseg
    name "object_xc"
    compress
    romalign 0x1000
    include "build/baserom/object_xc.o"
endseg

beginseg
    name "object_vm"
    compress
    romalign 0x1000
    include "build/baserom/object_vm.o"
endseg

beginseg
    name "object_hakach_objects"
    compress
    romalign 0x1000
    include "build/baserom/object_hakach_objects.o"
endseg

beginseg
    name "object_efc_crystal_light"
    compress
    romalign 0x1000
    include "build/assets/objects/object_efc_crystal_light/object_efc_crystal_light.o"
    number 6
endseg

beginseg
    name "object_efc_fire_ball"
    compress
    romalign 0x1000
    include "build/assets/objects/object_efc_fire_ball/object_efc_fire_ball.o"
    number 6
endseg

beginseg
    name "object_efc_flash"
    compress
    romalign 0x1000
    include "build/baserom/object_efc_flash.o"
endseg

beginseg
    name "object_efc_lgt_shower"
    compress
    romalign 0x1000
    include "build/assets/objects/object_efc_lgt_shower/object_efc_lgt_shower.o"
    number 6
endseg

beginseg
    name "object_efc_star_field"
    compress
    romalign 0x1000
    include "build/baserom/object_efc_star_field.o"
endseg

beginseg
    name "object_god_lgt"
    compress
    romalign 0x1000
    include "build/assets/objects/object_god_lgt/object_god_lgt.o"
    number 6
endseg

beginseg
    name "object_light_ring"
    compress
    romalign 0x1000
    include "build/assets/objects/object_light_ring/object_light_ring.o"
    number 6
endseg

beginseg
    name "object_triforce_spot"
    compress
    romalign 0x1000
    include "build/assets/objects/object_triforce_spot/object_triforce_spot.o"
    number 6
endseg

beginseg
    name "object_medal"
    compress
    romalign 0x1000
    include "build/baserom/object_medal.o"
endseg

beginseg
    name "object_bdan_objects"
    compress
    romalign 0x1000
    include "build/baserom/object_bdan_objects.o"
endseg

beginseg
    name "object_sd"
    compress
    romalign 0x1000
    include "build/baserom/object_sd.o"
endseg

beginseg
    name "object_rd"
    compress
    romalign 0x1000
    include "build/baserom/object_rd.o"
endseg

beginseg
    name "object_po_sisters"
    compress
    romalign 0x1000
    include "build/assets/objects/object_po_sisters/object_po_sisters.o"
    number 6
endseg

beginseg
    name "object_heavy_object"
    compress
    romalign 0x1000
    include "build/baserom/object_heavy_object.o"
endseg

beginseg
    name "object_gndd"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gndd/object_gndd.o"
    include "build/assets/objects/object_gndd/gSWGanondorfSkel.o"
    include "build/assets/objects/object_gndd/ganondorf_face_textures.o"
    number 6
endseg

beginseg
    name "object_fd"
    compress
    romalign 0x1000
    include "build/baserom/object_fd.o"
endseg

beginseg
    name "object_du"
    compress
    romalign 0x1000
    include "build/assets/objects/object_du/object_du.o"
    number 6
endseg

beginseg
    name "object_fw"
    compress
    romalign 0x1000
    include "build/baserom/object_fw.o"
endseg

beginseg
    name "object_horse_link_child"
    compress
    romalign 0x1000
    include "build/assets/objects/object_horse_link_child/object_horse_link_child.o"
    number 6
endseg

beginseg
    name "object_spot02_objects"
    compress
    romalign 0x1000
    include "build/baserom/object_spot02_objects.o"
endseg

beginseg
    name "object_haka"
    compress
    romalign 0x1000
    include "build/baserom/object_haka.o"
endseg

beginseg
    name "object_ru1"
    compress
    romalign 0x1000
    include "build/baserom/object_ru1.o"
endseg

beginseg
    name "object_syokudai"
    compress
    romalign 0x1000
    include "build/assets/objects/object_syokudai/object_syokudai.o"
    number 6
endseg

beginseg
    name "object_fd2"
    compress
    romalign 0x1000
    include "build/baserom/object_fd2.o"
endseg

beginseg
    name "object_dh"
    compress
    romalign 0x1000
    include "build/baserom/object_dh.o"
endseg

beginseg
    name "object_rl"
    compress
    romalign 0x1000
    include "build/baserom/object_rl.o"
endseg

beginseg
    name "object_efc_tw"
    compress
    romalign 0x1000
    include "build/assets/objects/object_efc_tw/object_efc_tw.o"
    number 6
endseg

beginseg
    name "object_demo_tre_lgt"
    compress
    romalign 0x1000
    include "build/baserom/object_demo_tre_lgt.o"
endseg

beginseg
    name "object_gi_key"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_key/object_gi_key.o"
    number 6
endseg

beginseg
    name "object_mir_ray"
    compress
    romalign 0x1000
    include "build/assets/objects/object_mir_ray/object_mir_ray.o"
    number 6
endseg

beginseg
    name "object_brob"
    compress
    romalign 0x1000
    include "build/baserom/object_brob.o"
endseg

beginseg
    name "object_gi_jewel"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_jewel/object_gi_jewel.o"
    number 6
endseg

beginseg
    name "object_spot09_obj"
    compress
    romalign 0x1000
    include "build/assets/objects/object_spot09_obj/object_spot09_obj.o"
    number 6
endseg

beginseg
    name "object_spot18_obj"
    compress
    romalign 0x1000
    include "build/baserom/object_spot18_obj.o"
endseg

beginseg
    name "object_bdoor"
    compress
    romalign 0x1000
    include "build/baserom/object_bdoor.o"
endseg

beginseg
    name "object_spot17_obj"
    compress
    romalign 0x1000
    include "build/assets/objects/object_spot17_obj/object_spot17_obj.o"
    number 6
endseg

beginseg
    name "object_shop_dungen"
    compress
    romalign 0x1000
    include "build/baserom/object_shop_dungen.o"
endseg

beginseg
    name "object_nb"
    compress
    romalign 0x1000
    include "build/assets/objects/object_nb/object_nb.o"
    number 6
endseg

beginseg
    name "object_sb"
    compress
    romalign 0x1000
    include "build/baserom/object_sb.o"
endseg

beginseg
    name "object_gi_melody"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_melody/object_gi_melody.o"
    number 6
endseg

beginseg
    name "object_gi_heart"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_heart/object_gi_heart.o"
    number 6
endseg

beginseg
    name "object_gi_compass"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_compass/gGiCompassDL.o"
    include "build/assets/objects/object_gi_compass/gGiCompassGlassDL.o"
    number 6
endseg

beginseg
    name "object_gi_bosskey"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_bosskey/object_gi_bosskey.o"
    number 6
endseg

beginseg
    name "object_gi_medal"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_medal/object_gi_medal.o"
    number 6
endseg

beginseg
    name "object_gi_nuts"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_nuts/object_gi_nuts.o"
    number 6
endseg

beginseg
    name "object_sa"
    compress
    romalign 0x1000
    include "build/baserom/object_sa.o"
endseg

beginseg
    name "object_gi_hearts"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_hearts/object_gi_hearts.o"
    number 6
endseg

beginseg
    name "object_gi_arrowcase"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_arrowcase/object_gi_arrowcase.o"
    number 6
endseg

beginseg
    name "object_gi_bombpouch"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_bombpouch/object_gi_bombpouch.o"
    number 6
endseg

beginseg
    name "object_in"
    compress
    romalign 0x1000
    include "build/baserom/object_in.o"
endseg

beginseg
    name "object_tr"
    compress
    romalign 0x1000
    include "build/baserom/object_tr.o"
endseg

beginseg
    name "object_spot16_obj"
    compress
    romalign 0x1000
    include "build/baserom/object_spot16_obj.o"
endseg

beginseg
    name "object_oE1s"
    compress
    romalign 0x1000
    include "build/baserom/object_oE1s.o"
endseg

beginseg
    name "object_oE4s"
    compress
    romalign 0x1000
    include "build/baserom/object_oE4s.o"
endseg

beginseg
    name "object_os_anime"
    compress
    romalign 0x1000
    include "build/baserom/object_os_anime.o"
endseg

beginseg
    name "object_gi_bottle"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_bottle/object_gi_bottle.o"
    number 6
endseg

beginseg
    name "object_gi_stick"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_stick/object_gi_stick.o"
    number 6
endseg

beginseg
    name "object_gi_map"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_map/object_gi_map.o"
    number 6
endseg

beginseg
    name "object_oF1d_map"
    compress
    romalign 0x1000
    include "build/baserom/object_oF1.o"
endseg

beginseg
    name "object_ru2"
    compress
    romalign 0x1000
    include "build/baserom/object_ru2.o"
endseg

beginseg
    name "object_gi_shield_1"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_shield_1/object_gi_shield_1.o"
    number 6
endseg

beginseg
    name "object_dekujr"
    compress
    romalign 0x1000
    include "build/baserom/object_dekujr.o"
endseg

beginseg
    name "object_gi_magicpot"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_magicpot/object_gi_magicpot.o"
    number 6
endseg

beginseg
    name "object_gi_bomb_1"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_bomb_1/object_gi_bomb_1.o"
    number 6
endseg

beginseg
    name "object_oF1s"
    compress
    romalign 0x1000
    include "build/baserom/object_oF1s.o"
endseg

beginseg
    name "object_ma2"
    compress
    romalign 0x1000
    include "build/baserom/object_ma2.o"
endseg

beginseg
    name "object_gi_purse"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_purse/object_gi_purse.o"
    number 6
endseg

beginseg
    name "object_hni"
    compress
    romalign 0x1000
    include "build/baserom/object_hni.o"
endseg

beginseg
    name "object_rr"
    compress
    romalign 0x1000
    include "build/baserom/object_rr.o"
endseg

beginseg
    name "object_bxa"
    compress
    romalign 0x1000
    include "build/baserom/object_bxa.o"
endseg

beginseg
    name "object_anubice"
    compress
    romalign 0x1000
    include "build/assets/objects/object_anubice/object_anubice.o"
    number 6
endseg

beginseg
    name "object_gi_gerudo"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_gerudo/object_gi_gerudo.o"
    number 6
endseg

beginseg
    name "object_gi_arrow"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_arrow/object_gi_arrow.o"
    number 6
endseg

beginseg
    name "object_gi_bomb_2"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_bomb_2/object_gi_bomb_2.o"
    number 6
endseg

beginseg
    name "object_gi_egg"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_egg/object_gi_egg.o"
    number 6
endseg

beginseg
    name "object_gi_scale"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_scale/object_gi_scale.o"
    number 6
endseg

beginseg
    name "object_gi_shield_2"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_shield_2/object_gi_shield_2.o"
    number 6
endseg

beginseg
    name "object_gi_hookshot"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_hookshot/object_gi_hookshot.o"
    number 6
endseg

beginseg
    name "object_gi_ocarina"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_ocarina/object_gi_ocarina.o"
    number 6
endseg

beginseg
    name "object_gi_milk"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_milk/object_gi_milk.o"
    number 6
endseg

beginseg
    name "object_ma1"
    compress
    romalign 0x1000
    include "build/baserom/object_ma1.o"
endseg

beginseg
    name "object_ganon"
    compress
    romalign 0x1000
    include "build/baserom/object_ganon.o"
endseg

beginseg
    name "object_ny"
    compress
    romalign 0x1000
    include "build/assets/objects/object_ny/object_ny.o"
    number 6
endseg

beginseg
    name "object_fr"
    compress
    romalign 0x1000
    include "build/baserom/object_fr.o"
endseg

beginseg
    name "object_gi_pachinko"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_pachinko/object_gi_pachinko.o"
    number 6
endseg

beginseg
    name "object_gi_boomerang"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_boomerang/object_gi_boomerang.o"
    number 6
endseg

beginseg
    name "object_gi_bow"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_bow/object_gi_bow.o"
    number 6
endseg

beginseg
    name "object_gi_glasses"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_glasses/object_gi_glasses.o"
    number 6
endseg

beginseg
    name "object_gi_liquid"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_liquid/object_gi_liquid.o"
    number 6
endseg

beginseg
    name "object_ani"
    compress
    romalign 0x1000
    include "build/baserom/object_ani.o"
endseg

beginseg
    name "object_demo_6k"
    compress
    romalign 0x1000
    include "build/baserom/object_demo_6k.o"
endseg

beginseg
    name "object_gi_shield_3"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_shield_3/object_gi_shield_3.o"
    number 6
endseg

beginseg
    name "object_gi_letter"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_letter/object_gi_letter.o"
    number 6
endseg

beginseg
    name "object_spot15_obj"
    compress
    romalign 0x1000
    include "build/baserom/object_spot15_obj.o"
endseg

beginseg
    name "object_jya_obj"
    compress
    romalign 0x1000
    include "build/baserom/object_jya_obj.o"
endseg

beginseg
    name "object_gi_clothes"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_clothes/object_gi_clothes.o"
    number 6
endseg

beginseg
    name "object_gi_bean"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_bean/object_gi_bean.o"
    number 6
endseg

beginseg
    name "object_gi_fish"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_fish/object_gi_fish.o"
    number 6
endseg

beginseg
    name "object_gi_saw"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_saw/object_gi_saw.o"
    number 6
endseg

beginseg
    name "object_gi_hammer"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_hammer/object_gi_hammer.o"
    number 6
endseg

beginseg
    name "object_gi_grass"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_grass/object_gi_grass.o"
    number 6
endseg

beginseg
    name "object_gi_longsword"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_longsword/object_gi_longsword.o"
    number 6
endseg

beginseg
    name "object_spot01_objects"
    compress
    romalign 0x1000
    include "build/baserom/object_spot01_objects.o"
endseg

beginseg
    name "object_md"
    compress
    romalign 0x1000
    include "build/baserom/object_md.o"
endseg

beginseg
    name "object_km1"
    compress
    romalign 0x1000
    include "build/baserom/object_km1.o"
endseg

beginseg
    name "object_kw1"
    compress
    romalign 0x1000
    include "build/baserom/object_kw1.o"
endseg

beginseg
    name "object_zo"
    compress
    romalign 0x1000
    include "build/baserom/object_zo.o"
endseg

beginseg
    name "object_kz"
    compress
    romalign 0x1000
    include "build/baserom/object_kz.o"
endseg

beginseg
    name "object_umajump"
    compress
    romalign 0x1000
    include "build/baserom/object_umajump.o"
endseg

beginseg
    name "object_masterkokiri"
    compress
    romalign 0x1000
    include "build/baserom/object_masterkokiri.o"
endseg

beginseg
    name "object_masterkokirihead"
    compress
    romalign 0x1000
    include "build/baserom/object_masterkokirihead.o"
endseg

beginseg
    name "object_mastergolon"
    compress
    romalign 0x1000
    include "build/baserom/object_mastergolon.o"
endseg

beginseg
    name "object_masterzoora"
    compress
    romalign 0x1000
    include "build/baserom/object_masterzoora.o"
endseg

beginseg
    name "object_aob"
    compress
    romalign 0x1000
    include "build/baserom/object_aob.o"
endseg

beginseg
    name "object_ik"
    compress
    romalign 0x1000
    include "build/baserom/object_ik.o"
endseg

beginseg
    name "object_ahg"
    compress
    romalign 0x1000
    include "build/baserom/object_ahg.o"
endseg

beginseg
    name "object_cne"
    compress
    romalign 0x1000
    include "build/baserom/object_cne.o"
endseg

beginseg
    name "object_gi_niwatori"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_niwatori/object_gi_niwatori.o"
    number 6
endseg

beginseg
    name "object_skj"
    compress
    romalign 0x1000
    include "build/assets/objects/object_skj/object_skj.o"
    number 6
endseg

beginseg
    name "object_gi_bottle_letter"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_bottle_letter/object_gi_bottle_letter.o"
    number 6
endseg

beginseg
    name "object_bji"
    compress
    romalign 0x1000
    include "build/baserom/object_bji.o"
endseg

beginseg
    name "object_bba"
    compress
    romalign 0x1000
    include "build/baserom/object_bba.o"
endseg

beginseg
    name "object_gi_ocarina_0"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_ocarina_0/object_gi_ocarina_0.o"
    number 6
endseg

beginseg
    name "object_ds"
    compress
    romalign 0x1000
    include "build/baserom/object_ds.o"
endseg

beginseg
    name "object_ane"
    compress
    romalign 0x1000
    include "build/baserom/object_ane.o"
endseg

beginseg
    name "object_boj"
    compress
    romalign 0x1000
    include "build/baserom/object_boj.o"
endseg

beginseg
    name "object_spot03_object"
    compress
    romalign 0x1000
    include "build/baserom/object_spot03_object.o"
endseg

beginseg
    name "object_spot07_object"
    compress
    romalign 0x1000
    include "build/baserom/object_spot07_object.o"
endseg

beginseg
    name "object_fz"
    compress
    romalign 0x1000
    include "build/baserom/object_fz.o"
endseg

beginseg
    name "object_bob"
    compress
    romalign 0x1000
    include "build/baserom/object_bob.o"
endseg

beginseg
    name "object_ge1"
    compress
    romalign 0x1000
    include "build/assets/objects/object_ge1/object_ge1.o"
    number 6
endseg

beginseg
    name "object_yabusame_point"
    compress
    romalign 0x1000
    include "build/baserom/object_yabusame_point.o"
endseg

beginseg
    name "object_gi_boots_2"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_boots_2/object_gi_boots_2.o"
    number 6
endseg

beginseg
    name "object_gi_seed"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_seed/object_gi_seed.o"
    number 6
endseg

beginseg
    name "object_gnd_magic"
    compress
    romalign 0x1000
    include "build/baserom/object_gnd_magic.o"
endseg

beginseg
    name "object_d_elevator"
    compress
    romalign 0x1000
    include "build/baserom/object_d_elevator.o"
endseg

beginseg
    name "object_d_hsblock"
    compress
    romalign 0x1000
    include "build/baserom/object_d_hsblock.o"
	number 6
endseg

beginseg
    name "object_d_lift"
    compress
    romalign 0x1000
    include "build/baserom/object_d_lift.o"
endseg

beginseg
    name "object_mamenoki"
    compress
    romalign 0x1000
    include "build/baserom/object_mamenoki.o"
endseg

beginseg
    name "object_goroiwa"
    compress
    romalign 0x1000
    include "build/baserom/object_goroiwa.o"
endseg

beginseg
    name "object_toryo"
    compress
    romalign 0x1000
    include "build/baserom/object_toryo.o"
endseg

beginseg
    name "object_daiku"
    compress
    romalign 0x1000
    include "build/baserom/object_daiku.o"
endseg

beginseg
    name "object_nwc"
    compress
    romalign 0x1000
    include "build/baserom/object_nwc.o"
endseg

beginseg
    name "object_blkobj"
    compress
    romalign 0x1000
    include "build/assets/objects/object_blkobj/object_blkobj.o"
    number 6
endseg

beginseg
    name "object_gm"
    compress
    romalign 0x1000
    include "build/baserom/object_gm.o"
endseg

beginseg
    name "object_ms"
    compress
    romalign 0x1000
    include "build/baserom/object_ms.o"
endseg

beginseg
    name "object_hs"
    compress
    romalign 0x1000
    include "build/baserom/object_hs.o"
endseg

beginseg
    name "object_ingate"
    compress
    romalign 0x1000
    include "build/baserom/object_ingate.o"
endseg

beginseg
    name "object_lightswitch"
    compress
    romalign 0x1000
    include "build/baserom/object_lightswitch.o"
endseg

beginseg
    name "object_kusa"
    compress
    romalign 0x1000
    include "build/baserom/object_kusa.o"
endseg

beginseg
    name "object_tsubo"
    compress
    romalign 0x1000
    include "build/baserom/object_tsubo.o"
endseg

beginseg
    name "object_gi_gloves"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_gloves/object_gi_gloves.o"
    number 6
endseg

beginseg
    name "object_gi_coin"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_coin/object_gi_coin.o"
    number 6
endseg

beginseg
    name "object_kanban"
    compress
    romalign 0x1000
    include "build/baserom/object_kanban.o"
endseg

beginseg
    name "object_gjyo_objects"
    compress
    romalign 0x1000
    include "build/baserom/object_gjyo_objects.o"
endseg

beginseg
    name "object_owl"
    compress
    romalign 0x1000
    include "build/baserom/object_owl.o"
endseg

beginseg
    name "object_mk"
    compress
    romalign 0x1000
    include "build/baserom/object_mk.o"
endseg

beginseg
    name "object_fu"
    compress
    romalign 0x1000
    include "build/baserom/object_fu.o"
endseg

beginseg
    name "object_gi_ki_tan_mask"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_ki_tan_mask/object_gi_ki_tan_mask.o"
    number 6
endseg

beginseg
    name "object_gi_redead_mask"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_redead_mask/object_gi_redead_mask.o"
    number 6
endseg

beginseg
    name "object_gi_skj_mask"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_skj_mask/object_gi_skj_mask.o"
    number 6
endseg

beginseg
    name "object_gi_rabit_mask"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_rabit_mask/object_gi_rabit_mask.o"
    number 6
endseg

beginseg
    name "object_gi_truth_mask"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_truth_mask/object_gi_truth_mask.o"
    number 6
endseg

beginseg
    name "object_ganon_objects"
    compress
    romalign 0x1000
    include "build/baserom/object_ganon_objects.o"
endseg

beginseg
    name "object_siofuki"
    compress
    romalign 0x1000
    include "build/baserom/object_siofuki.o"
endseg

beginseg
    name "object_stream"
    compress
    romalign 0x1000
    include "build/baserom/object_stream.o"
endseg

beginseg
    name "object_mm"
    compress
    romalign 0x1000
    include "build/assets/objects/object_mm/object_mm.o"
    number 6
endseg

beginseg
    name "object_fa"
    compress
    romalign 0x1000
    include "build/baserom/object_fa.o"
endseg

beginseg
    name "object_os"
    compress
    romalign 0x1000
    include "build/baserom/object_os.o"
endseg

beginseg
    name "object_gi_eye_lotion"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_eye_lotion/object_gi_eye_lotion.o"
    number 6
endseg

beginseg
    name "object_gi_powder"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_powder/object_gi_powder.o"
    number 6
endseg

beginseg
    name "object_gi_mushroom"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_mushroom/object_gi_mushroom.o"
    number 6
endseg

beginseg
    name "object_gi_ticketstone"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_ticketstone/object_gi_ticketstone.o"
    number 6
endseg

beginseg
    name "object_gi_brokensword"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_brokensword/object_gi_brokensword.o"
    number 6
endseg

beginseg
    name "object_js"
    compress
    romalign 0x1000
    include "build/baserom/object_js.o"
endseg

beginseg
    name "object_cs"
    compress
    romalign 0x1000
    include "build/baserom/object_cs.o"
endseg

beginseg
    name "object_gi_prescription"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_prescription/object_gi_prescription.o"
    number 6
endseg

beginseg
    name "object_gi_bracelet"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_bracelet/object_gi_bracelet.o"
    number 6
endseg

beginseg
    name "object_gi_soldout"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_soldout/object_gi_soldout.o"
    number 6
endseg

beginseg
    name "object_gi_frog"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_frog/object_gi_frog.o"
    number 6
endseg

beginseg
    name "object_mag"
    compress
    romalign 0x1000
    include "build/baserom/object_mag.o"
endseg

beginseg
    name "object_door_gerudo"
    compress
    romalign 0x1000
    include "build/baserom/object_door_gerudo.o"
endseg

beginseg
    name "object_gt"
    compress
    romalign 0x1000
    include "build/baserom/object_gt.o"
endseg

beginseg
    name "object_efc_erupc"
    compress
    romalign 0x1000
    include "build/baserom/object_efc_erupc.o"
endseg

beginseg
    name "object_zl2_anime1"
    compress
    romalign 0x1000
    include "build/assets/objects/object_zl2_anime1/object_zl2_anime1.o"
    number 6
endseg

beginseg
    name "object_zl2_anime2"
    compress
    romalign 0x1000
    include "build/assets/objects/object_zl2_anime2/object_zl2_anime2.o"
    number 6
endseg

beginseg
    name "object_gi_golonmask"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_golonmask/object_gi_golonmask.o"
    number 6
endseg

beginseg
    name "object_gi_zoramask"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_zoramask/object_gi_zoramask.o"
    number 6
endseg

beginseg
    name "object_gi_gerudomask"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_gerudomask/object_gi_gerudomask.o"
    number 6
endseg

beginseg
    name "object_ganon2"
    compress
    romalign 0x1000
    include "build/baserom/object_ganon2.o"
endseg

beginseg
    name "object_ka"
    compress
    romalign 0x1000
    include "build/baserom/object_ka.o"
endseg

beginseg
    name "object_ts"
    compress
    romalign 0x1000
    include "build/baserom/object_ts.o"
endseg

beginseg
    name "object_zg"
    compress
    romalign 0x1000
    include "build/baserom/object_zg.o"
endseg

beginseg
    name "object_gi_hoverboots"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_hoverboots/object_gi_hoverboots.o"
    number 6
endseg

beginseg
    name "object_gi_m_arrow"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_m_arrow/object_gi_m_arrow.o"
    number 6
endseg

beginseg
    name "object_ds2"
    compress
    romalign 0x1000
    include "build/baserom/object_ds2.o"
endseg

beginseg
    name "object_ec"
    compress
    romalign 0x1000
    include "build/baserom/object_ec.o"
endseg

beginseg
    name "object_gi_sutaru"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_sutaru/object_gi_sutaru.o"
    number 6
endseg

beginseg
    name "object_gi_goddess"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_goddess/object_gi_goddess.o"
    number 6
endseg

beginseg
    name "object_ssh"
    compress
    romalign 0x1000
    include "build/baserom/object_ssh.o"
endseg

beginseg
    name "object_bigokuta"
    compress
    romalign 0x1000
    include "build/baserom/object_bigokuta.o"
endseg

beginseg
    name "object_bg"
    compress
    romalign 0x1000
    include "build/assets/objects/object_bg/object_bg.o"
    number 6
endseg

beginseg
    name "object_spot05_objects"
    compress
    romalign 0x1000
    include "build/baserom/object_spot05_objects.o"
endseg

beginseg
    name "object_spot12_obj"
    compress
    romalign 0x1000
    include "build/baserom/object_spot12_obj.o"
endseg

beginseg
    name "object_bombiwa"
    compress
    romalign 0x1000
    include "build/baserom/object_bombiwa.o"
endseg

beginseg
    name "object_hintnuts"
    compress
    romalign 0x1000
    include "build/assets/objects/object_hintnuts/object_hintnuts.o"
    number 6
endseg

beginseg
    name "object_rs"
    compress
    romalign 0x1000
    include "build/baserom/object_rs.o"
endseg

beginseg
    name "object_spot00_break"
    compress
    romalign 0x1000
    include "build/baserom/object_spot00_break.o"
endseg

beginseg
    name "object_gla"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gla/object_gla.o"
    number 6
endseg

beginseg
    name "object_shopnuts"
    compress
    romalign 0x1000
    include "build/baserom/object_shopnuts.o"
endseg

beginseg
    name "object_geldb"
    compress
    romalign 0x1000
    include "build/assets/objects/object_geldb/object_geldb.o"
    number 6
endseg

beginseg
    name "object_gr"
    compress
    romalign 0x1000
    include "build/baserom/object_gr.o"
endseg

beginseg
    name "object_dog"
    compress
    romalign 0x1000
    include "build/baserom/object_dog.o"
endseg

beginseg
    name "object_jya_iron"
    compress
    romalign 0x1000
    include "build/assets/objects/object_jya_iron/object_jya_iron.o"
    number 6
endseg

beginseg
    name "object_jya_door"
    compress
    romalign 0x1000
    include "build/baserom/object_jya_door.o"
endseg

beginseg
    name "object_spot01_objects2"
    compress
    romalign 0x1000
    include "build/baserom/object_spot01_objects2.o"
endseg

beginseg
    name "object_spot11_obj"
    compress
    romalign 0x1000
    include "build/assets/objects/object_spot11_obj/object_spot11_obj.o"
    number 6
endseg

beginseg
    name "object_kibako2"
    compress
    romalign 0x1000
    include "build/baserom/object_kibako2.o"
endseg

beginseg
    name "object_dns"
    compress
    romalign 0x1000
    include "build/assets/objects/object_dns/object_dns.o"
    number 6
endseg

beginseg
    name "object_dnk"
    compress
    romalign 0x1000
    include "build/assets/objects/object_dnk/object_dnk.o"
    number 6
endseg

beginseg
    name "object_gi_fire"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_fire/object_gi_fire.o"
    number 6
endseg

beginseg
    name "object_gi_insect"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_insect/object_gi_insect.o"
    number 6
endseg

beginseg
    name "object_gi_butterfly"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_butterfly/object_gi_butterfly.o"
    number 6
endseg

beginseg
    name "object_gi_ghost"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_ghost/object_gi_ghost.o"
    number 6
endseg

beginseg
    name "object_gi_soul"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_soul/object_gi_soul.o"
    number 6
endseg

beginseg
    name "object_bowl"
    compress
    romalign 0x1000
    include "build/baserom/object_bowl.o"
endseg

beginseg
    name "object_po_field"
    compress
    romalign 0x1000
    include "build/assets/objects/object_po_field/object_po_field.o"
    number 6
endseg

beginseg
    name "object_demo_kekkai"
    compress
    romalign 0x1000
    include "build/assets/objects/object_demo_kekkai/object_demo_kekkai.o"
    number 6
endseg

beginseg
    name "object_efc_doughnut"
    compress
    romalign 0x1000
    include "build/baserom/object_efc_doughnut.o"
endseg

beginseg
    name "object_gi_dekupouch"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_dekupouch/object_gi_dekupouch.o"
    number 6
endseg

beginseg
    name "object_ganon_anime1"
    compress
    romalign 0x1000
    include "build/baserom/object_ganon_anime1.o"
endseg

beginseg
    name "object_ganon_anime2"
    compress
    romalign 0x1000
    include "build/baserom/object_ganon_anime2.o"
endseg

beginseg
    name "object_ganon_anime3"
    compress
    romalign 0x1000
    include "build/baserom/object_ganon_anime3.o"
endseg

beginseg
    name "object_gi_rupy"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_rupy/object_gi_rupy.o"
    number 6
endseg

beginseg
    name "object_spot01_matoya"
    compress
    romalign 0x1000
    include "build/baserom/object_spot01_matoya.o"
endseg

beginseg
    name "object_spot01_matoyab"
    compress
    romalign 0x1000
    include "build/baserom/object_spot01_matoyab.o"
endseg

beginseg
    name "object_po_composer"
    compress
    romalign 0x1000
    include "build/assets/objects/object_po_composer/object_po_composer.o"
    number 6
endseg

beginseg
    name "object_mu"
    compress
    romalign 0x1000
    include "build/baserom/object_mu.o"
endseg

beginseg
    name "object_wf"
    compress
    romalign 0x1000
    include "build/baserom/object_wf.o"
endseg

beginseg
    name "object_skb"
    compress
    romalign 0x1000
    include "build/baserom/object_skb.o"
endseg

beginseg
    name "object_gj"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gj/object_gj.o"
    number 6
endseg

beginseg
    name "object_geff"
    compress
    romalign 0x1000
    include "build/baserom/object_geff.o"
endseg

beginseg
    name "object_haka_door"
    compress
    romalign 0x1000
    include "build/baserom/object_haka_door.o"
endseg

beginseg
    name "object_gs"
    compress
    romalign 0x1000
    include "build/baserom/object_gs.o"
endseg

beginseg
    name "object_ps"
    compress
    romalign 0x1000
    include "build/assets/objects/object_ps/object_ps.o"
    number 6
endseg

beginseg
    name "object_bwall"
    compress
    romalign 0x1000
    include "build/baserom/object_bwall.o"
endseg

beginseg
    name "object_crow"
    compress
    romalign 0x1000
    include "build/assets/objects/object_crow/object_crow.o"
    number 6
endseg

beginseg
    name "object_cow"
    compress
    romalign 0x1000
    include "build/baserom/object_cow.o"
endseg

beginseg
    name "object_cob"
    compress
    romalign 0x1000
    include "build/baserom/object_cob.o"
endseg

beginseg
    name "object_gi_sword_1"
    compress
    romalign 0x1000
    include "build/assets/objects/object_gi_sword_1/object_gi_sword_1.o"
    number 6
endseg

beginseg
    name "object_door_killer"
    compress
    romalign 0x1000
    include "build/baserom/object_door_killer.o"
endseg

beginseg
    name "object_ouke_haka"
    compress
    romalign 0x1000
    include "build/baserom/object_ouke_haka.o"
endseg

beginseg
    name "object_timeblock"
    compress
    romalign 0x1000
    include "build/baserom/object_timeblock.o"
endseg

beginseg
    name "object_zl4"
    compress
    romalign 0x1000
    include "build/assets/objects/object_zl4/object_zl4.o"
    include "build/assets/objects/object_zl4/gSWChildZeldaSkel.o"
    include "build/assets/objects/object_zl4/zl4_face.o"
    number 6
endseg

// z64me's edited stalfos object that looks like the beta one
beginseg
    name "object_skeleton"
    compress
    romalign 0x1000
    include "build/baserom/object_skeleton.o"
endseg

// beginseg
//     name "g_pn_01"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_01.o"
// endseg
// 
// beginseg
//     name "g_pn_02"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_02.o"
// endseg
// 
// beginseg
//     name "g_pn_03"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_03.o"
// endseg
// 
// beginseg
//     name "g_pn_04"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_04.o"
// endseg
// 
// beginseg
//     name "g_pn_05"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_05.o"
// endseg
// 
// beginseg
//     name "g_pn_06"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_06.o"
// endseg
// 
// beginseg
//     name "g_pn_07"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_07.o"
// endseg
// 
// beginseg
//     name "g_pn_08"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_08.o"
// endseg
// 
// beginseg
//     name "g_pn_09"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_09.o"
// endseg
// 
// beginseg
//     name "g_pn_10"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_10.o"
// endseg
// 
// beginseg
//     name "g_pn_11"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_11.o"
// endseg
// 
// beginseg
//     name "g_pn_12"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_12.o"
// endseg
// 
// beginseg
//     name "g_pn_13"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_13.o"
// endseg
// 
// beginseg
//     name "g_pn_14"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_14.o"
// endseg
// 
// beginseg
//     name "g_pn_15"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_15.o"
// endseg
// 
// beginseg
//     name "g_pn_16"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_16.o"
// endseg
// 
// beginseg
//     name "g_pn_17"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_17.o"
// endseg
// 
// beginseg
//     name "g_pn_18"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_18.o"
// endseg
// 
// beginseg
//     name "g_pn_19"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_19.o"
// endseg
// 
// beginseg
//     name "g_pn_20"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_20.o"
// endseg
// 
// beginseg
//     name "g_pn_21"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_21.o"
// endseg
// 
// beginseg
//     name "g_pn_22"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_22.o"
// endseg
// 
// beginseg
//     name "g_pn_23"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_23.o"
// endseg
// 
// beginseg
//     name "g_pn_24"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_24.o"
// endseg
// 
// beginseg
//     name "g_pn_25"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_25.o"
// endseg
// 
// beginseg
//     name "g_pn_26"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_26.o"
// endseg
// 
// beginseg
//     name "g_pn_27"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_27.o"
// endseg
// 
// beginseg
//     name "g_pn_28"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_28.o"
// endseg
// 
// beginseg
//     name "g_pn_29"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_29.o"
// endseg
// 
// beginseg
//     name "g_pn_30"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_30.o"
// endseg
// 
// beginseg
//     name "g_pn_31"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_31.o"
// endseg
// 
// beginseg
//     name "g_pn_32"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_32.o"
// endseg
// 
// beginseg
//     name "g_pn_33"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_33.o"
// endseg
// 
// beginseg
//     name "g_pn_34"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_34.o"
// endseg
// 
// beginseg
//     name "g_pn_35"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_35.o"
// endseg
// 
// beginseg
//     name "g_pn_36"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_36.o"
// endseg
// 
// beginseg
//     name "g_pn_37"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_37.o"
// endseg
// 
// beginseg
//     name "g_pn_38"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_38.o"
// endseg
// 
// beginseg
//     name "g_pn_39"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_39.o"
// endseg
// 
// beginseg
//     name "g_pn_40"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_40.o"
// endseg
// 
// beginseg
//     name "g_pn_41"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_41.o"
// endseg
// 
// beginseg
//     name "g_pn_42"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_42.o"
// endseg
// 
// beginseg
//     name "g_pn_43"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_43.o"
// endseg
// 
// beginseg
//     name "g_pn_44"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_44.o"
// endseg
// 
// beginseg
//     name "g_pn_45"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_45.o"
// endseg
// 
// beginseg
//     name "g_pn_46"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_46.o"
// endseg
// 
// beginseg
//     name "g_pn_47"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_47.o"
// endseg
// 
// beginseg
//     name "g_pn_48"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_48.o"
// endseg
// 
// beginseg
//     name "g_pn_49"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_49.o"
// endseg
// 
// beginseg
//     name "g_pn_50"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_50.o"
// endseg
// 
// beginseg
//     name "g_pn_51"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_51.o"
// endseg
// 
// beginseg
//     name "g_pn_52"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_52.o"
// endseg
// 
// beginseg
//     name "g_pn_53"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_53.o"
// endseg
// 
// beginseg
//     name "g_pn_54"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_54.o"
// endseg
// 
// beginseg
//     name "g_pn_55"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_55.o"
// endseg
// 
// beginseg
//     name "g_pn_56"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_56.o"
// endseg
// 
// beginseg
//     name "g_pn_57"
//     compress
//     romalign 0x1000
//     include "build/baserom/g_pn_57.o"
// endseg

// beginseg
//     name "z_select_static"
//     compress
//     romalign 0x1000
//     include "build/baserom/z_select_static.o"
// endseg

beginseg
    name "nintendo_rogo_static"
    compress
    romalign 0x1000
    include "build/assets/textures/nintendo_rogo_static/nintendo_rogo_static.o"
    number 1
endseg

beginseg
    name "title_static"
    compress
    romalign 0x1000
    include "build/assets/textures/title_static/title_static.o"
    number 1
endseg

beginseg
    name "parameter_static"
    compress
    romalign 0x1000
    include "build/assets/textures/parameter_static/parameter_static.o"
    number 2
endseg

beginseg
    compress
    name "old_hf_minimap"
    romalign 0x1000
    include "build/assets/textures/minimaps/old_hf_minimap.o"
    number 11
endseg

beginseg
    compress
    name "hf_minimap"
    romalign 0x1000
    include "build/assets/textures/minimaps/hf_minimap.o"
    number 11
endseg

beginseg
    compress
    name "kf_minimap"
    romalign 0x1000
    include "build/assets/textures/minimaps/kf_minimap.o"
    number 11
endseg

beginseg
    compress
    name "dmt_minimap"
    romalign 0x1000
    include "build/assets/textures/minimaps/dmt_minimap.o"
    number 11
endseg

beginseg
    compress
    name "poe_race_b1_minimap"
    romalign 0x1000
    include "build/assets/textures/minimaps/poe_race_b1_minimap.o"
    number 11
endseg

beginseg
    compress
    name "poe_race_f1_minimap"
    romalign 0x1000
    include "build/assets/textures/minimaps/poe_race_f1_minimap.o"
    number 11
endseg

beginseg
    compress
    name "poe_race_f2_minimap"
    romalign 0x1000
    include "build/assets/textures/minimaps/poe_race_f2_minimap.o"
    number 11
endseg

beginseg
    compress
    name "deku_tree_b1_minimap"
    romalign 0x1000
    include "build/assets/textures/minimaps/deku_tree_b1_minimap.o"
    number 11
endseg

beginseg
    compress
    name "deku_tree_f1_minimap"
    romalign 0x1000
    include "build/assets/textures/minimaps/deku_tree_f1_minimap.o"
    number 11
endseg

beginseg
    compress
    name "deku_tree_f2_minimap"
    romalign 0x1000
    include "build/assets/textures/minimaps/deku_tree_f2_minimap.o"
    number 11
endseg

beginseg
    compress
    name "deku_tree_f3_minimap"
    romalign 0x1000
    include "build/assets/textures/minimaps/deku_tree_f3_minimap.o"
    number 11
endseg

beginseg
    compress
    name "deku_tree_f4_minimap"
    romalign 0x1000
    include "build/assets/textures/minimaps/deku_tree_f4_minimap.o"
    number 11
endseg

beginseg
    compress
    name "deku_tree_f5_minimap"
    romalign 0x1000
    include "build/assets/textures/minimaps/deku_tree_f5_minimap.o"
    number 11
endseg

beginseg
    compress
    name "deku_tree_f6_minimap"
    romalign 0x1000
    include "build/assets/textures/minimaps/deku_tree_f6_minimap.o"
    number 11
endseg

beginseg
    compress
    name "dodongos_cavern_b1_minimap"
    romalign 0x1000
    include "build/assets/textures/minimaps/dodongos_cavern_b1_minimap.o"
    number 11
endseg

beginseg
    compress
    name "dodongos_cavern_f1_minimap"
    romalign 0x1000
    include "build/assets/textures/minimaps/dodongos_cavern_f1_minimap.o"
    number 11
endseg

beginseg
    compress
    name "dodongos_cavern_f2_minimap"
    romalign 0x1000
    include "build/assets/textures/minimaps/dodongos_cavern_f2_minimap.o"
    number 11
endseg

beginseg
    name "disclaimer_assets"
    // compress
    romalign 0x1000
    include "build/assets/textures/disclaimer_gamestate_assets/disclaimer_assets.o"
    number 1
endseg

beginseg
    name "vr_fine0_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_fine0_static.o"
endseg

beginseg
    name "vr_fine0_pal_static"
    romalign 0x1000
    include "build/baserom/vr_fine0_pal_static.o"
endseg

beginseg
    name "vr_fine1_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_fine1_static.o"
endseg

beginseg
    name "vr_fine1_pal_static"
    romalign 0x1000
    include "build/baserom/vr_fine1_pal_static.o"
endseg

beginseg
    name "vr_fine2_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_fine2_static.o"
endseg

beginseg
    name "vr_fine2_pal_static"
    romalign 0x1000
    include "build/baserom/vr_fine2_pal_static.o"
endseg

beginseg
    name "vr_fine3_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_fine3_static.o"
endseg

beginseg
    name "vr_fine3_pal_static"
    romalign 0x1000
    include "build/baserom/vr_fine3_pal_static.o"
endseg

beginseg
    name "vr_cloud0_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_cloud0_static.o"
endseg

beginseg
    name "vr_cloud0_pal_static"
    romalign 0x1000
    include "build/baserom/vr_cloud0_pal_static.o"
endseg

beginseg
    name "vr_cloud1_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_cloud1_static.o"
endseg

beginseg
    name "vr_cloud1_pal_static"
    romalign 0x1000
    include "build/baserom/vr_cloud1_pal_static.o"
endseg

beginseg
    name "vr_cloud2_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_cloud2_static.o"
endseg

beginseg
    name "vr_cloud2_pal_static"
    romalign 0x1000
    include "build/baserom/vr_cloud2_pal_static.o"
endseg

beginseg
    name "vr_cloud3_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_cloud3_static.o"
endseg

beginseg
    name "vr_cloud3_pal_static"
    romalign 0x1000
    include "build/baserom/vr_cloud3_pal_static.o"
endseg

beginseg
    name "vr_holy0_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_holy0_static.o"
endseg

beginseg
    name "vr_holy0_pal_static"
    romalign 0x1000
    include "build/baserom/vr_holy0_pal_static.o"
endseg

beginseg
    name "vr_holy1_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_holy1_static.o"
endseg

beginseg
    name "vr_holy1_pal_static"
    romalign 0x1000
    include "build/baserom/vr_holy1_pal_static.o"
endseg

beginseg
    name "vr_MDVR_static"
    compress
    romalign 0x1000
    // include "build/baserom/vr_MDVR_static.o"
    include "build/baserom/vr_marketday_beta.o"
endseg

beginseg
    name "vr_MDVR_pal_static"
    romalign 0x1000
    // include "build/baserom/vr_MDVR_pal_static.o"
    include "build/baserom/vr_marketday_beta_pal.o"
endseg

beginseg
    name "vr_MNVR_static"
    compress
    romalign 0x1000
    // include "build/baserom/vr_MNVR_static.o"
    include "build/baserom/vr_ISVR_beta.o"
endseg

beginseg
    name "vr_MNVR_pal_static"
    romalign 0x1000
    // include "build/baserom/vr_MNVR_pal_static.o"
    include "build/baserom/vr_ISVR_beta_pal.o"
endseg

beginseg
    name "vr_RUVR_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_CHVR_div8_idx.o"
endseg

beginseg
    name "vr_RUVR_pal_static"
    romalign 0x1000
    include "build/baserom/vr_CHVR_pal.o"
endseg

beginseg
    name "vr_LHVR_static"
    compress
    romalign 0x1000
    // include "build/baserom/vr_LHVR_static.o"
    include "build/baserom/vr_Linkhouse_beta.o"
endseg

beginseg
    name "vr_LHVR_pal_static"
    romalign 0x1000
    // include "build/baserom/vr_LHVR_pal_static.o"
    include "build/baserom/vr_Linkhouse_pal_beta.o"
endseg

beginseg
    name "vr_KHVR_static"
    compress
    romalign 0x1000
    // include "build/baserom/vr_KHVR_static.o"
    include "build/baserom/vr_kokirihouse_beta.o"
endseg

beginseg
    name "vr_KHVR_pal_static"
    romalign 0x1000
    // include "build/baserom/vr_KHVR_pal_static.o"
    include "build/baserom/vr_kokirihouse_beta_pal.o"
endseg

beginseg
    name "vr_K3VR_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_K3VR_static.o"
endseg

beginseg
    name "vr_K3VR_pal_static"
    romalign 0x1000
    include "build/baserom/vr_K3VR_pal_static.o"
endseg

beginseg
    name "vr_K4VR_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_K4VR_static.o"
endseg

beginseg
    name "vr_K4VR_pal_static"
    romalign 0x1000
    include "build/baserom/vr_K4VR_pal_static.o"
endseg

beginseg
    name "vr_K5VR_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_K5VR_static.o"
endseg

beginseg
    name "vr_K5VR_pal_static"
    romalign 0x1000
    include "build/baserom/vr_K5VR_pal_static.o"
endseg

beginseg
    name "vr_SP1a_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_SP1a_static.o"
endseg

beginseg
    name "vr_SP1a_pal_static"
    romalign 0x1000
    include "build/baserom/vr_SP1a_pal_static.o"
endseg

beginseg
    name "vr_MLVR_static"
    compress
    romalign 0x1000
    // include "build/baserom/vr_MLVR_static.o"
    include "build/baserom/vr_kokirishop_beta.o"
endseg

beginseg
    name "vr_MLVR_pal_static"
    romalign 0x1000
    // include "build/baserom/vr_MLVR_pal_static.o"
    include "build/baserom/vr_kokirishop_beta_pal.o"
endseg

beginseg
    name "vr_KKRVR_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_KKRVR_static.o"
endseg

beginseg
    name "vr_KKRVR_pal_static"
    romalign 0x1000
    include "build/baserom/vr_KKRVR_pal_static.o"
endseg

beginseg
    name "vr_KR3VR_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_KR3VR_static.o"
endseg

beginseg
    name "vr_KR3VR_pal_static"
    romalign 0x1000
    include "build/baserom/vr_KR3VR_pal_static.o"
endseg

beginseg
    name "vr_IPVR_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_IPVR_static.o"
endseg

beginseg
    name "vr_IPVR_pal_static"
    romalign 0x1000
    include "build/baserom/vr_IPVR_pal_static.o"
endseg

beginseg
    name "vr_KSVR_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_KSVR_static.o"
endseg

beginseg
    name "vr_KSVR_pal_static"
    romalign 0x1000
    include "build/baserom/vr_KSVR_pal_static.o"
endseg

beginseg
    name "vr_GLVR_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_GLVR_static.o"
endseg

beginseg
    name "vr_GLVR_pal_static"
    romalign 0x1000
    include "build/baserom/vr_GLVR_pal_static.o"
endseg

beginseg
    name "vr_ZRVR_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_ZRVR_static.o"
endseg

beginseg
    name "vr_ZRVR_pal_static"
    romalign 0x1000
    include "build/baserom/vr_ZRVR_pal_static.o"
endseg

beginseg
    name "vr_DGVR_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_DGVR_static.o"
endseg

beginseg
    name "vr_DGVR_pal_static"
    romalign 0x1000
    include "build/baserom/vr_DGVR_pal_static.o"
endseg

beginseg
    name "vr_ALVR_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_ALVR_static.o"
endseg

beginseg
    name "vr_ALVR_pal_static"
    romalign 0x1000
    include "build/baserom/vr_ALVR_pal_static.o"
endseg

beginseg
    name "vr_NSVR_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_NSVR_static.o"
endseg

beginseg
    name "vr_NSVR_pal_static"
    romalign 0x1000
    include "build/baserom/vr_NSVR_pal_static.o"
endseg

beginseg
    name "vr_LBVR_static"
    compress
    romalign 0x1000
    // include "build/baserom/vr_LBVR_static.o"
    include "build/baserom/vr_HyruleCastleGardenBeta.o"
endseg

beginseg
    name "vr_LBVR_pal_static"
    romalign 0x1000
    // include "build/baserom/vr_LBVR_pal_static.o"
    include "build/baserom/vr_HyruleCastleGardenBeta_pal.o"
endseg

beginseg
    name "vr_TTVR_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_TTVR_static.o"
endseg

beginseg
    name "vr_TTVR_pal_static"
    romalign 0x1000
    include "build/baserom/vr_TTVR_pal_static.o"
endseg

beginseg
    name "vr_FCVR_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_FCVR_static.o"
endseg

beginseg
    name "vr_FCVR_pal_static"
    romalign 0x1000
    include "build/baserom/vr_FCVR_pal_static.o"
endseg

beginseg
    name "vr_woods_static"
    compress
    romalign 0x1000
    include "build/baserom/vr_woods_static.o"
endseg

beginseg
    name "vr_woods_pal_static"
    romalign 0x1000
    include "build/baserom/vr_woods_pal_static.o"
endseg

beginseg
    name "elf_message_field"
    compress
    romalign 0x1000
    include "build/baserom/elf_message_field.o"
endseg

beginseg
    name "elf_message_ydan"
    compress
    romalign 0x1000
    include "build/baserom/elf_message_ydan.o"
endseg

beginseg
    name "deku_tree_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/deku_tree/deku_tree_room_00.o"
    number 3
endseg

beginseg
    name "deku_tree_room_01"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/deku_tree/deku_tree_room_01.o"
    number 3
endseg

beginseg
    name "deku_tree_room_02"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/deku_tree/deku_tree_room_02.o"
    number 3
endseg

beginseg
    name "deku_tree_room_03"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/deku_tree/deku_tree_room_03.o"
    number 3
endseg

beginseg
    name "deku_tree_room_04"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/deku_tree/deku_tree_room_04.o"
    number 3
endseg

beginseg
    name "deku_tree_room_05"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/deku_tree/deku_tree_room_05.o"
    number 3
endseg

beginseg
    name "deku_tree_room_06"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/deku_tree/deku_tree_room_06.o"
    number 3
endseg

beginseg
    name "deku_tree_room_07"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/deku_tree/deku_tree_room_07.o"
    number 3
endseg

beginseg
    name "deku_tree_room_08"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/deku_tree/deku_tree_room_08.o"
    number 3
endseg

beginseg
    name "deku_tree_room_09"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/deku_tree/deku_tree_room_09.o"
    number 3
endseg

beginseg
    name "deku_tree_room_10"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/deku_tree/deku_tree_room_10.o"
    number 3
endseg

beginseg
    name "deku_tree_room_11"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/deku_tree/deku_tree_room_11.o"
    number 3
endseg

beginseg
    name "deku_tree_room_12"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/deku_tree/deku_tree_room_12.o"
    number 3
endseg

beginseg
    name "deku_tree_room_13"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/deku_tree/deku_tree_room_13.o"
    number 3
endseg

beginseg
    name "deku_tree_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/deku_tree/deku_tree_scene.o"
    number 2
endseg

beginseg
    name "dodongos_cavern_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/dodongos_cavern/dodongos_cavern_room_00.o"
    number 3
endseg

beginseg
    name "dodongos_cavern_room_01"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/dodongos_cavern/dodongos_cavern_room_01.o"
    number 3
endseg

beginseg
    name "dodongos_cavern_room_02"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/dodongos_cavern/dodongos_cavern_room_02.o"
    number 3
endseg

beginseg
    name "dodongos_cavern_room_03"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/dodongos_cavern/dodongos_cavern_room_03.o"
    number 3
endseg

beginseg
    name "dodongos_cavern_room_04"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/dodongos_cavern/dodongos_cavern_room_04.o"
    number 3
endseg

beginseg
    name "dodongos_cavern_room_05"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/dodongos_cavern/dodongos_cavern_room_05.o"
    number 3
endseg

beginseg
    name "dodongos_cavern_room_06"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/dodongos_cavern/dodongos_cavern_room_06.o"
    number 3
endseg

beginseg
    name "dodongos_cavern_room_07"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/dodongos_cavern/dodongos_cavern_room_07.o"
    number 3
endseg

beginseg
    name "dodongos_cavern_room_08"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/dodongos_cavern/dodongos_cavern_room_08.o"
    number 3
endseg

beginseg
    name "dodongos_cavern_room_09"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/dodongos_cavern/dodongos_cavern_room_09.o"
    number 3
endseg

beginseg
    name "dodongos_cavern_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/dodongos_cavern/dodongos_cavern_scene.o"
    number 2
endseg

beginseg
    name "fire_temple_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fire_temple/fire_temple_room_00.o"
    number 3
endseg

beginseg
    name "fire_temple_room_01"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fire_temple/fire_temple_room_01.o"
    number 3
endseg

beginseg
    name "fire_temple_room_02"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fire_temple/fire_temple_room_02.o"
    number 3
endseg

beginseg
    name "fire_temple_room_03"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fire_temple/fire_temple_room_03.o"
    number 3
endseg

beginseg
    name "fire_temple_room_04"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fire_temple/fire_temple_room_04.o"
    number 3
endseg

beginseg
    name "fire_temple_room_05"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fire_temple/fire_temple_room_05.o"
    number 3
endseg

beginseg
    name "fire_temple_room_06"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fire_temple/fire_temple_room_06.o"
    number 3
endseg

beginseg
    name "fire_temple_room_07"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fire_temple/fire_temple_room_07.o"
    number 3
endseg

beginseg
    name "fire_temple_room_08"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fire_temple/fire_temple_room_08.o"
    number 3
endseg

beginseg
    name "fire_temple_room_09"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fire_temple/fire_temple_room_09.o"
    number 3
endseg

beginseg
    name "fire_temple_room_10"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fire_temple/fire_temple_room_10.o"
    number 3
endseg

beginseg
    name "fire_temple_room_11"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fire_temple/fire_temple_room_11.o"
    number 3
endseg

beginseg
    name "fire_temple_room_12"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fire_temple/fire_temple_room_12.o"
    number 3
endseg

beginseg
    name "fire_temple_room_13"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fire_temple/fire_temple_room_13.o"
    number 3
endseg

beginseg
    name "fire_temple_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fire_temple/fire_temple_scene.o"
    number 2
endseg

beginseg
    name "forest_temple_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/forest_temple/forest_temple_room_00.o"
    number 3
endseg

beginseg
    name "forest_temple_room_01"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/forest_temple/forest_temple_room_01.o"
    number 3
endseg

beginseg
    name "forest_temple_room_02"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/forest_temple/forest_temple_room_02.o"
    number 3
endseg

beginseg
    name "forest_temple_room_03"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/forest_temple/forest_temple_room_03.o"
    number 3
endseg

beginseg
    name "forest_temple_room_04"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/forest_temple/forest_temple_room_04.o"
    number 3
endseg

beginseg
    name "forest_temple_room_05"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/forest_temple/forest_temple_room_05.o"
    number 3
endseg

beginseg
    name "forest_temple_room_06"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/forest_temple/forest_temple_room_06.o"
    number 3
endseg

beginseg
    name "forest_temple_room_07"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/forest_temple/forest_temple_room_07.o"
    number 3
endseg

beginseg
    name "forest_temple_room_08"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/forest_temple/forest_temple_room_08.o"
    number 3
endseg

beginseg
    name "forest_temple_room_09"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/forest_temple/forest_temple_room_09.o"
    number 3
endseg

beginseg
    name "forest_temple_room_10"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/forest_temple/forest_temple_room_10.o"
    number 3
endseg

beginseg
    name "forest_temple_room_11"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/forest_temple/forest_temple_room_11.o"
    number 3
endseg

beginseg
    name "forest_temple_room_12"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/forest_temple/forest_temple_room_12.o"
    number 3
endseg

beginseg
    name "forest_temple_room_13"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/forest_temple/forest_temple_room_13.o"
    number 3
endseg

beginseg
    name "forest_temple_room_14"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/forest_temple/forest_temple_room_14.o"
    number 3
endseg

beginseg
    name "forest_temple_room_15"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/forest_temple/forest_temple_room_15.o"
    number 3
endseg

beginseg
    name "forest_temple_room_16"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/forest_temple/forest_temple_room_16.o"
    number 3
endseg

beginseg
    name "forest_temple_room_17"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/forest_temple/forest_temple_room_17.o"
    number 3
endseg

beginseg
    name "forest_temple_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/forest_temple/forest_temple_scene.o"
    number 2
endseg

beginseg
    name "fstdan_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fstdan/fstdan_room_00.o"
    number 3
endseg

beginseg
    name "fstdan_room_01"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fstdan/fstdan_room_01.o"
    number 3
endseg

beginseg
    name "fstdan_room_02"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fstdan/fstdan_room_02.o"
    number 3
endseg

beginseg
    name "fstdan_room_03"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fstdan/fstdan_room_03.o"
    number 3
endseg

beginseg
    name "fstdan_room_04"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fstdan/fstdan_room_04.o"
    number 3
endseg

beginseg
    name "fstdan_room_05"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fstdan/fstdan_room_05.o"
    number 3
endseg

beginseg
    name "fstdan_room_06"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fstdan/fstdan_room_06.o"
    number 3
endseg

beginseg
    name "fstdan_room_07"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fstdan/fstdan_room_07.o"
    number 3
endseg

beginseg
    name "fstdan_room_08"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fstdan/fstdan_room_08.o"
    number 3
endseg

beginseg
    name "fstdan_room_09"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fstdan/fstdan_room_09.o"
    number 3
endseg

beginseg
    name "fstdan_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/fstdan/fstdan_scene.o"
    number 2
endseg

beginseg
    name "poe_race_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/poe_race/poe_race_room_00.o"
    number 3
endseg

beginseg
    name "poe_race_room_01"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/poe_race/poe_race_room_01.o"
    number 3
endseg

beginseg
    name "poe_race_room_02"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/poe_race/poe_race_room_02.o"
    number 3
endseg

beginseg
    name "poe_race_room_03"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/poe_race/poe_race_room_03.o"
    number 3
endseg

beginseg
    name "poe_race_room_04"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/poe_race/poe_race_room_04.o"
    number 3
endseg

beginseg
    name "poe_race_room_05"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/poe_race/poe_race_room_05.o"
    number 3
endseg

beginseg
    name "poe_race_room_06"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/poe_race/poe_race_room_06.o"
    number 3
endseg

beginseg
    name "poe_race_room_07"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/poe_race/poe_race_room_07.o"
    number 3
endseg

beginseg
    name "poe_race_room_08"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/poe_race/poe_race_room_08.o"
    number 3
endseg

beginseg
    name "poe_race_room_09"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/poe_race/poe_race_room_09.o"
    number 3
endseg

beginseg
    name "poe_race_room_10"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/poe_race/poe_race_room_10.o"
    number 3
endseg

beginseg
    name "poe_race_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/poe_race/poe_race_scene.o"
    number 2
endseg

beginseg
    name "unfinished_deku_tree_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/unfinished_deku_tree/unfinished_deku_tree_room_00.o"
    number 3
endseg

beginseg
    name "unfinished_deku_tree_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/unfinished_deku_tree/unfinished_deku_tree_scene.o"
    number 2
endseg

beginseg
    name "unfinished_fire_temple_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/unfinished_fire_temple/unfinished_fire_temple_room_00.o"
    number 3
endseg

beginseg
    name "unfinished_fire_temple_room_01"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/unfinished_fire_temple/unfinished_fire_temple_room_01.o"
    number 3
endseg

beginseg
    name "unfinished_fire_temple_room_02"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/unfinished_fire_temple/unfinished_fire_temple_room_02.o"
    number 3
endseg

beginseg
    name "unfinished_fire_temple_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/unfinished_fire_temple/unfinished_fire_temple_scene.o"
    number 2
endseg

beginseg
    name "unfinished_forest_temple_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/unfinished_forest_temple/unfinished_forest_temple_room_00.o"
    number 3
endseg

beginseg
    name "unfinished_forest_temple_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/unfinished_forest_temple/unfinished_forest_temple_scene.o"
    number 2
endseg

beginseg
    name "unfinished_gohma_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/unfinished_gohma/unfinished_gohma_room_00.o"
    number 3
endseg

beginseg
    name "unfinished_gohma_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/unfinished_gohma/unfinished_gohma_scene.o"
    number 2
endseg

beginseg
    name "water_temple_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/water_temple/water_temple_room_00.o"
    number 3
endseg

beginseg
    name "water_temple_room_01"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/water_temple/water_temple_room_01.o"
    number 3
endseg

beginseg
    name "water_temple_room_02"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/water_temple/water_temple_room_02.o"
    number 3
endseg

beginseg
    name "water_temple_room_03"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/water_temple/water_temple_room_03.o"
    number 3
endseg

beginseg
    name "water_temple_room_04"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/water_temple/water_temple_room_04.o"
    number 3
endseg

beginseg
    name "water_temple_room_05"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/water_temple/water_temple_room_05.o"
    number 3
endseg

beginseg
    name "water_temple_room_06"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/water_temple/water_temple_room_06.o"
    number 3
endseg

beginseg
    name "water_temple_room_07"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/water_temple/water_temple_room_07.o"
    number 3
endseg

beginseg
    name "water_temple_room_08"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/water_temple/water_temple_room_08.o"
    number 3
endseg

beginseg
    name "water_temple_room_09"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/water_temple/water_temple_room_09.o"
    number 3
endseg

beginseg
    name "water_temple_room_10"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/water_temple/water_temple_room_10.o"
    number 3
endseg

beginseg
    name "water_temple_room_11"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/water_temple/water_temple_room_11.o"
    number 3
endseg

beginseg
    name "water_temple_room_12"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/water_temple/water_temple_room_12.o"
    number 3
endseg

beginseg
    name "water_temple_room_13"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/water_temple/water_temple_room_13.o"
    number 3
endseg

beginseg
    name "water_temple_room_14"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/water_temple/water_temple_room_14.o"
    number 3
endseg

beginseg
    name "water_temple_room_15"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/water_temple/water_temple_room_15.o"
    number 3
endseg

beginseg
    name "water_temple_room_16"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/water_temple/water_temple_room_16.o"
    number 3
endseg

beginseg
    name "water_temple_room_17"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/water_temple/water_temple_room_17.o"
    number 3
endseg

beginseg
    name "water_temple_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/dungeons/water_temple/water_temple_scene.o"
    number 2
endseg

beginseg
    name "i_shop_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/interiors/i_shop/i_shop_room_00.o"
    number 3
endseg

beginseg
    name "i_shop_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/interiors/i_shop/i_shop_scene.o"
    number 2
endseg

beginseg
    name "pr_kokiri_house_1_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/interiors/pr_kokiri_house_1/pr_kokiri_house_1_room_00.o"
    number 3
endseg

beginseg
    name "pr_kokiri_house_1_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/interiors/pr_kokiri_house_1/pr_kokiri_house_1_scene.o"
    number 2
endseg

beginseg
    name "pr_kokiri_house_2_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/interiors/pr_kokiri_house_2/pr_kokiri_house_2_room_00.o"
    number 3
endseg

beginseg
    name "pr_kokiri_house_2_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/interiors/pr_kokiri_house_2/pr_kokiri_house_2_scene.o"
    number 2
endseg

beginseg
    name "pr_links_house_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/interiors/pr_links_house/pr_links_house_room_00.o"
    number 3
endseg

beginseg
    name "pr_links_house_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/interiors/pr_links_house/pr_links_house_scene.o"
    number 2
endseg

beginseg
    name "temple_of_time_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/interiors/temple_of_time/temple_of_time_room_00.o"
    number 3
endseg

beginseg
    name "temple_of_time_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/interiors/temple_of_time/temple_of_time_scene.o"
    number 2
endseg

beginseg
    name "chamber_of_sages_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/misc/chamber_of_sages/chamber_of_sages_room_00.o"
    number 3
endseg

beginseg
    name "chamber_of_sages_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/misc/chamber_of_sages/chamber_of_sages_scene.o"
    number 2
endseg

beginseg
    name "fairy_fountain_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/misc/fairy_fountain/fairy_fountain_room_00.o"
    number 3
endseg

beginseg
    name "fairy_fountain_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/misc/fairy_fountain/fairy_fountain_scene.o"
    number 2
endseg

beginseg
    name "grottos_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/misc/grottos/grottos_room_00.o"
    number 3
endseg

beginseg
    name "grottos_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/misc/grottos/grottos_scene.o"
    number 2
endseg

beginseg
    name "jabu_test_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/misc/jabu_test/jabu_test_room_00.o"
    number 3
endseg

beginseg
    name "jabu_test_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/misc/jabu_test/jabu_test_scene.o"
    number 2
endseg

beginseg
    name "unk_0x16_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/misc/unk_0x16/unk_0x16_room_00.o"
    number 3
endseg

beginseg
    name "unk_0x16_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/misc/unk_0x16/unk_0x16_scene.o"
    number 2
endseg

beginseg
    name "unk_0x17_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/misc/unk_0x17/unk_0x17_room_00.o"
    number 3
endseg

beginseg
    name "unk_0x17_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/misc/unk_0x17/unk_0x17_scene.o"
    number 2
endseg

beginseg
    name "unk_0x2C_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/misc/unk_0x2C/unk_0x2C_room_00.o"
    number 3
endseg

beginseg
    name "unk_0x2C_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/misc/unk_0x2C/unk_0x2C_scene.o"
    number 2
endseg

beginseg
    name "unk_0x2E_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/misc/unk_0x2E/unk_0x2E_room_00.o"
    number 3
endseg

beginseg
    name "unk_0x2E_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/misc/unk_0x2E/unk_0x2E_scene.o"
    number 2
endseg

beginseg
    name "unk_0x33_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/misc/unk_0x33/unk_0x33_room_00.o"
    number 3
endseg

beginseg
    name "unk_0x33_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/misc/unk_0x33/unk_0x33_scene.o"
    number 2
endseg

beginseg
    name "archery_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/archery/archery_room_00.o"
    number 3
endseg

beginseg
    name "archery_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/archery/archery_scene.o"
    number 2
endseg

beginseg
    name "death_mountain_crater_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/death_mountain_crater/death_mountain_crater_room_00.o"
    number 3
endseg

beginseg
    name "death_mountain_crater_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/death_mountain_crater/death_mountain_crater_scene.o"
    number 2
endseg

beginseg
    name "death_mountain_trail_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/death_mountain_trail/death_mountain_trail_room_00.o"
    number 3
endseg

beginseg
    name "death_mountain_trail_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/death_mountain_trail/death_mountain_trail_scene.o"
    number 2
endseg

beginseg
    name "gerudo_valley_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/gerudo_valley/gerudo_valley_room_00.o"
    number 3
endseg

beginseg
    name "gerudo_valley_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/gerudo_valley/gerudo_valley_scene.o"
    number 2
endseg

beginseg
    name "hyrule_castle_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/hyrule_castle/hyrule_castle_room_00.o"
    number 3
endseg

beginseg
    name "hyrule_castle_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/hyrule_castle/hyrule_castle_scene.o"
    number 2
endseg

beginseg
    name "hyrule_field_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/hyrule_field/hyrule_field_room_00.o"
    number 3
endseg

beginseg
    name "hyrule_field_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/hyrule_field/hyrule_field_scene.o"
    number 2
endseg

beginseg
    name "kokiri_forest_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/kokiri_forest/kokiri_forest_room_00.o"
    number 3
endseg

beginseg
    name "kokiri_forest_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/kokiri_forest/kokiri_forest_scene.o"
    number 2
endseg

beginseg
    name "old_graveyard_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/old_graveyard/old_graveyard_room_00.o"
    number 3
endseg

beginseg
    name "old_graveyard_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/old_graveyard/old_graveyard_scene.o"
    number 2
endseg

beginseg
    name "old_hyrule_field_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/old_hyrule_field/old_hyrule_field_room_00.o"
    number 3
endseg

beginseg
    name "old_hyrule_field_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/old_hyrule_field/old_hyrule_field_scene.o"
    number 2
endseg

beginseg
    name "old_kakariko_village_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/old_kakariko_village/old_kakariko_village_room_00.o"
    number 3
endseg

beginseg
    name "old_kakariko_village_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/old_kakariko_village/old_kakariko_village_scene.o"
    number 2
endseg

beginseg
    name "old_lake_hylia_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/old_lake_hylia/old_lake_hylia_room_00.o"
    number 3
endseg

beginseg
    name "old_lake_hylia_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/old_lake_hylia/old_lake_hylia_scene.o"
    number 2
endseg

beginseg
    name "old_lost_woods_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/old_lost_woods/old_lost_woods_room_00.o"
    number 3
endseg

beginseg
    name "old_lost_woods_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/old_lost_woods/old_lost_woods_scene.o"
    number 2
endseg

beginseg
    name "old_pond_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/old_pond/old_pond_room_00.o"
    number 3
endseg

beginseg
    name "old_pond_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/old_pond/old_pond_scene.o"
    number 2
endseg

beginseg
    name "old_sacred_forest_meadow_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/old_sacred_forest_meadow/old_sacred_forest_meadow_room_00.o"
    number 3
endseg

beginseg
    name "old_sacred_forest_meadow_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/old_sacred_forest_meadow/old_sacred_forest_meadow_scene.o"
    number 2
endseg

beginseg
    name "old_zoras_river_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/old_zoras_river/old_zoras_river_room_00.o"
    number 3
endseg

beginseg
    name "old_zoras_river_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/old_zoras_river/old_zoras_river_scene.o"
    number 2
endseg

beginseg
    name "pr_behind_tot_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/pr_behind_tot/pr_behind_tot_room_00.o"
    number 3
endseg

beginseg
    name "pr_behind_tot_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/pr_behind_tot/pr_behind_tot_scene.o"
    number 2
endseg

beginseg
    name "pr_market_1_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/pr_market_1/pr_market_1_room_00.o"
    number 3
endseg

beginseg
    name "pr_market_1_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/pr_market_1/pr_market_1_scene.o"
    number 2
endseg

beginseg
    name "pr_market_2_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/pr_market_2/pr_market_2_room_00.o"
    number 3
endseg

beginseg
    name "pr_market_2_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/pr_market_2/pr_market_2_scene.o"
    number 2
endseg

beginseg
    name "pr_outside_tot_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/pr_outside_tot/pr_outside_tot_room_00.o"
    number 3
endseg

beginseg
    name "pr_outside_tot_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/overworld/pr_outside_tot/pr_outside_tot_scene.o"
    number 2
endseg

beginseg
    name "lod_test_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/test_rooms/lod_test/lod_test_room_00.o"
    number 3
endseg

beginseg
    name "lod_test_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/test_rooms/lod_test/lod_test_scene.o"
    number 2
endseg

beginseg
    name "old_depth_test_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/test_rooms/old_depth_test/old_depth_test_room_00.o"
    number 3
endseg

beginseg
    name "old_depth_test_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/test_rooms/old_depth_test/old_depth_test_scene.o"
    number 2
endseg

beginseg
    name "old_sasatest_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/test_rooms/old_sasatest/old_sasatest_room_00.o"
    number 3
endseg

beginseg
    name "old_sasatest_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/test_rooms/old_sasatest/old_sasatest_scene.o"
    number 2
endseg

beginseg
    name "old_sutaru_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/test_rooms/old_sutaru/old_sutaru_room_00.o"
    number 3
endseg

beginseg
    name "old_sutaru_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/test_rooms/old_sutaru/old_sutaru_scene.o"
    number 2
endseg

beginseg
    name "old_testroom_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/test_rooms/old_testroom/old_testroom_room_00.o"
    number 3
endseg

beginseg
    name "old_testroom_room_01"
    compress
    romalign 0x1000
    include "build/assets/scenes/test_rooms/old_testroom/old_testroom_room_01.o"
    number 3
endseg

beginseg
    name "old_testroom_room_02"
    compress
    romalign 0x1000
    include "build/assets/scenes/test_rooms/old_testroom/old_testroom_room_02.o"
    number 3
endseg

beginseg
    name "old_testroom_room_03"
    compress
    romalign 0x1000
    include "build/assets/scenes/test_rooms/old_testroom/old_testroom_room_03.o"
    number 3
endseg

beginseg
    name "old_testroom_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/test_rooms/old_testroom/old_testroom_scene.o"
    number 2
endseg

beginseg
    name "syotes2_old_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/test_rooms/syotes2_old/syotes2_old_room_00.o"
    number 3
endseg

beginseg
    name "syotes2_old_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/test_rooms/syotes2_old/syotes2_old_scene.o"
    number 2
endseg

beginseg
    name "syotes_old_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/test_rooms/syotes_old/syotes_old_room_00.o"
    number 3
endseg

beginseg
    name "syotes_old_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/test_rooms/syotes_old/syotes_old_scene.o"
    number 2
endseg

beginseg
    name "test_map_scene"
    compress
    romalign 0x1000
    include "build/assets/scenes/test_rooms/test_map/test_map_scene.o"
    number 2
endseg

beginseg
    name "test_map_room_00"
    compress
    romalign 0x1000
    include "build/assets/scenes/test_rooms/test_map/test_map_room_00.o"
    number 3
endseg

beginseg
    name "Spot04_OLD_SCENE"
    compress
    romalign 0x1000
    include "build/assets/scenes/Spot04_OLD/Spot04_OLD_SCENE.o"
    include "build/assets/scenes/Spot04_OLD/spot04_BGDataInfo.o"
    number 2
endseg

beginseg
    name "Spot04_OLD_ROOM0"
    compress
    romalign 0x1000
    include "build/assets/scenes/Spot04_OLD/Spot04_OLD_ROOM0.o"
    number 3
endseg
