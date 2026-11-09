"""Measure removal of historical casing/category behavior in private test builds.

No production file or license is changed. Inputs are the existing synthetic
edge corpus and its hash-bound historical Mono source-oracle observations.
"""
import collections
import hashlib
import json
from pathlib import Path
import re
import shutil
import subprocess
import sys

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tools'))
from pc_compiler import environment


def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    folder=ROOT/'build/collation-license-audit';folder.mkdir(exist_ok=True)
    proof=json.loads((ROOT/'config/phase2-mono-collation-tests.json').read_text())
    oracle=ROOT/'build/mono-collation-fixtures/edge-mono.stdout'
    if sha(oracle)!=proof['edge_cases']['mono_stdout_sha256']:raise ValueError('Stale historical edge oracle')
    expected=dict(line.split('\t',1)for line in oracle.read_text(encoding='utf-8-sig').splitlines())
    original=ROOT/'src/kairo/common/managed_mono_character_data.cpp'
    source=original.read_text(encoding='utf-8')
    inputs=[Path(__file__),original,ROOT/'tests/translator/mono_collation_edge_fixtures.cpp',
            ROOT/'src/kairo/common/managed_collation.cpp',ROOT/'src/kairo/common/semantic_runtime.cpp',
            ROOT/'src/kairo/common/managed_collation.hpp',ROOT/'src/kairo/common/semantic_runtime.hpp',
            ROOT/'src/kairo/common/mono_collator_methods.inc',ROOT/'src/kairo/common/mono_unicode_methods.inc',
            ROOT/'build/generated/mono-collation/mono_character_tables.inc',
            ROOT/'build/generated/mono-collation/mono_collation_tables.inc']
    before={p.relative_to(ROOT).as_posix():sha(p)for p in inputs}
    env=environment();compiler=shutil.which('cl.exe',path=env['PATH']);results={}
    for mode in ('baseline','without_case_tables','without_unassigned_bitmap','without_both'):
        variant=folder/mode;variant.mkdir(exist_ok=True);text=source
        if mode in ('without_case_tables','without_both'):
            text,n=re.subn(r'return (?:ToLowerDataLow|ToLowerDataHigh|ToUpperDataLow|ToUpperDataHigh)\[[^;]+;', 'return c;',text)
            if n!=4:raise ValueError('Casing access count changed')
        if mode in ('without_unassigned_bitmap','without_both'):
            text,n=re.subn(r'bool unassigned\(char16_t c\)\{[^\n]+\}', 'bool unassigned(char16_t c){(void)c;return false;}',text)
            if n!=1:raise ValueError('Category accessor changed')
        provider=variant/'character_provider.cpp';provider.write_text(text,encoding='utf-8',newline='\n')
        exe=variant/'edge.exe'
        command=[compiler,'/nologo','/std:c++17','/EHsc','/fp:strict','/utf-8','/W4',
                 '/I'+str(ROOT/'src/kairo/common'),'/I'+str(ROOT/'build/generated/mono-collation'),
                 '/Fe:'+str(exe),'/Fo'+str(variant)+'/',
                 ROOT/'src/kairo/common/semantic_runtime.cpp',ROOT/'src/kairo/common/managed_collation.cpp',
                 provider,ROOT/'tests/translator/mono_collation_edge_fixtures.cpp']
        compile_run=subprocess.run([str(x)for x in command],cwd=ROOT,env=env,capture_output=True,timeout=120)
        (variant/'compile.log').write_bytes(compile_run.stdout+compile_run.stderr)
        if compile_run.returncode:raise RuntimeError('See '+str(variant/'compile.log'))
        run=subprocess.run([str(exe)],cwd=ROOT,env=env,capture_output=True,timeout=60)
        (variant/'results.stdout').write_bytes(run.stdout);(variant/'results.stderr').write_bytes(run.stderr)
        if run.returncode:raise RuntimeError('Ablation process failed')
        actual=dict(line.split('\t',1)for line in run.stdout.decode('utf-8-sig').splitlines())
        if actual.keys()!=expected.keys():raise ValueError('Incomplete ablation corpus')
        failures=[key for key,value in expected.items()if actual[key]!=value]
        by_operation=collections.Counter();by_culture=collections.Counter();en_us_operations=collections.Counter()
        for key in failures:
            match=re.fullmatch(r'c(\d+)a\d+(?:b\d+)?([A-Za-z][A-Za-z0-9]*)',key)
            if not match:raise ValueError('Unknown edge-case key')
            culture,operation=match.groups();by_operation[operation]+=1;by_culture[culture]+=1
            if culture=='1':en_us_operations[operation]+=1
        witnesses=[]
        for operation in sorted(by_operation):
            key=next(k for k in failures if k.startswith('c1') and re.search(operation+r'$',k))if en_us_operations[operation]else next(k for k in failures if re.search(operation+r'$',k))
            witnesses.append(dict(case=key,expected=expected[key],actual=actual[key]))
        results[mode]=dict(cases=len(expected),mismatches=len(failures),by_operation=dict(by_operation),
                           by_culture=dict(by_culture),en_us_operations=dict(en_us_operations),
                           witnesses=witnesses,provider_sha256=sha(provider),executable_sha256=sha(exe),
                           stdout_sha256=sha(variant/'results.stdout'))
        print(json.dumps(dict(mode=mode,cases=len(expected),mismatches=len(failures),en_us_operations=dict(en_us_operations))),flush=True)
    if results['baseline']['mismatches']:raise ValueError('Baseline does not match the source oracle')
    if any(sha(ROOT/p)!=h for p,h in before.items()):raise ValueError('Audit inputs changed concurrently')
    report=dict(operation='historical-collation-license-dependency-ablation',status='PASS',
                baseline_checkpoint='af66d13',inputs=before,oracle_stdout_sha256=sha(oracle),
                results=results,production_changed=False,license_decision_made=False,
                limitations=['Ablations replace behavior in private provider copies; they are not candidate implementations or physical binary-size measurements.',
                             'All 25704 observations are synthetic; this does not demonstrate which strings will occur in a complete playthrough.',
                             'The Android effective culture remains UNKNOWN. Culture index1 is en-US; index0 is invariant.'])
    (ROOT/'config/collation-license-audit.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')


if __name__=='__main__':main()
