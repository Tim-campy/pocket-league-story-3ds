"""Link four freshly generated variant types and compare all private ARM cases.

No generated C++ is edited. Identical declarations permit reuse of the other
authenticated objects. This is kernel evidence, not a full-game FP run.
"""
import argparse,hashlib,json,os,shutil,subprocess,sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2]
sys.path.insert(0,str(ROOT/'tools'))
from pc_compiler import CMAKE,NINJA,environment
UNITS=['1815a6964debf82a','2ffa6f51468590ea','403f4e6631bd3667','ca6f5bbc06a496a9']

def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()

def main():
    p=argparse.ArgumentParser(description=__doc__)
    for key in ['variant','snapshot','captures','android','output']:p.add_argument('--'+key,type=Path,required=True)
    a=p.parse_args();folder=a.output.resolve();variant=a.variant.resolve();base=ROOT/'build/null-pc-tracing';snapshot=a.snapshot.resolve()
    if not folder.is_relative_to(ROOT/'build') or folder.exists():raise ValueError('Fresh private output required')
    proof=json.loads((variant/'proof.json').read_text());oracle=json.loads((a.android/'report.json').read_text())
    if not proof['headers_identical'] or proof['normal_coverage_promoted']!=0:raise ValueError('Private compatible variant required')
    for name,digest in proof['generated'].items():
        if sha(variant/name)!=digest:raise ValueError('Variant generated file changed')
    for name,digest in proof['inputs'].items():
        if sha(Path(name))!=digest:raise ValueError('Variant source changed: '+name)
    stamp=json.loads((base/'source-stamp.json').read_text())
    for name,digest in stamp.items():
        if sha(ROOT/name)!=digest:raise ValueError('Baseline source changed: '+name)
    edge=next(x for x in (base/'build.ninja').read_text().splitlines() if x.startswith('build null_game.exe:'))
    objects=[base/x for x in edge.split() if x.endswith('.obj') and not x.endswith('null_main.cpp.obj')]
    folder.mkdir(parents=True);generated=folder/'generated';generated.mkdir()
    sources=[];removed=[]
    for unit in UNITS:
        stem='game_generated_type_'+unit
        for path in [variant/(stem+'.cpp')]+list(variant.glob(stem+'_cpp_part_*.inc')):
            shutil.copyfile(path,generated/path.name)
        sources.append(generated/(stem+'.cpp'))
        found=[x for x in objects if x.name==stem+'.cpp.obj']
        if len(found)!=1:raise ValueError('Ambiguous baseline unit: '+stem)
        removed+=found;objects.remove(found[0])
    q=lambda path:'"'+Path(path).as_posix()+'"'
    host=ROOT/'tools/profiling/hot_methods_native.cpp'
    includes=[snapshot,ROOT/'src',ROOT/'src/main',ROOT/'src/kairo/common',ROOT/'src/kairo/api',ROOT/'src/kairo/common/generated',ROOT/'src/kairo/platform/sdl']
    cmake='cmake_minimum_required(VERSION 3.20)\nproject(FpKernels LANGUAGES CXX)\nset(CMAKE_CXX_STANDARD 17)\nset(CMAKE_MSVC_RUNTIME_LIBRARY MultiThreadedDLL)\nfind_package(freetype CONFIG REQUIRED)\n'
    cmake+='add_executable(fp_kernels '+ ' '.join(map(q,[host]+sources+objects))+')\n'
    cmake+='target_include_directories(fp_kernels PRIVATE '+' '.join(map(q,includes))+')\n'
    cmake+='target_compile_definitions(fp_kernels PRIVATE PLS_NULL_BACKEND=1 PLS_TRACING_GC=1)\n'
    cmake+='target_compile_options(fp_kernels PRIVATE /O2 /Zi /bigobj /EHsc /fp:strict /permissive- /utf-8 /we4715)\ntarget_link_options(fp_kernels PRIVATE /DEBUG /OPT:REF /OPT:ICF)\n'
    cmake+='target_link_libraries(fp_kernels PRIVATE '+q(base/'null_runtime.lib')+' Freetype::Freetype Psapi Advapi32)\n'
    (folder/'CMakeLists.txt').write_text(cmake)
    inputs=objects+sources+[base/'null_runtime.lib',base/'source-stamp.json',variant/'proof.json',host,Path(__file__),a.android/'report.json']+list(a.captures.glob('*.bin'))
    before={str(x):sha(x) for x in inputs};env=environment()
    with (folder/'build.log').open('wb') as log:
        for command in [[CMAKE,'-S',folder,'-B',folder/'out','-G','Ninja','-DCMAKE_BUILD_TYPE=Release','-DCMAKE_MAKE_PROGRAM='+str(NINJA),'-DCMAKE_PREFIX_PATH='+str(ROOT/'build/deps/native-media')],[CMAKE,'--build',folder/'out','--parallel','2']]:
            subprocess.run(list(map(str,command)),env=env,stdout=log,stderr=subprocess.STDOUT,check=True)
    env['PLS_NUMERICAL_ALL_CASES']='1';exe=folder/'out/fp_kernels.exe'
    with (folder/'stdout.log').open('wb') as out,(folder/'stderr.log').open('wb') as err:
        subprocess.run([str(exe),str(a.captures.resolve()),str(folder/'results'),str(ROOT/'assets')],env=env,stdout=out,stderr=err,timeout=120,check=True)
    rows=[]
    for row in oracle['kernels']:
        original=a.android/'kernel-results'/row['case'];actual=folder/'results'/row['case']
        if sha(original)!=row['sha256']:raise ValueError('ARM result changed')
        rows.append(dict(case=row['case'],matched=original.read_bytes()==actual.read_bytes(),arm_sha256=sha(original),native_sha256=sha(actual)))
    if before!={str(x):sha(x) for x in inputs}:raise ValueError('Inputs changed during experiment')
    result=dict(cases=len(rows),matched=sum(x['matched'] for x in rows),rows=rows,inputs=before,executable_sha256=sha(exe),
                method_instrumentation=False,performance_measurement=False,normal_coverage_promoted=0,
                limitation='Only the four kernel-containing types are replaced; full-game adoption requires regeneration and replay.')
    (folder/'receipt.json').write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps({k:v for k,v in result.items() if k not in ['rows','inputs']}))

if __name__=='__main__':main()
