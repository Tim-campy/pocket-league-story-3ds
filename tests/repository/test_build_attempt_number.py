"""Interrupted builds retain private logs and must not block the next attempt."""
from pathlib import Path
import sys
import tempfile
import unittest
ROOT=Path(__file__).resolve().parents[2]
sys.path.insert(0,str(ROOT/'tools'))
from build_pc import next_attempt_number

class BuildAttemptNumberTests(unittest.TestCase):
    def test_history_and_orphan_logs_both_reserve_numbers(self):
        parent=(ROOT/'build/attempt-number-tests').resolve();parent.mkdir(parents=True,exist_ok=True)
        self.assertTrue(parent.is_relative_to(ROOT.resolve()))
        with tempfile.TemporaryDirectory(dir=parent)as temporary:
            folder=Path(temporary).resolve();self.assertTrue(folder.is_relative_to(parent))
            self.assertEqual(next_attempt_number({},folder),1)
            history=dict(attempts=[dict(number=2),dict(number=8)])
            self.assertEqual(next_attempt_number(history,folder),9)
            orphan=folder/'attempts/9';orphan.mkdir(parents=True)
            (orphan/'partial.log').write_text('own partial fixture')
            self.assertEqual(next_attempt_number(history,folder),10)
            self.assertTrue((orphan/'partial.log').exists())
            (folder/'attempts/10').write_text('own conflicting path')
            self.assertEqual(next_attempt_number(history,folder),11)

if __name__=='__main__':unittest.main()
