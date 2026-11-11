import importlib.util
from pathlib import Path
import unittest

ROOT = Path(__file__).resolve().parents[2]
spec = importlib.util.spec_from_file_location('ctr_textures', ROOT/'tools/ctr_textures.py')
texture = importlib.util.module_from_spec(spec)
spec.loader.exec_module(texture)


class TextureLayout(unittest.TestCase):
    def test_roundtrip_and_padding(self):
        for width, height in [(1, 1), (7, 9), (8, 8), (17, 15), (33, 29)]:
            rgba = bytes((i * 37) % 256 for i in range(width * height * 4))
            packed = texture.encode(rgba, width, height)
            self.assertEqual(texture.decode(packed), (rgba, width, height))
            self.assertEqual(len(packed), 24 + texture.extent(width) * texture.extent(height) * 4)

    def test_hidden_rgb(self):
        pixels = bytes([17, 91, 231, 0])
        self.assertEqual(texture.decode(texture.encode(pixels, 1, 1))[0], pixels)

    def test_tile_addresses(self):
        addresses = [texture.offset(x, y, 32) for y in range(16) for x in range(32)]
        self.assertEqual(sorted(addresses), list(range(0, 32 * 16 * 4, 4)))
        self.assertEqual([texture.offset(x, y, 32) for x, y in [(0, 0), (1, 0), (0, 1), (8, 0), (0, 8)]], [0, 4, 8, 256, 1024])

    def test_invalid_extent(self):
        for value in (0, -1, 1025):
            with self.assertRaises(ValueError):
                texture.extent(value)
        with self.assertRaises(ValueError):
            texture.encode(b'123', 1, 1)
        with self.assertRaises(ValueError):
            texture.decode(texture.encode(b'1234', 1, 1)[:-1])


if __name__ == '__main__':
    unittest.main()
