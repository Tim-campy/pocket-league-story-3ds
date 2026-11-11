import hashlib,json,sys,tempfile,unittest
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[2]/'tools'))
import measure_null_thread_cpu as measurement

class ThreadMeasurement(unittest.TestCase):
    def test_quantization_is_visible_not_filled_from_elapsed(self):
        result=measurement.summary([0,0,15.625,15.625])
        self.assertEqual(result['zero_samples'],2)
        self.assertEqual(result['mean'],7.8125)
        self.assertEqual(result['p95'],15.625)

    def fixture(self,folder,form=4):
        lines=[]
        for frame in range(661,961):
            lines.append('PLS_NULL_FRAME='+json.dumps(dict(frame=frame,form_id=form,collections=0,collection_ns=0,longest_collection_ns=0)))
            lines.append('PLS_NULL_THREAD='+json.dumps(dict(frame=frame,cpu_ns=1_000_000,cycles=3_000_000,wall_ns=2_000_000)))
        raw=('\n'.join(lines)+'\n').encode();(folder/'stdout.log').write_bytes(raw)
        (folder/'result.json').write_text(json.dumps(dict(exit_code=0,allocation_probe=False,external_sampling=False,memory_categories=False,stdout_sha256=hashlib.sha256(raw).hexdigest(),executable_sha256='fixture')))

    def test_wrong_screen_is_not_a_menu_measurement(self):
        with tempfile.TemporaryDirectory() as name:
            p=Path(name);self.fixture(p,0)
            with self.assertRaisesRegex(ValueError,'expected screen'):measurement.parse_run(p,'menu')

    def test_changed_receipt_cannot_be_used(self):
        with tempfile.TemporaryDirectory() as name:
            p=Path(name);self.fixture(p)
            with (p/'stdout.log').open('ab') as f:f.write(b'changed')
            with self.assertRaisesRegex(ValueError,'changed'):measurement.parse_run(p,'menu')

if __name__=='__main__':unittest.main()
