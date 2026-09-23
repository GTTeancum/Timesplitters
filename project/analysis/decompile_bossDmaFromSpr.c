/* Ghidra analysis, not original source. bossDmaFromSpr at 00200608 */

/* boss/boss.c */

void bossDmaFromSpr(uint param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = dmaSpr;
  *(uint *)(dmaSpr + 0x80) = param_1 & 0xfffffff;
  sceDmaSendN(iVar1,param_2,param_3 >> 4);
  return;
}


