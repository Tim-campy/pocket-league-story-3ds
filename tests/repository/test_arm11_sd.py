"""Synthetic catalog tests: SD packaging never accepts unverified payloads."""
import hashlib
from pathlib import Path
import struct
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[2] / 'tools'))
from prepare_arm11_sd import catalog, EXPECTED


class CatalogTests(unittest.TestCase):
    def fixture(self, root, name='converted/local.bin'):
        payload=b'synthetic fixture, not a game asset'
        (root/'converted').mkdir()
        (root/'converted/local.bin').write_bytes(payload)
        def field(s):
            b=s.encode(); return struct.pack('<I',len(b))+b
        data=(b'PLSASV1\0'+EXPECTED.encode()+struct.pack('<I',1)+b'\x01'+
              field('synthetic')+field(name)+struct.pack('<QII',len(payload),0,0)+
              hashlib.sha256(payload).digest())
        (root/'converted/catalog.idx').write_bytes(data)

    def test_verified_payload(self):
        with tempfile.TemporaryDirectory() as d:
            root=Path(d).resolve();self.fixture(root)
            count,files=catalog(root)
            self.assertEqual(count,1)
            self.assertEqual(len(files),2)

    def test_modified_payload(self):
        with tempfile.TemporaryDirectory() as d:
            root=Path(d).resolve();self.fixture(root)
            (root/'converted/local.bin').write_bytes(b'changed')
            with self.assertRaises(ValueError):catalog(root)

    def test_original_binary_refused(self):
        with tempfile.TemporaryDirectory() as d:
            root=Path(d).resolve();self.fixture(root,'converted/test.dll')
            (root/'converted/local.bin').rename(root/'converted/test.dll')
            with self.assertRaisesRegex(ValueError,'Original binary'):catalog(root)

    def test_parent_path_refused(self):
        with tempfile.TemporaryDirectory() as d:
            root=Path(d).resolve();self.fixture(root,'converted/../converted/local.bin')
            with self.assertRaisesRegex(ValueError,'escapes'):catalog(root)

    def test_suffix_refused(self):
        with tempfile.TemporaryDirectory() as d:
            root=Path(d).resolve();self.fixture(root)
            p=root/'converted/catalog.idx';p.write_bytes(p.read_bytes()+b'bad')
            with self.assertRaisesRegex(ValueError,'suffix'):catalog(root)


if __name__=='__main__':unittest.main()
