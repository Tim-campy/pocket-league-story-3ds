"""Derive Phase2 ledgers from hash-bound receipts; never invent game coverage."""
from collections import Counter
import csv
import hashlib
import json
import re
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
EXPECTED = 'd557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8'
REFERENCE = 'c7d097a847ca1f1a8e5fb7141ff11d338f5915c4'
csv.field_size_limit(2_000_000)


class EvidencePending(ValueError):
    """A producer is changing its inputs; keep the last complete publication."""


def sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def load(path):
    return json.loads((ROOT/path).read_text(encoding='utf-8-sig'))


def expect_hash(path, expected):
    path = Path(path)
    if not path.is_file() or sha(path) != expected:
        raise EvidencePending('Stale or missing Phase2 evidence: '+str(path))


ALIASES = dict(zip(
    ['bool','byte','sbyte','char','short','ushort','int','uint','long','ulong','float','double','decimal','string','object','void','nint','nuint'],
    ['System.Boolean','System.Byte','System.SByte','System.Char','System.Int16','System.UInt16','System.Int32','System.UInt32','System.Int64','System.UInt64','System.Single','System.Double','System.Decimal','System.String','System.Object','System.Void','System.IntPtr','System.UIntPtr']))


def split_signature_types(text):
    if not text:return []
    result=[];start=0;stack=[]
    for index,char in enumerate(text):
        if char in '<{[':stack.append(char)
        elif char in '>}]':
            if not stack or '<{['['>}]'.index(char)]!=stack.pop():raise ValueError('Unbalanced type signature')
        elif char==',' and not stack:result.append(text[start:index]);start=index+1
    if stack:raise ValueError('Unbalanced type signature')
    result.append(text[start:])
    return result


def canonical_type(text):
    text=text.strip().replace('global::','').replace('+','.').replace('{','<').replace('}','>')
    byref=False
    for prefix in ['ref ','out ','in ']:
        if text.startswith(prefix):text=text[len(prefix):];byref=True;break
    text=re.sub(r'\s+','',text).replace('native-int','System.IntPtr').replace('native-uint','System.UIntPtr')
    if text.endswith('@'):text=text[:-1]+'&'
    if byref:text+='&'
    if '?' in text:raise ValueError('Nullable annotations require type-category evidence')
    text=re.sub(r'(?<![\w.@])(?:'+'|'.join(ALIASES)+r')(?![\w])',lambda m:ALIASES[m.group()],text)
    # Keep the full generic argument list. Removing an arity marker never turns
    # matching into a mere count/name comparison; unmatched shapes stay UNKNOWN.
    if re.search(r'`[0-9]+\.',text):raise ValueError('Nested open generic declaration requires explicit type binding')
    for arity in re.finditer(r'`([0-9]+)(?=<)',text):
        opening=arity.end();depth=0;closing=None
        for index in range(opening,len(text)):
            if text[index]=='<':depth+=1
            elif text[index]=='>':
                depth-=1
                if depth==0:closing=index;break
        if closing is None or len(split_signature_types(text[opening+1:closing]))!=int(arity.group(1)):raise ValueError('Generic arity and argument list disagree')
    text=re.sub(r'(?<!`)`[0-9]+(?=<)','',text)
    if '`' in text:raise ValueError('Open generic parameter identity is not bound')
    split_signature_types(text)
    if not text:raise ValueError('Empty type signature')
    return text


def il_method_key(identifier):
    match=re.fullmatch(r'Assembly-CSharp::(.+)::([^(:]+)\((.*)\)->(.+)',identifier)
    if not match:raise ValueError('Unknown original method identity format')
    owner,name,parameters,result=match.groups()
    return canonical_type(owner),name,tuple(canonical_type(p) for p in split_signature_types(parameters)),canonical_type(result)


def emitted_method_key(row):
    name=row['name']
    if row.get('is_constructor') or row.get('kind')=='Constructor':name='.ctor'
    elif row.get('kind')=='StaticConstructor':name='.cctor'
    parameters=[canonical_type(p['type']) for p in row['parameters']]
    # Roslyn documentation IDs preserve a byref marker even when display type
    # metadata lacks RefKind. Require agreement of every underlying type first.
    doc=row['id'];opening=doc.find('(')
    if opening>=0:
        closing=doc.rfind(')')
        documented=split_signature_types(doc[opening+1:closing])
        if len(documented)!=len(parameters):raise ValueError('DocID and parameter metadata disagree')
        for index,item in enumerate(documented):
            normalized=canonical_type(item)
            if normalized.endswith('&'):
                if parameters[index]!=normalized[:-1]:raise ValueError('Byref display type disagrees with DocID')
                parameters[index]=normalized
            elif parameters[index]!=normalized:raise ValueError('Display type disagrees with DocID')
    elif parameters:raise ValueError('DocID omits parameters')
    result='System.Void' if name in ('.ctor','.cctor') else canonical_type(row['return_type'])
    return canonical_type(row['containing_type']),name,tuple(parameters),result


def map_game_identities(emitted,ledger):
    index={};unknown=[]
    for row in ledger:
        try:key=il_method_key(row['id'])
        except ValueError:continue
        index.setdefault(key,[]).append(row['id'])
    proposals={}
    for row in emitted:
        try:key=emitted_method_key(row)
        except ValueError as error:unknown.append(dict(doc_id=row['id'],reason=str(error),candidate_ids=[]));continue
        candidates=index.get(key,[])
        if len(candidates)!=1:
            unknown.append(dict(doc_id=row['id'],reason='UNKNOWN: no unique complete original signature',candidate_ids=candidates));continue
        proposals.setdefault(candidates[0],[]).append(row['id'])
    mapped={}
    for original,docs in proposals.items():
        if len(docs)==1:mapped[original]=docs[0]
        else:
            for doc in docs:unknown.append(dict(doc_id=doc,reason='UNKNOWN: multiple emitted identities map to one original',candidate_ids=[original]))
    return mapped,unknown


def validate_emission(emitted,assembly):
    if emitted['assembly']!=assembly or emitted['reference_commit']!=REFERENCE:raise ValueError('Assembly/reference identity differs')
    for row in emitted['source_manifest']:expect_hash(ROOT/'reference'/row['path'],row['sha256'])
    for row in emitted.get('platform_adapter_sources',[]):expect_hash(ROOT/row['path'],row['sha256'])
    for row in emitted['generated_files']:expect_hash(ROOT/row['path'],row['sha256'])
    producer=emitted['producer']
    expect_hash(ROOT/'translator/Translator.cs',producer['translator_source_sha256'])
    expect_hash(ROOT/'translator/translate.py',producer['driver_sha256'])
    if 'bootstrap_generator_sha256'in producer:expect_hash(ROOT/'translator/bootstrap_source.py',producer['bootstrap_generator_sha256'])
    sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
    from inventory import compiler_paths
    csc,dotnet,_=compiler_paths();expect_hash(csc,producer['compiler_sha256']);expect_hash(dotnet,producer['runtime_sha256'])
    request=load('build/translator/'+assembly+'-input.json')
    references={Path(p).name:Path(p) for p in request['references']}
    for row in emitted['reference_metadata']:expect_hash(references[row['filename']],row['sha256'])
    methods={r['id']:r for r in emitted['emitted_methods']}
    if len(methods)!=emitted['emitted_method_count']:raise ValueError('Emission identity count differs')
    if not emitted['compiled']:return methods,set()
    proof=emitted.get('compile_evidence')
    if not proof:raise EvidencePending(assembly+' lacks compiler/object/input-bound compilation proof')
    expect_hash(proof['compiler']['path'],proof['compiler']['sha256'])
    expect_hash(ROOT/proof['object']['path'],proof['object']['sha256'])
    validate_inputs(proof)
    if '/c' not in proof['command'] or '/fp:strict' not in proof['command']:raise ValueError('Unexpected native compilation contract')
    for row in emitted['generated_files']:
        if proof['inputs'].get(row['path'])!=row['sha256']:raise ValueError('Compilation does not bind every generated source/header')
    if emitted['compiled_method_count']!=len(methods):raise ValueError('Compiled method count differs')
    return methods,set(methods)


def game_evidence(ledger):
    path=ROOT/'config/phase2-game-translation.json'
    if not path.exists():return {},[],dict(emitted=0,compiled=0,source_declarations=None,requested=0,syntax_kinds=[])
    report=load('config/phase2-game-translation.json');methods,compiled=validate_emission(report,'Assembly-CSharp')
    if report.get('game_executed_methods',0) or report.get('executed_methods',0):raise ValueError('Game execution requires boot-specific proof, currently absent')
    mapped,unmapped=map_game_identities([methods[i] for i in sorted(compiled)],ledger)
    source_declarations=None
    diagnostic_path=ROOT/'config/phase2-game-diagnostics.json'
    if diagnostic_path.exists():
        diagnostic=load('config/phase2-game-diagnostics.json')
        # Combined translation also binds Kairo helpers; the declaration census
        # describes only Game source and retains its own complete input hashes.
        original_manifest={r['path']:r['sha256'] for r in report['source_manifest'] if r['path'].startswith('src/Assembly-CSharp/')}
        measured_manifest={r['path']:r['sha256'] for r in diagnostic['source_manifest'] if r['path'].startswith('src/Assembly-CSharp/')}
        if measured_manifest==original_manifest:source_declarations=diagnostic['source_method_declarations']
    return mapped,unmapped,dict(emitted=len(methods),compiled=len(compiled),source_declarations=source_declarations,requested=report['requested_methods'],syntax_kinds=list(report['emitted_kind_occurrences']))


def validate_inputs(report):
    inputs = report.get('inputs', report.get('inputs_sha256', report.get('sources', {})))
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
    methods,compiled=validate_emission(emitted,'KairoLibrary')
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
    roots = {i for i,r in methods.items() if r['root']}
    if len(roots) != emitted['root_methods_emitted']:
        raise ValueError('Root method count differs from identities')
    executed,verified = portable_verification_sets(differential,compiled)
    if differential.get('known_platform_differences'):
        math=load('config/phase2-android-math.json')
        expect_hash(ROOT/'tools/inspect_android_math.py',math['producer_sha256'])
        if math['status']!='PASS' or math['apk_sha256']!=EXPECTED or len(math['variants'])!=2 or math['android_negative_zero_result']!='UNKNOWN':
            raise ValueError('Signed-zero platform discrepancy lacks static provenance')
    if any(emitted.get(k,0) for k in ['game_translated_methods','game_compiled_methods','game_executed_methods']):
        raise ValueError('This progress updater has no evidence for game-method promotion')
    return emitted,differential,methods,roots,compiled,executed,verified


def portable_verification_sets(differential,compiled):
    executed=set(differential['executed_method_ids'])
    if len(executed)!=len(differential['executed_method_ids']) or len(executed)!=differential['methods'] or not executed<=compiled:
        raise ValueError('Executed method identity count differs')
    failures=differential['failures'];failed={row['method'] for row in failures}
    if not failed<=executed or len({row['case'] for row in failures})!=len(failures):
        raise ValueError('Failure identities are not unique executed cases')
    if differential['passed']!=differential['cases']-len(failures):
        raise ValueError('Differential case accounting differs')
    known=differential.get('known_platform_differences',[])
    if differential.get('unexpected_failures') or {(r['method'],r['case']) for r in known}!={(r['method'],r['case']) for r in failures}:
        raise ValueError('Unexplained portable differential failures')
    if any(row['method']!='M:java.lang.JMath.Sin(System.Double)' for row in known):
        raise ValueError('Unreviewed platform difference')
    verified=set(differential.get('verified_method_ids',executed-failed))
    if verified!=executed-failed:raise ValueError('Nonmatching method cannot be promoted to verified')
    return executed,verified


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


def graphics_evidence(boundary_ids):
    path=ROOT/'config/phase2-graphics-tests.json'
    if not path.exists():return set(),None
    report=load('config/phase2-graphics-tests.json');validate_inputs(report)
    expect_hash(ROOT/'reference/src/KairoLibrary/kairo/unity/ui/Graphics.cs',report['original_source_sha256'])
    for path,digest in report.get('original_sources',{}).items():expect_hash(ROOT/path,digest)
    for path,digest in report.get('oracle_artifacts',{}).items():expect_hash(ROOT/path,digest)
    expect_hash(ROOT/'assets/converted/catalog.idx',report['catalog_sha256'])
    expect_hash(ROOT/'build/pc/graphics_api_test.exe',report['executable_sha256'])
    expect_hash(ROOT/'build/graphics-tests/GraphicsOracle.cs',report['oracle_sha256'])
    native=(ROOT/'build/graphics-tests/native.log').read_text(encoding='utf-8-sig').replace('\r\n','\n').splitlines()
    trace='\n'.join(native[:-1])+'\n'
    if hashlib.sha256(trace.encode()).hexdigest()!=report['trace_sha256']:raise EvidencePending('Graphics native trace differs from receipt')
    if report['status']!='PASS' or report['source_oracle_cases']!=2*(len(native)-1):raise ValueError('Graphics oracle proof failed')
    verified=set(report['verified_source_ids'])
    if len(verified)!=len(report['verified_source_ids']):raise ValueError('Duplicate graphics source identity')
    if any(i.startswith('M:kairo.unity.ui.Font.') for i in verified) and 'reference/src/KairoLibrary/kairo/unity/ui/Font.cs' not in report.get('original_sources',{}):raise ValueError('Font method proof lacks original source identity')
    # A test may also verify a helper not referenced by the game. It remains a
    # proved helper but does not inflate the boundary denominator.
    return verified&boundary_ids,report


def media_evidence(manifest):
    if not (ROOT/'config/phase2-media-tests.json').exists():return None
    report=load('config/phase2-media-tests.json');validate_inputs(report)
    expect_hash(ROOT/'config/media-sdk.json',report['sdk_receipt_sha256'])
    sdk=load('config/media-sdk.json');expect_hash(ROOT/'tools/setup_media_deps.py',sdk['producer_sha256'])
    for row in sdk['files']:expect_hash(ROOT/row['path'],row['sha256'])
    expect_hash(ROOT/'assets/converted/manifest.json',report['manifest_sha256'])
    expect_hash(ROOT/'build/media-tests/media-fixtures.exe',report['native_executable_sha256'])
    expect_hash(ROOT/'build/media-tests/native.stdout',report['native_stdout_sha256'])
    if report['status']!='PASS' or report['apk_sha256']!=EXPECTED or report['game_boot'] or report['full_track_pcm_buffer_allocated']:raise ValueError('Media evidence contract differs')
    if report['fonts']!=len(manifest['fonts']) or report['vorbis_files']!=len(manifest['audio']):raise ValueError('Media fixture corpus differs from manifest')
    if len(report['ffmpeg_comparisons'])!=len(manifest['audio']) or not all(r['passed'] for r in report['ffmpeg_comparisons']):raise ValueError('Vorbis prefix differential is incomplete')
    return report


def baked_evidence():
    if not (ROOT/'config/baked-array-index.json').exists():return None
    report=load('config/baked-array-index.json')
    expect_hash(ROOT/'tools/inventory_baked_arrays.py',report['producer_sha256'])
    expect_hash(ROOT/'tools/BakedArrayInventory.cs',report['helper_sha256'])
    if report['apk_sha256']!=EXPECTED or report['original_assembly_executed'] or report['original_assembly_written']:raise ValueError('Baked payload provenance differs')
    from inventory_baked_arrays import load_verified_baked_manifest
    manifest=load_verified_baked_manifest(ROOT/'assets/baked',report['private_manifest_sha256'])
    if set(manifest)!={r['id'] for r in report['matched']}:raise ValueError('Baked payload identities differ')
    if report['scanner_self_test']['cases']!=report['scanner_self_test']['passed'] or report['manifest_integrity_test']['cases']!=report['manifest_integrity_test']['passed']:raise ValueError('Baked scanner/integrity test is incomplete')
    return report


def additional_platform_evidence(boundary_ids):
    ids=set();reports={}
    for area in ['storage','input','forms','forms-execution','sound','application-properties','application-orientation']:
        name='phase2-'+area+'-tests.json'
        if not (ROOT/'config'/name).exists():continue
        proof=load('config/'+name);validate_inputs(proof)
        for row in proof['source_manifest']:expect_hash(ROOT/'reference'/row['path'],row['sha256'])
        expect_hash(ROOT/proof['native_executable']['path'],proof['native_executable']['sha256'])
        if proof['status']!='PASS' or proof['game_boot'] or proof['fixture_cases']!=proof['passed'] or len(proof['cases'])!=proof['fixture_cases'] or not all(r['passed'] for r in proof['cases']):raise ValueError('Native '+area+' differential proof is incomplete')
        declared=set(proof['verified_boundary_ids'])
        if len(declared)!=len(proof['verified_boundary_ids']) or not declared<=boundary_ids:raise ValueError('Native '+area+' proof claims unknown or duplicate boundary IDs')
        if area=='storage':
            resource=proof['resource_readback'];expect_hash(ROOT/'assets/converted/catalog.idx',resource['catalog_sha256']);expect_hash(ROOT/'config/phase2-resource-catalog.json',resource['catalog_receipt_sha256'])
            if resource['apk_sha256']!=EXPECTED:raise ValueError('Storage resource proof belongs to another APK')
        ids|=declared;reports[name]=proof
    return ids,reports


FOUNDATION_RECEIPTS={
    'type-init-fixtures':'fixture_cases','exception-objects-fixtures':'fixture_cases',
    'runtime-encoding-fixtures':'fixture_cases','regex-fixtures':'fixture_cases','path-fixtures':'fixture_cases',
    'stream-reader-tests':'cases','mono-collation-tests':'cases','thread-tests':'cases',
    'globalization-tests':'cases','bootstrap-tests':'fixture_cases','asset-reader-tests':'fixture_cases',
    'string-ops-tests':'cases','image-lifetime-tests':'fixture_cases','ui-dispatch-gc-tests':'assertions',
    'stack-fixtures':'fixture_cases',
}

def foundation_evidence():
    reports={}
    for name,count_field in FOUNDATION_RECEIPTS.items():
        path=ROOT/('config/phase2-'+name+'.json')
        if not path.exists():continue
        proof=load(path.relative_to(ROOT));validate_inputs(proof)
        count=proof[count_field]
        if proof['status']!='PASS' or count!=proof['passed'] or count<=0:raise ValueError('Foundation proof incomplete: '+name)
        for key in ['native_executable','edge_native_executable','bmp_native_executable','gc_executable']:
            if proof.get(key):expect_hash(ROOT/proof[key]['path'],proof[key]['sha256'])
        reports[name]=dict(cases=count,passed=proof['passed'])
        if name=='mono-collation-tests':
            if proof['logical_table_payload_bytes']!=proof['official_resource_bytes']+proof['character_data_bytes']:
                raise ValueError('Collation table footprint accounting differs')
            reports[name].update(logical_table_payload_bytes=proof['logical_table_payload_bytes'],mit_resource_bytes=proof['official_resource_bytes'],lgpl_character_bytes=proof['character_data_bytes'])
    return reports


def culture_evidence():
    path=ROOT/'config/culture-usage.json'
    if not path.exists():return None
    proof=load(path.relative_to(ROOT))
    expect_hash(ROOT/'tools/inventory_culture.py',proof['producer_sha256'])
    expect_hash(ROOT/'tools/CultureInventory.cs',proof['helper_sha256'])
    for rows in proof['source_manifest'].values():
        for row in rows:expect_hash(ROOT/'reference'/row['path'],row['sha256'])
    if proof['semantic_errors'] or proof['unresolved_invocations'] or proof['self_test']['status']!='PASS' or proof['self_test']['classified_invocations']<=0:
        raise ValueError('Culture census is not completely bound')
    calls=proof['direct_calls']
    return dict(calls=len(calls),methods=len({r['caller'] for r in calls}),by_assembly=dict(Counter(r['assembly'] for r in calls)),
        by_operation=dict(Counter(r['operation'] for r in calls)),historical_ordinal_calls=len(proof['historical_ordinal_calls']),culture_assignments=len(proof['culture_assignments']))


def self_test_mapping():
    def row(doc,owner,name,parameters,result,constructor=False):
        return dict(id=doc,containing_type=owner,name=name,parameters=[dict(type=t) for t in parameters],return_type=result,is_constructor=constructor)
    def ledger(*identifiers):return [dict(id=i) for i in identifiers]
    prefix='Assembly-CSharp::fixture.Type::'
    tests=[]
    def check(name,emitted,originals,mapped_count,unknown_count):
        mapped,unknown=map_game_identities(emitted,originals)
        if len(mapped)!=mapped_count or len(unknown)!=unknown_count:raise AssertionError('Strict mapping fixture failed: '+name)
        tests.append(name)
    check('constructor-return-void',[row('M:fixture.Type.#ctor','fixture.Type','.ctor',[],'fixture.Type',True)],ledger(prefix+'.ctor()->System.Void'),1,0)
    check('same-arity-exact-parameter',[row('M:fixture.Type.F(System.String)','fixture.Type','F',['string'],'bool')],ledger(prefix+'F(System.Int32)->System.Boolean',prefix+'F(System.String)->System.Boolean'),1,0)
    check('return-is-part-of-identity',[row('M:fixture.Type.F(System.Int32)','fixture.Type','F',['int'],'long')],ledger(prefix+'F(System.Int32)->System.Int32'),0,1)
    check('nested-owner',[row('M:fixture.Outer.Inner.F','fixture.Outer.Inner','F',[],'void')],ledger('Assembly-CSharp::fixture.Outer+Inner::F()->System.Void'),1,0)
    check('generic-arguments',[row('M:fixture.Type.F(java.util.Vector{System.String})','fixture.Type','F',['java.util.Vector<string>'],'void')],ledger(prefix+'F(java.util.Vector`1<System.String>)->System.Void'),1,0)
    check('generic-argument-mismatch',[row('M:fixture.Type.F(java.util.Vector{System.String})','fixture.Type','F',['java.util.Vector<string>'],'void')],ledger(prefix+'F(java.util.Vector`1<System.Int32>)->System.Void'),0,1)
    check('ambiguous-original-normalization',[row('M:fixture.Type.F(System.Int32)','fixture.Type','F',['int'],'void')],ledger(prefix+'F(System.Int32)->System.Void',prefix+'F(int)->System.Void'),0,1)
    check('byref-marker',[row('M:fixture.Type.F(System.Int32@)','fixture.Type','F',['int'],'void')],ledger(prefix+'F(System.Int32&)->System.Void',prefix+'F(System.Int32)->System.Void'),1,0)
    item=row('M:fixture.Type.F(System.Int32)','fixture.Type','F',['int'],'void')
    check('duplicate-emitted-target',[item,dict(item,id='M:fixture.Type.Alias(System.Int32)')],ledger(prefix+'F(System.Int32)->System.Void'),0,2)
    check('invalid-generic-arity',[row('M:fixture.Type.F(java.util.Vector{System.String})','fixture.Type','F',['java.util.Vector`2<string>'],'void')],ledger(prefix+'F(java.util.Vector`1<System.String>)->System.Void'),0,1)
    return dict(operation='strict-game-method-identity-self-test',cases=len(tests),passed=len(tests),arity_only_matching=False)


def refresh():
    if not (ROOT/'config/phase2-translation.json').is_file():
        return None
    receipt_names=['phase2-translation.json','phase2-portable-differential.json','phase2-assets.json','phase2-image-tests.json','phase2-services-tests.json','phase2-legacy-assets.json','phase2-game-translation.json','phase2-graphics-tests.json','phase2-media-tests.json','baked-array-index.json','phase2-storage-tests.json','phase2-input-tests.json','phase2-forms-tests.json','phase2-sound-tests.json']
    receipt_names+=['phase2-'+name+'.json' for name in FOUNDATION_RECEIPTS]+['culture-usage.json','phase2-forms-execution-tests.json','phase2-application-properties-tests.json','phase2-application-orientation-tests.json','phase2-pc-metrics-tests.json','phase2-surface-bridge-tests.json']
    receipt_snapshot={name:sha(ROOT/'config'/name) for name in receipt_names if (ROOT/'config'/name).exists()}
    emitted,differential,methods,roots,compiled,executed,verified = translator_evidence()
    foundation=foundation_evidence();culture=culture_evidence()
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
    graphics_ids,graphics=graphics_evidence(boundary_ids)
    extra_ids,extra_proofs=additional_platform_evidence(boundary_ids)
    platform_ids=graphics_ids|extra_ids
    media=media_evidence(manifest)
    baked=baked_evidence()
    translation=read_csv('config/translation.csv')
    if len(translation)!=1958 or len({r['id'] for r in translation})!=1958:raise ValueError('Original game method ledger differs')
    game_mapped,game_unmapped,game_counts=game_evidence(translation)
    portable = {r['id'] for r in boundary if r['classificacao']=='portavel'}
    if len(portable) != emitted['requested_symbols'] or sum(i.startswith('M:') for i in portable) != emitted['requested_methods']:
        raise ValueError('Portable symbol/method request count differs from boundary')
    promoted = []
    for row in boundary:
        row['notas'] = row['notas'].split('; phase2:')[0]
        # Pure helpers implemented outside generated Kairo do not promote APIs.
        row['estado'] = row['backend_sdl'] = row['backend_ctr'] = 'todo'
        if row['classificacao'] == 'portavel' and row['id'] in compiled:
            row['estado'] = 'verified' if row['id'] in verified else 'implemented'
            row['backend_sdl'] = row['estado']
            row['notas'] += '; phase2: generated C++ compiled'+(' and source differential matched' if row['id'] in verified else ' and exercised with unresolved platform difference' if row['id'] in executed else '')+'; CTR not compiled; no game boot'
            promoted.append(row['id'])
        if row['id'] in platform_ids:
            row['estado']=row['backend_sdl']='verified'
            row['notas']+='; phase2: native SDL API matched original-source oracle; Android raster and game boot UNKNOWN; CTR not compiled'
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
            row['estado'] = 'loads' if media else 'extracts'
            row['formato_alvo'] = 'User TTF rasterized by FreeType on SDL; CTR pending' if media else 'Original embedded TTF; rasterization pending'
            row['notas'] += '; phase2: '+str(len(manifest['fonts']))+' TTF SHA256 checked; '+('all native rasterizers exercised; Android shape/hinting UNKNOWN; no game boot' if media else 'rasterizer not proved')
        elif row['tipo'] == 'Unity/AudioClip' and len(manifest['audio']) == int(row['quantidade']):
            row['estado'] = 'loads' if media else 'converts'
            row['formato_alvo'] = 'Bounded streaming Vorbis on SDL; CTR pending' if media else 'Ogg Vorbis compressed; runtime streaming pending'
            row['notas'] += '; phase2: '+str(len(manifest['audio']))+' Ogg files SHA256 checked; '+('all native streams exercised; prefixes compared with FFmpeg; no whole-track PCM buffer; no game boot' if media else 'native streaming not proved')
    for row in translation:
        row['notas']=row['notas'].split('; phase2:')[0]
        row['estado']='todo'
        if row['id'] in game_mapped:
            row['estado']='translated'
            row['notas']+='; phase2: unique full-signature Roslyn DocID '+game_mapped[row['id']]+'; generated C++ object compiled with input/compiler hashes; not linked, run or verified in game'
    report = dict(operation='hash-validated-phase2-ledger-update',producer_sha256=sha(Path(__file__)),
        requested_portable_symbols=emitted['requested_symbols'],requested_root_methods=emitted['requested_methods'],
        emitted_methods=len(methods),emitted_root_methods=len(roots),emitted_dependency_methods=len(methods)-len(roots),
        compiled_methods=len(compiled),executed_methods=len(executed),differential_cases=differential['cases'],
        verified_methods=len(verified),differential_passed=differential['passed'],known_platform_differences=differential.get('known_platform_differences',[]),
        foundation=foundation,culture=culture,
        verified_boundary_ids=sorted((set(promoted)&verified)|platform_ids),implemented_boundary_ids=sorted(set(promoted)-verified-platform_ids),
        verified_portable_boundary_ids=sorted(set(promoted)&verified),verified_platform_boundary_ids=sorted(platform_ids),
        platform_proof_ids={name:proof['verified_boundary_ids'] for name,proof in extra_proofs.items()},
        emitted_root_ids_outside_boundary=sorted(roots-boundary_ids),
        game_translated_methods=len(game_mapped),game_compiled_methods=len(game_mapped),game_executed_methods=0,game_verified_methods=0,
        game_emitted_cpp_methods=game_counts['emitted'],game_compiled_cpp_methods=game_counts['compiled'],game_source_method_declarations=game_counts['source_declarations'],
        game_requested_method_identities=game_counts['requested'],
        game_identity_mapping='unique complete declaring-type/name/parameter-types/return-type; constructors return System.Void; no arity-only match',
        identity_mapping_self_test=self_test_mapping(),
        game_mapping_unknown=game_unmapped,game_original_ids_not_mapped=sorted(r['id'] for r in translation if r['id'] not in game_mapped),
        game_translation_states=dict(Counter(r['estado'] for r in translation)),
        service_contracts=len(load('config/service-overrides.json')['overrides']),service_native_assertions=services['policy_assertions'],
        service_integration='PENDING; no boundary promotion',
        rgba8_files=len(manifest['images']),rgba8_bytes=images['rgba8_bytes'],
        measured_syntax_kinds=len(read_csv('config/csharp-syntax.csv')),
        syntax_kinds_observed_in_emitted_bodies=sum(r['kind'] in set(emitted['emitted_kind_occurrences'])|set(game_counts['syntax_kinds']) for r in read_csv('config/csharp-syntax.csv')),
        portable_syntax_kinds_observed=sum(r['kind'] in emitted['emitted_kind_occurrences'] for r in read_csv('config/csharp-syntax.csv')),
        game_syntax_kinds_observed=sum(r['kind'] in game_counts['syntax_kinds'] for r in read_csv('config/csharp-syntax.csv')),
        texture_readback_peak_payload_bytes=images['peak_texture_payload_bytes'],
        ttf_files=len(manifest['fonts']),ogg_files=len(manifest['audio']),media_runtime_verified=bool(media),media_assertions=media['assertions'] if media else 0,
        font_cache_fixture_peak_bytes=media['max_font_cache_bytes'] if media else None,
        audio_decoder_block_bytes=media['decoder_pcm_block_bytes'] if media else None,audio_mixer_ring_bytes=media['mixer_ring_bytes'] if media else None,
        audio_mixer_scratch_bytes=media['mixer_scratch_bytes'] if media else None,audio_resampler_fixture_peak_bytes=media['resampler_peak_available_bytes'] if media else None,
        baked_numeric_arrays=len(baked['matched']) if baked else 0,baked_numeric_arrays_unknown=len(baked['unmatched']) if baked else 0,
        source_graphics_oracle_cases=graphics['source_oracle_cases'] if graphics else 0,game_boot=False,
        receipts=receipt_snapshot,
        boundary_states=dict(Counter(r['estado'] for r in boundary)),asset_states=dict(Counter(r['estado'] for r in assets)))
    # Publish only after every relevant hash and count check has succeeded.
    # A generator may have advanced while the asset corpus was being checked.
    validate_emission(emitted,'KairoLibrary')
    if (ROOT/'config/phase2-game-translation.json').exists():validate_emission(load('config/phase2-game-translation.json'),'Assembly-CSharp')
    for proof in [services,images,graphics,media,*extra_proofs.values()]:
        if proof:validate_inputs(proof)
    for name,digest in receipt_snapshot.items():expect_hash(ROOT/'config'/name,digest)
    write_csv('config/boundary.csv',boundary)
    write_csv('config/assets.csv',assets)
    write_csv('config/translation.csv',translation)
    (ROOT/'config/phase2-progress.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    return report


if __name__ == '__main__':
    if '--self-test' in sys.argv:print(json.dumps(self_test_mapping()))
    else:
        try:
            result = refresh()
            print(json.dumps({k:v for k,v in (result or {}).items() if k in ['emitted_methods','emitted_root_methods','compiled_methods','executed_methods','game_translated_methods','boundary_states','asset_states']}))
        except EvidencePending as error:
            print(json.dumps(dict(status='PENDING',reason=str(error),ledgers_published=False)))
