"""Regenerate private game C++ with the numerical variant, without promotion."""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import sys
ROOT=Path(__file__).resolve().parents[2]
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths


def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--variant',type=Path,required=True);p.add_argument('--output',type=Path,required=True)
    a=p.parse_args();output=a.output.resolve();variant=a.variant.resolve()
    if not output.is_relative_to(ROOT/'build') or output.exists():raise ValueError('Fresh private output required')
    proof=json.loads((variant/'proof.json').read_text())
    for name,digest in proof['inputs'].items():
        if sha(variant/name)!=digest:raise ValueError('Changed emitter variant')
    if sha(ROOT/'translator/Translator.cs')!=proof['parent']['translator_source_sha256']:raise ValueError('Variant parent changed')
    canonical=ROOT/'build/translator/Assembly-CSharp-input.json'
    request=json.loads(canonical.read_text());request['output']=str(output);request['numeric_model']='mono-arm-vfp'
    inputs=[Path(x) for x in request['sources']+request['references']]+[canonical,variant/'Translator.dll',Path(__file__)]
    before={str(x):sha(x) for x in inputs}
    output.mkdir(parents=True);input_file=output/'input.json';report_file=output/'translation.json'
    input_file.write_text(json.dumps(request,indent=2)+'\n')
    _,runtime,_=compiler_paths()
    result=subprocess.run([str(runtime),str(variant/'Translator.dll'),str(input_file),str(report_file)],capture_output=True,cwd=ROOT)
    (output/'translate.log').write_bytes(result.stdout+result.stderr);result.check_returncode()
    if before!={str(x):sha(x) for x in inputs}:raise ValueError('Inputs changed during translation')
    normal=json.loads((ROOT/'config/phase2-game-translation.json').read_text());report=json.loads(report_file.read_text())
    if {x['id'] for x in report['emitted_methods']}!={x['id'] for x in normal['emitted_methods']}:raise ValueError('Emission set changed')
    # Canonical diagnostics pack source paths into a separate table. Compare
    # actual declarations and reasons, not that reporting representation.
    def declarations(value):
        return {x['id']:{k:x[k] for k in ['cpp_class','slot','cpp_signature','generic_class']} |
                {'reason':x['diagnostic']['reason']} for x in value['missing_virtual_definitions']}
    if declarations(report)!=declarations(normal):raise ValueError('Virtual declarations changed')
    changed=[]
    for item in report['generated_chunks']:
        path=output/item['file'];original=ROOT/'src/game'/path.name
        if sha(path)!=sha(original):
            if path.suffix!='.cpp' and not(path.suffix=='.inc' and '_cpp_part_' in path.name):raise ValueError('Numerical variant changes shared header: '+path.name)
            changed.append(path.name)
    receipt=dict(private_variant=True,normal_coverage_promoted=0,inputs=before,
                 changed_units=changed,headers_identical=True,emitted_methods=len(report['emitted_methods']),
                 generated={x['file']:sha(output/x['file']) for x in report['generated_chunks']})
    (output/'proof.json').write_text(json.dumps(receipt,indent=2)+'\n')
    print(json.dumps({k:v for k,v in receipt.items() if k not in ['inputs','generated']}))


if __name__=='__main__':main()
