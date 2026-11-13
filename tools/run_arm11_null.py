"""Run an authenticated null benchmark with private inputs in isolated Azahar."""
import argparse
import hashlib
import json
import math
import os
from pathlib import Path
import subprocess
import sys
import time

ROOT = Path(__file__).resolve().parents[1]
AZAHAR = ROOT / 'build/deps/arm11-tools/azahar-2126.2/azahar-windows-msvc-2126.2'


def digest(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apk', type=Path, required=True)
    parser.add_argument('--image', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--scenario', choices=['menu', 'match', 'suite'], required=True)
    parser.add_argument('--model', choices=['new', 'old'], required=True)
    parser.add_argument('--timeout', type=int, default=300)
    parser.add_argument('--gdb-port', type=int)
    parser.add_argument('--asset-root', type=Path, default=ROOT/'assets')
    parser.add_argument('--rtc-unix',type=int,help='Diagnosis: fixed emulated RTC (Unix seconds) instead of the host clock')
    parser.add_argument('--read-delay-ms',type=int,help='Diagnosis only: artificial delay per real storage access')
    parser.add_argument('--virtual-clock',help='Deterministic benchmark clock start_ms,read_us,frame_ms')
    parser.add_argument('--profile-resources', action='store_true',help='Enable deferred load-stage diagnostics; omit for frame measurements')
    args = parser.parse_args()
    output, image = args.output.resolve(), args.image.resolve(strict=True)
    if not output.is_relative_to(ROOT / 'build') or output.exists():
        raise ValueError('Use a fresh directory under build/')
    proof = json.loads((image.parent / 'build-proof.json').read_text())
    launch_image_sha256 = digest(image)
    if launch_image_sha256 != proof['executable_sha256']:
        raise ValueError('Image differs from authenticated build')
    launcher = output / 'launcher'
    launcher.mkdir(parents=True)
    files = [p for p in AZAHAR.iterdir() if p.is_file() and
             (p.suffix in ['.exe', '.dll'] or p.name == 'qt.conf')]
    files.extend(p for p in (AZAHAR / 'plugins').rglob('*') if p.is_file())
    for source in files:
        target = launcher / source.relative_to(AZAHAR)
        target.parent.mkdir(parents=True, exist_ok=True)
        os.link(source, target)
    sd = launcher / 'user/sdmc'
    subprocess.run([sys.executable, ROOT / 'tools/prepare_arm11_sd.py',
                    '--apk', args.apk, '--image', image, '--scenario', args.scenario,
                    '--output', sd, '--asset-root', args.asset_root]+(['--virtual-clock',args.virtual_clock] if args.virtual_clock else [])+(['--read-delay-ms',str(args.read_delay_ms)] if args.read_delay_ms is not None else []), check=True)
    if args.profile_resources:
        (sd/'pls-benchmark/assets/converted/profile-resources.flag').write_text('diagnostic load timings\n')
    config = launcher / 'user/config'
    config.mkdir(parents=True)
    (config / 'qt-config.ini').write_text(
        '[System]\n' +
        (f'init_clock\\default=false\ninit_clock=1\ninit_time\\default=false\ninit_time={args.rtc_unix}\n' if args.rtc_unix else '') +
        'is_new_3ds\\default=false\nis_new_3ds=' +
        ('true' if args.model == 'new' else 'false') +
        '\n[Core]\ncpu_clock_percentage\\default=false\ncpu_clock_percentage=100\n'
        '[Renderer]\nframe_limit\\default=false\nframe_limit=100\n'
        '[UI]\nfirstStart\\default=false\nfirstStart=false\n'
        'confirmClose\\default=false\nconfirmClose=false\n')
    startup = subprocess.STARTUPINFO()
    startup.dwFlags |= subprocess.STARTF_USESHOWWINDOW
    startup.wShowWindow = 0
    private = sd / 'pls-benchmark'
    stderr = private / 'stderr.log'
    stdout = private / 'stdout.log'
    text = lambda p: p.read_text(errors='replace') if p.exists() else ''
    command = [launcher / 'azahar.exe']
    if args.gdb_port:
        command += ['-g', str(args.gdb_port)]
    command += [image]
    started = time.monotonic()
    status = 'TIMEOUT'
    with (output / 'emulator.stdout.log').open('wb') as out, (output / 'emulator.stderr.log').open('wb') as err:
        process = subprocess.Popen(command, cwd=launcher, stdout=out, stderr=err, startupinfo=startup)
        (output / 'pid.txt').write_text(str(process.pid))
        try:
            while time.monotonic() - started < args.timeout:
                if 'PLS_NULL_MEMORY=' in text(stdout):
                    status = 'WINDOW_COMPLETE'
                    break
                if any(message in text(stderr) for message in [
                    'Managed worker did not reach', 'GC stack bounds are invalid',
                    'Overlapping GC ranges', 'std::bad_alloc']):
                    status = 'GUEST_FAILURE'
                    break
                if process.poll() is not None:
                    status = 'EMULATOR_EXIT'
                    break
                time.sleep(.5)
        finally:
            if process.poll() is None:
                process.terminate()
                process.wait(timeout=15)
    frames = [json.loads(line.split('=', 1)[1]) for line in text(stdout).splitlines()
              if line.startswith('PLS_NULL_FRAME=')]
    manifest = json.loads((private / 'private-manifest.json').read_text())
    anchors=[json.loads(line.split('=',1)[1]) for line in text(stdout).splitlines() if line.startswith('PLS_NULL_REPLAY_ANCHOR=')]
    anchor_verified=manifest.get('replay_anchor')=='TitleForm.GetId()==1' and len(anchors)==1 and anchors[0].get('form_id')==1 and 0<=anchors[0].get('boot_frames',-1)<=12000
    expected = list(range(manifest['first_frame'], manifest['last_frame'] + 1))
    expected_form = 4 if args.scenario == 'menu' else 2
    if args.scenario == 'suite':
        report_file = private / 'result.txt'
        (output / 'result.txt').write_bytes(report_file.read_bytes() if report_file.exists() else b'')
    valid_frames = (anchor_verified and [row['frame'] for row in frames] == expected and
                    all(row['form_id'] == expected_form for row in frames))
    emulator_log = text(launcher / 'user/log/azahar_log.txt')
    model_expected = 'true' if args.model == 'new' else 'false'
    settings_verified = all(token in emulator_log for token in [
        'System_IsNew3ds: ' + model_expected,
        'Core_CPUClockPercentage: 100', 'Renderer_FrameLimit: 100'])
    if status == 'WINDOW_COMPLETE' and not (valid_frames and settings_verified):
        status = 'UNQUALIFIED_OUTPUT'
    if args.scenario == 'suite' and status in ('WINDOW_COMPLETE', 'UNQUALIFIED_OUTPUT'):
        result_text = (output / 'result.txt').read_text(errors='replace')
        status = 'SUITE_COMPLETE' if 'PLS_BENCH_STATUS complete' in result_text and settings_verified and anchor_verified else 'SUITE_INCOMPLETE'
    final_image_sha256 = digest(image)
    if final_image_sha256 != launch_image_sha256:
        status = 'ARTIFACT_CHANGED'
    report = dict(status=status, scenario=args.scenario, model_requested=args.model,
                  settings_verified=settings_verified, frames=len(frames),
                  expected_form_id=expected_form, frame_window_verified=valid_frames,
                  emulator_sha256=digest(launcher / 'azahar.exe'),
                  image_sha256=launch_image_sha256, image_after_sha256=final_image_sha256,
                  diagnostic_only=bool(proof.get('diagnostic_only', False)) or args.profile_resources,
                  resource_profile_enabled=args.profile_resources,
                  replay_anchor_verified=anchor_verified,replay_anchors=anchors,
                  host_elapsed_seconds=time.monotonic()-started,
                  stdout_sha256=digest(stdout) if stdout.exists() else None,
                  stderr_sha256=digest(stderr) if stderr.exists() else None,
                  limitation='Emulated elapsed system ticks, not hardware speed or scheduled CPU.')
    stages=[json.loads(line.split('=',1)[1]) for line in text(stderr).splitlines() if line.startswith('PLS_RESOURCE_STAGE=')]
    report['resource_stage_events']=stages
    report['resource_events_dropped']=sum(int(line.split('=',1)[1]) for line in text(stderr).splitlines() if line.startswith('PLS_RESOURCE_DROPPED='))
    aggregates=[json.loads(line.split('=',1)[1]) for line in text(stderr).splitlines() if line.startswith('PLS_RESOURCE_AGGREGATE=')]
    report['resource_stage_aggregates']=aggregates
    report['resource_aggregates_dropped']=sum(int(line.split('=',1)[1]) for line in text(stderr).splitlines() if line.startswith('PLS_RESOURCE_AGGREGATE_DROPPED='))
    report['resource_aggregate_profile_complete']=bool(aggregates) and report['resource_aggregates_dropped']==0
    if status == 'WINDOW_COMPLETE':
        values = sorted(row['wall_ns'] / 1e6 for row in frames)
        report['elapsed_ms'] = dict(mean=sum(values)/len(values),
                                   p95=values[math.ceil(.95*len(values))-1], maximum=values[-1])
        report['form_ids'] = sorted({row['form_id'] for row in frames})
    (output / 'result.json').write_text(json.dumps(report, indent=2)+'\n')
    # Detailed events stay in the private receipt, not megabytes of terminal output.
    print(json.dumps({**{k:v for k,v in report.items() if k not in {'resource_stage_events','resource_stage_aggregates'}},'resource_stage_event_count':len(stages),'resource_stage_aggregate_count':len(aggregates)}))
    if status != 'WINDOW_COMPLETE':
        raise SystemExit(1)


if __name__ == '__main__':
    main()
