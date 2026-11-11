"""Prepare lossless native texture files from the user's authenticated local catalog.

All payloads, identities and per-file receipts stay outside Git. No downloads,
game binaries, image resampling, palette reduction or transparent-RGB loss.
"""
import argparse
import hashlib
import json
from pathlib import Path
import shutil
import struct
from ctr_textures import encode, decode
from prepare_arm11_sd import catalog, EXPECTED, ROOT, sha


def records(data):
    if data[:8] != b'PLSASV1\0' or data[8:72] != EXPECTED.encode():
        raise ValueError('Unexpected source catalog')
    count, = struct.unpack_from('<I', data, 72)
    pos = 76
    rows = []
    for _ in range(count):
        kind = data[pos]
        pos += 1
        fields = []
        for _ in range(2):
            length, = struct.unpack_from('<I', data, pos)
            pos += 4
            if length > 1048576 or pos + length > len(data):
                raise ValueError('Invalid catalog string')
            fields.append(data[pos:pos + length].decode('utf8'))
            pos += length
        size, width, height = struct.unpack_from('<QII', data, pos)
        pos += 16
        digest = data[pos:pos + 32].hex()
        pos += 32
        rows.append(dict(kind=kind, key=fields[0], path=fields[1], size=size,
                         width=width, height=height, sha256=digest))
    if pos != len(data):
        raise ValueError('Catalog trailing data')
    return rows


def serialize(rows):
    data = bytearray(b'PLSASV1\0' + EXPECTED.encode() + struct.pack('<I', len(rows)))
    for row in rows:
        data.append(row['kind'])
        for field in ('key', 'path'):
            value = row[field].encode('utf8')
            data += struct.pack('<I', len(value)) + value
        data += struct.pack('<QII', row['size'], row['width'], row['height'])
        data += bytes.fromhex(row['sha256'])
    return data


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apk', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    if sha(args.apk) != EXPECTED:
        raise ValueError('Authenticated owned APK required')
    original = (ROOT / 'assets').resolve(strict=True)
    output = args.output.resolve()
    if output.exists() or not (output.is_relative_to(ROOT / 'build') or output.is_relative_to(ROOT / 'assets')):
        raise ValueError('Use a new ignored output under build/ or assets/')
    count, _ = catalog(original)  # Checks every source payload, extent and path.
    source = original / 'converted/catalog.idx'
    proof = json.loads((ROOT / 'config/phase2-resource-catalog.json').read_text())
    if proof['apk_sha256'] != EXPECTED or proof['catalog_sha256'] != sha(source):
        raise ValueError('Catalog is not the authenticated local pipeline output')
    rows = records(source.read_bytes())
    output.mkdir(parents=True)
    copied = set()
    images = before = after = 0
    for row in rows:
        old = original / row['path']
        if row['kind'] == 3:
            pixels = old.read_bytes()
            converted = encode(pixels, row['width'], row['height'])
            if decode(converted) != (pixels, row['width'], row['height']):
                raise AssertionError('Lossless texture round trip failed')
            images += 1
            before += len(pixels)
            after += len(converted)
            digest = hashlib.sha256(converted).hexdigest()
            row.update(path='converted/ctr/' + digest + '.rgba8ctr', size=len(converted), sha256=digest)
            destination = output / row['path']
            destination.parent.mkdir(parents=True, exist_ok=True)
            destination.write_bytes(converted)
        elif row['path'] not in copied:
            destination = output / row['path']
            if not destination.resolve().is_relative_to(output):
                raise ValueError('Destination escapes private output')
            destination.parent.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(old, destination)
            copied.add(row['path'])
    target = output / 'converted/catalog.idx'
    target.parent.mkdir(parents=True, exist_ok=True)
    target.write_bytes(serialize(rows))
    verified_count, files = catalog(output)
    if verified_count != count:
        raise AssertionError('CTR catalog record count differs')
    # The loader checks this catalog binding once; optional diagnosis may still
    # hash every payload. SD preparation rechecks all files before copying.
    marker = output / 'converted/prevalidated.sha256'
    marker.write_text('PLS-PREVALIDATED-1\n' + EXPECTED + '\n' + sha(target) + '\n', encoding='ascii')
    report = dict(operation='local-ctr-texture-pipeline', apk_sha256=EXPECTED,
                  source_catalog_sha256=sha(source), catalog_sha256=sha(target),
                  records=count, images=images, source_rgba_bytes=before,
                  native_texture_bytes=after, lossless_roundtrip_images=images,
                  format='PICA200 RGBA8, ABGR bytes, 8x8 Morton tiles, POT padding, no mipmaps',
                  transparent_rgb_preserved=True, files=files,
                  producer_sha256=sha(Path(__file__)), layout_sha256=sha(ROOT / 'tools/ctr_textures.py'))
    (output / 'pipeline-receipt.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({k: v for k, v in report.items() if k != 'files'}))


if __name__ == '__main__':
    main()
