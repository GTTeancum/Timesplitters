/* Ghidra analysis, not original source. anim_LoadMatrix at 00215700 */

/* anim/anim.c */

void anim_LoadMatrix(int param_1)

{
  anim_SetModelview(animMTXarray + param_1 * 0x40,2);
  return;
}


