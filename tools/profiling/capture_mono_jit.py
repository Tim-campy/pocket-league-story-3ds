"""Capture the official Unity Mono x86 JIT diagnostic output, locally only."""
import argparse,hashlib,json,os,subprocess,sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2]

def main():
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--output',type=Path,required=True)
    output=parser.parse_args().output.resolve()
    if not output.is_relative_to(ROOT/'build') or output.exists():raise ValueError('Use a fresh directory under build/')
    mono=Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono')
    oracle=ROOT/'build/hot-methods/Assembly-CSharp.dll'
    output.mkdir(parents=True)
    llvm=ROOT/'build/deps/android-sdk/ndk-r27c/android-ndk-r27c/toolchains/llvm/prebuilt/windows-x86_64/bin'
    # Mono's verbose disassembler invokes GNU tool names. Use the already
    # authorized official NDK assembler/disassembler, without installation.
    shim=output/'assemble.py'
    shim.write_text('import sys,subprocess\nfrom pathlib import Path\n'+
        'args=[x for x in sys.argv[1:] if x!="-gstabs"]\n'+
        'for i,x in enumerate(args):\n'+
        ' if x.endswith(".s"):\n'+
        '  original=Path(x).read_text(); target=Path(__file__).parent/("jit-"+str(len(list(Path(__file__).parent.glob("jit-*.s"))))+".s")\n'+
        '  target.write_text("\\n".join(line for line in original.splitlines() if not line.lstrip().startswith((".stabs",".stabn",".stabd")))+"\\n");args[i]=str(target)\n'+
        'sys.exit(subprocess.call('+repr([str(llvm/'clang.exe'),'-target','i386-pc-linux-gnu','-c'])+'+args))\n')
    (output/'as.cmd').write_text('@"'+sys.executable+'" "'+str(shim)+'" %*\n')
    (output/'objdump.cmd').write_text('@"'+str(llvm/'llvm-objdump.exe')+'" %*\n')
    env=dict(os.environ,MONO_PATH=os.pathsep.join([str(mono/'lib/mono/unity'),str(oracle.parent),str(ROOT.parent/'Pocket League Story/original/extracted/assets/bin/Data/Managed')]))
    receipts=[]
    env['PATH']=str(output)+os.pathsep+env['PATH']
    for method in ['game.Camera:ConvertScreenToCamera(int[],int[])','game.Team:GetSum']:
        env['MONO_VERBOSE_METHOD']=method
        command=[str(mono/'bin/mono.exe'),'-v','-v','-v','-v','--compile',method,str(oracle)]
        result=subprocess.run(command,cwd=output,env=env,capture_output=True,timeout=60)
        path=output/(method.replace(':','-')+'.log');path.write_bytes(result.stdout+result.stderr)
        receipts.append(dict(method=method,command=command,exit_code=result.returncode,log_sha256=hashlib.sha256(path.read_bytes()).hexdigest(),log_bytes=path.stat().st_size))
    report=dict(mono_sha256=hashlib.sha256((mono/'bin/mono.exe').read_bytes()).hexdigest(),oracle_sha256=hashlib.sha256(oracle.read_bytes()).hexdigest(),runs=receipts,performance_measurement=False)
    (output/'receipt.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report))

if __name__=='__main__':main()
