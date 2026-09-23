/* Ghidra analysis, not original source. signonLoadTick at 002318a0 */

/* front/front_mpg.c */

char signonLoadTick(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  
  cVar10 = '\0';
  uVar6 = mcseqGetState();
  switch(uVar6) {
  case 0:
    if ((mcseq_msgflags & 0xf) == 0) {
      DAT_01fc1210 = DAT_01fc1210 + -1;
      cVar10 = DAT_01fc1210 == 0;
    }
    break;
  case 1:
  case 4:
switchD_002318ec_caseD_1:
    cVar10 = '\x01';
    break;
  case 2:
    if ((DAT_01fc11fc & 0xc) == 0) {
      cVar10 = '\x01';
    }
    else {
      signonLoadRetry(param_1);
    }
    break;
  case 3:
    lVar7 = mcseqGetResult();
    if (lVar7 != 4) {
      if ((DAT_01fc11fc & 0xc) == 0) {
        cVar10 = '\x01';
        break;
      }
      lVar7 = mcseqGetNumCards();
      if (lVar7 < 2) {
        cVar10 = '\x02';
        break;
      }
    }
    signonLoadStart(param_1);
    break;
  default:
    DAT_01fc1210 = 0xb4;
    break;
  case 10:
    uVar4 = mcseqGetResult();
    switch(uVar4) {
    case 1:
      lVar7 = memcardFileCheck(signon_buf,0x21315354,0xb790);
      iVar1 = signon_buf;
      if (lVar7 == 0) goto switchD_0023191c_caseD_2;
      bVar2 = false;
      iVar9 = signon_buf + 4;
      lVar7 = signonFileCount(signon_buf + 0x14);
      iVar8 = 0;
      if (lVar7 == 0) goto switchD_0023191c_caseD_5;
      do {
        iVar5 = signonCount();
        if (iVar5 <= iVar8) {
          signonloadfileid = *(int *)(iVar1 + 8);
          goto LAB_00231a04;
        }
        iVar5 = *(int *)(iVar1 + 8);
        iVar3 = iVar8 * 2;
        iVar8 = iVar8 + 1;
      } while ((&DAT_0032e1cc)[iVar3] != iVar5);
      bVar2 = true;
      signonloadfileid = iVar5;
LAB_00231a04:
      uVar6 = mcseqGetCurCard();
      signonAddFile(iVar9,uVar6);
      if (bVar2) {
        iVar1 = *(int *)(languages + cur_language * 4);
        uVar6 = mcseqSlotGetLongName();
        uVar6 = vafmt(0x3a19b0,*(undefined4 *)(iVar1 + 0x234),uVar6,
                      *(undefined4 *)(*(int *)(languages + cur_language * 4) + 0x238),
                      *(undefined4 *)(*(int *)(languages + cur_language * 4) + 0x23c));
      }
      else {
        uVar6 = mcseqGetMsg(4);
      }
      uVar6 = GetPlayerSignOnMessage(param_1,uVar6);
      break;
    case 2:
switchD_0023191c_caseD_2:
      corruptLoadMessage(param_1);
      goto LAB_00231cc4;
    case 3:
      soundStart(0x8e,0);
      uVar6 = mcseqGetMsg(3);
      uVar6 = GetPlayerSignOnMessage(param_1,uVar6);
      uVar4 = *(undefined4 *)(*(int *)(languages + cur_language * 4) + 0x650);
      goto LAB_00231ba0;
    case 4:
      soundStart(0x8e,0);
      lVar7 = mcseqGetCurCard();
      if (lVar7 == -1) {
        uVar6 = mcseqGetMsg(0);
      }
      else {
        uVar6 = mcseqGetMsg(1);
      }
      uVar6 = GetPlayerSignOnMessage(param_1,uVar6);
      uVar4 = *(undefined4 *)(*(int *)(languages + cur_language * 4) + 0x64c);
      goto LAB_00231ba0;
    case 5:
switchD_0023191c_caseD_5:
      soundStart(0x8e,0);
      iVar1 = *(int *)(languages + cur_language * 4);
      uVar6 = mcseqSlotGetLongName();
      uVar6 = vafmt(0x3a19a0,*(undefined4 *)(iVar1 + 0x22c),*(undefined4 *)(iVar1 + 0x230),uVar6);
      uVar6 = GetPlayerSignOnMessage(param_1,uVar6);
      break;
    case 6:
      soundStart(0x8e,0);
      uVar6 = mcseqGetMsg(2);
      uVar6 = GetPlayerSignOnMessage(param_1,uVar6);
      uVar4 = *(undefined4 *)(*(int *)(languages + cur_language * 4) + 0x650);
LAB_00231ba0:
      mcseqMessage(6,uVar6,uVar4);
      DAT_01fc11fc = DAT_01fc11fc | 4;
      goto LAB_00231cc4;
    default:
      soundStart(0x8e,0);
      uVar6 = mcseqGetMsg(3);
      uVar6 = GetPlayerSignOnMessage(param_1,uVar6);
      break;
    case 8:
      soundStart(0x8e,0);
      goto switchD_002318ec_caseD_1;
    }
    mcseqMessage(2,uVar6,*(undefined4 *)(*(int *)(languages + cur_language * 4) + 0x64c));
  }
LAB_00231cc4:
  if (cVar10 != '\0') {
    mcseqWindowClose();
    DAT_01fc11fc = DAT_01fc11fc & 0xfffffffe;
  }
  return cVar10;
}


