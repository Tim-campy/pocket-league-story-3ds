"""Bound field accesses for a bounded boot concurrency audit; no data values."""
import hashlib
import json
from pathlib import Path
import shutil
import sys
from test_input import ROOT,sha,run
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths


def main():
 folder=ROOT/'build/boot-concurrency';folder.mkdir(parents=True,exist_ok=True)
 request=ROOT/'build/culture-inventory/input.json'
 if not request.exists():raise ValueError('Run the authenticated bound culture inventory first; source/reference manifest required')
 payload=json.loads(request.read_text(encoding='utf-8-sig'));proof=json.loads((ROOT/'config/culture-usage.json').read_text(encoding='utf-8-sig'))
 expected={r['name']:r['sha256'] for r in proof['original_metadata']}
 for p in payload['references']:
  path=Path(p)
  if sha(path)!=expected[path.name]:raise ValueError('Historical metadata reference identity differs')
 csc,dotnet,framework=compiler_paths();source=ROOT/'tools/BootConcurrency.cs';target=folder/'BootConcurrency.dll'
 refs=[framework/(n+'.dll') for n in ['System.Private.CoreLib','System.Runtime','System.Console','System.Linq','System.Collections','System.Text.Json','System.Collections.Immutable','System.Memory','netstandard']]
 refs += [csc.parent/n for n in ['Microsoft.CodeAnalysis.dll','Microsoft.CodeAnalysis.CSharp.dll']]
 args=['/nologo','/nostdlib+','/nullable:enable','/target:exe','/out:'+str(target)]+['/r:'+str(p) for p in refs]+[str(source)]
 rsp=folder/'compile.rsp';rsp.write_text('\n'.join('"'+a+'"' for a in args)+'\n',encoding='utf-8',newline='\n');run([csc,'/noconfig','@'+str(rsp)],folder,'compile')
 for path in refs[-2:]:shutil.copy2(path,folder/path.name)
 (folder/'BootConcurrency.runtimeconfig.json').write_text(json.dumps(dict(runtimeOptions=dict(tfm='net10.0',framework=dict(name='Microsoft.NETCore.App',version='10.0.10'))))+'\n',encoding='utf-8',newline='\n')
 self_test=json.loads(run([dotnet,target,'--self-test'],folder,'self-test'))
 output=folder/'bound-accesses.json';run([dotnet,target,request,output],folder,'bound-scan')
 raw=json.loads(output.read_text(encoding='utf-8-sig'));boot='M:form.BootForm.'
 boot_accesses=[r for r in raw['accesses'] if r['caller'].startswith(boot)]
 ids=sorted({r['field'] for r in boot_accesses})
 fields={r['id']:r for r in raw['fields']}
 records=[]
 for field in ids:
  selected=[r for r in boot_accesses if r['field']==field]
  records.append(dict(**fields[field],boot_accesses=selected,other_readers=sorted({r['caller'] for r in raw['accesses'] if r['field']==field and not r['caller'].startswith(boot) and 'read' in r['access']}),other_writers=sorted({r['caller'] for r in raw['accesses'] if r['field']==field and not r['caller'].startswith(boot) and 'write' in r['access']})))
 # The public report is intentionally bounded. All-corpus raw accesses/call
 # graph stay private; literals/initializer values are absent in both outputs.
 groups={
 'progress_concurrent':['state_','loadCnt_','loadMax_','bowWait_'],
 'multi_writer_load_then_store':['frame_wait'],
 'payload_published_by_state_candidate':['e_','error_','regist_'],
 'ui_owned_in_normal_boot':['dialog_','resLoad_','frame_main','anime_cnt','anime_mode','anime_ballY'],
 'no_worker_mutation_found':['frame_','loop_'],
 'lifecycle_handoff_reinit_unknown':['th_'],
 'readonly_reference_and_no_payload_writes_found':['softLabels_']}
 classifications=[dict(field='F:form.BootForm.'+name,classification=kind) for kind,names in groups.items() for name in names]
 transitive_ids=['F:kairo.unity.form.FormBase.'+name for name in ['leftSoftLabel_','rightSoftLabel_','softLabel3_','softLabel4_','formProcMode_']]
 transitive_ids += ['F:kairo.unity.ui.Canvas.'+name for name in ['softLabel_','showSoftLabel_','keyPulse_']]
 transitive_ids += ['F:kairo.unity.ui.ResourceManager.'+name for name in ['img','seb','sound','loaded_','loadCnt_','loadNum_','jarCache_']]
 transitive_ids += ['F:kairo.common.cfg.Config.'+name for name in ['checkCount_','createImageArea_','COUNT_ENABLE','SHOW_DEBUG','PRINT','DEBUG_CMD','REGIST_ENABLE']]
 transitive_ids += ['F:kairo.unity.util.Property.'+name for name in ['ints','lngs','strs','bytes','bools']]
 transitive=[dict(**fields[field],accesses=[r for r in raw['accesses'] if r['field']==field]) for field in transitive_ids if field in fields]
 report=dict(operation='bound-boot-field-access-inventory',status='PASS',binding_errors=raw['binding_errors'],self_test=self_test,fields=records,
 boot_field_classifications=classifications,classification_counts={k:len(v) for k,v in groups.items()},transitive_fields=transitive,
 worker_load_written_appdata=sorted({r['field'] for r in boot_accesses if r['caller']=='M:form.BootForm.Load' and r['field'].startswith('F:main.AppData.') and 'write' in r['access']}),
 no_bound_direct_callers={name:not any(r['callee']==name for r in raw['calls']) for name in ['M:form.BootForm.Download','M:form.BootForm.UpdateScoreFromNetwork','M:form.BootForm.DivServerData(System.String)']},
 boot_direct_calls=[r for r in raw['calls'] if r['caller'].startswith(boot)],
 inputs={source.relative_to(ROOT).as_posix():sha(source),Path(__file__).relative_to(ROOT).as_posix():sha(Path(__file__))},
 source_manifest={Path(p).relative_to(ROOT/'reference').as_posix():sha(Path(p)) for p in payload['kairo_sources']+payload['game_sources']},
 raw_access_graph_sha256=sha(output),metadata_reference_hashes=expected,
 limits=['Bound call edges do not expand virtual/interface/delegate targets; unknown dynamic reachability is not declared safe.',
 'An array/reference field read is separate from an access to its elements; atomic reference publication does not protect mutable payload.',
        'Field initializer/cctor effects are not expanded into the call graph; constructor reachability is not an exhaustive safety proof.',
        'Implicit operator/property/enumerator invocations are not expanded by this bounded call-edge scanner.',
        'Payload publication by state is a proposed C++ release/acquire contract, not synchronization already present in the original plain fields.',
        'This is source analysis only; it neither changes synchronization nor promotes translated methods.'],game_assets_used=False,original_binaries_executed=False)
 (ROOT/'config/phase2-boot-concurrency.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
 print(json.dumps(dict(status='PASS',fields=len(records),boot_accesses=len(boot_accesses),boot_calls=len(report['boot_direct_calls']),private_raw_bytes=output.stat().st_size,public_bytes=(ROOT/'config/phase2-boot-concurrency.json').stat().st_size)))


if __name__=='__main__':main()
