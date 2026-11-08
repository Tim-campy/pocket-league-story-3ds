"""Inventory existing tools only. Never download, install or run the game."""
import ctypes
import hashlib
import json
import os
from pathlib import Path
import shutil
import struct
import subprocess
import sys

ROOT=Path(__file__).resolve().parents[1]
VS=Path('C:/Program Files/Microsoft Visual Studio/18/Community')


def run_version(command):
    result=subprocess.run([str(p) for p in command],capture_output=True,text=True,timeout=30)
    return dict(exit_code=result.returncode,output=(result.stdout+result.stderr).strip())


def file_version(path):
    version=ctypes.WinDLL('version',use_last_error=True)
    size=version.GetFileVersionInfoSizeW(ctypes.c_wchar_p(str(path)),None)
    if not size:return 'UNKNOWN'
    buffer=ctypes.create_string_buffer(size)
    if not version.GetFileVersionInfoW(ctypes.c_wchar_p(str(path)),0,size,buffer):return 'UNKNOWN'
    pointer=ctypes.c_void_p();length=ctypes.c_uint()
    if not version.VerQueryValueW(buffer,ctypes.c_wchar_p('\\'),ctypes.byref(pointer),ctypes.byref(length)):return 'UNKNOWN'
    fields=struct.unpack('<13I',ctypes.string_at(pointer,52))
    return '.'.join(map(str,(fields[2]>>16,fields[2]&65535,fields[3]>>16,fields[3]&65535)))


def first(paths):
    return next((Path(p) for p in paths if p and Path(p).is_file()),None)


def entry(name,path,version_command=None,role='development tool'):
    if path is None:return dict(name=name,status='NOT_FOUND_WITHIN_SEARCH',version='UNKNOWN',role=role)
    result=dict(name=name,status='PRESENT',path=str(path),sha256=hashlib.sha256(path.read_bytes()).hexdigest(),role=role)
    result['version']=run_version(version_command)['output'] if version_command else file_version(path)
    return result


def main():
    csc=first([os.environ.get('ROSLYN_CSC'),VS/'MSBuild/Current/Bin/Roslyn/csc.exe'])
    cmake=first([shutil.which('cmake'),VS/'Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe'])
    private_dotnet=first([VS/'dotnet/net10.0/runtime/dotnet.exe'])
    entries=[entry('Python',Path(sys.executable),[sys.executable,'--version']),
        entry('Git',first([shutil.which('git')]),['git','--version']),
        entry('Node',first([shutil.which('node')]),['node','--version']),
        entry('REA',first([Path(os.environ['APPDATA'])/'npm/node_modules/rea-agents/scripts/rea.mjs']),
              ['node',Path(os.environ['APPDATA'])/'npm/node_modules/rea-agents/scripts/rea.mjs','--version']),
        entry('Roslyn csc',csc,[csc,'/version'] if csc else None),
        entry('CMake',cmake,[cmake,'--version'] if cmake else None),
        entry('MSVC C++',first([VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe'])),
        entry('.NET private VS runtime',private_dotnet,[private_dotnet,'--list-runtimes'] if private_dotnet else None)]
    dotnet=first([shutil.which('dotnet')])
    if dotnet:
        entries.append(entry('.NET PATH runtime',dotnet,[dotnet,'--list-runtimes']))
        sdk=run_version([dotnet,'--list-sdks'])['output']
        entries.append(dict(name='.NET SDK on PATH',status='PRESENT' if sdk else 'NOT_FOUND_WITHIN_SEARCH',version=sdk or 'UNKNOWN',role='not needed by inventory; pinned csc + private runtime used'))
    for directory in [Path.home()/'Downloads/QuiverLauncher-win-Portable/current',Path.home()/'Downloads/ConkerRecompiled-V0.1.4-Windows']:
        path=directory/'SDL2.dll'
        if path.is_file():entries.append(entry('SDL2 runtime only',path,role='runtime of another program; not an SDL2 development SDK'))
    sdl_roots=[Path(v) for v in [os.environ.get('SDL2_DIR'),os.environ.get('SDL2_ROOT')] if v]
    sdl_roots += [Path('C:/SDL2'),Path('C:/msys64/mingw64'),Path('C:/vcpkg/installed/x64-windows')]
    header=first([p/s for p in sdl_roots for s in ('include/SDL2/SDL.h','include/SDL.h')])
    entries.append(entry('SDL2 development headers',header,role='header detection only; linkage/build still unverified'))
    devkit=Path(os.environ.get('DEVKITPRO','C:/devkitPro'))
    for name,path in [('devkitPro pacman',devkit/'msys2/usr/bin/pacman.exe'),('devkitARM',devkit/'devkitARM/bin/arm-none-eabi-gcc.exe'),
        ('libctru',devkit/'libctru/include/3ds.h'),('citro2d',devkit/'libctru/include/citro2d.h'),
        ('citro3d',devkit/'libctru/include/citro3d.h'),('tex3ds',devkit/'tools/bin/tex3ds.exe'),
        ('makerom',devkit/'tools/bin/makerom.exe'),('bannertool',devkit/'tools/bin/bannertool.exe')]:
        entries.append(entry(name,first([shutil.which(path.stem),path])))
    assetripper=first([shutil.which('AssetRipper'),ROOT/'build/tools/assetripper/AssetRipper.GUI.Free.exe'])
    entries.append(entry('AssetRipper',assetripper))
    entries.append(entry('Azahar',first([shutil.which('azahar'),Path.home()/'AppData/Local/Azahar/azahar.exe',Path('C:/Program Files/Azahar/azahar.exe')])))
    report=dict(operation='existing-tools-inventory',tools=entries,installed_by_this_script=False,
        search_scope='PATH, environment overrides, VS18 Community, bounded common devkitPro/SDL2/AssetRipper/Azahar paths; initial rg searches also covered Downloads, Local Programs, Program Files and project tools',
        limitation='NOT_FOUND_WITHIN_SEARCH is a bounded negative result, not proof that a tool exists nowhere on disk.')
    config=ROOT/'config';config.mkdir(exist_ok=True)
    (config/'toolchain-inventory.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
    lines=['# Ferramentas do port — inventário do ambiente','',
        'Medição local; nenhuma ferramenta foi instalada pelo inventário. Caminhos refletem esta máquina. '
        '`NOT_FOUND_WITHIN_SEARCH` significa não encontrada nos limites consultados, não uma busca universal do disco.','',
        '| Ferramenta | Estado | Versão medida | Papel |','|---|---|---|---|']
    for item in entries:
        version=item['version'].replace('\n','; ').replace('|','/');lines.append(f"| {item['name']} | {item['status']} | {version} | {item['role']} |")
    lines += ['', '## Roslyn sem SDK', '',
        'Os inventários AST/semânticos usam o csc moderno já instalado no Visual Studio e seu runtime privado .NET10. '
        'Isso dispensa SDK no PATH e não baixa pacotes. Os binários das ferramentas ficam em build/, ignorados. '
        'Referências de API do Android/Unity são lidas do repositório anterior fora do port, apenas para análise semântica; '
        'nenhuma DLL do jogo ou Unity é copiada para este repositório ou vinculada ao port.', '',
        '## Ausências e limites', '',
        'SDL2.dll encontrada em outros aplicativos não comprova headers, bibliotecas de link nem um backend SDL2 utilizável. '
        'devkitARM/libctru/citro2d/citro3d e tex3ds são necessários na etapa 3DS, mas não para estes inventários. '
        'makerom/bannertool somente seriam necessários para a rota CIA. Azahar e hardware ainda não foram usados.', '',
        'AssetRipper portátil 2.0.0 foi obtido da distribuição oficial após autorização explícita do usuário, '
        'somente sob build/tools/assetripper/. SHA-256 do ZIP: '
        '`9a7ef0e7c5c3ea5b90b4e6d855e2d98d5f7ec8c3f9e26fccbc194c6a7b01baf7`, '
        'igual ao digest publicado no release oficial. Nenhum SDK 3DS/SDL2 ou emulador foi instalado. O leitor próprio '
        'tools/unity15_metadata.py mede tabelas e metadata do Unity5.3 sem exportar conteúdo ou executar o jogo; '
        'não equivale à decodificação completa de blobs customizados. O relatório de assets explicita o que ficou UNKNOWN.', '',
        'Identidades e hashes das ferramentas efetivamente encontradas estão em '
        '[config/toolchain-inventory.json](../config/toolchain-inventory.json). O alvo principal é New3DS XL; '
        'RAM efetivamente disponível depende do modo de execução e ainda precisa ser medida no runtime.']
    (ROOT/'docs/toolchain.md').write_text('\n'.join(lines)+'\n',encoding='utf-8')
    print(json.dumps(dict(present=sum(v['status']=='PRESENT' for v in entries),not_found=[v['name'] for v in entries if v['status']!='PRESENT'])))


if __name__=='__main__':main()
