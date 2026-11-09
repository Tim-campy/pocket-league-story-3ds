"""A diagnostic gap must be fatal even if the owned program catches it."""
from pathlib import Path
import sys
import tempfile
import unittest
ROOT=Path(__file__).resolve().parents[2]
sys.path.insert(0,str(ROOT/'tools'))
from run_native_process import run_native_process

class NativeSupervisorTests(unittest.TestCase):
    def execute(self,program,diagnostic,timeout=5):
        parent=(ROOT/'build/native-supervisor-tests').resolve();parent.mkdir(parents=True,exist_ok=True)
        self.assertTrue(parent.is_relative_to(ROOT.resolve()))
        with tempfile.TemporaryDirectory(dir=parent)as folder:
            folder=Path(folder).resolve();self.assertTrue(folder.is_relative_to(parent))
            stdout=folder/'stdout';stderr=folder/'stderr'
            result=run_native_process([sys.executable,'-u','-c',program],cwd=folder,env=None,
                stdout_path=stdout,stderr_path=stderr,timeout_seconds=timeout,diagnostic=diagnostic)
            return result,stdout.read_bytes(),stderr.read_bytes()

    def test_gap_stops_caught_error_loop_and_preserves_logs(self):
        program='import sys,time;print("before",flush=True);sys.stderr.write("PLS_TRANSLATION_");sys.stderr.flush();time.sleep(.02);sys.stderr.write("GAP=own-fixture\\n");sys.stderr.flush();time.sleep(30)'
        result,out,err=self.execute(program,True)
        self.assertTrue(result['translation_gap_detected'])
        self.assertEqual(result['stopped_reason'],'translation-gap')
        self.assertLess(result['elapsed_seconds'],5)
        self.assertIn(b'before',out);self.assertIn(b'PLS_TRANSLATION_GAP=',err)
        self.assertFalse(result['game_boot'])

    def test_zero_exit_with_gap_is_still_flagged(self):
        result,_,_=self.execute('import sys;sys.stderr.write("PLS_TRANSLATION_GAP=own-fixture\\n")',True)
        self.assertTrue(result['translation_gap_detected'])
        self.assertFalse(result['title_verified'])

    def test_regular_success_does_not_infer_a_screen(self):
        result,out,_=self.execute('print("own fixture")',False)
        self.assertEqual(result['process_exit_code'],0)
        self.assertIsNone(result['stopped_reason'])
        self.assertFalse(result['translation_gap_detected'])
        self.assertFalse(result['menu_verified']);self.assertIn(b'own fixture',out)

if __name__=='__main__':unittest.main()
