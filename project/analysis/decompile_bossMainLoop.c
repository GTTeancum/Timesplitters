/* ANALYSIS OUTPUT, not original source. Function bossMainLoop at 00200638 */

/* boss/boss.c */

void bossMainLoop(void)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  currentplayer = players;
  profileTick();
  debugmenuTick();
  windowSet(0,0,0x27f,0xdf);
  ilinkTick();
  iVar9 = 0;
  do {
    iVar8 = iVar9 + 1;
    joySetShock(iVar9,0,0);
    iVar9 = iVar8;
  } while (iVar8 < 4);
  uVar10 = 0;
  memdbTick();
  gameTick();
  lvTickBefore();
  if (0 < lvnumplayers) {
    iVar9 = 0;
    do {
      currentplayer = players + iVar9;
      if (*(int *)(currentplayer + 0x180) != 0) {
        lVar6 = camGetMode();
        if ((lVar6 == 2) || (lvlevelnum == 6)) {
          iVar8 = *(int *)(currentplayer + 0x180);
          uVar2 = *(uint *)(iVar8 + 0x10) | 0x1000000 << (uVar10 & 0x1f);
        }
        else {
          iVar8 = *(int *)(currentplayer + 0x180);
          uVar2 = *(uint *)(iVar8 + 0x10) & ~(0x1000000 << (uVar10 & 0x1f));
        }
        *(uint *)(iVar8 + 0x10) = uVar2;
      }
      uVar10 = uVar10 + 1;
      lvTickPlayer();
      iVar9 = iVar9 + 0x71c;
    } while ((int)uVar10 < lvnumplayers);
  }
  lvTickAfter();
  gfxtag = *(undefined2 **)((int)&dmalists + curcpudmabuf * 4);
  *(undefined1 *)((int)gfxtag + 3) = 0x30;
  *(undefined **)(gfxtag + 2) = &vif_0;
  *gfxtag = 0x3bd;
  gfxtag = gfxtag + 8;
  puVar3 = (undefined4 *)memdbAlloc(0x30);
  *(undefined1 *)((int)gfxtag + 3) = 0x30;
  *puVar3 = &DAT_01000404;
  puVar1 = gfxtag;
  *(undefined4 **)(gfxtag + 2) = puVar3;
  puVar3[1] = 0x6c028000;
  gfxtag = gfxtag + 8;
  puVar3[2] = 0x8001;
  puVar3[3] = 0x10000000;
  puVar3[4] = 0xe;
  *puVar1 = 3;
  puVar3[5] = 0;
  puVar3[6] = 1;
  puVar3[7] = 0;
  puVar3[8] = 0x46;
  puVar3[9] = 0;
  puVar3[0xb] = &DAT_11000000;
  puVar3[10] = 0x140007fc;
  dlSetClip(0,0,0x280,0xe0);
  dlSetZB(1);
  uVar7 = lvGetBgCol();
  dlClearFB(0,0,0x280,0xe0,uVar7);
  dlSetZB(3);
  iVar9 = ilinkGetStartLocalPlayerNum();
  while( true ) {
    iVar8 = ilinkGetStartLocalPlayerNum();
    iVar5 = ilinkGetNumLocalPlayers();
    if (iVar8 + iVar5 <= iVar9) break;
    currentplayer = players + iVar9 * 0x71c;
    windowSet(*(undefined4 *)(currentplayer + 4),*(undefined4 *)(currentplayer + 8),
              *(undefined4 *)(currentplayer + 0xc),*(undefined4 *)(currentplayer + 0x10));
    puVar4 = (undefined4 *)memdbAlloc(0x50);
    *(undefined1 *)((int)gfxtag + 3) = 0x30;
    *puVar4 = 0x6c048000;
    puVar1 = gfxtag;
    puVar3 = *(undefined4 **)(currentplayer + 0x6e0);
    *(undefined4 **)(gfxtag + 2) = puVar4;
    gfxtag = gfxtag + 8;
    puVar4[1] = *puVar3;
    *puVar1 = 5;
    puVar4[2] = puVar3[1];
    puVar4[3] = puVar3[2];
    puVar4[4] = puVar3[3];
    puVar4[5] = puVar3[4];
    puVar4[6] = puVar3[5];
    puVar4[7] = puVar3[6];
    puVar4[8] = puVar3[7];
    puVar4[9] = puVar3[8];
    puVar4[10] = puVar3[9];
    puVar4[0xb] = puVar3[10];
    puVar4[0xc] = puVar3[0xb];
    puVar4[0xd] = puVar3[0xc];
    puVar4[0xe] = puVar3[0xd];
    puVar4[0xf] = puVar3[0xe];
    puVar4[0x10] = puVar3[0xf];
    puVar4[0x11] = 0x1400079d;
    puVar4[0x12] = &DAT_11000000;
    puVar4[0x13] = 0;
    lvGfx();
    if (turtlecpu != 0) {
      bossTurtleCpu();
    }
    if (turtlegs != 0) {
      bossTurtleGs();
    }
    dlSetClip(0,0,0x27f,0xdf);
    iVar9 = iVar9 + 1;
    dlSetBlend(0);
    dlFillRectangle(*(int *)(currentplayer + 4) + -2,*(int *)(currentplayer + 8) + -1,
                    *(int *)(currentplayer + 0xc) + 1,*(int *)(currentplayer + 8),0x80);
    dlFillRectangle(*(int *)(currentplayer + 4) + -2,*(int *)(currentplayer + 0x10),
                    *(int *)(currentplayer + 0xc) + 1,*(int *)(currentplayer + 0x10) + 1,0x80);
    dlFillRectangle(*(int *)(currentplayer + 4) + -2,*(int *)(currentplayer + 8) + -1,
                    *(int *)(currentplayer + 4) + 1,*(int *)(currentplayer + 0x10) + 1,0x80);
    dlFillRectangle(*(int *)(currentplayer + 0xc) + -1,*(int *)(currentplayer + 8) + -1,
                    *(int *)(currentplayer + 0xc) + 2,*(int *)(currentplayer + 0x10) + 1,0x80);
  }
  lVar6 = ilinkGetNumLocalPlayers();
  if ((lVar6 == 3) && (lVar6 = lvGetBgCol(), iVar9 = players, lVar6 != 0x80)) {
    uVar7 = dlSetZB(1);
    *(undefined4 *)(iVar9 + 0x1554) = 3;
    playerSetWindow(iVar9 + 0x1554);
    windowSet(*(undefined4 *)(iVar9 + 0x1558),*(undefined4 *)(iVar9 + 0x155c),
              *(undefined4 *)(iVar9 + 0x1560),*(undefined4 *)(iVar9 + 0x1564));
    dlClearFB(*(int *)(iVar9 + 0x1558) + -2,*(int *)(iVar9 + 0x155c) + -1,
              *(int *)(iVar9 + 0x1560) + 2,*(undefined4 *)(iVar9 + 0x1564),0x80);
    dlSetZB(uVar7);
  }
  zbtestAdvanceAddPtr();
  zbtestAdvanceDrawPtr();
  windowSet(0,0,0x27f,0xdf);
  dlSetClip(window,DAT_00329a04,DAT_003299f4,DAT_00329a08);
  if (gamestate == 6) {
    guiLoadingGfx();
  }
  debugmenuGfx();
  profileGfx();
  dlFinish();
  *(undefined1 *)((int)gfxtag + 3) = 0x70;
  *(undefined4 *)(gfxtag + 2) = 0;
  puVar1 = gfxtag + 8;
  *gfxtag = 0;
  gfxtag = puVar1;
  return;
}


