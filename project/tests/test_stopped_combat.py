import importlib.util
from pathlib import Path
import struct
import unittest
p=Path(__file__).resolve().parents[2]/'scripts/inspect_stopped_combat.py'
spec=importlib.util.spec_from_file_location('stopped_combat',p)
m=importlib.util.module_from_spec(spec);spec.loader.exec_module(m)
class StoppedCombatTests(unittest.TestCase):
    def test_exact_array_stride_not_pointer(self):
        ram=bytearray(m.RAM_SIZE)
        struct.pack_into('<5f',ram,m.MATCHSTATS,3,2,0,3,2)
        struct.pack_into('<5f',ram,m.MATCHSTATS+m.STRIDE*13,9,8,1,8,7)
        data=m.inspect(ram)
        self.assertEqual(data['counters'][0]['attributed_kills'],3)
        self.assertEqual(data['counters'][1]['attributed_kills'],0)
        self.assertEqual(data['counters'][13]['suicides'],1)
    def test_player_health_and_flags(self):
        ram=bytearray(m.RAM_SIZE)
        for a,v in [(0x3afa20,0x10000),(0x10180,0x12000),(0x3ae4d8,1),(0x3ae740,0x20)]:
            struct.pack_into('<I',ram,a,v)
        struct.pack_into('<f',ram,0x12208,.5)
        data=m.inspect(ram)
        self.assertEqual(data['first_player']['health'],.5)
        self.assertEqual(data['invincible'],1)
        self.assertEqual(data['selected_cheats'],'0x20')
    def test_reject_truncated_and_invalid_pointer(self):
        with self.assertRaises(ValueError):m.inspect(b'\x00'*32)
        ram=bytearray(m.RAM_SIZE);struct.pack_into('<I',ram,0x3afa20,0xfffffffe)
        with self.assertRaises(ValueError):m.inspect(ram)
    def test_reject_nonfinite_counter(self):
        ram=bytearray(m.RAM_SIZE);struct.pack_into('<f',ram,m.MATCHSTATS,float('nan'))
        with self.assertRaises(ValueError):m.inspect(ram)
if __name__=='__main__':unittest.main()
