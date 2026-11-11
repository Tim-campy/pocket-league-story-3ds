"""Run the asset-free GC fixture in a fresh, isolated Azahar portable directory."""
import argparse
import hashlib
import json
import os
from pathlib import Path
import subprocess
import time

ROOT=Path(__file__).resolve().parents[1]
AZAHAR=ROOT/'build/deps/arm11-tools/azahar-2126.2/azahar-windows-msvc-2126.2'


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output',type=Path,required=True)
    parser.add_argument('--model',choices=['new','old'],default='new')
    parser.add_argument('--timeout',type=int,default=120)
    parser.add_argument('--gdb-port',type=int)
    parser.add_argument('--case',choices=['gc','tls'],default='gc')
    args=parser.parse_args();output=args.output.resolve()
    if not output.is_relative_to(ROOT/'build') or output.exists():
        raise ValueError('Use a new directory under build/')
    binary=ROOT/'build/ctr-gc-fixture'/('tracing_gc_fixture.3dsx' if args.case=='gc' else 'ctr_tls_lifecycle.3dsx')
    sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest()
    proof=json.loads((binary.parent/'build-proof.json').read_text())
    if sha(binary)!=proof['executable_sha256' if args.case=='gc' else 'tls_executable_sha256']:
        raise ValueError('Fixture build hash differs')
    launcher=output/'launcher';launcher.mkdir(parents=True)
    # Only the open-source emulator tool files, never its existing user data.
    paths=[p for p in AZAHAR.iterdir() if p.is_file() and (p.suffix in ['.exe','.dll'] or p.name=='qt.conf')]
    paths.extend(p for p in (AZAHAR/'plugins').rglob('*') if p.is_file())
    for source in paths:
        target=launcher/source.relative_to(AZAHAR)
        target.parent.mkdir(parents=True,exist_ok=True)
        os.link(source,target)
    config=launcher/'user/config';config.mkdir(parents=True)
    sd=launcher/'user/sdmc/pls-benchmark';sd.mkdir(parents=True)
    settings=f'''[System]
is_new_3ds\\default=false
is_new_3ds={'true' if args.model=='new' else 'false'}
[Core]
cpu_clock_percentage\\default=false
cpu_clock_percentage=100
[Renderer]
frame_limit\\default=false
frame_limit=100
[UI]
firstStart\\default=false
firstStart=false
confirmClose\\default=false
confirmClose=false
'''
    ini=config/'qt-config.ini';ini.write_text(settings)
    startup=subprocess.STARTUPINFO();startup.dwFlags|=subprocess.STARTF_USESHOWWINDOW;startup.wShowWindow=0
    started=time.monotonic()
    log=sd/'tracing-gc-fixture.log';error=sd/'tracing-gc-fixture.err'
    if args.case=='tls':log=sd.parent/'tls-probe.log'
    reason='TIMEOUT';code=None
    with (output/'emulator.stdout.log').open('wb') as stdout,(output/'emulator.stderr.log').open('wb') as stderr:
        command=[launcher/'azahar.exe']+(['-g',str(args.gdb_port)] if args.gdb_port else [])+[binary]
        process=subprocess.Popen(command,cwd=launcher,stdout=stdout,stderr=stderr,startupinfo=startup)
        (output/'pid.txt').write_text(str(process.pid))
        try:
            while time.monotonic()-started<args.timeout:
                text=log.read_text(errors='replace') if log.exists() else ''
                failure=error.read_text(errors='replace') if error.exists() else ''
                if '"status":"PASS"' in text: reason='PASS';break
                if failure.strip(): reason='GUEST_FAILURE';break
                code=process.poll()
                if code is not None:reason='EMULATOR_EXIT';break
                time.sleep(.25)
        finally:
            if process.poll() is None:process.terminate();process.wait(timeout=15)
    report=dict(status=reason,case=args.case,emulator_pid=process.pid,host_elapsed_seconds=time.monotonic()-started,
                model_requested=args.model,frame_limit=100,cpu_clock_percentage=100,
                image_sha256=sha(binary),emulator_sha256=sha(launcher/'azahar.exe'),
                guest_log=log.read_text(errors='replace') if log.exists() else None,
                guest_error=error.read_text(errors='replace') if error.exists() else None,
                limitation='Emulator fixture, not hardware performance or game boot.')
    (output/'result.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(report))
    if reason!='PASS':raise SystemExit(1)


if __name__=='__main__':main()
