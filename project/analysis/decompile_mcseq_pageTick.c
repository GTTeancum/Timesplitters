/* Ghidra analysis, not original source. mcseq_pageTick at 00244188 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* front/mcseq.c */

void mcseq_pageTick(int param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  short sVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  char *__src;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined2 uStack_e0;
  short sStack_de;
  int aiStack_d0 [12];
  
  iVar13 = *(int *)(param_1 + 8);
  mcseqTick();
  mcseqWindowSet();
  uVar6 = mcseq_title;
  switch(mcseq_state) {
  default:
    uStack_e0 = 0;
    sStack_de = zoomboxes._24_2_ + 10;
    DAT_01fc3780 = DAT_00356548;
    DAT_01fc3788 = DAT_00356550;
    mi_msgs._4_4_ = (undefined4)((ulong)mi_msg >> 0x20);
    if (((mcseq_flags & 0x10) == 0) && (uVar6 = mcseq_titleact, (mcseq_flags & 8) != 0)) {
      uVar6 = *(undefined4 *)(*(int *)(languages + cur_language * 4) + 0x770);
    }
    mi_msgs = CONCAT44(mi_msgs._4_4_,uVar6);
    DAT_01fc3778 = DAT_00356540 | 0x1000000;
    std_menuitemmake(iVar13,&uStack_e0,0x1fc3770);
    sStack_de = zoomboxes._24_2_ + 0x2d;
    iVar12 = iVar13 + 0x30;
    DAT_01fc3798 = DAT_00356540;
    DAT_01fc37a0 = DAT_00356548;
    DAT_01fc37a8 = DAT_00356550;
    DAT_01fc3790_4 = (undefined4)((ulong)mi_msg >> 0x20);
    _DAT_01fc3790 =
         CONCAT44(DAT_01fc3790_4,*(undefined4 *)(*(int *)(languages + cur_language * 4) + 0x5d4));
    std_menuitemmake(iVar13 + 0x18,&uStack_e0,0x1fc3790);
    DAT_01fc37b8 = DAT_00356540;
    DAT_01fc37c0 = DAT_00356548;
    DAT_01fc37c8 = DAT_00356550;
    iVar13 = iVar13 + 0x48;
    _DAT_01fc37b0 =
         CONCAT44((int)((ulong)mi_msg >> 0x20),
                  *(undefined4 *)(*(int *)(languages + cur_language * 4) + 0x778));
    sStack_de = zoomboxes._24_2_ + zoomboxes._32_2_ + -0x1e;
    std_menuitemmake(iVar12,&uStack_e0,0x1fc37b0);
    uVar5 = 0x29a;
    goto LAB_002449e4;
  case 3:
  case 10:
    if (((mcseq_msgflags & 1) != 0) && (uVar7 = joyNewBut(mcseq_controller), (uVar7 & 0x20) != 0)) {
      mcseq_msgflags = mcseq_msgflags | 0x10;
    }
    if (((mcseq_msgflags & 2) != 0) && (uVar7 = joyNewBut(mcseq_controller), (uVar7 & 0x40) != 0)) {
      mcseq_msgflags = mcseq_msgflags | 0x20;
    }
    if (((mcseq_msgflags & 4) != 0) && (uVar7 = joyNewBut(mcseq_controller), (uVar7 & 0x10) != 0)) {
      mcseq_msgflags = mcseq_msgflags | 0x40;
    }
    if (((mcseq_msgflags & 8) != 0) && (uVar7 = joyNewBut(mcseq_controller), (uVar7 & 0x80) != 0)) {
      mcseq_msgflags = mcseq_msgflags | 0x80;
    }
    joyClearAll(mcseq_controller);
    if (mcseq_msg == 0) {
      iVar12 = *(int *)(param_1 + 8);
      goto LAB_002449ec;
    }
    iVar12 = textWidth();
    iVar12 = iVar12 + 8;
    if (((int)zoomboxes._28_4_ < iVar12) && (iVar12 < DAT_003299fc)) {
      zoomboxes._20_4_ = zoomboxes._20_4_ - (iVar12 - zoomboxes._28_4_) / 2;
      zoomboxes._28_4_ = iVar12;
    }
    break;
  case 6:
    uVar5 = 1;
LAB_002449e4:
    *(undefined2 *)(param_1 + 4) = uVar5;
    break;
  case 7:
  case 8:
    uVar1 = *(ushort *)(param_1 + 4);
    piVar9 = &mcseq_cards;
    uVar15 = 0;
    iVar12 = 0;
    puVar10 = (undefined8 *)&DAT_01fc3790;
    puVar11 = (undefined8 *)&DAT_01fc3790;
    piVar8 = aiStack_d0;
    do {
      if (3 < *piVar9) {
        *piVar8 = iVar12;
        uVar15 = uVar15 + 1;
        piVar8 = piVar8 + 1;
      }
      iVar12 = iVar12 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar12 < 8);
    uVar14 = uVar15 + mcseq_extras;
    if (uVar14 <= uVar1 - 1) {
      *(undefined2 *)(param_1 + 4) = 1;
    }
    if (3 < (int)uVar14) {
      iVar12 = (uVar14 - 3) * 10;
      zoomboxes._32_4_ = zoomboxes._32_4_ + iVar12;
      zoomboxes._24_4_ = zoomboxes._24_4_ - (iVar12 >> 1);
    }
    uStack_e0 = 0;
    sStack_de = zoomboxes._24_2_ + 10;
    DAT_01fc3780 = DAT_00356548;
    DAT_01fc3788 = DAT_00356550;
    mi_msgs._4_4_ = (undefined4)((ulong)mi_msg >> 0x20);
    mi_msgs = CONCAT44(mi_msgs._4_4_,uVar6);
    DAT_01fc3778 = DAT_00356540 | 0x1000000;
    std_menuitemmake(iVar13,&uStack_e0,0x1fc3770);
    sVar4 = sStack_de + 0xf;
    if (uVar14 == 0) {
      sVar4 = sStack_de + 0x23;
    }
    sStack_de = sVar4;
    DAT_01fc3798 = DAT_00356540;
    DAT_01fc37a0 = DAT_00356548;
    DAT_01fc37a8 = DAT_00356550;
    if (uVar15 == 0) {
      if (mcseq_extras == 0) {
        uVar6 = *(undefined4 *)(*(int *)(languages + cur_language * 4) + 0x774);
      }
      else {
        uVar6 = *(undefined4 *)(*(int *)(languages + cur_language * 4) + 0x758);
      }
    }
    else {
      uVar6 = *(undefined4 *)(*(int *)(languages + cur_language * 4) + 0x75c);
    }
    DAT_01fc3790_4 = (undefined4)((ulong)mi_msg >> 0x20);
    _DAT_01fc3790 = CONCAT44(DAT_01fc3790_4,uVar6);
    std_menuitemmake(iVar13 + 0x18,&uStack_e0,0x1fc3790);
    iVar13 = iVar13 + 0x30;
    iVar12 = 0;
    sStack_de = sStack_de + 0x14;
    if (0 < (int)uVar14) {
      do {
        uVar3 = DAT_00356568;
        uVar2 = DAT_00356560;
        puVar10 = puVar11 + 4;
        *puVar10 = mi_card;
        puVar11[5] = uVar2;
        puVar11[6] = uVar3;
        puVar11[7] = DAT_00356570;
        if (iVar12 < (int)uVar15) {
          __src = (char *)mcseqSlotMakeName(aiStack_d0[iVar12]);
          strcpy(&slotnames + iVar12 * 0x20,__src);
          *(undefined **)puVar10 = &slotnames + iVar12 * 0x20;
        }
        else {
          *(undefined4 *)puVar10 = *(undefined4 *)(&mcseq_extra + (iVar12 - uVar15) * 4);
        }
        iVar12 = iVar12 + 1;
        *(short *)(puVar11 + 5) = (short)iVar12;
        std_menuitemmake(iVar13,&uStack_e0,puVar10);
        iVar13 = iVar13 + 0x18;
        sStack_de = sStack_de + 10;
        puVar11 = puVar10;
      } while (iVar12 < (int)uVar14);
    }
    uVar2 = DAT_00356548;
    uVar7 = DAT_00356540;
    puVar11 = puVar10 + 4;
    sStack_de = zoomboxes._24_2_ + zoomboxes._32_2_ + -0x1e;
    *puVar11 = mi_msg;
    puVar10[5] = uVar7;
    puVar10[6] = uVar2;
    puVar10[7] = DAT_00356550;
    if (uVar14 == 0) {
      uVar6 = *(undefined4 *)(*(int *)(languages + cur_language * 4) + 0x5cc);
    }
    else {
      uVar6 = *(undefined4 *)(*(int *)(languages + cur_language * 4) + 0x5c8);
    }
    *(undefined4 *)puVar11 = uVar6;
    std_menuitemmake(iVar13,&uStack_e0,puVar11);
    iVar13 = iVar13 + 0x18;
    uVar7 = joyNewBut(mcseq_controller);
    if ((((uVar7 & 0x1000) != 0) &&
        (sVar4 = *(ushort *)(param_1 + 4) - 1, 1 < *(ushort *)(param_1 + 4))) ||
       ((uVar7 = joyNewBut(mcseq_controller), (uVar7 & 0x4000) != 0 &&
        (sVar4 = *(ushort *)(param_1 + 4) + 1, (int)(uint)*(ushort *)(param_1 + 4) < (int)uVar14))))
    {
      *(short *)(param_1 + 4) = sVar4;
      soundStart(0x8d,0);
      iVar12 = *(int *)(param_1 + 8);
      goto LAB_002449ec;
    }
    uVar7 = joyNewBut(mcseq_controller);
    if ((uVar7 & 0x40) == 0) {
      uVar7 = joyNewBut(mcseq_controller);
      if ((uVar7 & 0x10) != 0) {
        mcseq_state = 2;
        mcseq_result = 8;
        mcseq_msg = *(int *)(*(int *)(languages + cur_language * 4) + 0x5d0);
      }
    }
    else if ((uVar15 == 0) || (uVar15 <= *(ushort *)(param_1 + 4) - 1)) {
      if ((0 < (int)mcseq_extras) && ((uint)*(ushort *)(param_1 + 4) - (uVar15 + 1) < mcseq_extras))
      {
        soundStart(0x8c,0);
        mcseq_curcard = -1;
        mcseq_state = 1;
        mcseq_result = 9;
      }
    }
    else {
      soundStart(0x8c,0);
      mcseq_statesuccess = 9;
      mcseq_state = 8;
      mcseq_curcard = aiStack_d0[*(ushort *)(param_1 + 4) - 1];
    }
  }
  iVar12 = *(int *)(param_1 + 8);
LAB_002449ec:
  *(int *)(param_1 + 0xc) = (iVar13 - iVar12) * -0x55555555 >> 3;
  return;
}


