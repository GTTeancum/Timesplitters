/* Ghidra analysis, not original source. stringeditStart at 0022fd98 */

/* front/textbox.c */

void stringeditStart(undefined8 param_1,char *param_2,int param_3,long param_4,int param_5,
                    long param_6,long param_7)

{
  int iVar1;
  int *piVar2;
  
  stringeditSet();
  piVar2 = textbox;
  textbox[0xd] = param_3;
  piVar2[0xc] = (int)param_2;
  *piVar2 = (int)param_6;
  piVar2[1] = (int)param_7;
  piVar2[8] = 0;
  piVar2[9] = 0;
  piVar2[6] = 0;
  if (*param_2 == '\0') {
    piVar2[4] = (int)param_4;
  }
  else {
    do {
      iVar1 = piVar2[6];
      piVar2[6] = iVar1 + 1;
    } while (param_2[iVar1 + 1] != '\0');
    piVar2[4] = (int)param_4;
  }
  piVar2[5] = param_5;
  if (param_6 == 0) {
    *piVar2 = (DAT_003299f8 - window) + -0x8c;
  }
  if (param_7 == 0) {
    piVar2[1] = (DAT_00329a0c - DAT_00329a04) + -0x2e;
  }
  piVar2[2] = 0x118;
  piVar2[3] = 0x5c;
  if (2 < param_4) {
    piVar2[3] = 0x4f;
  }
  piVar2[0xe] = 0;
  piVar2[7] = (int)chartab1;
  piVar2[10] = 0;
  piVar2[0xb] = 0;
  return;
}


