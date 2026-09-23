import struct
import sys
import unittest
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[2]/'scripts'))
from analyze_dma_capture import walk,RAM_SIZE

class DmaCaptureTest(unittest.TestCase):
    def test_size_rejected(self):
        with self.assertRaises(ValueError):walk(b'\0'*16,0)
    def test_long_chain(self):
        b=bytearray(RAM_SIZE)
        for i in range(8192):struct.pack_into('<Q',b,0x1000+i*16,1<<28)
        struct.pack_into('<Q',b,0x1000+8192*16,7<<28)
        result=walk(b,0x1000);self.assertEqual(result['tag_count'],8193);self.assertEqual(result['old_4096_limit_next_tadr'],hex(0x11000));self.assertEqual(result['last_tag']['id'],7)
    def test_cycle_rejected(self):
        b=bytearray(RAM_SIZE);struct.pack_into('<Q',b,0x1000,(0x1000<<32)|(2<<28))
        with self.assertRaisesRegex(ValueError,'cyclic'):walk(b,0x1000)
    def test_payload_bounds(self):
        b=bytearray(RAM_SIZE);struct.pack_into('<Q',b,0x1000,((RAM_SIZE-16)<<32)|(3<<28)|2)
        with self.assertRaisesRegex(ValueError,'payload'):walk(b,0x1000)
    def test_repeated_sublist_is_not_cycle(self):
        b=bytearray(RAM_SIZE)
        for address in (0x1000,0x1010):struct.pack_into('<Q',b,address,(0x2000<<32)|(5<<28))
        struct.pack_into('<Q',b,0x1020,7<<28);struct.pack_into('<Q',b,0x2000,6<<28)
        self.assertEqual(walk(b,0x1000)['tag_count'],5)
if __name__=='__main__':unittest.main()
