/* ANALYSIS OUTPUT, not original source. Function main at 002013b0 */

/* WARNING: Removing unreachable block (ram,0x0020172c) */
/* boss/boss.c */

undefined8 main(int param_1,undefined1 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined1 auStack_e0 [4];
  code *pcStack_dc;
  undefined4 *puStack_d8;
  undefined4 uStack_d4;
  undefined4 *puStack_d0;
  undefined4 uStack_cc;
  uint uStack_b0;
  
  iVar9 = 0x4dc;
  uStack_b0 = (uint)(param_1 < 2);
  __main();
  puVar14 = (undefined4 *)(spanish + 4);
  puVar13 = (undefined4 *)(german + 4);
  puVar12 = (undefined4 *)(italian + 4);
  puVar11 = (undefined4 *)(french + 4);
  puVar10 = (undefined4 *)(english + 4);
  uVar2 = english._4_4_;
  while( true ) {
    iVar9 = iVar9 + -1;
    puVar10 = puVar10 + 1;
    checkstring(uVar2);
    uVar2 = *puVar11;
    puVar11 = puVar11 + 1;
    checkstring(uVar2);
    uVar2 = *puVar12;
    puVar12 = puVar12 + 1;
    checkstring(uVar2);
    uVar2 = *puVar13;
    puVar13 = puVar13 + 1;
    checkstring(uVar2);
    uVar2 = *puVar14;
    puVar14 = puVar14 + 1;
    checkstring(uVar2);
    if (iVar9 < 0) break;
    uVar2 = *puVar10;
  }
  if (uStack_b0 != 0) {
    param_1 = 3;
    param_2 = defaultargs;
  }
  myargc = param_1;
  myargv = param_2;
  bossMakeAll();
  uVar4 = rtcGetTime();
  newrndseed(uVar4);
  memset(&bossgameparms,0,0x70);
  DAT_01fac5c0 = 0x68;
  DAT_01fac5c8 = 3;
  DAT_01fac5cc = 1;
  DAT_01fac5d0 = 2;
  bossgameparms = 1;
  DAT_01fac584 = 1;
  DAT_01fac5d8 = 0;
  DAT_01fac5dc = 0;
  if (**(char **)(param_2 + 4) != '-') {
    DAT_01fac5c0 = lvGetNumFromName(*(char **)(param_2 + 4));
  }
  if ((2 < param_1) && (**(char **)(param_2 + 8) != '-')) {
    bossgameparms = atoi(*(char **)(param_2 + 8));
    DAT_01fac584 = bossgameparms;
  }
  if (3 < bossgameparms - 1) {
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  bosscammode = 0;
  bosscampropnum = 0;
  DAT_01fac588 = 0;
  if ((3 < param_1) && (**(char **)(param_2 + 0xc) != '-')) {
    DAT_01fac588 = atoi(*(char **)(param_2 + 0xc));
  }
  lVar5 = bossCheckParm(0x3adb80);
  if (lVar5 != 0) {
    pcVar3 = (char *)bossGetNextParm();
    DAT_01fac584 = atoi(pcVar3);
    ilinkConnect();
    newrndseed(0);
  }
  lVar5 = bossCheckParm(0x3838e8);
  if ((lVar5 == 0) || (lVar5 = bossIsNextParm(), lVar5 == 0)) goto LAB_0020166c;
  pcVar3 = (char *)bossGetNextParm();
  bosscampropnum = atoi(pcVar3);
  lVar5 = bossIsNextParm();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  pcVar3 = (char *)bossGetNextParm();
  cVar1 = *pcVar3;
  if (cVar1 == '1') {
LAB_0020165c:
    bosscammode = 6;
  }
  else {
    if (cVar1 < '2') {
      if (cVar1 != '0') goto LAB_0020166c;
    }
    else {
      if (cVar1 == 'b') goto LAB_0020165c;
      if (cVar1 != 'f') goto LAB_0020166c;
    }
    bosscammode = 4;
  }
LAB_0020166c:
  iVar9 = 0;
  uVar8 = bossgameparms;
  if (0 < DAT_01fac588) {
    do {
      if ((uVar8 & 1) == 0) {
        uVar7 = 0x36;
      }
      else {
        uVar7 = 8;
      }
      (&DAT_01fac595)[uVar8] = uVar7;
      if (uVar8 == 0) {
        DAT_01fac595 = 0x45;
      }
      iVar9 = iVar9 + 1;
      uVar8 = uVar8 + 1;
    } while (iVar9 < DAT_01fac588);
  }
  gameDeferedReset(0x1fac580);
  puVar10 = &cpustack;
  do {
    *puVar10 = 0x494e4954;
    puVar10 = puVar10 + 1;
  } while (puVar10 < &gsstack);
  puVar10 = &gsstack;
  do {
    *puVar10 = 0x494e4954;
    puVar10 = puVar10 + 1;
  } while (puVar10 < &dmalist2);
  pcStack_dc = cpuMain;
  puStack_d8 = &cpustack;
  uStack_d4 = 0x20000;
  uStack_cc = 2;
  puStack_d0 = &_gp;
  cpu_tid = CreateThread(auStack_e0);
  pcStack_dc = gsMain;
  puStack_d8 = &gsstack;
  uStack_d4 = 0x10000;
  uStack_cc = 1;
  puStack_d0 = &_gp;
  gs_tid = CreateThread(auStack_e0);
  StartThread(cpu_tid,0);
  StartThread(gs_tid,0);
  do {
    lVar5 = sceGsSyncV(0);
  } while (lVar5 == 0);
  EnableIntc(3);
  EnableIntc(0);
  uVar6 = sceGsGetIMR();
  sceGsPutIMR(uVar6 & 0xfffffffffffffeff);
  SleepThread();
  return 0;
}


