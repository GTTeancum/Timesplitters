/* Ghidra analysis, not original source. mcardReset at 00207a68 */

/* mcard/mcard.c */

void mcardReset(void)

{
  iconfilename = "tssave.ico";
  DAT_003afe54 = "tsmaps.ico";
  iconfiledata = fileLoad(0x399c78,1,0x3afe60);
  DAT_003afe5c = fileLoad(0x399c90,1,0x3afe64);
  mcardstate = 0;
  return;
}


