/* ANALYSIS OUTPUT, not original source. Function cpuMain at 00200c48 */

/* boss/boss.c */

void cpuMain(void)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  
  timeTickStart();
  do {
    if (restart == 0) {
      displayallfileops = 0;
      profileReset();
      memReset();
      gameReset();
      if ((firsttime_129 != 0) && (lvlevelnum != 0x68)) {
        animMake();
        firsttime_129 = 0;
      }
      lvResetBefore();
      lvPreload();
      preloadExec();
      soundPreload();
      bgPreloadTextures();
      preloadPass2Exec();
      displayallfileops = 1;
      lvResetAfter();
      lvLevelSetup();
      gameResetAfter();
    }
    else {
      displayallfileops = 1;
      profileRestart();
      memRestart();
      gameRestart();
      lvRestartBefore();
      lvRestartAfter();
      lvLevelSetup();
      gameResetAfter();
    }
    timeTickEnd();
    timeTickStart();
    lvfirstframe_130 = 6;
    if (gsdone == 0) {
      scePrintf(0x3838a0);
    }
    else {
      curcpudmabuf = 0;
      curgsdmabuf = 0;
      cpudone = 0;
    }
    lvend = 0;
    do {
      do {
        uVar2 = framenum;
        ucodetris = 0;
        bgtris = 0;
        bgcurtris = 0;
        (&dbinfo)[curcpudmabuf * 3] = 1;
        (&DAT_002f2c04)[curcpudmabuf * 3] = uVar2;
        *(undefined4 *)(&DAT_002f2c08 + curcpudmabuf * 0xc) = 0;
        bossMainLoop();
        uVar4 = (gfxtag & 0xfffffff) - (*(uint *)((int)&dmalists + curcpudmabuf * 4) & 0xfffffff) >>
                4;
        if ((int)maxdmalistlen < (int)uVar4) {
          maxdmalistlen = uVar4;
        }
        timeTickEnd();
        iVar1 = lvfirstframe_130;
        if (lvfirstframe_130 == 0) {
          (&dbinfo)[curcpudmabuf * 3] = 0;
        }
        curcpudmabuf = 1 - curcpudmabuf;
        cpudone = 1;
        if ((iVar1 != 0) ||
           (WaitSema(bufffree_sid), iVar1 = lvfirstframe_130, lvfirstframe_130 != 0)) {
          lvfirstframe_130 = iVar1 + -1;
        }
        while (lVar3 = ilinkOKToTick(), lVar3 == 0) {
          ilinkTick();
          WaitSema(bufffree_sid);
        }
        cpudone = 0;
        timeTickStart();
      } while (lvend == 0);
      cpudone = 0;
      dbinfo = 1;
      DAT_002f2c0c = 1;
      if (gsdone == 0) {
        scePrintf(0x3838b8);
      }
    } while (lvend == 0);
    profileEnd();
    gameEnd();
  } while( true );
}


