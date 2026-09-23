/* Ghidra analysis, not original source. fileInflate at 0021c1b0 */

/* file/inflate.c */

undefined4 fileInflate(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  slide = scratchbuffer;
  bytes_out = 0;
  outcnt = 0;
  inptr = 0;
  inbuf = param_1;
  insize = param_2;
  bufferout = param_3;
  GetHeader();
  Inflate();
  return bytes_out;
}


