"""Reject game/converted binaries, private output paths and files over 2 MB.

Inspect Git blobs, not only working-tree files. The reference gitlink is checked
for its immutable reconstruction commit; it is not vendored into this repository.
"""
import argparse
import json
from pathlib import PurePosixPath
import subprocess
import sys

LIMIT = 2_000_000
EXPECTED_REFERENCE = 'c7d097a847ca1f1a8e5fb7141ff11d338f5915c4'
BLOCKED_DIRECTORIES = {'assets', 'build', 'data', 'original'}
BLOCKED_SUFFIXES = set('apk dll so dex exe pdb mdb 3dsx cia smdh t3x bclim bcwav bcstm wav ogg mp3 flac aac m4a pcm adpcm bin dat bytes ress resource unity3d bundle unity prefab asset png jpg jpeg gif bmp tga dds ktx pvr ttf otf woff woff2 zip 7z nupkg seb gmap map inf ttc dfont fnt'.split())


def violation(path, size, mode='100644', object_id=''):
    p = PurePosixPath(path)
    if mode == '160000':
        return None if path == 'reference' and object_id == EXPECTED_REFERENCE else 'unexpected gitlink or reference revision'
    if mode not in ('100644', '100755'):
        return 'nonregular tracked file'
    if any(part.lower() in BLOCKED_DIRECTORIES for part in p.parts[:-1]):
        return 'private/generated directory'
    if p.suffix.lower().lstrip('.') in BLOCKED_SUFFIXES:
        return 'original/converted binary or asset format'
    if size > LIMIT:
        return 'file exceeds 2,000,000 bytes'
    return None


def check(staged=False):
    if staged:
        raw = subprocess.check_output(['git', 'ls-files', '--stage', '-z'])
        entries = []
        for row in raw.split(b'\0'):
            if not row:
                continue
            header, name = row.split(b'\t', 1)
            mode, oid, stage = header.decode('ascii').split()
            if stage != '0':
                raise ValueError('unmerged index')
            entries.append((mode, oid, name.decode('utf-8')))
    else:
        raw = subprocess.check_output(['git', 'ls-tree', '-r', '-z', 'HEAD'])
        entries = []
        for row in raw.split(b'\0'):
            if row:
                header, name = row.split(b'\t', 1)
                mode, kind, oid = header.decode('ascii').split()
                entries.append((mode, oid, name.decode('utf-8')))
    violations = []
    for mode, oid, name in entries:
        size = 0 if mode == '160000' else int(subprocess.check_output(['git', 'cat-file', '-s', oid]))
        reason = violation(name, size, mode, oid)
        if reason:
            violations.append(dict(path=name, reason=reason, size=size))
    return dict(scope='index' if staged else 'HEAD', limit_bytes=LIMIT,
                tracked_entries=len(entries), violations=violations, passed=not violations)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--staged', action='store_true')
    args = parser.parse_args()
    result = check(args.staged)
    print(json.dumps(result, ensure_ascii=True))
    return 0 if result['passed'] else 1


if __name__ == '__main__':
    sys.exit(main())
