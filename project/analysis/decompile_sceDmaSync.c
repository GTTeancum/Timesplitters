/* Ghidra analysis, not original source. sceDmaSync at 002cfa00 */

/* libdma.c */

uint sceDmaSync(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (param_2 == 1) {
    uVar1 = *param_1 >> 8 & 1;
  }
  else {
    uVar1 = *param_1;
    if (param_3 == 0) {
      param_3 = 0x1000000;
    }
    while ((uVar1 & 0x100) != 0) {
      param_3 = param_3 + -1;
      if (param_3 < 0) {
        printf("libdma: sync timeout\n");
        if ((*param_1 >> 8 & 1) != 0) {
          *param_1 = *param_1 & 0xfffffeff;
        }
      }
      uVar1 = *param_1;
    }
    uVar1 = 0;
  }
  return uVar1;
}


