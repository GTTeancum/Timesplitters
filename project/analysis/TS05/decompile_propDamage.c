/* Ghidra analysis, not original source. propDamage at 00271998 */

/* prop/prop.c */

void propDamage(float param_1,int param_2,long param_3,undefined4 *param_4,long param_5,
               undefined4 param_6,undefined1 *param_7,long param_8,uint param_9)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  short *psVar10;
  short *psVar11;
  undefined4 *puVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 *puStack_e8;
  int iStack_e0;
  
  if (updateframesi == 0) {
    return;
  }
  if ((((param_2 != 0) && (*(int *)(param_2 + 8) == 8)) &&
      (iVar15 = *(int *)(param_2 + 0x160), *(short *)(iVar15 + 4) == 0x1f)) &&
     ((*(int *)(iVar15 + 0xa9c) == 0x2000000 && (*(int *)(iVar15 + 0xaa8) == 0)))) {
    return;
  }
  iVar13 = (int)param_5;
  iVar15 = (int)param_3;
  if (param_3 == 0) {
LAB_00271a80:
    uVar6 = *(uint *)(param_2 + 0x10);
  }
  else {
    if (*(int *)(iVar15 + 8) == 8) {
      iVar5 = *(int *)(iVar15 + 0x160);
      *(undefined4 *)(iVar5 + 0xb74) = *param_4;
      *(undefined4 *)(iVar5 + 0xb78) = param_4[1];
      *(undefined4 *)(iVar5 + 0xb7c) = param_4[2];
      if (-1 < param_5) {
        *(int *)(iVar5 + 0xb80) = iVar13;
      }
      goto LAB_00271a80;
    }
    uVar6 = *(uint *)(param_2 + 0x10);
  }
  if ((uVar6 & 0x10) == 0) {
    if ((param_9 & 2) == 0) {
      return;
    }
    iVar5 = *(int *)(param_2 + 8);
  }
  else {
    iVar5 = *(int *)(param_2 + 8);
  }
  if (iVar5 != 8) {
    if (*(int *)(param_2 + 4) - 0xc9U < 2) {
      *(float *)(param_2 + 0x214) = *(float *)(param_2 + 0x214) + param_1 * DAT_003acd64;
    }
    else {
      *(float *)(param_2 + 0x214) = *(float *)(param_2 + 0x214) + param_1;
    }
    if (*(code **)(param_2 + 400) == (code *)0x0) {
      return;
    }
    (**(code **)(param_2 + 400))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  fVar22 = 1.0;
  piVar14 = (int *)0x0;
  piVar2 = *(int **)(param_2 + 0x164);
  piVar3 = *(int **)(param_2 + 0x160);
  if ((param_3 != 0) && (*(int *)(iVar15 + 8) == 8)) {
    piVar14 = *(int **)(iVar15 + 0x160);
  }
  fVar23 = param_1;
  fVar16 = fVar22;
  if (((DAT_0032c4f8 & 0x20) == 0) || (fVar16 = 1.0, DAT_0032c4f0 == 6)) {
LAB_00271b3c:
    fVar22 = fVar16;
    if (piVar14 == (int *)0x0) {
      iVar5 = *piVar3;
    }
    else if ((param_8 == 0) && (param_5 != 1)) {
      iVar5 = *piVar3;
    }
    else {
      if (param_5 == 1) {
        StatsAdd(0x3f800000,0xe,*piVar14);
        StatsAdd(0x3f800000,0x1c,*piVar3);
      }
      else {
        StatsAddGun(0x3f800000,2,*piVar14,piVar14[0x41]);
        StatsAddChar(0x3f800000,3,*piVar3,*piVar14);
        fVar16 = (float)StatsGet(9,*piVar14);
        fVar18 = (float)StatsGet(8,*piVar14);
        if (fVar16 < fVar18) {
          StatsAdd(0x3f800000,9,*piVar14);
        }
        StatsAddChar(0x3f800000,2,*piVar14,*piVar3);
      }
      if (param_8 == 0) {
        iVar5 = *piVar3;
      }
      else {
        if (*(int *)((int)param_8 + 0x9c) != 0) {
          StatsAdd(0x3f800000,0x3d,*piVar14);
          goto LAB_00271c30;
        }
        iVar5 = *piVar3;
      }
    }
  }
  else {
    iVar5 = challengeGetSetup();
    fVar23 = fVar23 * *(float *)(*piVar3 * 0x10 + *(int *)(iVar5 + 0x30) + 4);
    if (piVar14 != (int *)0x0) {
      iVar5 = challengeGetSetup();
      fVar23 = fVar23 * *(float *)(*piVar14 * 0x10 + *(int *)(iVar5 + 0x30) + 8);
      fVar16 = fVar22;
      goto LAB_00271b3c;
    }
LAB_00271c30:
    iVar5 = *piVar3;
  }
  StatsAdd(0x3f800000,0x1a,iVar5);
  if (((0.0 < (float)piVar3[0x2d5]) && (1 < DAT_0032c4f0 - 6U)) && ((param_9 & 2) == 0)) {
    soundStart(0xd9,param_2 + 0x30);
    return;
  }
  if ((piVar2 != (int *)0x0) && (piVar2[0x4a] != 4)) {
    piVar3[0x40] = iVar15;
  }
  if (param_5 < 8) {
    animHitReact(param_2);
  }
  iStack_e0 = 0;
  puStack_e8 = param_7;
  if (iVar13 - 1U < 7) {
    iVar5 = chrGetLastHitPart();
    iVar5 = *(int *)(iVar5 * 4 + *(int *)(*(int *)(*(int *)(param_2 + 0x20) + 0x5c) + 0x20));
    if ((DAT_0032c4f8 & 0x20) == 0) goto LAB_00271d6c;
    uVar6 = iVar5 - 1;
    if (DAT_0032c4ec == 1) {
      bVar4 = uVar6 < 0x11;
      if (param_3 != 0) {
        uVar6 = iVar5 - 1;
        if (*(int *)(iVar15 + 0x164) != 0) {
          bVar4 = uVar6 < 0x11;
          if (piVar2 != (int *)0x0) goto LAB_00271d74;
          uVar6 = iVar5 - 1;
          if (*(int *)(*(int *)(param_2 + 0x160) + 8) == 1) {
            bVar4 = uVar6 < 0x11;
            if (piVar14 == (int *)0x0) goto LAB_00271d74;
            uVar6 = iVar5 - 1;
            if (piVar14[0x41] == 0) {
              if (iVar5 - 2U < 2) {
                iVar5 = 0xb;
              }
              else if (iVar5 == 7) {
                iVar5 = 0xb;
              }
              else {
                uVar6 = iVar5 - 1;
                if (iVar5 != 0) goto LAB_00271d70;
                iVar5 = 0xb;
              }
LAB_00271d6c:
              uVar6 = iVar5 - 1;
            }
          }
        }
        goto LAB_00271d70;
      }
    }
    else {
LAB_00271d70:
      bVar4 = uVar6 < 0x11;
    }
LAB_00271d74:
    if (!bVar4) goto LAB_00271f18;
    switch(iVar5) {
    case 0:
    case 1:
    case 2:
      iStack_e0 = 1;
      break;
    case 3:
    case 4:
    case 5:
    case 6:
      iStack_e0 = 3;
      fVar22 = DAT_003acd28;
      break;
    case 7:
    case 8:
    case 9:
    case 10:
      iStack_e0 = 4;
      fVar22 = DAT_003acd2c;
      break;
    case 0xb:
      iStack_e0 = 2;
      lVar8 = 0;
      if (param_7 == (undefined1 *)0x0) {
        puStack_e8 = bd_363;
      }
      fVar16 = 5.0;
      fVar22 = fVar16;
      if (((param_3 != 0) && (fVar22 = 5.0, *(int *)(iVar15 + 0x164) != 0)) &&
         (piVar2 == (int *)0x0)) {
        lVar8 = headPropNew(param_2,puStack_e8);
        fVar22 = fVar16;
      }
      if (lVar8 != 0) {
        if (*(int *)(*(int *)(param_2 + 0x160) + 8) == 1) {
          *(undefined4 *)(param_2 + 0x208) = 0;
          if (piVar14 != (int *)0x0) {
            StatsKillMade(piVar14);
            if (((DAT_0032c4f0 == 6) && (param_3 != 0)) && (*(int *)(iVar15 + 8) == 8)) {
              *(int *)(*(int *)(iVar15 + 0x160) + 0xf8) =
                   *(int *)(*(int *)(iVar15 + 0x160) + 0xf8) + 10;
            }
            goto LAB_00271e64;
          }
        }
        else {
LAB_00271e64:
          if ((piVar14 != (int *)0x0) && (StatsAdd(0x3f800000,0x17,*piVar14), piVar14[0x41] == 0)) {
            StatsAdd(0x3f800000,0x18,*piVar14);
          }
        }
        StatsAdd(0x3f800000,0x1d,*piVar3);
        if ((piVar14 != (int *)0x0) && (piVar14[0x41] == 0)) {
          StatsAdd(0x3f800000,0x1e,*piVar3);
        }
      }
      break;
    case 0xc:
    case 0xd:
    case 0xe:
      iStack_e0 = 5;
      fVar22 = DAT_003acd28;
      break;
    case 0xf:
    case 0x10:
    case 0x11:
      iStack_e0 = 6;
      fVar22 = DAT_003acd2c;
    }
    if (param_8 != 0) {
      if ((piVar14 != (int *)0x0) && (param_5 != 1)) {
        StatsBodyPartHit(piVar14,piVar3,iVar5);
      }
      goto LAB_00271f18;
    }
    fVar16 = *(float *)(param_2 + 0x208);
  }
  else {
LAB_00271f18:
    fVar16 = *(float *)(param_2 + 0x208);
  }
  if ((fVar16 <= 0.0) && (*(int *)(*(int *)(param_2 + 0x160) + 8) != 1)) {
    if (param_8 == 0) {
      return;
    }
    if (piVar14 == (int *)0x0) {
      return;
    }
    if (piVar14[0x41] == 0) {
      return;
    }
    StatsAdd(0x3f800000,0xc,*piVar14);
    return;
  }
  if ((((piVar2 != (int *)0x0) && ((DAT_0032c4f8 & 0x10000) != 0)) && (iStack_e0 != 2)) &&
     (lVar8 = bulletTypeExplosive(param_5), lVar8 == 0)) {
    fVar23 = fVar23 * *(float *)(handicapmods_364 + *(int *)(piVar2[6] + 0x5c) * 4);
  }
  if ((invincible != 0) && (piVar2 != (int *)0x0)) {
    fVar23 = 0.0;
  }
  if (DAT_0032c4f0 == 7) {
    fVar18 = 1.0;
    fVar16 = fVar18;
    fVar20 = fVar18;
    if (piVar2 == (int *)0x0) {
LAB_00272148:
      if (param_3 == 0) {
        fVar20 = fVar20 * fVar16;
      }
      else {
        if (*(int *)(iVar15 + 0x164) != 0) {
          if (DAT_0032c4f4 == 0) {
            fVar20 = 5.0;
          }
          if (DAT_0032c4f4 == 1) {
            fVar20 = 3.0;
          }
          if (DAT_0032c4f4 != 2) {
            fVar20 = fVar20 * fVar16;
            goto LAB_00272194;
          }
          fVar20 = 1.75;
        }
        fVar20 = fVar20 * fVar16;
      }
    }
    else {
      if (DAT_0032c4f4 == 0) {
        fVar20 = DAT_003acd30;
      }
      if (DAT_0032c4f4 == 1) {
        fVar20 = DAT_003acd34;
      }
      if (DAT_0032c4f4 == 2) {
        fVar20 = DAT_003acd38;
      }
      fVar16 = *(float *)(param_2 + 0x208) / 5.0;
      if ((DAT_0032c4f4 == 0) && (fVar16 < DAT_003acd3c)) {
        fVar16 = DAT_003acd3c;
      }
      if ((DAT_0032c4f4 == 1) && (fVar16 < DAT_003acd40)) {
        fVar16 = DAT_003acd40;
      }
      if ((DAT_0032c4f4 == 2) && (fVar16 < DAT_003acd44)) {
        fVar16 = DAT_003acd44;
      }
      if (((param_3 != 0) && (fVar18 = 1.0, *(int *)(iVar15 + 0x164) == 0)) &&
         (fVar17 = *(float *)(iVar15 + 0x30) - *(float *)(param_2 + 0x30),
         fVar21 = *(float *)(iVar15 + 0x34) - *(float *)(param_2 + 0x34),
         fVar19 = *(float *)(iVar15 + 0x38) - *(float *)(param_2 + 0x38),
         fVar17 = fVar17 * fVar17 + fVar21 * fVar21 + fVar19 * fVar19, fVar17 < 100.0)) {
        fVar17 = 100.0 - fVar17;
        fVar18 = (fVar17 + fVar17) / (fVar20 * 100.0) + 1.0;
      }
      if (piVar2 == (int *)0x0) goto LAB_00272148;
      fVar20 = fVar20 * fVar16;
    }
LAB_00272194:
    fVar23 = fVar23 * fVar20 * fVar18;
  }
  fVar23 = fVar23 * fVar22;
  if ((piVar2 != (int *)0x0) && (DAT_0032c4f0 == 7)) {
    fVar22 = 1.0;
    if (DAT_0032c4f4 == 0) {
      fVar22 = DAT_003acd48;
    }
    if (DAT_0032c4f4 == 1) {
      fVar22 = DAT_003acd4c;
    }
    if (DAT_0032c4f4 == 2) {
      fVar22 = DAT_003acd50;
    }
    if (fVar22 < fVar23) {
      fVar23 = fVar22;
    }
  }
  if (piVar14 == (int *)0x0) {
    fVar22 = (float)piVar3[3];
  }
  else if (piVar14 == piVar3) {
LAB_00272260:
    fVar22 = (float)piVar3[3];
  }
  else if ((DAT_0032c4f8 & 1) == 0) {
    fVar22 = (float)piVar3[3];
  }
  else {
    if (piVar14[6] == piVar3[6]) {
      if ((DAT_0032c4f8 & 8) == 0) {
        fVar23 = 0.0;
      }
      StatsAdd(0x3f800000,0x19,*piVar14);
      StatsAdd(0x3f800000,0x1f,*piVar3);
      goto LAB_00272260;
    }
    fVar22 = (float)piVar3[3];
  }
  if (0.0 < fVar22) {
    fVar16 = fVar22;
    if (fVar23 <= fVar22) {
      fVar16 = fVar23;
    }
    fVar23 = fVar23 - fVar16;
    piVar3[3] = (int)(fVar22 - fVar16);
  }
  if (0.0 < fVar23) {
    if (param_3 == 0) {
      fVar22 = *(float *)(param_2 + 0x208);
    }
    else if (*(int *)(iVar15 + 8) == 8) {
      if ((DAT_0032c4f8 & 4) == 0) {
        fVar22 = *(float *)(param_2 + 0x208);
      }
      else {
        fVar22 = *(float *)(param_2 + 0x208);
        fVar23 = fVar22;
      }
    }
    else {
      fVar22 = *(float *)(param_2 + 0x208);
    }
  }
  else {
    fVar22 = *(float *)(param_2 + 0x208);
  }
  if (DAT_0032c4f0 == 4) {
    if (param_2 == escort) {
      fVar23 = fVar23 * DAT_003acd54;
      fVar22 = fVar22 - fVar23;
    }
    else {
      fVar22 = fVar22 - fVar23;
    }
  }
  else {
    fVar22 = fVar22 - fVar23;
  }
  iVar5 = *(int *)(*(int *)(param_2 + 0x160) + 8);
  *(float *)(param_2 + 0x208) = fVar22;
  if (iVar5 == 1) {
    if (DAT_0032c4f0 == 7) {
      if (DAT_0032c4f4 == 0) {
        *(undefined4 *)(param_2 + 0x208) = 0;
      }
      goto LAB_00272344;
    }
    fVar22 = *(float *)(param_2 + 0x208);
  }
  else {
LAB_00272344:
    fVar22 = *(float *)(param_2 + 0x208);
  }
  if (fVar22 < 0.0) {
    *(undefined4 *)(param_2 + 0x208) = 0;
  }
  if (piVar2 != (int *)0x0) {
    *(int *)(hudparms + *piVar2 * 0x160 + 0x10c) =
         *(int *)(hudparms + *piVar2 * 0x160 + 0x10c) + (int)(fVar23 * 600.0);
    if (600 < *(int *)(hudparms + *piVar2 * 0x160 + 0x10c)) {
      *(undefined4 *)(hudparms + *piVar2 * 0x160 + 0x10c) = 600;
    }
    if (param_5 == -1) {
      if (param_1 < 0.25) {
        param_1 = param_1 * 4.0;
      }
      else {
        param_1 = 1.0;
      }
      piVar2[0x1bc] = (int)param_1;
      piVar2[0x1bd] = DAT_003acd58;
    }
    else {
      lVar8 = bulletTypeExplosive(param_5);
      if (lVar8 == 0) {
        piVar2[0x1bc] = *(int *)(dualshockbulletdamage + iVar13 * 8);
        piVar2[0x1bd] = *(int *)(dualshockbulletdamage + iVar13 * 8 + 4);
      }
      else {
        piVar2[0x1bd] = DAT_003acd5c;
        piVar2[0x1bc] = (int)(param_1 * 5.0);
      }
    }
  }
  if (param_5 == 1) {
    uVar6 = newrnd();
    soundStart((uVar6 & 3) + 0xcf,param_4);
    fVar22 = *(float *)(param_2 + 0x208);
  }
  else {
    fVar22 = *(float *)(param_2 + 0x208);
  }
  if (0.0 < fVar22) {
    if (0x3c < gameframe - lastreactionframenum) {
      lastreactionframenum = gameframe;
      psVar11 = *(short **)(chrs + (short)piVar3[1] * 0x2c + 4);
      iVar13 = 0;
      psVar10 = psVar11;
      if (*psVar11 != 0) {
        do {
          psVar10 = psVar10 + 1;
          iVar13 = iVar13 + 1;
          if (*psVar10 == 0) break;
        } while (iVar13 < 0x12);
      }
      if (0 < iVar13) {
        iVar5 = newrnd();
        if (iVar13 == 0) {
          trap(7);
        }
        sVar1 = psVar11[iVar5 % iVar13];
        goto LAB_002725ac;
      }
    }
  }
  else {
    lastreactionframenum = gameframe;
    iVar13 = *(int *)(chrs + (short)piVar3[1] * 0x2c + 4);
    iVar5 = 0;
    if (*(short *)(iVar13 + 0x24) != 0) {
      for (iVar5 = 1; (*(short *)(iVar13 + 0x24 + iVar5 * 2) != 0 && (iVar5 < 6)); iVar5 = iVar5 + 1
          ) {
      }
    }
    if (0 < iVar5) {
      iVar7 = newrnd();
      if (iVar5 == 0) {
        trap(7);
      }
      sVar1 = *(short *)(iVar13 + (iVar7 % iVar5) * 2 + 0x24);
LAB_002725ac:
      soundDelayStartEx(sVar1,param_4,0x14,0);
      fVar22 = *(float *)(param_2 + 0x208);
    }
  }
  if (fVar22 != 0.0) {
    if (*piVar3 < lvnumplayers) {
      return;
    }
    if (param_3 == 0) {
      return;
    }
    if ((*(int *)(*(int *)(param_2 + 0x160) + 8) != 1) || (DAT_003acd60 <= fVar22)) {
      enemyInformHit(param_2,param_3);
      return;
    }
    goto LAB_002727f4;
  }
  if (param_3 == 0) {
LAB_00272774:
    psVar11 = (short *)((int)piVar3 + *piVar3 * 2 + 0x20);
    *psVar11 = *psVar11 + 1;
  }
  else {
    if (*(int *)(iVar15 + 8) == 8) {
      iVar13 = *(int *)(iVar15 + 0x160);
      puVar12 = *(undefined4 **)(iVar15 + 0x164);
      psVar11 = (short *)(iVar13 + 0x20 + *piVar3 * 2);
      *psVar11 = *psVar11 + 1;
      if (puVar12 != (undefined4 *)0x0) {
        if (DAT_0032c4f0 == 3) {
          hudShowScore(*puVar12,0xb8);
          puVar12 = *(undefined4 **)(iVar15 + 0x164);
        }
        if ((puVar12 != (undefined4 *)0x0) && ((puVar12[5] & 2) != 0)) {
          StatsAdd(0x3f800000,0x44,*(undefined4 *)(iVar15 + 4));
        }
      }
      if (((DAT_0032c4f0 == 3) && ((DAT_0032c4f8 & 0x8000) != 0)) &&
         (iVar5 = teamGetScore(*(undefined4 *)(iVar13 + 0x18)), iVar5 == DAT_0032c504 + -1)) {
        if ((DAT_0032c4f8 & 1) == 0) {
          uVar9 = vafmt(0x3af940,*(undefined4 *)(iVar13 + 0x10),
                        *(undefined4 *)(*(int *)(languages + cur_language * 4) + 0x120c));
        }
        else {
          iVar5 = *(int *)(languages + cur_language * 4);
          uVar9 = vafmt(0x3a7fc8,*(undefined4 *)
                                  (*(short *)(storydata + *(int *)(iVar13 + 0x18) * 8 + 0x40) * 4 +
                                  iVar5),*(undefined4 *)(iVar5 + 0x1204),
                        *(undefined4 *)(iVar5 + 0x1208));
        }
        iVar13 = 0;
        if (0 < lvnumplayers) {
          do {
            hudMessage(iVar13,uVar9);
            iVar13 = iVar13 + 1;
          } while (iVar13 < lvnumplayers);
        }
        soundStart(200,0);
      }
    }
    if ((param_3 == 0) || (*(int *)(iVar15 + 8) != 8)) goto LAB_00272774;
  }
  if (piVar2 != (int *)0x0) {
    playerDie(piVar2,param_3,param_5,param_6,puStack_e8,iStack_e0,param_9);
    return;
  }
LAB_002727f4:
  enemyDie(param_2,param_3,param_5,param_6,puStack_e8,iStack_e0,param_9);
  return;
}


