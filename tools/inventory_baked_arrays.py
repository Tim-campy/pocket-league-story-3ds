"""Read own APK FieldRVA and literal IL in memory; prepare private numeric arrays.

The IL scanner accepts primitive one-dimensional newarr with constant length,
constant dup/index/value/stelem initializers (including neg/conversions), or a
verified RuntimeHelpers.InitializeArray FieldRVA. Unknown syntax/control entry
is diagnosed and refused. Source constants select a payload only after exact
equality; emitted bytes always come from the original's verified array data.
No original assembly is executed or written into this repository. The public
index contains identifiers, shape and provenance, never numeric payloads.
"""
import argparse
import hashlib
import json
import re
from pathlib import Path
import subprocess
import sys
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths


def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()


def load_verified_baked_manifest(payload_root, expected_manifest_sha256):
    """Authenticate the private manifest and every referenced local payload.

    The expected manifest hash comes from the public extraction receipt. Per
    payload hashes remain private, including the hashes of short key arrays.
    No hashes are learned from current payload files and promoted as original.
    """
    payload_root=Path(payload_root)
    manifest=payload_root/'manifest.json'
    if sha(manifest)!=expected_manifest_sha256:raise ValueError('Private baked manifest identity differs from extraction receipt')
    records=json.loads(manifest.read_text(encoding='utf-8'))
    if not isinstance(records,dict):raise ValueError('Invalid baked manifest structure')
    for identifier,digest in records.items():
        if not isinstance(identifier,str) or not re.fullmatch('[0-9a-f]{64}',identifier):raise ValueError('Invalid baked asset identifier')
        if not isinstance(digest,str) or not re.fullmatch('[0-9a-f]{64}',digest):raise ValueError('Invalid private baked payload digest')
        if sha(payload_root/(identifier+'.bytes'))!=digest:raise ValueError('Baked payload differs from authenticated original extraction')
    return records


def test_manifest_integrity(folder):
    """Own synthetic fixture only: accept original, reject both tamper routes."""
    fixture=folder/'integrity-fixture';fixture.mkdir(exist_ok=True)
    identifier=hashlib.sha256(b'own-baked-integrity-fixture').hexdigest()
    payload=fixture/(identifier+'.bytes');payload.write_bytes(b'own synthetic payload')
    original={identifier:sha(payload)}
    manifest=fixture/'manifest.json';manifest.write_text(json.dumps(original,sort_keys=True)+'\n',encoding='utf-8',newline='\n')
    expected=sha(manifest);load_verified_baked_manifest(fixture,expected)
    payload.write_bytes(b'altered synthetic payload')
    try:load_verified_baked_manifest(fixture,expected)
    except ValueError:pass
    else:raise AssertionError('Altered payload was accepted')
    manifest.write_text(json.dumps({identifier:sha(payload)},sort_keys=True)+'\n',encoding='utf-8',newline='\n')
    try:load_verified_baked_manifest(fixture,expected)
    except ValueError:pass
    else:raise AssertionError('Altered manifest blessed an altered payload')
    return dict(operation='own-private-manifest-integrity-fixture',cases=3,passed=3,original_binary_used=False)


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--apk',required=True,type=Path);p.add_argument('--original-managed',required=True,type=Path);args=p.parse_args()
    expected='d557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8'
    if sha(args.apk)!=expected:p.error('Expected authenticated local APK required')
    folder=ROOT/'build/baked-array-inventory';folder.mkdir(parents=True,exist_ok=True)
    csc,dotnet,framework=compiler_paths();target=folder/'BakedArrays.dll'
    refs=[framework/(n+'.dll') for n in ['System.Private.CoreLib','System.Runtime','System.Console','System.Linq','System.Collections','System.Text.Json',
        'System.Reflection.Metadata','System.Reflection.Primitives','System.Collections.Immutable','System.Memory','System.Security.Cryptography','System.IO.Compression','System.IO.Compression.ZipFile','netstandard']]
    refs += [csc.parent/n for n in ['Microsoft.CodeAnalysis.dll','Microsoft.CodeAnalysis.CSharp.dll']]
    options=['/nologo','/nostdlib+','/nullable:enable','/target:exe','/out:'+str(target)]+['/r:'+str(v) for v in refs]+[str(ROOT/'tools/BakedArrayInventory.cs')]
    rsp=folder/'compile.rsp';rsp.write_text('\n'.join('"'+v+'"' for v in options)+'\n',encoding='utf-8',newline='\n')
    def run(command,label):
        r=subprocess.run([str(v) for v in command],cwd=ROOT,capture_output=True);(folder/(label+'.log')).write_bytes(r.stdout+r.stderr)
        if r.returncode:raise RuntimeError('See '+str(folder/(label+'.log')))
    run([csc,'/noconfig','@'+str(rsp)],'compiler')
    import shutil
    for lib in refs[-2:]:shutil.copy2(lib,folder/lib.name)
    (folder/'BakedArrays.runtimeconfig.json').write_text(json.dumps(dict(runtimeOptions=dict(tfm='net10.0',framework=dict(name='Microsoft.NETCore.App',version='10.0.10')))),encoding='utf-8',newline='\n')
    run([dotnet,target,'--self-test'],'self-test')
    self_test=json.loads((folder/'self-test.log').read_text(encoding='utf-8-sig'))
    integrity_test=test_manifest_integrity(folder)
    source_order=(ROOT/'reference/config/compile-order/Assembly-CSharp.txt').read_text().splitlines()
    sources=[str(ROOT/'reference'/v) for v in source_order if v and not v.startswith('#')]
    managed=args.original_managed.resolve(strict=True)
    if managed.is_relative_to(ROOT):p.error('Original API binaries must remain outside the port')
    request=dict(apk=str(args.apk.resolve()),reference=str(ROOT/'reference'),sources=sources,
        references=[str(managed/n) for n in ['mscorlib.dll','KairoLibrary.dll','UnityEngine.dll','System.Core.dll','System.dll']],output=str(ROOT/'assets/baked'))
    input_path=folder/'input.json';input_path.write_text(json.dumps(request),encoding='utf-8',newline='\n')
    raw=folder/'result.json';run([dotnet,target,input_path,raw],'inventory')
    report=json.loads(raw.read_text(encoding='utf-8-sig'))
    manifest=load_verified_baked_manifest(ROOT/'assets/baked',report['private_manifest_sha256'])
    if set(manifest)!={r['id'] for r in report['matched']}:raise ValueError('Manifest IDs differ from verified extraction records')
    report.update(apk_sha256=expected,producer_sha256=sha(Path(__file__)),helper_sha256=sha(ROOT/'tools/BakedArrayInventory.cs'),
        literals_or_key_values_published=False,data_files_distributed=False,scanner_self_test=self_test,manifest_integrity_test=integrity_test)
    (ROOT/'config/baked-array-index.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(dict(rva_fields=report['rva_fields'],il_literal_arrays=report['il_literal_arrays'],matched_arrays=len(report['matched']),unmatched_arrays=len(report['unmatched']),original_assembly_written=False)))


if __name__=='__main__':main()
