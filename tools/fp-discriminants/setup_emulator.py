"""Prepare the explicitly authorized official ARM Android oracle locally."""
import hashlib,http.client,json,stat,urllib.request,zipfile
from pathlib import Path
import xml.etree.ElementTree as ET
ROOT=Path(__file__).resolve().parents[2]
BASE=ROOT/'build/deps/android-arm-emulator'
PACKAGES=[
    ('tools-25.2.5','https://dl.google.com/android/repository/tools_r25.2.5-windows.zip',306785944,'a7f7ebeae1c8d8f62d3a8466e9c81baee7cc31ca','da1a0bd9bb358cb52a8fc0a553a060428efe11151e69b9ea7a5cbacb27cf1c7c'),
    ('android-21-armv7-r4','https://dl.google.com/android/repository/sys-img/android/armeabi-v7a-21_r04.zip',187163871,'8c606f81306564b65e41303d2603e4c42ded0d10','4f20bb4abff1fcda7fdde510993d2004b0ca330ae6e7a798ffecc3fbf6d48520'),
]
def hashes(path):
    a,b=hashlib.sha1(),hashlib.sha256()
    with path.open('rb') as f:
        while chunk:=f.read(1024*1024):a.update(chunk);b.update(chunk)
    return a.hexdigest(),b.hexdigest()
def main():
    BASE.mkdir(parents=True,exist_ok=True);rows=[]
    metadata=ROOT/'build/deps/android-emulator-metadata'
    for filename in ['repository-12.xml','sys-img2-1.xml']:
        tree=ET.parse(metadata/filename)
        license=next(e for e in tree.iter() if e.tag.split('}')[-1]=='license' and e.attrib.get('id')=='android-sdk-license')
        (BASE/(filename+'.LICENSE.txt')).write_text(''.join(license.itertext()),encoding='utf8')
    for name,url,size,sha1,sha256 in PACKAGES:
        archive=BASE/url.rsplit('/',1)[1];partial=archive.with_suffix('.partial')
        if not archive.exists():
            while not partial.exists() or partial.stat().st_size<size:
                start=partial.stat().st_size if partial.exists() else 0;end=min(start+8*1024*1024,size)-1
                request=urllib.request.Request(url,headers={'Range':f'bytes={start}-{end}'})
                for attempt in range(3):
                    try:
                        with urllib.request.urlopen(request,timeout=45) as response:
                            if response.status!=206 or response.headers.get('Content-Range')!=f'bytes {start}-{end}/{size}':raise ValueError('Server ignored exact range')
                            chunk=response.read()
                        if len(chunk)!=end-start+1:raise IOError('Truncated range')
                        break
                    except (OSError,ValueError,http.client.IncompleteRead):
                        if attempt==2:raise
                with partial.open('ab') as target:target.write(chunk)
                print(json.dumps(dict(package=name,downloaded=end+1,total=size)),flush=True)
            if partial.stat().st_size!=size or hashes(partial)!=(sha1,sha256):raise ValueError('Official archive checksum mismatch')
            partial.rename(archive)
        digest1,digest256=hashes(archive)
        if archive.stat().st_size!=size or (digest1,digest256)!=(sha1,sha256):raise ValueError('Cached archive checksum mismatch')
        destination=BASE/name;receipt=destination/'extraction-receipt.json'
        if not receipt.exists():
            destination.mkdir(exist_ok=True)
            with zipfile.ZipFile(archive) as package:
                for entry in package.infolist():
                    if not (destination/entry.filename).resolve().is_relative_to(destination.resolve()) or stat.S_ISLNK(entry.external_attr>>16):raise ValueError('Unsafe archive path')
                package.extractall(destination)
            receipt.write_text(json.dumps(dict(archive_sha256=digest256))+'\n')
        elif json.loads(receipt.read_text())['archive_sha256']!=digest256:raise ValueError('Extraction provenance changed')
        licenses={str(p.relative_to(destination)):hashes(p)[1] for p in destination.rglob('*') if p.is_file() and p.name.lower().startswith(('license','notice','copying'))}
        rows.append(dict(name=name,url=url,size=size,sha1=digest1,sha256=digest256,destination=str(destination.relative_to(ROOT)),licenses=licenses))
        (BASE/'provenance.json').write_text(json.dumps(rows,indent=2)+'\n')
        print(json.dumps(dict(package=name,sha256=digest256,status='EXTRACTED; execution not yet validated')),flush=True)
if __name__=='__main__':main()
