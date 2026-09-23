/* ANALYSIS OUTPUT, not original source. Function stream_RPCinit at 00205d88 */

/* sound/streamrpc.c */

undefined4 stream_RPCinit(void)

{
  long lVar1;
  
  do {
    lVar1 = sceSifBindRpc(0x1fb2040,0x534a4521,0);
    if (lVar1 < 0) {
      return 0xffffffff;
    }
  } while (DAT_01fb2064 == 0);
  return 0;
}


