"""Read completed private device results without installing or launching an APK."""
import argparse
import hashlib
import io
import json
from pathlib import Path
import subprocess
import tarfile
from run_x86 import predictions, single
from cal_models import evaluate

ROOT = Path(__file__).resolve().parents[2]
PACKAGE = 'org.plsresearch.floatprobe'


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--adb', required=True, type=Path)
    parser.add_argument('--serial', required=True)
    parser.add_argument('--output', required=True, type=Path)
    args = parser.parse_args()
    output = args.output.resolve()
    if not output.is_relative_to((ROOT/'build').resolve()) or output.exists():
        raise ValueError('Use a fresh output directory under ignored build/')
    adb = [str(args.adb), '-s', args.serial]
    installed = subprocess.run([*adb, 'shell', 'pm', 'path', PACKAGE], capture_output=True, text=True, check=True).stdout.strip().splitlines()
    if len(installed)!=1 or not installed[0].startswith('package:/'):
        raise ValueError('Expected the standalone numerical oracle APK')
    installed_path=installed[0].removeprefix('package:')
    installed_hash=subprocess.run([*adb, 'shell', 'sha256sum', installed_path], capture_output=True, text=True, check=True).stdout.split()[0]
    proof=json.loads((ROOT/'build/fp-android/build-proof.json').read_text())
    if installed_hash!=proof['apk_sha256']:
        raise ValueError('Installed APK differs from the authenticated local build')
    # Restrict extraction to outputs; never pull the private oracle DLLs/inputs.
    result = subprocess.run([*adb, 'exec-out', 'run-as', PACKAGE, 'tar', '-cf', '-',
                             'files/probe/status.txt', 'files/probe/discriminants.tsv',
                             'files/probe/cil.tsv', 'files/probe/kernel-results'],
                            capture_output=True, check=True)
    payloads = {}
    allowed={'files/probe/'+name for name in ['status.txt','discriminants.tsv','cil.tsv']}
    allowed.update(f'files/probe/kernel-results/{kind}-{index}.bin' for kind in range(5) for index in range(16))
    with tarfile.open(fileobj=io.BytesIO(result.stdout)) as archive:
        for member in archive:
            if member.isdir():
                continue
            path = Path(member.name)
            if not member.isfile() or path.is_absolute() or '..' in path.parts or member.name not in allowed:
                raise ValueError('Unexpected result archive entry')
            payloads[member.name] = archive.extractfile(member).read()
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
        for index in range(16):
            name = f'{kind}-{index}.bin'
            actual = payloads[prefix+'kernel-results/'+name]
            item = dict(case=name, sha256=hashlib.sha256(actual).hexdigest())
            for oracle in ['mono', 'native']:
                item['matches_'+oracle] = actual == (ROOT/f'build/hot-methods/{oracle}-results'/name).read_bytes()
            if kind == 1:
                captured = (ROOT/'build/hot-input-capture/inputs'/name).read_bytes()
                item['matches_binary32'] = actual == evaluate(captured, True)
                item['matches_binary64'] = actual == evaluate(captured, False)
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
                  rows=rows, kernels=kernels, captures=80, cal_captures=16,
                  limitation='Standalone official Mono embedding; game JIT startup options not proven identical. No emission rule adopted.',
                  result_hashes={name:hashlib.sha256(data).hexdigest() for name,data in payloads.items()})
    (output/'report.json').write_text(json.dumps(report, indent=2)+'\n')
    print(json.dumps(dict(status=report['status'], discriminants=len(rows), kernels=len(kernels), output=str(output))))


if __name__ == '__main__':
    main()
