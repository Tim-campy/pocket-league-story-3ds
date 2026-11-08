"""Convert local assets only: lossless RGBA8, extracted TTF, rebuilt Ogg Vorbis.

Uses the already-present FFmpeg and authorized portable AssetRipper. The latter
rebuilds Vorbis packets from FSB; it is never asked to create full PCM/WAV. No
dependency, APK, font or other game file is downloaded. All outputs stay assets/.
"""
import argparse
from concurrent.futures import ThreadPoolExecutor
import hashlib
import json
import os
from pathlib import Path
import socket
import subprocess
import time
from urllib.error import URLError
from urllib.parse import urlencode
from urllib.request import Request,ProxyHandler,build_opener
import zipfile

from assetripper_inventory import Page,process_image,extract_inputs
from inventory_assets import ROOT,EXPECTED
from unity15_metadata import Reader


def sha(data):return hashlib.sha256(data).hexdigest()


def extract_font(data,obj,endian):
    r=Reader(data,obj['offset'],obj['offset']+obj['size'],endian)
    r.aligned_string();r.take(36);r.take(r.number('i')*44);r.take(12);r.take(r.number('i')*8);r.number('f')
    return r.take(r.number('i'))


def export_ogg(apk,private,output):
    tool=(ROOT/'build/tools/assetripper/AssetRipper.GUI.Free.exe').resolve(strict=True)
    proof=json.loads((ROOT/'config/assetripper-summary.json').read_text(encoding='utf-8'))
    if sha(tool.read_bytes())!=proof['executable_sha256']:raise ValueError('Authorized AssetRipper executable changed')
    raw_root,inputs=extract_inputs(apk,private)
    expected={(raw_root/row['entry']).resolve() for row in inputs}
    if {p.resolve() for p in raw_root.rglob('*') if p.is_file()}!=expected:
        raise ValueError('Unexpected files in screened raw asset input; no binaries may enter the import')
    urls=[]
    for path in (ROOT/'assets/inventory/assetripper/details').glob('*.html'):
        page=Page(path.read_text(encoding='utf-8-sig'))
        urls += [link for link in page.links if link.startswith('/Assets/Audio?')]
    urls=list(dict.fromkeys(urls))
    if len(urls)!=27:raise ValueError('Run authenticated AssetRipper inventory first; expected 27 cached audio links')
    run=ROOT/'build/asset-conversion';run.mkdir(parents=True,exist_ok=True)
    for name in ('tmp','bundle'): (run/name).mkdir(exist_ok=True)
    env=dict(os.environ,TMP=str(run/'tmp'),TEMP=str(run/'tmp'),DOTNET_BUNDLE_EXTRACT_BASE_DIR=str(run/'bundle'),
        HTTP_PROXY='http://127.0.0.1:9',HTTPS_PROXY='http://127.0.0.1:9',NO_PROXY='localhost,127.0.0.1')
    with socket.socket() as s:s.bind(('127.0.0.1',0));port=s.getsockname()[1]
    base=f'http://127.0.0.1:{port}';opener=build_opener(ProxyHandler({}))
    def fetch(path,data=None,timeout=60):
        assert path.startswith('/') and not path.startswith('//')
        request=Request(base+path,data=None if data is None else urlencode(data).encode(),headers={} if data is None else {'Content-Type':'application/x-www-form-urlencoded'})
        with opener.open(request,timeout=timeout) as response:
            if not response.geturl().startswith(base+'/'):raise ValueError('Unexpected HTTP redirect')
            return response.read(),response.headers.get('Content-Type','')
    process=None
    with (run/'stdout.log').open('wb') as stdout,(run/'stderr.log').open('wb') as stderr:
        try:
            process=subprocess.Popen([str(tool),'--headless','--port',str(port),'--log-path',str(run/'assetripper.log')],
                cwd=run,env=env,stdout=stdout,stderr=stderr,creationflags=subprocess.CREATE_NO_WINDOW)
            if process_image(process)!=tool:raise ValueError('Unexpected tool process image')
            for attempt in range(240):
                if process.poll() is not None:raise RuntimeError('AssetRipper stopped before ready')
                try:fetch('/',timeout=1);break
                except (URLError,TimeoutError):time.sleep(0.25)
            else:raise RuntimeError('AssetRipper did not become ready')
            fetch('/LoadFolder',{'Path':str((ROOT/'assets/raw-unity').resolve())},timeout=180)
            # Source collection/path IDs are immutable and already cross-checked.
            audio=[]
            for index,url in enumerate(urls):
                blob,content_type=fetch(url)
                if blob[:4]!=b'OggS' or b'vorbis' not in blob[:512]:raise ValueError('Tool did not rebuild standard Vorbis')
                path=output/'audio'/(sha(blob)+'.ogg');path.parent.mkdir(parents=True,exist_ok=True);path.write_bytes(blob)
                probe=subprocess.run(['ffprobe','-v','error','-show_entries','stream=codec_name,sample_rate,channels','-of','json',str(path)],capture_output=True,check=True)
                details=json.loads(probe.stdout)['streams']
                if len(details)!=1 or details[0]['codec_name']!='vorbis':raise ValueError('Unexpected audio stream')
                audio.append(dict(path=path.relative_to(ROOT/'assets').as_posix(),sha256=sha(blob),bytes=len(blob),metadata=details[0]))
            return audio
        finally:
            if process is not None and process.poll() is None:
                if process_image(process)!=tool:raise ValueError('Tool image changed before cleanup')
                process.terminate();process.wait(timeout=20)


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apk',required=True,type=Path)
    parser.add_argument('--without-audio',action='store_true')
    args=parser.parse_args()
    if sha(args.apk.read_bytes())!=EXPECTED:parser.error('APK hash differs; explicit version confirmation required in extraction pipeline')
    private_bytes=(ROOT/'assets/inventory/asset-details.json').read_bytes()
    inventory_proof=json.loads((ROOT/'config/custom-asset-formats.json').read_text(encoding='utf-8'))
    if sha(private_bytes)!=inventory_proof['private_inventory_sha256']:
        raise ValueError('Private inventory changed; repeat authenticated inventory before conversion')
    private=json.loads(private_bytes)
    if private['apk_sha256']!=EXPECTED:raise ValueError('Local inventory belongs to another APK')
    output=ROOT/'assets/converted';output.mkdir(parents=True,exist_ok=True)
    members=[m for m in private['game_members'] if m['png']]
    unique={m['sha256']:m for m in members}
    def convert(member):
        png=member['png'];folder=sha(member['container'].encode())[:16]
        source=(ROOT/'assets/extracted'/folder/member['name']).resolve(strict=True)
        if not source.is_relative_to((ROOT/'assets/extracted').resolve()):raise ValueError('Unsafe member path')
        if sha(source.read_bytes())!=member['sha256']:raise ValueError('Extracted PNG changed')
        target=output/'images'/(member['sha256']+'.rgba8');target.parent.mkdir(parents=True,exist_ok=True)
        result=subprocess.run(['ffmpeg','-v','error','-nostdin','-y','-threads','1','-i',str(source),'-frames:v','1','-f','rawvideo','-pix_fmt','rgba',str(target)],capture_output=True)
        if result.returncode:raise RuntimeError('Installed FFmpeg PNG conversion failed')
        size=png['width']*png['height']*4
        if target.stat().st_size!=size:raise ValueError('RGBA8 extent differs')
        return dict(path=target.relative_to(ROOT/'assets').as_posix(),width=png['width'],height=png['height'],bytes=size,sha256=sha(target.read_bytes()))
    with ThreadPoolExecutor(max_workers=4) as pool:images=list(pool.map(convert,unique.values()))
    fonts=[]
    with zipfile.ZipFile(args.apk) as archive:
        for file in private['files']:
            for obj in file['metadata']['objects']:
                if obj['class_id']!=128:continue
                blob=extract_font(archive.read(file['entry']),obj,file['metadata']['header']['endian'])
                if blob[:4]!=b'\0\1\0\0':raise ValueError('Unexpected font format')
                path=output/'fonts'/(sha(blob)+'.ttf');path.parent.mkdir(parents=True,exist_ok=True);path.write_bytes(blob)
                fonts.append(dict(path=path.relative_to(ROOT/'assets').as_posix(),bytes=len(blob),sha256=sha(blob)))
    audio=[] if args.without_audio else export_ogg(args.apk,private,output)
    manifest=dict(apk_sha256=EXPECTED,images=images,fonts=fonts,audio=audio,rgba8_lossless=True,audio_target='compressed Vorbis; PCM streaming only')
    (output/'manifest.json').write_text(json.dumps(manifest,indent=2)+'\n',encoding='utf-8',newline='\n')
    with (output/'images.tsv').open('w',encoding='utf-8',newline='\n') as file:
        for image in images:file.write(f"{image['width']}\t{image['height']}\t{image['path']}\n")
    report=dict(operation='local-lossless-asset-conversion',apk_sha256=EXPECTED,rgba8_files=len(images),png_occurrences=len(members),
        rgba8_payload_bytes=sum(i['bytes'] for i in images),ttf_files=len(fonts),ttf_bytes=sum(f['bytes'] for f in fonts),
        vorbis_files=len(audio),audio_fully_decoded_in_memory=False,font_rasterized=False,game_boot=False,
        manifest_sha256=sha((output/'manifest.json').read_bytes()),assets_published=False,new_tools_installed=False,
        producer_sha256=sha(Path(__file__).read_bytes()),private_inventory_sha256=sha(private_bytes))
    (ROOT/'config/phase2-assets.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(report))


if __name__=='__main__':main()
