/* Ghidra analysis, not original source. rtcGetTime at 002b3c50 */

/* util/rtc.c */

undefined8 rtcGetTime(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_20 [16];
  
  lVar1 = sceCdReadClock(auStack_20);
  if (lVar1 == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    sceScfGetLocalTimefromRTC(auStack_20);
    uVar2 = clock2u32(auStack_20);
  }
  return uVar2;
}


