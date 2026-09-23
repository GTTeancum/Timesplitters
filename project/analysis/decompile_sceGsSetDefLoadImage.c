/* Ghidra analysis, not original source. sceGsSetDefLoadImage at 002ce688 */

/* graphdev.c */

undefined4
sceGsSetDefLoadImage
          (ulong *param_1,short param_2,short param_3,short param_4,short param_5,short param_6,
          short param_7,short param_8)

{
  undefined4 uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_7;
  iVar3 = (int)param_8;
  uVar2 = 0;
  switch(param_4) {
  case 0:
  case 0x30:
    uVar2 = (ulong)(iVar4 * iVar3 >> 2);
    break;
  case 1:
  case 0x31:
    uVar2 = (ulong)(iVar4 * iVar3 * 3 >> 4);
    break;
  case 2:
  case 10:
  case 0x32:
  case 0x3a:
    uVar2 = (ulong)(iVar4 * iVar3 >> 3);
    break;
  case 0x13:
  case 0x1b:
    uVar2 = (ulong)(iVar4 * iVar3 >> 4);
    break;
  case 0x14:
  case 0x24:
  case 0x2c:
    uVar2 = (ulong)(iVar4 * iVar3 >> 5);
  }
  if ((long)uVar2 < 0x8000) {
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)((int)param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    *(undefined4 *)((int)param_1 + 0x5c) = 0;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((int)param_1 + 0xc) = 0;
    param_1[10] = param_1[10] & 0xf3ffffffffff8000 | uVar2 & 0x7fff | 0x800000000008000;
    *param_1 = *param_1 & 0xfffffffffff8000 | 0x1000000000000004;
    param_1[1] = param_1[1] & 0xfffffffffffffff0 | 0xe;
    param_1[2] = ((long)(int)param_2 << 0x30) >> 0x10 | (long)(int)param_3 << 0x30 |
                 (long)(int)param_4 << 0x38;
    param_1[3] = 0x50;
    param_1[4] = ((long)(int)param_5 << 0x30) >> 0x10 | (long)(int)param_6 << 0x30;
    param_1[5] = 0x51;
    param_1[6] = (long)param_7 | ((long)iVar3 << 0x30) >> 0x10;
    param_1[7] = 0x52;
    param_1[9] = 0x53;
    param_1[8] = 0;
    SYNC(0);
    uVar1 = 6;
  }
  else {
    printf("sceGsSetDefLoadImage: too big size\r\n");
    uVar1 = 0;
  }
  return uVar1;
}


