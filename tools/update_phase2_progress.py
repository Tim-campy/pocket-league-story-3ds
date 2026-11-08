"""Derive Phase2 ledgers from hash-bound receipts; never invent game coverage."""
from collections import Counter
import csv
import hashlib
import json
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
EXPECTED = 'd557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8'
REFERENCE = 'c7d097a847ca1f1a8e5fb7141ff11d338f5915c4'
csv.field_size_limit(2_000_000)


def sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def load(path):
    return json.loads((ROOT/path).read_text(encoding='utf-8-sig'))


def expect_hash(path, expected):
    path = Path(path)
    if not path.is_file() or sha(path) != expected:
        raise ValueError('Stale or missing Phase2 evidence: '+str(path))


def validate_inputs(report):
    inputs = report.get('inputs', report.get('sources', {}))
    if isinstance(inputs, dict):
        inputs = [dict(path=p,sha256=h) for p,h in inputs.items()]
    for row in inputs:
        expect_hash(ROOT/row['path'],row['sha256'])


def write_csv(name, rows):
    with (ROOT/name).open('w',encoding='utf-8',newline='') as f:
        writer = csv.DictWriter(f,fieldnames=list(rows[0]),lineterminator='\n')
        writer.writeheader()
        writer.writerows(rows)


def read_csv(name):
    with (ROOT/name).open(encoding='utf-8-sig',newline='') as f:
        return list(csv.DictReader(f))


def translator_evidence():
    emitted = load('config/phase2-translation.json')
    differential = load('config/phase2-portable-differential.json')
    commit = subprocess.check_output(['git','-C',str(ROOT/'reference'),'rev-parse','HEAD'],text=True).strip()
    if commit != REFERENCE or emitted['reference_commit'] != commit:
        raise ValueError('Reference commit differs from Phase2 evidence')
    for row in emitted['source_manifest']:
        expect_hash(ROOT/'reference'/row['path'],row['sha256'])
    for row in emitted['generated_files']:
        expect_hash(ROOT/row['path'],row['sha256'])
    producer = emitted['producer']
    expect_hash(ROOT/'translator/Translator.cs',producer['translator_source_sha256'])
    expect_hash(ROOT/'translator/translate.py',producer['driver_sha256'])
    sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
    from inventory import compiler_paths
    csc,dotnet,_ = compiler_paths()
    expect_hash(csc,producer['compiler_sha256'])
    expect_hash(dotnet,producer['runtime_sha256'])
    # References are external read-only files, not copied into this repository.
    request = load('build/translator/KairoLibrary-input.json')
    references = {Path(p).name:Path(p) for p in request['references']}
    for row in emitted['reference_metadata']:
        expect_hash(references[row['filename']],row['sha256'])
    cpp = ROOT/'src/kairo/common/generated/portable_generated.cpp'
    expect_hash(cpp,differential['cpp_generated_sha256'])
    expect_hash(ROOT/'build/translator/KairoLibrary-source-oracle.cs',differential['source_oracle_sha256'])
    validate_inputs(differential)
    expect_hash(ROOT/'translator/test_portable.py',differential['differential_runner_sha256'])
    expect_hash(ROOT/'src/kairo/common/generated/portable_generated.hpp',differential['hpp_generated_sha256'])
    for item in differential['runtime_sources']:
        expect_hash(ROOT/item['path'],item['sha256'])
    for item in [differential['native_executable'],differential['source_oracle_executable']]:
        expect_hash(ROOT/item['path'],item['sha256'])
    sys.path.insert(0,str(ROOT/'tools'))
    from pc_compiler import VS
    expect_hash(VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe',differential['native_compiler_sha256'])
    methods = {r['id']:r for r in emitted['emitted_methods']}
    if len(methods) != emitted['emitted_method_count']:
        raise ValueError('Duplicate or inconsistent emitted method identities')
    roots = {i for i,r in methods.items() if r['root']}
    if len(roots) != emitted['root_methods_emitted']:
        raise ValueError('Root method count differs from identities')
    compiled = set(methods) if emitted['compiled'] else set()
    if len(compiled) != emitted['compiled_method_count']:
        raise ValueError('Compiled count differs from compiled emission receipt')
    executed = set(differential['executed_method_ids'])
    if differential['failures'] or differential['passed'] != differential['cases'] or not executed <= compiled:
        raise ValueError('Portable differential receipt does not prove all claimed identities')
    if len(executed) != differential['methods']:
        raise ValueError('Executed method identity count differs')
    if any(emitted.get(k,0) for k in ['game_translated_methods','game_compiled_methods','game_executed_methods']):
        raise ValueError('This progress updater has no evidence for game-method promotion')
    return emitted,differential,methods,roots,compiled,executed


def asset_evidence():
    converted = load('config/phase2-assets.json')
    expect_hash(ROOT/'tools/convert_assets.py',converted['producer_sha256'])
    expect_hash(ROOT/'assets/inventory/asset-details.json',converted['private_inventory_sha256'])
    manifest_path = ROOT/'assets/converted/manifest.json'
    expect_hash(manifest_path,converted['manifest_sha256'])
    manifest = load('assets/converted/manifest.json')
    if converted['apk_sha256'] != EXPECTED or manifest['apk_sha256'] != EXPECTED:
        raise ValueError('Converted assets are not from the expected APK')
    if converted['rgba8_files'] != len(manifest['images']) or converted['ttf_files'] != len(manifest['fonts']) or converted['vorbis_files'] != len(manifest['audio']):
        raise ValueError('Converted counts differ from manifest')
    for category in ['images','fonts','audio']:
        for item in manifest[category]:
            path = (ROOT/'assets'/item['path']).resolve(strict=True)
            if not path.is_relative_to((ROOT/'assets').resolve()):
                raise ValueError('Asset manifest path escapes local assets')
            expect_hash(path,item['sha256'])
            if path.stat().st_size != item['bytes']:
                raise ValueError('Converted extent differs from manifest')
    images = load('config/phase2-image-tests.json')
    validate_inputs(images)
    expect_hash(manifest_path,images['manifest_sha256'])
    expect_hash(ROOT/'assets/converted/images.tsv',images['index_sha256'])
    expect_hash(ROOT/'build/pc/asset_roundtrip_test.exe',images['executable_sha256'])
    expect_hash(ROOT/'build/pc/image-readback.log',images['stdout_sha256'])
    if images['apk_sha256'] != EXPECTED or images['rgba8_files'] != len(manifest['images']) or images['rgba8_bytes'] != sum(i['bytes'] for i in manifest['images']):
        raise ValueError('Image native readback coverage differs from local manifest')
    details = load('assets/inventory/asset-details.json')
    if details['apk_sha256'] != EXPECTED:
        raise ValueError('Extracted assets belong to another APK')
    extracted = Counter()
    for member in details['game_members']:
        folder = hashlib.sha256(member['container'].encode()).hexdigest()[:16]
        path = (ROOT/'assets/extracted'/folder/member['name']).resolve(strict=True)
        if not path.is_relative_to((ROOT/'assets/extracted').resolve()):
            raise ValueError('Extracted member path escapes local output')
        expect_hash(path,member['sha256'])
        extracted[member['extension']] += 1
    return converted,manifest,images,extracted


def refresh():
    if not (ROOT/'config/phase2-translation.json').is_file():
        return None
    emitted,differential,methods,roots,compiled,executed = translator_evidence()
    converted,manifest,images,extracted = asset_evidence()
    legacy = load('config/phase2-legacy-assets.json')
    expect_hash(ROOT/'tools/inventory_legacy_assets.py',legacy['producer_sha256'])
    expect_hash(ROOT/'assets/inventory/asset-details.json',legacy['private_inventory_sha256'])
    if legacy['apk_sha256'] != EXPECTED or len(legacy['maps']) != 4 or len(legacy['csvs']) != 3 or not all(m['exact_extent'] and m['all_tile_ids_equal'] and m['entire_tail_equal'] for m in legacy['maps']):
        raise ValueError('Legacy asset binding proof differs')
    services = load('config/phase2-services-tests.json')
    validate_inputs(services)
    expect_hash(ROOT/'tools/test_services.py',services['producer_sha256'])
    expect_hash(ROOT/'config/service-overrides.json',services['policy_sha256'])
    expect_hash(ROOT/'build/services-tests/offline-services-tests.exe',services['native_binary_sha256'])
    if services['status'] != 'PASS' or services['integration_into_translated_game'] != 'PENDING':
        raise ValueError('Service evidence requires a separate integration promotion policy')
    boundary = read_csv('config/boundary.csv')
    boundary_ids = {r['id'] for r in boundary}
    portable = {r['id'] for r in boundary if r['classificacao']=='portavel'}
    if len(portable) != emitted['requested_symbols'] or sum(i.startswith('M:') for i in portable) != emitted['requested_methods']:
        raise ValueError('Portable symbol/method request count differs from boundary')
    promoted = []
    for row in boundary:
        row['notas'] = row['notas'].split('; phase2:')[0]
        # Pure helpers implemented outside generated Kairo do not promote APIs.
        row['estado'] = row['backend_sdl'] = row['backend_ctr'] = 'todo'
        if row['classificacao'] == 'portavel' and row['id'] in compiled:
            row['estado'] = 'verified' if row['id'] in executed else 'implemented'
            row['backend_sdl'] = row['estado']
            row['notas'] += '; phase2: generated C++ compiled'+(' and source differential executed' if row['id'] in executed else '')+'; CTR not compiled; no game boot'
            promoted.append(row['id'])
    assets = read_csv('config/assets.csv')
    for row in assets:
        row['notas'] = row['notas'].split('; phase2:')[0]
        row['estado'] = 'inventoried'
        if row['tipo'].startswith('Jar/') and extracted[row['formato_origem']] == int(row['quantidade']):
            row['estado'] = 'extracts'
            row['formato_alvo'] = 'Original data bytes; native consumer pending'
            row['notas'] += '; phase2: every extracted member SHA256 checked; data stays local'
        if row['tipo'] == 'Jar/.png':
            row['estado'] = 'loads'
            row['formato_alvo'] = 'Lossless RGBA8 on SDL; PICA200 conversion pending'
            row['notas'] += '; phase2: '+str(len(manifest['images']))+' unique hashes; all pixels verified by native SDL readback; no game boot'
        elif row['tipo'] == 'Unity/Font' and len(manifest['fonts']) == int(row['quantidade']):
            row['estado'] = 'extracts'
            row['formato_alvo'] = 'Original embedded TTF; rasterization pending'
            row['notas'] += '; phase2: '+str(len(manifest['fonts']))+' TTF SHA256 checked; no rasterizer yet'
        elif row['tipo'] == 'Unity/AudioClip' and len(manifest['audio']) == int(row['quantidade']):
            row['estado'] = 'converts'
            row['formato_alvo'] = 'Ogg Vorbis compressed; runtime streaming pending'
            row['notas'] += '; phase2: '+str(len(manifest['audio']))+' Ogg files SHA256 checked; no whole-PCM decode'
    report = dict(operation='hash-validated-phase2-ledger-update',producer_sha256=sha(Path(__file__)),
        requested_portable_symbols=emitted['requested_symbols'],requested_root_methods=emitted['requested_methods'],
        emitted_methods=len(methods),emitted_root_methods=len(roots),emitted_dependency_methods=len(methods)-len(roots),
        compiled_methods=len(compiled),executed_methods=len(executed),differential_cases=differential['cases'],
        verified_boundary_ids=sorted(set(promoted)&executed),implemented_boundary_ids=sorted(set(promoted)-executed),
        emitted_root_ids_outside_boundary=sorted(roots-boundary_ids),
        game_translated_methods=0,game_compiled_methods=0,game_executed_methods=0,
        service_contracts=len(load('config/service-overrides.json')['overrides']),service_native_assertions=services['policy_assertions'],
        service_integration='PENDING; no boundary promotion',
        rgba8_files=len(manifest['images']),rgba8_bytes=images['rgba8_bytes'],
        measured_syntax_kinds=len(read_csv('config/csharp-syntax.csv')),
        syntax_kinds_observed_in_emitted_bodies=sum(r['kind'] in emitted['emitted_kind_occurrences'] for r in read_csv('config/csharp-syntax.csv')),
        texture_readback_peak_payload_bytes=images['peak_texture_payload_bytes'],
        ttf_files=len(manifest['fonts']),ogg_files=len(manifest['audio']),game_boot=False,
        receipts={name:sha(ROOT/'config'/name) for name in ['phase2-translation.json','phase2-portable-differential.json','phase2-assets.json','phase2-image-tests.json','phase2-services-tests.json','phase2-legacy-assets.json']},
        boundary_states=dict(Counter(r['estado'] for r in boundary)),asset_states=dict(Counter(r['estado'] for r in assets)))
    # Publish only after every relevant hash and count check has succeeded.
    write_csv('config/boundary.csv',boundary)
    write_csv('config/assets.csv',assets)
    (ROOT/'config/phase2-progress.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    return report


if __name__ == '__main__':
    result = refresh()
    print(json.dumps({k:v for k,v in (result or {}).items() if k in ['emitted_methods','emitted_root_methods','compiled_methods','executed_methods','boundary_states','asset_states']}))
