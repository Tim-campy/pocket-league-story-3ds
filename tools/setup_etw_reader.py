"""Prepare the MIT Microsoft TraceEvent reader locally; no SDK installation."""
import hashlib
import json
import subprocess
import sys
import urllib.request
import zipfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths

URL = ('https://api.nuget.org/v3-flatcontainer/microsoft.diagnostics.tracing.traceevent/'
       '3.2.8/microsoft.diagnostics.tracing.traceevent.3.2.8.nupkg')
SHA = '37284f885e75326bbd1858bf19f20c9da2818fec7a3bd49803209209be5fd38d'


def main():
    folder = ROOT/'build/deps/trace-parser'
    folder.mkdir(parents=True, exist_ok=True)
    package = folder/'traceevent.nupkg'
    if not package.exists():
        package.write_bytes(urllib.request.urlopen(URL, timeout=60).read())
    if hashlib.sha256(package.read_bytes()).hexdigest() != SHA:
        raise ValueError('TraceEvent package hash differs')
    libraries = []
    with zipfile.ZipFile(package) as archive:
        metadata = archive.read('Microsoft.Diagnostics.Tracing.TraceEvent.nuspec')
        if b'<license type="expression">MIT</license>' not in metadata:
            raise ValueError('Expected MIT license declaration absent')
        (folder/'TraceEvent.nuspec').write_bytes(metadata)
        for name in archive.namelist():
            if name.startswith('lib/netstandard2.0/') and name.endswith('.dll'):
                target = folder/Path(name).name
                target.write_bytes(archive.read(name))
                libraries.append(target)
    compiler, runtime, framework = compiler_paths()
    references = [framework/(name+'.dll') for name in
                  ('System.Private.CoreLib', 'System.Runtime', 'System.Console', 'netstandard')]
    output = folder/'Parser.dll'
    args = ['/nologo', '/nostdlib+', '/target:exe', '/out:'+str(output)]
    args += ['/r:'+str(path) for path in references+libraries]
    args += [str(ROOT/'tools/profiling/EtwRead.cs')]
    response = folder/'compiler.rsp'
    response.write_text('\n'.join('"'+arg+'"' for arg in args)+'\n', encoding='utf-8')
    subprocess.run([str(compiler), '/noconfig', '@'+str(response)], check=True)
    (folder/'Parser.runtimeconfig.json').write_text(json.dumps(dict(runtimeOptions=dict(
        tfm='net10.0', framework=dict(name='Microsoft.NETCore.App', version='10.0.10')))),
        encoding='utf-8')
    (folder/'runtime.txt').write_text(str(runtime), encoding='utf-8')
    print(json.dumps(dict(package_sha256=SHA, command=[str(runtime), str(output), 'INPUT.etl'])))


if __name__ == '__main__':
    main()
