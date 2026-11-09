"""Check generated service-policy replacements against explicit user contracts."""
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile
from translate import ROOT,prepare,run
from pc_compiler import environment


def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    folder,runtime,tool,producer=prepare();output=folder/'service-policy-generated';output.mkdir(parents=True,exist_ok=True)
    source=ROOT/'tests/translator/ServicePolicyFixtures.cs';unity=Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono/lib/mono/unity')
    policies={}
    def policy(identifier,kind,**values):policies['M:SyntheticPolicy.'+identifier]=dict(kind=kind,field_assignments=[],**values)
    for declaring in ['Billing','DerivedBilling']:
        policy(declaring+'.Refresh(System.Int32)','bool_false');policy(declaring+'.Provision','void')
    policy('Disabled.ShowOffers','bool_false');policies['M:SyntheticPolicy.Disabled.ShowOffers']['field_assignments']=[dict(field='F:SyntheticPolicy.Disabled.offer',kind='enum',value=2,enum_member='F:SyntheticPolicy.Disabled.OfferState.Failed')]
    policy('Disabled.UpdateAd','void');policies['M:SyntheticPolicy.Disabled.UpdateAd']['field_assignments']=[dict(field='F:SyntheticPolicy.Disabled.ads',kind='bool',value=False),dict(field='F:SyntheticPolicy.Disabled.size',kind='int',value=65)]
    policy('Disabled.Ready','bool_true');policy('Disabled.Restore','int_exact',value=1);policy('Disabled.Missing','null');policy('Disabled.Notifications','empty_string_array');policy('Disabled.Register(System.String)','register_local')
    request=dict(assembly='ServicePolicyFixtures',sources=[str(source)],references=[str(unity/(name+'.dll'))for name in ['mscorlib','System','System.Core']],selected=[],select_all_source_methods=True,output=str(output),service_overrides=policies,native_includes=['services_managed.hpp'])
    request_file=folder/'service-policy-input.json';report_file=folder/'service-policy-report.json'
    request_file.write_text(json.dumps(request)+'\n',encoding='utf8',newline='\n');run([runtime,tool,request_file,report_file],folder/'service-policy-translator.log')
    report=json.loads(report_file.read_text());methods={method['id']:method['cpp_name']for method in report['emitted_methods']}
    if report['rejected_methods']:raise ValueError('Unsupported own service policy fixture: '+str(report['rejected_methods']))
    if not all(row['emitted']for row in report['service_policy_emission']):raise ValueError('Not all requested fixture policies were emitted')
    name=lambda method:methods['M:SyntheticPolicy.Scenario.'+method]
    harness=folder/'service-policy-harness.cpp';exe=folder/'service-policy-harness.exe'
    text='#include "portable_generated.hpp"\n#include <iostream>\nint main(int argc,char**argv){if(argc!=2)return 2;pls::services::OfflineServices services(argv[1]);pls::services::install(&services);int assertions=0;auto check=[&](bool condition){if(!condition)throw std::runtime_error("Generated service policy contract failed");++assertions;};\n'
    text+='using namespace pls::generated;check('+name('Preserve')+'()==7305);check('+name('NullCaller')+'()==2);check('+name('Assignments')+'()==265);check('+name('Constants')+'());auto first='+name('Registration')+'();check(first.length()==5);check(first.at(0)==49&&first.at(1)==10&&first.at(2)==50&&first.at(3)==48&&first.at(4)==50);auto second='+name('Registration')+'();check(first!=second);first.at(0)=0;check(second.at(0)==49);check(!services.device_id().empty());std::cout<<assertions<<"\\n";return 0;}\n'
    harness.write_text(text,encoding='utf8',newline='\n');env=environment();cl=Path(shutil.which('cl.exe',path=env['PATH']))
    sources=[harness,*sorted(output.glob('*.cpp')),ROOT/'src/kairo/common/semantic_runtime.cpp',ROOT/'src/kairo/common/managed_exceptions.cpp',ROOT/'src/kairo/common/services.cpp']
    command=[cl,'/nologo','/std:c++17','/EHsc','/Od','/fp:strict','/utf-8','/W4','/I'+str(ROOT/'src/kairo/common'),'/I'+str(ROOT/'src/kairo/api'),'/I'+str(output),'/Fe:'+str(exe),'/Fo'+str(folder)+'/',*sources]
    inputs=set(output.glob('*.?pp'))|set(output.glob('*.inc'))|set((ROOT/'src/kairo/common').glob('*.hpp'))|{source,Path(__file__),ROOT/'translator/Translator.cs',ROOT/'src/kairo/api/services_managed.hpp'}|set(sources)
    before={p.relative_to(ROOT).as_posix():sha(p)for p in inputs};run(command,folder/'service-policy-compile.log',env)
    with tempfile.TemporaryDirectory(prefix='own-generated-service-',dir=folder)as prefs:
        result=run([exe,prefs],folder/'service-policy-native.log',env)
    if before!={p.relative_to(ROOT).as_posix():sha(p)for p in inputs}:raise ValueError('Generated service proof inputs changed')
    receipt=dict(operation='generated-authorized-service-policy-contracts',status='PASS',assertions=int(result.stdout.strip()),policies=len(policies),emitted_method_count=report['emitted_method_count'],game_executed=False,original_binaries_executed=False,assets_used=False,
        producer=producer,inputs=before,generated_policy_ids=list(policies),native_executable=dict(path=exe.relative_to(ROOT).as_posix(),sha256=sha(exe)),compiler=dict(path=str(cl),sha256=sha(cl)),native_compiler_options=['/std:c++17','/EHsc','/Od','/fp:strict','/utf-8','/W4'],
        comparison='Explicit user-approved policy contract, not original service behavior: preserve save rights/tasks, derived virtual dispatch, no grants, argument-before-nullcheck ordering, absent ads, failed reward, local registration exact wire/fresh storage.',limitations=['Synthetic source collaborators prove actual generic emitter policy rules. The production 53 IDs have a separate emitted/rejected/not_reached receipt. No game execution is claimed.'])
    (ROOT/'config/phase2-service-lowering-fixtures.json').write_text(json.dumps(receipt,indent=2)+'\n',encoding='utf8',newline='\n');print(json.dumps(dict(status='PASS',assertions=receipt['assertions'],policies=len(policies))))


if __name__=='__main__':main()
