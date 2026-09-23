/* ANALYSIS OUTPUT, not original source. Function fileSize at 0021a338 */

/* file/file.c */

int fileSize(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  if ((numpackfiles == 0) || (lVar2 = packfileSeek(), lVar2 == 0)) {
    if (displayallfileops != 0) {
      pause();
    }
    lVar2 = sceOpen(param_1,1);
    if (lVar2 < 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = sceLseek(lVar2,0,2);
      if (displayallfileops != 0) {
        pause();
      }
      sceClose(lVar2);
    }
  }
  else {
    iVar1 = *(int *)((int)lVar2 + 0x34);
    if (*(int *)((int)lVar2 + 0x38) != 0) {
      iVar1 = iVar1 + 0x100;
    }
  }
  return iVar1;
}


