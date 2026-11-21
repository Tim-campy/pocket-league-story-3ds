"""Build the private no-video ARM11 benchmark with authenticated local inputs."""
import argparse
import hashlib
import json
from pathlib import Path
import shlex
import subprocess
import sys
from build_pc import ROOT, APK_SHA, validate_diagnostic_manifest, validate_readable_diagnostic, digest

def msys(path):
    path=Path(path).resolve().as_posix()
    if len(path)<3 or path[1:3]!=':/':raise ValueError('Expected local Windows drive')
    return '/'+path[0].lower()+path[2:]

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--apk',type=Path,required=True)
    p.add_argument('--snapshot',type=Path,help='Canonical diagnostic snapshot')
    p.add_argument('--readable',type=Path,help='C6b: readable trees from translator/readable.py diagnostic (instead of --snapshot)')
    p.add_argument('--frozen',action='store_true',help='After the freeze: build src/game and src/kairo/common/generated as maintained sources')
    p.add_argument('--output',type=Path,default=ROOT/'build/null-arm11')
    p.add_argument('--optimization',choices=['O2','Os'],default='O2')
    p.add_argument('--lto',action='store_true')
    p.add_argument('--keep-unused-sections',action='store_true')
    p.add_argument('--memory-categories',action='store_true')
    p.add_argument('--legacy-rendezvous',action='store_true',help='Diagnosis only: former timed condvar wait in the GC rendezvous')
    p.add_argument('--gc-stress-every',type=int,default=0,help='Diagnosis only: full collection after every N managed allocations')
    p.add_argument('--gc-stress-poison',action='store_true',help='Diagnosis only: poison dead bodies (8 MiB quarantine)')
    p.add_argument('--gc-trace',action='store_true',help='Diagnosis only: one line per collection')
    a=p.parse_args();output=a.output.resolve()
    if sum(map(bool,(a.snapshot,a.readable,a.frozen)))!=1:p.error('give one of --snapshot, --readable or --frozen')
    readable_root=a.readable.resolve() if a.readable else None
    source=(readable_root/'game') if readable_root else (ROOT/'src/game') if a.frozen else a.snapshot.resolve()
    portable_dir=(readable_root/'include/generated') if readable_root else ROOT/'src/kairo/common/generated'
    def validate():
        if a.frozen:return None  # maintained sources: nothing generated to validate
        return validate_readable_diagnostic(readable_root) if readable_root else validate_diagnostic_manifest(source)
    if not output.is_relative_to(ROOT/'build'):raise ValueError('ARM build must remain in ignored build/')
    if digest(a.apk)!=APK_SHA:raise ValueError('Expected owned APK required')
    validate()
    subprocess.run([sys.executable, str(ROOT/'tools/test_ctr_stack_layout.py')], check=True)
    prefix=ROOT/'build/deps/arm11-media'
    if not (prefix/'lib/libfreetype.a').exists():raise ValueError('Authorized ARM FreeType build is missing')
    output.mkdir(parents=True,exist_ok=True)
    def inputs():
        paths=[q for base in ['src','tools/null-benchmark']for q in (ROOT/base).rglob('*')if q.is_file() and q.suffix in ['.cpp','.hpp','.inc','.txt']]
        paths.extend(q for q in source.iterdir()if q.suffix in ['.cpp','.hpp','.inc','.json'])
        if readable_root:paths.extend(q for q in portable_dir.iterdir()if q.suffix in ['.cpp','.hpp','.inc','.json'])
        paths.extend([ROOT/'tests/kairo/platform_wait.cpp',ROOT/'tests/kairo/arm11_runtime_smoke.cpp',
                      ROOT/'tests/kairo/null_backend_fixtures.cpp',
                      ROOT/'tools/cmake/ctr_thread_lifecycle.cmake',Path(__file__)])
        return {q.relative_to(ROOT).as_posix():digest(q)for q in sorted(set(paths))}
    before=inputs()
    configure=['cmake','-S',msys(ROOT/'tools/null-benchmark'),'-B',msys(output),'-G','Ninja',
               '-DCMAKE_TOOLCHAIN_FILE=/opt/devkitpro/cmake/3DS.cmake','-DCMAKE_BUILD_TYPE=Release',
               '-DPLS_GENERATED='+msys(source),'-DPLS_PORTABLE_GENERATED_DIR='+msys(portable_dir),'-DCMAKE_PREFIX_PATH='+msys(prefix),
               '-DPLS_ALLOCATION_PROBE=OFF','-DPLS_REPORT_ALLOCATION_FAILURE=OFF',
               '-DPLS_MEMORY_CATEGORIES='+('ON'if a.memory_categories else'OFF'),
               '-DPLS_GC_TRACE='+('ON'if a.gc_trace else'OFF'),
               '-DPLS_GC_STRESS_EVERY='+str(a.gc_stress_every),'-DPLS_GC_STRESS_POISON='+('ON'if a.gc_stress_poison else'OFF'),
               '-DPLS_GC_LEGACY_RENDEZVOUS='+('ON'if a.legacy_rendezvous else'OFF'),
               '-DPLS_ARM_OPTIMIZATION='+a.optimization,'-DPLS_ARM_LTO='+('ON'if a.lto else'OFF'),
               '-DPLS_ARM_GC_SECTIONS='+('OFF'if a.keep_unused_sections else'ON')]
    command=['cmake','--build',msys(output),'--parallel','1','--','-k','0']  # report every failing unit
    script=output/'build-authenticated.sh'
    script.write_text('set -e\nexport DEVKITPRO=/opt/devkitpro\nexport DEVKITARM=/opt/devkitpro/devkitARM\n'+
                      'cd '+shlex.quote(msys(ROOT))+'\n'+shlex.join(configure)+'\n'+shlex.join(command)+'\n',newline='\n')
    with (output/'authenticated-build.log').open('wb')as log:
        result=subprocess.run(['C:/devkitPro/msys2/usr/bin/bash.exe','--login',msys(script)],stdout=log,stderr=subprocess.STDOUT)
    if result.returncode:raise RuntimeError('ARM build failed; inspect '+str(output/'authenticated-build.log'))
    if inputs()!=before:raise RuntimeError('Source changed during ARM build; rebuild')
    validate()
    receipt=dict(operation='authenticated-arm11-null-build',apk_sha256=APK_SHA,inputs=before,
                 optimization=a.optimization,lto=a.lto,gc_sections=not a.keep_unused_sections,
                 memory_categories=a.memory_categories,gc_trace=a.gc_trace,legacy_rendezvous=a.legacy_rendezvous,gc_stress_every=a.gc_stress_every,gc_stress_poison=a.gc_stress_poison,diagnostic_only=a.gc_trace or a.memory_categories or a.legacy_rendezvous or a.gc_stress_every>0,allocation_probe=False,method_instrumentation=False,
                 executable_sha256=digest(output/'null_game.3dsx'),elf_sha256=digest(output/'null_game.elf'))
    (output/'build-proof.json').write_text(json.dumps(receipt,indent=2)+'\n')
    print(json.dumps({k:v for k,v in receipt.items()if k!='inputs'}))

if __name__=='__main__':main()
