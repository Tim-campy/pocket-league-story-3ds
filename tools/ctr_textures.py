"""Lossless RGBA8 texture layout used by the local CTR asset pipeline.

No game data is embedded here. Coordinates are logical top-down image pixels;
the texture storage has 8x8 Morton tiles and little-endian ABGR texels.
The executable fixture compares this layout with the installed official tex3ds.
"""
import struct

MAGIC = b'PLSCTR1\0'


def extent(value):
    if not 1 <= value <= 1024:
        raise ValueError('CTR texture dimension must be in 1..1024')
    return max(8, 1 << (value - 1).bit_length())


def offset(x, y, width):
    morton = sum(((x >> bit) & 1) << (bit * 2) |
                 ((y >> bit) & 1) << (bit * 2 + 1) for bit in range(3))
    return (((y >> 3) * (width >> 3) + (x >> 3)) * 64 + morton) * 4


def encode(rgba, width, height):
    if len(rgba) != width * height * 4:
        raise ValueError('Logical RGBA extent differs')
    tw, th = extent(width), extent(height)
    data = bytearray(tw * th * 4)
    for y in range(height):
        for x in range(width):
            source = (y * width + x) * 4
            target = offset(x, y, tw)
            data[target:target + 4] = rgba[source:source + 4][::-1]
    return MAGIC + struct.pack('<IIII', width, height, tw, th) + data


def decode(data):
    if data[:8] != MAGIC or len(data) < 24:
        raise ValueError('CTR texture header differs')
    width, height, tw, th = struct.unpack_from('<IIII', data, 8)
    if (tw, th) != (extent(width), extent(height)) or len(data) != 24 + tw * th * 4:
        raise ValueError('CTR texture extent differs')
    rgba = bytearray(width * height * 4)
    for y in range(height):
        for x in range(width):
            source = 24 + offset(x, y, tw)
            target = (y * width + x) * 4
            rgba[target:target + 4] = data[source:source + 4][::-1]
    return bytes(rgba), width, height


def tga(rgba, width, height):
    """Uncompressed top-left BGRA fixture input for the official converter."""
    if len(rgba) != width * height * 4:
        raise ValueError('TGA extent differs')
    header = struct.pack('<BBBHHBHHHHBB', 0, 0, 2, 0, 0, 0, 0, 0,
                         width, height, 32, 0x28)
    bgra = bytearray(rgba)
    bgra[0::4], bgra[2::4] = rgba[2::4], rgba[0::4]
    return header + bgra
