"""Reproduce Phase 2 proofs locally, without installing dependencies or claiming game boot."""
import argparse
import hashlib
import json
from pathlib import Path
import os
import subprocess
import sys
import time

ROOT=Path(__file__).resolve().parents[1]
EXPECTED='d557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8'


def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()

def code_snapshot():
    paths={ROOT/'CMakeLists.txt',ROOT/'AGENTS.md',ROOT/'.gitignore'}
    for name in ('src','translator','tools','tests','reference/src'):
        paths|={p for p in (ROOT/name).rglob('*')if p.is_file()and (p.suffix in {'.cpp','.hpp','.inc','.cs','.py','.toml','.asm','.S','.c','.java','.xml','.ps1','.bat','.sh','.cmake'} or p.name=='CMakeLists.txt')}
    paths|={p for p in (ROOT/'config').glob('*')if p.is_file()and((p.suffix=='.json'and not p.name.startswith('phase2-')and p.name!='collation-license-audit.json')or(p.suffix=='.csv'and p.name!='translation.csv'))}
    return {p.relative_to(ROOT).as_posix():sha(p)for p in sorted(paths)}

def digest_json(value):return hashlib.sha256(json.dumps(value,sort_keys=True).encode('utf8')).hexdigest()

def managed_identity(folder):
    return digest_json({p.relative_to(folder).as_posix():sha(p) for p in sorted(folder.rglob('*')) if p.is_file()})

def run_measured(argv):
    """Run one check; on Windows a job object holds the whole process tree, so
    the peak committed memory covers compilers and test binaries too."""
    started=time.monotonic()
    if os.name!='nt':
        result=subprocess.run(argv,cwd=ROOT,capture_output=True)
        return result.returncode,result.stdout+result.stderr,None,time.monotonic()-started
    import ctypes
    from ctypes import wintypes
    kernel=ctypes.WinDLL('kernel32',use_last_error=True);ntdll=ctypes.WinDLL('ntdll')
    class IO(ctypes.Structure):_fields_=[(n,ctypes.c_ulonglong) for n in ('r','w','o','rb','wb','ob')]
    class BASIC(ctypes.Structure):_fields_=[('a',ctypes.c_longlong),('b',ctypes.c_longlong),('flags',wintypes.DWORD),('minws',ctypes.c_size_t),('maxws',ctypes.c_size_t),('active',wintypes.DWORD),('affinity',ctypes.c_size_t),('priority',wintypes.DWORD),('sched',wintypes.DWORD)]
    class EXT(ctypes.Structure):_fields_=[('basic',BASIC),('io',IO),('process_limit',ctypes.c_size_t),('job_limit',ctypes.c_size_t),('peak_process',ctypes.c_size_t),('peak_job',ctypes.c_size_t)]
    kernel.CreateJobObjectW.restype=wintypes.HANDLE
    kernel.AssignProcessToJobObject.argtypes=[wintypes.HANDLE,wintypes.HANDLE]
    kernel.QueryInformationJobObject.argtypes=[wintypes.HANDLE,ctypes.c_int,ctypes.c_void_p,wintypes.DWORD,ctypes.c_void_p]
    kernel.CloseHandle.argtypes=[wintypes.HANDLE]
    ntdll.NtResumeProcess.argtypes=[wintypes.HANDLE]
    job=kernel.CreateJobObjectW(None,None)
    process=subprocess.Popen(argv,cwd=ROOT,stdout=subprocess.PIPE,stderr=subprocess.STDOUT,creationflags=0x4) # CREATE_SUSPENDED
    peak=None
    try:
        handle=wintypes.HANDLE(int(process._handle))
        assigned=bool(job and kernel.AssignProcessToJobObject(job,handle))
        ntdll.NtResumeProcess(handle)
        output,_=process.communicate()
        if assigned:
            info=EXT()
            if kernel.QueryInformationJobObject(job,9,ctypes.byref(info),ctypes.sizeof(info),None):peak=int(info.peak_job)
    finally:
        if process.poll() is None:process.kill()
        if job:kernel.CloseHandle(job)
    return process.returncode,output,peak,time.monotonic()-started

def refresh_run_receipts():
    # A new replay is evidence, not a source change. Never reuse full checks
    # after editing any producer/test/runtime/generated body or native recipe.
    path=ROOT/'config/phase2-verification.json';report=json.loads(path.read_text(encoding='utf8'))
    if report.get('status')!='PASS'or report.get('complete')is not True or not report.get('checks')or any(c['exit_code']!=0 for c in report['checks']):raise ValueError('A complete passing verification is required')
    if report.get('verification_code_inputs')!=code_snapshot():raise ValueError('Code changed after full verification; rerun all checks')
    for check in report['checks']:
        if check.get('deferred'):continue
        log=ROOT/'build/phase2-verification'/(check['name']+'.log')
        if not log.is_file()or sha(log)!=check['log_sha256']:raise ValueError('Full check log differs: '+check['name'])
    allowed={'phase2-diagnostic-attempts.json','phase2-progress.json','phase2-match-start.json','phase2-menu-profile.json','phase2-match-complete.json','phase2-match-profile.json'}
    current={p.name:sha(p)for p in sorted(set((ROOT/'config').glob('phase2-*.json'))|{ROOT/'config/collation-license-audit.json'})if p.name!='phase2-verification.json'}
    for name in set(current)|set(report['receipts']):
        if name not in allowed and current.get(name)!=report['receipts'].get(name):raise ValueError('Non-replay proof changed: '+name)
    from diagnostic_execution import validated_completed
    history=json.loads((ROOT/'config/phase2-diagnostic-attempts.json').read_text(encoding='utf8'))
    for assembly in ('Assembly-CSharp','KairoLibrary'):validated_completed(history,assembly)
    report['receipts']=current;report['replay_receipts_refreshed_without_source_change']=True
    path.write_text(json.dumps(report,indent=2)+'\n',encoding='utf8',newline='\n');print(json.dumps(dict(status='PASS',full_checks_reused=len(report['checks']),source_snapshot_unchanged=True)))


def main():
    # Children (cl, csc, mono) localize output in the inherited console code page.
    sys.path.insert(0,str(Path(__file__).resolve().parent));from pc_compiler import utf8_console;utf8_console()
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--apk',type=Path)
    p.add_argument('--original-managed',type=Path)
    p.add_argument('--full',action='store_true',help='Ignore per-check receipts and run every check')
    p.add_argument('--jobs',type=int,choices=range(1,9),default=1,help='Cap for parallel compilation/test jobs (PLS_BUILD_JOBS); default 1 is conservative')
    p.add_argument('--refresh-run-receipts',action='store_true',help='After a new replay only, validate hashes and retain the same complete full-check result; refuses any code/test or other proof change')
    args=p.parse_args()
    if args.refresh_run_receipts:refresh_run_receipts();return
    if args.apk is None or args.original_managed is None:p.error('--apk and --original-managed required for full verification')
    if not args.apk.is_file() or sha(args.apk)!=EXPECTED:p.error('Expected authenticated local APK required')
    managed=args.original_managed.resolve(strict=True)
    if managed.is_relative_to(ROOT):p.error('Original API binaries must remain outside the port repository')
    commands=[
        ('repository-tests',['-m','unittest','discover','-s','tests/repository','-p','test_*.py']),
        ('gc-source-contract',['tools/inventory_gc_contract.py']),
        ('prepared-native-textures',['tools/test_ctr_texture_runtime.py']),
        ('resource-trace-events',['tools/test_resource_trace.py']),
        ('direct-kairo-adapter',['tools/test_direct_kairo_adapter.py']),
        ('tracing-gc-engine',['tools/test_tracing_gc.py']),
        ('tracing-gc-allocation-visibility',['tools/test_gc_memory_resource.py']),
        ('ctr-gc-layout',['tools/test_ctr_stack_layout.py']),
        ('tracing-measurements',['tools/report_tracing_measurements.py']),
        ('tracing-native-roots',['tools/test_tracing_runtime.py']),
        ('float-discriminants-x86',['tools/fp-discriminants/run_x86.py']),
        ('float-arm-emission-regression',['tools/test_arm_float_model.py']),
        ('float-cal-models',['tools/fp-discriminants/cal_models.py']),
        ('tracing-ui-dispatch',['tools/test_ui_dispatch_gc.py','--tracing']),
        ('resource-yield-control-model',['tests/kairo/resource_yield_model.py']),
        ('syntax-inventory-tests',['tools/csharp_subset/test_inventory.py']),
        ('reference',['tools/check_reference.py']),
        ('cmake-header-dependencies',['tools/test_cmake_dependencies.py']),
        ('culture-bound-inventory',['tools/inventory_culture.py','--original-managed',str(managed)]),
        ('boot-concurrency-inventory',['tools/inventory_boot_concurrency.py']),
        ('mono-collation-source',['tools/setup_mono_collation.py','--apk',str(args.apk.resolve())]),
        ('mono-collation-generation',['tools/generate_mono_collator.py']),
        ('mono-number-format-source',['tools/setup_number_format.py','--apk',str(args.apk.resolve())]),
        ('effective-core-profile',['tests/translator/run_core_profile.py']),
        ('portable-compile',['tools/translate','--original-managed',str(managed),'--compile']),
        ('portable-differential',['translator/test_portable.py']),
        ('portable-split-differential',['translator/test_split.py']),
        ('lowering-differential',['translator/test_lowering.py']),
        ('content-lowering',['translator/test_content_lowering.py']),
        ('value-type-lowering',['translator/test_values.py','--original-managed',str(managed)]),
        ('matrix-point-lowering',['tools/test_matrix_point.py','--original-managed',str(managed)]),
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
        ('runtime-allocation-sites',['tools/test_allocation_sites.py']),
        ('runtime-delegate-invocation',['tools/test_delegate_runtime.py']),
        ('runtime-literal-interning',['tools/test_literal_runtime.py']),
        ('source-allocation-attribution',['translator/test_source_allocations.py']),
        ('runtime-exception-objects',['tools/test_exception_objects.py']),
        ('runtime-encoding',['tools/test_runtime_encoding.py']),
        ('string-ops',['tests/translator/run_string_ops.py']),
        ('historical-float-parse',['tools/probe_float_parse.py']),
        ('runtime-regex',['tools/test_regex.py']),
        ('runtime-path',['tools/test_path.py']),
        ('mono-collation-differential',['tests/translator/run_mono_collation.py']),
        ('collation-license-audit',['tools/audit_collation_license.py']),
        ('unicode-regeneration-audit',['tools/probe_unicode_regeneration.py']),
        ('managed-threads',['tests/translator/run_thread_fixtures.py']),
        ('managed-shared-fields',['tools/test_shared_fields.py']),
        ('native-globalization',['tools/test_globalization.py']),
        ('pc-memory-sampler',['tools/test_pc_memory.py']),
        ('native-allocator-heap',['tools/test_runtime_memory.py']),
        ('pc-metrics-aggregation',['tools/test_pc_metrics.py']),
        ('diagnostic-key-parser',['tools/test_diagnostic_keys.py']),
        ('diagnostic-route-runner',['tools/test_diagnostic_route.py']),
        ('ui-dispatch-GC',['tools/test_ui_dispatch_gc.py']),
        ('service-policy',['tools/write_service_policy.py']),
        ('services',['tools/test_services.py']),
        ('legacy-assets',['tools/inventory_legacy_assets.py','--apk',str(args.apk.resolve())]),
        ('private-resource-catalog',['tools/build_asset_catalog.py','--apk',str(args.apk.resolve())]),
        ('sdl-and-assets',['tools/build-pc','--fixtures-only','--asset-readback','--apk',str(args.apk.resolve())]),
        # The leaf guard links pls_semantics.lib; build that library from the
        # current runtime before testing, including when the GC ABI changes.
        ('diagnostic-leaf-guards',['translator/test_diagnostic_leaves.py']),
        ('incremental-emission',['translator/test_incremental.py']),
        ('scalar-min',['tools/test_scalar_min.py']),
        ('nonblocking-text-input',['tools/test_text_input.py']),
        ('graphics-and-font',['tools/test_graphics.py']),
        ('graphics-current',['tools/test_graphics_current.py']),
        ('arc-raster-invariants',['tools/test_arc_raster.py']),
        ('graphics-arcs',['tools/test_graphics_arcs.py']),
        ('mono-floating-format',['tools/test_float_format.py']),
        ('diagnostic-instrumentation',['tools/test_diagnostic_instrumentation.py']),
        ('diagnostic-profile-overhead',['tools/test_profile_overhead.py']),
        ('offscreen-mesh',['tools/test_offscreen.py']),
        ('vector-iterator',['translator/test_vector_iterator.py']),
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
    receipts=folder/'receipts';receipts.mkdir(exist_ok=True)
    os.environ['PLS_BUILD_JOBS']=str(args.jobs)
    from verification_groups import groups_for,group_digest
    producer=digest_json(dict(verify=sha(Path(__file__)),groups=sha(Path(__file__).with_name('verification_groups.py'))));managed_hash=managed_identity(managed)
    def state(name,snapshot=None):
        # Each check is bound to the files of its dependency groups (measured map,
        # docs/notes/verification-groups.md); unmapped checks use every group.
        # Generated proof receipts in config/ are excluded from the snapshot.
        return dict(code=group_digest(snapshot if snapshot is not None else code_snapshot(),groups_for(name)),apk=EXPECTED,managed=managed_hash,producer=producer)
    checks=[];deferred=[]
    for name,command in commands:
        receipt_path=receipts/(name+'.json');log=folder/(name+'.log')
        key=dict(state(name),command=command)
        if not args.full and receipt_path.is_file():
            try:previous=json.loads(receipt_path.read_text(encoding='utf8'))
            except json.JSONDecodeError:previous=None
            if previous and previous.get('key')==key and previous.get('exit_code')==0 and log.is_file() and sha(log)==previous.get('log_sha256'):
                checks.append(dict(name=name,exit_code=0,log_sha256=previous['log_sha256'],reused=True,peak_commit_bytes=previous.get('peak_commit_bytes'),elapsed_seconds=previous.get('elapsed_seconds')))
                print(json.dumps(dict(check=name,status='PASS',reused=True)),flush=True)
                continue
        # The monolithic portable differential (~7 min) runs only with --full;
        # without it a stale receipt is reported as deferred (--full is
        # mandatory before tags and the freeze).
        if name=='portable-differential' and not args.full:
            deferred.append(name);checks.append(dict(name=name,exit_code=0,deferred=True,reused=False))
            print(json.dumps(dict(check=name,status='DEFERRED',reason='runs only with --full')),flush=True);continue
        exit_code,output,peak,elapsed=run_measured([sys.executable,*command])
        log.write_bytes(output)
        # Interactive progress intentionally preserves an older coherent
        # publication while producers move. A checkpoint must not accept that
        # PENDING response as a successful final publication.
        if name=='progress' and exit_code==0:
            for line in output.decode('utf-8-sig',errors='replace').splitlines():
                try:message=json.loads(line)
                except json.JSONDecodeError:continue
                if isinstance(message,dict) and message.get('status')=='PENDING':exit_code=1
        row=dict(name=name,exit_code=exit_code,log_sha256=sha(log),reused=False,peak_commit_bytes=peak,elapsed_seconds=round(elapsed,3))
        checks.append(row)
        receipt_path.write_text(json.dumps(dict(row,key=key),indent=2)+'\n',encoding='utf-8',newline='\n')
        print(json.dumps(dict(check=name,status='PASS' if exit_code==0 else 'FAIL',peak_commit_bytes=peak,elapsed_seconds=round(elapsed,1))),flush=True)
        if exit_code:
            failure=dict(operation='phase2-checkpoint-full-verification',status='FAIL',checks=checks,
                failed_check=name,producer_sha256=producer,apk_sha256=EXPECTED,
                complete=False,game_boot=False)
            (ROOT/'config/phase2-verification.json').write_text(json.dumps(failure,indent=2)+'\n',encoding='utf-8',newline='\n')
            raise RuntimeError('Verification failed; inspect '+str(log))
    # Approval needs every receipt valid for the tree as it is NOW: a check
    # that rewrote code (e.g. regeneration) invalidates reused receipts.
    final_snapshot=code_snapshot()
    stale=[name for name,command in commands if name not in deferred
           and json.loads((receipts/(name+'.json')).read_text(encoding='utf8'))['key']!=dict(state(name,final_snapshot),command=command)]
    if stale:raise RuntimeError('Code tree changed during verification; rerun to refresh: '+', '.join(stale[:10]))
    if sha(args.apk)!=EXPECTED:raise ValueError('Original APK changed during verification')
    report=dict(operation='phase2-checkpoint-full-verification',status='PASS',complete=True,checks=checks,
        full=bool(args.full),deferred_checks=deferred,dependency_model='per-check groups (tools/verification_groups.py)',
        verification_code_inputs=code_snapshot(),jobs=args.jobs,
        heaviest_checks=sorted(({'name':c['name'],'peak_commit_bytes':c['peak_commit_bytes']} for c in checks if c.get('peak_commit_bytes')),key=lambda c:-c['peak_commit_bytes'])[:3],
        producer_sha256=sha(Path(__file__)),apk_sha256=EXPECTED,game_boot=False,
        receipts={path.name:sha(path) for path in sorted(set((ROOT/'config').glob('phase2-*.json'))|{ROOT/'config/collation-license-audit.json'})
                  if path.name!='phase2-verification.json'})
    (ROOT/'config/phase2-verification.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')


if __name__=='__main__':main()
