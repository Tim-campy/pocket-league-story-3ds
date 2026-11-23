"""Exercise actual Roslyn->C++ emission using synthetic semantic fixtures."""
import json
from pathlib import Path
import subprocess
import sys
from translate import prepare,run,ROOT


def main():
    folder,runtime,tool,producer=prepare()
    compiler,_,framework=__import__('inventory').compiler_paths()
    output=folder/'lowering-generated';output.mkdir(parents=True,exist_ok=True)
    source=ROOT/'tests/translator/LoweringFixtures.cs'
    framework=Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono/lib/mono/unity')
    request=dict(assembly='LoweringFixtures',sources=[str(source)],references=[str(framework/(n+'.dll')) for n in ['mscorlib','System','System.Core']],selected=[],select_all_source_methods=True,output=str(output))
    request['external_methods']={'M:Synthetic.SourceAdapterTarget.Read(System.Int32)':'source-adapter:M:Synthetic.SourceAdapters.Read(Synthetic.SourceAdapterTarget,System.Int32)'}
    request['external_methods']['M:Synthetic.SourceStaticTarget.Read(System.Int32)']='source-static:M:Synthetic.SourceStaticAdapters.Read(System.Int32)'
    request['external_methods']['M:Synthetic.SourceAdapterTarget.Next(System.Int32@)']='source-adapter:M:Synthetic.SourceAdapters.Next(Synthetic.SourceAdapterTarget,System.Int32@)'
    req=folder/'lowering-input.json';report_file=folder/'lowering-report.json'
    req.write_text(json.dumps(request),encoding='utf-8',newline='\n')
    run([runtime,tool,req,report_file],folder/'lowering-translator.log')
    report=json.loads(report_file.read_text(encoding='utf-8-sig'))
    rejected=report['rejected_methods']
    expected_rejected={'M:LoweringFixtures.UnsupportedClosureGoto(System.Int32)','M:Synthetic.IRun.Run','M:Synthetic.ImplicitScope.NeverCalled(System.Int32)','M:Synthetic.AbstractBase.Read'}
    # Deliberate negative control: an overridden generic virtual has no C++ lowering (no virtual templates).
    generic_virtual={'M:LoweringFixtures.GenericVirtualOverridden(System.Int32)','M:Synthetic.GenericVirtualBase.Make``1','M:Synthetic.GenericVirtualDerived.Make``1'}
    expected_rejected|=generic_virtual
    if set(rejected)!=expected_rejected:raise ValueError('Unexpected supported/unsupported fixture set: '+str(rejected))
    if any(rejected[i]['reason']!='overridden generic virtual method not lowered' for i in generic_virtual):raise ValueError('Generic virtual negative control rejected for another reason: '+str({i:rejected[i] for i in generic_virtual}))
    emitted={m['id']for m in report['emitted_methods']}
    if not {'M:LoweringFixtures.ImplicitConstructorScope','M:Synthetic.ImplicitScope.#ctor'}<=emitted:raise ValueError('Implicit constructor inherited an unreachable method scope')
    subprocess.run([sys.executable,ROOT/'translator/test_portable.py','--report',report_file,'--generated',output,'--oracle',output/'source_oracle.cs','--folder',folder/'lowering-differential','--result',ROOT/'config/phase2-lowering-fixtures.json'],check=True,cwd=ROOT)
    result_file=ROOT/'config/phase2-lowering-fixtures.json';result=json.loads(result_file.read_text())
    negative='M:LoweringFixtures.UnsupportedClosureGoto(System.Int32)'
    result.update(producer=producer,negative_control=dict(id=negative,reason=rejected[negative]['reason']),abstract_declarations_without_body=['M:Synthetic.IRun.Run','M:Synthetic.AbstractBase.Read'],abstract_initializer_exercised_through=dict(initializer='M:Synthetic.AbstractBase.#ctor',scenario='M:LoweringFixtures.AbstractCtorDispatch',expected_seen=9,factory_defined=False),fixture_source_sha256=__import__('hashlib').sha256(source.read_bytes()).hexdigest())
    result_file.write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8',newline='\n')


if __name__=='__main__':main()
