/* Ghidra analysis, not original source. sceMtapGetConnection at 002d5d18 */

/* libmtap.c */

undefined4 sceMtapGetConnection(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  sif_buffer = param_1;
  lVar2 = sceSifCallRpc(0x1ff13d0,1,0,0x1ff1480,0x80,0x1ff1480,0x80,0);
  uVar1 = DAT_01ff1484;
  if (lVar2 < 0) {
    DPRINT(0x3aa718);
    uVar1 = 0;
  }
  return uVar1;
}


