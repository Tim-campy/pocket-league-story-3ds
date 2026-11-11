"""Compile private, isolated experiments; never link these bodies into the game."""
from pathlib import Path
import hashlib,json,subprocess,sys
ROOT=Path(__file__).resolve().parents[2]
HERE=ROOT/'build/gc-ablation'
sys.path.insert(0,str(ROOT/'tools'))
from pc_compiler import CMAKE,NINJA,environment

def digest(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
    prepared=json.loads((HERE/'preparation.json').read_text())
    lines=['cmake_minimum_required(VERSION 3.20)','project(GcAblation LANGUAGES CXX)',
           'set(CMAKE_CXX_STANDARD 17)','set(CMAKE_MSVC_RUNTIME_LIBRARY MultiThreadedDLL)']
    inputs={}
    for row in prepared['variants']:
        name=row['variant'];target=name.replace('-','_')
        for file,sha in row['files'].items():
            path=HERE/name/file
            if digest(path)!=sha:raise ValueError('Prepared input changed: '+str(path))
            inputs[str(path)]=sha
        sources=[name+'/harness.cpp',name+'/kernels.cpp']
        if name=='handwritten':sources.append(name+'/handwritten.cpp')
        lines.append('add_executable('+target+' '+' '.join(sources)+')')
        lines.append('target_include_directories('+target+' PRIVATE "'+(ROOT/'src/kairo/common').as_posix()+'")')
        lines.append('target_compile_options('+target+' PRIVATE /O2 /Zi /bigobj /EHsc /fp:'+row['fp']+' /permissive- /utf-8 /we4715)')
        lines.append('target_link_options('+target+' PRIVATE /DEBUG /OPT:REF /OPT:ICF /MAP)')
    (HERE/'CMakeLists.txt').write_text('\n'.join(lines)+'\n')
    with (HERE/'build.log').open('wb')as log:
        for command in [[CMAKE,'-S',HERE,'-B',HERE/'out','-G','Ninja','-DCMAKE_BUILD_TYPE=Release','-DCMAKE_MAKE_PROGRAM='+str(NINJA)],
                        [CMAKE,'--build',HERE/'out','--parallel','1']]:
            subprocess.run([str(v)for v in command],env=environment(),stdout=log,stderr=subprocess.STDOUT,check=True)
    if any(digest(Path(p))!=sha for p,sha in inputs.items()):raise ValueError('Inputs changed during build')
    result=dict(status='BUILT_NOT_MEASURED',inputs=inputs,binaries={row['variant']:digest(HERE/'out'/(row['variant'].replace('-','_')+'.exe'))for row in prepared['variants']})
    (HERE/'build-proof.json').write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps(dict(status=result['status'],variants=len(result['binaries']))))
if __name__=='__main__':main()
