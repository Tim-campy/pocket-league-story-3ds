"""A presented frame or instrumentation record is not title/menu evidence."""
import json
from pathlib import Path
import sys
import unittest
ROOT=Path(__file__).resolve().parents[2]
sys.path.insert(0,str(ROOT/'tools'))
from build_pc import metric_log_summary

def line(value):return b'PLS_PC_METRICS='+json.dumps(value).encode()+b'\n'

class MetricsReceiptTests(unittest.TestCase):
    def test_memory_and_summary_are_counted_without_screen_promotion(self):
        context=dict(completed_presented_frames=1,game_screen='UNKNOWN')
        data=b'ordinary diagnostic\n'+line(dict(context,event='memory',phase='first_presented_frame',process={}))
        data+=line(dict(context,event='frame_summary',slices={}))
        result=metric_log_summary(data)
        self.assertEqual(result['records'],2)
        self.assertEqual(result['frame_summary_records'],1)
        self.assertEqual(result['memory_phases'],['first_presented_frame'])
        self.assertEqual(result['game_screen'],'UNKNOWN')
        self.assertEqual(result['max_completed_presented_frames'],1)

    def test_malformed_or_unproven_context_is_not_counted(self):
        valid=dict(event='memory',phase='before_main',process={},game_screen='UNKNOWN',completed_presented_frames=0)
        data=line(dict(valid,game_screen='TITLE'))+line(dict(valid,completed_presented_frames=-1))
        data+=line(dict(valid,completed_presented_frames=True))+b'PLS_PC_METRICS={truncated\n'
        result=metric_log_summary(data)
        self.assertEqual(result['invalid_records'],4)
        self.assertEqual(result['records'],0)
        self.assertEqual(result['memory_phases'],[])

    def test_no_instrumentation_is_not_a_zero_frame_measurement(self):
        result=metric_log_summary(b'Native platform exception\n')
        self.assertEqual(result['records'],0)
        self.assertEqual(result['frame_summary_records'],0)

    def test_late_window_and_memory_are_accepted_without_screen_inference(self):
        sample=dict(event='diagnostic_frame_sample',completed_presented_frame=661,stage_nanoseconds=[1]*12)
        memory=dict(event='memory',phase='after_900_presented_frames',completed_presented_frames=900,game_screen='UNKNOWN',process={})
        result=metric_log_summary(line(sample)+line(memory))
        self.assertEqual((result['records'],result['invalid_records'],result['max_completed_presented_frames']),(2,0,900))
        self.assertEqual(result['game_screen'],'UNKNOWN')
        for bad in [dict(sample,stage_nanoseconds=[1]*11),dict(sample,stage_nanoseconds=[True]*12),dict(sample,completed_presented_frame=1201),dict(sample,game_screen='MENU')]:
            self.assertEqual(metric_log_summary(line(bad))['invalid_records'],1)

if __name__=='__main__':unittest.main()
