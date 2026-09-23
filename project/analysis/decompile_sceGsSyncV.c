/* Ghidra analysis, not original source. sceGsSyncV at 002ce2d8 */

/* graphdev.c */

uint sceGsSyncV(void)

{
  ulong uVar1;
  short *psVar2;
  uint uVar3;
  long lVar4;
  
  psVar2 = (short *)sceGsGetGParam();
  if (*(int *)(psVar2 + 4) == 0) {
    VSync();
    uVar3 = 1;
    if (*psVar2 == 1) {
      uVar1 = REG_GS_CSR;
      uVar3 = (uint)(uVar1 >> 0xd) & 1;
    }
  }
  else {
    lVar4 = VSync2();
    uVar3 = 1;
    if (*psVar2 == 1) {
      uVar3 = (uint)(lVar4 >> 0xd) & 1;
    }
  }
  return uVar3;
}


