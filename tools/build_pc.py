"""Build native fixtures or the game; a game build requires the user's APK."""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import re
from pc_compiler import CMAKE,NINJA,environment

ROOT=Path(__file__).resolve().parents[1]
APK_SHA='d557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8'


def digest(path):return hashlib.sha256(path.read_bytes()).hexdigest()


def image_readback(folder,apk,env):
    if not apk or not apk.is_file() or digest(apk)!=APK_SHA:
        raise ValueError('Image readback requires the authenticated local APK via --apk')
    assets=ROOT/'assets';manifest_path=assets/'converted/manifest.json'
    manifest=json.loads(manifest_path.read_text(encoding='utf-8'))
    if manifest['apk_sha256']!=APK_SHA:raise ValueError('Converted assets have another source APK')
    expected=[]
    for image in manifest['images']:
        target=(assets/image['path']).resolve(strict=True)
        if not target.is_relative_to(assets.resolve()) or digest(target)!=image['sha256']:
            raise ValueError('Converted image path or digest differs')
        if target.stat().st_size!=image['width']*image['height']*4:
            raise ValueError('Converted image extent differs')
        expected.append(f"{image['width']}\t{image['height']}\t{image['path']}\n")
    index=assets/'converted/images.tsv'
    if index.read_text(encoding='utf-8')!=''.join(expected):raise ValueError('Image index differs from manifest')
    exe=folder/'asset_roundtrip_test.exe'
    process=subprocess.run([str(exe),str(assets)],cwd=ROOT,env=env,capture_output=True,check=True)
    (folder/'image-readback.log').write_bytes(process.stdout+process.stderr)
    report=json.loads(process.stdout)
    if report['rgba8_files']!=len(expected) or report['rgba8_bytes']!=sum(i['bytes'] for i in manifest['images']):
        raise ValueError('Native image test coverage differs from manifest')
    report.update(operation='native-SDL2-private-RGBA8-readback',assets_published=False,
        apk_sha256=APK_SHA,manifest_sha256=digest(manifest_path),index_sha256=digest(index),
        executable_sha256=digest(exe),stdout_sha256=hashlib.sha256(process.stdout).hexdigest(),
        sources=[dict(path=p,sha256=digest(ROOT/p)) for p in
            ('tools/build_pc.py','tests/kairo/asset_roundtrip.cpp','src/kairo/platform/sdl/backend.cpp',
             'src/kairo/platform/sdl/backend.hpp','src/kairo/api/platform.hpp')])
    (ROOT/'config/phase2-image-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(report))


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--fixtures-only',action='store_true')
    parser.add_argument('--asset-readback',action='store_true',help='Check all converted local images; requires --apk')
    parser.add_argument('--apk',type=Path)
    parser.add_argument('--run',action='store_true',help='Run only a successfully linked generated game, for up to 20 seconds')
    args=parser.parse_args()
    if not args.fixtures_only:
        if not args.apk or not args.apk.is_file():parser.error('Forneça seu próprio APK local com --apk. Nenhum jogo é baixado.')
        if hashlib.sha256(args.apk.read_bytes()).hexdigest()!=APK_SHA:parser.error('APK diferente; confirme a versão no pipeline antes de compilar.')
    sdk=ROOT/'build/deps/SDL2-2.32.10/cmake'
    if not sdk.is_dir():parser.error('SDL2 development SDK missing; no dependency is installed automatically.')
    env=environment();folder=ROOT/'build/pc';folder.mkdir(parents=True,exist_ok=True)
    commands=[[CMAKE,'-S',ROOT,'-B',folder,'-G','Ninja','-DCMAKE_MAKE_PROGRAM='+str(NINJA),'-DCMAKE_BUILD_TYPE=Debug','-DSDL2_DIR='+str(sdk)],
              [CMAKE,'--build',folder,*(['--clean-first'] if args.fixtures_only else ['--target','pc_game'])]]
    if args.fixtures_only:commands.append([CMAKE.parent/'ctest.exe','--test-dir',folder,'--output-on-failure'])
    if not args.fixtures_only:
        attempts=ROOT/'config/phase2-boot-attempts.json'
        history=json.loads(attempts.read_text(encoding='utf-8')) if attempts.exists() else dict(operation='generated-game-build-and-boot-attempts',attempts=[])
        attempt=dict(number=len(history['attempts'])+1,apk_sha256=APK_SHA,generated_game_sources=[dict(path=p.relative_to(ROOT).as_posix(),sha256=digest(p)) for p in sorted((ROOT/'src/game').rglob('*.cpp'))],game_boot=False,title_verified=False,menu_verified=False)
        attempt_folder=folder/'attempts'/str(attempt['number'])
        attempt_folder.mkdir(parents=True,exist_ok=False)
        attempt['logs']=[]
    for index,command in enumerate(commands):
        result=subprocess.run([str(p) for p in command],cwd=ROOT,env=env,capture_output=True)
        log=folder/f'step-{index}.log'
        log.write_bytes(result.stdout+result.stderr)
        if not args.fixtures_only:
            retained=attempt_folder/log.name
            retained.write_bytes(log.read_bytes())
            attempt['logs'].append(dict(path=retained.relative_to(ROOT).as_posix(),sha256=digest(retained)))
        if result.returncode:
            if not args.fixtures_only:
                messages=(result.stdout+result.stderr).decode('utf-8',errors='replace')
                diagnostics=[line for line in messages.splitlines() if re.search(r'(error [A-Z]+\d+|fatal error|undefined reference)',line)]
                attempt.update(stage='configure-failed' if index==0 else 'compile-or-link-failed',exit_code=result.returncode,diagnostics=diagnostics[:8],log_sha256=digest(folder/f'step-{index}.log'))
                history['attempts'].append(attempt);attempts.write_text(json.dumps(history,indent=2)+'\n',encoding='utf-8',newline='\n')
            raise RuntimeError(f'Native build failed; see {folder}/step-{index}.log')
    if not args.fixtures_only:
        attempt.update(stage='linked',exit_code=0)
        if args.run:
            exe=folder/'pc_game.exe'
            process=subprocess.Popen([str(exe),str(ROOT/'assets')],cwd=ROOT,env=env,stdout=subprocess.PIPE,stderr=subprocess.PIPE)
            try:stdout,stderr=process.communicate(timeout=20)
            except subprocess.TimeoutExpired:process.terminate();stdout,stderr=process.communicate(timeout=10);attempt['stopped_at_timeout']=True
            for name,data in [('game-run.stdout',stdout),('game-run.stderr',stderr)]:
                log=attempt_folder/name;log.write_bytes(data)
                attempt['logs'].append(dict(path=log.relative_to(ROOT).as_posix(),sha256=digest(log)))
            attempt.update(stage='process-executed',process_exit_code=process.returncode,executable_sha256=digest(exe))
        history['attempts'].append(attempt);attempts.write_text(json.dumps(history,indent=2)+'\n',encoding='utf-8',newline='\n')
        print(json.dumps(attempt));return
    result=dict(native_fixtures='PASS',game_boot=False,title=False,menu=False,match=False,
                compiler='existing MSVC',sdl2='2.32.10',game_assets_used=False)
    (ROOT/'config/phase2-sdl-verification.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(result))
    if args.asset_readback:image_readback(folder,args.apk,env)


if __name__=='__main__':main()
