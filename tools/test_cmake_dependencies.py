"""A header-only edit must rebuild an actual MSVC/Ninja executable."""
import hashlib,json,subprocess
from pathlib import Path
from pc_compiler import CMAKE,NINJA,environment,showincludes_prefix,audit_ninja_dependencies

ROOT=Path(__file__).resolve().parents[1]
def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()

def main():
 folder=ROOT/'build/cmake-dependency-tests';source=folder/'source';build=folder/'native'
 source.mkdir(parents=True,exist_ok=True);env=environment();probe=showincludes_prefix(folder/'prefix-probe',env)
 header=source/'own_value.hpp';unit=source/'main.cpp';project=source/'CMakeLists.txt'
 header.write_text('constexpr int own_value=1;\n',encoding='utf8',newline='\n')
 unit.write_text('#include "own_value.hpp"\n#include <cstdio>\nint main(){std::printf("%d\\n",own_value);}\n',encoding='utf8',newline='\n')
 project.write_text('cmake_minimum_required(VERSION 3.20)\nproject(OwnDependencies LANGUAGES CXX)\nset(CMAKE_CL_SHOWINCLUDES_PREFIX "${PLS_MSVC_SHOWINCLUDES_PREFIX}")\nadd_executable(own_probe main.cpp)\n',encoding='utf8',newline='\n')
 def run(args,name):
  result=subprocess.run([str(x)for x in args],cwd=ROOT,env=env,capture_output=True,timeout=90)
  (folder/(name+'.log')).write_bytes(result.stdout+result.stderr)
  if result.returncode:raise RuntimeError('Dependency fixture failed: '+name)
  return result.stdout.decode('utf8').strip()
 run([CMAKE,'-S',source,'-B',build,'-G','Ninja','-DCMAKE_MAKE_PROGRAM='+str(NINJA),'-DCMAKE_BUILD_TYPE=Release','-DPLS_MSVC_SHOWINCLUDES_PREFIX='+probe['prefix']],'configure')
 run([CMAKE,'--build',build,'--clean-first'],'initial-build');first=run([build/'own_probe.exe'],'initial-run')
 cpp_sha=sha(unit);header.write_text('constexpr int own_value=2;\n',encoding='utf8',newline='\n')
 run([CMAKE,'--build',build],'header-only-rebuild');second=run([build/'own_probe.exe'],'updated-run')
 audit=audit_ninja_dependencies(build,{'CMakeFiles/own_probe.dir/main.cpp.obj':header},env)
 if first!='1'or second!='2'or sha(unit)!=cpp_sha:raise ValueError('Header-only change was not rebuilt faithfully')
 inputs=[Path(__file__),ROOT/'tools/pc_compiler.py',ROOT/'CMakeLists.txt',ROOT/'tools/build_pc.py']
 report=dict(operation='MSVC-Ninja-header-only-rebuild',status='PASS',cases=4,passed=4,initial_output=first,header_only_output=second,cpp_unchanged=True,
  prefix_probe=probe,dependency_audit=audit,inputs={p.relative_to(ROOT).as_posix():sha(p)for p in inputs},game_boot=False,original_assets_used=False)
 (ROOT/'config/phase2-cmake-dependency-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf8',newline='\n')
 print(json.dumps(dict(status='PASS',cases=4,dependencies=next(iter(audit.values()))['dependencies'],header_only_rebuild=True)))

if __name__=='__main__':main()
