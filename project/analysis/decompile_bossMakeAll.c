/* Ghidra analysis, not original source. bossMakeAll at 002001c8 */

/* boss/boss.c */

void bossMakeAll(void)

{
  bossMake();
  trigMake();
  memMake(0x3b0380,0x1ae1c00);
  packfileMake();
  profileMake();
  windowMake();
  joyMake();
  soundMake();
  musicMake();
  mcardMake();
  mcseqMake();
  ilinkMake();
  cheatsMake();
  signonMake();
  frontmpgMake();
  mapmakerMake();
  return;
}


