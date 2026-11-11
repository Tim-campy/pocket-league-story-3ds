"""Build the asset-free tracing GC suite for ARM11; no runtime success inferred."""
import json
from pathlib import Path
import shlex
import subprocess
import sys
from build_arm11_null import msys
from build_pc import ROOT, digest


def main():
    subprocess.run([sys.executable, str(ROOT/'tools/test_ctr_stack_layout.py')], check=True)
    output=ROOT/'build/ctr-gc-fixture'
    output.mkdir(parents=True, exist_ok=True)
    files=[ROOT/name for name in ['src/runtime/tracing_gc.cpp','src/runtime/tracing_gc.hpp',
        'src/runtime/ctr_stack_bounds.hpp','tests/translator/tracing_gc_fixtures.cpp',
        'tests/translator/tracing_gc_register_arm.S','tools/ctr-gc-fixture/CMakeLists.txt',
        'tools/build_ctr_gc_fixture.py','tests/translator/ctr_tls_lifecycle.cpp',
        'src/runtime/ctr_thread_lifecycle.cpp','tools/cmake/ctr_thread_lifecycle.cmake']]
    before={str(p.relative_to(ROOT)):digest(p) for p in files}
    commands=[['cmake','-S',msys(ROOT/'tools/ctr-gc-fixture'),'-B',msys(output),'-G','Ninja',
              '-DCMAKE_TOOLCHAIN_FILE=/opt/devkitpro/cmake/3DS.cmake','-DCMAKE_BUILD_TYPE=Release'],
              ['cmake','--build',msys(output),'--parallel','2']]
    script=output/'build.sh'
    script.write_text('set -e\nexport DEVKITPRO=/opt/devkitpro\nexport DEVKITARM=/opt/devkitpro/devkitARM\n'+
                      '\n'.join(shlex.join(c) for c in commands)+'\n',newline='\n')
    with (output/'compile.log').open('wb') as log:
        subprocess.run(['C:/devkitPro/msys2/usr/bin/bash.exe','--login',msys(script)],
                       stdout=log,stderr=subprocess.STDOUT,check=True)
    if before!={str(p.relative_to(ROOT)):digest(p) for p in files}:
        raise ValueError('Fixture source changed during build')
    report=dict(status='BUILT_NOT_EXECUTED', inputs=before,
                executable_sha256=digest(output/'tracing_gc_fixture.3dsx'),
                elf_sha256=digest(output/'tracing_gc_fixture.elf'),
                tls_executable_sha256=digest(output/'ctr_tls_lifecycle.3dsx'))
    (output/'build-proof.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(report))


if __name__=='__main__':
    main()
