"""Verify raw TextAsset leaves and the original non-Android metrics branch.

No assets are needed for the source differential. --apk additionally compares
all private raw resources to their authenticated catalog, without printing IDs.
"""
import argparse
import hashlib
import json
import os
from pathlib import Path
import struct
import sys
from test_input import ROOT,sha,run,compile_modern
from pc_compiler import VS,environment
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths


def synthetic_catalog(root,resources=None):
 """Own fixture data only. A zero-entry catalog is an explicit empty oracle."""
 root=Path(root);(root/'converted').mkdir(parents=True,exist_ok=True)
 data=b'PLSASV1\0'+b'd557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8'
 resources=resources or {};data+=struct.pack('<I',len(resources))
 def field(s):b=s.encode();return struct.pack('<I',len(b))+b
 for i,(name,payload) in enumerate(resources.items()):
  filename='fixture-'+str(i)+'.payload';(root/filename).write_bytes(payload)
  data+=bytes([8])+field(name)+field(filename)+struct.pack('<QII',len(payload),0,0)+hashlib.sha256(payload).digest()
 (root/'converted/catalog.idx').write_bytes(data)


def main():
 parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--apk',type=Path);opts=parser.parse_args()
 folder=ROOT/'build/asset-reader-tests';folder.mkdir(parents=True,exist_ok=True)
 csc,dotnet,framework=compiler_paths();source=ROOT/'tests/kairo/DisplayMetricsOracle.cs'
 original=ROOT/'reference/src/KairoLibrary/kairo/unity/util/DisplayMetrics.cs';sources=[source,original]
 oracle=folder/'DisplayMetricsOracle.dll';compile_modern(sources,oracle,folder,'dotnet',csc,framework)
 unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))
 refs=unity/'Editor/Data/Mono/lib/mono/2.0';mono=unity/'Editor/Data/Mono/bin/mono.exe'
 env=dict(os.environ,MONO_PATH=str(refs),MONO_CFG_DIR=str(unity/'Editor/Data/Mono/etc'))
 old=folder/'DisplayMetricsOracle-mono.exe'
 args=['/nologo','/nostdlib+','/target:exe','/optimize+','/langversion:6','/out:'+str(old)]
 args+=['/r:'+str(refs/(p+'.dll')) for p in ['mscorlib','System','System.Core']]+[str(p) for p in sources]
 rsp=folder/'mono.rsp';rsp.write_text('\n'.join('"'+v+'"' for v in args)+'\n',encoding='utf-8',newline='\n')
 run([csc,'/noconfig','@'+str(rsp)],folder,'mono-compile')
 units=[ROOT/p for p in ['tests/kairo/asset_reader_fixtures.cpp','src/kairo/common/asset_reader.cpp','src/kairo/common/asset_catalog.cpp','src/kairo/common/managed_encoding.cpp','src/kairo/common/semantic_runtime.cpp']]
 cl=VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe';native=folder/'asset-reader-fixtures.exe'
 run([cl,'/nologo','/std:c++17','/EHsc','/MD','/fp:strict','/permissive-','/W4','/WX','/O2','/utf-8',
 '/I'+str(ROOT/'src/kairo/api'),'/I'+str(ROOT/'src/kairo/common'),'/Fe:'+str(native),'/Fo:'+str(folder)+'\\',*units],folder,'cpp-compile',environment())
 actual=run([native],folder,'native-run',environment());cases=[]
 for profile,command,env_ in [('dotnet',[dotnet,oracle],None),('mono',[mono,old],env)]:
  expected=run(command,folder,profile+'-run',env_);a,b=expected.splitlines(),actual.splitlines()
  if len(a)!=len(b):raise ValueError('DisplayMetrics trace lengths differ')
  cases += [dict(profile=profile,case=x.split('=',1)[0],expected=x,actual=y,passed=x==y) for x,y in zip(a,b)]
 synthetic=folder/'synthetic';synthetic_catalog(synthetic,{'data/filelist':b'fixture.bin\n','data/synthetic':bytes(range(256))})
 policy=json.loads(run([native,synthetic],folder,'synthetic-resources',environment()))
 real=None
 if opts.apk:
  from inventory_assets import EXPECTED
  if sha(opts.apk)!=EXPECTED:raise ValueError('Authenticated own APK is required')
  real=json.loads(run([native,ROOT/'assets'],folder,'private-resources',environment()))
  real.update(apk_sha256=EXPECTED,catalog_sha256=sha(ROOT/'assets/converted/catalog.idx'),catalog_producer_receipt_sha256=sha(ROOT/'config/phase2-resource-catalog.json'))
 passed=all(c['passed'] for c in cases)
 inputs=units+[source,ROOT/'tools/test_asset_reader.py',ROOT/'tools/test_input.py']
 inputs += [ROOT/'src/kairo/api'/p for p in ['asset_reader.hpp','display_metrics.hpp','application.hpp']]
 inputs += [ROOT/'src/kairo/common'/p for p in ['semantic_runtime.hpp','asset_catalog.hpp','sha256.hpp','managed_encoding.hpp']]
 report=dict(operation='raw-textasset-leaves-and-desktop-metrics',status='PASS' if passed else 'FAIL',fixture_cases=len(cases),passed=sum(c['passed'] for c in cases),cases=cases,
 verified_boundary_ids=[],native_resource_policy=policy,private_resource_readback=real,inputs={p.relative_to(ROOT).as_posix():sha(p) for p in inputs},
 source_manifest=[dict(path=original.relative_to(ROOT/'reference').as_posix(),sha256=sha(original))],
 native_executable=dict(path=native.relative_to(ROOT).as_posix(),sha256=sha(native)),
 game_assets_used=real is not None,original_binaries_executed=False,game_boot=False,
 limits=['Desktop metrics are compared against the unchanged original source; Android display/JNI and 3DS layout are not represented.',
 'TextAsset loader reads only raw kind8 and never decrypts; AssetReader.GetData, security, locale/DPI, Exist/filelist stay generated source.',
 'UTF8 text conversion is validated for the ASCII filelist consumed by this corpus; arbitrary Unity BOM/encoding rules are UNKNOWN.',
 'CPU unload releases no global engine state; post-unload engine object invalidation and Unity array aliasing are not verified.'])
 (ROOT/'config/phase2-asset-reader-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
 print(json.dumps(dict(status=report['status'],fixture_cases=len(cases),passed=report['passed'],raw_resources=None if real is None else real['raw_resources'],synthetic_assertions=policy['assertions'])))
 for c in cases:
  if not c['passed']:print(json.dumps(c))
 return 0 if passed else 1


if __name__=='__main__':sys.exit(main())
