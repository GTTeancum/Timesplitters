/* Ghidra analysis, not original source. sceSifSyncIop at 002d4550 */

/* iopreset.c */

bool sceSifSyncIop(void)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = sceSifGetReg(4);
  bVar1 = (uVar2 & 0x40000) != 0;
  if (bVar1) {
    sceSifSetReg(4,0x40000);
    sceTtyInit();
  }
  return bVar1;
}


