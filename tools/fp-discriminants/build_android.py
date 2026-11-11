"""Build a private Android ARMv7 numerical oracle, never a game APK."""
import argparse
import hashlib
import json
import os
from pathlib import Path
import re
import secrets
import shutil
import subprocess
import zipfile

ROOT = Path(__file__).resolve().parents[2]
HERE = Path(__file__).resolve().parent
SDK = ROOT/'build/deps/android-sdk'
UNITY = Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1/Editor/Data')
JAVA = Path('C:/Program Files/Microsoft/jdk-21.0.12.101-hotspot/bin')


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def one(base, name):
    files = list(base.rglob(name))
    if len(files) != 1:
        raise ValueError(f'Expected one {name} under {base}, found {len(files)}')
    return files[0]


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--captures',type=Path,required=True)
    parser.add_argument('--output',type=Path,required=True)
    args=parser.parse_args();OUTPUT=args.output.resolve();capture_folder=args.captures.resolve()
    if not OUTPUT.is_relative_to(ROOT/'build') or OUTPUT.exists():raise ValueError('Use a fresh private output directory')
    capture_receipt=capture_folder.parent/'capture-receipt.json'
    captured=json.loads(capture_receipt.read_text())
    if captured['counts'][1]<80 or captured['distinct_cal_inputs']<80:raise ValueError('At least 80 distinct own Cal captures are required')
    for name,digest in captured['inputs'].items():
        if sha(capture_folder/name)!=digest:raise ValueError('Captured observation changed: '+name)
    OUTPUT.mkdir(parents=True)
    buildtools = one(SDK/'build-tools-35', 'aapt.exe').parent
    platform = one(SDK/'platform-35', 'android.jar')
    clang = one(SDK/'ndk-r27c', 'clang.exe')
    sysroot = clang.parent.parent/'sysroot'
    mono = UNITY/'Mono/bin/mono.exe'
    compiler = UNITY/'Mono/lib/mono/unity/smcs.exe'
    core = UNITY/'Mono/lib/mono/unity'
    official = UNITY/'PlaybackEngines/AndroidPlayer/Variations/mono'
    libmono = official/'Release/Libs/armeabi-v7a/libmono.so'
    if not libmono.is_file():
        raise ValueError('Official editor ARMv7 Mono library required; no game APK fallback')
    provenance = {}
    managed = OUTPUT/'assets/probe/managed'
    inputs = OUTPUT/'assets/probe/inputs'
    native = OUTPUT/'native'
    classes = OUTPUT/'classes'
    dex = OUTPUT/'dex'
    for folder in [managed, inputs, native, classes, dex]:
        folder.mkdir(parents=True, exist_ok=True)
    def copy(source, destination):
        shutil.copyfile(source, destination)
        provenance[str(destination.relative_to(OUTPUT))] = dict(source=str(source),sha256=sha(source))
    for name in ['mscorlib.dll', 'System.dll', 'System.Core.dll']:
        copy(core/name, managed/name)
    copy(official/'Managed/UnityEngine.dll', managed/'UnityEngine.dll')
    reconstruction = ROOT.parent/'Pocket League Story'
    copy(reconstruction/'build/Assembly-CSharp-mono-smcs/Assembly-CSharp.dll',managed/'Assembly-CSharp.dll')
    copy(reconstruction/'build/KairoLibrary-roslyn-1.1.0/KairoLibrary.dll',managed/'KairoLibrary.dll')
    captures = sorted(capture_folder.glob('*.bin'))
    if {p.name for p in captures}!=set(captured['inputs']):raise ValueError('Capture inventory changed')
    for source in captures:
        copy(source,inputs/source.name)
    env = dict(os.environ, MONO_PATH=str(core),MONO_CFG_DIR=str(UNITY/'Mono/etc'))
    commands = []
    def run(args):
        args = list(map(str,args)); commands.append(args)
        with (OUTPUT/'build.log').open('ab') as log:
            subprocess.run(args,env=env,cwd=OUTPUT,stdout=log,stderr=subprocess.STDOUT,check=True)
    run([mono,compiler,'-optimize+','-debug-','-out:'+str(managed/'FloatDiscriminants.exe'),HERE/'FloatDiscriminants.cs'])
    run([mono,compiler,'-optimize+','-debug-','-out:'+str(managed/'HotMethodsMono.exe'),
         *['-r:'+str(managed/name) for name in ['Assembly-CSharp.dll','KairoLibrary.dll','UnityEngine.dll']],ROOT/'tools/profiling/HotMethodsMono.cs'])
    # Refuse a bridge that asks for absent exports before installing anything.
    readelf = clang.with_name('llvm-readelf.exe')
    symbols = subprocess.check_output([str(readelf),'--dyn-syms','--wide',str(libmono)],text=True)
    for symbol in re.findall(r'LOAD\(\w+,"([^"]+)"\)',(HERE/'probe_jni.c').read_text()):
        if not re.search(r'\b'+re.escape(symbol)+r'(?:@@\w+)?\s*$',symbols,re.M):
            raise ValueError('Required Mono export missing: '+symbol)
    run([clang,'--target=armv7a-linux-androideabi21','--sysroot='+str(sysroot),
         '-std=c11','-O2','-fPIC','-shared','-Wall','-Wextra','-Werror',
         '-Wl,-soname,libfp_probe.so',HERE/'probe_jni.c','-ldl','-llog','-o',native/'libfp_probe.so'])
    run([JAVA/'javac.exe','-source','8','-target','8','-bootclasspath',platform,'-d',classes,HERE/'ProbeActivity.java'])
    run([JAVA/'java.exe','-cp',buildtools/'lib/d8.jar','com.android.tools.r8.D8','--release',
         '--lib',platform,'--min-api','21','--output',dex,*sorted(classes.rglob('*.class'))])
    unsigned = OUTPUT/'unsigned.apk'
    run([buildtools/'aapt.exe','package','-f','-M',HERE/'AndroidManifest.xml','-I',platform,'-A',OUTPUT/'assets','-F',unsigned])
    with zipfile.ZipFile(unsigned,'a',compression=zipfile.ZIP_DEFLATED) as package:
        package.write(dex/'classes.dex','classes.dex')
        package.write(native/'libfp_probe.so','lib/armeabi-v7a/libfp_probe.so')
        package.write(libmono,'lib/armeabi-v7a/libmono.so')
    aligned = OUTPUT/'aligned.apk'
    run([buildtools/'zipalign.exe','-f','4',unsigned,aligned])
    key = OUTPUT/'local-test-key.p12'
    password_file = OUTPUT/'local-test-key.password'
    if not key.exists():
        if password_file.exists():
            raise ValueError('Incomplete key generation; inspect private key files')
        password_file.write_text(secrets.token_hex(24))
    env['PLS_FP_TEST_KEY_PASSWORD'] = password_file.read_text()
    if not key.exists():
        run([JAVA/'keytool.exe','-genkeypair','-alias','numerical-oracle','-keyalg','RSA','-keysize','2048',
             '-validity','3650','-keystore',key,'-storetype','PKCS12',
             '-storepass:env','PLS_FP_TEST_KEY_PASSWORD','-keypass:env','PLS_FP_TEST_KEY_PASSWORD',
             '-dname','CN=Local Numerical Oracle'])
    apk = OUTPUT/'numerical-oracle-armv7.apk'
    signer = [JAVA/'java.exe','-jar',buildtools/'lib/apksigner.jar']
    run([*signer,'sign','--ks',key,'--ks-key-alias','numerical-oracle',
         '--ks-pass','env:PLS_FP_TEST_KEY_PASSWORD','--key-pass','env:PLS_FP_TEST_KEY_PASSWORD','--out',apk,aligned])
    run([*signer,'verify','--verbose',apk])
    proof = dict(status='BUILT_NOT_EXECUTED_ON_ANDROID',apk_sha256=sha(apk),
                 official_libmono=dict(path=str(libmono),sha256=sha(libmono)),private_inputs=provenance,
                 captures=dict(total=len(captures),per_kernel=captured['counts'],cal_evaCoatMulti9block=captured['counts'][1],distinct_cal=captured['distinct_cal_inputs'],receipt_sha256=sha(capture_receipt)),
                 commands=commands,tool_hashes={str(p):sha(p) for p in [clang,platform,compiler,mono,buildtools/'aapt.exe',buildtools/'lib/d8.jar',buildtools/'lib/apksigner.jar']},
                 source_hashes={str(p.relative_to(ROOT)):sha(p) for p in [Path(__file__),HERE/'probe_jni.c',HERE/'ProbeActivity.java',HERE/'AndroidManifest.xml',HERE/'FloatDiscriminants.cs',ROOT/'tools/profiling/HotMethodsMono.cs']})
    (OUTPUT/'build-proof.json').write_text(json.dumps(proof,indent=2)+'\n')
    print(json.dumps(dict(status=proof['status'],apk=str(apk),sha256=proof['apk_sha256'])))


if __name__ == '__main__':
    main()
