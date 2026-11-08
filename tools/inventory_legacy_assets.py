"""Audit legacy MAP/CSV locally; emit schema/evidence counts, never asset values."""
import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path
import re
import struct
import zipfile
from inventory_assets import EXPECTED, key_from_reference, xor, parse_jar

ROOT = Path(__file__).resolve().parents[1]


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


class MapReader:
    def __init__(self, data):
        self.data, self.p = data, 0

    def ints(self, count=1):
        result = struct.unpack_from('<' + 'i' * count, self.data, self.p)
        self.p += count * 4
        return result

    def string(self):
        length = shift = 0
        for _ in range(5):
            byte = self.data[self.p]
            self.p += 1
            length |= (byte & 127) << shift
            if not byte & 128:
                break
            shift += 7
        else:
            raise ValueError('Invalid 7-bit string length')
        end = self.p + length
        if end > len(self.data):
            raise ValueError('String outside MAP')
        result = self.data[self.p:end].decode('utf-8')
        self.p = end
        return result


def legacy_map(data):
    r = MapReader(data)
    version, editor_x, editor_y = r.ints(3)
    flag = data[r.p]
    r.p += 1
    if version != 102 or flag not in (0, 1):
        raise ValueError('Unrecognized MAP header')
    rows, = r.ints()
    tiles, rects = [], []
    width = None
    for _ in range(rows):
        columns, = r.ints()
        if width is None:
            width = columns
        if width != columns or not 0 < columns <= 4096:
            raise ValueError('Nonrectangular MAP')
        for _ in range(columns):
            tile, = r.ints()
            tiles.append(tile)
            if tile >= 0:
                path = r.string()
                rects.append((path, r.ints(4)))
            elif tile != -1:
                raise ValueError('Unknown MAP sentinel')
    count, = r.ints()
    objects = [(r.string(), r.ints(2)) for _ in range(count)]
    tail = r.ints((len(data) - r.p) // 4)
    if r.p != len(data):
        raise ValueError('Unparsed MAP bytes')
    if len(tail) == 2:
        kind = 'game.Map.LoadMap'
    elif len(tail) >= 17 and len(tail) == 17 + 3 * tail[16]:
        kind = 'game.MapMain.LoadMap'
    else:
        raise ValueError('Unrecognized MAP tail')
    return dict(width=width, height=rows, tiles=tiles, rects=rects,
                objects=objects, tail=tail, consumer=kind)


def csv_metadata(data, template_ids):
    text = data.decode('utf-8-sig')
    headers, ids, continuation, unknown = [], [], 0, 0
    # Same first-comma/line boundary as Language.LoadLanguagePack, not RFC4180.
    for line in text.splitlines():
        if not line:
            continue
        key, separator, value = line.partition(',')
        if not separator:
            raise ValueError('Missing language-pack separator')
        if key.startswith('"') and key.endswith('"'):
            key = key[1:-1]
        if key.startswith('@'):
            headers.append(key)
        elif re.fullmatch(r'#\d+', key):
            ids.append(int(key[1:]))
        elif not key:
            continuation += 1
        else:
            unknown += 1
    return dict(stored_bytes=len(data), physical_lines=len(text.splitlines()),
                utf8_bom=data.startswith(b'\xef\xbb\xbf'), header_records=len(headers),
                translation_records=len(ids), unique_translation_ids=len(set(ids)),
                continuation_records=continuation, unknown_records=unknown,
                template_ids_all_covered=template_ids <= set(ids),
                unbound_translation_ids=len(set(ids)-template_ids),
                unbound_ids_inside_allocated_template_array=all(0 <= i < ((max(template_ids)//512)+1)*512 for i in set(ids)-template_ids),
                ignored_header_records=sum(h not in {'@author','@language','@title','@scale','@appli'} for h in headers))


def audit(apk, inventory):
    if digest(apk) != EXPECTED:
        raise ValueError('Unexpected APK hash')
    private_bytes = inventory.read_bytes()
    details = json.loads(private_bytes)
    key = key_from_reference(ROOT / 'reference')
    members, raw = [], {}
    with zipfile.ZipFile(apk) as z:
        for rec in details['text_assets']:
            meta = next(f['metadata'] for f in details['files'] if f['entry'] == rec['entry'])
            obj = next(o for o in meta['objects'] if o['path_id'] == rec['path_id'])
            body = z.read(rec['entry'])
            payload = body[obj['payload_offset']:obj['payload_offset'] + obj['payload_size']]
            if rec['kind'] == 'custom-Jar':
                decoded = parse_jar(xor(payload, key) if rec['encrypted'] else payload)
                members.extend((rec['resource_identifier'], m['name'], m['data']) for m in decoded)
            else:
                raw[rec['resource_identifier']] = payload
    template_ids = {int(line.split(',', 1)[0]) for line in raw['language_pack_template_en'].decode('utf-8-sig').splitlines() if line.split(',',1)[0].strip()}
    maps, object_mapping = [], {}
    for _, name, payload in members:
        if Path(name).suffix.lower() != '.map':
            continue
        parsed = legacy_map(payload)
        choices = [body for _, other, body in members if Path(other).suffix.lower() == '.gmap' and Path(other).stem == Path(name).stem]
        if len(choices) != 1:
            raise ValueError('MAP/GMAP pairing is not unique')
        gmap = choices[0]
        width, height = struct.unpack_from('>hh', gmap)
        tile_end = 4 + 2 * width * height
        tiles = list(struct.unpack_from('>' + str(width * height) + 'h', gmap, 4))
        tail = list(struct.unpack_from('>' + str((len(gmap) - tile_end) // 2) + 'h', gmap, tile_end))
        header = list(parsed['tail'])
        expected = header + [len(parsed['objects'])]
        gobjects = tail[len(header) + 1:]
        if len(gobjects) != 3 * len(parsed['objects']):
            raise ValueError('Object table differs')
        xy_equal = True
        for i, (path, xy) in enumerate(parsed['objects']):
            image, x, y = gobjects[i*3:i*3+3]
            if path in object_mapping and object_mapping[path] != image:
                raise ValueError('Inconsistent object-index binding')
            object_mapping[path] = image
            xy_equal &= (x,y) == xy
        maps.append(dict(stored_bytes=len(payload), version=102,
                         exact_extent=True, tile_rectangle_records=len(parsed['rects']),
                         object_records=len(parsed['objects']), runtime_projection_consumer=parsed['consumer'],
                         dimensions_equal=(width,height)==(parsed['width'],parsed['height']),
                         all_tile_ids_equal=tiles==parsed['tiles'],
                         entire_tail_equal=tail[:len(expected)]==expected and xy_equal,
                         object_positions_equal=xy_equal))
    csvs = []
    for container, name, body in members:
        if Path(name).suffix.lower() == '.csv':
            result = csv_metadata(body, template_ids)
            result['in_language_resource_container'] = container == 'language'
            csvs.append(result)
    if len(maps) != 4 or len(csvs) != 3:
        raise ValueError('Unexpected inventory count')
    if not all(m['dimensions_equal'] and m['all_tile_ids_equal'] and m['entire_tail_equal'] for m in maps):
        raise ValueError('MAP projection not fully proved')
    if not all(c['in_language_resource_container'] and c['template_ids_all_covered'] and c['unbound_ids_inside_allocated_template_array'] and c['unknown_records']==0 for c in csvs):
        raise ValueError('Language CSV binding not fully proved')
    if digest(apk) != EXPECTED or inventory.read_bytes() != private_bytes:
        raise ValueError('Inputs changed during audit')
    return dict(operation='phase2-legacy-map-language-csv-metadata', apk_sha256=EXPECTED,
                producer_sha256=digest(Path(__file__)), private_inventory_sha256=hashlib.sha256(private_bytes).hexdigest(),
                maps=maps, map_total_bytes=sum(m['stored_bytes'] for m in maps),
                map_object_path_index_bindings=len(object_mapping),
                map_object_mapping_is_bijective=len(set(object_mapping.values()))==len(object_mapping),
                map_original_authoring_consumer='UNKNOWN: not present in reconstructed runtime corpus',
                csvs=csvs, csv_total_bytes=sum(c['stored_bytes'] for c in csvs),
                language_template_unique_record_ids=len(template_ids),
                asset_values_emitted=False, resource_identifiers_emitted=False,
                key_values_emitted=False, assets_modified=False, tools_installed=False)


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--apk', required=True, type=Path)
    p.add_argument('--private-inventory', type=Path, default=ROOT/'assets/inventory/asset-details.json')
    p.add_argument('--output', type=Path, default=ROOT/'config/phase2-legacy-assets.json')
    args = p.parse_args()
    result = audit(args.apk.resolve(), args.private_inventory.resolve())
    args.output.write_text(json.dumps(result, indent=2)+'\n', encoding='utf-8',newline='\n')
    print(json.dumps(result, indent=2))


if __name__ == '__main__':
    main()
