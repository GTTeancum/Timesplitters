/* Ghidra analysis, not original source. splitpageTick at 002310d0 */

/* front/front_mpg.c */

void splitpageTick(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  
  DAT_01fc11fc = DAT_01fc11fc & 0xfffffeff;
  if (*(int *)(&mtree + mtreepos * 8) != 0) {
    DAT_01fc11fc = DAT_01fc11fc | 0x100;
  }
  frontSet(0);
  SetWindow(0,frontmpg_numplayers,0);
  (*(code *)*param_2)(param_1);
  for (iVar1 = 1; iVar1 < frontmpg_numplayers; iVar1 = iVar1 + 1) {
    frontSet(iVar1);
    SetWindow(iVar1,frontmpg_numplayers,0);
    frontTick();
  }
  frontSet(0);
  return;
}


