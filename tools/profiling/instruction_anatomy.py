"""Static instruction counts using inline source provenance, not cycle estimates."""
import collections
import json
from pathlib import Path
import re
import subprocess
from cpu_accounting import InlineSymbols, category

ROOT=Path(__file__).resolve().parents[2]


def instruction_category(symbol, source, text, frames=None):
    if any(x in text for x in ('_Unwind', '__cxa_', 'CxxThrow', 'CxxFrame')):
        return 'exceptions-unwind'
    if 'cs_init_' in text or 'managed_type_init' in source: return 'type-initialization'
    if any(x in symbol+text for x in ('_Incref','_Decref','_M_release','_M_add_ref','__exchange_and_add')):
        return 'refcount'
    if any(x in source for x in ('shared_ptr','atomicity.h')): return 'reference-management'
    if frames:
        cat=category(frames)
        if cat=='runtime/refcount':return 'refcount'
        if cat=='runtime/reference-copy-other':return 'reference-management'
        if cat=='runtime/type-init':return 'type-initialization'
        if cat=='runtime/array-access-and-bounds':return 'array-access-and-bounds'
        if cat=='runtime/exceptions':return 'exceptions-unwind'
        if cat.startswith('runtime/'):return 'runtime-other'
        if cat=='system/compiler-security':return 'compiler-security'
    if symbol.startswith('pls::cs::Array') and any(x in symbol for x in ('::at','::get_Item','::require','::set_Item')):
        return 'array-access-and-bounds'
    if re.search(r'\b(bl|call)\b',text) and any(x in text for x in ('pls::cs::','@cs@pls','@cs@2')):
        return 'runtime-call'
    if 'semantic_runtime' in source: return 'runtime-other'
    if 'game_generated' in source: return 'game-and-emission-glue'
    return 'other-or-unknown'


def main():
    folder=ROOT/'build/null-arm11';methods=json.loads((folder/'method-sizes.json').read_text())['methods']
    targets=['cs_ce67d59af0bdb552','cs_219af55aa1e9e005'];results=[]
    for name in targets:
        m=next(m for m in methods if m['cpp_name']==name);ranges=[(s['address'],s['address']+s['bytes'])for s in m['symbols']]
        path=folder/(name+'-disassembly.txt')
        if not path.exists():
            with path.open('wb')as f:
                subprocess.run(['C:/devkitPro/devkitARM/bin/arm-none-eabi-objdump.exe','-d','-l','-C',
                    '--start-address='+str(min(x[0]for x in ranges)), '--stop-address='+str(max(x[1]for x in ranges)),str(folder/'null_game.elf')],stdout=f,check=True)
        entries=[];symbol='';source='';data=0
        for line in path.read_text(errors='replace').splitlines():
            match=re.match(r'^\s*([0-9a-f]+):\s+([0-9a-f]{8})\s+(.+)',line)
            if match:
                address=int(match[1],16)
                if not any(lo<=address<hi for lo,hi in ranges):continue
                if match[3].startswith('.'):data+=4;continue
                entries.append(dict(address=address,text=match[3],symbol=symbol,source=source,
                    category=instruction_category(symbol,source,match[3])))
            elif re.match(r'^[A-Za-z]:[/\\].*:\d+',line):source=line
            elif line.endswith(':')and not re.match(r'^[0-9a-f]+ <',line):symbol=line[:-1]
        results.append(dict(architecture='ARM11',id=m['id'],scope='entry plus uniquely owned helpers',
            instructions=len(entries),literal_pool_bytes=data,categories=dict(collections.Counter(e['category']for e in entries)),details=entries))
    resolver=InlineSymbols(ROOT/'build/null-pc/null_game.exe',0x140000000)
    for row in json.loads((ROOT/'build/null-pc/x64-hot-ranges.json').read_text()):
        entries=[]
        for line in (ROOT/'build/null-pc'/(row['cpp_name']+'-disassembly.txt')).read_text(errors='replace').splitlines():
            match=re.match(r'^\s*([0-9A-F]{16}):\s+(?:[0-9A-F]{2} )+\s+(.+)',line)
            if not match:continue
            address=int(match[1],16);info=resolver.resolve_ip(address);frames=info['frames'];frame=frames[0]
            entries.append(dict(address=address,text=match[2],frames=frames,
                category=instruction_category(frame['symbol'],frame.get('file',''),match[2],frames)))
        results.append(dict(architecture='x64',id=next(m['id']for m in methods if m['cpp_name']==row['cpp_name']),scope='entry symbol only; separate funclets/helpers excluded',
            instructions=len(entries),categories=dict(collections.Counter(e['category']for e in entries)),details=entries))
    resolver.close()
    (ROOT/'build/instruction-anatomy.json').write_text(json.dumps(results,indent=2)+'\n')
    print(json.dumps([{k:v for k,v in r.items()if k!='details'}for r in results]))


if __name__=='__main__':main()
