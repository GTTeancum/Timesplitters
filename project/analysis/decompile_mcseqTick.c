/* Ghidra analysis, not original source. mcseqTick at 002434a8 */

/* front/mcseq.c */

undefined4 mcseqTick(void)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  char *__src;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  uint *puVar10;
  char acStack_1d0 [21];
  char acStack_1bb [21];
  undefined1 uStack_1a6;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined1 uStack_13c;
  undefined1 uStack_13b;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  
  iVar4 = pollcounter;
  switch(mcseq_state) {
  case 0:
    uVar6 = mcardGetResult();
    mcseq_result = (int)uVar6;
    iVar4 = pollcounter;
    switch(uVar6) {
    case 0:
      break;
    case 1:
      mcseq_state = mcseq_statesuccess;
      break;
    default:
      mcseq_state = mcseq_statefailure;
    }
    break;
  case 1:
    return mcseq_user;
  case 2:
    mcseq_flags = mcseq_flags & 0xffffffe7;
    return mcseq_user;
  case 3:
    return 0;
  case 4:
    if ((mcseq_curcard == 0xffffffff) || ((&mcseq_cards)[mcseq_curcard] == 1)) {
      for (iVar4 = joyMtapGetSlots(0); iVar4 < 4; iVar4 = iVar4 + 1) {
        (&mcseq_cards)[iVar4] = 0;
      }
      iVar4 = joyMtapGetSlots(1);
      iVar4 = iVar4 + 4;
      if (iVar4 < 8) {
        puVar3 = &mcseq_cards + iVar4;
        do {
          *puVar3 = 0;
          iVar4 = iVar4 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar4 < 8);
      }
      mcardCheckCards(0x1fc3710,0x1fc3730,0x1fc3750);
      mcseq_statesuccess = 5;
      if (mcseq_curcard != 0xffffffff) {
        mcseq_statesuccess = 9;
      }
      mcseq_flags = mcseq_flags | 0x10;
      mcseq_statefailure = 2;
      mcseq_state = 0;
      iVar4 = pollcounter;
    }
    else {
      mcseq_state = 9;
    }
    break;
  case 5:
    iVar4 = 0;
    piVar9 = &mcseq_cards;
    iVar5 = 7;
    do {
      iVar2 = *piVar9;
      piVar9 = piVar9 + 1;
      iVar5 = iVar5 + -1;
      if (3 < iVar2) {
        iVar4 = iVar4 + 1;
      }
    } while (-1 < iVar5);
    if ((mcseq_extras == 0) && (iVar4 == 1)) {
      mcseq_curcard = 0;
      if (mcseq_cards < 4) {
        piVar9 = &mcseq_cards;
        mcseq_curcard = 1;
        while ((piVar9 = piVar9 + 1, (int)mcseq_curcard < 8 && (*piVar9 < 4))) {
          mcseq_curcard = mcseq_curcard + 1;
        }
      }
      mcseq_state = 9;
      return 0xffffffff;
    }
    goto LAB_00243a88;
  case 6:
    mcseq_flags = mcseq_flags & 0xffffffef;
    puVar10 = &mcseq_pollcards;
    piVar9 = &mcseq_cards;
    iVar4 = 7;
    do {
      iVar5 = *piVar9;
      iVar4 = iVar4 + -1;
      piVar9 = piVar9 + 1;
      *puVar10 = iVar5 < 4 ^ 1;
      puVar10 = puVar10 + 1;
    } while (-1 < iVar4);
    pollcard = -1;
    mcseq_state = 7;
    pollcounter = 0;
    goto LAB_0024375c;
  case 7:
LAB_0024375c:
    iVar4 = 7;
    puVar3 = &DAT_01fc370c;
    do {
      *puVar3 = 2;
      iVar4 = iVar4 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar4);
    iVar4 = joyMtapGetSlots(0);
    if (iVar4 < 4) {
      puVar3 = &mcseq_pollcards + iVar4;
      do {
        *puVar3 = 0;
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar4 < 4);
    }
    iVar4 = joyMtapGetSlots(1);
    iVar5 = pollcard;
    for (iVar4 = iVar4 + 4; iVar4 < 8; iVar4 = iVar4 + 1) {
      (&mcseq_pollcards)[iVar4] = 0;
    }
    for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
      iVar5 = iVar5 + 1;
      if (7 < iVar5) {
        iVar5 = 0;
      }
      pollcard = iVar5;
      if ((&mcseq_pollcards)[iVar5] != 0) break;
    }
    iVar4 = pollcounter;
    if ((&mcseq_pollcards)[iVar5] != 0) {
      (&mcseq_pollcards)[iVar5] = 1;
      mcardCheckCards(0x1fc36f0,0x1fc3730,0x1fc3750);
      mcseq_statesuccess = 7;
      mcseq_state = 8;
      iVar4 = pollcounter;
    }
    break;
  case 8:
    lVar8 = mcardGetResult();
    iVar4 = pollcounter;
    if (lVar8 != 0) {
      if (lVar8 == 1) {
        (&mcseq_cards)[pollcard] = (&mcseq_pollcards)[pollcard];
      }
      mcseq_state = mcseq_statesuccess;
      iVar4 = pollcounter + 1;
    }
    break;
  case 9:
    mcardSelectCard((int)mcseq_curcard >> 2,mcseq_curcard & 3);
    if ((&mcseq_cards)[mcseq_curcard] != 5) {
      if ((mcseq_flags & 6) == 0) {
        mcseq_state = 0xc;
        mcseq_flags = mcseq_flags & 0xffffffef;
        return 0xffffffff;
      }
      mcseq_state = 0x10;
      mcseq_flags = mcseq_flags & 0xffffffef;
      return 0xffffffff;
    }
    if ((mcseq_action != 0) || ((mcseq_flags & 0x20) != 0)) {
      mcseq_state = 10;
      return 0xffffffff;
    }
    mcseq_result = 6;
    goto LAB_00243c3c;
  case 10:
    iVar4 = *(int *)(languages + cur_language * 4);
    uVar6 = mcseqSlotGetLongName();
    __src = (char *)vafmt(0x3a1eb0,*(undefined4 *)(iVar4 + 0x5b8),uVar6,
                          *(undefined4 *)(*(int *)(languages + cur_language * 4) + 0x5bc),
                          *(undefined4 *)(*(int *)(languages + cur_language * 4) + 0x5c0));
    strcpy(&msg_100,__src);
    mcseq_msg = &msg_100;
    mcseq_msg2 = *(undefined4 *)(*(int *)(languages + cur_language * 4) + 0x5c4);
    uVar7 = joyNewBut(mcseq_controller);
    if ((uVar7 & 0x20) != 0) {
      soundStart(0x8c,0);
      mcseq_flags = mcseq_flags | 8;
      mcardFormat();
      (&mcseq_cards)[mcseq_curcard] = 1;
      mcseq_state = 0;
      mcseq_statesuccess = 0xb;
      mcseq_statefailure = 2;
      return 0xffffffff;
    }
    uVar7 = joyNewBut(mcseq_controller);
    if ((uVar7 & 0x10) == 0) {
      return 0xffffffff;
    }
LAB_00243a88:
    mcseq_state = 6;
    iVar4 = pollcounter;
    break;
  case 0xb:
    mcseq_flags = mcseq_flags & 0xffffffe7;
    mcardCheckCards(0x1fc3710,0x1fc3730,0x1fc3750);
    mcseq_statesuccess = 9;
    goto LAB_00243dc8;
  case 0xc:
    strcpy(acStack_1d0,(char *)&mcseq_filename);
    strcpy(acStack_1bb,(char *)&mcseq_filename);
    uStack_1a6 = 0;
    mcardFileExists(acStack_1d0);
    mcseq_statesuccess = 0x10;
    mcseq_statefailure = 0xd;
    goto LAB_00243dcc;
  case 0xd:
    if ((mcseq_result != 5) || (mcseq_action == 0)) {
      mcseq_state = 2;
      return 0xffffffff;
    }
    mcardGetEntSpace(0x3ae8a8,0x3b000c);
    mcseq_statesuccess = 0xe;
    goto LAB_00243dc8;
  case 0xe:
    uStack_150 = mcseq_filename;
    uStack_148 = DAT_01fc3678;
    uStack_140 = DAT_01fc3680;
    uStack_13c = DAT_01fc3684;
    useclusters = 3;
    uStack_13b = 0;
    iVar4 = strncmp((char *)&uStack_150,"/BASLUS-20090-TS1-OPT",0x15);
    bVar1 = iVar4 != 0;
    if (bVar1) {
      iVar4 = mcardIconClusters(1);
      useclusters = useclusters + iVar4;
      iVar4 = mmfileMaxSize();
    }
    else {
      iVar4 = mcardIconClusters(0);
      useclusters = useclusters + iVar4;
      iVar4 = signonFileSize();
    }
    useclusters = useclusters + (iVar4 + 0x3ffU >> 10);
    if ((int)useclusters <= *(int *)(&mcseq_free + mcseq_curcard * 4)) {
      mcardMkdir(bVar1,1,!bVar1);
      mcseq_statesuccess = 0xf;
      goto LAB_00243dc8;
    }
    mcseq_result = 7;
LAB_00243c3c:
    mcseq_state = 2;
    iVar4 = pollcounter;
    break;
  case 0xf:
    mcseq_flags = mcseq_flags | 4;
    (&mcseq_cards)[mcseq_curcard] = 1;
    mcseq_state = 4;
    iVar4 = pollcounter;
    break;
  case 0x10:
    if (mcseq_action == 0) {
      mcseq_state = 0x11;
      return 0xffffffff;
    }
    uStack_d0 = mcseq_filename;
    uStack_c8 = DAT_01fc3678;
    uStack_c0 = DAT_01fc3680;
    uStack_bc = DAT_01fc3684;
    uStack_bb = 0;
    iVar4 = strncmp((char *)&uStack_d0,"/BASLUS-20090-TS1-OPT",0x15);
    if (iVar4 != 0) {
      iVar5 = mmfileMaxSize();
    }
    else {
      iVar5 = signonFileSize();
    }
    useclusters = iVar5 + 0x3ffU >> 10;
    mcardCheckDir(iVar4 != 0);
    mcseq_statesuccess = 0x11;
    goto LAB_00243dc8;
  case 0x11:
    mcseq_flags = mcseq_flags | 2;
    if (mcseq_action == 0) {
      mcardFileRead(0x1fc3670,mcseq_buffer,mcseq_length,mcseq_seek);
      mcseq_statesuccess = 1;
      goto LAB_00243dc8;
    }
    if (mcseq_action != 1) {
      mcseq_state = 2;
      return 0xffffffff;
    }
    mcardFileExists(0x1fc3670);
    mcseq_statesuccess = 0x14;
    mcseq_statefailure = 0x13;
    goto LAB_00243dcc;
  case 0x13:
    mcseq_overwrite = 0;
    mcseq_state = 0x15;
    break;
  case 0x14:
    mcseq_overwrite = 1;
    mcseq_state = 0x15;
    break;
  case 0x15:
    mcardFileWrite(0x1fc3670,mcseq_buffer,mcseq_length,mcseq_overwrite,mcseq_seek);
    mcseq_statesuccess = 0x16;
LAB_00243dc8:
    mcseq_statefailure = 2;
LAB_00243dcc:
    mcseq_state = 0;
    iVar4 = pollcounter;
    break;
  case 0x16:
    mcseq_state = 1;
    (&mcseq_cards)[mcseq_curcard] = 1;
    iVar4 = pollcounter;
    break;
  case 0x17:
    iVar4 = pollcounter + 1;
    if (pollcounter == 0x3c) {
      (&mcseq_cards)[mcseq_curcard] = 1;
      mcardCheckCards(0x1fc3710,0,0x1fc3750);
      mcseq_state = 0x18;
      iVar4 = 1;
    }
    break;
  case 0x18:
    lVar8 = mcardGetResult();
    mcseq_result = (int)lVar8;
    iVar4 = pollcounter;
    if (lVar8 != 0) {
      if (lVar8 == 1) {
        iVar4 = *(int *)(&mcseq_states + mcseq_curcard * 4);
        if (iVar4 == 1) {
          mcseq_state = 0x17;
          mcseq_pollcount = 1;
          return 6;
        }
        if (iVar4 < 2) {
          if (iVar4 == 0) {
            mcseq_state = 0x17;
            mcseq_pollcount = 1;
            return 5;
          }
        }
        else {
          if (iVar4 == 2) {
            mcseq_state = 0x17;
            mcseq_pollcount = 1;
            return 7;
          }
          if (iVar4 == 3) {
            mcseq_state = 0x17;
            mcseq_pollcount = 1;
            return 8;
          }
        }
      }
      mcseq_state = 0x17;
      mcseq_pollcount = 1;
      return 3;
    }
  }
  pollcounter = iVar4;
  return 0xffffffff;
}


