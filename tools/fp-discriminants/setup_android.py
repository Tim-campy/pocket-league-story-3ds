"""Prepare user-authorized official Android test tooling locally, never globally."""
import hashlib
import http.client
import json
from pathlib import Path
import urllib.request
import zipfile

ROOT = Path(__file__).resolve().parents[2]
BASE = ROOT/'build/deps/android-sdk'
PACKAGES = [
    ('build-tools-35', 'build-tools_r35_windows.zip', 59878107, 'af059bb67cf7786f45ee0db85e2d24985df1b4b6', '5753c679a1b90bcf6fbc9945a2ce39dfb9e74f1df0831a1e1866ae5b594326f0'),
    ('platform-35', 'platform-35_r02.zip', 64273788, '0bb560a90a7a2cbd0dd8348224d518b638fe7949', '0988cacad01b38a18a47bac14a0695f246bc76c1b06c0eeb8eb0dc825ab0c8e0'),
    ('ndk-r27c', 'android-ndk-r27c-windows.zip', 781511249, 'ac5f7762764b1f15341094e148ad4f847d050c38', '27e49f11e0cee5800983d8af8f4acd5bf09987aa6f790d4439dda9f3643d2494'),
]


def hashes(path):
    sha1, sha256 = hashlib.sha1(), hashlib.sha256()
    with path.open('rb') as stream:
        while chunk := stream.read(1024*1024):
            sha1.update(chunk)
            sha256.update(chunk)
    return sha1.hexdigest(), sha256.hexdigest()


def main():
    BASE.mkdir(parents=True, exist_ok=True)
    rows = []
    for name, filename, size, expected, expected_sha256 in PACKAGES:
        archive = BASE/filename
        url = 'https://dl.google.com/android/repository/'+filename
        if not archive.exists():
            partial = archive.with_suffix('.partial')
            # Bounded ranges survive interrupted large NDK transfers. Never
            # append a server response that ignored the requested offset.
            while not partial.exists() or partial.stat().st_size < size:
                start = partial.stat().st_size if partial.exists() else 0
                end = min(start + 8*1024*1024, size)-1
                request = urllib.request.Request(url, headers={'Range':f'bytes={start}-{end}'})
                for attempt in range(3):
                    try:
                        with urllib.request.urlopen(request, timeout=60) as source:
                            expected_range = f'bytes {start}-{end}/{size}'
                            if source.status != 206 or source.headers.get('Content-Range') != expected_range:
                                raise ValueError('Server did not honor authenticated download range')
                            chunk = source.read()
                        if len(chunk) != end-start+1:
                            raise IOError('Truncated download range')
                        break
                    except (OSError, ValueError, http.client.IncompleteRead):
                        if attempt == 2:
                            raise
                with partial.open('ab') as target:
                    target.write(chunk)
                print(json.dumps(dict(package=name, downloaded=end+1, total=size)), flush=True)
            if partial.stat().st_size != size or hashes(partial) != (expected,expected_sha256):
                raise ValueError('Official archive authentication failed: '+filename)
            partial.rename(archive)
        sha1, sha256 = hashes(archive)
        if archive.stat().st_size != size or sha1 != expected or sha256 != expected_sha256:
            raise ValueError('Cached archive differs: '+filename)
        destination = BASE/name
        receipt = destination/'extraction-receipt.json'
        if not receipt.exists():
            destination.mkdir(exist_ok=True)
            with zipfile.ZipFile(archive) as package:
                for entry in package.infolist():
                    target = (destination/entry.filename).resolve()
                    if not target.is_relative_to(destination.resolve()):
                        raise ValueError('Archive path escapes local dependency folder')
                package.extractall(destination)
            receipt.write_text(json.dumps(dict(archive_sha256=sha256))+'\n')
        elif json.loads(receipt.read_text())['archive_sha256'] != sha256:
            raise ValueError('Extraction provenance differs')
        licenses = {str(p.relative_to(destination)): hashes(p)[1]
                    for p in destination.rglob('*') if p.is_file() and p.name.lower().startswith(('license', 'notice'))}
        rows.append(dict(name=name, url=url, size=size, sha1=sha1, sha256=sha256,
                         destination=str(destination.relative_to(ROOT)), licenses=licenses))
        print(json.dumps(dict(package=name, sha256=sha256, status='READY')), flush=True)
    (BASE/'provenance.json').write_text(json.dumps(rows, indent=2)+'\n')


if __name__ == '__main__':
    main()
