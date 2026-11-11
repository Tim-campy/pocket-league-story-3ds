"""Disassemble authenticated ARM11 kernel entry points, without modifying the ELF."""
import argparse,hashlib,json,re,subprocess
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2]
BIN=Path('C:/devkitPro/devkitARM/bin')
TARGETS={'Camera.ConvertScreenToCamera':'cs_ce67d59af0bdb552','Team.GetSum':'cs_885d2f23113de984'}
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()

def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--build',type=Path,required=True);p.add_argument('--output',type=Path,required=True)
    a=p.parse_args();base=a.build.resolve();folder=a.output.resolve();elf=base/'null_game.elf'
    if not folder.is_relative_to(ROOT/'build')or folder.exists():raise ValueError('Use a fresh private output')
    proof=json.loads((base/'build-proof.json').read_text());digest=sha(elf)
    if proof['elf_sha256']!=digest:raise ValueError('ELF differs from authenticated build')
    symbols=subprocess.check_output([str(BIN/'arm-none-eabi-nm.exe'),'-S','--defined-only',str(elf)],text=True)
    folder.mkdir();rows=[]
    for name,identifier in TARGETS.items():
        candidates=[]
        for line in symbols.splitlines():
            fields=line.split()
            if len(fields)==4 and fields[3].startswith('_ZN3pls4game19'+identifier+'E')and '.'not in fields[3]:candidates.append(fields)
        if len(candidates)!=1:raise ValueError('Ambiguous entry for '+name)
        address,size,_,symbol=candidates[0]
        command=[str(BIN/'arm-none-eabi-objdump.exe'),'-d','--disassemble='+symbol,str(elf)]
        listing=subprocess.check_output(command);target=folder/(name+'.asm.txt');target.write_bytes(listing)
        ops=re.findall(r'^\s*[0-9a-f]+:\s+[0-9a-f]{8}\s+([a-z][a-z0-9.]*)\s',listing.decode(),re.M)
        rows.append(dict(method=name,symbol=symbol,address=int(address,16),code_bytes=int(size,16),
                         instructions=len(ops),call_instructions=sum(op in {'bl','blx'}for op in ops),listing_sha256=sha(target)))
    if sha(elf)!=digest:raise ValueError('ELF changed during inspection')
    report=dict(status='DISASSEMBLED_NOT_YET_CLASSIFIED',architecture='ARM11',elf_sha256=digest,
                build_proof_sha256=sha(base/'build-proof.json'),objdump_sha256=sha(BIN/'arm-none-eabi-objdump.exe'),methods=rows,
                limitation='Entry points only; separate helper bodies are not counted here. Instruction count is not a timing measurement.')
    (folder/'receipt.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report))
if __name__=='__main__':main()
