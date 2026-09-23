/* Ghidra analysis, not original source. sceDmaGetChan at 002cf150 */

/* libdma.c */

undefined * sceDmaGetChan(ulong param_1)

{
  if (param_1 < 10) {
    return (&dch)[(int)param_1];
  }
  return (undefined *)0x0;
}


