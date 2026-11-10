import importlib.util
from pathlib import Path
import unittest

ROOT=Path(__file__).resolve().parents[2]
spec=importlib.util.spec_from_file_location('allocation_sites',ROOT/'tools/profiling/allocation_sites.py')
module=importlib.util.module_from_spec(spec);spec.loader.exec_module(module)

class SourceAllocationReportTests(unittest.TestCase):
    def trace(self, count=2):
        return ('PLS_SOURCE_META overflow=0 scope=translated_source_operations_not_CLR_heap\n'+
                ''.join(f'PLS_SOURCE_WINDOW {i} {count if i==0 else 0} 0\n' for i in range(300))+
                (f'PLS_SOURCE_SITE new_array {count} 0 Fixture:Method:12\n' if count else ''))

    def test_ratio_is_explicitly_not_clr_heap_equivalence(self):
        result=module.source_operations(self.trace(),10)
        self.assertEqual(result['cpp_new_per_completed_source_operation'],5)
        self.assertFalse(result['clr_heap_equivalence'])
        self.assertEqual(result['by_kind'],{'new_array':2})

    def test_no_source_events_has_no_ratio(self):
        self.assertIsNone(module.source_operations(self.trace(0),10)['cpp_new_per_completed_source_operation'])

    def test_rejects_partial_measurement(self):
        for trace in [self.trace().replace('overflow=0','overflow=1'),
                      self.trace().replace('PLS_SOURCE_SITE new_array 2','PLS_SOURCE_SITE new_array 1'),
                      self.trace().replace('PLS_SOURCE_WINDOW 299 0 0\n','')]:
            with self.assertRaises(ValueError): module.source_operations(trace,10)

if __name__=='__main__':unittest.main()
