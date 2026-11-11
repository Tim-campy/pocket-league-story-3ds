import importlib.util
from pathlib import Path
import struct
import unittest

ROOT=Path(__file__).resolve().parents[2]

def module(name):
    spec=importlib.util.spec_from_file_location(name,ROOT/'tools/fp-discriminants'/(name+'.py'))
    result=importlib.util.module_from_spec(spec);spec.loader.exec_module(result);return result

class FloatModels(unittest.TestCase):
    def test_expression_distinguishes_single_and_double(self):
        rows=module('run_x86').predictions()
        row=next(r for r in rows if r['case']=='expression' and r['a']==2**24)
        self.assertEqual(row['models']['strict_binary32']['value'],0)
        self.assertEqual(row['models']['binary64_narrow_storage_and_calls']['value'],1)

    def test_large_expression_distinguishes_double_and_extended(self):
        row=next(r for r in module('run_x86').predictions() if r['case']=='expression' and r['a']==2**53)
        self.assertEqual(row['models']['binary64_narrow_storage_and_calls']['value'],0)
        self.assertEqual(row['models']['x87_retained_return']['value'],1)

    def test_cal_models_preserve_integer_truncation(self):
        payload=struct.pack('<6i',1,1,10,0,0,1)+struct.pack('<f',0.7)+struct.pack('<6i',1,2,0,0,1,1)
        models=module('cal_models')
        self.assertEqual(models.evaluate(payload,True),struct.pack('<3i',1,1,7))
        self.assertEqual(models.evaluate(payload,False),struct.pack('<3i',1,1,6))

if __name__=='__main__':unittest.main()
