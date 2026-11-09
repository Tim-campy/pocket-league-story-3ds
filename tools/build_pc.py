"""Build native fixtures or the game; a game build requires the user's APK."""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import re
from pc_compiler import CMAKE,NINJA,environment
from run_native_process import run_native_process

ROOT=Path(__file__).resolve().parents[1]
APK_SHA='d557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8'


def digest(path):return hashlib.sha256(path.read_bytes()).hexdigest()


def next_attempt_number(history,folder):
    used=[row['number']for row in history.get('attempts',[])]
    directory=Path(folder)/'attempts'
    if directory.exists():used.extend(int(p.name)for p in directory.iterdir()if p.name.isdecimal())
    return max(used,default=0)+1


def metric_log_summary(stderr):
    """Record instrumentation evidence, never infer that a game screen worked."""
    result=dict(protocol='PLS_PC_METRICS=JSONL',records=0,invalid_records=0,
        memory_phases=[],frame_summary_records=0,max_completed_presented_frames=0,
        game_screen='UNKNOWN')
    phases={'before_main','first_presented_frame','final_before_teardown','failure_after_setup_unwind'}
    for line in stderr.splitlines():
        if not line.startswith(b'PLS_PC_METRICS='):continue
        try:
            event=json.loads(line[len(b'PLS_PC_METRICS='):])
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
    canonical=json.loads((root/'config/phase2-game-translation.json').read_text(encoding='utf8'))
    if canonical.get('assembly')!='Assembly-CSharp'or canonical.get('compiled')is not True:raise ValueError('Compiled canonical Game report required')
    producer=canonical.get('producer')
    if not isinstance(producer,dict)or manifest.get('producer')!=producer:raise ValueError('Diagnostic producer differs from canonical generation')
    for key,name in [('translator_source_sha256','translator/Translator.cs'),('driver_sha256','translator/translate.py')]:
        if producer.get(key)!=digest(root/name):raise ValueError('Diagnostic producer source is stale')
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
    return manifest


def source_snapshot(root=ROOT,diagnostic_folder=None):
    """Bind included chunks/headers too; a top-level .cpp hash is insufficient."""
    paths={p for p in (root/'src').rglob('*') if p.is_file() and p.suffix.lower() in {'.cpp','.hpp','.inc'}}
    paths|={p for p in (root/'build/generated/mono-collation').glob('*.inc') if p.is_file()}
    paths|={root/p for p in ['CMakeLists.txt','tools/build_pc.py','tools/pc_compiler.py','tools/run_native_process.py','translator/diagnostic_snapshot.py'] if (root/p).is_file()}
    if diagnostic_folder:
        paths|={p for p in Path(diagnostic_folder).rglob('*')if p.is_file()and(p.suffix.lower()in{'.cpp','.hpp','.inc'}or p.name=='manifest.json')}
    return {p.relative_to(root).as_posix():digest(p) for p in sorted(paths)}


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
    parser.add_argument('--metrics',action='store_true',help='Record opt-in native memory/frame measurements in the private run log; requires --run')
    parser.add_argument('--diagnostic-generated',type=Path,help='Private manifest-verified sources with fatal gap traps; separate build and isolated preferences')
    parser.add_argument('--configuration',choices=['Debug','Release'],default='Debug')
    args=parser.parse_args()
    if args.diagnostic_generated and args.fixtures_only:parser.error('Diagnostic sources require a game build')
    if args.metrics and (not args.run or args.fixtures_only):parser.error('--metrics requires a game --run attempt')
    if not args.fixtures_only:
        if not args.apk or not args.apk.is_file():parser.error('Forneça seu próprio APK local com --apk. Nenhum jogo é baixado.')
        if hashlib.sha256(args.apk.read_bytes()).hexdigest()!=APK_SHA:parser.error('APK diferente; confirme a versão no pipeline antes de compilar.')
    sdk=ROOT/'build/deps/SDL2-2.32.10/cmake'
    if not sdk.is_dir():parser.error('SDL2 development SDK missing; no dependency is installed automatically.')
    env=environment()
    if args.metrics:env['PLS_PC_METRICS']='1'
    diagnostic_folder=args.diagnostic_generated.resolve(strict=True)if args.diagnostic_generated else None
    diagnostic_manifest=validate_diagnostic_manifest(diagnostic_folder)if diagnostic_folder else None
    build_name='pc-diagnostic'if diagnostic_folder else 'pc'
    if args.configuration=='Release':build_name+='-release'
    folder=ROOT/'build'/build_name;folder.mkdir(parents=True,exist_ok=True)
    commands=[[CMAKE,'-S',ROOT,'-B',folder,'-G','Ninja','-DCMAKE_MAKE_PROGRAM='+str(NINJA),'-DCMAKE_BUILD_TYPE='+args.configuration,'-DSDL2_DIR='+str(sdk),'-DPLS_DIAGNOSTIC_GAME_DIR='+(str(diagnostic_folder)if diagnostic_folder else '')],
              [CMAKE,'--build',folder,*(['--clean-first'] if args.fixtures_only else ['--target','pc_game'])]]
    if args.fixtures_only:commands.append([CMAKE.parent/'ctest.exe','--test-dir',folder,'--output-on-failure'])
    if not args.fixtures_only:
        attempts=ROOT/('config/phase2-diagnostic-attempts.json'if diagnostic_folder else 'config/phase2-boot-attempts.json')
        history=json.loads(attempts.read_text(encoding='utf-8')) if attempts.exists() else dict(operation='generated-game-build-and-boot-attempts',attempts=[])
        attempt=dict(number=next_attempt_number(history,folder),configuration=args.configuration,apk_sha256=APK_SHA,generated_game_sources=[dict(path=p.relative_to(ROOT).as_posix(),sha256=digest(p)) for p in sorted((ROOT/'src/game').rglob('*.cpp'))],game_boot=False,title_verified=False,menu_verified=False,metrics_requested=args.metrics,metrics_recorded=False)
        attempt_folder=folder/'attempts'/str(attempt['number'])
        attempt_folder.mkdir(parents=True,exist_ok=False)
        if diagnostic_folder:
            attempt.update(diagnostic_only=True,diagnostic_manifest_sha256=digest(diagnostic_folder/'manifest.json'),trap_count=len(diagnostic_manifest['traps']),
                canonical_report_sha256=diagnostic_manifest['canonical_report_sha256'],game_coverage_promoted=False)
            env['PLS_DIAGNOSTIC_SAVE_ROOT']=str((attempt_folder/'preferences').resolve())
        attempt['logs']=[]
        inputs_before=source_snapshot(diagnostic_folder=diagnostic_folder)
        manifest=attempt_folder/'source-inputs.before.json'
        manifest.write_text(json.dumps(inputs_before,sort_keys=True,indent=2)+'\n',encoding='utf-8',newline='\n')
        attempt['source_inputs']=dict(path=manifest.relative_to(ROOT).as_posix(),sha256=digest(manifest),files=len(inputs_before))
        attempt['generated_game_sources']=[dict(path=p,sha256=h) for p,h in inputs_before.items() if p.startswith('src/game/')]
    for index,command in enumerate(commands):
        result=subprocess.run([str(p) for p in command],cwd=ROOT,env=env,capture_output=True)
        log=folder/f'step-{index}.log'
        log.write_bytes(result.stdout+result.stderr)
        if not args.fixtures_only:
            retained=attempt_folder/log.name
            retained.write_bytes(log.read_bytes())
            attempt['logs'].append(dict(path=retained.relative_to(ROOT).as_posix(),sha256=digest(retained)))
        if result.returncode:
            if not args.fixtures_only:
                messages=(result.stdout+result.stderr).decode('utf-8',errors='replace')
                diagnostics=[line for line in messages.splitlines() if re.search(r'(error [A-Z]+\d+|fatal error|undefined reference)',line)]
                attempt.update(stage='configure-failed' if index==0 else 'compile-or-link-failed',exit_code=result.returncode,diagnostics=diagnostics[:8],log_sha256=digest(folder/f'step-{index}.log'))
                history['attempts'].append(attempt);attempts.write_text(json.dumps(history,indent=2)+'\n',encoding='utf-8',newline='\n')
            raise RuntimeError(f'Native build failed; see {folder}/step-{index}.log')
    if not args.fixtures_only:
        inputs_after=source_snapshot(diagnostic_folder=diagnostic_folder)
        if inputs_before!=inputs_after:
            changed=sorted(p for p in set(inputs_before)|set(inputs_after) if inputs_before.get(p)!=inputs_after.get(p))
            attempt.update(stage='concurrent-source-change',exit_code=0,changed_inputs=changed,game_boot=False)
            history['attempts'].append(attempt);attempts.write_text(json.dumps(history,indent=2)+'\n',encoding='utf-8',newline='\n')
            raise RuntimeError('Native inputs changed during compilation; no process was launched. Retry after the producers are stable.')
        attempt.update(stage='linked',exit_code=0)
        if args.run:
            exe=folder/'pc_game.exe'
            if diagnostic_folder:
                run=run_native_process([str(exe),str(ROOT/'assets')],cwd=ROOT,env=env,
                    stdout_path=attempt_folder/'game-run.stdout',stderr_path=attempt_folder/'game-run.stderr',timeout_seconds=20,diagnostic=True)
                attempt.update(run)
                attempt['stopped_at_timeout']=run['stopped_reason']=='timeout'
                exit_code=run['process_exit_code']
            else:
                process=subprocess.Popen([str(exe),str(ROOT/'assets')],cwd=ROOT,env=env,stdout=subprocess.PIPE,stderr=subprocess.PIPE)
                try:stdout,stderr=process.communicate(timeout=20)
                except subprocess.TimeoutExpired:process.terminate();stdout,stderr=process.communicate(timeout=10);attempt['stopped_at_timeout']=True
                (attempt_folder/'game-run.stdout').write_bytes(stdout);(attempt_folder/'game-run.stderr').write_bytes(stderr)
                exit_code=process.returncode
            for name in ['game-run.stdout','game-run.stderr']:
                log=attempt_folder/name
                attempt['logs'].append(dict(path=log.relative_to(ROOT).as_posix(),sha256=digest(log)))
            attempt.update(stage='diagnostic-gap-detected'if attempt.get('translation_gap_detected')else'process-executed',process_exit_code=exit_code,executable_sha256=digest(exe))
            if args.metrics:
                attempt['metrics_log_summary']=metric_log_summary((attempt_folder/'game-run.stderr').read_bytes())
                attempt['metrics_recorded']=attempt['metrics_log_summary']['records']>0
        history['attempts'].append(attempt);attempts.write_text(json.dumps(history,indent=2)+'\n',encoding='utf-8',newline='\n')
        print(json.dumps(attempt));return
    result=dict(native_fixtures='PASS',game_boot=False,title=False,menu=False,match=False,
                compiler='existing MSVC',sdl2='2.32.10',game_assets_used=False)
    (ROOT/'config/phase2-sdl-verification.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(result))
    if args.asset_readback:image_readback(folder,args.apk,env)


if __name__=='__main__':main()
