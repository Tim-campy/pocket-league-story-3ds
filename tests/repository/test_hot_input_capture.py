import importlib.util
from pathlib import Path
import struct
import tempfile
import unittest

PATH=Path(__file__).resolve().parents[2]/'tools/profiling/run_hot_methods.py'
spec=importlib.util.spec_from_file_location('hot_methods',PATH)
module=importlib.util.module_from_spec(spec);spec.loader.exec_module(module)


class BatchStaticInputs(unittest.TestCase):
    def test_camera_requires_same_globals_but_allows_different_arguments(self):
        def data(argument,global_value):
            return struct.pack('<10i',2,argument,2,2,0,0,global_value,2,3,4)+struct.pack('<2f',1,2)
        with tempfile.TemporaryDirectory() as folder:
            a=Path(folder)/'a';b=Path(folder)/'b'
            a.write_bytes(data(1,10));b.write_bytes(data(99,10))
            self.assertEqual(module.static_signature(a,0),module.static_signature(b,0))
            b.write_bytes(data(99,11))
            self.assertNotEqual(module.static_signature(a,0),module.static_signature(b,0))

    def test_collision_has_no_captured_static_globals(self):
        with tempfile.TemporaryDirectory() as folder:
            path=Path(folder)/'case';path.write_bytes(struct.pack('<8fi',*([1.0]*8),0))
            self.assertEqual(module.static_signature(path,3),b'')


if __name__=='__main__':unittest.main()
