"""Publish metadata-only receipts from the private tracing-GC experiments."""
import hashlib
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def sha(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def read(relative):
    path = ROOT / relative
    return json.loads(path.read_text()), dict(path=relative, sha256=sha(path))


def gc_window(directory, scenario):
    prefix = 'build/null-pc-tracing/runs/' + directory
    result, evidence = read(prefix + '/result.json')
    if result['exit_code'] != 0 or result['scenario'] != scenario or result['allocation_probe']:
        raise ValueError('Unexpected GC window configuration')
    for name in ['stdout', 'stderr']:
        if sha(ROOT / prefix / (name + '.log')) != result[name + '_sha256']:
            raise ValueError('Window log changed')
    frames = [json.loads(line.split('=', 1)[1]) for line in
              (ROOT / prefix / 'stdout.log').read_text().splitlines()
              if line.startswith('PLS_NULL_FRAME=')]
    first, last = (661, 960) if scenario == 'menu' else (1201, 1500)
    if [f['frame'] for f in frames] != list(range(first, last + 1)):
        raise ValueError('Incomplete frame window')
    stats = {row['stage']: row for row in [json.loads(line.split('=', 1)[1]) for line in
             (ROOT / prefix / 'stderr.log').read_text().splitlines() if line.startswith('PLS_NULL_GC=')]}
    before, after = stats['before_window'], stats['after_window']
    return dict(scenario=scenario, evidence=evidence, image_sha256=result['executable_sha256'],
                frames=len(frames), first_frame=first, last_frame=last,
                form_ids=sorted({f['form_id'] for f in frames}),
                counters_delta={key:after[key]-before[key] for key in [
                    'allocations','allocated_bytes','external_growth_bytes','collections',
                    'pause_ns','accounting_ns']},
                before=before, after=after,
                longest_collection_ns=max(f['longest_collection_ns'] for f in frames),
                all_cpp_allocations='UNKNOWN',
                timing_scope='Functional run concurrent with compilation; not controlled performance')


def main():
    proof, proof_ref = read('build/ctr-gc-fixture/build-proof.json')
    for name, expected in proof['inputs'].items():
        if sha(ROOT / name) != expected:
            raise ValueError('ARM fixture source changed: ' + name)
    if sha(ROOT / 'build/ctr-gc-fixture/tracing_gc_fixture.3dsx') != proof['executable_sha256']:
        raise ValueError('ARM fixture image changed')
    arm = []
    for model, directory in [('new', 'run-new-16'), ('old', 'run-old-4')]:
        row, ref = read(f'build/ctr-gc-fixture/{directory}/result.json')
        log = ROOT / f'build/ctr-gc-fixture/{directory}/launcher/user/log/azahar_log.txt'
        settings = log.read_text(errors='replace')
        if not all(token in settings for token in [
            'System_IsNew3ds: ' + ('true' if model == 'new' else 'false'),
            'Core_CPUClockPercentage: 100', 'Renderer_FrameLimit: 100']):
            raise ValueError('Emulator settings not proved')
        if row['status'] != 'PASS' or row['image_sha256'] != proof['executable_sha256']:
            raise ValueError('ARM fixture did not pass with this image')
        result = next(json.loads(line) for line in row['guest_log'].splitlines() if line.startswith('{'))
        if result != dict(assertions=60, status='PASS'):
            raise ValueError('Unexpected ARM fixture assertion result')
        arm.append(dict(model=model, assertions=result['assertions'], status=result['status'],
                        evidence=ref, emulator_log_sha256=sha(log)))
    attribution, attr_ref = read('build/tracing-measurement-round/pc-profile-accounting-v2/menu-attribution.json')
    cpu, cpu_ref = read('build/tracing-measurement-round/pc-profile-accounting-v2/menu-cpu.json')
    if attribution['frames'] != 300 or sum(row['samples'] for row in attribution['categories']) != attribution['samples']:
        raise ValueError('Incomplete sampled CPU partition')
    report = dict(operation='tracing-measurement-metadata', producer_sha256=sha(Path(__file__)),
                  arm_fixture=dict(build=proof_ref, inputs=proof['inputs'],
                                   image_sha256=proof['executable_sha256'], runs=arm,
                                   game_boot=False, hardware_speed='UNKNOWN'),
                  intermediate_menu=dict(evidence=[cpu_ref, attr_ref],
                                         image_sha256=attribution['image_sha256'],
                                         samples=attribution['samples'],
                                         categories=attribution['categories'],
                                         cpu=cpu,
                                         scope='Intermediate accounting implementation, not current runtime'),
                  current_runtime_cpu='UNKNOWN', android_execution='UNKNOWN', hardware_execution='UNKNOWN')
    report['current_gc_windows'] = [gc_window('1794374332020803500', 'menu'),
                                    gc_window('1794374201292959900', 'match')]
    report['tls_lifecycle'] = []
    for model in ['new', 'old']:
        row, ref = read(f'build/ctr-gc-fixture/tls-{model}-1/result.json')
        if row['status'] != 'PASS' or row['image_sha256'] != proof['tls_executable_sha256']:
            raise ValueError('TLS fixture did not pass with this image')
        report['tls_lifecycle'].append(dict(model=model, evidence=ref, result=row))
    report['allocation_windows'] = []
    for scenario, run in [('menu', '1794377205826480500'), ('match', '1794377003725390100')]:
        result, ref = read(f'build/null-pc-allocations-tracing/runs/{run}/result.json')
        analysis, analysis_ref = read(f'build/tracing-measurement-round/{scenario}-allocations.json')
        if result['exit_code'] != 0 or not result['allocation_probe'] or analysis['frames'] != 300:
            raise ValueError('Invalid allocation window')
        report['allocation_windows'].append(dict(scenario=scenario, evidence=[ref, analysis_ref],
            image_sha256=result['executable_sha256'], frames=analysis['frames'],
            allocations=analysis['allocations'], bytes=analysis['bytes']))
    report['pc_sections'] = []
    for label in ['current', 'legacy']:
        sections, evidence = read(f'build/tracing-measurement-round/{label}-pc-sections.json')
        report['pc_sections'].append(dict(label=label, evidence=evidence, **sections))
    target = ROOT / 'config/phase2-tracing-measurements.json'
    target.write_text(json.dumps(report, indent=2)+'\n', encoding='utf8')
    print(json.dumps(dict(output=str(target.relative_to(ROOT)), arm_assertions=[60, 60],
                          intermediate_samples=attribution['samples'], current_runtime_cpu='UNKNOWN')))


if __name__ == '__main__':
    main()
