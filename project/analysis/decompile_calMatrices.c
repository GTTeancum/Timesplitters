/* Ghidra analysis, not original source. calMatrices at 00212e08 */

/* anim/anim.c */

void calMatrices(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined1 auStack_310 [16];
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  undefined1 auStack_1e0 [64];
  undefined1 auStack_1a0 [48];
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  undefined1 auStack_160 [64];
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  undefined4 *puStack_fc;
  undefined4 *puStack_f8;
  undefined1 *puStack_f4;
  undefined1 *puStack_f0;
  float *pfStack_ec;
  float *pfStack_e8;
  undefined1 *puStack_e4;
  
  piVar8 = (int *)param_1;
  iVar2 = piVar8[0x3d];
  if (*(int *)(iVar2 + 8) == 0x1000) {
    uVar15 = *(undefined4 *)(*(int *)(iVar2 + 0x160) + 0xc);
  }
  else {
    uVar15 = *(undefined4 *)(*(int *)(iVar2 + 0x160) + 0xb18);
  }
  *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(iVar2 + 0x54);
  if (0.0 < (float)piVar8[0x38]) {
    fVar14 = (float)piVar8[0x3a] + updateframesf / 60.0;
    fVar11 = fVar14 / (float)piVar8[0x38];
    piVar8[0x3a] = (int)fVar14;
    piVar8[0x39] = (int)fVar11;
    if (1.0 <= fVar11) {
      piVar8[0x3c] = 1;
      piVar8[0x18] = piVar8[0x28];
      piVar8[0x19] = piVar8[0x29];
      piVar8[0x27] = piVar8[0x37];
      piVar8[0x37] = -1;
      piVar8[0x1d] = piVar8[0x2d];
      piVar8[0x1e] = piVar8[0x2e];
      piVar8[0x1f] = piVar8[0x2f];
      piVar8[0x1a] = piVar8[0x2a];
      piVar8[0x1b] = piVar8[0x2b];
      piVar8[0x1c] = piVar8[0x2c];
      piVar8[0x20] = piVar8[0x30];
      piVar8[0x21] = piVar8[0x31];
      piVar8[0x22] = piVar8[0x32];
      piVar8[0x23] = piVar8[0x33];
      piVar8[0x25] = piVar8[0x35];
      piVar8[0x38] = 0;
      piVar8[0x28] = 0;
      piVar8[0x26] = piVar8[0x36];
      piVar8[0x3a] = 0;
      piVar8[0x39] = 0;
    }
  }
  iVar2 = *(int *)(pAnimations + piVar8[0x18] * 4);
  fVar14 = *(float *)(iVar2 + 0x10);
  if (0.0 < fVar14) {
    fVar11 = updateframesf * (float)piVar8[0x23];
    piVar8[0x26] = 0;
    uVar4 = *(uint *)(iVar2 + 0xc);
    fVar11 = (float)piVar8[0x19] + fVar11 / 60.0;
    piVar8[0x19] = (int)fVar11;
    if ((uVar4 & 1) == 0) {
      if (fVar14 < fVar11) {
        piVar8[0x19] = (int)fVar14;
        piVar8[0x26] = 1;
      }
LAB_00213080:
      fVar11 = (float)piVar8[0x19];
    }
    else {
      if (fVar11 <= fVar14) goto LAB_00213080;
      do {
        fVar11 = (float)piVar8[0x19];
        piVar8[0x26] = 1;
        piVar8[0x19] = (int)(fVar11 - fVar14);
      } while (fVar14 < fVar11 - fVar14);
      fVar11 = (float)piVar8[0x19];
    }
    puStack_e4 = auStack_1e0;
    if (fVar11 < 0.0) {
      do {
        fVar11 = fVar11 + fVar14;
      } while (fVar11 < 0.0);
      piVar8[0x19] = (int)fVar11;
      piVar8[0x26] = 1;
      iVar6 = piVar8[0x26];
    }
    else {
      iVar6 = piVar8[0x26];
    }
    if ((iVar6 != 0) && ((*(uint *)(iVar2 + 0xc) & 1) != 0)) {
      extractAnimData(uVar15,param_1,iVar2,0,*(int *)(iVar2 + 4) + -1,&fStack_220);
      extractAnimData(uVar15,param_1,iVar2,0,0,&fStack_200);
      piVar8[0x1d] = (int)((fStack_200 + (float)piVar8[0x1d]) - fStack_220);
      piVar8[0x1e] = (int)((fStack_1fc + (float)piVar8[0x1e]) - fStack_21c);
      piVar8[0x1f] = (int)((fStack_1f8 + (float)piVar8[0x1f]) - fStack_218);
    }
  }
  else {
    puStack_e4 = auStack_1e0;
  }
  getKeyFrames(fVar14,param_1,piVar8 + 0x18,&iStack_110,&iStack_10c);
  fVar11 = (float)piVar8[0x38];
  if (0.0 < fVar11) {
    iStack_100 = *(int *)(pAnimations + piVar8[0x28] * 4);
    fVar11 = *(float *)(iStack_100 + 0x10);
    if (0.0 < fVar11) {
      fVar12 = updateframesf * (float)piVar8[0x33];
      piVar8[0x36] = 0;
      uVar4 = *(uint *)(iStack_100 + 0xc);
      fVar12 = (float)piVar8[0x29] + fVar12 / 60.0;
      piVar8[0x29] = (int)fVar12;
      if ((uVar4 & 1) == 0) {
        if (fVar11 < fVar12) {
          piVar8[0x29] = (int)fVar14;
          piVar8[0x36] = 1;
        }
LAB_00213258:
        fVar14 = (float)piVar8[0x29];
      }
      else {
        if (fVar12 <= fVar11) goto LAB_00213258;
        do {
          fVar14 = (float)piVar8[0x29];
          piVar8[0x36] = 1;
          piVar8[0x29] = (int)(fVar14 - fVar11);
        } while (fVar11 < fVar14 - fVar11);
        fVar14 = (float)piVar8[0x29];
      }
      if (fVar14 < 0.0) {
        do {
          fVar14 = fVar14 + fVar11;
        } while (fVar14 < 0.0);
        piVar8[0x29] = (int)fVar14;
        piVar8[0x36] = 1;
        iVar6 = piVar8[0x36];
      }
      else {
        iVar6 = piVar8[0x36];
      }
      if ((iVar6 != 0) && ((*(uint *)(iStack_100 + 0xc) & 1) != 0)) {
        extractAnimData(uVar15,param_1,iStack_100,0,*(int *)(iStack_100 + 4) + -1,&fStack_220);
        extractAnimData(uVar15,param_1,iStack_100,0,0,&fStack_200);
        piVar8[0x2d] = (int)((fStack_200 + (float)piVar8[0x2d]) - fStack_200);
        piVar8[0x2e] = (int)((fStack_1fc + (float)piVar8[0x2e]) - fStack_1fc);
        piVar8[0x2f] = (int)((fStack_1f8 + (float)piVar8[0x2f]) - fStack_1f8);
      }
    }
    getKeyFrames(fVar11,param_1,piVar8 + 0x28,&iStack_108,&iStack_104);
    fVar11 = (float)piVar8[0x38];
  }
  iVar6 = piVar8[0x3d];
  if (*(int *)(iVar6 + 8) == 0x1000) {
LAB_00213394:
    iVar9 = *(int *)(iVar2 + 8);
  }
  else if (**(int **)(iVar6 + 0x160) < lvnumplayers) {
    iVar9 = *(int *)(iVar2 + 8);
  }
  else {
    iVar9 = 1;
    if ((*(uint *)(iVar6 + 0x10) & 0xf000000) != 0) goto LAB_00213394;
  }
  if (fVar11 == 0.0) {
    if (iStack_110 == iStack_10c) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = (float)*(int *)(iStack_110 * 4 + *(int *)(iVar2 + 0x14)) / 60.0;
      fVar14 = ((float)piVar8[0x19] - fVar14) /
               ((float)*(int *)(iStack_10c * 4 + *(int *)(iVar2 + 0x14)) / 60.0 - fVar14);
    }
    iVar10 = 0;
    if (0 < iVar9) {
      do {
        iVar6 = *(int *)(iVar10 * 4 + *(int *)piVar8[0x17]);
        extractAnimData(uVar15,param_1,iVar2,iVar10,iStack_110,&fStack_2a0);
        extractAnimData(uVar15,param_1,iVar2,iVar10,iStack_10c,&fStack_280);
        iVar6 = iVar6 * 0x40;
        uStack_300 = uStack_294;
        uStack_2fc = uStack_290;
        uStack_2f8 = uStack_28c;
        uStack_2f4 = uStack_288;
        uStack_2f0 = uStack_274;
        uStack_2ec = uStack_270;
        uStack_2e8 = uStack_26c;
        uStack_2e4 = uStack_268;
        quaternionSlerp(fVar14,&uStack_300,&uStack_2f0,auStack_310);
        quaternionToMatrix(piVar8[1] + iVar6,auStack_310);
        if (iVar10 == 0) {
          if ((*(uint *)(iVar2 + 0xc) & 2) == 0) {
            *(undefined4 *)(piVar8[1] + 0x30) = 0;
            *(float *)(piVar8[1] + 0x34) = fStack_29c + (fStack_27c - fStack_29c) * fVar14;
          }
          else {
            piVar8[0x1a] = (int)(fStack_2a0 + (fStack_280 - fStack_2a0) * fVar14);
            piVar8[0x1b] = (int)(fStack_29c + (fStack_27c - fStack_29c) * fVar14);
            piVar8[0x1c] = (int)(fStack_298 + (fStack_278 - fStack_298) * fVar14);
            *(undefined4 *)(piVar8[1] + 0x30) = 0;
            *(int *)(piVar8[1] + 0x34) = piVar8[0x1b];
          }
          *(undefined4 *)(piVar8[1] + 0x38) = 0;
        }
        else {
          *(float *)(iVar6 + piVar8[1] + 0x30) = fStack_2a0;
          *(float *)(iVar6 + piVar8[1] + 0x34) = fStack_29c;
          *(float *)(iVar6 + piVar8[1] + 0x38) = fStack_298;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar9);
      iVar6 = piVar8[0x3d];
      goto LAB_00213a04;
    }
    iVar9 = *(int *)(iVar6 + 8);
  }
  else {
    if (iStack_110 == iStack_10c) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = (float)*(int *)(iStack_110 * 4 + *(int *)(iVar2 + 0x14)) / 60.0;
      fVar14 = ((float)piVar8[0x19] - fVar14) /
               ((float)*(int *)(iStack_10c * 4 + *(int *)(iVar2 + 0x14)) / 60.0 - fVar14);
    }
    if (iStack_108 == iStack_104) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = (float)*(int *)(iStack_108 * 4 + *(int *)(iStack_100 + 0x14)) / 60.0;
      fVar11 = ((float)piVar8[0x29] - fVar11) /
               ((float)*(int *)(iStack_104 * 4 + *(int *)(iStack_100 + 0x14)) / 60.0 - fVar11);
    }
    iVar10 = 0;
    if (0 < iVar9) {
      pfStack_e8 = &fStack_240;
      puStack_f4 = auStack_2c0;
      puStack_fc = &uStack_2e0;
      puStack_f8 = &uStack_2d0;
      puStack_f0 = auStack_2b0;
      pfStack_ec = &fStack_260;
      do {
        iVar6 = *(int *)(iVar10 * 4 + *(int *)piVar8[0x17]);
        extractAnimData(uVar15,param_1,iVar2,iVar10,iStack_110,&fStack_2a0);
        extractAnimData(uVar15,param_1,iVar2,iVar10,iStack_10c,&fStack_280);
        iVar6 = iVar6 * 0x40;
        extractAnimData(uVar15,param_1,iStack_100,iVar10,iStack_108,pfStack_ec);
        extractAnimData(uVar15,param_1,iStack_100,iVar10,iStack_104,pfStack_e8);
        uStack_300 = uStack_294;
        uStack_2fc = uStack_290;
        uStack_2f8 = uStack_28c;
        uStack_2f4 = uStack_288;
        uStack_2f0 = uStack_274;
        uStack_2ec = uStack_270;
        uStack_2e8 = uStack_26c;
        uStack_2e4 = uStack_268;
        uStack_2e0 = uStack_254;
        uStack_2dc = uStack_250;
        uStack_2d8 = uStack_24c;
        uStack_2d4 = uStack_248;
        uStack_2d0 = uStack_234;
        uStack_2cc = uStack_230;
        uStack_2c8 = uStack_22c;
        uStack_2c4 = uStack_228;
        quaternionSlerp(fVar14,&uStack_300,&uStack_2f0,puStack_f4);
        quaternionSlerp(fVar11,puStack_fc,puStack_f8,puStack_f0);
        quaternionSlerp(piVar8[0x39],puStack_f4,puStack_f0,auStack_310);
        quaternionToMatrix(piVar8[1] + iVar6,auStack_310);
        if (iVar10 == 0) {
          if ((*(uint *)(iVar2 + 0xc) & 2) == 0) {
            *(undefined4 *)(iVar6 + piVar8[1] + 0x30) = 0;
            fVar12 = fStack_29c + (fStack_27c - fStack_29c) * fVar14;
            *(float *)(iVar6 + piVar8[1] + 0x34) =
                 fVar12 + ((fStack_25c + (fStack_23c - fStack_25c) * fVar11) - fVar12) *
                          (float)piVar8[0x39];
            *(undefined4 *)(iVar6 + piVar8[1] + 0x38) = 0;
          }
          else {
            fVar13 = fStack_29c + (fStack_27c - fStack_29c) * fVar14;
            fVar12 = fStack_25c + (fStack_23c - fStack_25c) * fVar11;
            piVar8[0x2b] = (int)fVar12;
            piVar8[0x1c] = (int)(fStack_298 + (fStack_278 - fStack_298) * fVar14);
            piVar8[0x1b] = (int)(fVar13 + (fVar12 - fVar13) * (float)piVar8[0x39]);
            piVar8[0x2c] = (int)(fStack_258 + (fStack_238 - fStack_258) * fVar11);
            piVar8[0x1a] = (int)-(fStack_2a0 + (fStack_280 - fStack_2a0) * fVar14);
            piVar8[0x2a] = (int)-(fStack_260 + (fStack_240 - fStack_260) * fVar11);
            *(undefined4 *)(piVar8[1] + 0x30) = 0;
            *(int *)(piVar8[1] + 0x34) = piVar8[0x1b];
            *(undefined4 *)(piVar8[1] + 0x38) = 0;
          }
        }
        else {
          *(float *)(iVar6 + piVar8[1] + 0x30) = fStack_2a0 + (fStack_280 - fStack_2a0) * fVar14;
          *(float *)(iVar6 + piVar8[1] + 0x34) = fStack_29c + (fStack_27c - fStack_29c) * fVar14;
          *(float *)(iVar6 + piVar8[1] + 0x38) = fStack_298 + (fStack_278 - fStack_298) * fVar14;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar9);
      iVar6 = piVar8[0x3d];
    }
LAB_00213a04:
    iVar9 = *(int *)(iVar6 + 8);
  }
  if (iVar9 == 0x1000) {
    fVar14 = 0.5;
    iVar9 = piVar8[0x27];
  }
  else {
    iVar9 = piVar8[0x27];
    fVar14 = 0.5;
    if (*(int *)(*(int *)(iVar6 + 0x160) + 8) == 1) {
      fVar14 = DAT_003ac824;
    }
  }
  if (iVar9 == 0) {
    if ((float)piVar8[0x19] <= fVar14) {
      fVar12 = ((float)piVar8[0x19] / fVar14) * 90.0;
      fVar11 = (float)anglediff(piVar8[0x25],fVar12);
      iVar6 = piVar8[0x3d];
      fVar11 = *(float *)(iVar6 + 0x54) + fVar11;
      *(float *)(iVar6 + 0x54) = fVar11;
      if (360.0 < fVar11) {
        *(float *)(iVar6 + 0x54) = fVar11 - 360.0;
      }
      piVar8[0x25] = (int)fVar12;
      iVar9 = piVar8[0x37];
    }
    else {
      iVar9 = piVar8[0x37];
    }
  }
  else {
    iVar9 = piVar8[0x37];
  }
  if (iVar9 == 0) {
    if ((float)piVar8[0x29] <= fVar14) {
      fVar12 = ((float)piVar8[0x29] / fVar14) * 90.0;
      fVar11 = (float)anglediff(piVar8[0x35],fVar12);
      iVar6 = piVar8[0x3d];
      fVar11 = *(float *)(iVar6 + 0x54) + fVar11;
      *(float *)(iVar6 + 0x54) = fVar11;
      if (360.0 < fVar11) {
        *(float *)(iVar6 + 0x54) = fVar11 - 360.0;
      }
      piVar8[0x35] = (int)fVar12;
      iVar9 = piVar8[0x27];
    }
    else {
      iVar9 = piVar8[0x27];
    }
  }
  else {
    iVar9 = piVar8[0x27];
  }
  if (iVar9 == 1) {
    if ((float)piVar8[0x19] <= fVar14) {
      fVar12 = ((float)piVar8[0x19] / fVar14) * 90.0;
      fVar11 = (float)anglediff(piVar8[0x25],fVar12);
      iVar6 = piVar8[0x3d];
      fVar11 = *(float *)(iVar6 + 0x54) - fVar11;
      *(float *)(iVar6 + 0x54) = fVar11;
      if (fVar11 < 0.0) {
        *(float *)(iVar6 + 0x54) = fVar11 + 360.0;
      }
      piVar8[0x25] = (int)fVar12;
      iVar9 = piVar8[0x37];
    }
    else {
      iVar9 = piVar8[0x37];
    }
  }
  else {
    iVar9 = piVar8[0x37];
  }
  if (iVar9 == 1) {
    if ((float)piVar8[0x29] <= fVar14) {
      fVar11 = ((float)piVar8[0x29] / fVar14) * 90.0;
      fVar14 = (float)anglediff(piVar8[0x35],fVar11);
      iVar6 = piVar8[0x3d];
      fVar14 = *(float *)(iVar6 + 0x54) - fVar14;
      *(float *)(iVar6 + 0x54) = fVar14;
      if (fVar14 < 0.0) {
        *(float *)(iVar6 + 0x54) = fVar14 + 360.0;
      }
      piVar8[0x35] = (int)fVar11;
      fVar14 = *(float *)(iVar6 + 200);
    }
    else {
      fVar14 = *(float *)(iVar6 + 200);
    }
  }
  else {
    fVar14 = *(float *)(iVar6 + 200);
  }
  if (0.0 < fVar14) {
    animHitReactUpdate(iVar6);
    iVar6 = piVar8[0x3d];
    if (-1 < *(int *)(iVar6 + 0x150)) {
      iVar9 = piVar8[1] + *(int *)(iVar6 + 0x150) * 0x40;
      sceVu0MulMatrix(iVar9,iVar9,iVar6 + 0xd0);
      iVar6 = piVar8[0x3d];
    }
    if (-1 < *(int *)(iVar6 + 0x154)) {
      iVar9 = piVar8[1] + *(int *)(iVar6 + 0x154) * 0x40;
      sceVu0MulMatrix(iVar9,iVar9,iVar6 + 0x110);
    }
    iVar6 = piVar8[1];
  }
  else {
    iVar6 = piVar8[1];
  }
  calGlobalMatrices(param_1,iVar6,0,0xffffffffffffffff);
  iVar9 = 0;
  calDoubleFillets(0x3f000000,param_1,0);
  fVar14 = DAT_003ac830;
  iVar6 = piVar8[0x3d];
  if (*(int *)(iVar6 + 8) == 0x1000) {
    uVar15 = *(undefined4 *)(*(int *)(iVar6 + 0x160) + 8);
    fVar11 = *(float *)(*(int *)(iVar6 + 0x160) + 4);
  }
  else {
    iVar9 = *(int *)(iVar6 + 0x160);
    fVar11 = *(float *)(iVar9 + 0xb98);
    uVar15 = *(undefined4 *)(iVar9 + 0xb9c);
  }
  if (*(int *)(iVar6 + 0xc) < 0xc9) {
    iVar6 = piVar8[1];
  }
  else {
    if (*(int *)(iVar6 + 0xc) < lvnumplayers + 0xc9) {
      piVar3 = (int *)*piVar8;
      iVar7 = 0;
      iVar10 = *piVar3;
      fVar13 = -((fVar11 * DAT_003ac828) / 180.0);
      fVar14 = DAT_003ac828;
      fVar11 = (float)anglediff(*(undefined4 *)(iVar6 + 0x4c),*(undefined4 *)(iVar6 + 0x50));
      fVar12 = (float)anglediff(uVar15,*(undefined4 *)(piVar8[0x3d] + 0x50));
      matrixRotZXY(fVar13,(fVar11 * fVar14) / 180.0 - (fVar12 * fVar14) / 180.0,0,puStack_e4);
      fVar14 = DAT_003ac82c;
      if (0 < iVar10) {
        iVar6 = piVar8[0x17];
        do {
          if (*(int *)(iVar7 * 4 + *(int *)(iVar6 + 0x20)) - 7U < 4) {
            cVar1 = *(char *)((int)piVar3 + iVar7 * 0x50 + iVar10 * -0x50 + 1);
            if ((-1 < (long)cVar1) && ((long)cVar1 < (long)*(int *)(*piVar8 + 4))) {
              iVar6 = cVar1 * 0x40;
              *(float *)(iVar6 + piVar8[1] + 0x34) = *(float *)(iVar6 + piVar8[1] + 0x34) - fVar14;
              if (iVar9 == 0) {
LAB_00213e30:
                iVar5 = piVar8[1];
              }
              else {
                if (*(short *)(iVar9 + 4) == 0x18) {
                  *(float *)(iVar6 + piVar8[1] + 0x34) =
                       *(float *)(iVar6 + piVar8[1] + 0x34) - heightoffset_rf_114;
                  goto LAB_00213e30;
                }
                iVar5 = piVar8[1];
              }
              sceVu0MulMatrix(auStack_1a0,puStack_e4,iVar5 + iVar6);
              fStack_16c = fStack_16c + fVar14;
              if (iVar9 == 0) {
LAB_00213e70:
                iVar5 = piVar8[1];
              }
              else {
                if (*(short *)(iVar9 + 4) == 0x18) {
                  fStack_16c = fStack_16c + heightoffset_rf_114;
                  goto LAB_00213e70;
                }
                iVar5 = piVar8[1];
              }
              sceVu0CopyMatrix(iVar5 + iVar6,auStack_1a0);
            }
          }
          iVar7 = iVar7 + 1;
          if (iVar10 <= iVar7) break;
          iVar6 = piVar8[0x17];
        } while( true );
      }
      goto LAB_002140f0;
    }
    iVar6 = piVar8[1];
  }
  iVar9 = *(int *)(piVar8[0x17] + 0xc) * 0x40;
  uVar17 = 0;
  iVar6 = iVar9 + iVar6;
  fStack_120 = *(float *)(iVar6 + 0x30);
  fStack_11c = *(float *)(iVar6 + 0x34);
  fVar16 = (fVar11 * DAT_003ac830) / 180.0;
  fStack_118 = *(float *)(iVar6 + 0x38);
  fVar13 = fVar16 * -0.5;
  *(undefined4 *)(iVar6 + 0x30) = 0;
  *(undefined4 *)(iVar9 + piVar8[1] + 0x34) = 0;
  *(undefined4 *)(iVar9 + piVar8[1] + 0x38) = 0;
  fVar11 = (float)anglediff(*(undefined4 *)(piVar8[0x3d] + 0x4c),
                            *(undefined4 *)(piVar8[0x3d] + 0x50));
  fVar12 = (float)anglediff(uVar15,*(undefined4 *)(piVar8[0x3d] + 0x50));
  matrixRotZXY(fVar13,((fVar11 * fVar14) / 180.0 - (fVar12 * fVar14) / 180.0) * 0.5,uVar17,
               puStack_e4);
  sceVu0MulMatrix(auStack_1a0,puStack_e4,piVar8[1] + iVar9);
  fStack_170 = fStack_120;
  fStack_16c = fStack_11c;
  fStack_168 = fStack_118;
  sceVu0CopyMatrix(piVar8[1] + iVar9,auStack_1a0);
  fVar11 = (float)anglediff(*(undefined4 *)(piVar8[0x3d] + 0x4c),
                            *(undefined4 *)(piVar8[0x3d] + 0x50));
  fVar12 = (float)anglediff(uVar15,*(undefined4 *)(piVar8[0x3d] + 0x50));
  matrixRotZXY(-fVar16,(fVar11 * fVar14) / 180.0 - (fVar12 * fVar14) / 180.0,uVar17,puStack_e4);
  iVar6 = *(int *)(piVar8[0x17] + 0x10);
  if (iVar6 <= *(int *)(piVar8[0x17] + 0x14)) {
    iVar10 = piVar8[1];
    while( true ) {
      iVar7 = iVar6 * 0x40;
      iVar6 = iVar6 + 1;
      *(float *)(iVar7 + iVar10 + 0x30) =
           *(float *)(iVar7 + iVar10 + 0x30) - *(float *)(iVar9 + iVar10 + 0x30);
      iVar10 = iVar7 + piVar8[1];
      *(float *)(iVar10 + 0x34) = *(float *)(iVar10 + 0x34) - *(float *)(iVar9 + piVar8[1] + 0x34);
      iVar10 = iVar7 + piVar8[1];
      *(float *)(iVar10 + 0x38) = *(float *)(iVar10 + 0x38) - *(float *)(iVar9 + piVar8[1] + 0x38);
      sceVu0MulMatrix(auStack_1a0,puStack_e4,piVar8[1] + iVar7);
      iVar10 = iVar9 + piVar8[1];
      fStack_170 = fStack_170 + *(float *)(iVar10 + 0x30);
      fStack_16c = fStack_16c + *(float *)(iVar10 + 0x34);
      fStack_168 = fStack_168 + *(float *)(iVar10 + 0x38);
      sceVu0CopyMatrix(piVar8[1] + iVar7,auStack_1a0);
      if (*(int *)(piVar8[0x17] + 0x14) < iVar6) break;
      iVar10 = piVar8[1];
    }
  }
LAB_002140f0:
  if ((allowedcheats & 1 & unlockedcheats & selectedcheats) != 0) {
    matrixScaleSet(0x40000000,0x40000000,0x40000000,auStack_160);
    iVar6 = piVar8[1] + *(int *)(piVar8[0x17] + 0x14) * 0x40;
    sceVu0MulMatrix(iVar6,iVar6,auStack_160);
  }
  uVar4 = unlockedcheats & selectedcheats;
  if ((allowedcheats & 2 & uVar4) != 0) {
    matrixScaleSet(0x3f000000,0x3f000000,0x3f000000,auStack_160);
    iVar6 = piVar8[1] + *(int *)(piVar8[0x17] + 0x14) * 0x40;
    sceVu0MulMatrix(iVar6,iVar6,auStack_160);
    uVar4 = unlockedcheats & selectedcheats;
  }
  if ((allowedcheats & 4 & uVar4) != 0) {
    matrixScaleSet(0x40000000,0x40000000,0x40000000,auStack_160);
    iVar6 = piVar8[1] + *(int *)(piVar8[0x17] + 0x18) * 0x40;
    sceVu0MulMatrix(iVar6,iVar6,auStack_160);
    iVar6 = piVar8[1] + *(int *)(piVar8[0x17] + 0x1c) * 0x40;
    sceVu0MulMatrix(iVar6,iVar6,auStack_160);
  }
  if (((*(uint *)(piVar8[0x3d] + 0x10) & 0x10000000) == 0) &&
     ((allowedcheats & 0x2000 & unlockedcheats & selectedcheats) == 0)) {
    uVar4 = *(uint *)(iVar2 + 0xc);
  }
  else {
    matrixScaleSet(DAT_003ac834,DAT_003ac834,DAT_003ac834,auStack_160);
    iVar6 = piVar8[1] + *(int *)(piVar8[0x17] + 0x14) * 0x40;
    sceVu0MulMatrix(iVar6,iVar6,auStack_160);
    uVar4 = *(uint *)(iVar2 + 0xc);
  }
  if ((uVar4 & 2) == 0) {
    piVar8[0x32] = 0;
    piVar8[0x20] = 0;
    piVar8[0x21] = 0;
    piVar8[0x22] = 0;
    piVar8[0x30] = 0;
    piVar8[0x31] = 0;
  }
  else {
    fVar13 = (float)piVar8[0x1a] - (float)piVar8[0x1d];
    fVar12 = (float)piVar8[0x1c] - (float)piVar8[0x1f];
    fVar14 = (float)piVar8[0x2a] - (float)piVar8[0x2d];
    fVar11 = (float)piVar8[0x2c] - (float)piVar8[0x2f];
    piVar8[0x21] = (int)((float)piVar8[0x1b] - (float)piVar8[0x1e]);
    piVar8[0x1d] = piVar8[0x1a];
    piVar8[0x1e] = piVar8[0x1b];
    piVar8[0x1f] = piVar8[0x1c];
    piVar8[0x31] = (int)((float)piVar8[0x2b] - (float)piVar8[0x2e]);
    piVar8[0x2d] = piVar8[0x2a];
    piVar8[0x2e] = piVar8[0x2b];
    piVar8[0x2f] = piVar8[0x2c];
    piVar8[0x20] = (int)fVar13;
    piVar8[0x22] = (int)fVar12;
    piVar8[0x30] = (int)fVar14;
    piVar8[0x32] = (int)fVar11;
    if (0.0 < (float)piVar8[0x38]) {
      fVar16 = (float)piVar8[0x39];
      piVar8[0x21] = 0;
      piVar8[0x22] = (int)((1.0 - fVar16) * fVar12 + fVar16 * fVar11);
      piVar8[0x20] = (int)((1.0 - fVar16) * fVar13 + fVar16 * fVar14);
    }
  }
  return;
}


