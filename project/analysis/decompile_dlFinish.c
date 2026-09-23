/* Ghidra analysis, not original source. dlFinish at 002b7a10 */

/* em/dl.c */

void dlFinish(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)memdbAlloc(0x30);
  *(undefined1 *)((int)gfxtag + 3) = 0x30;
  *puVar1 = 0x6c028000;
  *(undefined4 **)(gfxtag + 2) = puVar1;
  puVar1[1] = 0x8001;
  puVar1[2] = 0x10000000;
  puVar1[3] = 0xe;
  *gfxtag = 3;
  puVar1[4] = 0;
  gfxtag = gfxtag + 8;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0x60;
  puVar1[8] = 0;
  puVar1[9] = 0x140007fc;
  puVar1[10] = &DAT_11000000;
  puVar1[0xb] = 0;
  return;
}


