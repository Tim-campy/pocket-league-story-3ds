"""Build native fixtures or the game; a game build requires the user's APK."""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import time
import re
import sys
from pc_compiler import CMAKE,NINJA,environment,showincludes_prefix,audit_ninja_dependencies
from run_native_process import run_native_process

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'translator'))
from report_paths import unpack_source_paths
APK_SHA='d557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8'


def digest(path):return hashlib.sha256(path.read_bytes()).hexdigest()


def next_attempt_number(history,folder):
    used=[row['number']for row in history.get('attempts',[])]
    directory=Path(folder)/'attempts'
    if directory.exists():used.extend(int(p.name)for p in directory.iterdir()if p.name.isdecimal())
    return max(used,default=0)+1

def restore_private_preferences(folder,source_number,destination_number):
    """Copy only a previous owned test save into a fresh attempt, never originals."""
    folder=Path(folder).resolve();attempts=(folder/'attempts').resolve()
    if not 0<source_number<destination_number:raise ValueError('Private save must come from an earlier attempt')
    source=(attempts/str(source_number)/'preferences').resolve(strict=True)
    destination=(attempts/str(destination_number)/'preferences').resolve()
    if not source.is_relative_to(attempts)or not destination.is_relative_to(attempts)or destination.exists():raise ValueError('Private save paths must stay inside attempts and the destination must be new')
    entries=list(source.rglob('*'))
    if any(p.is_symlink()or p.is_junction()or not p.resolve().is_relative_to(source)for p in entries):raise ValueError('Private save cannot contain links or escape its source')
    files=[p for p in entries if p.is_file()]
    if not files:raise ValueError('Previous attempt has no private save files')
    receipt=[]
    for path in files:
        relative=path.relative_to(source);target=destination/relative;target.parent.mkdir(parents=True,exist_ok=True)
        content=path.read_bytes();target.write_bytes(content)
        receipt.append(dict(path=relative.as_posix(),sha256=hashlib.sha256(content).hexdigest(),bytes=len(content)))
    return dict(source_attempt=source_number,files=sorted(receipt,key=lambda row:row['path']))


def metric_log_summary(stderr):
    """Record instrumentation evidence, never infer that a game screen worked."""
    result=dict(protocol='PLS_PC_METRICS=JSONL',records=0,invalid_records=0,
        memory_phases=[],frame_summary_records=0,max_completed_presented_frames=0,
        game_screen='UNKNOWN')
    phases={'before_main','first_presented_frame','after_60_presented_frames','after_900_presented_frames','final_before_teardown','failure_after_setup_unwind'}
    for line in stderr.splitlines():
        if not line.startswith(b'PLS_PC_METRICS='):continue
        try:
            event=json.loads(line[len(b'PLS_PC_METRICS='):])
            if event.get('event')=='diagnostic_frame_sample':
                frame=event.get('completed_presented_frame');stages=event.get('stage_nanoseconds')
                if event.get('game_screen','UNKNOWN')!='UNKNOWN'or type(frame)is not int or not 1<=frame<=1200 or not isinstance(stages,list)or len(stages)!=12 or any(type(v)is not int or v<0 for v in stages):raise ValueError('Invalid diagnostic frame sample')
                result['records']+=1;result['max_completed_presented_frames']=max(result['max_completed_presented_frames'],frame)
                continue
            frames=event.get('completed_presented_frames')
            if event.get('game_screen')!='UNKNOWN' or type(frames)is not int or frames<0:
                raise ValueError('Invalid measurement context')
            kind=event.get('event')
            if kind=='memory':
                phase=event.get('phase')
                if phase not in phases or not isinstance(event.get('process'),dict):raise ValueError('Invalid memory record')
                if phase not in result['memory_phases']:result['memory_phases'].append(phase)
            elif kind=='frame_summary':
                if not isinstance(event.get('slices'),dict):raise ValueError('Invalid frame summary')
                result['frame_summary_records']+=1
            else:raise ValueError('Unknown metric event')
            result['records']+=1
            result['max_completed_presented_frames']=max(result['max_completed_presented_frames'],frames)
        except (ValueError,TypeError,AttributeError):result['invalid_records']+=1
    return result


def validate_diagnostic_manifest(folder,root=ROOT):
    root=root.resolve();folder=Path(folder).resolve(strict=True)
    if not folder.is_relative_to((root/'build').resolve()):raise ValueError('Diagnostic output must remain under ignored build/')
    manifest_path=folder/'manifest.json';manifest=json.loads(manifest_path.read_text(encoding='utf8'))
    if manifest.get('diagnostic_only')is not True:raise ValueError('Diagnostic-only manifest required')
    if manifest.get('canonical_report_sha256')!=digest(root/'config/phase2-game-translation.json'):raise ValueError('Diagnostic canonical report is stale')
    canonical=unpack_source_paths(json.loads((root/'config/phase2-game-translation.json').read_text(encoding='utf8')))
    if canonical.get('assembly')!='Assembly-CSharp':raise ValueError('Canonical Game report required')
    if canonical.get('compiled')is not True:
        explicit_counter_policy=manifest.get('diagnostic_game_execution_promotes_zero_methods')is False and manifest.get('execution_coverage_policy')=='Only hash-bound successful invocations of normal emitted bodies can promote runs; no verified promotion'
        if manifest.get('precompile_diagnostic')is not True or manifest.get('canonical_compiled')is not False or manifest.get('normal_compiled_methods')!=0 or not(manifest.get('diagnostic_game_execution_promotes_zero_methods')is True or explicit_counter_policy):
            raise ValueError('Uncompiled Game requires an explicit private precompile diagnostic with zero normal coverage')
    producer=canonical.get('producer')
    if not isinstance(producer,dict)or manifest.get('producer')!=producer:raise ValueError('Diagnostic producer differs from canonical generation')
    for key,name in [('translator_source_sha256','translator/Translator.cs'),('emission_source_sha256','translator/EmissionUnits.cs'),('driver_sha256','translator/translate.py')]:
        if producer.get(key)!=digest(root/name):raise ValueError('Diagnostic producer source is stale')
    if 'report_paths_sha256'in producer and producer['report_paths_sha256']!=digest(root/'translator/report_paths.py'):raise ValueError('Diagnostic path producer source is stale')
    for row in canonical.get('platform_adapter_sources',[]):
        path=(root/row['path']).resolve(strict=True)
        if not path.is_relative_to(root)or digest(path)!=row['sha256']:raise ValueError('Diagnostic bootstrap source is stale')
    generator=manifest.get('diagnostic_generator',{})
    if generator.get('path')!='translator/diagnostic_snapshot.py'or generator.get('sha256')!=digest(root/'translator/diagnostic_snapshot.py'):
        raise ValueError('Diagnostic generator source is stale')
    if not isinstance(manifest.get('traps'),list)or not manifest['traps']:raise ValueError('Explicit diagnostic trap inventory required')
    canonical_rows=manifest.get('canonical_files',[])
    expected_rows=canonical.get('generated_files',[])
    actual_rows={row['path']:row['sha256']for row in canonical_rows}
    expected={row['path']:row['sha256']for row in expected_rows}
    if not expected or len(actual_rows)!=len(canonical_rows)or actual_rows!=expected:
        raise ValueError('Canonical diagnostic inventory is incomplete or differs from report')
    for row in canonical_rows:
        path=(root/row['path']).resolve(strict=True)
        if not path.is_relative_to((root/'src/game').resolve())or digest(path)!=row['sha256']:raise ValueError('Canonical diagnostic input differs')
    actual_canonical={p.resolve()for p in (root/'src/game').rglob('*')if p.is_file()and p.suffix.lower()in{'.cpp','.hpp','.inc'}}
    if actual_canonical!={(root/name).resolve()for name in expected}:raise ValueError('Canonical source tree differs from complete report')
    declared=set()
    for row in manifest.get('generated_files',[]):
        path=(folder/row['path']).resolve(strict=True)
        if not path.is_relative_to(folder)or path.suffix.lower()not in {'.cpp','.hpp','.inc'}or digest(path)!=row['sha256']:raise ValueError('Diagnostic generated source differs')
        if path in declared:raise ValueError('Duplicate diagnostic source')
        declared.add(path)
    actual={p.resolve()for p in folder.rglob('*')if p.is_file()and p.suffix.lower()in {'.cpp','.hpp','.inc'}}
    if not declared or actual!=declared:raise ValueError('Diagnostic source inventory is incomplete')
    candidate=manifest.get('candidate_generation')
    if candidate:
        from diagnostic_leaves import CAPTURE,CPP_NAME,HEADER,header
        if candidate.get('guard_ids')!=[CAPTURE]or candidate.get('producer_sha256')!=digest(root/'translator/diagnostic_leaves.py'):raise ValueError('Diagnostic leaf guard producer differs')
        evidence={}
        for kind in ('report','request'):
            path=(folder/candidate[kind+'_path']).resolve(strict=True)
            if not path.is_relative_to(folder)or digest(path)!=candidate[kind+'_sha256']:raise ValueError('Candidate '+kind+' differs')
            evidence[kind]=json.loads(path.read_text(encoding='utf8'))
        variant=unpack_source_paths(evidence['report'])
        if variant.get('diagnostic_only')is not True or variant.get('normal_coverage_promoted')!=0 or variant.get('compiled')is not False or variant.get('producer')!=producer:raise ValueError('Candidate cannot promote normal method coverage')
        if any(variant.get(key)!=canonical.get(key)for key in ('source_manifest','platform_adapter_sources','reference_metadata')):raise ValueError('Candidate source inputs differ')
        normal_request_path=root/'build/translator/Assembly-CSharp-input.json'
        if digest(normal_request_path)!=candidate.get('canonical_request_sha256'):raise ValueError('Canonical candidate request is stale')
        expected_request=json.loads(normal_request_path.read_text(encoding='utf8'))
        expected_request['output']=evidence['request']['output'];expected_request['external_methods'][CAPTURE]=CPP_NAME
        if expected_request!=evidence['request']:raise ValueError('Candidate changed bindings beyond Capture')
        if (folder/HEADER).read_text(encoding='utf8')!=header():raise ValueError('Candidate fatal helper differs')
        normal_ids={r['id']for r in canonical['emitted_methods']};variant_ids={r['id']for r in variant['emitted_methods']}
        if normal_ids-variant_ids or sorted(variant_ids-normal_ids)!=candidate.get('candidate_bodies')or manifest.get('candidate_bodies')!=candidate.get('candidate_bodies'):raise ValueError('Candidate body inventory differs')
    return manifest


def source_snapshot(root=ROOT,diagnostic_folder=None,diagnostic_source=None):
    """Bind included chunks/headers too; a top-level .cpp hash is insufficient."""
    paths={p for p in (root/'src').rglob('*') if p.is_file() and p.suffix.lower() in {'.cpp','.hpp','.inc'}}
    paths|={p for p in (root/'build/generated/mono-collation').glob('*.inc') if p.is_file()}
    paths|={p for p in (root/'build/generated/mono-numberformat').glob('*.inc') if p.is_file()}
    paths|={root/p for p in ['CMakeLists.txt','tools/build_pc.py','tools/pc_compiler.py','tools/run_native_process.py','tools/diagnostic_execution.py','translator/diagnostic_snapshot.py'] if (root/p).is_file()}
    for diagnostic in filter(None,(diagnostic_folder,diagnostic_source)):
        paths|={p for p in Path(diagnostic).rglob('*')if p.is_file()and(p.suffix.lower()in{'.cpp','.hpp','.inc'}or p.name in {'manifest.json','candidate_report.json','candidate_request.json'})}
    return {p.relative_to(root).as_posix():digest(p) for p in sorted(paths)}


def diagnostic_working_tree(source,manifest):
    """Stable compiler paths; the named snapshot remains the immutable evidence."""
    target=(ROOT/'build/game-diagnostic-current').resolve()
    if not target.is_relative_to((ROOT/'build').resolve()):raise ValueError('Diagnostic working tree escapes build/')
    target.mkdir(parents=True,exist_ok=True)
    names={row['path']for row in manifest['generated_files']}|{'manifest.json'}
    if manifest.get('candidate_generation'):names|={'candidate_report.json','candidate_request.json'}
    if any(Path(name).name!=name for name in names):raise ValueError('Diagnostic working tree requires flat generated filenames')
    for name in names:
        data=(source/name).read_bytes();path=target/name
        if not path.exists()or path.read_bytes()!=data:path.write_bytes(data)
    for path in target.iterdir():
        if path.is_file()and(path.suffix.lower()in{'.cpp','.hpp','.inc'}or path.name in {'manifest.json','candidate_report.json','candidate_request.json'})and path.name not in names:path.unlink()
    return target


def image_readback(folder,apk,env):
    if not apk or not apk.is_file() or digest(apk)!=APK_SHA:
        raise ValueError('Image readback requires the authenticated local APK via --apk')
    assets=ROOT/'assets';manifest_path=assets/'converted/manifest.json'
    manifest=json.loads(manifest_path.read_text(encoding='utf-8'))
    if manifest['apk_sha256']!=APK_SHA:raise ValueError('Converted assets have another source APK')
    expected=[]
    for image in manifest['images']:
        target=(assets/image['path']).resolve(strict=True)
        if not target.is_relative_to(assets.resolve()) or digest(target)!=image['sha256']:
            raise ValueError('Converted image path or digest differs')
        if target.stat().st_size!=image['width']*image['height']*4:
            raise ValueError('Converted image extent differs')
        expected.append(f"{image['width']}\t{image['height']}\t{image['path']}\n")
    index=assets/'converted/images.tsv'
    if index.read_text(encoding='utf-8')!=''.join(expected):raise ValueError('Image index differs from manifest')
    exe=folder/'asset_roundtrip_test.exe'
    process=subprocess.run([str(exe),str(assets)],cwd=ROOT,env=env,capture_output=True,check=True)
    (folder/'image-readback.log').write_bytes(process.stdout+process.stderr)
    report=json.loads(process.stdout)
    if report['rgba8_files']!=len(expected) or report['rgba8_bytes']!=sum(i['bytes'] for i in manifest['images']):
        raise ValueError('Native image test coverage differs from manifest')
    report.update(operation='native-SDL2-private-RGBA8-readback',assets_published=False,
        apk_sha256=APK_SHA,manifest_sha256=digest(manifest_path),index_sha256=digest(index),
        executable_sha256=digest(exe),stdout_sha256=hashlib.sha256(process.stdout).hexdigest(),
        sources=[dict(path=p,sha256=digest(ROOT/p)) for p in
            ('tools/build_pc.py','tests/kairo/asset_roundtrip.cpp','src/kairo/platform/sdl/backend.cpp',
             'src/kairo/platform/sdl/backend.hpp','src/kairo/api/platform.hpp',
             'src/kairo/platform/sdl/debug_input.cpp','src/kairo/platform/sdl/debug_input.hpp',
             'src/kairo/api/debug_input.hpp','src/kairo/api/vector3.hpp',
             'src/kairo/common/semantic_runtime.cpp','src/kairo/common/semantic_runtime.hpp')])
    (ROOT/'config/phase2-image-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(report))


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--fixtures-only',action='store_true')
    parser.add_argument('--asset-readback',action='store_true',help='Check all converted local images; requires --apk')
    parser.add_argument('--apk',type=Path)
    parser.add_argument('--run',action='store_true',help='Run only a successfully linked generated game, for up to 20 seconds')
    parser.add_argument('--run-seconds',type=int,default=20,help='Bounded local run duration, 1..600 seconds (default20)')
    parser.add_argument('--metrics',action='store_true',help='Record opt-in native memory/frame measurements in the private run log; requires --run')
    parser.add_argument('--diagnostic-generated',type=Path,help='Private manifest-verified sources with fatal gap traps; separate build and isolated preferences')
    parser.add_argument('--configuration',choices=['Debug','Release'],default='Debug')
    parser.add_argument('--diagnostic-select-frame',type=int,action='append',help='Private deterministic Canvas KEY_SELECT after this completed frame (1..12000); repeat for a sequence')
    parser.add_argument('--diagnostic-key-frame',action='append',default=[],help='Private FRAME:KEY; KEY is SELECT/UP/DOWN/LEFT/RIGHT/SOFT1/SOFT2')
    parser.add_argument('--diagnostic-dismiss-popups-until-frame',type=int,help='Private tutorial replay: SELECT for unlabeled dialogs, SOFT2 for SubForm windows with a right soft label; starts at frame300')
    parser.add_argument('--diagnostic-save-from-attempt',type=int,help='Copy an earlier own diagnostic save into this fresh isolated attempt')
    parser.add_argument('--diagnostic-unlabeled-popups-only',action='store_true',help='During popup replay, leave windows with a right soft label untouched')
    args=parser.parse_args()
    if not 1<=args.run_seconds<=600:parser.error('--run-seconds must be1..600')
    if args.diagnostic_dismiss_popups_until_frame is not None and(not args.diagnostic_generated or not args.run or not 300<=args.diagnostic_dismiss_popups_until_frame<=12000):parser.error('Popup replay requires a private run and a final frame300..12000')
    if args.diagnostic_save_from_attempt is not None and(not args.diagnostic_generated or not args.run or args.diagnostic_save_from_attempt<1):parser.error('Private save reuse requires a diagnostic run and an earlier positive attempt number')
    if args.diagnostic_unlabeled_popups_only and args.diagnostic_dismiss_popups_until_frame is None:parser.error('Unlabeled-only mode requires popup replay')
    if args.diagnostic_generated and args.fixtures_only:parser.error('Diagnostic sources require a game build')
    if args.metrics and (not args.run or args.fixtures_only):parser.error('--metrics requires a game --run attempt')
    if args.diagnostic_select_frame is not None and(not args.diagnostic_generated or not args.run or any(not 1<=n<=12000 for n in args.diagnostic_select_frame)or args.diagnostic_select_frame!=sorted(set(args.diagnostic_select_frame))):parser.error('Scripted input requires a private diagnostic run and strictly increasing frames1..12000')
    if args.diagnostic_key_frame:
        if not args.diagnostic_generated or not args.run:parser.error('Scripted keys require a private diagnostic run')
        frames=[]
        for value in args.diagnostic_key_frame:
            match=re.fullmatch(r'([0-9]+):(SELECT|UP|DOWN|LEFT|RIGHT|SOFT1|SOFT2)',value)
            if not match or not 1<=int(match[1])<=12000:parser.error('Expected FRAME:KEY with frame1..12000 and a known Canvas key')
            frames.append(int(match[1]))
        if frames!=sorted(set(frames))or set(frames)&set(args.diagnostic_select_frame or []):parser.error('Scripted key frames must increase without duplicates or legacy SELECT collisions')
    if not args.fixtures_only:
        if not args.apk or not args.apk.is_file():parser.error('ForneÃƒÂ§a seu prÃƒÂ³prio APK local com --apk. Nenhum jogo ÃƒÂ© baixado.')
        if hashlib.sha256(args.apk.read_bytes()).hexdigest()!=APK_SHA:parser.error('APK diferente; confirme a versÃƒÂ£o no pipeline antes de compilar.')
    sdk=ROOT/'build/deps/SDL2-2.32.10/cmake'
    if not sdk.is_dir():parser.error('SDL2 development SDK missing; no dependency is installed automatically.')
    env=environment()
    if args.metrics:env['PLS_PC_METRICS']='1'
    env.pop('PLS_PC_SELECT_FRAME',None)
    if args.diagnostic_select_frame is not None:env['PLS_PC_SELECT_FRAME']=','.join(str(n)for n in args.diagnostic_select_frame)
    env.pop('PLS_PC_KEY_FRAMES',None)
    env.pop('PLS_PC_DISMISS_POPUPS_UNTIL',None)
    env.pop('PLS_PC_DISMISS_UNLABELED_ONLY',None)
    if args.diagnostic_unlabeled_popups_only:env['PLS_PC_DISMISS_UNLABELED_ONLY']='1'
    if args.diagnostic_dismiss_popups_until_frame is not None:env['PLS_PC_DISMISS_POPUPS_UNTIL']=str(args.diagnostic_dismiss_popups_until_frame)
    if args.diagnostic_key_frame:env['PLS_PC_KEY_FRAMES']=','.join(args.diagnostic_key_frame)
    diagnostic_source=args.diagnostic_generated.resolve(strict=True)if args.diagnostic_generated else None
    diagnostic_manifest=validate_diagnostic_manifest(diagnostic_source)if diagnostic_source else None
    diagnostic_folder=diagnostic_working_tree(diagnostic_source,diagnostic_manifest)if diagnostic_source else None
    build_name='pc-diagnostic'if diagnostic_folder else 'pc'
    if args.configuration=='Release':build_name+='-release'
    folder=ROOT/'build'/build_name;folder.mkdir(parents=True,exist_ok=True)
    prefix_probe=showincludes_prefix(folder/'compiler-prefix-probe',env)
    prefix_policy=dict(version=1,prefix=prefix_probe['prefix'],compiler_sha256=prefix_probe['compiler_sha256'])
    policy_file=folder/'compiler-prefix-policy.json'
    clean=not policy_file.exists()or json.loads(policy_file.read_text(encoding='utf8'))!=prefix_policy
    commands=[[CMAKE,'-S',ROOT,'-B',folder,'-G','Ninja','-DCMAKE_MAKE_PROGRAM='+str(NINJA),'-DCMAKE_BUILD_TYPE='+args.configuration,'-DSDL2_DIR='+str(sdk),'-DPLS_DIAGNOSTIC_GAME_DIR='+(str(diagnostic_folder)if diagnostic_folder else ''),'-DPLS_MSVC_SHOWINCLUDES_PREFIX='+prefix_probe['prefix']],
              [CMAKE,'--build',folder,'--parallel','2',*(['--clean-first']if clean or args.fixtures_only else []),*([]if args.fixtures_only else ['--target','pc_game'])]]
    if args.fixtures_only:commands.append([CMAKE.parent/'ctest.exe','--test-dir',folder,'--output-on-failure'])
    if not args.fixtures_only:
        attempts=ROOT/('config/phase2-diagnostic-attempts.json'if diagnostic_folder else 'config/phase2-boot-attempts.json')
        history=json.loads(attempts.read_text(encoding='utf-8')) if attempts.exists() else dict(operation='generated-game-build-and-boot-attempts',attempts=[])
        attempt=dict(number=next_attempt_number(history,folder),configuration=args.configuration,apk_sha256=APK_SHA,generated_game_sources=[dict(path=p.relative_to(ROOT).as_posix(),sha256=digest(p)) for p in sorted((ROOT/'src/game').rglob('*.cpp'))],game_boot=False,title_verified=False,menu_verified=False,metrics_requested=args.metrics,metrics_recorded=False)
        attempt_folder=folder/'attempts'/str(attempt['number'])
        attempt_folder.mkdir(parents=True,exist_ok=False)
        if args.diagnostic_save_from_attempt is not None:
            previous=next((row for row in history['attempts']if row['number']==args.diagnostic_save_from_attempt),None)
            if previous is None or previous.get('diagnostic_only')is not True or previous.get('apk_sha256')!=APK_SHA:raise ValueError('Save source must be an authenticated earlier own diagnostic attempt')
            attempt['restored_private_preferences']=restore_private_preferences(folder,args.diagnostic_save_from_attempt,attempt['number'])
        attempt['scripted_select_frame']=args.diagnostic_select_frame
        attempt['diagnostic_dismiss_popups_until_frame']=args.diagnostic_dismiss_popups_until_frame
        attempt['diagnostic_unlabeled_popups_only']=args.diagnostic_unlabeled_popups_only
        attempt['scripted_key_frame']=args.diagnostic_key_frame
        if args.metrics:env['PLS_PC_CAPTURE_DIR']=str((attempt_folder/'frames').resolve())
        if diagnostic_folder:
            attempt.update(diagnostic_only=True,diagnostic_manifest_sha256=digest(diagnostic_folder/'manifest.json'),trap_count=len(diagnostic_manifest['traps']),
                canonical_report_sha256=diagnostic_manifest['canonical_report_sha256'],game_coverage_promoted=False)
            attempt['diagnostic_snapshot']=diagnostic_source.relative_to(ROOT).as_posix()
            attempt['diagnostic_compiler_tree']=diagnostic_folder.relative_to(ROOT).as_posix()
            attempt['precompile_diagnostic']=diagnostic_manifest.get('precompile_diagnostic',False)
            env['PLS_DIAGNOSTIC_SAVE_ROOT']=str((attempt_folder/'preferences').resolve())
        attempt['logs']=[]
        inputs_before=source_snapshot(diagnostic_folder=diagnostic_folder,diagnostic_source=diagnostic_source)
        manifest=attempt_folder/'source-inputs.before.json'
        manifest.write_text(json.dumps(inputs_before,sort_keys=True,indent=2)+'\n',encoding='utf-8',newline='\n')
        attempt['source_inputs']=dict(path=manifest.relative_to(ROOT).as_posix(),sha256=digest(manifest),files=len(inputs_before))
        attempt['generated_game_sources']=[dict(path=p,sha256=h) for p,h in inputs_before.items() if p.startswith('src/game/')]
    for index,command in enumerate(commands):
        step_started=time.perf_counter_ns()
        result=subprocess.run([str(p) for p in command],cwd=ROOT,env=env,capture_output=True)
        step_elapsed_ns=time.perf_counter_ns()-step_started
        log=folder/f'step-{index}.log'
        log.write_bytes(result.stdout+result.stderr)
        if not args.fixtures_only:
            retained=attempt_folder/log.name
            retained.write_bytes(log.read_bytes())
            attempt['logs'].append(dict(path=retained.relative_to(ROOT).as_posix(),sha256=digest(retained),elapsed_ns=step_elapsed_ns))
        if result.returncode:
            if not args.fixtures_only:
                messages=(result.stdout+result.stderr).decode('utf-8',errors='replace')
                diagnostics=[line for line in messages.splitlines() if re.search(r'(error [A-Z]+\d+|fatal error|undefined reference)',line)]
                attempt.update(stage='configure-failed' if index==0 else 'compile-or-link-failed',exit_code=result.returncode,diagnostics=diagnostics[:8],log_sha256=digest(folder/f'step-{index}.log'))
                history['attempts'].append(attempt);attempts.write_text(json.dumps(history,indent=2)+'\n',encoding='utf-8',newline='\n')
            raise RuntimeError(f'Native build failed; see {folder}/step-{index}.log')
    portable_unit=next(iter(sorted((ROOT/'src/kairo/common/generated').glob('portable_generated_type_*.cpp'))),ROOT/'src/kairo/common/generated/portable_generated.cpp')
    required={'CMakeFiles/pls_semantics.dir/src/kairo/common/semantic_runtime.cpp.obj':ROOT/'src/kairo/common/semantic_runtime.hpp',
              'CMakeFiles/pls_portable_generated.dir/'+portable_unit.relative_to(ROOT).as_posix()+'.obj':ROOT/'src/kairo/common/semantic_runtime.hpp'}
    if not args.fixtures_only:
        game_folder=diagnostic_folder or ROOT/'src/game'
        game_unit=next(iter(sorted(game_folder.glob('game_generated_type_*.cpp'))),game_folder/'game_generated.cpp')
        required['CMakeFiles/pc_game.dir/'+game_unit.relative_to(ROOT).as_posix()+'.obj']=ROOT/'src/kairo/common/semantic_runtime.hpp'
    dependency_audit=audit_ninja_dependencies(folder,required,env)
    policy_file.write_text(json.dumps(prefix_policy,indent=2)+'\n',encoding='utf8',newline='\n')
    if not args.fixtures_only:
        inputs_after=source_snapshot(diagnostic_folder=diagnostic_folder,diagnostic_source=diagnostic_source)
        if inputs_before!=inputs_after:
            changed=sorted(p for p in set(inputs_before)|set(inputs_after) if inputs_before.get(p)!=inputs_after.get(p))
            attempt.update(stage='concurrent-source-change',exit_code=0,changed_inputs=changed,game_boot=False)
            history['attempts'].append(attempt);attempts.write_text(json.dumps(history,indent=2)+'\n',encoding='utf-8',newline='\n')
            raise RuntimeError('Native inputs changed during compilation; no process was launched. Retry after the producers are stable.')
        attempt.update(stage='linked',exit_code=0,dependency_audit=dependency_audit,clean_for_dependency_policy=clean)
        if args.run:
            exe=folder/'pc_game.exe'
            if diagnostic_folder:
                run=run_native_process([str(exe),str(ROOT/'assets')],cwd=ROOT,env=env,
                    stdout_path=attempt_folder/'game-run.stdout',stderr_path=attempt_folder/'game-run.stderr',timeout_seconds=args.run_seconds,diagnostic=True)
                attempt.update(run)
                attempt['stopped_at_timeout']=run['stopped_reason']=='timeout'
                exit_code=run['process_exit_code']
            else:
                process=subprocess.Popen([str(exe),str(ROOT/'assets')],cwd=ROOT,env=env,stdout=subprocess.PIPE,stderr=subprocess.PIPE)
                try:stdout,stderr=process.communicate(timeout=args.run_seconds)
                except subprocess.TimeoutExpired:process.terminate();stdout,stderr=process.communicate(timeout=10);attempt['stopped_at_timeout']=True
                (attempt_folder/'game-run.stdout').write_bytes(stdout);(attempt_folder/'game-run.stderr').write_bytes(stderr)
                exit_code=process.returncode
            for name in ['game-run.stdout','game-run.stderr']:
                log=attempt_folder/name
                attempt['logs'].append(dict(path=log.relative_to(ROOT).as_posix(),sha256=digest(log)))
            attempt.update(stage='diagnostic-gap-detected'if attempt.get('translation_gap_detected')else'process-executed',process_exit_code=exit_code,executable_sha256=digest(exe))
            if diagnostic_folder:
                from diagnostic_execution import collect
                try:collect(attempt,attempt_folder,history)
                except Exception as error:
                    attempt.update(stage='execution-receipt-failed',execution_receipt_error=type(error).__name__+': '+str(error))
                    history['attempts'].append(attempt);attempts.write_text(json.dumps(history,indent=2)+'\n',encoding='utf8',newline='\n')
                    raise
            if args.metrics:
                attempt['metrics_log_summary']=metric_log_summary((attempt_folder/'game-run.stderr').read_bytes())
                attempt['metrics_recorded']=attempt['metrics_log_summary']['records']>0
                attempt['frame_captures']=[dict(path=p.relative_to(ROOT).as_posix(),sha256=digest(p),bytes=p.stat().st_size)for p in sorted((attempt_folder/'frames').glob('frame-*.bmp'))]
        history['attempts'].append(attempt);attempts.write_text(json.dumps(history,indent=2)+'\n',encoding='utf-8',newline='\n')
        print(json.dumps(attempt));return
    result=dict(native_fixtures='PASS',game_boot=False,title=False,menu=False,match=False,dependency_audit=dependency_audit,
                compiler='existing MSVC',sdl2='2.32.10',game_assets_used=False)
    (ROOT/'config/phase2-sdl-verification.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(result))
    if args.asset_readback:image_readback(folder,args.apk,env)


if __name__=='__main__':main()
