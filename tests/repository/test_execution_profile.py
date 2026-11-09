import sys,unittest,json
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[2]/'tools'))
from diagnostic_execution import parse,window
class ExecutionTests(unittest.TestCase):
 def test_completed_and_thrown_are_distinct(self):
  row=dict(assembly='Assembly-CSharp',id='M:Own.A',calls=3,completed=1,thrown=1,inclusive_ns=100,exclusive_ns=50)
  methods,frames,gaps=parse('PLS_METHOD='+json.dumps(row)+'\nPLS_TRANSLATION_GAP=M:Own.B')
  self.assertEqual(methods[('Assembly-CSharp','M:Own.A')]['completed'],1);self.assertEqual(gaps,{'M:Own.B'})
 def test_invalid_counts(self):
  row=dict(assembly='Assembly-CSharp',id='M:Own.A',calls=1,completed=2,thrown=0,inclusive_ns=2,exclusive_ns=1)
  with self.assertRaises(ValueError):parse('PLS_METHOD='+json.dumps(row))
 def test_active_invocation_can_have_uncommitted_inclusive_time(self):
  row=dict(assembly='Assembly-CSharp',id='M:Own.Active',calls=1,completed=0,thrown=0,inclusive_ns=0,exclusive_ns=100)
  methods,_,_=parse('PLS_METHOD='+json.dumps(row));self.assertEqual(len(methods),1)
 def test_profile_four_disjoint_areas(self):
  _,frames,_=parse('PLS_FRAME_PROFILE={"frame":1,"ns":[1000000,2000000,3000000,4000000]}')
  result=window(frames,1,1);self.assertEqual(result['areas']['translated_game']['mean_ms'],1);self.assertEqual(result['areas']['software_raster']['p95_ms'],3)
 def test_duplicate_frame_and_bool_rejected(self):
  text='PLS_FRAME_PROFILE={"frame":1,"ns":[1,2,3,4]}'
  with self.assertRaises(ValueError):parse(text+'\n'+text)
  with self.assertRaises(ValueError):parse('PLS_FRAME_PROFILE={"frame":true,"ns":[1,2,3,4]}')
 def test_only_truncated_terminal_record_can_be_ignored(self):
  good='PLS_FRAME_PROFILE={"frame":1,"ns":[1,2,3,4]}\n';partial='PLS_METHOD={"assembly":"Assembly-CSharp","id":"M:Own'
  _,frames,_=parse(good+partial);self.assertEqual(len(frames),1)
  with self.assertRaises(json.JSONDecodeError):parse(good+partial+'\n')
