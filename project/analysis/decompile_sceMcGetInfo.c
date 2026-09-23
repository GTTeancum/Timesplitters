/* Ghidra analysis, not original source. sceMcGetInfo at 002dcf90 */

/* ../libmc.c */

int sceMcGetInfo(undefined4 param_1,undefined4 param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  
  iVar1 = mcRunCmdNo;
  if (mcRunCmdNo == 0) {
    if (DAT_01ff1524 == 0) {
      iVar1 = -100;
    }
    else {
      DAT_01ff159c = &sifParamNext;
      DAT_01ff1594 = (uint)(param_3 != 0);
      DAT_01ff1590 = (uint)(param_4 != 0);
      DAT_01ff158c = (uint)(param_5 != 0);
      typeAddr = (undefined4)param_3;
      freeAddr = (undefined4)param_4;
      formAddr = (undefined4)param_5;
      DAT_01ff1584 = param_1;
      DAT_01ff1588 = param_2;
      sceSifWriteBackDCache(0x1ff1a00,0xc0);
      iVar1 = sceSifCallRpc(0x1ff1500,1,1,0x1ff1580,0x30,0x1ff2ac0,4,0x2dcf38);
      if (iVar1 == 0) {
        mcRunCmdNo = 1;
      }
    }
  }
  return iVar1;
}


