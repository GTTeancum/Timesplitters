/* Ghidra analysis, not original source. sceSifRebootIop at 002d4598 */

/* iopreset.c */

undefined8 sceSifRebootIop(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char acStack_80 [80];
  
  pcVar5 = acStack_80;
  pcVar6 = "rom0:UDNL ";
  cVar1 = *param_1;
  pcVar4 = param_1;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  if ((uint)((int)pcVar4 - (int)(param_1 + -0xb)) < 0x51) {
    sceSifInitRpc(0);
    sceSifExitRpc();
    cVar2 = DAT_003aa590;
    cVar1 = DAT_003aa590;
    while (cVar1 != '\0') {
      *pcVar5 = cVar2;
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
      cVar2 = *pcVar6;
      cVar1 = *pcVar6;
    }
    cVar2 = *param_1;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      *pcVar5 = cVar2;
      param_1 = param_1 + 1;
      pcVar5 = pcVar5 + 1;
      cVar2 = *param_1;
      cVar1 = *param_1;
    }
    *pcVar5 = '\0';
    uVar3 = sceSifResetIop(acStack_80,0);
  }
  else {
    printf("too long parameter \'%s\'\n");
    uVar3 = 0;
  }
  return uVar3;
}


