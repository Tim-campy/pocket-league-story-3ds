"""Use locally authorized portable AssetRipper as a metadata-only cross-check.

Input is the user's hash-checked APK. Only serialized files already recognized by
the bounded inventory, and resource sidecars, are extracted under ignored assets/.
No Managed folder, game assembly, DEX or native library is passed to AssetRipper.
The localhost headless API is read without a browser; no export/media endpoint
is called. Raw HTML and identifiers stay private. This is not an asset converter.
"""
import argparse
from collections import Counter, deque
import ctypes
from ctypes import wintypes
import hashlib
from html.parser import HTMLParser
import json
import os
from pathlib import Path
import re
import socket
import subprocess
import time
from urllib.error import URLError
from urllib.parse import urlencode, urlparse, parse_qs
from urllib.request import Request, ProxyHandler, build_opener
import zipfile

ROOT = Path(__file__).resolve().parents[1]
APK_SHA256 = 'd557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8'


def sha(data):
    return hashlib.sha256(data).hexdigest()


def save(path, data):
    path.parent.mkdir(parents=True, exist_ok=True)
    if isinstance(data, (dict, list)):
        path.write_text(json.dumps(data, indent=2, ensure_ascii=True)+'\n', encoding='utf-8')
    elif isinstance(data, str):
        path.write_text(data, encoding='utf-8')
    else:
        path.write_bytes(data)


class Page(HTMLParser):
    def __init__(self, data):
        super().__init__(convert_charrefs=True)
        self.links=[];self.rows=[];self.title='';self.row=None;self.cell=None;self.cell_text=[];self.cells=[]
        self.tag_stack=[];self.in_h1=False;self.h1_text=[]
        self.feed(data)

    def handle_starttag(self, tag, attrs):
        attrs=dict(attrs)
        if tag=='a' and 'href' in attrs:
            self.links.append(attrs['href'])
        if tag=='h1':self.in_h1=True
        if tag=='tr':self.row=attrs;self.cells=[]
        if tag in ('td','th') and self.row is not None:self.cell=tag;self.cell_text=[]

    def handle_data(self, data):
        if self.cell is not None:self.cell_text.append(data)
        if self.in_h1:self.h1_text.append(data)

    def handle_endtag(self, tag):
        if tag=='h1':self.in_h1=False;self.title=''.join(self.h1_text).strip()
        if tag in ('td','th') and self.cell is not None:
            self.cells.append(''.join(self.cell_text).strip());self.cell=None
        if tag=='tr' and self.row is not None:
            self.rows.append((self.row,self.cells));self.row=None;self.cells=[]


def process_image(process):
    kernel=ctypes.WinDLL('kernel32',use_last_error=True)
    query=kernel.QueryFullProcessImageNameW
    query.argtypes=[wintypes.HANDLE,wintypes.DWORD,wintypes.LPWSTR,ctypes.POINTER(wintypes.DWORD)]
    query.restype=wintypes.BOOL
    length=wintypes.DWORD(32768);buffer=ctypes.create_unicode_buffer(length.value)
    if not query(wintypes.HANDLE(int(process._handle)),0,buffer,ctypes.byref(length)):
        raise ctypes.WinError(ctypes.get_last_error())
    return Path(buffer.value).resolve()


def extract_inputs(apk, inventory):
    root=(ROOT/'assets/raw-unity').resolve()
    assert root.is_relative_to((ROOT/'assets').resolve())
    expected={item['entry'] for item in inventory['files']}
    rows=[]
    with zipfile.ZipFile(apk) as archive:
        for info in archive.infolist():
            path=Path(info.filename)
            is_resource=info.filename.startswith('assets/bin/Data/') and path.suffix.lower() in ('.resource','.ress')
            if info.filename not in expected and not is_resource:continue
            assert 'managed' not in {p.lower() for p in path.parts}
            assert path.suffix.lower() not in ('.dll','.so','.dex','.apk','.mdb','.pdb','.exe')
            target=(root/path).resolve();assert target.is_relative_to(root)
            data=archive.read(info);digest=sha(data)
            if target.exists():assert sha(target.read_bytes())==digest
            else:save(target,data)
            rows.append(dict(entry=info.filename,size=len(data),sha256=digest,kind='resource' if is_resource else 'serialized'))
    assert len([r for r in rows if r['kind']=='serialized'])==len(inventory['files'])
    return root,rows


def finalize(summary, apk, tool):
    """Bind a completed private API inventory to current inputs without reimport."""
    private=ROOT/'assets/inventory/assetripper'
    comparison=json.loads((private/'comparison.json').read_text(encoding='utf-8'))
    assert comparison['missing_original_count']==summary['missing_original_count']
    assert comparison['metadata_matches']=={'Texture2D':99,'AudioClip':27}
    assert not comparison['metadata_mismatches']
    assert summary['server_stopped'] and summary['server_process_image_verified']
    assert sha(apk.read_bytes())==APK_SHA256
    assert sha(tool.read_bytes())==summary['executable_sha256']
    stdout=(ROOT/'build/assetripper-run/stdout.log').read_text(encoding='utf-8',errors='replace')
    stderr=ROOT/'build/assetripper-run/stderr.log'
    summary['log_summary']=dict(stdout_lines=len(stdout.splitlines()),stderr_bytes=stderr.stat().st_size,
        error_lines=len(re.findall(r'(?mi)\bError\s*:',stdout)),warning_lines=len(re.findall(r'(?mi)\bWarning\s*:',stdout)),
        exception_lines=sum('Exception' in line for line in stdout.splitlines()),
        scripting_backend_unknown="Files use the 'Unknown' scripting backend" in stdout)
    summary['original_sha256_after']=sha(apk.read_bytes())
    summary['producer_sha256']=sha(Path(__file__).read_bytes())
    version=ROOT/'build/assetripper-version/version-output.txt'
    if version.is_file():summary['version_output_first_line']=version.read_bytes().decode('utf-8',errors='replace').splitlines()[0]
    summary['private_evidence_sha256']={name:sha((private/name).read_bytes()) for name in
        ('collections.json','metadata.json','comparison.json','requests.json','inputs.json','class-label-normalizations.json')}
    save(ROOT/'config/assetripper-summary.json',summary)
    return summary


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apk',required=True,type=Path)
    parser.add_argument('--tool',type=Path,default=ROOT/'build/tools/assetripper/AssetRipper.GUI.Free.exe')
    parser.add_argument('--source-inventory',type=Path,default=ROOT/'assets/inventory/unity-objects.json')
    parser.add_argument('--summarize-existing',action='store_true',help='Revalidate completed private evidence only; do not launch a server')
    args=parser.parse_args()
    assert os.name=='nt','This scoped process launcher is Windows-only'
    apk=args.apk.resolve(strict=True);tool=args.tool.resolve(strict=True)
    assert sha(apk.read_bytes())==APK_SHA256,'Unexpected APK; explicit user confirmation is required before a different version'
    if args.summarize_existing:
        summary=json.loads((ROOT/'config/assetripper-summary.json').read_text(encoding='utf-8'))
        print(json.dumps(finalize(summary,apk,tool),ensure_ascii=True));return
    inventory=json.loads(args.source_inventory.read_text(encoding='utf-8'))
    raw_root,inputs=extract_inputs(apk,inventory)
    private=ROOT/'assets/inventory/assetripper';private.mkdir(parents=True,exist_ok=True)
    run=ROOT/'build/assetripper-run';run.mkdir(parents=True,exist_ok=True)
    temporary=run/'tmp';temporary.mkdir(exist_ok=True)
    environment=dict(os.environ,TMP=str(temporary),TEMP=str(temporary),
        DOTNET_BUNDLE_EXTRACT_BASE_DIR=str(run/'dotnet-bundle'),DOTNET_CLI_HOME=str(run/'dotnet-home'),
        HTTP_PROXY='http://127.0.0.1:9',HTTPS_PROXY='http://127.0.0.1:9',NO_PROXY='127.0.0.1,localhost')
    with socket.socket() as listener:
        listener.bind(('127.0.0.1',0));port=listener.getsockname()[1]
    base=f'http://127.0.0.1:{port}'
    opener=build_opener(ProxyHandler({}))
    requests=[]
    def fetch(path,data=None,timeout=180):
        assert path.startswith('/') and not path.startswith('//')
        request=Request(base+path,data=None if data is None else urlencode(data).encode('ascii'),
            headers={} if data is None else {'Content-Type':'application/x-www-form-urlencoded'})
        with opener.open(request,timeout=timeout) as response:
            assert response.geturl().startswith(base+'/')
            payload=response.read();status=response.status
        requests.append(dict(path=path,status=status,bytes=len(payload),sha256=sha(payload)))
        return payload
    stdout=open(run/'stdout.log','wb');stderr=open(run/'stderr.log','wb')
    process=None;summary=None
    try:
        process=subprocess.Popen([str(tool),'--headless','--port',str(port),'--log-path',str(run/'assetripper.log')],
            cwd=run,env=environment,stdout=stdout,stderr=stderr,creationflags=subprocess.CREATE_NO_WINDOW)
        assert process_image(process)==tool,'Unexpected server process image'
        ready=False
        for attempt in range(240):
            if process.poll() is not None:raise RuntimeError('AssetRipper exited before the local API was ready')
            try:fetch('/',timeout=1);ready=True;break
            except (URLError,TimeoutError):time.sleep(0.25)
        if not ready:raise RuntimeError('AssetRipper localhost startup timed out; no dependency was installed')
        # Explicitly load only our screened asset directory, not the APK or Managed.
        start=time.monotonic()
        root_page=fetch('/LoadFolder',{'Path':str(raw_root)},timeout=240)
        save(private/'loaded.html',root_page)
        bundle_queue=deque(['/Bundles/View?'+urlencode({'Path':json.dumps({'P':[]},separators=(',',':'))})])
        seen_bundles=set();collections={};failed_links=set()
        while bundle_queue:
            path=bundle_queue.popleft()
            if path in seen_bundles:continue
            seen_bundles.add(path);payload=fetch(path);page=Page(payload.decode('utf-8-sig'))
            save(private/'bundles'/f'{len(seen_bundles):04d}.html',payload)
            for link in page.links:
                if link.startswith('/Bundles/View?') and link not in seen_bundles:bundle_queue.append(link)
                elif link.startswith('/Collections/View?'):collections[link]=None
                elif link.startswith('/FailedFiles/'):failed_links.add(link)
        original={}
        for item in inventory['files']:
            name=Path(item['entry']).name
            original[name]=item
            original.setdefault(Path(name).stem,item)
        original_counts=Counter();original_keys=set();original_objects={};class_id_names={}
        for item in inventory['files']:
            for obj in item['metadata']['objects']:
                original_counts[obj['class_name']]+=1
                original_keys.add((item['entry'],obj['path_id'],obj['class_id']))
                original_objects[item['entry'],obj['path_id']]=obj
                if not obj['class_name'].startswith('ClassID_'):class_id_names[obj['class_id']]=obj['class_name']
        class_counts=Counter();matched_counts=Counter();synthetic_counts=Counter();matched_keys=set()
        objects=[];metadata=[];collection_rows=[];count_api_example=None;label_normalizations=[]
        for index,path in enumerate(collections,1):
            payload=fetch(path);save(private/'collections'/f'{index:04d}.html',payload)
            page=Page(payload.decode('utf-8-sig'));source=original.get(page.title)
            parsed_assets=[]
            asset_links=[link for link in page.links if link.startswith('/Assets/View?')]
            link_by_path={json.loads(parse_qs(urlparse(link).query)['Path'][0])['D']:link for link in asset_links}
            for attrs,cells in page.rows:
                if 'data-class' not in attrs:continue
                assert len(cells)>=3
                path_id=int(cells[0]);class_name=attrs['data-class'];class_counts[class_name]+=1
                expected=original_objects.get((source['entry'],path_id)) if source is not None else None
                class_id=None if expected is None else expected['class_id']
                if expected is not None and expected['class_name']!=class_name:
                    # The bounded reader deliberately leaves uncommon class labels
                    # as ClassID_N. Match source collection + PathID, preserving
                    # its numeric class ID, and take the descriptive AR label.
                    # Do not render settings detail pages: a legacy settings view
                    # can stall although import and collection listing succeeded.
                    assert expected['class_name']=='ClassID_'+str(class_id),'Known class name differs'
                    class_id_names[class_id]=class_name
                    label_normalizations.append(dict(source_entry=source['entry'],path_id=path_id,class_id=class_id,
                        source_label=expected['class_name'],assetripper_label=class_name))
                key=(source['entry'],path_id,class_id) if source is not None else None
                is_original=key in original_keys
                if is_original:matched_keys.add(key);matched_counts[class_name]+=1
                else:synthetic_counts[class_name]+=1
                parsed_assets.append(dict(path_id=path_id,class_name=class_name,class_id=class_id,original_matched=is_original))
            collection_rows.append(dict(name=page.title,path=path,source_entry=None if source is None else source['entry'],objects=parsed_assets))
            if count_api_example is None:
                count_path=path.replace('/Collections/View?','/Collections/Count?',1)
                count=json.loads(fetch(count_path));assert count==len(parsed_assets)
                count_api_example=dict(count=count,html_rows=len(parsed_assets),json_type=type(count).__name__)
            # View HTML contains dimensional/rate information without requesting
            # Image/Audio/Font/Text/Json/Yaml/Binary content or external UI files.
            for asset in parsed_assets:
                if asset['class_name'] not in ('Texture2D','AudioClip'):continue
                link=link_by_path.get(asset['path_id'])
                if not link:continue
                detail_payload=fetch(link);detail=Page(detail_payload.decode('utf-8-sig'))
                fields={cells[0]:cells[1] for attrs,cells in detail.rows if len(cells)==2}
                save(private/'details'/f'{index:04d}-{asset["path_id"]}.html',detail_payload)
                metadata.append(dict(collection=page.title,source_entry=None if source is None else source['entry'],
                    path_id=asset['path_id'],class_name=asset['class_name'],original_matched=asset['original_matched'],fields=fields))
            if index%100==0:print(json.dumps(dict(collections_visited=index,classes=dict(class_counts))),flush=True)
        missing=original_keys-matched_keys
        metadata_matches=Counter();metadata_mismatches=[]
        for detail in metadata:
            if not detail['original_matched']:continue
            expected=original_objects[detail['source_entry'],detail['path_id']]
            fields=detail['fields']
            if detail['class_name']=='Texture2D':
                ok=int(fields['Width'])==expected['width'] and int(fields['Height'])==expected['height'] and fields['Format']==expected['format']
            else:
                ok=(int(fields['Channels'])==expected['channels'] and int(fields['Frequency'])==expected['frequency'] and
                    abs(float(fields['Length'])-expected['duration_seconds'])<=max(1e-6,expected['duration_seconds']*1e-6))
            if ok:metadata_matches[detail['class_name']]+=1
            else:metadata_mismatches.append(dict(class_name=detail['class_name'],path_id=detail['path_id'],source_entry=detail['source_entry']))
        source_counts_by_id=Counter(key[2] for key in original_keys)
        original_counts=Counter({class_id_names.get(class_id,'ClassID_'+str(class_id)):count for class_id,count in source_counts_by_id.items()})
        comparison=dict(original_counts=dict(original_counts),matched_original_counts=dict(matched_counts),
            synthesized_or_unmapped_counts=dict(synthetic_counts),missing_original_count=len(missing),
            missing_original_keys=[list(k) for k in sorted(missing)],metadata_matches=dict(metadata_matches),metadata_mismatches=metadata_mismatches)
        save(private/'collections.json',collection_rows);save(private/'metadata.json',metadata)
        save(private/'comparison.json',comparison);save(private/'requests.json',requests);save(private/'inputs.json',inputs)
        save(private/'class-label-normalizations.json',label_normalizations)
        summary=dict(operation='assetripper-headless-metadata-cross-check',status='COMPLETE' if not missing and not failed_links and not metadata_mismatches else 'PARTIAL',
            version='2.0.0',apk_sha256=APK_SHA256,executable_sha256=sha(tool.read_bytes()),
            serialized_input_files=sum(r['kind']=='serialized' for r in inputs),resource_input_files=sum(r['kind']=='resource' for r in inputs),
            input_bytes=sum(r['size'] for r in inputs),bundles_visited=len(seen_bundles),collections_visited=len(collections),
            class_counts=dict(class_counts),matched_original_counts=dict(matched_counts),synthesized_or_unmapped_counts=dict(synthetic_counts),
            source_original_objects=len(original_keys),assetripper_objects=sum(class_counts.values()),synthesized_or_unmapped_objects=sum(synthetic_counts.values()),
            class_id_names=class_id_names,texture_metadata_matches=metadata_matches['Texture2D'],audio_metadata_matches=metadata_matches['AudioClip'],metadata_mismatches=len(metadata_mismatches),
            fallback_class_labels_resolved=len(label_normalizations),original_match_key='source collection filename and PathID; known class labels must agree',
            missing_original_count=len(missing),failed_file_links=len(failed_links),metadata_detail_pages=len(metadata),
            count_api_example=count_api_example,elapsed_seconds=round(time.monotonic()-start,3),
            localhost_only=True,headless=True,browser_opened=False,export_endpoints_called=False,
            media_endpoints_called=False,game_assemblies_copied=False,game_assembly_decompilation=False,
            additional_dependencies_installed=False,original_modified=False,
            public_output_contains_identifiers_or_payloads=False)
    finally:
        if process is not None and process.poll() is None:
            verified=process_image(process)==tool
            if not verified:raise RuntimeError('Refusing to terminate an unverified process')
            process.terminate();process.wait(timeout=15)
            if summary is not None:summary['server_process_image_verified']=verified;summary['server_stopped']=process.poll() is not None
        stdout.close();stderr.close()
    if summary is None:raise RuntimeError('No completed inventory')
    finalize(summary,apk,tool)
    print(json.dumps(summary,ensure_ascii=True))


if __name__=='__main__':
    main()
