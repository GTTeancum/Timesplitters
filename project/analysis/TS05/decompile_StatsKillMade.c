/* Ghidra analysis, not original source. StatsKillMade at 00220bc8 */

/* WARNING: Removing unreachable block (ram,0x00220df0) */
/* WARNING: Removing unreachable block (ram,0x00220f1c) */
/* game/stats.c */

void StatsKillMade(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  int iVar13;
  
  piVar9 = (int *)param_2;
  StatsAdd(0x3f800000,1,*piVar9);
  piVar8 = (int *)param_1;
  if (param_1 == 0) {
    iVar13 = *piVar9;
  }
  else {
    StatsAdd(0x3f800000,0,*piVar8);
    StatsAddChar(0x3f800000,1,*piVar9,*piVar8);
    StatsAddChar(0x3f800000,0,*piVar8,*piVar9);
    StatsAddGun(0x3f800000,1,*piVar8,piVar8[0x41]);
    if (piVar9[2] == 2) {
      StatsAdd(0x3f800000,0x40,*piVar8);
      iVar13 = *piVar9;
    }
    else {
      iVar13 = *piVar9;
    }
  }
  if (iVar13 < 0xe) {
    if ((DAT_0032c4f0 - 6U < 2) || ((DAT_0032c4f8 & 0x20) != 0)) {
      if (iVar13 < 4) goto LAB_00220ce8;
    }
    else if (iVar13 < lvnumplayers + numactivechars) {
LAB_00220ce8:
      *(undefined4 *)(matchstats + iVar13 * 0x558 + 0x4f8) = 0;
      *(undefined4 *)(matchstats + *piVar9 * 0x558 + 0x550) = 0;
      *(undefined4 *)(matchstats + *piVar9 * 0x558 + 0x54c) = 0;
    }
  }
  if (param_1 == param_2) {
    StatsAdd(0x3f800000,2,*piVar9);
    iVar13 = *piVar9;
  }
  else {
    StatsAdd(0x3f800000,4,*piVar9);
    if (param_1 != 0) {
      StatsAdd(0x3f800000,3,*piVar8);
      iVar13 = *piVar8;
      if (iVar13 < 0xe) {
        if ((DAT_0032c4f0 - 6U < 2) || ((DAT_0032c4f8 & 0x20) != 0)) {
          if (3 < iVar13) goto LAB_00221054;
        }
        else if (lvnumplayers + numactivechars <= iVar13) {
          iVar13 = *piVar9;
          goto LAB_00221058;
        }
        if (*(int *)(matchstats + iVar13 * 0x558 + 0x4f8) != 0) {
          *(int *)(matchstats + iVar13 * 0x558 + 0x54c) =
               (*(int *)(matchstats + iVar13 * 0x558 + 0x54c) + 1) % 0x14;
          iVar13 = *piVar8;
        }
        iVar13 = iVar13 * 0x558;
        fVar10 = (float)gameframe * DAT_003ac86c;
        *(int *)(matchstats + iVar13 + 0x4f8) = *(int *)(matchstats + iVar13 + 0x4f8) + 1;
        iVar4 = *piVar8;
        *(float *)(matchstats + *(int *)(matchstats + iVar13 + 0x54c) * 4 + iVar13 + 0x4fc) = fVar10
        ;
        if (*(float *)(matchstats + iVar4 * 0x558 + 0x14) <
            (float)*(int *)(matchstats + iVar4 * 0x558 + 0x4f8)) {
          StatsSet(5,iVar4);
          iVar4 = *piVar8;
        }
        iVar3 = iVar4 * 0x558;
        iVar7 = 0;
        iVar6 = 0;
        iVar13 = *(int *)(matchstats + iVar3 + 0x54c);
        iVar5 = iVar13 * 4;
        iVar1 = iVar5 + iVar3;
        iVar2 = *(int *)(matchstats + iVar3 + 0x4f8);
        if (0x14 < *(int *)(matchstats + iVar3 + 0x4f8)) {
          iVar2 = 0x14;
        }
        if (0 < iVar2) {
          while( true ) {
            if (*(float *)(matchstats + iVar1 + 0x4fc) - 3.0 <
                *(float *)(matchstats + iVar5 + iVar4 * 0x558 + 0x4fc)) {
              iVar6 = iVar6 + 1;
            }
            iVar13 = (iVar13 + 0x13) % 0x14;
            iVar7 = iVar7 + 1;
            iVar3 = *(int *)(matchstats + iVar4 * 0x558 + 0x4f8);
            if (0x14 < *(int *)(matchstats + iVar4 * 0x558 + 0x4f8)) {
              iVar3 = 0x14;
            }
            if (iVar3 <= iVar7) break;
            iVar5 = iVar13 << 2;
          }
        }
        if (*(float *)(matchstats + iVar4 * 0x558 + 0x18) < (float)iVar6) {
          StatsSet(6,iVar4);
          iVar4 = *piVar8;
        }
        if (*(int *)(matchstats + iVar4 * 0x558 + 0x550) == 0) {
          *(int *)(matchstats + iVar4 * 0x558 + 0x550) = 1;
          iVar4 = *piVar8;
        }
        fVar10 = DAT_003ac870;
        if ((float)gameframe * DAT_003ac870 < *(float *)(matchstats + iVar4 * 0x558 + 0x554) + 2.0)
        {
          *(int *)(matchstats + iVar4 * 0x558 + 0x550) =
               *(int *)(matchstats + iVar4 * 0x558 + 0x550) + 1;
          iVar4 = *piVar8;
        }
        iVar13 = *(int *)(matchstats + iVar4 * 0x558 + 0x550);
        fVar11 = (float)StatsGet(7,iVar4);
        if (fVar11 < (float)iVar13) {
          StatsSet((float)*(int *)(matchstats + *piVar8 * 0x558 + 0x550),7);
          iVar13 = *piVar8;
        }
        else {
          iVar13 = *piVar8;
        }
        *(float *)(matchstats + iVar13 * 0x558 + 0x554) = (float)gameframe * fVar10;
      }
    }
LAB_00221054:
    iVar13 = *piVar9;
  }
LAB_00221058:
  if (iVar13 < 0xe) {
    if ((DAT_0032c4f0 - 6U < 2) || ((DAT_0032c4f8 & 0x20) != 0)) {
      if (iVar13 < 4) {
        iVar13 = *piVar9;
        goto LAB_002210b8;
      }
    }
    else if (iVar13 < lvnumplayers + numactivechars) {
      iVar13 = *piVar9;
LAB_002210b8:
      fVar10 = (float)StatsGet(0x41,iVar13);
      fVar11 = (float)StatsGet(0x42,*piVar9);
      iVar13 = *piVar9;
      if (fVar10 < fVar11) {
        uVar12 = StatsGet(0x41,iVar13);
        StatsSet(uVar12,0x42,*piVar9);
        iVar13 = *piVar9;
      }
      fVar10 = (float)StatsGet(0x41,iVar13);
      fVar11 = (float)StatsGet(0x43,*piVar9);
      iVar13 = *piVar9;
      if (fVar11 < fVar10) {
        uVar12 = StatsGet(0x41,iVar13);
        StatsSet(uVar12,0x43,*piVar9);
        iVar13 = *piVar9;
      }
      StatsSet(0,0x41,iVar13);
      return;
    }
  }
  return;
}


