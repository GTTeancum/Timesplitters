/* Ghidra analysis, not original source. sceSifBindRpc at 002d2b58 */

/* sifrpc.c */

undefined4 sceSifBindRpc(int *param_1,undefined4 param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  param_1[4] = 0;
  param_1[9] = 0;
  lVar3 = _sceRpcGetPacket(0x1ff0100);
  uVar2 = 0xffffffff;
  if (lVar3 != 0) {
    iVar5 = (int)lVar3;
    iVar1 = *(int *)(iVar5 + 0x18);
    *param_1 = iVar5;
    param_1[1] = iVar1;
    *(undefined4 *)(iVar5 + 0x20) = param_2;
    *(int *)(iVar5 + 0x14) = iVar5;
    *(int **)(iVar5 + 0x1c) = param_1;
    if ((param_3 & 1) == 0) {
      uStack_68 = 0;
      uStack_6c = 1;
      lVar4 = CreateSema(auStack_70);
      param_1[2] = (int)lVar4;
      if (lVar4 < 0) {
        uVar2 = 0xfffffffd;
      }
      else {
        lVar3 = sceSifSendCmd(0xffffffff80000009,lVar3,0x40,0,0,0);
        uVar2 = 0xfffffffe;
        if (lVar3 != 0) {
          WaitSema(param_1[2]);
          DeleteSema(param_1[2]);
          uVar2 = 0;
        }
      }
    }
    else {
      param_1[2] = -1;
      lVar3 = sceSifSendCmd(0xffffffff80000009,lVar3,0x40,0,0,0);
      uVar2 = 0xfffffffe;
      if (lVar3 != 0) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


