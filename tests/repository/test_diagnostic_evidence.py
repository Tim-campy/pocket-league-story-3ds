import hashlib,json,sys,tempfile,unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2];sys.path.insert(0,str(ROOT/'tools'))
from diagnostic_evidence import frame_evidence

class PrivateFrameEvidence(unittest.TestCase):
    def test_logs_are_required_and_frames_never_prove_coverage(self):
        with tempfile.TemporaryDirectory()as temp:
            root=Path(temp);(root/'config').mkdir();(root/'build').mkdir();log=root/'build/game-run.stderr'
            data=b'PLS_PC_METRICS={"event":"memory","game_screen":"UNKNOWN","completed_presented_frames":61}\nPLS_PC_METRICS={invalid\n'
            row=dict(path='build/game-run.stderr',sha256=hashlib.sha256(data).hexdigest())
            report=dict(attempts=[dict(number=1,configuration='Release',diagnostic_only=True,game_coverage_promoted=False,logs=[row])]);(root/'config/phase2-diagnostic-attempts.json').write_text(json.dumps(report))
            self.assertFalse(frame_evidence(root)['available']);log.write_bytes(data)
            result=frame_evidence(root);self.assertEqual(result['max_reported_presented_frames'],61);self.assertEqual(result['normal_methods_promoted'],0);self.assertFalse(result['title_verified']);self.assertFalse(result['menu_verified'])
            log.write_bytes(data+b'changed')
            with self.assertRaisesRegex(ValueError,'differs'):frame_evidence(root)
    def test_paths_outside_private_build_are_refused(self):
        with tempfile.TemporaryDirectory()as temp:
            root=Path(temp);(root/'config').mkdir()
            report=dict(attempts=[dict(number=1,configuration='Release',diagnostic_only=True,game_coverage_promoted=False,logs=[dict(path='outside/game-run.stderr',sha256='unused')])]);(root/'config/phase2-diagnostic-attempts.json').write_text(json.dumps(report))
            with self.assertRaisesRegex(ValueError,'escaped'):frame_evidence(root)
