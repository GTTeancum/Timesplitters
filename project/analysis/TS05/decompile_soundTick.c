/* Ghidra analysis, not original source. soundTick at 00204ec0 */

/* sound/sound.c */

void soundTick(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  iVar10 = 0;
  announceTick();
  iVar2 = 0;
  do {
    puVar8 = (undefined4 *)((int)&delaysounds + iVar2);
    switch(*puVar8) {
    case 1:
      iVar5 = *(int *)(&DAT_01fb1888 + iVar2) - tickframesi;
      *(int *)(&DAT_01fb1888 + iVar2) = iVar5;
      if (iVar5 < 1) {
        if ((*(ushort *)(sounds + *(int *)(&DAT_01fb1874 + iVar2) * 0x24 + 0x16) & 0x12) == 0) {
          *puVar8 = 6;
        }
        else {
          *puVar8 = 2;
        }
      }
      break;
    case 2:
      if (transinprogress == 0) {
        iVar5 = *(int *)(&DAT_01fb1874 + iVar2);
        transinprogress = 1;
        if (*(int *)(sounds + iVar5 * 0x24 + 0x1c) == 0) {
          lVar4 = fileGetMem(*(undefined4 *)(sounds + iVar5 * 0x24 + 4));
          if (lVar4 == 0) {
            *(undefined2 *)((int)&DAT_01fb187a + iVar2) = 0;
            iVar5 = *(int *)(&DAT_01fb1874 + iVar2);
          }
          else {
            iVar5 = *(int *)(&DAT_01fb1874 + iVar2);
            *(int *)(sounds + iVar5 * 0x24 + 0x1c) = (int)lVar4;
            uVar3 = fileSize(*(undefined4 *)(sounds + iVar5 * 0x24 + 4));
            iVar5 = *(int *)(&DAT_01fb1874 + iVar2);
            *(undefined4 *)(sounds + iVar5 * 0x24 + 0x20) = uVar3;
          }
        }
        sceSdTransToIOP(*(undefined4 *)(sounds + iVar5 * 0x24 + 0x1c),ioploadbuf,
                        *(int *)(sounds + iVar5 * 0x24 + 0x20) + 0x40,1);
        *puVar8 = 3;
        break;
      }
      goto LAB_002051e8;
    case 3:
      *puVar8 = 4;
      break;
    case 4:
      if ((*(ushort *)(sounds + *(int *)(&DAT_01fb1874 + iVar2) * 0x24 + 0x16) & 0x10) == 0) {
        iVar5 = -demandbuf_138;
        demandbuf_138 = iVar5 + 1;
        soundSelectBuffer(iVar5 + 2);
        soundResetBuffer(demandbuf_138 + 1);
        iVar2 = *(int *)(&DAT_01fb1874 + iVar2);
      }
      else {
        soundSelectBuffer(3);
        soundResetBuffer(3);
        iVar2 = *(int *)(&DAT_01fb1874 + iVar2);
      }
      *(undefined4 *)(sounds + iVar2 * 0x24 + 0x18) = *(undefined4 *)(thissoundbuf + 8);
      if (*(int *)(sounds + iVar2 * 0x24 + 0x20) < 1) {
        *puVar8 = 0;
      }
      else {
        sceSdRemote(1,0x80d0,1,0,ioploadbuf + 0x40);
        *puVar8 = 5;
      }
      soundSelectBuffer(0);
      goto LAB_002051e8;
    case 5:
      if (lvlevelnum == 0x66) {
        sceSdRemote(1,0x80f0,1,1);
      }
      transinprogress = 0;
      *puVar8 = 6;
      break;
    case 6:
      if ((*(ushort *)(sounds + *(int *)(&DAT_01fb1874 + iVar2) * 0x24 + 0x16) & 2) == 0) {
        if ((*(ushort *)(sounds + *(int *)(&DAT_01fb1874 + iVar2) * 0x24 + 0x16) & 0x10) != 0) {
          soundSetChannel(0,4);
        }
        sVar1 = *(short *)(&DAT_01fb1878 + iVar2);
      }
      else {
        uVar7 = 2;
        if (demandbuf_138 == 0) {
          uVar7 = 3;
        }
        soundSetChannel(0,uVar7);
        sVar1 = *(short *)(&DAT_01fb1878 + iVar2);
      }
      puVar6 = &DAT_01fb187c + iVar2;
      if (sVar1 == 0) {
        puVar6 = (undefined *)0x0;
      }
      uVar3 = soundStart(*(undefined4 *)(&DAT_01fb1874 + iVar2),puVar6);
      *(undefined4 *)(&DAT_01fb188c + iVar2) = uVar3;
      if ((*(ushort *)(sounds + *(int *)(&DAT_01fb1874 + iVar2) * 0x24 + 0x16) & 0x12) != 0) {
        soundSetChannel(0xffffffffffffffff,0xffffffffffffffff);
      }
      *puVar8 = 0;
    }
LAB_002051e8:
    iVar10 = iVar10 + 1;
    iVar2 = iVar10 * 0x20;
    if (9 < iVar10) {
      iVar10 = 0;
      iVar2 = numloopsounds;
      if (0 < numloopsounds) {
        do {
          iVar5 = iVar10 * 0x18;
          if (*(int *)(&DAT_01fb17e4 + iVar5) != 0) {
            soundCalcVol(*(undefined4 *)(&DAT_01fb17f4 + iVar5),*(undefined4 *)(&loopsounds + iVar5)
                         ,&DAT_01fb17e8 + iVar5,&uStack_a0,(uint)&uStack_a0 | 4,0);
            uVar9 = (iVar10 + 5) * 2;
            soundBatchAdd(1,uVar9 & 0xfffe,uStack_a0);
            soundBatchAdd(1,uVar9 & 0xfffe | 0x100,uStack_9c);
            iVar2 = numloopsounds;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar2);
      }
      soundBatchExec();
      soundBatchReset();
      return;
    }
  } while( true );
}


