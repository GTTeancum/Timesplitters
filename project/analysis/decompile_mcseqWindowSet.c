/* Ghidra analysis, not original source. mcseqWindowSet at 00243f28 */

/* front/mcseq.c */

void mcseqWindowSet(void)

{
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iStack_20 = DAT_003299fc + 7;
  if (-1 < DAT_003299fc) {
    iStack_20 = DAT_003299fc;
  }
  iStack_1c = (int)DAT_00329a10 + 3;
  if (-1 < (int)DAT_00329a10) {
    iStack_1c = (int)DAT_00329a10;
  }
  iStack_20 = iStack_20 >> 3;
  iStack_1c = iStack_1c >> 2;
  iStack_14 = DAT_00329a08 - iStack_1c;
  iStack_18 = DAT_003299f4 - iStack_20;
  zoomboxSet(0,&iStack_20,0x2880);
  return;
}


