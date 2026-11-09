"""Verify the admitted CPU arc raster policy with own analytic fixtures only.

No SDK Mono, original game/Unity binary, device or asset is involved. Coverage
checks do not qualify the existing geometric corpus's historical differences.
"""
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import sys

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tools'))
from pc_compiler import environment


def sha(path):return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def main():
    folder=ROOT/'build/arc-raster-tests';folder.mkdir(parents=True,exist_ok=True)
    inputs=[Path(__file__),ROOT/'src/kairo/common/arc_raster.hpp',ROOT/'src/kairo/common/arc_geometry.hpp',
            ROOT/'tests/kairo/arc_raster_fixtures.cpp',ROOT/'tools/pc_compiler.py']
    snapshot={p.relative_to(ROOT).as_posix():sha(p) for p in inputs}
    env=environment();compiler=shutil.which('cl.exe',path=env['PATH'])
    if not compiler:raise RuntimeError('Existing C++ development toolchain required; nothing is installed')
    native=folder/'arc-raster-fixtures.exe'
    options=['/nologo','/std:c++17','/EHsc','/fp:strict','/permissive-','/W4','/WX','/utf-8','/O2',
             '/Fe:'+str(native),'/Fo:'+str(folder)+'/',ROOT/'tests/kairo/arc_raster_fixtures.cpp']
    compile_run=subprocess.run(list(map(str,[compiler,*options])),cwd=ROOT,env=env,capture_output=True,timeout=120)
    compile_log=folder/'compile.log';compile_log.write_bytes(compile_run.stdout+compile_run.stderr)
    report=dict(operation='own-analytic-CPU-arc-raster-policy',status='FAIL',completed=False,
        compile_exit_code=compile_run.returncode,compile_log_sha256=sha(compile_log),
        inputs=snapshot,compiler_sha256=sha(compiler),compiler_options=list(map(str,options)),
        verified_boundary_ids=[],source_oracle_used=False,game_boot=False,game_assets_used=False,
        original_binaries_executed=False,raster_android_verified=False,
        limits=['Binary32 geometry is mapped by the caller; the new CPU coverage policy uses binary64 edges/clipping.',
                'Triangle pixel centers/top-left, winding normalization and viewport bounds are own analytic properties, not original GPU measurements.',
                'GUI quads split [0,1,2] then [0,2,3]; different primitives preserve their own overdraw.',
                'Lines use closed Bresenham traversal after continuous viewport clipping and endpoint flooring; zero-length lines paint nothing.',
                'Color, blend and user scissor are external Pixel callback responsibilities and are not qualified by this fixture.',
                'Viewport extents must be nonnegative int, positions finite binary32, mesh indices complete/in range, GUI groups complete.',
                'A sink is UI-owned and callbacks cannot re-enter it. Default mesh budget is2000002 vertices; nonconvergent clipping is refused.',
                'The historical Mono geometry FAIL remains separate and is not reclassified by a passing CPU coverage fixture.'])
    if compile_run.returncode==0:
        result=subprocess.run([str(native)],cwd=ROOT,env=env,capture_output=True,timeout=60)
        (folder/'native.stdout').write_bytes(result.stdout);(folder/'native.stderr').write_bytes(result.stderr)
        report.update(run_exit_code=result.returncode,native_executable=dict(path=native.relative_to(ROOT).as_posix(),sha256=sha(native)),
                      stdout_sha256=sha(folder/'native.stdout'),stderr_sha256=sha(folder/'native.stderr'))
        if result.returncode==0:
            summary=json.loads(result.stdout.decode('utf-8-sig'))
            if summary.get('status')!='PASS' or summary.get('scenarios')!=34 or summary.get('assertions',0)<500:
                raise ValueError('Incomplete own CPU raster policy corpus')
            report.update(status='PASS',completed=True,native=summary)
    if any(sha(ROOT/p)!=h for p,h in snapshot.items()):
        raise ValueError('Arc raster source/producer changed while compiling/running')
    (ROOT/'config/phase2-arc-raster-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(dict(status=report['status'],completed=report['completed'],native=report.get('native'))))
    return 0 if report['status']=='PASS' else 1


if __name__=='__main__':sys.exit(main())
