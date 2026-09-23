/* Ghidra analysis, not original source. soundMake at 002043e8 */

/* sound/sound.c */

void soundMake(void)

{
  long lVar1;
  
  sceSifInitIopHeap();
  lVar1 = sceSifAllocIopHeap(0x40000);
  ioploadbuf = (undefined4)lVar1;
  if (lVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = sceSifAllocIopHeap(0x640);
  iopcmdbuf = (undefined4)lVar1;
  if (lVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  sceSdRemoteInit();
  sceSdRemote(1,0x8000,0);
  sceSdRemote(1,0x8070,10,0x800);
  return;
}


