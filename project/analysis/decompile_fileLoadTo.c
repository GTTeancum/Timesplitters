/* ANALYSIS OUTPUT, not original source. Function fileLoadTo at 0021a488 */

/* file/file.c */

undefined4 fileLoadTo(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  if (numpackfiles == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = packfileSeek();
    uVar2 = 0;
    if (lVar3 != 0) {
      iVar4 = (int)lVar3;
      iVar1 = *(int *)(iVar4 + 0x38);
      uVar2 = *(undefined4 *)(iVar4 + 0x34);
      if (iVar1 == 0) {
        fileLoadCD(*(int *)(pakfilefound + 4) + (*(int *)(iVar4 + 0x30) >> 0xb),param_2,uVar2);
        if (displayallfileops != 0) {
          pause();
        }
      }
      else {
        iVar5 = ((int)param_2 + (param_3 & 0xfffffff0)) - (iVar1 + 0xfU & 0xfffffff0);
        fileLoadCD(*(int *)(pakfilefound + 4) + (*(int *)(iVar4 + 0x30) >> 0xb),iVar5,iVar1);
        if (displayallfileops == 0) {
          uVar2 = *(undefined4 *)(iVar4 + 0x38);
        }
        else {
          pause();
          uVar2 = *(undefined4 *)(iVar4 + 0x38);
        }
        uVar2 = fileInflate(iVar5,uVar2,param_2);
      }
    }
  }
  return uVar2;
}


