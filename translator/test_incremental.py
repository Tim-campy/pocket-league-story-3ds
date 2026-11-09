"""Real C# body edit: exact generated dirty set, Ninja deps and native output."""
import hashlib,json,os,shutil,subprocess,sys,time
from pathlib import Path
from translate import ROOT,prepare,run
from generated_build import compile_objects
from pc_compiler import environment,audit_ninja_dependencies

def sha(path):return hashlib.sha256(Path(path).read_bytes()).hexdigest()
def main():
    folder,runtime,tool,producer=prepare();work=ROOT/'build/incremental-fixtures'/str(time.time_ns());output=work/'generated';output.mkdir(parents=True)
    fixture=ROOT/'tests/translator/IncrementalFixtures.cs';source=work/'Own.cs';source.write_bytes(fixture.read_bytes())
    core=Path.home()/'AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono/lib/mono/unity'
    request=dict(assembly='OwnIncremental',sources=[str(source)],references=[str(core/(name+'.dll'))for name in ['mscorlib','System','System.Core']],select_all_source_methods=True,output=str(output))
    req=work/'input.json';report_file=work/'report.json';req.write_text(json.dumps(request)+'\n',encoding='utf8')
    def generate():
        run([runtime,tool,req,report_file],work/'generate.log');report=json.loads(report_file.read_text())
        if report['rejected_methods']:raise ValueError('Own incremental graph rejected: '+str(report['rejected_methods']))
        return report
    def snapshot():return {p.name:dict(sha256=sha(p),mtime_ns=p.stat().st_mtime_ns)for p in output.iterdir()if p.suffix in ('.cpp','.hpp','.inc')}
    initial=generate();before=snapshot();generate();stable=snapshot()
    if before!=stable:raise ValueError('Identical regeneration modified generated content or timestamps')
    includes=[ROOT/'src/kairo/common',ROOT/'src/kairo/api',ROOT/'src',output]
    objects=work/'objects';first=compile_objects(output.glob('*.cpp'),objects,includes,jobs=2,log_name='initial')
    manifest=json.loads((output/'emission_units.json').read_text());target=next(row for row in manifest['units']if row['id']=='T:OwnIncremental.Data')
    # Alter exactly one own C# method, never readonly reference or generated C++.
    time.sleep(1.1);text=source.read_text();assert text.count('return 11;')==1
    source.write_text(text.replace('return 11;','return 12;'),encoding='utf8',newline='\n');generate();changed=snapshot()
    dirty=sorted(name for name in before if before[name]!=changed[name])
    if dirty!=[target['cpp']]:raise ValueError('Body-only edit invalidated unexpected generated files: '+str(dirty))
    second=compile_objects(output.glob('*.cpp'),objects,includes,jobs=2,log_name='body-edit')
    previous={row['source']:row['sha256']for row in first['objects']};changed_objects=[row for row in second['objects']if previous[row['source']]!=row['sha256']]
    if len(changed_objects)!=1 or Path(changed_objects[0]['source']).name!=target['cpp']:raise ValueError('Unexpected rebuilt object bytes')
    # Actual deps must include a concrete type reached through inherited fields.
    holder=next(row for row in manifest['units']if row['id']=='T:OwnIncremental.Probe')
    probe_obj=next(row for row in second['objects']if Path(row['source']).name==holder['cpp'])
    leaf=next(row for row in manifest['units']if row['id']=='T:OwnIncremental.Leaf')
    audit=audit_ninja_dependencies(objects,{Path(probe_obj['path']).name:output/leaf['header']},environment())
    semantic=ROOT/'build/pc/pls_semantics.lib'
    if not semantic.exists():raise RuntimeError('Prepare native fixtures using tools/build-pc --fixtures-only before this component test')
    method=next(row['cpp_name']for row in initial['emitted_methods']if row['id']=='M:OwnIncremental.Probe.Read')
    independent=next(row['cpp_name']for row in initial['emitted_methods']if row['id']=='M:OwnIncremental.Independent.Read')
    harness=work/'Own.cpp';harness.write_text('#include "portable_generated.hpp"\n#include <iostream>\nint main(){std::cout<<pls::generated::'+method+'()<<","<<pls::generated::'+independent+'()<<"\\n";}\n',encoding='utf8',newline='\n')
    env=environment();cl=shutil.which('cl.exe',path=env['PATH']);exe=work/'Own.exe'
    command=[cl,'/nologo','/std:c++17','/EHsc','/MD','/fp:strict','/utf-8','/Fe:'+str(exe),'/Fo'+str(work)+'/',*['/I'+str(p)for p in includes],harness,*[row['path']for row in second['objects']],semantic,'Advapi32.lib']
    response=work/'link.rsp';response.write_text(subprocess.list2cmdline(list(map(str,command[1:])))+'\n',encoding='utf8');run([cl,'@'+str(response)],work/'link.log',env)
    native=run([exe],work/'native.log',env).stdout.decode().strip()
    from inventory import compiler_paths
    csc,_,_=compiler_paths();oracle=work/'Own.exe.managed.exe';entry=work/'Entry.cs';entry.write_text('class Entry{static void Main(){System.Console.WriteLine(OwnIncremental.Probe.Read()+","+OwnIncremental.Independent.Read());}}',encoding='utf8')
    run([csc,'/nologo','/nostdlib+','/out:'+str(oracle),'/r:'+str(core/'mscorlib.dll'),source,entry],work/'oracle-compile.log')
    expected=run([core.parents[2]/'bin/mono.exe',oracle],work/'oracle.log',dict(os.environ,MONO_PATH=str(core))).stdout.decode().strip()
    if native!=expected or native!='15,27':raise ValueError('Incremental native/source behavior differs')
    result=dict(operation='per-type-incremental-emitter-fixtures',status='PASS',producer=producer,fixture_sha256=sha(fixture),runner_sha256=sha(Path(__file__)),stable_regeneration=True,changed_cpp=dirty,changed_headers=[],changed_objects=1,native_source_output_equal=True,dependency_audit=audit,initial_build=first,body_edit_build=second,native_executable_sha256=sha(exe),runtime_library_sha256=sha(semantic),verified_boundary_ids=[],game_executed=False)
    (ROOT/'config/phase2-incremental-emission-fixtures.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf8',newline='\n')
    print(json.dumps(dict(status='PASS',units=len(manifest['units']),dirty_cpp=dirty,changed_objects=1,source_output=expected)))
if __name__=='__main__':main()
