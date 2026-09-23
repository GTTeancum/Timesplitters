/* Ghidra analysis, not original source. sceSifCallRpc at 002d2d08 */

/* sifrpc.c */

undefined4
sceSifCallRpc(int *param_1,undefined4 param_2,ulong param_3,long param_4,long param_5,long param_6,
             long param_7,long param_8,int param_9)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined1 auStack_c0 [4];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  
  lVar3 = _sceRpcGetPacket(0x1ff0100);
  uVar2 = 0xffffffff;
  if (lVar3 != 0) {
    iVar5 = (int)lVar3;
    iVar1 = *(int *)(iVar5 + 0x18);
    param_1[8] = param_9;
    *param_1 = iVar5;
    param_1[1] = iVar1;
    param_1[7] = (int)param_8;
    *(undefined4 *)(iVar5 + 0x20) = param_2;
    *(int *)(iVar5 + 0x24) = (int)param_5;
    *(int *)(iVar5 + 0x28) = (int)param_6;
    *(int *)(iVar5 + 0x2c) = (int)param_7;
    *(int *)(iVar5 + 0x14) = iVar5;
    iVar1 = param_1[9];
    *(int **)(iVar5 + 0x1c) = param_1;
    *(int *)(iVar5 + 0x34) = iVar1;
    if ((param_3 & 2) == 0) {
      if (0 < param_5) {
        sceSifWriteBackDCache(param_4,param_5);
      }
      if ((0 < param_7) && (param_4 != param_6)) {
        sceSifWriteBackDCache(param_6,param_7);
      }
    }
    if ((param_3 & 1) == 0) {
      uStack_b8 = 0;
      uStack_bc = 1;
      lVar4 = CreateSema(auStack_c0);
      param_1[2] = (int)lVar4;
      if (lVar4 < 0) {
        uVar2 = 0xfffffffd;
      }
      else {
        *(undefined4 *)(iVar5 + 0x30) = 1;
        lVar3 = sceSifSendCmd(0xffffffff8000000a,lVar3,0x40,param_4,param_1[5],param_5);
        uVar2 = 0xfffffffe;
        if (lVar3 != 0) {
          WaitSema(param_1[2]);
          DeleteSema(param_1[2]);
          uVar2 = 0;
        }
      }
    }
    else {
      if (param_8 == 0) {
        *(undefined4 *)(iVar5 + 0x30) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x30) = 1;
      }
      param_1[2] = -1;
      lVar3 = sceSifSendCmd(0xffffffff8000000a,lVar3,0x40,param_4,param_1[5],param_5);
      uVar2 = 0;
      if (lVar3 == 0) {
        uVar2 = 0xfffffffe;
      }
    }
  }
  return uVar2;
}


