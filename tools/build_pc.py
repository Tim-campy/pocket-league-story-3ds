"""Build native fixtures or the game; a game build requires the user's APK."""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
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
    args=parser.parse_args()
    if not args.fixtures_only:
        if not args.apk or not args.apk.is_file():parser.error('Forneça seu próprio APK local com --apk. Nenhum jogo é baixado.')
        if hashlib.sha256(args.apk.read_bytes()).hexdigest()!=APK_SHA:parser.error('APK diferente; confirme a versão no pipeline antes de compilar.')
        parser.error('Game target not ready: native fixtures are not counted as game boot.')
    sdk=ROOT/'build/deps/SDL2-2.32.10/cmake'
    if not sdk.is_dir():parser.error('SDL2 development SDK missing; no dependency is installed automatically.')
    env=environment();folder=ROOT/'build/pc';folder.mkdir(parents=True,exist_ok=True)
    commands=[[CMAKE,'-S',ROOT,'-B',folder,'-G','Ninja','-DCMAKE_MAKE_PROGRAM='+str(NINJA),'-DCMAKE_BUILD_TYPE=Debug','-DSDL2_DIR='+str(sdk)],
              [CMAKE,'--build',folder,'--clean-first'],
              [CMAKE.parent/'ctest.exe','--test-dir',folder,'--output-on-failure']]
    for index,command in enumerate(commands):
        result=subprocess.run([str(p) for p in command],cwd=ROOT,env=env,capture_output=True)
        (folder/f'step-{index}.log').write_bytes(result.stdout+result.stderr)
        if result.returncode:raise RuntimeError(f'Native build failed; see {folder}/step-{index}.log')
    result=dict(native_fixtures='PASS',game_boot=False,title=False,menu=False,match=False,
                compiler='existing MSVC',sdl2='2.32.10',game_assets_used=False)
    (ROOT/'config/phase2-sdl-verification.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(result))
    if args.asset_readback:image_readback(folder,args.apk,env)


if __name__=='__main__':main()
