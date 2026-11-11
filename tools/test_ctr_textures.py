"""Compare an authored texture layout fixture with official local tex3ds."""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
from ctr_textures import encode, decode, tga

ROOT = Path(__file__).resolve().parents[1]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--tex3ds', type=Path, default=Path('C:/devkitPro/tools/bin/tex3ds.exe'))
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    folder = args.output.resolve()
    if not folder.is_relative_to(ROOT / 'build') or folder.exists():
        raise ValueError('Use a fresh private output directory')
    folder.mkdir(parents=True)
    cases = []
    for width, height in [(8, 8), (16, 8), (8, 16), (32, 16)]:
        # Includes transparent pixels with nonzero RGB, for lossless checking.
        rgba = bytes(v for y in range(height) for x in range(width)
                     for v in ((x * 17 + y * 3) % 256, (x * 7 + y * 29) % 256,
                               (x * 31 + y * 11) % 256, (x * 13 + y * 23) % 256))
        encoded = encode(rgba, width, height)
        if decode(encoded) != (rgba, width, height):
            raise AssertionError('Authored round trip failed')
        source = folder / f'{width}x{height}.tga'
        output = folder / f'{width}x{height}.bin'
        source.write_bytes(tga(rgba, width, height))
        result = subprocess.run([str(args.tex3ds), '-r', '-f', 'rgba8', '-z', 'none',
                                 '-o', str(output), str(source)], capture_output=True)
        (folder / f'{width}x{height}.log').write_bytes(result.stdout + result.stderr)
        result.check_returncode()
        actual = output.read_bytes()
        expected = encoded[24:]
        # tex3ds -z none still writes the documented four-byte "fake"
        # compression header: type 0, then the uncompressed length in LE24.
        if len(actual)<4 or actual[0]!=0 or int.from_bytes(actual[1:4],'little')!=len(expected):
            raise ValueError('Unexpected tex3ds uncompressed framing')
        payload = actual[4:]
        altered = [i for i in range(0, len(expected), 4) if payload[i:i+4] != expected[i:i+4]]
        # ImageMagick/tex3ds zeroes RGB when alpha is zero. Our pipeline must
        # preserve those bytes too: use the authored encoder, not this oracle,
        # for assets. Only the addressing/channel-order contract is compared.
        transparent_rgb_only = all(expected[i] == 0 and payload[i:i+4] == b'\0\0\0\0' for i in altered)
        equal = not altered
        cases.append(dict(width=width, height=height, expected_bytes=len(expected),
                          actual_bytes=len(actual), equal=equal, layout_equal=transparent_rgb_only,
                          official_transparent_rgb_zeroed=len(altered), authored_roundtrip_exact=True,
                          expected_sha256=hashlib.sha256(expected).hexdigest(),
                          actual_sha256=hashlib.sha256(actual).hexdigest()))
    report = dict(status='PASS' if all(c['layout_equal'] for c in cases) else 'FAIL', cases=cases,
                  converter_sha256=hashlib.sha256(args.tex3ds.read_bytes()).hexdigest(),
                  fixture='authored arithmetic pixels, no game content',
                  producer_sha256=hashlib.sha256(Path(__file__).read_bytes()).hexdigest())
    (folder / 'receipt.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps(report))
    if report['status'] != 'PASS':
        raise AssertionError('Layout hypothesis differs from official converter')


if __name__ == '__main__':
    main()
