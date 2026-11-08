import copy
from pathlib import Path
import sys
import unittest
sys.path.insert(0,str(Path(__file__).resolve().parents[2]/'tools'))
from update_phase2_progress import portable_verification_sets

class PortableVerificationTests(unittest.TestCase):
    def receipt(self):
        return dict(executed_method_ids=['method'],methods=1,cases=7,passed=7,failures=[],verified_method_ids=['method'])
    def test_fully_matching_method(self):
        self.assertEqual(portable_verification_sets(self.receipt(),{'method'}),({'method'},{'method'}))
    def test_known_platform_difference_remains_unverified(self):
        name='M:java.lang.JMath.Sin(System.Double)';r=self.receipt();r.update(executed_method_ids=[name],verified_method_ids=[],passed=6,failures=[dict(method=name,case='0:1')],known_platform_differences=[dict(method=name,case='0:1')])
        self.assertEqual(portable_verification_sets(r,{name}),({name},set()))
        r['verified_method_ids']=[name]
        with self.assertRaises(ValueError):portable_verification_sets(r,{name})
    def test_unknown_discrepancy_cannot_be_accepted(self):
        r=self.receipt();r.update(passed=6,failures=[dict(method='method',case='0:1')],verified_method_ids=[])
        with self.assertRaises(ValueError):portable_verification_sets(r,{'method'})
        r['known_platform_differences']=copy.deepcopy(r['failures'])
        with self.assertRaises(ValueError):portable_verification_sets(r,{'method'})
    def test_executed_does_not_mean_compiled_or_unique(self):
        with self.assertRaises(ValueError):portable_verification_sets(self.receipt(),set())
        r=self.receipt();r['executed_method_ids']*=2
        with self.assertRaises(ValueError):portable_verification_sets(r,{'method'})
    def test_wrong_case_accounting_is_rejected(self):
        r=self.receipt();r['passed']=6
        with self.assertRaises(ValueError):portable_verification_sets(r,{'method'})
    def test_failed_method_cannot_hide_in_other_identity(self):
        r=self.receipt();r.update(passed=6,failures=[dict(method='not-executed',case='0:1')])
        with self.assertRaises(ValueError):portable_verification_sets(r,{'method'})
if __name__=='__main__':unittest.main()
