"""Reproduce Phase 2 proofs locally, without installing dependencies or claiming game boot."""
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
        ('cmake-header-dependencies',['tools/test_cmake_dependencies.py']),
        ('culture-bound-inventory',['tools/inventory_culture.py','--original-managed',str(managed)]),
        ('boot-concurrency-inventory',['tools/inventory_boot_concurrency.py']),
        ('mono-collation-source',['tools/setup_mono_collation.py','--apk',str(args.apk.resolve())]),
        ('mono-collation-generation',['tools/generate_mono_collator.py']),
        ('effective-core-profile',['tests/translator/run_core_profile.py']),
        ('portable-compile',['tools/translate','--original-managed',str(managed),'--compile']),
        ('portable-differential',['translator/test_portable.py']),
        ('portable-split-differential',['translator/test_split.py']),
        ('lowering-differential',['translator/test_lowering.py']),
        ('content-lowering',['translator/test_content_lowering.py']),
        ('value-type-lowering',['translator/test_values.py','--original-managed',str(managed)]),
        ('shared-field-lowering',['translator/test_shared_fields.py']),
        ('surface-adapter-lowering',['translator/test_surface_adapter.py']),
        ('image-metadata-lowering',['translator/test_image_metadata.py']),
        ('ref-out-lowering',['translator/test_ref.py']),
        ('goto-case-lowering',['translator/test_goto_case.py']),
        ('service-policy-lowering',['translator/test_service_lowering.py']),
        ('game-diagnostic-inventory',['tools/translate','--assembly','Assembly-CSharp','--bootstrap-main','--diagnostics-only','--original-managed',str(managed)]),
        ('game-partial-compile',['tools/translate','--assembly','Assembly-CSharp','--bootstrap-main','--compile','--original-managed',str(managed)]),
    ]
    for fixture in ('SemanticFixtures','CollectionFixtures','EncodingFixtures','ConversionFixtures','IntegerParseFixtures',
                    'ArrayBridgeFixtures','RandomFixtures','StringBuilderFixtures','DictionaryFixtures',
                    'FloatingCastFixtures','TimeFixtures','ObjectDispatchFixtures','TimeZoneFixtures','GcFixtures'):
        commands.append(('runtime-'+fixture,['tests/translator/run_semantic_fixtures.py','--fixture',fixture]))
    commands += [
        ('streams',['tests/kairo/run_streams.py']),
        ('stack-collection',['tools/test_stack.py']),
        ('binary-reader',['tests/kairo/run_streams.py','--fixture','BinaryReaderFixtures']),
        ('stream-reader',['tests/translator/run_stream_reader.py']),
        ('runtime-type-init',['tools/test_type_init.py']),
        ('runtime-exception-objects',['tools/test_exception_objects.py']),
        ('runtime-encoding',['tools/test_runtime_encoding.py']),
        ('string-ops',['tests/translator/run_string_ops.py']),
        ('historical-float-parse',['tools/probe_float_parse.py']),
        ('runtime-regex',['tools/test_regex.py']),
        ('runtime-path',['tools/test_path.py']),
        ('mono-collation-differential',['tests/translator/run_mono_collation.py']),
        ('collation-license-audit',['tools/audit_collation_license.py']),
        ('managed-threads',['tests/translator/run_thread_fixtures.py']),
        ('managed-shared-fields',['tools/test_shared_fields.py']),
        ('native-globalization',['tools/test_globalization.py']),
        ('pc-memory-sampler',['tools/test_pc_memory.py']),
        ('native-allocator-heap',['tools/test_runtime_memory.py']),
        ('pc-metrics-aggregation',['tools/test_pc_metrics.py']),
        ('ui-dispatch-GC',['tools/test_ui_dispatch_gc.py']),
        ('service-policy',['tools/write_service_policy.py']),
        ('services',['tools/test_services.py']),
        ('legacy-assets',['tools/inventory_legacy_assets.py','--apk',str(args.apk.resolve())]),
        ('private-resource-catalog',['tools/build_asset_catalog.py','--apk',str(args.apk.resolve())]),
        ('sdl-and-assets',['tools/build-pc','--fixtures-only','--asset-readback','--apk',str(args.apk.resolve())]),
        ('graphics-and-font',['tools/test_graphics.py']),
        ('graphics-current',['tools/test_graphics_current.py']),
        ('image-lifetime',['tools/test_image_lifetime.py']),
        ('streaming-media',['tools/test_media.py','--apk',str(args.apk.resolve())]),
        ('storage',['tools/test_storage.py','--apk',str(args.apk.resolve())]),
        ('raw-asset-reader',['tools/test_asset_reader.py','--apk',str(args.apk.resolve())]),
        ('input',['tools/test_input.py']),
        ('input-frame-source-probe',['tools/probe_input_frames.py']),
        ('debug-input-snapshot',['tools/test_debug_input.py']),
        ('forms',['tools/test_forms.py']),
        ('forms-execution',['tools/test_forms_execution.py']),
        ('surface-source-adapter',['tools/test_surface_bridge.py']),
        ('managed-service-bindings',['tools/test_managed_services.py']),
        ('offline-http-contract',['tools/test_offline_http.py']),
        ('offline-analytics-contract',['tools/test_analytics_offline.py']),
        ('bootstrap-order',['tools/test_bootstrap.py']),
        ('dialog-service',['tools/test_dialog.py']),
        ('sound-API',['tools/test_sound.py','--apk',str(args.apk.resolve())]),
        ('native-system-leaves',['tools/test_system.py']),
        ('application-properties',['tools/test_application_properties.py']),
        ('application-orientation',['tools/test_application_orientation.py']),
        ('android-GC-static',['tools/inspect_android_gc.py','--apk',str(args.apk.resolve())]),
        ('android-Unicode-static',['tools/inspect_android_unicode.py','--apk',str(args.apk.resolve())]),
        ('android-math-static',['tools/inspect_android_math.py','--apk',str(args.apk.resolve())]),
        ('culture-characterization',['tools/probe_string_culture.py']),
        ('checkpoint-comparison',['translator/compare_checkpoint.py','--commit','af66d13']),
        ('progress',['tools/progress']),
    ]
    folder=ROOT/'build/phase2-verification';folder.mkdir(parents=True,exist_ok=True)
    checks=[]
    for name,command in commands:
        result=subprocess.run([sys.executable,*command],cwd=ROOT,capture_output=True)
        log=folder/(name+'.log');log.write_bytes(result.stdout+result.stderr)
        exit_code=result.returncode
        # Interactive progress intentionally preserves an older coherent
        # publication while producers move. A checkpoint must not accept that
        # PENDING response as a successful final publication.
        if name=='progress' and exit_code==0:
            for line in result.stdout.decode('utf-8-sig',errors='replace').splitlines():
                try:message=json.loads(line)
                except json.JSONDecodeError:continue
                if isinstance(message,dict) and message.get('status')=='PENDING':exit_code=1
        checks.append(dict(name=name,exit_code=exit_code,log_sha256=sha(log)))
        print(json.dumps(dict(check=name,status='PASS' if exit_code==0 else 'FAIL')),flush=True)
        if exit_code:
            failure=dict(operation='phase2-checkpoint-full-verification',status='FAIL',checks=checks,
                failed_check=name,producer_sha256=sha(Path(__file__)),apk_sha256=EXPECTED,
                complete=False,game_boot=False)
            (ROOT/'config/phase2-verification.json').write_text(json.dumps(failure,indent=2)+'\n',encoding='utf-8',newline='\n')
            raise RuntimeError('Verification failed; inspect '+str(log))
    if sha(args.apk)!=EXPECTED:raise ValueError('Original APK changed during verification')
    report=dict(operation='phase2-checkpoint-full-verification',status='PASS',complete=True,checks=checks,
        producer_sha256=sha(Path(__file__)),apk_sha256=EXPECTED,game_boot=False,
        receipts={path.name:sha(path) for path in sorted(set((ROOT/'config').glob('phase2-*.json'))|{ROOT/'config/collation-license-audit.json'})
                  if path.name!='phase2-verification.json'})
    (ROOT/'config/phase2-verification.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')


if __name__=='__main__':main()
