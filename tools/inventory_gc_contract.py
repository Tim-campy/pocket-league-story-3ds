"""Publish source locations/counts only; no assets or original binary input."""
import hashlib
import json
from pathlib import Path
import re

ROOT=Path(__file__).resolve().parents[1]

def main():
    inputs={}
    observations={name:[] for name in ('destructor_declarations','weak_reference_names','generation_api_calls','gc_collect_calls','jsystem_gc_calls','idisposable_declarations')}
    patterns={
        'destructor_declarations':r'~\s*[A-Za-z_]\w*\s*\(\s*\)\s*(?:\{|=>)',
        'weak_reference_names':r'\bWeakReference\b',
        'generation_api_calls':r'\bGC\s*\.\s*(GetGeneration|MaxGeneration|CollectionCount|WaitForPendingFinalizers)\b',
        'gc_collect_calls':r'\bGC\s*\.\s*Collect\s*\(',
        'jsystem_gc_calls':r'\bJSystem\s*\.\s*Gc\s*\(',
        'idisposable_declarations':r'\b(?:class|struct)\s+(\w+)[^{};]*:\s*[^{};]*\bIDisposable\b',
    }
    for path in sorted((ROOT/'reference/src').rglob('*.cs')):
        data=path.read_bytes();text=data.decode('utf-8-sig');name=path.relative_to(ROOT).as_posix()
        inputs[name]=hashlib.sha256(data).hexdigest()
        for kind,pattern in patterns.items():
            for match in re.finditer(pattern,text):
                row={'path':name,'line':text.count('\n',0,match.start())+1}
                if kind=='idisposable_declarations':row['type_name']=match.group(1)
                observations[kind].append(row)
    report=dict(operation='source-only-gc-contract-inventory',method='lexical declaration/API scan; inherited disposal and native callbacks require the accompanying audit',
                counts={name:len(rows) for name,rows in observations.items()},observations=observations,source_sha256=inputs,
                limitations=['No weak-reference or finalizer implementation is inferred from synthetic runtime tests.',
                             'A named IDisposable declaration does not enumerate inherited or convention-only Dispose methods.',
                             'Thread counts and cooperative safepoints are documented in docs/notes/runtime-thread-inventory.md.'])
    destination=ROOT/'config/gc-source-contract.json'
    destination.write_text(json.dumps(report,indent=2)+'\n',encoding='utf8',newline='\n')
    print(json.dumps(report['counts']))

if __name__=='__main__':main()
