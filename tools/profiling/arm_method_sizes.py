"""Attribute linked ARM functions to unique source methods; retain shared helpers.

This measures linked machine code, not source text, and never reads asset data.
Original IL is used only as the size denominator, never copied into output code.
"""
import argparse
import collections
import hashlib
import json
from pathlib import Path
import re
import subprocess
import sys
sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from update_phase2_progress import map_game_identities


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--elf',type=Path,required=True)
    p.add_argument('--original-dump',type=Path,required=True)
    p.add_argument('--output',type=Path,required=True)
    a=p.parse_args()
    report=json.loads(Path('config/phase2-game-translation.json').read_text())
    original=json.loads(a.original_dump.read_text(encoding='utf-8-sig'))['selected_methods']
    ledger=[dict(id='Assembly-CSharp::'+m['stable_id']) for m in original]
    mapping,unknown=map_game_identities(report['emitted_methods'],ledger)
    inverse={v:k for k,v in mapping.items()}
    original_sizes={'Assembly-CSharp::'+m['stable_id']:m.get('header',{}).get('code_size',0) for m in original}
    names={m['cpp_name']:m for m in report['emitted_methods'] if m['id'] in inverse}
    data=collections.defaultdict(list);unassigned=0; seen=set()
    proc=subprocess.Popen(['C:/devkitPro/devkitARM/bin/arm-none-eabi-nm.exe','-S','-C','--defined-only',str(a.elf)],stdout=subprocess.PIPE,text=True,encoding='utf8',errors='replace')
    for line in proc.stdout:
        fields=line.split(maxsplit=3)
        if len(fields)!=4 or fields[2] not in 'tTwW':continue
        try:address,size=int(fields[0],16),int(fields[1],16)
        except ValueError:continue
        if (address,size) in seen or not size:continue
        seen.add((address,size))
        candidates={n for n in re.findall(r'pls::game::(cs_[0-9a-f]+)\(',fields[3]) if n in names}
        if len(candidates)!=1:unassigned+=size;continue
        name=next(iter(candidates));data[name].append(dict(address=address,bytes=size,symbol=fields[3].strip()))
    if proc.wait():raise RuntimeError('nm failed')
    rows=[]
    for name,symbols in data.items():
        method=names[name];oid=inverse[method['id']];il=original_sizes[oid];total=sum(x['bytes']for x in symbols)
        rows.append(dict(id=method['id'],original_id=oid,cpp_name=name,code_bytes=total,il_bytes=il,ratio=total/il if il else None,symbols=symbols))
    rows.sort(key=lambda x:-x['code_bytes'])
    buckets=[]
    for lo,hi in [(0,256),(257,1024),(1025,4096),(4097,16384),(16385,1<<40)]:
        subset=[r for r in rows if lo<=r['code_bytes']<=hi]
        buckets.append(dict(min_bytes=lo,max_bytes=hi,methods=len(subset),code_bytes=sum(r['code_bytes']for r in subset),il_bytes=sum(r['il_bytes']for r in subset)))
    sha=lambda path:hashlib.sha256(path.read_bytes()).hexdigest()
    result=dict(elf_sha256=sha(a.elf),original_dump_sha256=sha(a.original_dump),methods_with_linked_symbols=len(rows),mapping_unknown=len(unknown),unassigned_or_shared_code_bytes=unassigned,buckets=buckets,methods=rows,
        limitation='Includes uniquely owned lambda/cold helper symbols; shared runtime functions and eliminated/inlined-only methods are not charged twice. Ratio is code size, not execution time.')
    a.output.write_text(json.dumps(result,indent=2)+'\n',encoding='utf8')
    print(json.dumps({k:v for k,v in result.items()if k!='methods'}))
    print(json.dumps([{k:v for k,v in r.items()if k!='symbols'}for r in rows[:20]]))


if __name__=='__main__':main()
