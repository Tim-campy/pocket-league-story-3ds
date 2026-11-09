import sys,json,tempfile,unittest,hashlib
from pathlib import Path
from unittest.mock import patch
ROOT=Path(__file__).resolve().parents[2];sys.path.insert(0,str(ROOT/'tools'))
import verify_phase2
class RefreshTests(unittest.TestCase):
 def setUp(self):
  folder=ROOT/'build/verification-refresh-tests';folder.mkdir(parents=True,exist_ok=True);self.tmp=tempfile.TemporaryDirectory(dir=folder);self.addCleanup(self.tmp.cleanup);self.root=Path(self.tmp.name).resolve();assert self.root.is_relative_to(folder.resolve())
  for name in ('src','config','build/phase2-verification'):(self.root/name).mkdir(parents=True)
  for name in ('CMakeLists.txt','AGENTS.md','.gitignore','src/own.cpp'):(self.root/name).write_text('own',encoding='utf8')
  self.patch=patch.object(verify_phase2,'ROOT',self.root);self.patch.start();self.addCleanup(self.patch.stop)
  (self.root/'config/phase2-diagnostic-attempts.json').write_text('{"attempts":[]}',encoding='utf8')
  (self.root/'config/collation-license-audit.json').write_text('{}',encoding='utf8')
  log=self.root/'build/phase2-verification/own.log';log.write_text('PASS',encoding='utf8')
  self.report=dict(status='PASS',complete=True,checks=[dict(name='own',exit_code=0,log_sha256=verify_phase2.sha(log))],verification_code_inputs=verify_phase2.code_snapshot(),receipts={'phase2-diagnostic-attempts.json':verify_phase2.sha(self.root/'config/phase2-diagnostic-attempts.json')})
  self.report['receipts']['collation-license-audit.json']=verify_phase2.sha(self.root/'config/collation-license-audit.json')
  self.save()
 def save(self):(self.root/'config/phase2-verification.json').write_text(json.dumps(self.report),encoding='utf8')
 def test_replay_only_reuses_same_complete_checks(self):
  verify_phase2.refresh_run_receipts();r=json.loads((self.root/'config/phase2-verification.json').read_text());self.assertTrue(r['replay_receipts_refreshed_without_source_change']);self.assertEqual(r['checks'],self.report['checks'])
 def test_source_edit_refuses_reuse(self):
  (self.root/'src/own.cpp').write_text('changed',encoding='utf8')
  with self.assertRaisesRegex(ValueError,'Code changed'):verify_phase2.refresh_run_receipts()
 def test_other_proof_edit_refuses_reuse(self):
  (self.root/'config/phase2-own-proof.json').write_text('{}',encoding='utf8')
  with self.assertRaisesRegex(ValueError,'Non-replay proof changed'):verify_phase2.refresh_run_receipts()
 def test_failed_check_refuses_reuse(self):
  self.report['checks'][0]['exit_code']=1;self.save()
  with self.assertRaisesRegex(ValueError,'complete passing'):verify_phase2.refresh_run_receipts()
