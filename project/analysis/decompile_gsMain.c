/* ANALYSIS OUTPUT, not original source. Function gsMain at 00200f20 */

/* boss/boss.c */

void gsMain(void)

{
  int iVar1;
  undefined8 uVar2;
  
  do {
    gsdone = 1;
    WaitSema(gsstart_sid);
    gsdone = 0;
    lastgfxstarttime = gfxstarttime;
    lastgfxendtime = gfxendtime;
    gfxstarttime = (float)timeGet();
    REG_RCNT0_MODE = 0x83;
    REG_RCNT0_COUNT = 0;
    *(int *)(&DAT_002f2c08 + curgsdmabuf * 0xc) = *(int *)(&DAT_002f2c08 + curgsdmabuf * 0xc) + 1;
    if (*(int *)(&DAT_002f2c08 + curgsdmabuf * 0xc) < 3) {
      if (*(int *)(&DAT_002f2c08 + curgsdmabuf * 0xc) == 1) {
        WaitSema(gsavail_sid);
        zbtestCopyZB();
        SignalSema(gsavail_sid);
        zbtestDoTest();
        zbtestAdvanceTestPtr();
      }
      uVar2 = SetAlarm(0xc48,0x200f10,*(undefined4 *)((int)&dmalists + curgsdmabuf * 4));
      alarm_activated = 0;
      WaitSema(gsavail_sid);
      FlushCache(0);
      sceDmaSend(dmaVif1,*(undefined4 *)((int)&dmalists + curgsdmabuf * 4));
      WaitSema(gsdone_sid);
      SignalSema(gsavail_sid);
      if (alarm_activated == 0) {
        ReleaseAlarm(uVar2);
      }
      else {
        scePrintf(0x3838d0);
        numdmafail = numdmafail + 1;
        REG_DMAC_ENABLEW = 0;
        REG_DMAC_1_VIF1_CHCR = 5;
        REG_VIF1_FBRST = 1;
        REG_GIF_CTRL = 1;
        REG_GS_CSR = 0x100;
        REG_DMAC_ENABLEW = 1;
      }
    }
    for (gfxendtime = (float)timeGet(); gfxendtime < gfxstarttime; gfxendtime = gfxendtime + 128.0)
    {
    }
    REG_RCNT1_MODE = 0x83;
    iVar1 = REG_RCNT1_COUNT;
    ucodecycles = iVar1 * 0x112492;
    if (cpudone != 0) {
      SignalSema(bufffree_sid);
    }
  } while( true );
}


