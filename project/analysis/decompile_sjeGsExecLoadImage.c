/* Ghidra analysis, not original source. sjeGsExecLoadImage at 002b7040 */

/* em/em.c */

undefined4 sjeGsExecLoadImage(uint param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  
  uVar2 = REG_DMAC_2_GIF_CHCR;
  uVar4 = 0;
  do {
    if ((uVar2 & 0x100) == 0) {
      REG_DMAC_2_GIF_QWC = 6;
      REG_DMAC_2_GIF_MADR = param_1 & 0xfffffff;
      REG_DMAC_2_GIF_CHCR = 0x101;
      SYNC(0);
      uVar2 = REG_DMAC_2_GIF_CHCR;
      while( true ) {
        if ((uVar2 & 0x100) == 0) {
          REG_DMAC_2_GIF_QWC = (uint)*(undefined8 *)(param_1 + 0x50) & 0x7fff;
          REG_DMAC_2_GIF_MADR = param_2 & 0xfffffff;
          REG_DMAC_2_GIF_CHCR = 0x101;
          SYNC(0);
          return 0;
        }
        bVar1 = 100000 < uVar4;
        uVar4 = uVar4 + 1;
        if (bVar1) break;
        uVar2 = REG_DMAC_2_GIF_CHCR;
      }
      pcVar3 = "sjeGsExecLoadImage: DMA Ch.2 does not terminate (during)\n";
LAB_002b7118:
      scePrintf(pcVar3);
      return 0xffffffff;
    }
    bVar1 = 100000 < uVar4;
    uVar4 = uVar4 + 1;
    if (bVar1) {
      pcVar3 = "sjeGsExecLoadImage: DMA Ch.2 does not terminate (before)\n";
      goto LAB_002b7118;
    }
    uVar2 = REG_DMAC_2_GIF_CHCR;
  } while( true );
}


