"""Disassemble the actual COFF objects linked into the current null backend."""
import argparse,hashlib,json,subprocess
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2]
LLVM=ROOT/'build/deps/android-sdk/ndk-r27c/android-ndk-r27c/toolchains/llvm/prebuilt/windows-x86_64/bin'
TARGETS={'Camera.ConvertScreenToCamera':('ca6f5bbc06a496a9','cs_ce67d59af0bdb552'),
         'Team.GetSum':('403f4e6631bd3667','cs_885d2f23113de984')}
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--baseline-build',type=Path,default=ROOT/'build/null-pc-tracing')
    parser.add_argument('--output',type=Path,required=True)
    args=parser.parse_args();base=args.baseline_build.resolve();folder=args.output.resolve()
    if not folder.is_relative_to(ROOT/'build') or folder.exists():raise ValueError('Use a fresh private directory')
    stamp=json.loads((base/'source-stamp.json').read_text())
    for name,digest in stamp.items():
        if sha(ROOT/name)!=digest:raise ValueError('Current source differs from linked objects: '+name)
    edge=next(line for line in (base/'build.ninja').read_text().splitlines() if line.startswith('build null_game.exe:'))
    objects=[base/token for token in edge.split() if token.endswith('.obj')]
    folder.mkdir();rows=[]
    for name,(type_id,method) in TARGETS.items():
        matches=[p for p in objects if p.name=='game_generated_type_'+type_id+'.cpp.obj']
        if len(matches)!=1:raise ValueError('Ambiguous object for '+name)
        obj=matches[0];listing=subprocess.check_output([str(LLVM/'llvm-nm.exe'),'--defined-only','--format=posix',str(obj)],text=True)
        symbols=[line.split()[0] for line in listing.splitlines() if line.startswith('?'+method+'@')]
        if len(symbols)!=1:raise ValueError('Ambiguous native entry for '+name)
        command=[str(LLVM/'llvm-objdump.exe'),'-d','-r','--disassemble-symbols='+symbols[0],str(obj)]
        data=subprocess.check_output(command);target=folder/(name+'.asm.txt');target.write_bytes(data)
        # Keep all helper symbols in a second artifact, so an out-of-line bounds
        # helper is not mistaken for absent work in the entry point.
        all_code=subprocess.check_output([str(LLVM/'llvm-objdump.exe'),'-d','-r',str(obj)])
        (folder/(name+'.object.asm.txt')).write_bytes(all_code)
        rows.append(dict(method=name,symbol=symbols[0],object=str(obj.relative_to(ROOT)),object_sha256=sha(obj),assembly_sha256=sha(target),command=command))
    report=dict(status='DISASSEMBLED_NOT_YET_CLASSIFIED',architecture='x64',methods=rows,
                source_stamp_sha256=sha(base/'source-stamp.json'),llvm_objdump_sha256=sha(LLVM/'llvm-objdump.exe'),
                limitation='Relocatable object addresses; full helper listing retained separately. Not a cycle count.')
    (folder/'receipt.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report))
if __name__=='__main__':main()
