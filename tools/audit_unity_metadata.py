"""Audit Unity15 tables and extents against the user's pinned APK, read-only.

No renderer, decryption, payload export or game strings appear in the report.
Independently reads metadata trailers that the bounded inventory deliberately
does not consume. Stream bounds use ZIP directory lengths, not decoded audio.
"""
import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path, PurePosixPath
import zipfile

from unity15_metadata import Reader, serialized_header

EXPECTED_APK = 'd557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8'
ROOT = Path(__file__).resolve().parents[1]


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def table_audit(data, document):
    header = serialized_header(data)
    assert header == document['header']
    r = Reader(data, 20, 20+header['metadata_size'], header['endian'])
    version = r.cstring()
    platform = r.number('i')
    tree = r.number('B')
    types = r.number('i')
    assert 0 <= types <= 100000
    type_ids = []
    for _ in range(types):
        type_id = r.number('i')
        type_ids.append(type_id)
        if type_id < 0:
            r.take(16)
        r.take(16)
        if tree:
            nodes, strings = r.number('i'), r.number('i')
            assert nodes >= 0 and strings >= 0
            r.take(nodes*24+strings)
    count = r.number('i')
    assert count == len(document['objects'])
    stripped_counts = Counter()
    script_indexes = Counter()
    for expected in document['objects']:
        r.align()
        path_id = r.number('q')
        offset = header['data_offset']+r.number('I')
        size = r.number('I')
        type_id, class_id = r.number('i'), r.number('H')
        script_index, stripped = r.number('h'), r.number('B')
        assert type_id in type_ids
        assert (path_id, offset, size, class_id) == tuple(expected[k] for k in ('path_id','offset','size','class_id'))
        assert header['data_offset'] <= offset <= offset+size <= len(data)
        stripped_counts[stripped] += 1
        script_indexes[script_index] += 1
    scripts = r.number('i')
    assert 0 <= scripts <= 100000
    for _ in range(scripts):
        r.number('i')
        r.align()
        r.number('q')
    externals = r.number('i')
    assert 0 <= externals <= 100000
    for _ in range(externals):
        r.cstring()
        r.take(16)
        r.number('i')
        r.cstring()
    user_information = r.cstring()
    assert r.p == r.end, 'Unconsumed metadata trailer'
    assert version == document['unity_version'] and platform == document['platform']
    return dict(types=types, negative_type_ids=sum(t < 0 for t in type_ids), scripts=scripts,
                externals=externals, stripped_counts=stripped_counts,
                nondefault_script_indexes=sum(n for i,n in script_indexes.items() if i != -1),
                metadata_bytes_consumed=r.p-20,
                user_information_nonempty=bool(user_information))


def resolve_stream(entry, path, names):
    relative = str(PurePosixPath(entry).parent/PurePosixPath(path))
    if path in names:
        return path
    if relative in names:
        return relative
    base = PurePosixPath(path).name
    matches = [n for n in names if PurePosixPath(n).name == base]
    if len(matches) == 1:
        return matches[0]
    raise ValueError('Resource stream cannot be resolved uniquely')


def audit(apk, inventory):
    assert sha(apk) == EXPECTED_APK
    inventory_sha = sha(inventory)
    reader_sha = sha(ROOT/'tools/unity15_metadata.py')
    private = json.loads(inventory.read_text(encoding='utf-8-sig'))
    assert not private['errors']
    table_counts = Counter()
    classes = Counter()
    statuses = Counter()
    versions = Counter()
    stripped = Counter()
    stream_objects = 0
    placeholders = 0
    all_objects = 0
    with zipfile.ZipFile(apk) as archive:
        infos = {i.filename: i for i in archive.infolist()}
        assert len(infos) == 1218
        for file in private['files']:
            entry, document = file['entry'], file['metadata']
            data = archive.read(entry)
            checked = table_audit(data, document)
            for key in ('types','negative_type_ids','scripts','externals','nondefault_script_indexes','metadata_bytes_consumed','user_information_nonempty'):
                table_counts[key] += checked[key]
            stripped.update(checked['stripped_counts'])
            versions[document['unity_version']] += 1
            for obj in document['objects']:
                all_objects += 1
                classes[obj['class_name']] += 1
                statuses[obj['metadata_status']] += 1
                assert obj['metadata_status'] != 'body-metadata-unsupported'
                if obj['class_id'] == 28 and obj['width'] == obj['height'] == obj['image_count'] == 0:
                    assert obj['original_image_bytes'] == 0
                    assert obj.get('inline_payload_bytes', 0) == 0
                    assert obj.get('stream', {}).get('size', 0) == 0
                    placeholders += 1
                if obj.get('stream', {}).get('path'):
                    stream = obj['stream']
                    resolved = resolve_stream(entry, stream['path'], infos)
                    assert 0 <= stream['offset'] <= stream['offset']+stream['size'] <= infos[resolved].file_size
                    stream_objects += 1
    assert sha(apk) == EXPECTED_APK and sha(inventory) == inventory_sha
    assert sha(ROOT/'tools/unity15_metadata.py') == reader_sha
    return dict(operation='independent-Unity15-metadata-and-stream-extent-audit',
        apk_sha256=EXPECTED_APK, private_inventory_sha256=inventory_sha,
        reader_sha256=reader_sha,
        auditor_sha256=sha(Path(__file__).resolve()),
        serialized_files=len(private['files']), objects=all_objects, classes=dict(classes),
        metadata_statuses=dict(statuses), versions=dict(versions), table_counts=dict(table_counts),
        stripped_byte_counts=dict(stripped), streamed_resource_extents_checked=stream_objects,
        empty_texture_placeholders=placeholders, metadata_trailers_exact=True,
        object_extents_match_inventory=True, stream_extent_errors=0,
        encrypted_payloads_decoded=False, asset_payloads_exported=False,
        resource_identifiers_emitted=False, target_executed=False,
        status='PASS',
        limitations=['This audit does not enumerate images inside opaque TextAssets.',
                     'Zero-sized serialized textures do not bound runtime font atlas growth.',
                     'Header/table validation does not validate shader, mesh, scene or font payload semantics.'])


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apk', required=True, type=Path)
    parser.add_argument('--inventory', type=Path, default=ROOT/'assets/inventory/unity-objects.json')
    parser.add_argument('--output', type=Path, default=ROOT/'config/unity-metadata-audit.json')
    args = parser.parse_args()
    report = audit(args.apk.resolve(), args.inventory.resolve())
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(report, indent=2, sort_keys=True)+'\n', encoding='utf-8', newline='\n')
    print(json.dumps({k: report[k] for k in ('status','serialized_files','objects','streamed_resource_extents_checked','empty_texture_placeholders')}))


if __name__ == '__main__':
    main()
