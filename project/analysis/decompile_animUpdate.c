/* Ghidra analysis, not original source. animUpdate at 00212cf8 */

/* anim/anim.c */

void animUpdate(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1;
  iVar1 = *piVar4;
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(currentplayer + 0x6e4) == 0) {
    return;
  }
  if (*(int *)(iVar1 + 4) == 0) {
    return;
  }
  iVar3 = piVar4[0x3d];
  iVar2 = *(int *)(iVar3 + 8);
  if ((iVar2 == 8) && (*(int *)(*(int *)(iVar3 + 0x160) + 8) != 3)) {
    iVar3 = piVar4[1];
  }
  else if ((iVar2 == 0x10) && (*(int *)(iVar3 + 4) < 0x50)) {
    iVar3 = piVar4[1];
  }
  else {
    if (iVar2 != 0x1000) {
      iVar3 = piVar4[0x18];
      goto LAB_00212db0;
    }
    if (0x4f < *(int *)(iVar3 + 4)) {
      iVar3 = piVar4[0x18];
      goto LAB_00212db0;
    }
    iVar3 = piVar4[1];
  }
  if (iVar3 != 0) {
    calMatrices(param_1);
    return;
  }
  iVar3 = piVar4[0x18];
LAB_00212db0:
  if ((iVar3 != 1) && (iVar3 = 0, 0 < *(int *)(iVar1 + 4))) {
    iVar1 = piVar4[1];
    while( true ) {
      iVar2 = iVar3 * 0x40;
      iVar3 = iVar3 + 1;
      sceVu0UnitMatrix(iVar1 + iVar2);
      if (*(int *)(*piVar4 + 4) <= iVar3) break;
      iVar1 = piVar4[1];
    }
  }
  return;
}


