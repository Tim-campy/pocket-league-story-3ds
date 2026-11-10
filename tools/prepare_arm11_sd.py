"""Prepare private SD files from authenticated local assets and a diagnostic save.

Never downloads content. Use a new SD staging directory for each scenario; the
benchmark writes its own preferences and logs there. No game asset is public.
"""
import argparse
import hashlib
import json
from pathlib import Path
import shutil
import struct

ROOT = Path(__file__).resolve().parents[1]
EXPECTED = 'd557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8'


def sha(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def catalog(root):
    data = (root / 'converted/catalog.idx').read_bytes()
    if data[:8] != b'PLSASV1\0' or data[8:72] != EXPECTED.encode():
        raise ValueError('Catalog belongs to another APK')
    count, = struct.unpack_from('<I', data, 72)
    pos = 76
    if count > 100000:
        raise ValueError('Catalog count outside supported extent')
    files = {}
    for _ in range(count):
        kind = data[pos]; pos += 1
        if not 1 <= kind <= 8:
            raise ValueError('Unknown catalog kind')
        fields = []
        for _ in range(2):
            size, = struct.unpack_from('<I', data, pos); pos += 4
            if size > 1048576 or pos + size > len(data):
                raise ValueError('Invalid catalog field extent')
            fields.append(data[pos:pos + size].decode('utf8')); pos += size
        size, width, height = struct.unpack_from('<QII', data, pos); pos += 16
        digest = data[pos:pos + 32].hex(); pos += 32
        relative = Path(fields[1])
        path = (root / relative).resolve(strict=True)
        if relative.is_absolute() or '..' in relative.parts or not path.is_relative_to(root):
            raise ValueError('Catalog path escapes private assets')
        if path.suffix.lower() in {'.apk', '.dll', '.so', '.dex'}:
            raise ValueError('Original binary refused')
        if path.stat().st_size != size or sha(path) != digest:
            raise ValueError('Catalog payload does not match local pipeline')
        previous = files.setdefault(relative.as_posix(), dict(bytes=size, sha256=digest))
        if previous != dict(bytes=size, sha256=digest):
            raise ValueError('Conflicting catalog file')
    if pos != len(data):
        raise ValueError('Unexpected catalog suffix')
    files['converted/catalog.idx'] = dict(bytes=len(data), sha256=sha(root / 'converted/catalog.idx'))
    return count, files


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--apk', type=Path, required=True)
    p.add_argument('--image', type=Path, required=True)
    p.add_argument('--output', type=Path, required=True, help='New local SD staging directory')
    p.add_argument('--scenario', choices=['menu', 'match'], required=True)
    args = p.parse_args()
    if sha(args.apk) != EXPECTED:
        raise ValueError('Expected owned APK hash required')
    image = args.image.resolve(strict=True)
    if not image.is_relative_to(ROOT / 'build') or image.suffix != '.3dsx':
        raise ValueError('Use the locally compiled benchmark under build/')
    output = args.output.resolve()
    if output.is_relative_to(ROOT) and not output.is_relative_to(ROOT / 'build'):
        raise ValueError('SD staging inside the repository must stay under build/')
    if output.exists():
        raise ValueError('Use a new staging directory; existing saves are never overwritten')
    assets = (ROOT / 'assets').resolve(strict=True)
    count, files = catalog(assets)
    proof = json.loads((ROOT / 'config/phase2-resource-catalog.json').read_text())
    if proof['apk_sha256'] != EXPECTED or sha(assets / 'converted/catalog.idx') != proof['catalog_sha256']:
        raise ValueError('Catalog provenance receipt differs')
    history = json.loads((ROOT / 'config/phase2-diagnostic-attempts.json').read_text())['attempts']
    attempt, save, first, last = (34, 25, 661, 960) if args.scenario == 'menu' else (35, 31, 1201, 1500)
    row = next(x for x in history if x['number'] == attempt)
    receipt = ROOT / row['execution_receipt']['path']
    if sha(receipt) != row['execution_receipt']['sha256']:
        raise ValueError('Execution receipt differs')
    execution = json.loads(receipt.read_text())
    log = ROOT / execution['log']['path']
    if sha(log) != execution['log']['sha256']:
        raise ValueError('Replay source differs')
    keys = {}
    for line in log.read_text(errors='replace').splitlines():
        if line.startswith('PLS_PC_SCRIPTED_SELECT_FRAME='):
            keys[int(line.split('=')[1])] = 'SELECT'
        elif line.startswith(('PLS_PC_SCRIPTED_KEY_FRAME=', 'PLS_PC_DISMISS_POPUP_FRAME=')):
            frame, key = line.split('=')[1].split(':'); keys[int(frame)] = key
    save_row = next(x for x in history if x['number'] == save)
    if save_row['apk_sha256'] != EXPECTED or not save_row['diagnostic_only']:
        raise ValueError('Diagnostic save provenance differs')
    source_save = ROOT / f'build/pc-diagnostic-release/attempts/{save}/preferences'
    if not source_save.is_dir() or any(q.is_symlink() or q.is_junction() for q in source_save.rglob('*')):
        raise ValueError('Missing diagnostic save or linked path')
    destination = output / 'pls-benchmark'
    destination.mkdir(parents=True)
    for name in files:
        target = destination / 'assets' / name
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(assets / name, target)
    shutil.copytree(source_save, destination / 'preferences')
    (destination / 'replay.txt').write_text(''.join(f'{n}:{k}\n' for n, k in sorted(keys.items()) if n < last), newline='\n')
    (destination / 'config.txt').write_text(f'/pls-benchmark/assets\n/pls-benchmark/preferences\n/pls-benchmark/replay.txt\n{last}\n{first}\n{last}\n', newline='\n')
    executable = output / '3ds/pls-benchmark/pls-benchmark.3dsx'
    executable.parent.mkdir(parents=True); shutil.copy2(image, executable)
    manifest = dict(private=True, scenario=args.scenario, apk_sha256=EXPECTED,
                    benchmark_sha256=sha(executable), records=count,
                    asset_files=len(files), asset_bytes=sum(f['bytes'] for f in files.values()),
                    first_frame=first, last_frame=last, frames=last-first+1,
                    replay_sha256=sha(destination / 'replay.txt'), asset_hashes=files,
                    timing_validated=False)
    (destination / 'private-manifest.json').write_text(json.dumps(manifest, indent=2)+'\n')
    print(json.dumps({k: v for k, v in manifest.items() if k != 'asset_hashes'}))


if __name__ == '__main__':
    main()
