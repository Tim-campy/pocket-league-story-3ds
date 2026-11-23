"""Prove probe emission preserves a source trace and attributes operation counts.

Counts are source operations, not a claim about CLR allocation optimization or
allocations hidden inside framework/native implementations.
"""
import collections
import hashlib
import json
import os
from pathlib import Path
import re
import subprocess
import sys
from translate import prepare,run,ROOT
sys.path.insert(0,str(ROOT/'tests/translator'))
from run_semantic_fixtures import msvc_environment


def main():
    folder,runtime,tool,producer=prepare()
    work=ROOT/'build/source-allocation-fixture';work.mkdir(exist_ok=True)
    output=work/'generated';output.mkdir(exist_ok=True)
    source=ROOT/'tests/translator/SourceAllocationFixtures.cs'
    framework=Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono/lib/mono/unity')
    request=dict(assembly='SourceAllocationFixture',sources=[str(source)],references=[str(framework/(n+'.dll'))for n in ['mscorlib','System','System.Core']],selected=[],select_all_source_methods=True,output=str(output))
    inp=work/'input.json';report_file=work/'report.json';inp.write_text(json.dumps(request))
    run([runtime,tool,inp,report_file],work/'translate.log')
    report=json.loads(report_file.read_text(encoding='utf-8-sig'))
    if report['rejected_methods']:raise ValueError(report['rejected_methods'])
    method=next(m['cpp_name']for m in report['emitted_methods']if m['id']=='M:SourceAllocationFixture.Run(System.Int32,System.String)')
    harness=work/'harness.cpp'
    harness.write_text('''#include "portable_generated.hpp"
#include "source_allocation_probe.hpp"
#include <cstdio>
int main(){pls::cs::GcMutatorScope scope;auto text=pls::cs::String(u"y");
pls::source_allocations::window(0);
std::printf("ORACLE=%d\\n",pls::generated::METHOD(3,text));
pls::source_allocations::window(1);
try{pls::generated::METHOD(-1,text);return 2;}catch(const pls::cs::OverflowException&){std::printf("ORACLE=OverflowException\\n");}
pls::source_allocations::window(-1);pls::source_allocations::dump(stdout);}
'''.replace('METHOD',method))
    compiler,env=msvc_environment();exe=work/'fixture.exe'
    common=ROOT/'src/kairo/common'
    units=['semantic_runtime','managed_streams','managed_exceptions','managed_thread','managed_encoding','managed_regex','managed_stream_reader','managed_string_ops','managed_float_format','managed_collation','managed_mono_character_data']
    command=[str(compiler),'/nologo','/std:c++17','/EHsc','/O2','/fp:strict','/utf-8','/bigobj','/DPLS_ALLOCATION_PROBE=1',
             *['/I'+str(p)for p in [common,ROOT/'src/kairo/api',ROOT/'src',ROOT/'src/main',output,ROOT/'build/generated/mono-collation',ROOT/'build/generated/mono-numberformat']],
             '/Fe:'+str(exe),str(harness),*map(str,sorted(output.glob('*.cpp'))),
             *[str(common/(n+'.cpp'))for n in units],str(ROOT/'src/kairo/platform/sdl/globalization.cpp'),str(ROOT/'src/main/allocation_probe.cpp'),'Advapi32.lib']
    response=work/'compile.rsp';response.write_text(subprocess.list2cmdline(command[1:]))
    result=subprocess.run([command[0],'@'+str(response)],cwd=work,env=env,capture_output=True,timeout=120)
    (work/'compile.log').write_bytes(result.stdout+result.stderr)
    if result.returncode:raise RuntimeError('Inspect source-allocation-fixture/compile.log')
    result=subprocess.run([str(exe)],cwd=work,env=env,capture_output=True,timeout=30)
    (work/'run.log').write_bytes(result.stdout+result.stderr)
    if result.returncode:raise RuntimeError('Probe execution failed')
    text=result.stdout.decode().replace('\r\n','\n')
    if [line for line in text.splitlines()if line.startswith('ORACLE=')]!=['ORACLE=9','ORACLE=OverflowException']:raise ValueError('Source behavior differs')
    totals=collections.defaultdict(lambda:[0,0])
    for kind,completed,failed in re.findall(r'^PLS_SOURCE_SITE (\S+) (\d+) (\d+) ',text,re.M):
        totals[kind][0]+=int(completed);totals[kind][1]+=int(failed)
    expected={'new_object':[2,0],'new_array':[1,0],'boxing':[1,0],'concat_operator':[1,0],'closure_evaluation':[1,0],'delegate_evaluation':[1,0]}
    if dict(totals)!=expected:raise ValueError('Counts differ: '+str(dict(totals)))
    if 'overflow=0'not in text:raise ValueError('Probe lost events')
    # Compile and run the same fixture on the installed historical Mono profile.
    oracle=work/'Oracle.cs';oracle.write_text('using System;class Oracle{static void Main(){Console.WriteLine("ORACLE="+SourceAllocationFixture.Run(3,"y"));try{SourceAllocationFixture.Run(-1,"y");}catch(OverflowException){Console.WriteLine("ORACLE=OverflowException");}}}')
    csc,_,_=__import__('inventory').compiler_paths();oracle_exe=work/'Oracle.exe'
    run([csc,'/nologo','/noconfig','/nostdlib+','/target:exe','/out:'+str(oracle_exe),*['/r:'+str(framework/(n+'.dll'))for n in ['mscorlib','System','System.Core']],source,oracle],work/'oracle-compile.log')
    mono=framework.parents[2]/'bin/mono.exe'
    result=subprocess.run([str(mono),str(oracle_exe)],env=dict(os.environ,MONO_PATH=str(framework)),capture_output=True,timeout=30)
    (work/'oracle.log').write_bytes(result.stdout+result.stderr)
    if result.returncode or result.stdout.decode().splitlines()!=['ORACLE=9','ORACLE=OverflowException']:raise ValueError('Mono oracle differs')
    inputs=[Path(__file__),source,ROOT/'translator/Translator.cs',common/'source_allocation_probe.hpp',ROOT/'src/main/allocation_probe.cpp']
    receipt=dict(operation='source-allocation-operation-probe',status='PASS',categories=expected,source_trace_matches_mono=True,clr_heap_allocation_equivalence=False,producer=producer,
                 inputs={p.relative_to(ROOT).as_posix():hashlib.sha256(p.read_bytes()).hexdigest()for p in inputs})
    (ROOT/'config/phase2-source-allocation-fixture.json').write_text(json.dumps(receipt,indent=2)+'\n')
    print(json.dumps({k:v for k,v in receipt.items()if k not in ['producer','inputs']}))


if __name__=='__main__':main()
