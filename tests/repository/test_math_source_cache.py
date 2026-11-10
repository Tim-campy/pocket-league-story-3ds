import hashlib
import sys
import tempfile
import unittest
from pathlib import Path
from unittest.mock import patch,MagicMock
sys.path.insert(0,str(Path(__file__).resolve().parents[2]/'tools'))
import inspect_android_math as target

class SourceCacheTests(unittest.TestCase):
    def test_verified_cache_does_not_need_network(self):
        data=b'own synthetic fixture'
        with tempfile.TemporaryDirectory() as folder:
            root=Path(folder);path=root/target.PIN/'sysmath.c';path.parent.mkdir();path.write_bytes(data)
            with patch.dict(target.SOURCE_HASHES,{'sysmath.c':hashlib.sha256(data).hexdigest()}),patch.object(target.urllib.request,'urlopen',side_effect=AssertionError('Network used')):
                self.assertEqual(target.pinned_source('sysmath.c',root),data)
    def test_tampered_cache_is_rejected(self):
        with tempfile.TemporaryDirectory() as folder:
            root=Path(folder);path=root/target.PIN/'sysmath.c';path.parent.mkdir();path.write_bytes(b'altered')
            with patch.object(target.urllib.request,'urlopen',side_effect=AssertionError('Network used')):
                with self.assertRaisesRegex(ValueError,'Cached source digest'):target.pinned_source('sysmath.c',root)
    def test_bad_download_is_not_cached(self):
        with tempfile.TemporaryDirectory() as folder:
            root=Path(folder);response=MagicMock();response.read.return_value=b'not the pinned source'
            with patch.object(target.urllib.request,'urlopen',return_value=response):
                with self.assertRaisesRegex(ValueError,'Pinned source digest'):target.pinned_source('sysmath.c',root)
            self.assertFalse((root/target.PIN/'sysmath.c').exists())

if __name__=='__main__':unittest.main()
