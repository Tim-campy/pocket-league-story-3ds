"""Capture an owned child and stop that PID on a diagnostic translation gap.

Logs stay at caller-provided private paths. A gap remains fatal even if the
child catches it or exits zero. No screen or method coverage is inferred.
"""
from pathlib import Path
import subprocess
import threading
import time

GAP_MARKER=b'PLS_TRANSLATION_GAP='


def run_native_process(command,*,cwd,env,stdout_path,stderr_path,timeout_seconds,
                       diagnostic=False):
    if timeout_seconds<=0:raise ValueError('A positive child timeout is required')
    outputs=[Path(stdout_path),Path(stderr_path)]
    if outputs[0].resolve()==outputs[1].resolve():raise ValueError('Separate output logs required')
    for path in outputs:path.parent.mkdir(parents=True,exist_ok=True)
    gap=threading.Event();errors=[];started=time.monotonic()
    process=subprocess.Popen([str(v) for v in command],cwd=cwd,env=env,
        stdout=subprocess.PIPE,stderr=subprocess.PIPE,bufsize=0)

    def drain(stream,path,scan):
        tail=b''
        try:
            with path.open('wb')as target:
                while True:
                    chunk=stream.read(16384)
                    if not chunk:break
                    target.write(chunk)
                    if scan:
                        combined=tail+chunk
                        if GAP_MARKER in combined:gap.set()
                        tail=combined[-(len(GAP_MARKER)-1):]
        except BaseException as error:errors.append(type(error).__name__)
        finally:stream.close()

    readers=[threading.Thread(target=drain,args=(process.stdout,outputs[0],False),daemon=True),
             threading.Thread(target=drain,args=(process.stderr,outputs[1],diagnostic),daemon=True)]
    for reader in readers:reader.start()
    stopped_reason=None
    while process.poll()is None:
        if diagnostic and gap.is_set():stopped_reason='translation-gap';break
        if time.monotonic()-started>=timeout_seconds:stopped_reason='timeout';break
        gap.wait(.025)if diagnostic else time.sleep(.025)
    if stopped_reason and process.poll()is None:
        process.terminate()  # Only the child created above, never a name search.
        try:process.wait(timeout=5)
        except subprocess.TimeoutExpired:process.kill();process.wait(timeout=5)
    else:process.wait()
    for reader in readers:reader.join(timeout=5)
    if any(reader.is_alive()for reader in readers):raise RuntimeError('Owned child output pipe did not close')
    if errors:raise RuntimeError('Child output capture failed: '+','.join(errors))
    return dict(process_id=process.pid,process_exit_code=process.returncode,
        elapsed_seconds=time.monotonic()-started,stopped_reason=stopped_reason,
        translation_gap_detected=diagnostic and gap.is_set(),
        diagnostic=diagnostic,game_boot=False,title_verified=False,menu_verified=False)
