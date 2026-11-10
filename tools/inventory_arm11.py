"""Record the explicitly authorized benchmark tools; never fetch game content."""
import hashlib,json,subprocess
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
DKP=Path('C:/devkitPro')
def sha(p):return hashlib.file_digest(p.open('rb'),'sha256').hexdigest()
def main():
    selected={'devkitARM','devkitarm-gcc','devkitarm-binutils','devkitarm-newlib','devkitarm-crtls','devkitarm-rules','devkitarm-cmake','libctru','citro2d','citro3d','3ds-cmake','3ds-pkg-config','3dstools','3dslink','picasso','tex3ds'}
    text=subprocess.check_output([str(DKP/'msys2/usr/bin/bash.exe'),'--login','-c','pacman -Q'],text=True)
    versions=dict(line.split(maxsplit=1)for line in text.splitlines()if line.split()[0]in selected)
    packages=[]
    for name,version in sorted(versions.items()):
        files=[p for p in (DKP/'msys2/var/cache/pacman/pkg').glob(name+'-'+version+'-*.pkg.tar.*')if not p.name.endswith('.sig')]
        if len(files)!=1:raise ValueError('Exact package archive missing: '+name+' '+version)
        p=files[0];packages.append(dict(name=name,version=version,archive=p.name,bytes=p.stat().st_size,sha256=sha(p)))
    paths=[DKP/'devkitARM/bin/arm-none-eabi-g++.exe',DKP/'libctru/lib/libctru.a',DKP/'libctru/lib/libcitro2d.a',DKP/'libctru/lib/libcitro3d.a',ROOT/'build/deps/arm11-tools/azahar-windows-msvc-2126.2.zip',ROOT/'build/deps/arm11-tools/azahar-2126.2/azahar-windows-msvc-2126.2/azahar.exe',ROOT/'build/deps/arm11-media/lib/libfreetype.a']
    report=dict(operation='authorized-arm11-benchmark-tool-inventory',devkitpro_root='C:/devkitPro',packages=packages,azahar_version='2126.2',azahar_url='https://github.com/azahar-emu/azahar/releases/tag/2126.2',devkitpro_url='https://github.com/devkitPro/installer',files=[dict(path=str(p),bytes=p.stat().st_size,sha256=sha(p))for p in paths],backend_3ds_implemented=False,screen_design_decided=False)
    (ROOT/'config/phase2-arm11-tools.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf8')
    print(json.dumps(dict(packages=len(packages),files=len(paths),azahar='2126.2')))
if __name__=='__main__':main()
