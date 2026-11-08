"""Source-oracle SoundBase/SoundOGG/SoundPlayer tests with synthetic AudioSource.

No original DLL is executed. Actual Vorbis/SDL readback is an additional test;
the synthetic source oracle proves control, ports, states and observable bugs,
not the native timing/side effects of the proprietary Unity audio backend.
"""
import argparse
import hashlib
import json
import os
from pathlib import Path
import struct
import sys
import tempfile
from pc_compiler import VS,environment
from test_input import ROOT,sha,run,compile_modern
from native_api_proof import boundary_ids
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths


def catalog(root):
 (root/'converted').mkdir(parents=True)
 payload=b'Synthetic control-only clip; not audio.'
 (root/'payload.fixture').write_bytes(payload)
 def field(value):b=value.encode();return struct.pack('<I',len(b))+b
 result=b'PLSASV1\0'+b'd557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8'+struct.pack('<I',5)
 for name in 'abcde':
  result+=bytes([5])+field('fixture/'+name)+field('payload.fixture')+struct.pack('<QII',len(payload),0,0)+hashlib.sha256(payload).digest()
 (root/'converted/catalog.idx').write_bytes(result)


def main():
 options=argparse.ArgumentParser(description=__doc__);options.add_argument('--apk',type=Path);options=options.parse_args()
 folder=ROOT/'build/sound-tests';folder.mkdir(parents=True,exist_ok=True)
 csc,dotnet,framework=compiler_paths()
 originals=[ROOT/'reference/src/KairoLibrary/kairo/unity/ui'/p for p in ['SoundBase.cs','SoundOGG.cs','SoundPlayer.cs']]
 source=ROOT/'tests/kairo/SoundOracle.cs';sources=[source,*originals]
 oracle=folder/'SoundOracle.dll';compile_modern(sources,oracle,folder,'dotnet',csc,framework)
 unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))
 mono=unity/'Editor/Data/Mono/bin/mono.exe';refs=unity/'Editor/Data/Mono/lib/mono/2.0'
 env=dict(os.environ,MONO_PATH=str(refs),MONO_CFG_DIR=str(unity/'Editor/Data/Mono/etc'))
 old=folder/'SoundOracle-mono.exe'
 args=['/nologo','/noconfig','/nostdlib+','/target:exe','/optimize+','/langversion:6','/out:'+str(old)]
 args+=['/r:'+str(refs/(p+'.dll')) for p in ['mscorlib','System','System.Core']]+[str(p) for p in sources]
 rsp=folder/'mono.rsp';rsp.write_text('\n'.join('"'+v+'"' for v in args)+'\n',encoding='utf-8',newline='\n')
 # The sources require C#6. Roslyn targets Mono's historical reference profile;
 # the result executes on Mono2.6.5 instead of asking smcs to parse C#6.
 run([csc,'/noconfig','@'+str(rsp)],folder,'mono-compile')
 native_sources=[ROOT/p for p in ['tests/kairo/sound_fixtures.cpp','src/kairo/common/sound.cpp','src/kairo/common/semantic_runtime.cpp','src/kairo/common/asset_catalog.cpp','src/kairo/platform/sdl/audio.cpp']]
 native=folder/'sound-fixtures.exe';cl=VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe'
 sdk=ROOT/'build/deps/native-media';sdl=ROOT/'build/deps/SDL2-2.32.10'
 run([cl,'/nologo','/std:c++17','/EHsc','/MD','/fp:strict','/permissive-','/W4','/WX','/O2','/utf-8','/DSDL_MAIN_HANDLED',
      '/I'+str(ROOT/'src/kairo/api'),'/I'+str(ROOT/'src/kairo/common'),'/I'+str(sdl/'include'),'/I'+str(sdk/'include'),
      '/Fe:'+str(native),'/Fo:'+str(folder)+'\\',*native_sources,sdk/'lib/vorbisfile.lib',sdk/'lib/vorbis.lib',sdk/'lib/ogg.lib',sdl/'lib/x64/SDL2.lib'],folder,'cpp-compile',environment())
 # Existing development runtime, copied only to ignored build/ beside fixtures.
 (folder/'SDL2.dll').write_bytes((sdl/'lib/x64/SDL2.dll').read_bytes())
 with tempfile.TemporaryDirectory(prefix='synthetic-',dir=folder) as temporary:
  assets=Path(temporary);catalog(assets);actual=run([native,assets],folder,'native-run',environment())
 cases=[]
 for profile,command,env_ in [('dotnet',[dotnet,oracle],None),('mono',[mono,old],env)]:
  expected=run(command,folder,profile+'-run',env_);a,b=expected.splitlines(),actual.splitlines()
  if len(a)!=len(b):raise ValueError('Sound source/native trace lengths differ')
  cases += [dict(profile=profile,case=x.split('=',1)[0],expected=x,actual=y,passed=x==y) for x,y in zip(a,b)]
 streaming=None
 if options.apk:
  from inventory_assets import EXPECTED
  if sha(options.apk)!=EXPECTED:raise ValueError('Authenticated own APK required')
  native_env=environment();native_env.update(SDL_AUDIODRIVER='dummy',SDL_VIDEODRIVER='dummy')
  streaming=json.loads(run([native,ROOT/'assets','streaming'],folder,'native-streaming',native_env))
  streaming.update(apk_sha256=EXPECTED,catalog_sha256=sha(ROOT/'assets/converted/catalog.idx'),catalog_receipt_sha256=sha(ROOT/'config/phase2-resource-catalog.json'),sdk_receipt_sha256=sha(ROOT/'config/media-sdk.json'))
 passed=all(c['passed'] for c in cases)
 inputs=native_sources+[source,ROOT/'tools/test_sound.py',ROOT/'tools/test_input.py',ROOT/'tools/native_api_proof.py',ROOT/'src/kairo/api/sound.hpp',ROOT/'src/kairo/api/application.hpp',ROOT/'src/kairo/common/semantic_runtime.hpp',ROOT/'src/kairo/common/asset_catalog.hpp',ROOT/'src/kairo/common/sha256.hpp',ROOT/'src/kairo/platform/sdl/audio.hpp']
 report=dict(operation='original-source-SoundBase-OGG-Player-control-differential',status='PASS' if passed else 'FAIL',fixture_cases=len(cases),passed=sum(c['passed'] for c in cases),cases=cases,native_streaming=streaming,
  verified_boundary_ids=boundary_ids(owners={'kairo.unity.ui.SoundBase','kairo.unity.ui.SoundPlayer'}),
  inputs={p.relative_to(ROOT).as_posix():sha(p) for p in inputs},
  source_manifest=[dict(path=p.relative_to(ROOT/'reference').as_posix(),sha256=sha(p)) for p in originals],
  native_executable=dict(path=native.relative_to(ROOT).as_posix(),sha256=sha(native)),
  oracle_binaries=[dict(path=p.relative_to(ROOT).as_posix(),sha256=sha(p)) for p in [oracle,old]],
  native_compiler_sha256=sha(cl),source_compiler_sha256=sha(csc),
  limits=['Source oracle uses synthetic AudioSource/Resources, not Unity timing or decoder behavior.',
          'Native backend supports the original four ports; expanding beyond four explicitly rejects.',
          'StopAll stale-list hang after SetLoop(0) is preserved and observed without invoking the infinite loop.',
          'Multiple SoundPlayer.Init generations with still-playing one-shot Unity components are not reproduced by the four-voice backend.'],
  original_binaries_executed=False,source_oracle_game_assets_used=False,game_assets_used=streaming is not None,game_boot=False)
 (ROOT/'config/phase2-sound-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
 print(json.dumps(dict(status=report['status'],fixture_cases=len(cases),passed=report['passed'])))
 for c in cases:
  if not c['passed']:print(json.dumps(c))
 return 0 if passed else 1


if __name__=='__main__':sys.exit(main())
