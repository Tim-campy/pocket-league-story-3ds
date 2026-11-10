import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[2] / 'tools'))
from analyze_null_cpu import frame_ticks, union


class SchedulingIntervals(unittest.TestCase):
    def test_two_threads_and_interrupts(self):
        # Two target threads overlap on different cores; CPU time is summed.
        self.assertEqual(frame_ticks(2, 8, [(0, 5, 0), (4, 9, 1)],
                                     {0: [(3, 4)], 1: [(6, 7)]}), (5, 2))

    def test_nested_interrupts_are_not_subtracted_twice(self):
        excluded = union([(3, 6), (1, 4), (8, 9), (2, 3)])
        self.assertEqual(excluded, [(1, 6), (8, 9)])
        self.assertEqual(frame_ticks(0, 10, [(0, 10, 0)], {0: excluded}), (4, 6))

    def test_sleep_is_not_cpu(self):
        self.assertEqual(frame_ticks(0, 100, [(10, 20, 0), (80, 90, 0)], {}), (20, 0))


if __name__ == '__main__':
    unittest.main()
