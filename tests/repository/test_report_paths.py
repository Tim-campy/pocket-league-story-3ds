import importlib.util
from pathlib import Path
import unittest

ROOT=Path(__file__).resolve().parents[2]
spec=importlib.util.spec_from_file_location('report_paths',ROOT/'translator/report_paths.py')
paths=importlib.util.module_from_spec(spec);spec.loader.exec_module(paths)

class SourcePathReceipts(unittest.TestCase):
    def test_preserves_nested_records_and_independent_source_locations(self):
        original={'source_path_base':'repository_root','node_source_default':'source',
                  'methods':[{'id':'own-a','source':'reference/Own.cs','line':3},
                             {'id':'own-b','source':'reference/Own.cs','node_source':'build/adapter.cs','node_line':19}],
                  'diagnostic':{'source':'source description','nested':{'source':'reference/Own.cs'}},
                  'hash':'not-a-path','counts':[1,2,3]}
        import copy
        packed=paths.pack_source_paths(copy.deepcopy(original))
        self.assertEqual(paths.unpack_source_paths(packed),original)
        self.assertEqual(packed['methods'][0]['source'],packed['methods'][1]['source'])
        self.assertEqual(packed['source_files'],['build/adapter.cs','reference/Own.cs'])
        self.assertEqual(packed['diagnostic']['source'],'source description')

    def test_rejects_corrupt_locator_without_silently_discarding_it(self):
        for index in (-1,1):
            with self.assertRaises(ValueError):paths.unpack_source_paths({'source_path_encoding':paths.ENCODING,'source_files':['Own.cs'],'source':index})

    def test_older_receipt_does_not_change(self):
        self.assertEqual(paths.unpack_source_paths({'source':'Own.cs'}),{'source':'Own.cs'})

    def test_method_defaults_roundtrip_without_omitting_records_or_flags(self):
        import copy
        a={'id':'own-a',**copy.deepcopy(paths.METHOD_DEFAULTS),'source':'Own.cs'}
        b={**copy.deepcopy(a),'id':'own-b','is_constructor':True,'constructor_factory_defined':False}
        original={'emitted_methods':[a],'emitted_kairo_dependencies':[b],'unrelated':{'is_constructor':False}}
        packed=paths.pack_source_paths(copy.deepcopy(original))
        self.assertNotIn('is_constructor',packed['emitted_methods'][0])
        self.assertIs(packed['emitted_kairo_dependencies'][0]['is_constructor'],True)
        self.assertEqual(paths.unpack_source_paths(packed),original)
        self.assertEqual(len(packed['emitted_methods'])+len(packed['emitted_kairo_dependencies']),2)

    def test_corrupt_defaults_are_rejected(self):
        for defaults in ({'new_field':False},{'is_constructor':0},{'is_constructor':True},{}):
            with self.assertRaises(ValueError):paths.unpack_source_paths({'method_record_encoding':paths.METHOD_ENCODING,'method_record_defaults':defaults})

if __name__=='__main__':unittest.main()
