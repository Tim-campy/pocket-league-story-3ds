"""Unity 15 fixtures made from synthetic metadata; no game bytes or assets."""
import importlib.util
from pathlib import Path
import struct
import unittest

ROOT = Path(__file__).resolve().parents[2]
spec = importlib.util.spec_from_file_location('unity15_inventory', ROOT/'tools/unity15_metadata.py')
unity = importlib.util.module_from_spec(spec)
spec.loader.exec_module(unity)


def aligned_string(value, endian='<'):
    raw = value.encode('utf-8')
    body = struct.pack(endian+'i', len(raw)) + raw
    return body + bytes((-len(body)) % 4)


def texture_body(width=8, height=8, image_count=1, stream=False):
    # NamedObject and Texture for the 5.3 Android player have no editor prefix.
    raw = aligned_string('synthetic')
    raw += struct.pack('<5i', width, height, width*height*2, 7, 1)
    raw += b'\x01\x00' + b'\0\0'
    raw += struct.pack('<2i', image_count, 2)
    raw += struct.pack('<4i', 0, 1, 0, 0)  # GLTextureSettings
    raw += struct.pack('<2i', 0, 0)  # lightmap and colorspace
    if stream:
        raw += struct.pack('<3I', 0, 12, width*height*2)
        raw += aligned_string('synthetic.resource')
    elif width == 0 or height == 0:
        raw += struct.pack('<3I', 0, 0, 0) + aligned_string('')
    else:
        payload = bytes(width*height*2)
        raw += struct.pack('<i', len(payload)) + payload
    return raw


def audio_body():
    raw = aligned_string('synthetic')
    raw += struct.pack('<4if', 2, 2, 32000, 16, 1.5)
    raw += b'\x00\0\0\0' + struct.pack('<i', 0)
    raw += b'\x01\x00\x00\0' + aligned_string('synthetic.resource')
    return raw + struct.pack('<qqi', 4, 100, 1)


def file_fixture(rows, platform=13, endian='<', type_tree=False):
    """Rows: classID, signed typeID, pathID, body, strippedByte."""
    types = list(dict.fromkeys(type_id for _, type_id, _, _, _ in rows))
    metadata = b'5.3.4f1\0' + struct.pack(endian+'iBi', platform, type_tree, len(types))
    for type_id in types:
        metadata += struct.pack(endian+'i', type_id)
        if type_id < 0:
            metadata += bytes(16)  # script hash, present only for a negative ID
        metadata += bytes(16)  # old type hash
        if type_tree:
            metadata += struct.pack(endian+'ii', 1, 0) + bytes(24)
    metadata += struct.pack(endian+'i', len(rows))
    payload = bytearray()
    for class_id, type_id, path_id, body, stripped in rows:
        metadata += bytes((-(20+len(metadata))) % 4)
        metadata += struct.pack(endian+'qIIiHhB', path_id, len(payload), len(body), type_id, class_id, -1, stripped)
        payload += body
    # v15 trailer: no scripts, no externals, empty user information.
    metadata += struct.pack(endian+'ii', 0, 0) + b'\0'
    data_offset = (20+len(metadata)+15) & ~15
    size = data_offset + len(payload)
    header = struct.pack('>4I', len(metadata), size, 15, data_offset)
    header += bytes((0 if endian == '<' else 1, 0, 0, 0))
    return header + metadata + bytes(data_offset-20-len(metadata)) + payload


class UnityMetadataTests(unittest.TestCase):
    def test_metadata_size_excludes_twenty_byte_header(self):
        data = file_fixture([(48, 48, 1, b'synthetic', 0)])
        header = unity.serialized_header(data)
        self.assertEqual(header['data_offset'] % 16, 0)
        self.assertLessEqual(20+header['metadata_size'], header['data_offset'])
        self.assertEqual(len(unity.inspect(data)['objects']), 1)

    def test_negative_type_hash_and_path_alignment_and_stripped(self):
        data = file_fixture([(114, -1, 0x100000001, b'a', 1), (48, 48, 4, b'b', 0)])
        rows = unity.inspect(data)['objects']
        self.assertEqual([r['path_id'] for r in rows], [0x100000001, 4])
        self.assertEqual([r['class_id'] for r in rows], [114, 48])

    def test_big_endian_object_table(self):
        data = file_fixture([(48, 48, 3, b'x', 0)], endian='>')
        self.assertEqual(unity.inspect(data)['objects'][0]['path_id'], 3)

    def test_embedded_type_tree_node_is_twenty_four_bytes(self):
        data = file_fixture([(48, 48, 1, b'x', 0)], type_tree=True)
        self.assertTrue(unity.inspect(data)['type_tree'])

    def test_android_texture_fields_and_inline_extent(self):
        row = unity.inspect(file_fixture([(28, 28, 1, texture_body(), 0)]))['objects'][0]
        self.assertEqual((row['width'], row['height'], row['format'], row['image_count']), (8, 8, 'RGB565', 1))
        self.assertEqual(row['inline_payload_bytes'], 128)

    def test_streamed_texture_metadata(self):
        row = unity.inspect(file_fixture([(28, 28, 1, texture_body(stream=True), 0)]))['objects'][0]
        self.assertEqual(row['stream'], dict(offset=12, size=128, path='synthetic.resource'))

    def test_zero_sized_placeholder_is_not_declared_corruption(self):
        row = unity.inspect(file_fixture([(28, 28, 1, texture_body(0, 0, 0), 0)]))['objects'][0]
        self.assertEqual((row['width'], row['height'], row['image_count']), (0, 0, 0))
        self.assertEqual(row['metadata_status'], 'dimensions-and-format')
        self.assertEqual(row['stream']['size'], 0)

    def test_audio_fields_are_metadata_only(self):
        row = unity.inspect(file_fixture([(83, 83, 1, audio_body(), 0)]))['objects'][0]
        self.assertEqual((row['channels'], row['frequency'], row['bits_per_sample']), (2, 32000, 16))
        self.assertEqual(row['duration_seconds'], 1.5)
        self.assertEqual(row['compression'], 'Vorbis')
        self.assertEqual(row['pcm16_estimate_bytes'], 192000)

    def test_textasset_only_reports_extent_and_no_script_content(self):
        body = aligned_string('synthetic') + struct.pack('<i', 5) + b'12345'
        row = unity.inspect(file_fixture([(49, 49, 1, body, 0)]))['objects'][0]
        self.assertEqual(row['payload_size'], 5)
        self.assertNotIn('m_Script', row)
        self.assertNotIn('content', row)

    def test_non_android_body_is_not_interpreted_as_named_object(self):
        row = unity.inspect(file_fixture([(28, 28, 1, b'x', 0)], platform=-2))['objects'][0]
        self.assertEqual(row['metadata_status'], 'unsupported-non-Android-platform')

    def test_truncated_body_does_not_erase_valid_table(self):
        row = unity.inspect(file_fixture([(28, 28, 1, b'x', 0)]))['objects'][0]
        self.assertEqual(row['metadata_status'], 'body-metadata-unsupported')

    def test_duplicate_path_ids_are_rejected(self):
        with self.assertRaisesRegex(ValueError, 'Duplicate'):
            unity.inspect(file_fixture([(48, 48, 1, b'x', 0), (48, 48, 1, b'y', 0)]))

    def test_bad_header_geometry_is_rejected(self):
        data = bytearray(file_fixture([(48, 48, 1, b'x', 0)]))
        struct.pack_into('>I', data, 12, 20)
        with self.assertRaisesRegex(ValueError, 'geometry'):
            unity.inspect(bytes(data))

    def test_take_rejects_out_of_bounds_and_negative_length(self):
        for size in (-1, 3):
            with self.subTest(size=size), self.assertRaises(ValueError):
                unity.Reader(b'xx').take(size)


if __name__ == '__main__':
    unittest.main()
