set pagination off
set confirm off
set breakpoint pending on
break lockupalarm_0x200f10
commands
 silent
 printf "TS04: first original lockup-alarm callback reached\n"
 info args
 bt 6
 dump binary memory /mnt/data/ts04-worklogs/first-alarm-ram.bin rdram rdram+0x2000000
 print runtime->m_memory.vif1_regs
 print runtime->m_vu1.m_state
 quit
end
run
