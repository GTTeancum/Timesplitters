/* Ghidra analysis, not original source. packfileSeek at 0021a150 */

/* file/file.c */

int * packfileSeek(char *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int aiStack_50 [12];
  
  iVar3 = strcmp(param_1,s_host0__003ae550);
  if (-1 < iVar3) {
    param_1 = param_1 + 6;
  }
  if ((remember == (int *)0x0) ||
     (iVar3 = strcmp(param_1,(char *)remember), piVar4 = remember, iVar3 != 0)) {
    strncpy((char *)aiStack_50,param_1,0x30);
    iVar3 = 0;
    if (0 < numpackfiles) {
      do {
        iVar6 = 0;
        iVar1 = *(int *)(*(int *)(&packfiles + iVar3 * 4) + 0xc);
        piVar4 = *(int **)(*(int *)(&packfiles + iVar3 * 4) + 0x14);
        if (0 < iVar1) {
          do {
            bVar2 = true;
            if (*piVar4 != 0) {
              if (*piVar4 == aiStack_50[0]) {
                for (iVar5 = 1; iVar5 < 0xc; iVar5 = iVar5 + 1) {
                  if (piVar4[iVar5] == 0) break;
                  if (piVar4[iVar5] != aiStack_50[iVar5]) {
                    bVar2 = false;
                    break;
                  }
                }
              }
              else {
                bVar2 = false;
              }
            }
            iVar6 = iVar6 + 1;
            if (bVar2) {
              remember = piVar4;
              pakfilefound = *(undefined4 *)(&packfiles + iVar3 * 4);
              return piVar4;
            }
            piVar4 = piVar4 + 0xf;
          } while (iVar6 < iVar1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < numpackfiles);
    }
    piVar4 = (int *)0x0;
  }
  return piVar4;
}


