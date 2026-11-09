"""Exercise the user's nonblocking SDL text-input development policy."""
import hashlib,json,subprocess
from pathlib import Path
from pc_compiler import CMAKE,environment
ROOT=Path(__file__).resolve().parents[1]
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
    folder=ROOT/'build/text-input-tests';folder.mkdir(parents=True,exist_ok=True)
    build=ROOT/'build/pc';env=environment()
    inputs=[ROOT/p for p in ['tools/test_text_input.py','CMakeLists.txt','tests/kairo/text_input_fixtures.cpp','src/kairo/api/text_input.hpp','src/kairo/common/text_input.cpp','src/kairo/platform/sdl/text_input.hpp','src/kairo/platform/sdl/text_input.cpp','src/kairo/api/platform.hpp','src/kairo/platform/sdl/backend.cpp','src/kairo/platform/sdl/backend.hpp','src/kairo/api/application.hpp','src/kairo/common/semantic_runtime.hpp']]
    inputs=sorted(set(inputs)|{p for p in (ROOT/'src/kairo').rglob('*')if p.is_file()and p.suffix in ('.cpp','.hpp','.inc')}|{p for p in (ROOT/'build/generated/mono-collation').glob('*.inc')})
    before={p.relative_to(ROOT).as_posix():sha(p)for p in inputs}
    command=[str(CMAKE),'--build',str(build),'--target','text_input_test']
    p=subprocess.run(command,cwd=ROOT,env=env,capture_output=True)
    (folder/'compile.log').write_bytes(p.stdout+p.stderr)
    if p.returncode:raise RuntimeError('See build/text-input-tests/compile.log; configure native fixtures first')
    exe=build/'text_input_test.exe';p=subprocess.run([str(exe)],cwd=ROOT,env=env,capture_output=True,timeout=30)
    (folder/'run.log').write_bytes(p.stdout+p.stderr)
    if p.returncode:raise RuntimeError('See build/text-input-tests/run.log')
    result=json.loads(p.stdout)
    if result.get('status')!='PASS' or result.get('assertions')!=32:raise ValueError('Incomplete SDL text input corpus')
    if any(sha(ROOT/path)!=digest for path,digest in before.items()):raise ValueError('Text input sources changed during test')
    result.update(operation='user-decided-PC-nonblocking-SDL-text-field',inputs_sha256=before,native_executable=dict(path=exe.relative_to(ROOT).as_posix(),sha256=sha(exe)),verified_boundary_ids=[],original_binaries_executed=False,game_assets_used=False,limitations=['Own SDL synthetic events and approved development policy; no claim of original Android IME equivalence.','ImeOnBlock has a String return type: initial text is returned after UI dispatch, without waiting for editing.','Display/input mode integers are retained without claiming JNI flag semantics. Nintendo 3DS swkbd remains Phase3 design.'])
    (ROOT/'config/phase2-text-input-tests.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps({k:result[k]for k in ['status','assertions','game_boot']}))
if __name__=='__main__':main()
