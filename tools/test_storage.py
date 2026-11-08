"""Differential-test original C# Storage/RecordStore bodies with synthetic saves.

The source oracle compiles the immutable reconstructed files as new test code,
using narrow OS/JNI facades in StorageOracle.cs. No original assembly, actual game
key, APK asset or user save is loaded. Platform preference serialization has a
separate native policy test; original Android PlayerPrefs serialization UNKNOWN.
"""
import argparse
import hashlib
import json
from native_api_proof import storage_ids
import os
from pathlib import Path
import struct
import subprocess
import sys
import tempfile

from pc_compiler import VS,environment
sys.path.insert(0,str(Path(__file__).resolve().parent/'csharp_subset'))
from inventory import compiler_paths
ROOT=Path(__file__).resolve().parents[1]
REFERENCES=[
 'src/KairoLibrary/kairo/unity/io/Storage.cs',
 'src/KairoLibrary/kairo/unity/io/RecordStore.cs',
 'src/KairoLibrary/kairo/unity/io/RecordStoreListener.cs',
 'src/KairoLibrary/kairo/unity/util/CRC64.cs',
 'src/KairoLibrary/kairo/unity/util/Encrypter.cs',
 'src/KairoLibrary/kairo/unity/util/EncodeUtil.cs',
 'src/KairoLibrary/kairo/unity/util/IllegalFileException.cs',
]


def sha(path):return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def run(command,folder,name,env=None):
    result=subprocess.run([str(v) for v in command],cwd=ROOT,capture_output=True,env=env)
    (folder/(name+'.stdout')).write_bytes(result.stdout)
    (folder/(name+'.stderr')).write_bytes(result.stderr)
    if result.returncode:raise RuntimeError(name+' failed; inspect '+str(folder/(name+'.stdout')))
    return result.stdout.decode('utf-8-sig').replace('\r\n','\n').replace('\r','')


def synthetic_catalog(root):
    (root/'converted').mkdir(parents=True)
    payload=bytes([9,8,7]);(root/'payload.fixture').write_bytes(payload)
    def field(s):b=s.encode();return struct.pack('<I',len(b))+b
    data=b'PLSASV1\0'+b'd557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8'+struct.pack('<I',1)
    data+=bytes([1])+field('data/fixture')+field('payload.fixture')+struct.pack('<QII',len(payload),0,0)+hashlib.sha256(payload).digest()
    (root/'converted/catalog.idx').write_bytes(data)


def seed_preferences(root):
    root.mkdir()
    for name,tag,payload in [('player-preferences.port',201,bytes([0,255,7,0])),('byte-preferences.port',88,bytes(range(256)))]:
        key='future-opaque'.encode('utf-16le')
        data=b'PLSPREF1'+struct.pack('<II',1,len(key)//2)+key+bytes([tag])+struct.pack('<I',len(payload))+payload
        (root/name).write_bytes(data)


def entries(path):
    data=path.read_bytes();count=struct.unpack_from('<I',data,8)[0];p=12;values={}
    for _ in range(count):
        n=struct.unpack_from('<I',data,p)[0];p+=4;key=data[p:p+n*2];p+=n*2
        tag=data[p];p+=1;n=struct.unpack_from('<I',data,p)[0];p+=4;values[key]=(tag,data[p:p+n]);p+=n
    if p!=len(data):raise ValueError('Portable preference extent differs')
    return values


def main():
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--apk',type=Path);options=parser.parse_args()
    folder=ROOT/'build/storage-tests';folder.mkdir(parents=True,exist_ok=True)
    csc,dotnet,framework=compiler_paths()
    source=ROOT/'tests/kairo/StorageOracle.cs';original=[ROOT/'reference'/p for p in REFERENCES]
    oracle=folder/'StorageOracle.dll'
    args=['/nologo','/nostdlib+','/target:exe','/optimize+','/out:'+str(oracle)]
    args+=['/r:'+str(framework/(name+'.dll')) for name in ['System.Private.CoreLib','System.Runtime','System.Console','System.Linq','System.Collections']]
    args+=[str(source)]+[str(p) for p in original]
    rsp=folder/'oracle.rsp';rsp.write_text('\n'.join('"'+a+'"' for a in args)+'\n',encoding='utf-8',newline='\n')
    run([csc,'/noconfig','@'+str(rsp)],folder,'dotnet-compile')
    (folder/'StorageOracle.runtimeconfig.json').write_text(json.dumps(dict(runtimeOptions=dict(tfm='net10.0',framework=dict(name='Microsoft.NETCore.App',version='10.0.10')))),encoding='utf-8',newline='\n')
    unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))
    mono=unity/'Editor/Data/Mono/bin/mono.exe';smcs=unity/'Editor/Data/Mono/lib/mono/unity/smcs.exe'
    monoenv=dict(os.environ,MONO_PATH=str(smcs.parent),MONO_CFG_DIR=str(unity/'Editor/Data/Mono/etc'))
    old=folder/'StorageOracle-mono.exe'
    run([mono,smcs,'-nologo','-noconfig','-optimize+','-r:'+str(unity/'Editor/Data/Mono/lib/mono/2.0/System.Core.dll'),'-out:'+str(old),source,*original],folder,'mono-compile',monoenv)
    cpp_sources=[ROOT/p for p in ['tests/kairo/storage_fixtures.cpp','src/kairo/common/storage.cpp','src/kairo/common/asset_catalog.cpp','src/kairo/common/semantic_runtime.cpp','src/kairo/common/managed_collation.cpp','src/kairo/common/managed_mono_character_data.cpp']]
    cpp=folder/'storage-fixtures.exe';cl=VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe'
    run([cl,'/nologo','/std:c++17','/EHsc','/fp:strict','/permissive-','/W4','/WX','/O2','/utf-8','/I'+str(ROOT/'src/kairo/api'),'/I'+str(ROOT/'src/kairo/common'),'/I'+str(ROOT/'build/generated/mono-collation'),'/Fe:'+str(cpp),'/Fo:'+str(folder)+'\\',*cpp_sources],folder,'cpp-compile',environment())
    cases=[]
    with tempfile.TemporaryDirectory(prefix='run-',dir=folder) as temp:
        base=Path(temp);assets=base/'synthetic-catalog';synthetic_catalog(assets)
        for profile,command,env in [('dotnet',[dotnet,oracle],None),('mono',[mono,old],monoenv)]:
            left=base/(profile+'-oracle');left.mkdir()
            right=base/(profile+'-cpp');right.mkdir()
            expected=run([*command,left],folder,profile+'-oracle',env)
            actual=run([cpp,right,assets],folder,profile+'-cpp',environment())
            a,b=expected.splitlines(),actual.splitlines()
            if len(a)!=len(b):raise ValueError('Storage trace lengths differ')
            cases += [dict(profile=profile,case=x.split('=',1)[0],expected=x,actual=y,passed=x==y) for x,y in zip(a,b)]
        policy_root=base/'policy';seed_preferences(policy_root)
        old={name:entries(policy_root/name) for name in ['player-preferences.port','byte-preferences.port']}
        policy=json.loads(run([cpp,policy_root,'policy'],folder,'native-policy',environment()))
        for name,values in old.items():
            current=entries(policy_root/name)
            if any(current[k]!=v for k,v in values.items()):raise ValueError('Unknown portable preference entry was altered')
    resource_readback=None
    if options.apk:
        from inventory_assets import EXPECTED
        if sha(options.apk)!=EXPECTED:raise ValueError('Authenticated own APK required')
        resource_readback=json.loads(run([cpp,folder/'resource-preferences',ROOT/'assets','resources'],folder,'resource-readback',environment()))
        resource_readback['apk_sha256']=EXPECTED
        resource_readback['catalog_sha256']=sha(ROOT/'assets/converted/catalog.idx')
        resource_readback['catalog_receipt_sha256']=sha(ROOT/'config/phase2-resource-catalog.json')
    passed=all(r['passed'] for r in cases)
    inputs=cpp_sources+[source,ROOT/'src/kairo/api/storage.hpp',ROOT/'tools/test_storage.py',ROOT/'tools/native_api_proof.py',ROOT/'src/kairo/common/semantic_runtime.hpp',ROOT/'src/kairo/common/asset_catalog.hpp',ROOT/'src/kairo/common/sha256.hpp']
    inputs += [ROOT/'src/kairo/common/managed_collation.hpp',ROOT/'src/kairo/common/mono_collator_methods.inc',ROOT/'tools/generate_mono_collator.py',ROOT/'tools/setup_mono_collation.py']
    report=dict(verified_boundary_ids=storage_ids(),operation='original-source-storage-recordstore-differential',status='PASS' if passed else 'FAIL',cases=cases,
                fixture_cases=len(cases),passed=sum(r['passed'] for r in cases),native_platform_policy=policy,resource_readback=resource_readback,
                native_executable=dict(path=cpp.relative_to(ROOT).as_posix(),sha256=sha(cpp)),
                inputs={p.relative_to(ROOT).as_posix():sha(p) for p in inputs},
                source_manifest=[dict(path=p,sha256=sha(ROOT/'reference'/p)) for p in REFERENCES],
                original_binaries_used=False,actual_game_key_used=False,source_oracle_game_assets_used=False,
                game_assets_used=resource_readback is not None,user_saves_used=False,game_boot=False,
                original_PlayerPrefs_storage='UNKNOWN; native byte preference facade only',
                heap_name_comparison='Historical Mono CurrentCulture String.CompareTo; invariant culture in fixture, host default supplied separately',
                collation_tables={p.name:sha(p) for p in (ROOT/'build/generated/mono-collation').glob('*.inc')},
                filesystem_order='Unspecified; tested outcomes do not require cross-platform enumeration order')
    (ROOT/'config/phase2-storage-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(dict(status=report['status'],fixture_cases=report['fixture_cases'],passed=report['passed'])))
    for r in cases:
        if not r['passed']:print(json.dumps(r))
    return 0 if passed else 1


if __name__=='__main__':sys.exit(main())
