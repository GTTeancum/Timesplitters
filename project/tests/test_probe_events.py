import math
from pathlib import Path
import sys
import unittest
sys.path.insert(0, str(Path(__file__).resolve().parents[2] / 'scripts'))
from probe_events import append_events

class ProbeEventsTest(unittest.TestCase):
    def test_normal_sequence(self):
        self.assertEqual(append_events([], [{'at':2,'key':'x'}], 10), [(2.,'keydown','x'),(2.35,'keyup','x')])
    def test_append_only_new_edges(self):
        old=[{'at':2,'key':'x'}]
        self.assertEqual(len(append_events(old, old+[{'at':4,'key':'w','hold':1}], 10)),2)
    def test_rewrite_rejected(self):
        with self.assertRaises(ValueError): append_events([{'at':2,'key':'x'}],[{'at':2,'key':'e'}],10)
    def test_truncation_rejected(self):
        with self.assertRaises(ValueError): append_events([{'at':2,'key':'x'}],[],10)
    def test_invalid_and_nonfinite_rejected(self):
        for item in [{'at':math.nan,'key':'x'},{'at':2,'key':'x','hold':math.inf},
                     {'at':True,'key':'x'},{'at':2,'key':'unknown'},{'at':2,'key':[]}]:
            with self.subTest(item=item), self.assertRaises(ValueError): append_events([], [item], 10)
    def test_deadline_and_overlap(self):
        for doc in [[{'at':9,'key':'x','hold':2}], [{'at':1,'key':'x','hold':3},{'at':2,'key':'x'}]]:
            with self.assertRaises(ValueError): append_events([],doc,10)
    def test_adjacent_holds_release_first(self):
        edges=append_events([], [{'at':1,'key':'x','hold':1},{'at':2,'key':'x'}],10)
        self.assertEqual(edges[1:3],[(2.,'keyup','x'),(2.,'keydown','x')])
    def test_concurrent_different_keys(self):
        self.assertEqual(len(append_events([], [{'at':1,'key':'w','hold':2},{'at':1,'key':'e','hold':1}],10)),4)

if __name__ == '__main__': unittest.main()
