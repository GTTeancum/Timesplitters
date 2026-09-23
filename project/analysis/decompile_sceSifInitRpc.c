/* Ghidra analysis, not original source. sceSifInitRpc at 002d2520 */

/* sifrpc.c */

void sceSifInitRpc(void)

{
  long lVar1;
  
  if (_sceSifInitCheck == 0) {
    _sceSifInitCheck = 1;
    sceSifInitCmd();
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    DAT_01ff0120 = 0x20;
    _data_table = 1;
    DAT_01ff011c = 0x21fef900;
    DAT_01ff0104 = 0x21fee900;
    DAT_01ff0114 = 0x21fef100;
    DAT_01ff0108 = 0x20;
    DAT_01ff010c = 0;
    DAT_01ff0110 = 0;
    DAT_01ff0118 = 0x20;
    DAT_01ff0124 = 0;
    sceSifAddCmdHandler(0xffffffff80000008,0x2d2810,0x1ff0100);
    sceSifAddCmdHandler(0xffffffff80000009,0x2d2aa8,0x1ff0100);
    sceSifAddCmdHandler(0xffffffff8000000a,0x2d2c78,0x1ff0100);
    sceSifAddCmdHandler(0xffffffff8000000c,0x2d28c0,0x1ff0100);
    EI();
    lVar1 = sceSifGetReg(0xffffffff80000002);
    if (lVar1 == 0) {
      DAT_01fee94c = 1;
      sceSifSendCmd(0xffffffff80000002,0x1fee940,0x10,0,0,0);
      do {
        lVar1 = sceSifGetSreg(0);
      } while (lVar1 == 0);
      sceSifSetReg(0xffffffff80000002,1);
      return;
    }
  }
  return;
}


