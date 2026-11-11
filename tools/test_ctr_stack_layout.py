"""Validate the pinned libctru private thread ABI with the actual ARM compiler."""
import hashlib
import json
from pathlib import Path
import subprocess
import urllib.request

ROOT = Path(__file__).resolve().parents[1]
SDK = Path('C:/devkitPro')
DIGEST = '29b73a8532fec06e7eb3b24eae0a4dac7353a72fcde75b21c05b63f1fc4d2a01'
URL = 'https://raw.githubusercontent.com/devkitPro/libctru/v2.7.1/libctru/source/internal.h'


def main():
    directory = ROOT/'build/libctru-gc-audit'
    directory.mkdir(parents=True, exist_ok=True)
    header = directory/'internal.h'
    if not header.exists():
        header.write_bytes(urllib.request.urlopen(URL, timeout=60).read())
    digest = lambda p: hashlib.sha256(p.read_bytes()).hexdigest()
    if digest(header) != DIGEST:
        raise ValueError('Pinned libctru internal layout differs')
    # Version metadata of the installed static library must agree as well.
    metadata = SDK/'msys2/var/lib/pacman/local/libctru-2.7.1-1/desc'
    if not metadata.exists() or '%VERSION%\n2.7.1-1\n' not in metadata.read_text():
        raise ValueError('libctru 2.7.1 package metadata required')
    source = directory/'layout_fixture.cpp'
    source.write_text('''extern "C" {
#include "internal.h"
}
#include "PRODUCTION_HEADER"
#include <cstddef>
using Layout=pls::gc::ctr_detail::ThreadLayout;
static_assert(sizeof(Layout)==sizeof(Thread_tag));
#define CHECK_FIELD(name) static_assert(offsetof(Layout,name)==offsetof(Thread_tag,name))
CHECK_FIELD(handle);CHECK_FIELD(ep);CHECK_FIELD(arg);CHECK_FIELD(rc);
CHECK_FIELD(detached);CHECK_FIELD(finished);CHECK_FIELD(reent);CHECK_FIELD(stacktop);
extern "C" const unsigned ctr_layout_evidence[]={sizeof(Layout),alignof(Layout),offsetof(Layout,reent),offsetof(Layout,stacktop),sizeof(_reent)};
'''.replace('PRODUCTION_HEADER',(ROOT/'src/runtime/ctr_stack_bounds.hpp').as_posix()))
    compiler = SDK/'devkitARM/bin/arm-none-eabi-g++.exe'
    command = [compiler, '-std=c++17', '-march=armv6k', '-mtune=mpcore', '-mfloat-abi=hard',
               '-mfpu=vfp', '-D__3DS__', '-I'+str(SDK/'libctru/include'),
               '-I'+str(ROOT/'src/runtime'), '-c', source, '-o', directory/'layout_fixture.o']
    result = subprocess.run(list(map(str,command)), capture_output=True)
    (directory/'layout-compile.log').write_bytes(result.stdout+result.stderr)
    result.check_returncode()
    report = dict(status='COMPILE_LAYOUT_PASS_NOT_RUNTIME_PROOF', libctru='2.7.1',
                  official_header_sha256=DIGEST, compiler_sha256=digest(compiler),
                  mirror_sha256=digest(ROOT/'src/runtime/ctr_stack_bounds.hpp'),
                  object_sha256=digest(directory/'layout_fixture.o'))
    (directory/'layout-proof.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(report))


if __name__ == '__main__':
    main()
