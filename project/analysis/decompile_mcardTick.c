/* Ghidra analysis, not original source. mcardTick at 00207ad0 */

/* WARNING: Type propagation algorithm not settling */
/* mcard/mcard.c */

void mcardTick(void)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int aiStack_80 [4];
  
  switch(mcardstate) {
  default:
    goto switchD_00207b10_caseD_0;
  case 1:
    checkcards_port = 0;
    if (*checkcards_cards_array == 1) {
      mcardstate = 3;
      checkcards_port = 0;
      checkcards_slot = 0;
      return;
    }
    iVar8 = 0;
    iVar9 = 1;
    do {
      checkcards_slot = iVar9;
      if (iVar9 == 4) {
        iVar8 = iVar8 + 1;
        checkcards_slot = 0;
        checkcards_port = iVar8;
        if (iVar8 == 2) {
          uVar3 = 1;
          checkcards_port = 2;
          break;
        }
      }
      iVar9 = checkcards_slot + 1;
      if (checkcards_cards_array[iVar8 * 4 + checkcards_slot] == 1) {
        mcardstate = 3;
        return;
      }
    } while( true );
  case 2:
    lVar5 = sceMcSync(1,0,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
    mcardstate = 3;
    return;
  case 3:
    uVar7 = 0x3ae3f4;
    if (checkcards_free_array == 0) {
      uVar7 = 0;
    }
    lVar5 = sceMcGetInfo(checkcards_port,checkcards_slot,0x3ae3f0,uVar7,0x3ae3f8);
    if (lVar5 == 0) {
      mcardstate = 4;
      return;
    }
    if (0 < lVar5) {
      mcardstate = 2;
      return;
    }
    goto switchD_00208b90_caseD_fffffff6;
  case 4:
    lVar5 = sceMcSync(1,0,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
    if (checkcards_state_array != 0) {
      puVar6 = (undefined4 *)(checkcards_state_array + (checkcards_port * 4 + checkcards_slot) * 4);
      if (aiStack_80[0] == -1) {
        *puVar6 = 1;
      }
      else {
        if (aiStack_80[0] < 0) {
          if (aiStack_80[0] != -2) {
            *puVar6 = 3;
            goto LAB_00207c78;
          }
          uVar3 = 2;
        }
        else {
          uVar3 = 3;
          if (aiStack_80[0] == 0) {
            *puVar6 = 0;
            goto LAB_00207c78;
          }
        }
        *puVar6 = uVar3;
      }
    }
LAB_00207c78:
    iVar8 = checkcards_free_array;
    if ((aiStack_80[0] == -10) || (aiStack_80[0] < -10)) {
      iVar9 = 1;
    }
    else {
      iVar9 = 1;
      if ((aiStack_80[0] < 1) && (-3 < aiStack_80[0])) {
        if (checkcards_type == 2) {
          if (checkcards_format != 0) {
            iVar9 = checkcards_port * 4 + checkcards_slot;
            bVar1 = checkcards_free_array != 0;
            checkcards_cards_array[iVar9] = 4;
            if (bVar1) {
              *(undefined4 *)(iVar9 * 4 + iVar8) = checkcards_free;
              mcardstate = 5;
              return;
            }
            mcardstate = 5;
            return;
          }
          iVar9 = 5;
        }
        else {
          iVar9 = 3;
        }
      }
    }
    checkcards_cards_array[checkcards_port * 4 + checkcards_slot] = iVar9;
    mcardstate = 5;
    return;
  case 5:
    iVar8 = checkcards_port;
    do {
      checkcards_slot = checkcards_slot + 1;
      if (checkcards_slot == 4) {
        iVar8 = iVar8 + 1;
        checkcards_slot = 0;
        checkcards_port = iVar8;
        if (iVar8 == 2) {
          uVar3 = 1;
          checkcards_port = 2;
          break;
        }
      }
      if (checkcards_cards_array[iVar8 * 4 + checkcards_slot] == 1) {
        mcardstate = 3;
        return;
      }
    } while( true );
  case 6:
    lVar5 = sceMcFormat(port,slot);
    uVar3 = 3;
    if (lVar5 == 0) {
      mcardstate = 7;
      return;
    }
    break;
  case 7:
    lVar5 = sceMcSync(1,0,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
joined_r0x00208648:
    uVar3 = 3;
    if (aiStack_80[0] == 0) {
      mcardresult = 1;
      mcardstate = 0;
      return;
    }
    break;
  case 8:
    lVar5 = sceMcGetEntSpace(port,slot,getentspace_path);
    uVar3 = 3;
    if (lVar5 == 0) {
      mcardstate = 9;
      return;
    }
    break;
  case 9:
    lVar5 = sceMcSync(1,0,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
    if (-1 < aiStack_80[0]) {
      *getentspace_retval = aiStack_80[0];
      mcardresult = 1;
      mcardstate = 0;
      return;
    }
    goto switchD_00208b90_caseD_fffffff6;
  case 10:
    lVar5 = sceMcOpen(port,slot,0x1fb3140,1);
    uVar3 = 3;
    if (lVar5 == 0) {
      mcardstate = 0xb;
      return;
    }
    break;
  case 0xb:
    lVar5 = sceMcSync(1,0,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
    if (-1 < aiStack_80[0]) {
      mcardstate = 0xc;
      mkdir_fd = aiStack_80[0];
      return;
    }
    switch(aiStack_80[0]) {
    default:
      if (aiStack_80[0] < -9) {
        uVar3 = 4;
      }
      else {
        uVar3 = 3;
      }
      break;
    case -4:
      uVar3 = 5;
      break;
    case -2:
      uVar3 = 6;
    }
    break;
  case 0xc:
    lVar5 = sceMcClose(mkdir_fd);
    uVar3 = 3;
    if (lVar5 == 0) {
      mcardstate = 0xd;
      return;
    }
    break;
  case 0xd:
    lVar5 = sceMcSync(1,0,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
    switch(aiStack_80[0]) {
    case 0:
      uVar3 = 1;
      break;
    default:
      if (aiStack_80[0] < -9) {
        uVar3 = 4;
      }
      else {
        uVar3 = 3;
      }
      break;
    case -2:
    case -1:
      uVar3 = 6;
    }
    break;
  case 0xe:
    lVar5 = sceMcMkdir(port,slot,0x1fb2940);
    uVar3 = 3;
    if (lVar5 == 0) {
      mcardstate = 0xf;
      return;
    }
    break;
  case 0xf:
    lVar5 = sceMcSync(1,0,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
    switch(aiStack_80[0]) {
    case 0:
      mcardstate = 0x12;
      getdir_flags = getdir_flags | 0x100;
      return;
    default:
      goto switchD_00208b90_caseD_fffffff6;
    case -4:
      if (mkdir_overwriteok != 0) {
        mcardstate = 0x10;
        return;
      }
      goto switchD_00208b90_caseD_fffffff6;
    case -3:
      uVar3 = 7;
      break;
    case -2:
      uVar3 = 6;
    }
    break;
  case 0x10:
    sprintf(mkdir_tmpbuf,&DAT_003ae430);
    lVar5 = sceMcGetDir(port,slot,0x329720,0,7,0x1fb2e00);
    uVar3 = 3;
    if (lVar5 == 0) {
      mcardstate = 0x11;
      return;
    }
    break;
  case 0x11:
    lVar5 = sceMcSync(1,0,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
    if (-1 < aiStack_80[0]) {
      iVar8 = aiStack_80[0];
      if (0 < aiStack_80[0]) {
        do {
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      iVar8 = 0;
      if (0 < aiStack_80[0]) {
        iVar9 = 0;
        do {
          iVar4 = strcmp((char *)(iVar9 + 0x1fb2e20),"icon.sys");
          if (iVar4 == 0) {
            uVar2 = getdir_flags | 1;
            if (*(int *)(&DAT_01fb2e10 + iVar9) != 0x3c4) {
              uVar2 = getdir_flags | 0x11;
            }
          }
          else {
            iVar4 = strcmp((char *)(iVar9 + 0x1fb2e20),(char *)(&iconfilename)[mkdir_gamedir]);
            uVar2 = getdir_flags;
            if ((iVar4 == 0) &&
               (uVar2 = getdir_flags | 2,
               *(int *)(&DAT_01fb2e10 + iVar9) != *(int *)(&iconfilesize + mkdir_gamedir * 4))) {
              uVar2 = getdir_flags | 0x22;
            }
          }
          getdir_flags = uVar2;
          iVar8 = iVar8 + 1;
        } while ((iVar8 < 7) && (iVar9 = iVar8 * 0x40, iVar8 < aiStack_80[0]));
      }
      mcardstate = 0x12;
      return;
    }
    switch(aiStack_80[0]) {
    default:
      goto switchD_00208b90_caseD_fffffff6;
    case -2:
      uVar3 = 6;
    }
    break;
  case 0x12:
    if ((getdir_flags & 0x11) == 1) {
switchD_00208394_caseD_0:
      mcardstate = 0x18;
      return;
    }
    sprintf(mkdir_tmpbuf,s__s__s_003ae438);
    uVar7 = 2;
    if ((getdir_flags & 1) == 0) {
      uVar7 = 0x202;
    }
    lVar5 = sceMcOpen(port,slot,0x329720,uVar7);
    uVar3 = 3;
    if (lVar5 == 0) {
      mcardstate = 0x13;
      return;
    }
    break;
  case 0x13:
    lVar5 = sceMcSync(1,0,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
    if (-1 < aiStack_80[0]) {
      mcardstate = 0x14;
      mkdir_fd = aiStack_80[0];
      return;
    }
    switch(aiStack_80[0]) {
    default:
      goto switchD_00208b90_caseD_fffffff6;
    case -3:
      uVar3 = 7;
      break;
    case -2:
      uVar3 = 6;
    }
    break;
  case 0x14:
    lVar5 = sceMcWrite(mkdir_fd,0x1fb29c0,0x3c4);
    uVar3 = 3;
    if (lVar5 == 0) {
      mcardstate = 0x15;
      return;
    }
    break;
  case 0x15:
    lVar5 = sceMcSync(1,0,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
    if (aiStack_80[0] == 0x3c4) {
      mcardstate = 0x16;
      return;
    }
    switch(aiStack_80[0]) {
    default:
      goto switchD_00208b90_caseD_fffffff6;
    case -3:
      uVar3 = 7;
    }
    break;
  case 0x16:
    lVar5 = sceMcClose(mkdir_fd);
    uVar3 = 3;
    if (lVar5 == 0) {
      mcardstate = 0x17;
      return;
    }
    break;
  case 0x17:
    lVar5 = sceMcSync(1,0,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
    switch(aiStack_80[0]) {
    case 0:
      goto switchD_00208394_caseD_0;
    }
    goto switchD_00208b90_caseD_fffffff6;
  case 0x18:
    if ((getdir_flags & 0x22) == 2) {
switchD_00208584_caseD_0:
      mcardstate = 0x1e;
      return;
    }
    sprintf(mkdir_tmpbuf,s__s__s_003ae438);
    uVar7 = 0x202;
    if ((getdir_flags & 2) != 0) {
      uVar7 = 2;
    }
    lVar5 = sceMcOpen(port,slot,0x329720,uVar7);
    uVar3 = 3;
    if (lVar5 == 0) {
      mcardstate = 0x19;
      return;
    }
    break;
  case 0x19:
    lVar5 = sceMcSync(1,(uint)aiStack_80 | 4,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
    if (-1 < aiStack_80[0]) {
      mcardstate = 0x1a;
      mkdir_fd = aiStack_80[0];
      return;
    }
    switch(aiStack_80[0]) {
    default:
      goto switchD_00208b90_caseD_fffffff6;
    case -3:
      uVar3 = 7;
    }
    break;
  case 0x1a:
    lVar5 = sceMcWrite(mkdir_fd,(&iconfiledata)[mkdir_gamedir],
                       *(undefined4 *)(&iconfilesize + mkdir_gamedir * 4));
    uVar3 = 3;
    if (lVar5 == 0) {
      mcardstate = 0x1b;
      return;
    }
    break;
  case 0x1b:
    lVar5 = sceMcSync(1,0,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
    if (aiStack_80[0] == *(int *)(&iconfilesize + mkdir_gamedir * 4)) {
      mcardstate = 0x1c;
      return;
    }
    switch(aiStack_80[0]) {
    default:
      goto switchD_00208b90_caseD_fffffff6;
    case -3:
      uVar3 = 7;
    }
    break;
  case 0x1c:
    lVar5 = sceMcClose(mkdir_fd);
    uVar3 = 3;
    if (lVar5 == 0) {
      mcardstate = 0x1d;
      return;
    }
    break;
  case 0x1d:
    lVar5 = sceMcSync(1,0,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
    switch(aiStack_80[0]) {
    case 0:
      goto switchD_00208584_caseD_0;
    }
switchD_00208b90_caseD_fffffff6:
    uVar3 = 3;
    break;
  case 0x1e:
    if (((getdir_flags & 0x100) == 0) || (mkdir_copyprotect == 0)) {
      uVar3 = 1;
    }
    else {
      memset(&mkdir_fileattr,0,0x40);
      DAT_01fb2dd4 = 0x2f;
      lVar5 = sceMcSetFileInfo(port,slot,0x1fb2940,0x1fb2dc0,4);
      uVar3 = 3;
      if (lVar5 == 0) {
        mcardstate = 0x1f;
        return;
      }
    }
    break;
  case 0x1f:
    lVar5 = sceMcSync(1,0,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
    if (aiStack_80[0] == -4) goto switchD_00208b90_caseD_fffffff6;
    uVar3 = 3;
    if (-4 < aiStack_80[0]) {
      if (aiStack_80[0] != -2) goto joined_r0x00208648;
      uVar3 = 6;
    }
    break;
  case 0x20:
    lVar5 = sceMcOpen(port,slot,0x1fb2fc0,1);
    uVar3 = 3;
    if (lVar5 == 0) {
      mcardstate = 0x21;
      return;
    }
    break;
  case 0x21:
    lVar5 = sceMcSync(1,0,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
    if (-1 < aiStack_80[0]) {
      if (0 < read_seek) {
        mcardstate = 0x22;
        read_fd = aiStack_80[0];
        return;
      }
      mcardstate = 0x24;
      read_fd = aiStack_80[0];
      return;
    }
    switch(aiStack_80[0]) {
    default:
      if (aiStack_80[0] == -4) {
        mcardresult = 5;
        mcardstate = 0;
        return;
      }
      if (-10 < aiStack_80[0]) {
        mcardresult = 3;
        mcardstate = 0;
        return;
      }
      mcardresult = 4;
      mcardstate = 0;
      return;
    case -2:
      uVar3 = 6;
    }
    break;
  case 0x22:
    lVar5 = sceMcSeek(read_fd,read_seek,0);
    uVar3 = 3;
    if (lVar5 == 0) {
      mcardstate = 0x23;
      return;
    }
    break;
  case 0x23:
    lVar5 = sceMcSync(1,0,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
    if (aiStack_80[0] == read_seek) {
      mcardstate = 0x24;
      return;
    }
    if (aiStack_80[0] == -4) goto switchD_00208b90_caseD_fffffff6;
    uVar3 = 3;
    if ((-4 < aiStack_80[0]) && (uVar3 = 3, aiStack_80[0] == -2)) {
      uVar3 = 6;
    }
    break;
  case 0x24:
    lVar5 = sceMcRead(read_fd,read_buffer,request_read_len);
    uVar3 = 3;
    if (lVar5 == 0) {
      mcardstate = 0x25;
      return;
    }
    break;
  case 0x25:
    lVar5 = sceMcSync(1,0,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
    if (-1 < aiStack_80[0]) {
      mcardstate = 0x26;
      result_read_len = aiStack_80[0];
      return;
    }
    if ((((aiStack_80[0] == -4) || (aiStack_80[0] < -3)) || (-1 < aiStack_80[0])) ||
       (aiStack_80[0] < -2)) {
      if (-10 < aiStack_80[0]) {
        mcardresult = 3;
        mcardstate = 0;
        return;
      }
      mcardresult = 4;
      mcardstate = 0;
      return;
    }
    uVar3 = 6;
    break;
  case 0x26:
    lVar5 = sceMcClose(read_fd);
    uVar3 = 3;
    if (lVar5 == 0) {
      mcardstate = 0x27;
      return;
    }
    break;
  case 0x27:
    lVar5 = sceMcSync(1,0,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
    switch(aiStack_80[0]) {
    case 0:
      if (result_read_len != request_read_len) {
        mcardresult = 2;
        mcardstate = 0;
        return;
      }
      mcardresult = 1;
      mcardstate = 0;
      return;
    default:
      if (-10 < aiStack_80[0]) {
        mcardresult = 3;
        mcardstate = 0;
        return;
      }
      mcardresult = 4;
      mcardstate = 0;
      return;
    case -2:
    case -1:
      uVar3 = 6;
    }
    break;
  case 0x28:
    uVar7 = 2;
    if (write_overwriteok == 0) {
      uVar7 = 0x202;
    }
    lVar5 = sceMcOpen(port,slot,0x1fb3040,uVar7);
    uVar3 = 3;
    if (lVar5 == 0) {
      mcardstate = 0x29;
      return;
    }
    break;
  case 0x29:
    lVar5 = sceMcSync(1,0,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
    if (-1 < aiStack_80[0]) {
      if (0 < write_seek) {
        mcardstate = 0x2a;
        write_fd = aiStack_80[0];
        return;
      }
      mcardstate = 0x2c;
      write_fd = aiStack_80[0];
      return;
    }
    switch(aiStack_80[0]) {
    case -10:
      uVar3 = 4;
      break;
    default:
      goto switchD_00208b90_caseD_fffffff6;
    case -3:
      uVar3 = 7;
      break;
    case -2:
      uVar3 = 6;
    }
    break;
  case 0x2a:
    lVar5 = sceMcSeek(write_fd,write_seek,0);
    uVar3 = 3;
    if (lVar5 == 0) {
      mcardstate = 0x2b;
      return;
    }
    break;
  case 0x2b:
    lVar5 = sceMcSync(1,0,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
    if (aiStack_80[0] == write_seek) {
      mcardstate = 0x2c;
      return;
    }
    if (aiStack_80[0] == -4) goto switchD_00208b90_caseD_fffffff6;
    uVar3 = 3;
    if ((-4 < aiStack_80[0]) && (uVar3 = 3, aiStack_80[0] == -2)) {
      uVar3 = 6;
    }
    break;
  case 0x2c:
    lVar5 = sceMcWrite(write_fd,write_buffer,write_len);
    uVar3 = 3;
    if (lVar5 == 0) {
      mcardstate = 0x2d;
      return;
    }
    break;
  case 0x2d:
    lVar5 = sceMcSync(1,0,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
    if (aiStack_80[0] == write_len) {
      mcardstate = 0x2e;
      return;
    }
    switch(aiStack_80[0]) {
    case -10:
      uVar3 = 4;
      break;
    default:
      goto switchD_00208b90_caseD_fffffff6;
    case -3:
      uVar3 = 7;
      break;
    case -2:
      uVar3 = 6;
    }
    break;
  case 0x2e:
    lVar5 = sceMcClose(write_fd);
    uVar3 = 3;
    if (lVar5 == 0) {
      mcardstate = 0x2f;
      return;
    }
    break;
  case 0x2f:
    lVar5 = sceMcSync(1,0,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
    switch(aiStack_80[0]) {
    case 0:
      uVar3 = 1;
      break;
    default:
      goto switchD_00208b90_caseD_fffffff6;
    case -2:
    case -1:
      uVar3 = 6;
    }
    break;
  case 0x30:
    lVar5 = sceMcDelete(port,slot,0x1fb30c0);
    uVar3 = 3;
    if (lVar5 == 0) {
      mcardstate = 0x31;
      return;
    }
    break;
  case 0x31:
    lVar5 = sceMcSync(1,0,aiStack_80);
    if (lVar5 != 1) {
      return;
    }
    switch(aiStack_80[0]) {
    case 0:
      uVar3 = 1;
      break;
    default:
      goto switchD_00208b90_caseD_fffffff6;
    case -4:
      uVar3 = 5;
    }
  }
  mcardstate = 0;
  mcardresult = uVar3;
switchD_00207b10_caseD_0:
  return;
}


