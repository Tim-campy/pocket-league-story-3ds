"""Read local custom assets and report only format/count metadata, never values.

The user authorized local blob analysis. Key material is obtained from the
immutable reference at runtime through inventory_assets, not stored here. No
payload, resource identifier, player text or font name is written by this tool.
"""
import argparse
from collections import Counter, defaultdict
import hashlib
import json
from pathlib import Path
import re
import struct
import zipfile

from inventory_assets import EXPECTED, key_from_reference, xor, parse_jar
from unity15_metadata import Reader

ROOT = Path(__file__).resolve().parents[1]


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def source_bindings(identifier):
    result = []
    choices = {identifier, identifier+'.bytes', identifier+'.txt', identifier+'.csv'}
    for path in (ROOT/'reference/src').rglob('*.cs'):
        text = path.read_text(encoding='utf-8-sig')
        for match in re.finditer(r'"(?:\\.|[^"\\])*"', text):
            value = match[0][1:-1]
            if value in choices or value.rsplit('/',1)[-1] in choices:
                result.append(dict(path=path.relative_to(ROOT).as_posix(),
                                   line=text.count('\n',0,match.start())+1))
    return result


def seb_metadata(data):
    r = Reader(data, endian='>')
    first = r.number('b')
    if first < 0:
        version, layers = -first, r.number('h')
    else:
        version, layers = 0, (first << 8) | r.number('B')
    frames = r.number('h')
    if version not in (0,1) or layers < 0 or frames < 0:
        raise ValueError('Unsupported SEB header')
    records = 0
    for _ in range(layers):
        count = r.number('h')
        if count < 0:
            raise ValueError('Negative SEB sprite count')
        if version == 0:
            r.number('h')
        records += count
        for _ in range(count):
            if version == 0:
                r.take(20)
            else:
                r.number('h')
                texture = r.number('h')
                r.take(4)
                blend = r.number('B')
                if (texture >= 0 and blend != 0) or texture in (-2,-3,-4,-5,-6):
                    r.take(4)
                if texture >= 0 or texture == -8:
                    r.take(4)
                r.take(4)
                if texture >= 0:
                    r.number('B')
    if r.p != r.end:
        raise ValueError('Unexplained SEB tail')
    return dict(version=version, layers=layers, frame_count=frames,
                sprite_records=records, extent_exact=True,
                embedded_png_signature=data.count(b'\x89PNG\r\n\x1a\n'))


def gmap_metadata(data):
    width, height = struct.unpack_from('>hh', data)
    if not (0 < width <= 4096 and 0 < height <= 4096):
        return 'UNKNOWN'
    base = 4+2*width*height
    if base+6 <= len(data):
        count = struct.unpack_from('>h', data, base+4)[0]
        if count >= 0 and base+6+count*6 == len(data):
            return 'game.Map.LoadMap'
    if base+34 <= len(data):
        count = struct.unpack_from('>h', data, base+32)[0]
        end = base+34+count*6
        if count >= 0 and end+2 <= len(data):
            objects = struct.unpack_from('>h', data, end)[0]
            if objects >= 0 and end+2+objects*6 == len(data):
                return 'game.MapMain.LoadMap'
    return 'UNKNOWN'


def font_metadata(data, obj, file_metadata):
    r = Reader(data, obj['offset'], obj['offset']+obj['size'], file_metadata['header']['endian'])
    r.aligned_string()  # resource name remains private
    r.take(24+12)
    characters = r.number('i')
    r.take(characters*44)
    texture_file, texture_path = r.number('i'), r.number('q')
    kerning = r.number('i')
    r.take(kerning*8)
    r.number('f')
    size = r.number('i')
    raw = r.take(size)
    kind = {b'\x00\x01\x00\x00':'TrueType-sfnt', b'OTTO':'OpenType-CFF', b'ttcf':'TrueType-collection'}.get(raw[:4],'UNKNOWN')
    result = dict(format=kind, embedded_font_bytes=size, character_rects=characters,
                  kerning_pairs=kerning, unparsed_trailing_object_bytes=r.end-r.p,
                  table_directory_bounds_valid=False)
    if kind == 'TrueType-sfnt':
        tables = struct.unpack_from('>H',raw,4)[0]
        if 12+tables*16 > len(raw):
            raise ValueError('Font table directory outside font')
        by_tag = {}
        for i in range(tables):
            tag, checksum, offset, length = struct.unpack_from('>4sIII', raw, 12+16*i)
            if offset+length > len(raw) or tag in by_tag:
                raise ValueError('Invalid font table extent or duplicate table')
            by_tag[tag] = (offset,length)
        result.update(table_count=tables, table_directory_bounds_valid=True)
        if b'maxp' in by_tag:
            offset,length = by_tag[b'maxp']
            if length >= 6:
                result['glyph_count'] = struct.unpack_from('>H',raw,offset+4)[0]
        if b'head' in by_tag:
            offset,length = by_tag[b'head']
            if length >= 20:
                result['units_per_em'] = struct.unpack_from('>H',raw,offset+18)[0]
    target = next((o for o in file_metadata['objects'] if o['path_id']==texture_path),None) if texture_file == 0 else None
    result['texture_reference_is_local_empty_placeholder'] = bool(target and target['class_id']==28 and target.get('width')==target.get('height')==target.get('image_count')==0)
    return result


def audit(apk, private_path):
    if sha(apk) != EXPECTED:
        raise ValueError('Unexpected user APK')
    private_bytes = private_path.read_bytes()
    details = json.loads(private_bytes)
    key = key_from_reference(ROOT/'reference')
    nonjar = []
    formats = defaultdict(lambda:dict(count=0,stored_bytes=0))
    sebs = Counter()
    maps = Counter()
    fonts = []
    known_names = defaultdict(set)
    for file in details['files']:
        for obj in file['metadata']['objects']:
            if obj.get('resource_identifier'):
                name = obj['resource_identifier'].lower()
                known_names[name].add(obj['class_name'])
                known_names[Path(name).stem].add(obj['class_name'])
    with zipfile.ZipFile(apk) as archive:
        for file in details['files']:
            metadata = file['metadata']
            if not any(o['class_id'] in (49,128) for o in metadata['objects']):
                continue
            data = archive.read(file['entry'])
            for obj in metadata['objects']:
                if obj['class_id'] == 128:
                    fonts.append(font_metadata(data,obj,metadata))
                if obj['class_id'] != 49:
                    continue
                record = next(t for t in details['text_assets'] if t['entry']==file['entry'] and t['path_id']==obj['path_id'])
                payload = data[obj['payload_offset']:obj['payload_offset']+obj['payload_size']]
                if record['kind'] == 'custom-Jar':
                    members = parse_jar(xor(payload,key) if record['encrypted'] else payload)
                    for member in members:
                        ext = Path(member['name']).suffix.lower()
                        if ext == '.png':
                            continue
                        row = formats[ext]
                        row['count'] += 1
                        row['stored_bytes'] += len(member['data'])
                        if ext in ('.txt','.inf','.csv'):
                            text = member['data'].decode('utf-8-sig')
                            row['utf8_count'] = row.get('utf8_count',0)+1
                            row['total_lines'] = row.get('total_lines',0)+len(text.splitlines())
                        if ext == '.seb':
                            checked = seb_metadata(member['data'])
                            sebs['version_'+str(checked['version'])] += 1
                            for k in ('layers','frame_count','sprite_records','embedded_png_signature'):
                                sebs[k] += checked[k]
                            sebs['extent_exact'] += bool(checked['extent_exact'])
                        if ext in ('.map','.gmap'):
                            maps[ext+':'+gmap_metadata(member['data'])] += 1
                else:
                    text = payload.decode('utf-8-sig')
                    lines = text.splitlines()
                    split = [line.split(',') for line in lines]
                    fields = Counter(len(parts) for parts in split)
                    pathlike = all(re.fullmatch(r'[A-Za-z0-9_./@+\-]+',line) for line in lines)
                    ext = Counter(Path(line).suffix.lower() for line in lines) if pathlike else Counter()
                    if pathlike and set(ext)=={'.ogg'}:
                        kind = 'audio-resource-identifier-list'
                    elif pathlike:
                        kind = 'union-resource-identifier-list'
                    elif set(fields)=={3} and all(re.fullmatch(r'-?\d+',p[1]) and re.fullmatch(r'-?\d+',p[2]) for p in split):
                        kind = 'language-delimiter-format-table'
                    elif all(len(p)>=4 for p in split):
                        kind = 'language-position-and-text-manifest'
                    else:
                        kind = 'UNKNOWN-UTF8-text'
                    class_matches = Counter()
                    if pathlike:
                        for line in lines:
                            for name in known_names.get(line.lower(),set()) | known_names.get(Path(line).stem.lower(),set()):
                                class_matches[name] += 1
                    nonjar.append(dict(kind=kind,stored_bytes=len(payload),utf8=True,
                        lines=len(lines),nonempty_lines=sum(bool(line.strip()) for line in lines),
                        NUL_characters=text.count('\0'),field_count_histogram=dict(fields),
                        file_extension_counts=dict(ext),resolved_identifier_counts=dict(class_matches),
                        source_bindings=source_bindings(obj['resource_identifier'])))
    assert sha(apk) == EXPECTED and private_path.read_bytes()==private_bytes
    return dict(operation='local-custom-format-and-font-metadata-inventory',
        apk_sha256=EXPECTED, private_inventory_sha256=hashlib.sha256(private_bytes).hexdigest(),
        producer_sha256=sha(Path(__file__).resolve()),
        main_inventory_producer_sha256=sha(ROOT/'tools/inventory_assets.py'),
        reference_commit='c7d097a847ca1f1a8e5fb7141ff11d338f5915c4',
        outside_jar_textassets=nonjar, data_formats=dict(formats),
        seb=dict(sebs),map_layouts=dict(maps),fonts=fonts,
        font_source_reference='https://github.com/Perfare/AssetStudio/blob/d158e864b556b5970709c2a52e47944d53aa98a2/AssetStudio/Classes/Font.cs',
        game_literal_values_emitted=False,resource_identifiers_emitted=False,
        key_values_emitted=False,asset_payloads_exported=False,tools_installed=False,
        target_executed=False,
        limitations=['MAP payload semantics remain UNKNOWN where no matching C# reader was proved.',
                     'Font trailing fields are not parsed; family names and text values are not emitted.',
                     'Data text is counted as UTF8; no universal RFC4180 CSV schema is assumed.'])


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apk',required=True,type=Path)
    parser.add_argument('--private-inventory',type=Path,default=ROOT/'assets/inventory/asset-details.json')
    parser.add_argument('--output',type=Path,default=ROOT/'config/custom-asset-formats.json')
    args = parser.parse_args()
    report = audit(args.apk.resolve(),args.private_inventory.resolve())
    args.output.write_text(json.dumps(report,indent=2,sort_keys=True)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(dict(outside_jar=len(report['outside_jar_textassets']),
        outside_jar_kinds=dict(Counter(t['kind'] for t in report['outside_jar_textassets'])),
        SEB=report['seb'],MAP=report['map_layouts'],fonts=report['fonts'])))


if __name__ == '__main__':
    main()
