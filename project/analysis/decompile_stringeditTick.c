/* Ghidra analysis, not original source. stringeditTick at 0022f820 */

/* front/textbox.c */

void stringeditTick(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  char cStack_60;
  
  stringeditSet();
  if ((*(uint *)(front + 0xc) & 0x3c) != 0) {
    soundStart(0x8d,0);
  }
  iVar6 = textbox;
  uVar10 = *(uint *)(front + 0xc);
  if ((uVar10 & 0x10) != 0) {
    iVar9 = *(int *)(textbox + 0x1c) + *(int *)(textbox + 0x2c) * 0xb;
    cVar2 = *(char *)(iVar9 + *(int *)(textbox + 0x28));
    iVar5 = *(int *)(textbox + 0x28);
    while( true ) {
      *(int *)(iVar6 + 0x28) = iVar5 + -1;
      if (iVar5 + -1 < 0) {
        *(undefined4 *)(iVar6 + 0x28) = 10;
      }
      if (*(char *)(iVar9 + *(int *)(iVar6 + 0x28)) != cVar2) break;
      iVar5 = *(int *)(iVar6 + 0x28);
    }
    return;
  }
  if ((uVar10 & 0x20) != 0) {
    iVar9 = *(int *)(textbox + 0x1c) + *(int *)(textbox + 0x2c) * 0xb;
    cVar2 = *(char *)(iVar9 + *(int *)(textbox + 0x28));
    iVar5 = *(int *)(textbox + 0x28);
    while( true ) {
      *(int *)(iVar6 + 0x28) = iVar5 + 1;
      if (10 < iVar5 + 1) {
        *(undefined4 *)(iVar6 + 0x28) = 0;
      }
      if (*(char *)(iVar9 + *(int *)(iVar6 + 0x28)) != cVar2) break;
      iVar5 = *(int *)(iVar6 + 0x28);
    }
    return;
  }
  if ((uVar10 & 4) != 0) {
    iVar5 = *(int *)(textbox + 0x2c) + -1;
    *(int *)(textbox + 0x2c) = iVar5;
    if (-1 < iVar5) {
      return;
    }
    *(undefined4 *)(iVar6 + 0x2c) = 4;
    return;
  }
  if ((uVar10 & 8) != 0) {
    iVar5 = *(int *)(textbox + 0x2c) + 1;
    *(int *)(textbox + 0x2c) = iVar5;
    if (iVar5 < 5) {
      return;
    }
    *(undefined4 *)(iVar6 + 0x2c) = 0;
    return;
  }
  uVar7 = joyNewBut(param_1);
  if ((uVar7 & 0x80) != 0) {
    iVar6 = *(int *)(textbox + 0x18);
LAB_0022fc24:
    if (iVar6 < 1) {
      return;
    }
    piVar1 = (int *)(textbox + 0x30);
    *(int *)(textbox + 0x18) = iVar6 + -1;
    *(undefined1 *)(*piVar1 + iVar6 + -1) = 0;
    soundStart(0x8e,0);
    return;
  }
  uVar7 = joyNewBut(param_1);
  iVar6 = textbox;
  if ((uVar7 & 0x40) == 0) {
    uVar7 = joyNewBut(param_1);
    if ((uVar7 & 0x10) == 0) {
      return;
    }
    *(undefined4 *)(textbox + 0x24) = 1;
    soundStart(0x8e,0);
    return;
  }
  uVar10 = *(int *)(textbox + 0x2c) * 0xb + *(int *)(textbox + 0x28);
  if (uVar10 < 0x2c) {
    cStack_60 = *(char *)(*(int *)(textbox + 0x1c) + uVar10);
  }
  else {
    cVar2 = (*(undefined1 **)(textbox + 0x1c))[uVar10];
    if (cVar2 == -2) {
      iVar6 = *(int *)(textbox + 0x18);
      goto LAB_0022fc24;
    }
    if (cVar2 != -3) {
      if (cVar2 == -4) {
        if (*(undefined1 **)(textbox + 0x1c) == chartab1) {
          *(undefined1 **)(textbox + 0x1c) = chartab2;
        }
        else {
          *(undefined1 **)(textbox + 0x1c) = chartab1;
        }
        uVar8 = 0x8d;
      }
      else {
        if (cVar2 != -1) {
          return;
        }
        iVar6 = 0;
        cVar2 = **(char **)(textbox + 0x30);
        while (cVar2 != '\0') {
          iVar6 = iVar6 + 1;
          cVar2 = (*(char **)(textbox + 0x30))[iVar6];
        }
        if (0 < iVar6) {
          cVar2 = *(char *)(iVar6 + *(int *)(textbox + 0x30) + -1);
          while (cVar2 == ' ') {
            iVar5 = iVar6 + *(int *)(textbox + 0x30);
            iVar6 = iVar6 + -1;
            *(undefined1 *)(iVar5 + -1) = 0;
            if (iVar6 < 1) break;
            cVar2 = *(char *)(iVar6 + *(int *)(textbox + 0x30) + -1);
          }
        }
        if (iVar6 == 0) {
          *(undefined4 *)(textbox + 0x24) = 1;
        }
        else {
          *(undefined4 *)(textbox + 0x20) = 1;
        }
        uVar8 = 0x8f;
      }
      goto LAB_0022fd40;
    }
    cStack_60 = ' ';
  }
  bVar4 = true;
  if (*(int *)(textbox + 0x34) <= *(int *)(textbox + 0x18)) {
    uVar8 = 0x8e;
LAB_0022fd40:
    soundStart(uVar8,0);
    return;
  }
  pcVar13 = *(char **)(textbox + 0x30);
  iVar9 = 1;
  iVar5 = 0;
  if (*pcVar13 == '\0') {
    iVar5 = *(int *)(textbox + 0x18);
  }
  else {
    iVar12 = *(int *)(textbox + 0x30);
    while( true ) {
      pcVar11 = (char *)(iVar12 + iVar5);
      iVar5 = iVar5 + 1;
      if (*pcVar11 == '\n') {
        pcVar13 = pcVar11 + 1;
        iVar9 = iVar9 + 1;
      }
      if (*(char *)(iVar12 + iVar5) == '\0') break;
      iVar12 = *(int *)(textbox + 0x30);
    }
    iVar5 = *(int *)(textbox + 0x18);
  }
  *(char *)(*(int *)(textbox + 0x30) + iVar5) = cStack_60;
  *(int *)(iVar6 + 0x18) = iVar5 + 1;
  *(undefined1 *)(*(int *)(textbox + 0x30) + *(int *)(textbox + 0x18)) = 0;
  uVar8 = textSelect(1);
  iVar6 = textWidth(pcVar13);
  if (iVar6 <= *(int *)(textbox + 0x14)) goto LAB_0022fba8;
  if (iVar9 < *(int *)(textbox + 0x10)) {
    if (cStack_60 == ' ') {
      *(undefined1 *)(*(int *)(textbox + 0x18) + *(int *)(textbox + 0x30) + -1) = 10;
      goto LAB_0022fba8;
    }
    pcVar11 = (char *)(*(int *)(textbox + 0x30) + *(int *)(textbox + 0x18) + -1);
    bVar3 = pcVar11 < pcVar13;
    if (bVar3) {
      iVar6 = *(int *)(textbox + 0x34);
LAB_0022fb3c:
      if (*(int *)(textbox + 0x18) < iVar6) {
        *(undefined1 *)(*(int *)(textbox + 0x18) + *(int *)(textbox + 0x30) + -1) = 10;
        iVar5 = textbox;
        iVar6 = *(int *)(textbox + 0x18);
        *(char *)(*(int *)(textbox + 0x30) + iVar6) = cStack_60;
        *(int *)(iVar5 + 0x18) = iVar6 + 1;
        *(undefined1 *)(*(int *)(textbox + 0x30) + *(int *)(textbox + 0x18)) = 0;
        goto LAB_0022fba8;
      }
      if (bVar3) goto LAB_0022fb9c;
    }
    else {
      cVar2 = *pcVar11;
      while (cVar2 != ' ') {
        pcVar11 = pcVar11 + -1;
        if (pcVar11 < pcVar13) {
          iVar6 = *(int *)(textbox + 0x34);
          bVar3 = true;
          goto LAB_0022fb3c;
        }
        bVar3 = false;
        cVar2 = *pcVar11;
      }
      if (bVar3) {
        iVar6 = *(int *)(textbox + 0x34);
        bVar3 = true;
        goto LAB_0022fb3c;
      }
    }
    *pcVar11 = '\n';
  }
  else {
LAB_0022fb9c:
    bVar4 = false;
  }
LAB_0022fba8:
  if (bVar4) {
    soundStart(0x8c,0);
  }
  else {
    piVar1 = (int *)(textbox + 0x30);
    iVar6 = *(int *)(textbox + 0x18) + -1;
    *(int *)(textbox + 0x18) = iVar6;
    *(undefined1 *)(*piVar1 + iVar6) = 0;
    soundStart(0x8e,0);
  }
  textSelect(uVar8);
  return;
}


