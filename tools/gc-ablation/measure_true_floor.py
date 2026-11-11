"""Measure the checked handwritten floor and compare all private kernel outputs."""
import argparse
import hashlib
import json
from pathlib import Path
import re
import statistics
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'tools'))
from measure_null_thread_cpu import idle_check


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--folder', type=Path, required=True)
    parser.add_argument('--reference', type=Path, required=True,
                        help='Authenticated run_hot_methods output from the same numeric model')
    args = parser.parse_args()
    folder, reference = args.folder.resolve(), args.reference.resolve()
    if not folder.is_relative_to(ROOT / 'build') or not reference.is_relative_to(ROOT / 'build'):
        raise ValueError('Private experiments required')
    proof = json.loads((folder / 'build-proof.json').read_text())
    exe = folder / 'out/true_floor.exe'
    if sha(exe) != proof['executable_sha256']:
        raise ValueError('Floor executable changed')
    comparison = json.loads((reference / 'comparison.json').read_text())
    if comparison['differences']:
        raise ValueError('Reference must agree with the Mono oracle')
    for path, digest in comparison['inputs'].items():
        if sha(Path(path)) != digest:
            raise ValueError('Reference input changed: ' + path)
    # Inputs use the same original 80-case corpus as the historical timings.
    captures = ROOT / 'build/hot-input-capture/inputs'
    records = []
    for repetition in range(1, 4):
        out = folder / f'run-{repetition}'
        if out.exists():
            raise ValueError('Do not overwrite an existing measurement')
        idle = idle_check()
        result = subprocess.run([str(exe), str(captures), str(out), 'checked-floor'],
                                capture_output=True, timeout=120)
        out.mkdir(exist_ok=True)
        (out / 'stdout.log').write_bytes(result.stdout)
        (out / 'stderr.log').write_bytes(result.stderr)
        result.check_returncode()
        rows = []
        for kind in range(5):
            values = [float(v) for k, v in re.findall(
                r'method=(\d+) batch=\d+ calls=16000 gross_ns=([^\s]+)', result.stdout.decode()) if int(k) == kind]
            if len(values) != 5:
                raise ValueError('Missing timed batches')
            rows.append(dict(kind=kind, gross_ns=statistics.median(values), batches=values))
        differences = []
        for kind in range(5):
            for case in range(16):
                name = f'{kind}-{case}.bin'
                expected = reference / 'native-results' / name
                if (out / name).read_bytes() != expected.read_bytes():
                    differences.append(name)
        records.append(dict(repetition=repetition, rows=rows, differences=differences,
                            pre_run_host_busy_percent=idle, stdout_sha256=sha(out / 'stdout.log')))
        if differences:
            raise AssertionError('Handwritten floor changed results: ' + str(differences))
    report = dict(executable_sha256=sha(exe), reference_comparison_sha256=sha(reference / 'comparison.json'),
                  inputs={p.name: sha(p) for p in captures.glob('*.bin')}, runs=records,
                  matched_per_run=80, limits='Private compact projection; no production helper in timed bodies; not the production object layout')
    (folder / 'measurement.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps(dict(matched_per_run=80, median_ns=[[r['gross_ns'] for r in x['rows']] for x in records])))


if __name__ == '__main__':
    main()
