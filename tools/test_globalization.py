"""Check native JavaPlugin platform leaves against an own installed-JDK oracle.

No original Java classes or Unity binaries are loaded. Java is an oracle/tool,
not a runtime dependency of the native port. No dependency is installed.
"""
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import sys
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tests/translator'))
from run_semantic_fixtures import msvc_environment

def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()

def main():
    java=Path(shutil.which('java') or '')
    javac=java.with_name('javac.exe')
    if not java.is_file() or not javac.is_file():raise RuntimeError('Existing JDK oracle required; nothing is installed')
    folder=ROOT/'build/globalization-fixtures';folder.mkdir(parents=True,exist_ok=True)
    def run(command,name,env=None):
        result=subprocess.run([str(v) for v in command],cwd=ROOT,env=env,capture_output=True,timeout=60)
        (folder/(name+'.stdout')).write_bytes(result.stdout);(folder/(name+'.stderr')).write_bytes(result.stderr)
        if result.returncode:raise RuntimeError('See build/globalization-fixtures/'+name+'.stdout/.stderr')
        return result.stdout.decode('utf-8-sig').replace('\r\n','\n').replace('\r','')
    oracle=ROOT/'tests/kairo/GlobalizationOracle.java'
    run([javac,'-d',folder,oracle],'java-compile')
    java_command=[java,'-Djava.locale.useOldISOCodes=true','-cp',folder,'GlobalizationOracle']
    expected=dict(line.split('\t') for line in run(java_command,'java-cases').splitlines())
    java_live=dict(line.split('\t') for line in run([*java_command,'live'],'java-live').splitlines())
    compiler,env=msvc_environment();binary=folder/'globalization-fixtures.exe'
    sources=[ROOT/'tests/kairo/globalization_fixtures.cpp',ROOT/'src/kairo/common/semantic_runtime.cpp',ROOT/'src/kairo/platform/sdl/globalization.cpp']
    command=[compiler,'/nologo','/std:c++17','/EHsc','/fp:strict','/permissive-','/W4','/WX','/utf-8','/I'+str(ROOT/'src/kairo/common'),'/Fe:'+str(binary),'/Fo:'+str(folder)+'/',*sources,'Advapi32.lib']
    run(command,'native-compile',env)
    actual=dict(line.split('\t') for line in run([binary],'native-cases',env).splitlines())
    native_live=dict(line.split('\t') for line in run([binary,'live'],'native-live',env).splitlines())
    if len(expected)!=36 or expected.keys()!=actual.keys():raise ValueError('Incomplete globalization differential corpus')
    rows=[dict(case=key,expected=value,actual=actual[key],passed=value==actual[key]) for key,value in expected.items()]
    for key in ['language','country','raw_offset']:rows.append(dict(case='live-'+key,expected=java_live[key],actual=native_live[key],passed=java_live[key]==native_live[key]))
    native_assertions=json.loads(run([binary,'native-only'],'native-contract',env))
    if native_assertions['status']!='PASS' or native_assertions['assertions']!=12:raise ValueError('Incomplete native globalization contract checks')
    passed=sum(row['passed'] for row in rows)
    inputs=[*sources,oracle,ROOT/'src/kairo/api/globalization.hpp',ROOT/'src/kairo/platform/sdl/globalization.hpp',ROOT/'src/kairo/common/managed_time.hpp',ROOT/'src/kairo/common/semantic_runtime.hpp']
    report=dict(operation='own-Java-versus-native-globalization-platform-leaves',status='PASS' if passed==39 else 'FAIL',cases=39,passed=passed,results=rows,
        native_assertions=native_assertions,live=dict(java=java_live,native=native_live,timezone_id_namespace_difference=java_live['timezone_id']!=native_live['timezone_id']),
        java=dict(path=str(java),sha256=sha(java),javac_sha256=sha(javac),version=run([java,'--version'],'java-version').strip()),
        producer_sha256=sha(Path(__file__)),inputs_sha256={str(p.relative_to(ROOT)).replace('\\','/'):sha(p) for p in inputs},
        compiler=dict(path=str(compiler),sha256=sha(compiler)),native_executable=dict(path=str(binary.relative_to(ROOT)).replace('\\','/'),sha256=sha(binary)),
        production_methods_promoted=0,original_game_binary_executed=False,original_java_code_loaded=False,
        limitations=['Windows timezone ID is a Windows key name, while Java default ID is IANA; no Game call observes GetID in the inspected source.',
                    'General IANA lookup is explicitly unsupported; GMT custom IDs and Windows ID roundtrip are supported.',
                    'Raw offset excludes DST, matching getRawOffset; this is not a full historical timezone database.',
                    'Locale platform data is independent of CLR CurrentCulture.',
                    'JDK21 with legacy ISO-code property is an own platform oracle, not execution of the Android VM or APK.'])
    (ROOT/'config/phase2-globalization-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(dict(status=report['status'],cases=39,passed=passed,native_assertions=12,live=report['live'])))
    if passed!=39:raise SystemExit(1)

if __name__=='__main__':main()
