"""Prepare the explicitly authorized SDL2 development SDK, locally in build/."""
import argparse
import hashlib
import json
from pathlib import Path
import urllib.request
import zipfile

ROOT=Path(__file__).resolve().parents[1]
VERSION='2.32.10'
PACKAGE_SHA256='af347939395a58b365846aaea27391e69f9ec9d4dd650d6ac40802159b418a6e'
URL='https://github.com/libsdl-org/SDL/releases/download/release-2.32.10/SDL2-devel-2.32.10-VC.zip'


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--fetch',action='store_true',help='Explicit acquisition, already authorized for Phase2 by user')
    args=parser.parse_args()
    base=ROOT/'build/deps';base.mkdir(parents=True,exist_ok=True)
    package=base/f'SDL2-devel-{VERSION}-VC.zip'
    if not package.is_file():
        if not args.fetch:parser.error('SDL2 SDK missing; use --fetch only with user authorization')
        with urllib.request.urlopen(URL,timeout=60) as response:package.write_bytes(response.read())
    digest=hashlib.sha256(package.read_bytes()).hexdigest()
    if digest!=PACKAGE_SHA256:raise ValueError('Official SDL2 package hash differs')
    with zipfile.ZipFile(package) as archive:
        for member in archive.infolist():
            if not (base/member.filename).resolve().is_relative_to(base.resolve()):raise ValueError('Unsafe SDK path')
        archive.extractall(base)
    sdk=base/('SDL2-'+VERSION)
    inputs={p:hashlib.sha256((sdk/p).read_bytes()).hexdigest() for p in ['include/SDL.h','lib/x64/SDL2.lib','lib/x64/SDL2.dll','cmake/sdl2-config.cmake']}
    result=dict(operation='authorized-local-SDL2-development-SDK-preparation',version=VERSION,
                sdk=sdk.relative_to(ROOT).as_posix(),package_sha256=digest,source=URL,files=inputs,
                global_install=False,other_dependencies_installed=False)
    (ROOT/'config/sdl2-sdk.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(result))


if __name__=='__main__':main()
