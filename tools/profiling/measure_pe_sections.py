"""Read PE section extents without loading or modifying the image."""
import argparse
import hashlib
import json
from pathlib import Path
import struct


def measure(path):
    data = path.read_bytes()
    if data[:2] != b'MZ':
        raise ValueError('Not a PE image')
    offset, = struct.unpack_from('<I', data, 0x3c)
    if data[offset:offset+4] != b'PE\0\0':
        raise ValueError('PE signature missing')
    machine, count = struct.unpack_from('<HH', data, offset+4)
    optional, = struct.unpack_from('<H', data, offset+20)
    start = offset + 24 + optional
    if start + count*40 > len(data):
        raise ValueError('Truncated section table')
    sections = []
    for i in range(count):
        pos = start + i*40
        name = data[pos:pos+8].rstrip(b'\0').decode('ascii')
        virtual, rva, raw, file_offset = struct.unpack_from('<IIII', data, pos+8)
        if raw and file_offset + raw > len(data):
            raise ValueError('Truncated section payload')
        sections.append(dict(name=name, virtual_bytes=virtual, raw_bytes=raw,
                             rva=rva, file_offset=file_offset))
    return dict(image_sha256=hashlib.sha256(data).hexdigest(), image_bytes=len(data),
                machine=machine, sections=sections,
                limitation='PE extents, not resident code pages or JIT code size')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('image', type=Path)
    parser.add_argument('--output', type=Path)
    args = parser.parse_args()
    result = json.dumps(measure(args.image), indent=2)+'\n'
    if args.output:
        args.output.write_text(result)
    else:
        print(result, end='')
