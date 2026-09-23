/* Ghidra analysis, not original source. sceDmaRecvN at 002cf810 */

/* libdma.c */

void sceDmaRecvN(uint *param_1,uint param_2,uint param_3)

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
  if (param_1[4] != 0xffffffff) {
    param_1[4] = param_2;
  }
  param_1[8] = param_3;
  *param_1 = *param_1 & 0xfffffff2 | 0x100;
  return;
}


