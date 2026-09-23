/* Ghidra analysis, not original source. sceDmaSend at 002cf4a0 */

/* libdma.c */

void sceDmaSend(uint *param_1,uint param_2)

{
  int iVar1;
  
  if ((*param_1 & 0x100) != 0) {
    iVar1 = 0xffffff;
    do {
      if (iVar1 < 0) {
        printf("libdma: sync timeout\n");
        if ((*param_1 >> 8 & 1) != 0) {
          *param_1 = *param_1 & 0xfffffeff;
        }
      }
      iVar1 = iVar1 + -1;
    } while ((*param_1 & 0x100) != 0);
  }
  if (param_1[0xc] != 0xffffffff) {
    param_1[0xc] = param_2;
  }
  param_1[8] = 0;
  *param_1 = *param_1 & 0xfffffff3 | 0x105;
  return;
}


