"""Prove dynamic-array emission and constant-payload refusal using own inputs."""
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import sys
from translate import ROOT,prepare,run
sys.path.insert(0,str(ROOT/'tools'))
from pc_compiler import environment
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths

def sha(path):return hashlib.sha256(Path(path).read_bytes()).hexdigest()

def main():
    folder,runtime,tool,producer=prepare()
    work=folder/'content-fixtures';work.mkdir(exist_ok=True)
    original=ROOT/'tests/translator/BakedArrayFixtures.cs'
    fixture_root=work/'source';source=fixture_root/'src/Assembly-CSharp/BakedArrayFixtures.cs'
    source.parent.mkdir(parents=True,exist_ok=True);source.write_bytes(original.read_bytes())
    output=work/'generated';output.mkdir(exist_ok=True)
    csc,_,_=compiler_paths();unity=Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono')
    framework=unity/'lib/mono/unity'
    request=dict(assembly='Assembly-CSharp',sources=[str(source)],references=[str(framework/'mscorlib.dll')],source_root=str(fixture_root),output=str(output),selected=['M:BakedArrayFixtures.Dynamic(System.Int32)','M:BakedArrayFixtures.ConstantControl'])
    input_file=work/'request.json';raw=work/'report.json'
    input_file.write_text(json.dumps(request)+'\n',encoding='utf8',newline='\n')
    run([runtime,tool,input_file,raw],work/'translation.log')
    report=json.loads(raw.read_text())
    control=report['rejected_methods'].get('M:BakedArrayFixtures.ConstantControl',{})
    if 'baked-array proof' not in control.get('reason',''):raise RuntimeError('Constant control was not refused')
    methods=report['emitted_methods'];dynamic=next(m['cpp_name']for m in methods if m['id']=='M:BakedArrayFixtures.Dynamic(System.Int32)')
    field=next(f['cpp_accessor']for f in report['static_fields']if f['id']=='F:BakedArrayFixtures.trace')
    harness=work/'native.cpp'
    harness.write_text('#include <iostream>\n#include "game_generated.cpp"\nint main(){pls::cs::runtime_profile=pls::cs::RuntimeProfile::UnityMono265;for(std::int32_t seed:{0,1,-1,9,2147483647,(-2147483647-1)}){auto value=pls::game::'+dynamic+'(seed);std::cout<<value.at(0)<<","<<value.at(1)<<","<<value.at(2)<<"|"<<pls::game::'+field+'<<"\\n";}return 0;}\n',encoding='utf8',newline='\n')
    oracle=work/'source.exe';run([csc,'/nologo','/nostdlib+','/checked-','/out:'+str(oracle),'/r:'+str(framework/'mscorlib.dll'),original],work/'source-compile.log')
    env=environment();native=work/'native.exe'
    units=[ROOT/'src/kairo/common'/name for name in ['semantic_runtime.cpp','managed_streams.cpp','managed_exceptions.cpp','managed_thread.cpp','managed_collation.cpp','managed_mono_character_data.cpp','managed_encoding.cpp','managed_regex.cpp','managed_stream_reader.cpp']]
    command=[shutil.which('cl.exe',path=env['PATH']),'/nologo','/std:c++17','/EHsc','/fp:strict','/utf-8','/I'+str(output),'/I'+str(ROOT/'src'),'/I'+str(ROOT/'src/kairo/common'),'/I'+str(ROOT/'src/kairo/api'),'/I'+str(ROOT/'build/generated/mono-collation'),'/Fe:'+str(native),'/Fo'+str(work)+'/',harness,*units]
    run(command,work/'native-compile.log',env)
    expected=subprocess.check_output([str(unity/'bin/mono.exe'),str(oracle)],env=dict(env,MONO_PATH=str(framework)))
    actual=subprocess.check_output([str(native)],env=env)
    (work/'expected.stdout').write_bytes(expected);(work/'actual.stdout').write_bytes(actual)
    if expected.decode('utf-8-sig').splitlines()!=actual.decode('utf-8-sig').splitlines():raise RuntimeError('Dynamic initializer order/value mismatch')
    result=dict(operation='source-emitter-content-boundary-fixtures',status='PASS',cases=6,passed=6,constant_control_rejected=True,source_order='allocated before ordered stores; all stores execute left to right',original_binary_used=False,producer=producer,inputs=[dict(path=p.relative_to(ROOT).as_posix(),sha256=sha(p))for p in [original,Path(__file__),*units,*sorted((ROOT/'src/kairo/common').glob('*.hpp'))]],generated_files=[dict(path=p.relative_to(ROOT).as_posix(),sha256=sha(p))for p in output.glob('*.?pp')],native_executable=dict(path=native.relative_to(ROOT).as_posix(),sha256=sha(native)),source_executable=dict(path=oracle.relative_to(ROOT).as_posix(),sha256=sha(oracle)))
    (ROOT/'config/phase2-content-fixtures.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf8',newline='\n')
    print(json.dumps({key:result[key]for key in ['status','cases','passed','constant_control_rejected']}))

if __name__=='__main__':main()
