"""Reproduce the Phase 2 checkpoint without installing dependencies or running the game."""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import sys

ROOT=Path(__file__).resolve().parents[1]
EXPECTED='d557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8'


def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--apk',required=True,type=Path)
    p.add_argument('--original-managed',required=True,type=Path)
    args=p.parse_args()
    if not args.apk.is_file() or sha(args.apk)!=EXPECTED:p.error('Expected authenticated local APK required')
    managed=args.original_managed.resolve(strict=True)
    if managed.is_relative_to(ROOT):p.error('Original API binaries must remain outside the port repository')
    commands=[
        ('repository-tests',['-m','unittest','discover','-s','tests/repository','-p','test_*.py']),
        ('syntax-inventory-tests',['tools/csharp_subset/test_inventory.py']),
        ('reference',['tools/check_reference.py']),
        ('portable-compile',['tools/translate','--original-managed',str(managed),'--compile']),
        ('portable-differential',['translator/test_portable.py']),
        ('lowering-differential',['translator/test_lowering.py']),
        ('game-diagnostics',['tools/translate','--assembly','Assembly-CSharp','--diagnostics-only','--original-managed',str(managed)]),
    ]
    for fixture in ('SemanticFixtures','CollectionFixtures','EncodingFixtures','ConversionFixtures','IntegerParseFixtures'):
        commands.append(('runtime-'+fixture,['tests/translator/run_semantic_fixtures.py','--fixture',fixture]))
    commands += [
        ('streams',['tests/kairo/run_streams.py']),
        ('service-policy',['tools/write_service_policy.py']),
        ('services',['tools/test_services.py']),
        ('legacy-assets',['tools/inventory_legacy_assets.py','--apk',str(args.apk.resolve())]),
        ('sdl-and-assets',['tools/build-pc','--fixtures-only','--asset-readback','--apk',str(args.apk.resolve())]),
        ('progress',['tools/progress']),
    ]
    folder=ROOT/'build/phase2-verification';folder.mkdir(parents=True,exist_ok=True)
    checks=[]
    for name,command in commands:
        result=subprocess.run([sys.executable,*command],cwd=ROOT,capture_output=True)
        log=folder/(name+'.log');log.write_bytes(result.stdout+result.stderr)
        checks.append(dict(name=name,exit_code=result.returncode,log_sha256=sha(log)))
        print(json.dumps(dict(check=name,status='PASS' if result.returncode==0 else 'FAIL')),flush=True)
        if result.returncode:raise RuntimeError('Verification failed; inspect '+str(log))
    if sha(args.apk)!=EXPECTED:raise ValueError('Original APK changed during verification')
    report=dict(operation='phase2-checkpoint-full-verification',status='PASS',checks=checks,
        producer_sha256=sha(Path(__file__)),apk_sha256=EXPECTED,game_boot=False,
        receipts={path.name:sha(path) for path in sorted((ROOT/'config').glob('phase2-*.json'))
                  if path.name!='phase2-verification.json'})
    (ROOT/'config/phase2-verification.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')


if __name__=='__main__':main()
