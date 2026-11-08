"""Use the existing Visual Studio C++ environment without installing anything."""
import os
from pathlib import Path
import subprocess

VS=Path('C:/Program Files/Microsoft Visual Studio/18/Community')
CMAKE=VS/'Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe'
NINJA=VS/'Common7/IDE/CommonExtensions/Microsoft/CMake/Ninja/ninja.exe'


def environment():
    # Select installed headers/libs directly, avoiding cmd quoting and env dumps.
    vc=VS/'VC/Tools/MSVC/14.51.36231'
    kits=Path(os.environ.get('ProgramFiles(x86)','C:/Program Files (x86)'))/'Windows Kits/10'
    versions=sorted((p.name for p in (kits/'Include').iterdir() if (p/'um/Windows.h').is_file()),key=lambda s:tuple(int(v) for v in s.split('.')))
    if not versions:raise RuntimeError('Existing Windows SDK headers missing; no tools installed')
    version=versions[-1]
    env=os.environ.copy()
    env['VSLANG']='1033'  # Stable /showIncludes prefix for Ninja dependency parsing.
    env['INCLUDE']=';'.join(str(p) for p in [vc/'include']+[kits/'Include'/version/n for n in ('ucrt','um','shared','winrt','cppwinrt')])
    env['LIB']=';'.join(str(p) for p in [vc/'lib/x64',kits/'Lib'/version/'ucrt/x64',kits/'Lib'/version/'um/x64'])
    env['PATH']=str(vc/'bin/Hostx64/x64')+';'+str(kits/'bin'/version/'x64')+';'+env['PATH']
    return env
