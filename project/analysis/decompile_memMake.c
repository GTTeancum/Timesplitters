/* Ghidra analysis, not original source. memMake at 00201b38 */

/* mem/mem.c */

void memMake(undefined8 param_1,int param_2)

{
  mem_eternal_at = (int)param_1;
  mem_eternal_end = mem_eternal_at + 0x72b000;
  mem_level_end = mem_eternal_at + param_2;
  mem_eternal_free = mem_eternal_end - mem_eternal_at;
  mem_level_free = mem_level_end - mem_eternal_end;
  mem_level_at = mem_eternal_end;
  mem_local_at = mem_level_end;
  memBuffer = mem_eternal_at;
  memBufferSize = param_2;
  memMark(param_1,mem_eternal_end);
  memMark(mem_level_at,mem_level_end);
  return;
}


