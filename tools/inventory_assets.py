"""Inventory the user's pinned APK. All content stays local under assets/.

No network access; no original assemblies/players are copied. The immutable C#
reference supplies the format algorithm and its key initializer at execution time,
never a hardcoded key or game-data literal in this tool. User explicitly authorized
local decoding for this inventory. Published files contain aggregates only.
"""
import argparse
from collections import Counter, defaultdict
import csv
import hashlib
import json
import math
from pathlib import Path, PurePosixPath
import re
import struct
import sys
import zipfile
import zlib

from unity15_metadata import inspect

ROOT=Path(__file__).resolve().parents[1]
EXPECTED='d557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8'
FORBIDDEN={'.dll','.so','.dex','.mdb','.pdb','.exe'}


def sha(data):return hashlib.sha256(data).hexdigest()


def key_from_reference(reference):
    source=(reference/'src/Assembly-CSharp/main/AppData.cs').read_text(encoding='utf-8-sig')
    call=source.index('Encrypter.SetEncryptionKey(array2)')
    prefix=source[:call]
    found=list(re.finditer(r'\bint\[\]\s+array\s*=\s*new\s+int\[(\d+)\]\s*\{([^}]+)\}',prefix,re.S))
    if not found:raise ValueError('Unsupported key initializer in immutable reference')
    match=found[-1]
    tokens=[v.strip() for v in match.group(2).split(',') if v.strip()]
    if len(tokens)!=int(match.group(1)) or not all(re.fullmatch(r'-?\d+',v) for v in tokens):
        raise ValueError('Key initializer is not the measured integer-array form')
    # AppData.Init emits each int's four low-to-high bytes; values stay in memory.
    return b''.join(struct.pack('<I',int(value)&0xffffffff) for value in tokens)


def xor(data,key):return bytes(value^key[index%len(key)] for index,value in enumerate(data))


def parse_jar(data):
    """Invert JarInflater._load/GetInputStream; validate every member extent."""
    if len(data)<12:raise ValueError('Not a complete custom container')
    magic,data_size,count=struct.unpack_from('>3i',data)
    if not (0<=data_size<=len(data) and 0<count<=10000):raise ValueError('Not a custom container header')
    p=12;names=[]
    for _ in range(count):
        if p+4>len(data):raise ValueError('Truncated name size')
        size=struct.unpack_from('>i',data,p)[0];p+=4
        if not (0<size<=65536 and p+size<=len(data)):raise ValueError('Invalid member-name extent')
        name=data[p:p+size].decode('utf-8',errors='strict');p+=size
        path=PurePosixPath(name)
        if path.is_absolute() or '..' in path.parts or '\\' in name or ':' in name or '\0' in name:
            raise ValueError('Unsafe member path')
        names.append(name)
    if p+count*9+data_size>len(data):raise ValueError('Truncated directory/data')
    offsets=struct.unpack_from('>'+str(count)+'i',data,p);p+=count*4
    sizes=struct.unpack_from('>'+str(count)+'i',data,p);p+=count*4
    flags=data[p:p+count];p+=count
    if p+data_size!=len(data):raise ValueError('Unexplained container tail')
    body=data[p:p+data_size];members=[];extents=[]
    for name,offset,size,flag in zip(names,offsets,sizes,flags):
        if offset<0 or offset+4>len(body):raise ValueError('Invalid member offset')
        length=struct.unpack_from('>i',body,offset)[0]
        if length<0 or offset+4+length>len(body):raise ValueError('Invalid member payload extent')
        if flag&1 and size>0:raise ValueError('Unsupported deflate flag: original loader also throws')
        if flag&~1:raise ValueError('Unknown member flags')
        payload=body[offset+4:offset+4+length]
        extents.append((offset,offset+4+length))
        members.append(dict(name=name,data=payload,declared_size=size,flag=flag,offset=offset))
    ordered=sorted(extents)
    if any(a[1]>b[0] for a,b in zip(ordered,ordered[1:])):raise ValueError('Overlapping member extents')
    if len({n.lower() for n in names})!=len(names):raise ValueError('Duplicate case-insensitive names')
    return members


def png_metadata(data):
    if data[:8]!=b'\x89PNG\r\n\x1a\n':return None
    p=8;result=None;alpha=False;ended=False
    while p<len(data):
        if p+12>len(data):raise ValueError('Truncated PNG chunk')
        length=struct.unpack_from('>I',data,p)[0];kind=data[p+4:p+8];end=p+12+length
        if end>len(data):raise ValueError('PNG chunk outside input')
        chunk=data[p+8:p+8+length];crc=struct.unpack_from('>I',data,p+8+length)[0]
        if zlib.crc32(kind+chunk)&0xffffffff!=crc:raise ValueError('PNG CRC mismatch')
        if kind==b'IHDR':
            if result is not None or length!=13:raise ValueError('Invalid PNG IHDR')
            width,height,depth,color,compression,filtering,interlace=struct.unpack('>IIBBBBB',chunk)
            if width<=0 or height<=0 or compression or filtering:raise ValueError('Invalid PNG dimensions/codec')
            result=dict(width=width,height=height,bit_depth=depth,color_type=color,interlace=interlace)
            alpha=color in (4,6)
        elif kind==b'tRNS':alpha=True
        elif kind==b'IEND':
            if length:raise ValueError('Invalid PNG terminator')
            ended=True;p=end;break
        p=end
    if not ended or p!=len(data) or result is None:raise ValueError('Incomplete PNG')
    return dict(result,has_alpha=alpha,stored_bytes=len(data))


def font_metadata(data,obj):
    """Identify bounded embedded SFNT data, without exporting glyphs or strings."""
    start,end=obj['offset'],obj['offset']+obj['size']
    candidates=[]
    for signature,label in [(b'\0\x01\0\0','TrueType'),(b'OTTO','OpenType-CFF'),(b'true','TrueType-Apple')]:
        p=start
        while True:
            p=data.find(signature,p,end)
            if p<0:break
            if p>=start+4 and p+12<=end:
                declared=struct.unpack_from('<I',data,p-4)[0]
                tables=struct.unpack_from('>H',data,p+4)[0]
                if 1<=tables<=128 and p+declared<=end and 12+tables*16<=declared:
                    tags=set();valid=True
                    for i in range(tables):
                        q=p+12+i*16;tag=data[q:q+4];offset,size=struct.unpack_from('>II',data,q+8)
                        if offset+size>declared:valid=False;break
                        tags.add(tag)
                    required={b'head',b'maxp',b'cmap',b'hhea',b'hmtx'}
                    if valid and required<=tags:candidates.append(dict(format=label,font_data_bytes=declared,tables=tables))
            p+=4
    if len(candidates)==1:return candidates[0]
    return dict(format='UNKNOWN',font_data_bytes=None,candidate_count=len(candidates))


def texture_bytes(width,height,bpp):
    """PICA200 storage: split oversized dimensions, then pad each tile to POT>=8."""
    total=0
    for x in range(0,width,1024):
        for y in range(0,height,1024):
            w=max(8,1<<(min(1024,width-x)-1).bit_length())
            h=max(8,1<<(min(1024,height-y)-1).bit_length())
            total+=w*h*bpp//8
    return total


def csv_write(path,fields,rows):
    with path.open('w',encoding='utf-8',newline='') as file:
        writer=csv.DictWriter(file,fieldnames=fields);writer.writeheader();writer.writerows(rows)


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apk',type=Path,required=True,help="User's own local APK; never downloaded")
    parser.add_argument('--reference',type=Path,default=ROOT/'reference')
    parser.add_argument('--confirm-apk-sha256',help='Explicit confirmation of a different hash; measured results become a different version')
    parser.add_argument('--extract',action='store_true',help='Write only decoded local asset members under ignored assets/extracted')
    args=parser.parse_args()
    if not args.apk.is_file():parser.error('Forneça seu próprio APK local com --apk; nenhum arquivo será baixado.')
    digest=sha(args.apk.read_bytes())
    if digest!=EXPECTED:
        print('AVISO: APK diferente da versão esperada; é necessária confirmação explícita.',file=sys.stderr)
        if args.confirm_apk_sha256!=digest:parser.error('Confirme usando --confirm-apk-sha256 com o SHA-256 completo desta cópia.')
    key=key_from_reference(args.reference.resolve())
    private=ROOT/'assets/inventory';private.mkdir(parents=True,exist_ok=True)
    parsed=[];errors=[];zip_rows=[];game_members=[];containers=[];text_assets=[];fonts=[];standalone_pngs=[];loose_xml=0
    with zipfile.ZipFile(args.apk) as archive:
        for item in archive.infolist():
            if not item.filename.startswith('assets/') or item.is_dir():continue
            suffix=Path(item.filename).suffix.lower()
            if suffix in FORBIDDEN:continue
            zip_rows.append(dict(path=item.filename,size=item.file_size,compressed_size=item.compress_size))
            if suffix=='.resource':continue
            data=archive.read(item.filename)
            try:metadata=inspect(data)
            except (ValueError,struct.error,UnicodeError) as error:
                errors.append(dict(entry=item.filename,error=str(error)));continue
            if metadata is None:
                standalone=png_metadata(data)
                if standalone:standalone_pngs.append(standalone)
                elif suffix=='.xml':
                    import xml.etree.ElementTree as ET
                    ET.fromstring(data);loose_xml+=1
                continue
            parsed.append(dict(entry=item.filename,metadata=metadata))
            for obj in metadata['objects']:
                if obj['class_id']==128:fonts.append(font_metadata(data,obj))
                if obj['class_id']!=49:continue
                payload=data[obj['payload_offset']:obj['payload_offset']+obj['payload_size']]
                candidates=[(False,payload),(True,xor(payload,key))]
                selected=None
                for encrypted,decoded in candidates:
                    try:members=parse_jar(decoded)
                    except (ValueError,struct.error,UnicodeError):continue
                    selected=(encrypted,decoded,members);break
                record=dict(entry=item.filename,path_id=obj['path_id'],resource_identifier=obj['resource_identifier'],size=len(payload))
                if selected:
                    encrypted,decoded,members=selected
                    if encrypted and xor(decoded,key)!=payload:raise ValueError('XOR round trip failed')
                    record.update(kind='custom-Jar',encrypted=encrypted,members=len(members))
                    containers.append(record)
                    for member in members:
                        content=member['data'];name=member['name']
                        if Path(name).suffix.lower() in FORBIDDEN:raise ValueError('Original binary inside container is excluded')
                        image=png_metadata(content)
                        info=dict(container=obj['resource_identifier'],name=name,size=len(content),sha256=sha(content),
                                  extension=Path(name).suffix.lower() or '[no-extension]',png=image)
                        game_members.append(info)
                        if args.extract:
                            # Output path depends only on source identifiers and is confined to assets/.
                            base=ROOT/'assets/extracted'/sha(obj['resource_identifier'].encode())[:16]
                            target=(base/name).resolve()
                            if not target.is_relative_to(base.resolve()):raise ValueError('Unsafe extraction target')
                            target.parent.mkdir(parents=True,exist_ok=True);target.write_bytes(content)
                else:
                    record.update(kind='opaque-or-list',encrypted='UNKNOWN')
                text_assets.append(record)
    objects=[o for f in parsed for o in f['metadata']['objects']]
    unsupported=[o for o in objects if o['metadata_status']=='body-metadata-unsupported']
    private_report=dict(apk_sha256=digest,files=parsed,errors=errors,text_assets=text_assets,game_members=game_members)
    (private/'asset-details.json').write_text(json.dumps(private_report,indent=2)+'\n',encoding='utf-8')
    # Stable metadata-only input used by the independent and AssetRipper audits.
    (private/'unity-objects.json').write_text(json.dumps(dict(files=parsed,errors=errors),indent=2),encoding='utf-8')
    groups=defaultdict(list)
    for obj in objects:groups[obj['class_name']].append(obj)
    textures=[o for o in objects if o['class_id']==28 and 'width'in o]
    audio=[o for o in objects if o['class_id']==83 and 'duration_seconds'in o]
    pngs=[m for m in game_members if m['png']]
    unique_png={m['sha256']:m for m in pngs}
    memory={}
    for label,pictures in [('game_png_occurrences',[m['png'] for m in pngs]),('game_png_unique',[m['png'] for m in unique_png.values()]),('unity_texture_objects',textures)]:
        memory[label]={name:sum(texture_bytes(p['width'],p['height'],bpp) for p in pictures)
                       for name,bpp in [('RGBA8',32),('RGBA4',16),('ETC1A4',8),('ETC1',4)]}
    memory['audio_pcm16_bytes']=sum(o['pcm16_estimate_bytes'] for o in audio)
    memory['audio_duration_seconds']=sum(o['duration_seconds'] for o in audio)
    memory['audio_stream_example_bytes']=4*16384*2*2
    dimension_counts=Counter((m['png']['width'],m['png']['height'],m['png']['has_alpha']) for m in pngs)
    formats=Counter(m['extension'] for m in game_members)
    rows=[]
    for name,items in sorted(groups.items()):
        rows.append(dict(tipo='Unity/'+name,quantidade=len(items),formato_origem='Unity serialized v15',formato_alvo='UNKNOWN; inventoried only',estado='inventoried',notas='object_bytes='+str(sum(o['size'] for o in items))))
    for name,count in sorted(formats.items()):
        rows.append(dict(tipo='Jar/'+name,quantidade=count,formato_origem=name,formato_alvo='PICA texture if PNG; otherwise UNKNOWN',estado='inventoried',notas='Measured decoded members; content stays under assets/'))
    config=ROOT/'config';config.mkdir(exist_ok=True)
    csv_write(config/'assets.csv',['tipo','quantidade','formato_origem','formato_alvo','estado','notas'],rows)
    csv_write(config/'texture-dimensions.csv',['width','height','has_alpha','occurrences'],
              [dict(width=w,height=h,has_alpha=a,occurrences=n) for (w,h,a),n in sorted(dimension_counts.items())])
    summary=dict(operation='local-APK-asset-metadata-and-custom-container-inventory',apk_sha256=digest,expected_apk=digest==EXPECTED,
        zip_asset_entries=len(zip_rows),zip_asset_bytes=sum(r['size'] for r in zip_rows),zip_asset_compressed_bytes=sum(r['compressed_size'] for r in zip_rows),
        serialized_files=len(parsed),serialized_objects=len(objects),unity_versions=dict(Counter(f['metadata']['unity_version'] for f in parsed)),
        standalone_pngs=standalone_pngs,loose_xml_files=loose_xml,resource_sidecars=sum(Path(r['path']).suffix.lower()=='.resource' for r in zip_rows),
        unity_types={n:dict(count=len(items),object_bytes=sum(o['size'] for o in items)) for n,items in sorted(groups.items())},
        text_assets=len(text_assets),custom_containers=len(containers),encrypted_containers=sum(bool(c['encrypted']) for c in containers),
        opaque_or_list_text_assets=sum(t['kind']=='opaque-or-list' for t in text_assets),container_member_count=len(game_members),
        container_member_bytes=sum(m['size'] for m in game_members),member_formats=dict(formats),game_png_occurrences=len(pngs),
        game_png_unique=len(unique_png),game_png_alpha_occurrences=sum(m['png']['has_alpha'] for m in pngs),
        oversized_png_occurrences=sum(m['png']['width']>1024 or m['png']['height']>1024 for m in pngs),
        unity_texture_formats=dict(Counter(t['format'] for t in textures)),audio_formats=dict(Counter(o['compression'] for o in audio)),
        font_formats=dict(Counter(f['format'] for f in fonts)),font_data_bytes=sum(f['font_data_bytes'] or 0 for f in fonts),
        png_stored_bytes=sum(m['size'] for m in pngs),png_bit_depths=dict(Counter(m['png']['bit_depth'] for m in pngs)),
        png_color_types=dict(Counter(m['png']['color_type'] for m in pngs)),
        png_dimension_range=dict(min_width=min(m['png']['width'] for m in pngs),max_width=max(m['png']['width'] for m in pngs),min_height=min(m['png']['height'] for m in pngs),max_height=max(m['png']['height'] for m in pngs)),
        audio_frequencies=dict(Counter(o['frequency'] for o in audio)),audio_channels=dict(Counter(o['channels'] for o in audio)),
        memory=memory,serialized_errors=len(errors),unsupported_object_metadata=len(unsupported),
        source_methods=['main.AppData.Init','kairo.unity.io.AssetReader.GetData','kairo.unity.util.Encrypter.Encode',
                        'kairo.unity.util.JarInflater._load','kairo.unity.util.JarInflater.GetInputStream'],
        content_in_published_outputs=False,key_in_published_outputs=False,original_binaries_copied=False,
        texture_conversion_performed=False,audio_decoding_performed=False,game_executed=False,
        limitations=['Whole-corpus storage estimates are not runtime residency or a measured peak.',
                    'RGBA4 and ETC1/A4 are size scenarios, not an approved fidelity/conversion choice.',
                    'ETC1 does not retain alpha. Font runtime atlas and data-model/save allocations remain UNKNOWN.'])
    (config/'asset-summary.json').write_text(json.dumps(summary,indent=2)+'\n',encoding='utf-8')
    print(json.dumps({k:summary[k] for k in ['serialized_files','serialized_objects','custom_containers','encrypted_containers','opaque_or_list_text_assets','container_member_count','game_png_occurrences','game_png_unique','serialized_errors','unsupported_object_metadata']}))
    return 0 if not errors and not unsupported else 1


if __name__=='__main__':sys.exit(main())
