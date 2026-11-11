"""Run the authorized local ARM Android oracle in a private SDK AVD.

No system installation, physical-device operation, or global AVD is involved.
This is a functional oracle, never a hardware performance measurement.
"""
import argparse
import hashlib
import json
import os
from pathlib import Path
import subprocess
import time

ROOT=Path(__file__).resolve().parents[2]
BASE=ROOT/'build/deps/android-arm-emulator'
PACKAGE='org.plsresearch.floatprobe'

def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--build',type=Path,required=True)
    parser.add_argument('--adb',type=Path,required=True)
    parser.add_argument('--output',type=Path,required=True)
    parser.add_argument('--port',type=int,default=5580)
    args=parser.parse_args();folder=args.output.resolve();build=args.build.resolve()
    if not folder.is_relative_to(ROOT/'build') or folder.exists():raise ValueError('Use a fresh private output')
    if args.port%2 or not 5554<=args.port<=5682:raise ValueError('Expected an even emulator console port')
    apk=build/'numerical-oracle-armv7.apk';proof=json.loads((build/'build-proof.json').read_text())
    if sha(apk)!=proof['apk_sha256'] or proof['captures']['distinct_cal']<80:raise ValueError('Expected the authenticated expanded oracle')
    tools=BASE/'tools-25.2.5/tools';images=BASE/'android-21-armv7-r4/armeabi-v7a'
    emulator=tools/'emulator-arm.exe';serial='emulator-'+str(args.port)
    devices=subprocess.check_output([str(args.adb),'devices'],text=True)
    if serial in devices:raise ValueError('Emulator port already belongs to another session')
    folder.mkdir(parents=True);avds=folder/'avds';avd=avds/'pls-numerical.avd';avd.mkdir(parents=True)
    (avds/'pls-numerical.ini').write_text('avd.ini.encoding=UTF-8\npath='+str(avd)+'\ntarget=android-21\n')
    config={'avd.ini.encoding':'UTF-8','abi.type':'armeabi-v7a','hw.cpu.arch':'arm','hw.cpu.model':'cortex-a8',
            'hw.ramSize':'512','hw.lcd.width':'480','hw.lcd.height':'800','hw.lcd.density':'160',
            'hw.gpu.enabled':'no','hw.keyboard':'yes','disk.dataPartition.size':'1024M',
            'image.sysdir.1':str(images)+os.sep,'tag.id':'default','target':'android-21'}
    (avd/'config.ini').write_text(''.join(k+'='+v+'\n' for k,v in config.items()))
    env=dict(os.environ,ANDROID_AVD_HOME=str(avds),ANDROID_SDK_HOME=str(folder),
             ANDROID_SDK_ROOT=str(tools.parent),QT_QPA_PLATFORM_PLUGIN_PATH=str(tools/'lib/qt/plugins'))
    env['PATH']=str(tools/'lib/qt/lib')+os.pathsep+env.get('PATH','')
    command=[str(emulator),'-avd','pls-numerical','-port',str(args.port),'-no-window','-no-audio',
             '-no-boot-anim','-no-snapshot','-gpu','off','-memory','512']
    adb=[str(args.adb),'-s',serial]
    report=dict(command=command,emulator_sha256=sha(emulator),apk_sha256=sha(apk),serial=serial,
                image_hashes={name:sha(images/name) for name in ['system.img','ramdisk.img','kernel-qemu','userdata.img']},
                configuration=config,status='STARTING',functional_only=True)
    receipt=folder/'emulator-run.json';receipt.write_text(json.dumps(report,indent=2)+'\n')
    with (folder/'emulator.stdout.log').open('wb') as out,(folder/'emulator.stderr.log').open('wb') as err:
        process=subprocess.Popen(command,cwd=tools,env=env,stdout=out,stderr=err,creationflags=subprocess.CREATE_NO_WINDOW)
        report['pid']=process.pid
        try:
            deadline=time.monotonic()+900;next_update=0
            while time.monotonic()<deadline:
                if process.poll() is not None:raise RuntimeError('ARM emulator exited: '+str(process.returncode))
                result=subprocess.run([*adb,'shell','getprop','sys.boot_completed'],capture_output=True,text=True,timeout=15)
                if result.returncode==0 and result.stdout.strip()=='1':break
                if time.monotonic()>=next_update:
                    print(json.dumps(dict(status='BOOTING_ARM',pid=process.pid)),flush=True);next_update=time.monotonic()+30
                time.sleep(3)
            else:raise TimeoutError('ARM guest did not finish boot in 900 seconds')
            props=subprocess.check_output([*adb,'shell','getprop'],timeout=20)
            (folder/'guest-properties.txt').write_bytes(props)
            abi=subprocess.check_output([*adb,'shell','getprop','ro.product.cpu.abi'],text=True,timeout=20).strip()
            if abi!='armeabi-v7a':raise ValueError('Unexpected guest ABI: '+abi)
            subprocess.run([*adb,'install',str(apk)],check=True,timeout=180)
            subprocess.run([*adb,'shell','am','start','-n',PACKAGE+'/.ProbeActivity'],check=True,timeout=30)
            deadline=time.monotonic()+900;next_update=0
            while time.monotonic()<deadline:
                result=subprocess.run([*adb,'exec-out','run-as',PACKAGE,'cat','files/probe/status.txt'],capture_output=True,timeout=20)
                (folder/'probe-status.txt').write_bytes(result.stdout)
                if b'Completed. Results:' in result.stdout:break
                if b'failed; inspect' in result.stdout or b'JIT evidence incomplete' in result.stdout:raise RuntimeError('Numerical probe failed; inspect private status/logcat')
                if time.monotonic()>=next_update:
                    print(json.dumps(dict(status='RUNNING_NUMERICAL_ORACLE')),flush=True);next_update=time.monotonic()+30
                time.sleep(3)
            else:raise TimeoutError('Numerical oracle did not finish in 900 seconds')
            report['status']='ORACLE_COMPLETED_READ_RESULTS_BEFORE_STOPPING'
            # Keep the owned process running for read_android.py. Its exact PID
            # and serial are recorded; no physical device or other emulator is stopped.
            report['keep_running']=True
        except Exception as failure:
            report.update(status='FAILED',error=str(failure),keep_running=False)
            if process.poll() is None:process.terminate();process.wait(timeout=20)
            raise
        finally:
            receipt.write_text(json.dumps(report,indent=2)+'\n')
            try:
                log=subprocess.run([*adb,'logcat','-d','-v','threadtime'],capture_output=True,timeout=20)
                (folder/'logcat.txt').write_bytes(log.stdout)
            except subprocess.TimeoutExpired:
                (folder/'logcat-unavailable.txt').write_text('ADB logcat timed out; process status is in emulator-run.json.\n')
    print(json.dumps(report),flush=True)

if __name__=='__main__':main()
