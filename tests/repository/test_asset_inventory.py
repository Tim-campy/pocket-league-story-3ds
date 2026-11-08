"""Synthetic format fixtures only; no game content is embedded in tests."""
from pathlib import Path
import struct
import sys
import unittest
import zlib

sys.path.insert(0,str(Path(__file__).resolve().parents[2]/'tools'))
from inventory_assets import parse_jar, png_metadata, texture_bytes, xor


def container(name='fixture.bin',payload=b'synthetic-data'):
    encoded=name.encode();body=struct.pack('>i',len(payload))+payload
    return struct.pack('>3i',1,len(body),1)+struct.pack('>i',len(encoded))+encoded+struct.pack('>2i',0,len(payload))+b'\0'+body


def png_fixture():
    def chunk(name,data):return struct.pack('>I',len(data))+name+data+struct.pack('>I',zlib.crc32(name+data)&0xffffffff)
    header=struct.pack('>IIBBBBB',1,1,8,2,0,0,0)
    return b'\x89PNG\r\n\x1a\n'+chunk(b'IHDR',header)+chunk(b'IDAT',zlib.compress(b'\0\0\0\0'))+chunk(b'IEND',b'')


class AssetInventoryTests(unittest.TestCase):
    def test_container_extent_and_content_roundtrip(self):
        members=parse_jar(container());self.assertEqual(len(members),1)
        self.assertEqual(members[0]['data'],b'synthetic-data')

    def test_container_rejects_traversal(self):
        with self.assertRaises(ValueError):parse_jar(container('../outside.bin'))

    def test_container_rejects_truncation(self):
        for trim in (1,4,12):
            with self.assertRaises(ValueError):parse_jar(container()[:-trim])

    def test_xor_is_own_inverse(self):
        data=container();key=b'own-synthetic-fixture-key'
        self.assertEqual(xor(xor(data,key),key),data)

    def test_png_dimensions_and_checksum(self):
        data=png_fixture();meta=png_metadata(data)
        self.assertEqual((meta['width'],meta['height'],meta['has_alpha']),(1,1,False))
        broken=bytearray(data);broken[20]^=1
        with self.assertRaises(ValueError):png_metadata(bytes(broken))

    def test_texture_padding_and_oversized_split(self):
        self.assertEqual(texture_bytes(9,9,32),16*16*4)
        self.assertEqual(texture_bytes(1025,1,32),(1024*8+8*8)*4)
        self.assertEqual(texture_bytes(0,0,32),0)


if __name__=='__main__':unittest.main()
