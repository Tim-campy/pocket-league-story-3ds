"""Build a private native asset catalog from the authenticated own APK.

Unity resource identifiers and all payloads stay under ignored assets/. This
reads the ResourceManager container prefix and external PPtrs, never a player,
managed assembly, native library or Java class. No game binary is copied.
"""
import argparse
import hashlib
import json
from pathlib import Path
import struct
from urllib.parse import parse_qs,urlparse
import zipfile

from inventory_assets import ROOT,EXPECTED,key_from_reference,xor,parse_jar
from unity15_metadata import Reader,serialized_header
from assetripper_inventory import Page


def sha(data):return hashlib.sha256(data).hexdigest()


def externals(data):
    header=serialized_header(data)
    if header is None:raise ValueError('Expected Unity serialized v15')
    r=Reader(data,20,20+header['metadata_size'],header['endian'])
    r.cstring();r.number('i');tree=r.number('B');count=r.number('i')
    for _ in range(count):
        classid=r.number('i')
        if classid<0:r.take(16)
        r.take(16)
        if tree:r.take(r.number('i')*24+r.number('i'))
    for _ in range(r.number('i')):r.align();r.take(25)
    for _ in range(r.number('i')):r.number('i');r.align();r.number('q')
    result=[]
    for _ in range(r.number('i')):
        r.cstring();r.take(16);r.number('i');result.append(r.cstring())
    r.cstring()
    if r.p!=r.end:raise ValueError('Unsupported serialized metadata suffix')
    return result


def resource_bindings(archive,private):
    files={f['entry']:f for f in private['files']}
    by_name={Path(k).name:k for k in files}
    result=[];tail=0;entries=0
    for file in files.values():
        for obj in file['metadata']['objects']:
            if obj['class_id']!=147:continue
            data=archive.read(file['entry']);refs=externals(data)
            r=Reader(data,obj['offset'],obj['offset']+obj['size'],file['metadata']['header']['endian'])
            count=r.number('i');entries+=count
            for _ in range(count):
                name=r.aligned_string();fileid=r.number('i');pathid=r.number('q')
                if fileid<0 or fileid>len(refs):raise ValueError('Resource PPtr file index outside external table')
                entry=file['entry'] if fileid==0 else by_name.get(Path(refs[fileid-1]).name)
                if entry is None:raise ValueError('Resource dependency absent from screened inventory')
                targets=[o for o in files[entry]['metadata']['objects'] if o['path_id']==pathid]
                if len(targets)!=1:raise ValueError('Resource PPtr does not resolve uniquely')
                # A resource path can name multiple subassets/types (e.g. sprites).
                result.append((name,entry,targets[0]))
            tail+=r.end-r.p
    if not result:raise ValueError('ResourceManager container absent')
    return result,entries,tail


def audio_sources(private):
    urls=[]
    for path in (ROOT/'assets/inventory/assetripper/details').glob('*.html'):
        urls += [u for u in Page(path.read_text(encoding='utf-8-sig')).links if u.startswith('/Assets/Audio?')]
    urls=list(dict.fromkeys(urls))
    collections=json.loads((ROOT/'assets/inventory/assetripper/collections.json').read_text(encoding='utf-8'))
    mapping={json.dumps(json.loads(parse_qs(urlparse(c['path']).query)['Path'][0]),sort_keys=True):c['source_entry']
             for c in collections if c['source_entry']}
    result=[]
    for url in urls:
        ref=json.loads(parse_qs(urlparse(url).query)['Path'][0])
        result.append((mapping[json.dumps(ref['C'],sort_keys=True)],ref['D']))
    return result


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--apk',required=True,type=Path);args=p.parse_args()
    if sha(args.apk.read_bytes())!=EXPECTED:p.error('Authenticated own APK required')
    private=json.loads((ROOT/'assets/inventory/asset-details.json').read_text(encoding='utf-8'))
    proof=json.loads((ROOT/'config/custom-asset-formats.json').read_text(encoding='utf-8'))
    if sha((ROOT/'assets/inventory/asset-details.json').read_bytes())!=proof['private_inventory_sha256']:
        raise ValueError('Repeat authenticated inventory; private input changed')
    manifest_path=ROOT/'assets/converted/manifest.json'
    manifest=json.loads(manifest_path.read_text(encoding='utf-8'))
    if manifest['apk_sha256']!=EXPECTED:raise ValueError('Converted assets belong to another APK')
    output=ROOT/'assets/converted';records=[];resource_names={}
    def add(kind,key,path,width=0,height=0):
        path=path.resolve(strict=True)
        if not path.is_relative_to((ROOT/'assets').resolve()):raise ValueError('Asset path escapes local root')
        data=path.read_bytes()
        records.append(dict(kind=kind,key=key,path=path.relative_to(ROOT/'assets').as_posix(),
                            size=len(data),width=width,height=height,sha256=sha(data)))
    with zipfile.ZipFile(args.apk) as archive:
        bindings,count,tail=resource_bindings(archive,private)
        for name,entry,obj in bindings:resource_names.setdefault((entry,obj['path_id']),[]).append(name)
        key=key_from_reference(ROOT/'reference')
        text_lookup={(t['entry'],t['path_id']):t for t in private['text_assets']}
        for identity,text in text_lookup.items():
            obj=next(o for f in private['files'] if f['entry']==identity[0] for o in f['metadata']['objects'] if o['path_id']==identity[1])
            source=archive.read(identity[0]);data=source[obj['payload_offset']:obj['payload_offset']+obj['payload_size']]
            if text['encrypted'] is True:data=xor(data,key);parse_jar(data)
            path=output/'resources'/(sha(data)+'.bytes');path.parent.mkdir(exist_ok=True);path.write_bytes(data)
            for name in resource_names.get(identity,[]):add(1,name,path)
        font_by_object={}
        from convert_assets import extract_font
        for file in private['files']:
            for obj in file['metadata']['objects']:
                if obj['class_id']==128:
                    data=extract_font(archive.read(file['entry']),obj,file['metadata']['header']['endian'])
                    font_by_object[file['entry'],obj['path_id']]=output/'fonts'/(sha(data)+'.ttf')
        for identity,path in font_by_object.items():
            names=resource_names.get(identity,[])
            for name in names:add(4,name,path)
            if not names:add(6,path.stem,path)  # Own APK's built-in font, not a fabricated Resources alias.
    for member in private['game_members']:
        folder=sha(member['container'].encode())[:16]
        path=ROOT/'assets/extracted'/folder/member['name']
        if sha(path.read_bytes())!=member['sha256']:raise ValueError('Extracted member digest changed')
        add(2,member['container']+'\0'+member['name'],path)
    for image in manifest['images']:
        path=ROOT/'assets'/image['path'];add(3,path.stem,path,image['width'],image['height'])
        if records[-1]['sha256']!=image['sha256']:raise ValueError('Converted image digest changed')
    audio=audio_sources(private)
    if len(audio)!=len(manifest['audio']):raise ValueError('Audio import/output identities differ')
    for identity,item in zip(audio,manifest['audio']):
        path=ROOT/'assets'/item['path']
        if sha(path.read_bytes())!=item['sha256']:raise ValueError('Converted audio digest changed')
        for name in resource_names.get(identity,[]):add(5,name,path)
    baked_index=ROOT/'config/baked-array-index.json'
    if baked_index.exists():
        baked=json.loads(baked_index.read_text(encoding='utf-8'))
        if baked['apk_sha256']!=EXPECTED:raise ValueError('Baked arrays belong to another APK')
        from inventory_baked_arrays import load_verified_baked_manifest
        load_verified_baked_manifest(ROOT/'assets/baked',baked['private_manifest_sha256'])
        types={'bool':1,'byte':2,'sbyte':3,'char':4,'short':5,'ushort':6,'int':7,'uint':8,'long':9,'ulong':10,'float':11,'double':12}
        for item in baked['matched']:
            path=ROOT/'assets/baked'/(item['id']+'.bytes')
            if path.stat().st_size!=item['bytes']:raise ValueError('Baked array extent differs')
            add(7,item['id'],path,item['count'],types[item['element_type']])
    identities={(r['kind'],r['key']) for r in records}
    if len(identities)!=len(records):raise ValueError('Duplicate native catalog identity')
    records.sort(key=lambda r:(r['kind'],r['key']))
    blob=bytearray(b'PLSASV1\0'+EXPECTED.encode()+struct.pack('<I',len(records)))
    def string(value):
        data=value.encode('utf-8');return struct.pack('<I',len(data))+data
    for r in records:
        blob+=bytes([r['kind']])+string(r['key'])+string(r['path'])
        blob+=struct.pack('<QII',r['size'],r['width'],r['height'])+bytes.fromhex(r['sha256'])
    catalog=output/'catalog.idx';catalog.write_bytes(blob)
    (output/'catalog-manifest.json').write_text(json.dumps(dict(apk_sha256=EXPECTED,records=records),indent=2)+'\n',encoding='utf-8',newline='\n')
    from collections import Counter
    report=dict(operation='private-native-resource-catalog',apk_sha256=EXPECTED,source_resource_entries=count,
        source_resource_all_pptrs_resolved=True,resource_manager_tail_bytes_not_used=tail,
        records_by_kind=dict(Counter(str(r['kind']) for r in records)),records=len(records),
        catalog_sha256=sha(catalog.read_bytes()),manifest_sha256=sha(manifest_path.read_bytes()),
        producer_sha256=sha(Path(__file__).read_bytes()),asset_values_published=False)
    (ROOT/'config/phase2-resource-catalog.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(report))


if __name__=='__main__':main()
