/* Ghidra analysis, not original source. fileLoadCD at 00219cc8 */

/* file/file.c */

void fileLoadCD(int param_1,char *param_2,uint param_3)

{
  bool bVar1;
  uint length;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  length = param_3 & 0x7ff;
  iVar5 = (int)param_3 >> 0xb;
  DAT_003afe91 = 1;
  rmode = 0;
  DAT_003afe92 = 0;
  FlushCache(0);
  while (iVar5 != 0) {
    iVar6 = 0x2800;
    if (iVar5 < 0x2801) {
      iVar6 = iVar5;
    }
    bVar1 = true;
    iVar5 = iVar5 - iVar6;
    do {
      while (lVar2 = sceCdRead(param_1,iVar6,param_2,0x3afe90), lVar2 == 0) {
        uVar3 = sceCdGetError();
        scePrintf(0x3a06c8,uVar3);
      }
      do {
        lVar2 = sceCdSync(0);
        iVar4 = 0x100000;
        if (lVar2 == 0) break;
        do {
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      } while (lVar2 != 0);
      lVar2 = sceCdGetError();
      if (lVar2 == 0) {
        bVar1 = false;
      }
      else {
        scePrintf(0x3a06e8);
      }
    } while (bVar1);
    param_2 = param_2 + iVar6 * 0x800;
    param_1 = param_1 + iVar6;
  }
  bVar1 = true;
  if (length == 0) {
    return;
  }
  do {
    while (lVar2 = sceCdRead(param_1,1,0x1fb4440,0x3afe90), lVar2 == 0) {
      uVar3 = sceCdGetError();
      scePrintf(0x3a06c8,uVar3);
    }
    do {
      lVar2 = sceCdSync(0);
      iVar5 = 0x100000;
      if (lVar2 == 0) break;
      do {
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    } while (lVar2 != 0);
    lVar2 = sceCdGetError();
    if (lVar2 == 0) {
      bVar1 = false;
    }
    else {
      scePrintf(0x3a06f8);
    }
    if (!bVar1) {
      bcopy(&oneblockbuffer,param_2,length);
      sceSifWriteBackDCache(param_2,length);
      return;
    }
  } while( true );
}


