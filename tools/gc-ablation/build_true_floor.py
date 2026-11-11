"""Compile the isolated handwritten floor; no game build is changed."""
import argparse,hashlib,json,subprocess,sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2]
sys.path.insert(0,str(ROOT/'tools'))
from pc_compiler import CMAKE,NINJA,environment
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--folder',type=Path,required=True);a=parser.parse_args();folder=a.folder.resolve()
    if not folder.is_relative_to(ROOT/'build'):raise ValueError('Private experiment required')
    proof=json.loads((folder/'preparation.json').read_text())
    for name,digest in proof['files'].items():
        if sha(folder/name)!=digest:raise ValueError('Prepared source changed')
    cmake='cmake_minimum_required(VERSION 3.20)\nproject(TrueFloor LANGUAGES CXX)\nset(CMAKE_CXX_STANDARD 17)\nset(CMAKE_MSVC_RUNTIME_LIBRARY MultiThreadedDLL)\nadd_executable(true_floor harness.cpp kernels.cpp true_floor.cpp)\n'
    cmake+='target_include_directories(true_floor PRIVATE "'+(ROOT/'src/kairo/common').as_posix()+'")\n'
    cmake+='target_compile_options(true_floor PRIVATE /O2 /Zi /bigobj /EHsc /fp:strict /permissive- /utf-8 /we4715)\ntarget_link_options(true_floor PRIVATE /DEBUG /OPT:REF /OPT:ICF /MAP)\n'
    (folder/'CMakeLists.txt').write_text(cmake)
    with (folder/'build.log').open('wb') as log:
        for command in [[CMAKE,'-S',folder,'-B',folder/'out','-G','Ninja','-DCMAKE_BUILD_TYPE=Release','-DCMAKE_MAKE_PROGRAM='+str(NINJA)],[CMAKE,'--build',folder/'out','--parallel','1']]:
            subprocess.run(list(map(str,command)),env=environment(),stdout=log,stderr=subprocess.STDOUT,check=True)
    result=dict(status='BUILT_NOT_MEASURED',preparation_sha256=sha(folder/'preparation.json'),executable_sha256=sha(folder/'out/true_floor.exe'),build_script_sha256=sha(Path(__file__)),cmake_sha256=sha(folder/'CMakeLists.txt'))
    (folder/'build-proof.json').write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(result))
if __name__=='__main__':main()
