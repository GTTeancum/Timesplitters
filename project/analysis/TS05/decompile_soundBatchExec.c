/* Ghidra analysis, not original source. soundBatchExec at 00204950 */

/* sound/sound.c */

void soundBatchExec(void)

{
  if (0 < soundbatchlen) {
    sceSdTransToIOP(0x1fb19c0,iopcmdbuf,soundbatchlen * 8 + 0xfU & 0xfffffff0,1);
    sceSdRemote(0,0x80b0,iopcmdbuf,0,soundbatchlen);
    return;
  }
  return;
}


