/* Ghidra analysis, not original source. signon_pageTick at 0023f438 */

/* front/front_mpg.c */

void signon_pageTick(undefined4 param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  byte *pbVar11;
  long lVar12;
  
  iVar8 = cur_language * 4;
  *(undefined4 *)(&mtree + (mtreepos + -1) * 8) = 0;
  pageSet(*(undefined4 *)(*(int *)(languages + iVar8) + 0x1d8),0x356440);
  frontfxTick(0);
  bVar1 = signonsave;
  if ((&state)[*front] == '\x01') {
    splitpageInit(0x356430);
    signonload = 0;
    sozoomframes = -2;
    signondelete = 0;
    signonsave = 0;
    signonmessage = 0;
    sozoomstarted = 0;
    memset(&signontobedeleted,0,4);
    iVar8 = sozoomframes;
    goto LAB_0023fbc4;
  }
  iVar8 = sozoomframes + -1;
  if (0 < sozoomframes) goto LAB_0023fbc4;
  uVar2 = (uint)signonmessage;
  iVar8 = uVar2 - 1;
  if (signonmessage != 0) {
    iVar5 = splitMessageTick(iVar8);
    if (iVar5 - 2U < 2) {
      signonmessage = 0;
      sozoomstarted = 0;
      soundStart(0x8c,0);
      splitMessageClear(iVar8);
      (&DAT_003aff27)[uVar2] = 3;
    }
    joyClearAll(iVar8);
    iVar8 = sozoomframes;
    goto LAB_0023fbc4;
  }
  if (signonload == 0) {
    if (signonsave == 0) {
      iVar8 = sozoomframes;
      if (signondelete == 0) goto LAB_0023fbc4;
      iVar5 = signondelete - 1;
      pbVar11 = &DAT_003aff8f + signondelete;
      iVar8 = *pbVar11 - 1;
      if (sozoomstarted == 0) {
        soZoomStart(iVar5);
        iVar8 = sozoomframes;
        goto LAB_0023fbc4;
      }
      if ((DAT_01fc11fc & 2) == 0) {
        if ((uint)(&signoninfo)[iVar8 * 2] < 8) {
          iVar3 = *(int *)(languages + cur_language * 4);
          iVar8 = signonarray + iVar8 * 0xb78;
          uVar6 = mcseqSlotMakeName();
          uVar6 = vafmt(0x3a1e28,*(undefined4 *)(iVar3 + 0x540),iVar8,*(undefined4 *)(iVar3 + 0x544)
                        ,uVar6,*(undefined4 *)(*(int *)(languages + cur_language * 4) + 0x548),
                        *(undefined4 *)(*(int *)(languages + cur_language * 4) + 0x54c));
          uVar6 = GetPlayerSignOnMessage(iVar5,uVar6);
        }
        else {
          iVar3 = *(int *)(languages + cur_language * 4);
          uVar6 = vafmt(0x3a1e40,*(undefined4 *)(iVar3 + 0x554),signonarray + iVar8 * 0xb78,
                        *(undefined4 *)(iVar3 + 0x558),*(undefined4 *)(iVar3 + 0x55c));
          uVar6 = GetPlayerSignOnMessage(iVar5,uVar6);
        }
        splitMessageStart(iVar5,1,uVar6);
        sozoomframes = -1;
        DAT_01fc11fc = DAT_01fc11fc | 2;
        iVar8 = sozoomframes;
        goto LAB_0023fbc4;
      }
      if ((DAT_01fc11fc & 1) == 0) {
        lVar7 = splitMessageTick(iVar5);
        if (lVar7 == 2) {
          uVar2 = (&signoninfo)[iVar8 * 2];
          *(undefined2 *)(&tofocus + iVar5 * 2) = 2000;
          if (uVar2 < 8) {
            signontodelete = (undefined1)iVar8;
            signonDeleteStart(iVar5);
          }
          else {
            signonDelete(iVar8);
            *pbVar11 = 0;
            signondelete = 0;
            sozoomstarted = 0;
          }
          soundStart(0x8c,0);
        }
        else if (lVar7 == 3) {
          *pbVar11 = 0;
          signondelete = 0;
          sozoomstarted = 0;
          soundStart(0x8e,0);
        }
        if (lVar7 != 0) {
          splitMessageClear(iVar5);
        }
        joyClearAll(iVar5);
        iVar8 = sozoomframes;
        goto LAB_0023fbc4;
      }
      lVar7 = signonDeleteTick(iVar5);
      iVar8 = sozoomframes;
      if (lVar7 == 0) goto LAB_0023fbc4;
      *pbVar11 = 0;
      signondelete = 0;
    }
    else {
      uVar2 = (uint)signonsave;
      iVar8 = uVar2 - 1;
      if (sozoomstarted == 0) {
        soZoomStart(iVar8);
        iVar8 = sozoomframes;
        goto LAB_0023fbc4;
      }
      if ((DAT_01fc11fc & 1) == 0) {
        signonUpdateStart(iVar8);
        iVar8 = sozoomframes;
        goto LAB_0023fbc4;
      }
      lVar7 = signonUpdateTick(iVar8);
      if (lVar7 == 0) {
        iVar8 = sozoomframes;
        if (sozoomframes != 0) goto LAB_0023fbc4;
        goto LAB_0023f990;
      }
      iVar5 = signonGet(iVar8);
      if (lVar7 == 2) {
        signonDelete(iVar5);
        signonSet(iVar8,0xffffffffffffffff);
        *(undefined2 *)(&tofocus + iVar8 * 2) = 2000;
        soundStart(0x8e,0);
        (&DAT_003aff27)[uVar2] = 3;
      }
      else if ((&signoninfo)[iVar5 * 2] == -1) {
        signonDelete(iVar5);
        signonSet(iVar8,0xffffffffffffffff);
        *(undefined2 *)(&tofocus + iVar8 * 2) = 2000;
        soundStart(0x8e,0);
        (&DAT_003aff27)[uVar2] = 2;
      }
      else {
        if ((&signoninfo)[iVar5 * 2] == 8) {
          lVar12 = 0;
          lVar7 = signonMemCount();
          if (lVar7 < 0x10) {
            iVar9 = 0;
            iVar3 = signonCount();
            while (iVar9 < iVar3) {
              if (iVar9 == iVar5) {
                iVar9 = iVar9 + 1;
              }
              else {
                iVar4 = strcmp((char *)(signonarray + iVar9 * 0xb78),&plrnewname + iVar8 * 0x1e);
                if (iVar4 == 0) {
                  if ((&signoninfo)[iVar9 * 2] == 8) {
                    iVar3 = *(int *)(languages + cur_language * 4);
                    lVar12 = vafmt(0x3a1e18,*(undefined4 *)(iVar3 + 0x530),
                                   &plrnewname + iVar8 * 0x1e,*(undefined4 *)(iVar3 + 0x534),
                                   *(undefined4 *)(iVar3 + 0x538));
                    break;
                  }
                  iVar9 = iVar9 + 1;
                }
                else {
                  iVar9 = iVar9 + 1;
                }
              }
            }
          }
          else {
            iVar3 = *(int *)(languages + cur_language * 4);
            lVar12 = vafmt(0x3a1e08,*(undefined4 *)(iVar3 + 0x520),*(undefined4 *)(iVar3 + 0x524),
                           &plrnewname + iVar8 * 0x1e,*(undefined4 *)(iVar3 + 0x528),
                           *(undefined4 *)(iVar3 + 0x52c));
          }
          if (lVar12 != 0) {
            signonDelete(iVar5);
            signonSet(iVar8,0xffffffffffffffff);
            *(undefined2 *)(&tofocus + iVar8 * 2) = 2000;
            soundStart(0x8e,0);
            (&DAT_003aff27)[uVar2] = 2;
            splitMessageStart(iVar8,2,lVar12);
            signonmessage = bVar1;
            DAT_01fc11fc = DAT_01fc11fc | 2;
          }
        }
        lVar7 = signonGet(iVar8);
        if (-1 < lVar7) {
          (&DAT_003aff27)[uVar2] = 5;
          soundStart(0x8c,0);
          signonsave = 0;
          goto LAB_0023fbc0;
        }
      }
      signonsave = 0;
    }
  }
  else {
    iVar5 = signonload - 1;
    if (sozoomstarted == 0) {
      soZoomStart(iVar5);
      iVar8 = sozoomframes;
      goto LAB_0023fbc4;
    }
    if ((DAT_01fc11fc & 1) == 0) {
      signonLoadStart(iVar5);
LAB_0023f990:
      sozoomframes = -1;
      iVar8 = sozoomframes;
      goto LAB_0023fbc4;
    }
    lVar7 = signonLoadTick(iVar5);
    iVar8 = sozoomframes;
    if (lVar7 == 0) goto LAB_0023fbc4;
    if (signonloadfileid == 0) {
      soundStart(0x8e,0);
    }
    else {
      iVar8 = 0;
      if (0 < frontmpg_numplayers) {
        do {
          lVar7 = signonGet(iVar8);
          if ((lVar7 == -1) && ((&state)[iVar8] == '\x05')) {
            (&state)[iVar8] = '\x02';
            *(undefined2 *)(&tofocus + iVar8 * 2) = 2000;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < frontmpg_numplayers);
      }
      piVar10 = &DAT_0032e1cc;
      for (iVar8 = 0; iVar3 = signonCount(), iVar8 < iVar3; iVar8 = iVar8 + 1) {
        iVar3 = *piVar10;
        piVar10 = piVar10 + 2;
        if (iVar3 == signonloadfileid) {
          soundStart(0x8c,0);
          *(short *)(&tofocus + iVar5 * 2) = (short)iVar8 + 1;
          break;
        }
      }
    }
    signonload = 0;
  }
LAB_0023fbc0:
  sozoomstarted = 0;
  iVar8 = sozoomframes;
LAB_0023fbc4:
  sozoomframes = iVar8;
  makesignonmenu();
  splitpageTick(param_1,0x356430);
  iVar8 = 0;
  if ((0 < frontmpg_numplayers) && (state == '\x05')) {
    for (iVar8 = 1; (iVar8 < frontmpg_numplayers && ((&state)[iVar8] == '\x05')); iVar8 = iVar8 + 1)
    {
    }
  }
  if (iVar8 == frontmpg_numplayers) {
    iVar8 = 0;
    settingsToMenus();
    statsCombine(frontmpg_numplayers);
    DAT_01fc1224 = 0;
    DAT_01fc1218 = 0;
    DAT_01fc121c = 0;
    if (0 < frontmpg_numplayers) {
      do {
        iVar5 = signonGet(iVar8);
        iVar5 = signonarray + iVar5 * 0xb78;
        lVar7 = chrPlayable(*(undefined4 *)(iVar5 + 0x74));
        if (lVar7 == 0) {
          *(undefined4 *)(iVar5 + 0x74) = 0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < frontmpg_numplayers);
    }
    iVar8 = 0;
    DAT_01fc11fc = DAT_01fc11fc | 0x200;
    do {
      iVar5 = frontGet(iVar8);
      iVar8 = iVar8 + 1;
      *(undefined4 *)(*(int *)(iVar5 + 4) + 0xc) = 0;
    } while (iVar8 < 4);
    checkUnavailableThings();
    frontPageSet(0,0x3550f0);
    pageIn(param_1);
    return;
  }
  DAT_01fc11fc = DAT_01fc11fc & 0xfffffdff;
  return;
}


