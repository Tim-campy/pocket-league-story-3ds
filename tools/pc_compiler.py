"""Use the existing Visual Studio C++ environment without installing anything."""
import os
import hashlib
import json
import shutil
from pathlib import Path
import subprocess

VS=Path('C:/Program Files/Microsoft Visual Studio/18/Community')
CMAKE=VS/'Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe'
NINJA=VS/'Common7/IDE/CommonExtensions/Microsoft/CMake/Ninja/ninja.exe'


_CONSOLE_UTF8=False


def utf8_console():
    """cl.exe localizes /showIncludes in the console output code page (OEM 850
    here), while CMake writes the Ninja prefix as UTF-8. Ninja compares bytes, so
    children must inherit code page 65001. Restored when this process exits."""
    global _CONSOLE_UTF8
    if _CONSOLE_UTF8 or os.name!='nt':return
    import atexit,ctypes
    kernel=ctypes.windll.kernel32
    previous=kernel.GetConsoleOutputCP()
    if previous and previous!=65001 and kernel.SetConsoleOutputCP(65001):
        atexit.register(kernel.SetConsoleOutputCP,previous)
    _CONSOLE_UTF8=True


def build_jobs(default=2):
    """Parallel compile/test jobs; PLS_BUILD_JOBS (set by verify_phase2 --jobs) caps it."""
    value=os.environ.get('PLS_BUILD_JOBS')
    if not value:return default
    if not value.isdigit() or not 1<=int(value)<=8:raise ValueError('PLS_BUILD_JOBS must be 1..8')
    return min(default,int(value)) if default>0 else int(value)


def environment():
    utf8_console()
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


def showincludes_prefix(folder,env):
    """Probe actual compiler bytes: VSLANG can be ignored without English MUI."""
    folder=Path(folder).resolve();folder.mkdir(parents=True,exist_ok=True)
    header=folder/'own_prefix.hpp';source=folder/'own_prefix.cpp'
    header.write_text('constexpr int own_prefix_value=1;\n',encoding='utf8',newline='\n')
    source.write_text('#include "own_prefix.hpp"\nint own_prefix(){return own_prefix_value;}\n',encoding='utf8',newline='\n')
    compiler=Path(shutil.which('cl.exe',path=env['PATH']))
    result=subprocess.run([str(compiler),'/nologo','/c','/showIncludes','/Fo'+str(folder/'own_prefix.obj'),str(source)],cwd=folder,env=env,capture_output=True,timeout=60)
    raw=result.stdout+result.stderr;(folder/'compiler.log').write_bytes(raw)
    if result.returncode:raise RuntimeError('MSVC include-prefix probe failed')
    needle=str(header).encode('utf8');matches=[line[:line.index(needle)]for line in raw.splitlines()if needle in line]
    if len(matches)!=1:raise RuntimeError('Cannot identify unique MSVC include prefix')
    prefix=matches[0].decode('utf8')
    if not prefix or '\n'in prefix or '\r'in prefix:raise RuntimeError('Invalid MSVC include prefix')
    proof=dict(compiler_sha256=hashlib.sha256(compiler.read_bytes()).hexdigest(),prefix=prefix,stdout_sha256=hashlib.sha256(raw).hexdigest(),vslang_requested=env.get('VSLANG'))
    (folder/'probe.json').write_text(json.dumps(proof,indent=2)+'\n',encoding='utf8',newline='\n')
    return proof


def audit_ninja_dependencies(folder,objects,env):
    """Refuse zero-dependency objects or a missing required project header."""
    folder=Path(folder).resolve();proof={}
    for obj,header in objects.items():
        result=subprocess.run([str(NINJA),'-C',str(folder),'-t','deps',obj],env=env,capture_output=True,timeout=60)
        if result.returncode:raise RuntimeError('Ninja dependency query failed')
        text=result.stdout.decode('utf8');lines=text.splitlines();header=Path(header).resolve()
        import re
        match=re.search(r'#deps (\d+)',lines[0]if lines else '')
        count=int(match.group(1))if match else 0
        dependencies=[Path(line.strip())for line in lines[1:]if line.strip()]
        if count<=0 or not any((path if path.is_absolute()else folder/path).resolve()==header for path in dependencies):
            raise RuntimeError('Ninja omitted required header dependencies: '+obj)
        proof[obj]=dict(dependencies=count,required_header=str(header),header_sha256=hashlib.sha256(header.read_bytes()).hexdigest(),ninja_stdout_sha256=hashlib.sha256(result.stdout).hexdigest())
    return proof
