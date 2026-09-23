/* Ghidra analysis, not original source. sceMcSync at 002dce48 */

/* ../libmc.c */

uint sceMcSync(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  if (mcRunCmdNo == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar2 = sceSifCheckStatRpc(0x1ff1500);
    if ((param_1 == 0) && (lVar2 != 0)) {
      while (lVar2 = sceSifCheckStatRpc(0x1ff1500), lVar2 != 0) {
        iVar1 = 100000;
        do {
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      lVar2 = 0;
    }
    uVar3 = (uint)(lVar2 == 0);
    if (param_2 != 0) {
      *(int *)param_2 = mcRunCmdNo;
    }
    if ((uVar3 != 0) && (mcRunCmdNo = 0, param_3 != 0)) {
      *(undefined4 *)param_3 = retval;
    }
  }
  return uVar3;
}


