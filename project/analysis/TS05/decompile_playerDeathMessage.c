/* Ghidra analysis, not original source. playerDeathMessage at 002803c8 */

/* player/player.c */

void playerDeathMessage(undefined8 param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  piVar1 = *(int **)(*(int *)(iVar4 + 0x180) + 0x160);
  iVar3 = piVar1[0x40];
  if ((iVar3 != 0) && (*(int *)(iVar3 + 8) == 8)) {
    if (**(int **)(iVar3 + 0x160) == *piVar1) {
      playerMessage(param_1,0);
      iVar3 = *(int *)(iVar4 + 0x180);
    }
    else {
      uVar2 = vafmt(0x3af9f0,*(undefined4 *)(*(int *)(languages + cur_language * 4) + 0x11d4),
                    (*(int **)(iVar3 + 0x160))[4]);
      playerMessage(param_1,uVar2);
      iVar3 = *(int *)(iVar4 + 0x180);
    }
    hudMessage(**(undefined4 **)(iVar3 + 0x160),0);
    return;
  }
  return;
}


