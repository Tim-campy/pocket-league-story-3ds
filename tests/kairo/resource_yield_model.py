"""Deterministic control-flow fixture, not a replacement for ResourceManager.

Mirrors LoadStart's for increment and timed return with synthetic durations.
The proposed advancing return is measured separately and is NOT production.
"""
import unittest


def load(durations, budget, calls, proposed=False):
    index = 0
    visited = []
    for _ in range(calls):
        elapsed = 0
        while index < len(durations):
            visited.append(index)
            elapsed += durations[index]
            if elapsed >= budget:
                if proposed:
                    index += 1
                break
            index += 1
        if index == len(durations):
            break
    return index, visited


class YieldModel(unittest.TestCase):
    def test_original_repeats_slow_first_item(self):
        self.assertEqual(load([2300, 1], 150, 16), (0, [0] * 16))

    def test_original_reloads_boundary_item(self):
        self.assertEqual(load([100, 100, 1], 150, 2), (3, [0, 1, 1, 2]))

    def test_proposal_advances_only_completed_item(self):
        self.assertEqual(load([2300, 1], 150, 16, True), (2, [0, 1]))

    def test_fast_path_unchanged(self):
        self.assertEqual(load([1, 1, 1], 150, 1), load([1, 1, 1], 150, 1, True))


if __name__ == '__main__':
    unittest.main()
