/* ANALYSIS OUTPUT, not original source. Function stream_RPC at 00205de8 */

/* sound/streamrpc.c */

undefined4 stream_RPC(ulong param_1,undefined8 param_2)

{
  if ((param_1 & 0xfff0) == 0x8020) {
    sceSifCallRpc(0x1fb2040,param_1,0,param_2,0x40,0x1fb2000,0x40,0);
  }
  else {
    sbuf = (undefined4)param_2;
    sceSifCallRpc(0x1fb2040,param_1,0,0x1fb2000,0x10,0x1fb2000,0x40,0);
  }
  return sbuf;
}


