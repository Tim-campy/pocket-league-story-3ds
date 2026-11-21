"""FP kernel observations on the readable game (item B, 2026-11-21).

The five game kernels whose captured inputs were observed on ARM (Android
emulator, build/fp-emulator-arm80-results) run through the readable game code
(tools/profiling/readable_kernels_native.cpp, target fp_kernels of the readable
PC build configured by tools/build_pc.py --readable-diagnostic). Every result
must equal the ARM observation byte for byte. Edits nothing; private output.

    python tools/fp-discriminants/test_readable_kernels.py [--build build/pc-readable-diagnostic-release]
"""
import argparse, hashlib, json, subprocess, sys, time
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'tools'))
from pc_compiler import CMAKE, environment


def sha(p):
    return hashlib.sha256(Path(p).read_bytes()).hexdigest()


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--build', type=Path, default=ROOT / 'build/pc-readable-diagnostic-release')
    p.add_argument('--captures', type=Path, default=ROOT / 'build/hot-input-capture-arm80/inputs')
    p.add_argument('--android', type=Path, default=ROOT / 'build/fp-emulator-arm80-results')
    a = p.parse_args()
    build = a.build.resolve()
    if not (build / 'CMakeCache.txt').exists():
        raise SystemExit('Configure the readable PC build first (tools/build_pc.py --readable-diagnostic ...)')
    env = environment()
    log = build / 'fp-kernels-build.log'
    r = subprocess.run([str(CMAKE), '--build', str(build), '--target', 'fp_kernels'], env=env, capture_output=True)
    log.write_bytes(r.stdout + r.stderr)
    if r.returncode:
        raise SystemExit(f'fp_kernels build failed; see {log}')
    exe = build / 'fp_kernels.exe'
    out = ROOT / 'build/fp-readable-kernels' / str(time.time_ns())
    out.mkdir(parents=True)
    run = subprocess.run([str(exe), str(a.captures.resolve()), str(out / 'results'), str(ROOT / 'assets')], env=env, capture_output=True, timeout=300)
    (out / 'stdout.log').write_bytes(run.stdout); (out / 'stderr.log').write_bytes(run.stderr)
    if run.returncode:
        raise SystemExit(f'fp_kernels failed; see {out}')
    oracle = json.loads((a.android / 'report.json').read_text())
    rows = []
    for row in oracle['kernels']:
        original = a.android / 'kernel-results' / row['case']; actual = out / 'results' / row['case']
        if sha(original) != row['sha256']:
            raise ValueError('ARM observation changed: ' + row['case'])
        rows.append(dict(case=row['case'], matched=actual.exists() and original.read_bytes() == actual.read_bytes()))
    result = dict(operation='readable-fp-kernels', cases=len(rows), matched=sum(x['matched'] for x in rows),
                  mismatches=[x['case'] for x in rows if not x['matched']], executable_sha256=sha(exe),
                  runtime_numeric_types_sha256=sha(ROOT / 'src/runtime/numeric_types.hpp'))
    (out / 'receipt.json').write_text(json.dumps(result, indent=2) + '\n')
    print(json.dumps(result))
    if result['matched'] != result['cases']:
        raise SystemExit(1)


if __name__ == '__main__':
    main()
