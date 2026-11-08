"""Synthetic format boundaries; contains no asset bytes from the game."""
import importlib.util
from pathlib import Path
import struct
import sys
import unittest

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0,str(ROOT/'tools'))
spec = importlib.util.spec_from_file_location('custom_metadata', ROOT/'tools/inventory_custom_formats.py')
custom = importlib.util.module_from_spec(spec)
spec.loader.exec_module(custom)


class CustomFormatTests(unittest.TestCase):
    def test_seb_counts_only_and_rejects_unexplained_tail(self):
        # v0: one layer, one frame, one record; all values synthetic.
        data = struct.pack('>4h',1,1,1,0) + bytes(20)
        result = custom.seb_metadata(data)
        self.assertEqual(result['sprite_records'],1)
        self.assertTrue(result['extent_exact'])
        with self.assertRaisesRegex(ValueError,'tail'):
            custom.seb_metadata(data+b'x')

    def test_seb_rejects_unsupported_version_instead_of_guessing(self):
        with self.assertRaisesRegex(ValueError,'Unsupported'):
            custom.seb_metadata(struct.pack('>bhh',-2,1,1))

    def test_distinct_gmap_layouts_and_unknown_bytes(self):
        match_map = struct.pack('>6h',1,1,0,0,0,0)
        main_map = struct.pack('>21h',1,1,*([0]*19))
        self.assertEqual(custom.gmap_metadata(match_map),'game.Map.LoadMap')
        self.assertEqual(custom.gmap_metadata(main_map),'game.MapMain.LoadMap')
        self.assertEqual(custom.gmap_metadata(b'unknown-data'),'UNKNOWN')

    def test_font_directory_extent_must_fit(self):
        sfnt = b'\0\x01\0\0' + struct.pack('>4H',1,0,0,0)
        sfnt += struct.pack('>4sIII',b'head',0,1000,20)
        name = struct.pack('<i',4)+b'test'
        prefix = name+bytes(36)+struct.pack('<i',0)+bytes(12)+struct.pack('<if',0,1.0)
        body = prefix+struct.pack('<i',len(sfnt))+sfnt
        obj = dict(offset=0,size=len(body))
        document = dict(header=dict(endian='<'),objects=[])
        with self.assertRaisesRegex(ValueError,'font table extent'):
            custom.font_metadata(body,obj,document)


if __name__ == '__main__':
    unittest.main()
