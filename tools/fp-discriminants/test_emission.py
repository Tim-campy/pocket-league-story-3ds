"""Compare real translator output with the 36 private ARM observations."""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import sys

ROOT=Path(__file__).resolve().parents[2]
sys.path.insert(0,str(ROOT/'translator'))
from translate import prepare,run
sys.path.insert(0,str(ROOT/'tests/translator'))
from run_semantic_fixtures import msvc_environment


def main():
    p=argparse.ArgumentParser(description=__doc__)
    oracle_group=p.add_mutually_exclusive_group(required=True)
    oracle_group.add_argument('--results',type=Path)
    oracle_group.add_argument('--oracle',type=Path,help='Committed observations of own synthetic cases only')
    p.add_argument('--output',type=Path,required=True)
    p.add_argument('--model',choices=['binary32','mono-arm-vfp'],required=True)
    p.add_argument('--variant',type=Path)
    a=p.parse_args();folder=a.output.resolve()
    if not folder.is_relative_to(ROOT/'build') or folder.exists():raise ValueError('Fresh private output required')
    oracle_file=a.oracle if a.oracle else a.results/'report.json'
    oracle=json.loads(oracle_file.read_text())
    if a.oracle:
        if oracle['source_sha256']!=hashlib.sha256((ROOT/'tools/fp-discriminants/FloatDiscriminants.cs').read_bytes()).hexdigest():raise ValueError('Synthetic oracle source changed')
        if oracle['status']!='CONFIRMED_EMULATOR_PENDING_DEVICE':raise ValueError('Expected recorded ARM oracle')
    else:
        evidence=json.loads((a.results/'jit-analysis.json').read_text())
        if evidence['status']!='ARM_VFP_MACHINE_CODE_OBSERVED':raise ValueError('ARM machine-code evidence required')
    folder.mkdir(parents=True);generated=folder/'generated';generated.mkdir()
    if a.variant:
        from inventory import compiler_paths
        _,runtime,_=compiler_paths();tool=a.variant.resolve()/'Translator.dll'
        producer=json.loads((a.variant/'proof.json').read_text())
        for name,digest in producer['inputs'].items():
            if hashlib.sha256((a.variant/name).read_bytes()).hexdigest()!=digest:raise ValueError('Variant input changed')
    else:
        _,runtime,tool,producer=prepare()
    names=['Expression','Local','Field','Array','PassArgument','Return','Inlining','Loop','ExplicitConversion']
    cases=['expression','local','field','array','argument','return','inlining','loop','explicit_conversion']
    framework=Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono/lib/mono/unity')
    source=ROOT/'tools/fp-discriminants/FloatDiscriminants.cs'
    request=dict(assembly='FloatDiscriminants',sources=[str(source)],
                 references=[str(framework/(n+'.dll')) for n in ['mscorlib','System','System.Core']],
                 selected=['M:FloatDiscriminants.'+n+'(System.Single,System.Single)' for n in names],
                 output=str(generated),numeric_model=a.model)
    request_path=folder/'input.json';report_path=folder/'translation.json'
    request_path.write_text(json.dumps(request,indent=2)+'\n')
    run([runtime,tool,request_path,report_path],folder/'translate.log')
    report=json.loads(report_path.read_text())
    if report['rejected_methods']:raise ValueError(report['rejected_methods'])
    methods={m['name']:m['cpp_name'] for m in report['emitted_methods']}
    host=['#include "portable_generated.hpp"','#include <iostream>','#include <iomanip>',
          'int main(){pls::cs::GcMutatorScope scope;std::uint64_t bits;double result;']
    for i,row in enumerate(oracle['rows']):
        name=names[cases.index(row['case'])]
        host.append('result=pls::generated::'+methods[name]+'('+float(row['a']).hex()+ 'f,'+float(row['b']).hex()+'f);')
        host.append('std::memcpy(&bits,&result,8);std::cout<<"'+str(i)+' "<<std::hex<<std::uppercase<<std::setw(16)<<std::setfill(\'0\')<<bits<<"\\n";')
    host.append('}')
    host_path=folder/'host.cpp';host_path.write_text('\n'.join(host)+'\n')
    compiler,env=msvc_environment();exe=folder/'fixture.exe'
    sources=[host_path]+[generated/x['file'] for x in report['generated_chunks'] if x['file'].endswith('.cpp')]
    sources += [ROOT/'src/kairo/common/semantic_runtime.cpp',ROOT/'src/kairo/common/managed_exceptions.cpp']
    command=[str(compiler),'/nologo','/std:c++17','/EHsc','/O2','/fp:strict','/utf-8','/I'+str(generated),'/I'+str(ROOT/'src/kairo/common'),'/I'+str(ROOT/'src/kairo/api'),'/Fe:'+str(exe)]+list(map(str,sources))
    result=subprocess.run(command,cwd=folder,env=env,capture_output=True)
    (folder/'compile.log').write_bytes(result.stdout+result.stderr);result.check_returncode()
    output=subprocess.check_output([exe],cwd=folder,env=env,text=True)
    (folder/'results.txt').write_text(output)
    actual=[line.split()[1] for line in output.splitlines()]
    if len(actual)!=36:raise ValueError('Incomplete generated result set')
    rows=[dict(case=row['case'],a=row['a'],expected=row['observed']['binary64_bits'],actual=bits,matched=bits==row['observed']['binary64_bits']) for row,bits in zip(oracle['rows'],actual)]
    receipt=dict(model=a.model,matched=sum(r['matched'] for r in rows),cases=len(rows),rows=rows,producer=producer,
                 source_sha256=hashlib.sha256(source.read_bytes()).hexdigest(),
                 executable_sha256=hashlib.sha256(exe.read_bytes()).hexdigest(),
                 oracle_sha256=hashlib.sha256(oracle_file.read_bytes()).hexdigest())
    (folder/'receipt.json').write_text(json.dumps(receipt,indent=2)+'\n')
    print(json.dumps({k:v for k,v in receipt.items() if k not in ['rows','producer']}))


if __name__=='__main__':main()
