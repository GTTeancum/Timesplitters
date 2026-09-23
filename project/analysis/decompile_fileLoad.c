/* ANALYSIS OUTPUT, not original source. Function fileLoad at 0021a3f8 */

/* file/file.c */

undefined8 fileLoad(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = fileSize();
  if (0 < lVar1) {
    uVar2 = memAllocAlign64((int)lVar1 + 0xfU & 0xfffffff0,param_2);
    fileLoadTo(param_1,uVar2,lVar1);
  }
  if (param_3 != 0) {
    *(int *)param_3 = (int)lVar1;
  }
  return uVar2;
}


