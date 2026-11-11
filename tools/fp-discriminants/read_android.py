"""Read completed private device results without installing or launching an APK."""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
from run_x86 import predictions, single
from cal_models import evaluate

ROOT = Path(__file__).resolve().parents[2]
PACKAGE = 'org.plsresearch.floatprobe'


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--adb', required=True, type=Path)
    parser.add_argument('--serial', required=True)
    parser.add_argument('--output', required=True, type=Path)
    parser.add_argument('--build', required=True, type=Path)
    parser.add_argument('--captures', required=True, type=Path)
    args = parser.parse_args()
    output = args.output.resolve()
    if not output.is_relative_to((ROOT/'build').resolve()) or output.exists():
        raise ValueError('Use a fresh output directory under ignored build/')
    adb = [str(args.adb), '-s', args.serial]
    installed = subprocess.run([*adb, 'shell', 'pm', 'path', PACKAGE], capture_output=True, text=True, check=True).stdout.strip().splitlines()
    if len(installed)!=1 or not installed[0].startswith('package:/'):
        raise ValueError('Expected the standalone numerical oracle APK')
    installed_path=installed[0].removeprefix('package:')
    installed_bytes=subprocess.run([*adb, 'exec-out', 'cat', installed_path], capture_output=True, check=True).stdout
    installed_hash=hashlib.sha256(installed_bytes).hexdigest()
    proof=json.loads((args.build/'build-proof.json').read_text())
    if installed_hash!=proof['apk_sha256']:
        raise ValueError('Installed APK differs from the authenticated local build')
    captured=json.loads((args.captures.parent/'capture-receipt.json').read_text())
    if hashlib.sha256((args.captures.parent/'capture-receipt.json').read_bytes()).hexdigest()!=proof['captures']['receipt_sha256']:
        raise ValueError('Capture receipt differs from the installed APK')
    counts=proof['captures']['per_kernel']
    # API 21 need not include tar or sha256sum. Read only explicit output files;
    # exec-out preserves binary bytes, unlike a shell PTY.
    names=['status.txt','discriminants.tsv','cil.tsv']
    names += [f'kernel-results/{kind}-{index}.bin' for kind in range(5) for index in range(counts[kind])]
    probes=['Expression','Local','Field','Array','PassArgument','Return','Inlining','Loop','ExplicitConversion']
    names += ['jit-FloatDiscriminants-'+name+'.bin' for name in probes]
    names += ['jit-Team-Cal_evaCoatMulti9block.bin']
    payloads={}
    for name in names:
        remote='files/probe/'+name
        result=subprocess.run([*adb, 'exec-out', 'run-as', PACKAGE, 'cat', remote], capture_output=True, check=True)
        if not result.stdout:raise ValueError('Empty probe output: '+name)
        payloads[remote]=result.stdout
    prefix = 'files/probe/'
    status = payloads[prefix+'status.txt'].decode()
    if 'Completed: FloatDiscriminants' not in status or 'Completed: HotMethodsMono' not in status:
        raise ValueError('Device probe is incomplete: '+status)
    observations = {}
    for line in payloads[prefix+'discriminants.tsv'].decode().splitlines()[1:]:
        name, a, b, value, binary = line.split('\t')
        key = (name, single(float(a)), single(float(b)))
        if key in observations:
            raise ValueError('Duplicate discriminant')
        observations[key] = dict(value=float(value), binary64_bits=binary)
    rows = predictions()
    if len(observations) != len(rows):
        raise ValueError('Incomplete discriminant set')
    for row in rows:
        row['observed'] = observations[(row['case'], row['a'], row['b'])]
        row['matching_models'] = [name for name, expected in row['models'].items()
                                 if expected['binary64_bits'] == row['observed']['binary64_bits']]
    kernels = []
    for kind in range(5):
        for index in range(counts[kind]):
            name = f'{kind}-{index}.bin'
            actual = payloads[prefix+'kernel-results/'+name]
            item = dict(case=name, sha256=hashlib.sha256(actual).hexdigest())
            item['matches_mono_x86']='UNKNOWN: requires the oracle on this exact capture set'
            item['matches_native']='UNKNOWN: requires the emission variant on this exact capture set'
            if kind == 1:
                path=args.captures/name
                captured_bytes=path.read_bytes()
                if hashlib.sha256(captured_bytes).hexdigest()!=captured['inputs'][name]:
                    raise ValueError('Captured input changed: '+name)
                item['matches_binary32'] = actual == evaluate(captured_bytes, True)
                item['matches_binary64'] = actual == evaluate(captured_bytes, False)
            kernels.append(item)
    output.mkdir(parents=True)
    for name, data in payloads.items():
        destination = output/name.removeprefix(prefix)
        destination.parent.mkdir(parents=True, exist_ok=True)
        destination.write_bytes(data)
    properties = subprocess.run([*adb, 'shell', 'getprop'], capture_output=True, check=True).stdout
    (output/'device-properties.txt').write_bytes(properties)
    log = subprocess.run([*adb, 'logcat', '-d', '-v', 'threadtime'], capture_output=True, check=True).stdout
    (output/'logcat.txt').write_bytes(log)
    report = dict(status='MEASURED_ANDROID_REQUIRES_REVIEW', serial=args.serial,
                  apk_sha256=installed_hash,
                  rows=rows, kernels=kernels, captures=sum(counts), cal_captures=counts[1],
                  limitation='Standalone official Mono embedding; game JIT startup options not proven identical. No emission rule adopted.',
                  result_hashes={name:hashlib.sha256(data).hexdigest() for name,data in payloads.items()})
    (output/'report.json').write_text(json.dumps(report, indent=2)+'\n')
    print(json.dumps(dict(status=report['status'], discriminants=len(rows), kernels=len(kernels), output=str(output))))


if __name__ == '__main__':
    main()
