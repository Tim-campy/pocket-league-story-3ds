"""Print per-scene statistics and worst frames from automatic CTR video profiles.

Usage: python tools/report_ctr_video.py DIRECTORY [--json]
Percentiles use the exact nearest-rank definition; no histograms or interpolation.
"""
import argparse
import csv
import json
import math
from collections import defaultdict
from pathlib import Path
from statistics import fmean

TIMES = ('logic_ns', 'draw_cpu_ns', 'gpu_wait_ns', 'frame_ns')
NAMES = {1: 'titulo', 9: 'gestao', 4: 'menu/janela', 2: 'partida'}
TRIGGERS = {0: 'explicit_call', 1: 'volume', 2: 'transition', 3: 'loading'}


def read_csv(path):
    with path.open(encoding='utf-8', newline='') as stream:
        for index, source in enumerate(csv.DictReader(stream), 2):
            if None in source or any(value is None for value in source.values()):
                raise ValueError(f'{path}:{index}: incomplete CSV row')
            yield {key: value if key == 'source' else int(value) for key, value in source.items()}


def distribution(values):
    values = sorted(values)
    if not values:
        return None
    result = {'mean_ms': fmean(values) / 1e6, 'max_ms': values[-1] / 1e6}
    for percentile in (50, 95, 99):
        result[f'p{percentile}_ms'] = values[math.ceil(len(values) * percentile / 100) - 1] / 1e6
    return result


def scene_key(row):
    phase = 'boot' if row.get('boot') else 'interaction' if row.get('interaction') else 'transition' if row.get('transition') else 'stable'
    return (row['form_id'], row['subform'], row.get('state', -1), row.get('match_state', -1),
            row['scale'], row.get('moving', 0), phase)


def report(directory):
    sessions = []
    for path in sorted(directory.glob('video-*-frames.csv')):
        prefix = path.name.removesuffix('-frames.csv')
        rows = list(read_csv(path))
        metadata = {}
        meta_path = directory / f'{prefix}-meta.txt'
        if meta_path.exists():
            for line in meta_path.read_text().splitlines():
                key, value = line.split('=', 1)
                metadata[key] = int(value)
        events = list(read_csv(directory / f'{prefix}-gc.csv'))
        by_frame = defaultdict(list)
        for event in events:
            event['trigger_name'] = TRIGGERS.get(event['trigger'], 'UNKNOWN')
            by_frame[event['frame']].append(event)
        groups = defaultdict(list)
        seen = set()
        for row in rows:
            if row['frame'] in seen:
                raise ValueError(f'{path}: repeated frame {row["frame"]}')
            seen.add(row['frame'])
            groups[scene_key(row)].append(row)
        scenes = []
        for key, frames in sorted(groups.items()):
            form, subform, state, match_state, scale, moving, phase = key
            worst = []
            for row in sorted(frames, key=lambda item: item['frame_ns'], reverse=True)[:20]:
                worst.append({**row, 'gc_events': by_frame[row['frame']]})
            scenes.append({'form_id': form, 'name': NAMES.get(form, 'outro'), 'subform': subform,
                           'state': state, 'match_state': match_state, 'scale': scale,
                           'moving': moving, 'phase': phase, 'frames': len(frames),
                           'over_50ms': sum(row['frame_ns'] > 50_000_000 for row in frames),
                           'over_150ms': sum(row['frame_ns'] > 150_000_000 for row in frames),
                           'times': {name: distribution([row[name] for row in frames]) for name in TIMES},
                           'copies': {'mean': fmean(row['copies'] for row in frames),
                                      'time': distribution([row['copy_ns'] for row in frames])},
                           'profile': distribution([row['profile_ns'] for row in frames]),
                           'accounting': distribution([row.get('accounting_ns', 0) for row in frames]),
                           'min_linear_free': min(row['min_linear_free'] for row in frames),
                           'min_vram_free': min(row['min_vram_free'] for row in frames),
                           'worst': worst})
        warnings = []
        if not metadata:
            warnings.append('Metadata missing; session may have been interrupted.')
        elif metadata.get('written') != len(rows):
            warnings.append('CSV and last checkpoint metadata disagree.')
        if metadata.get('gc_events', len(events)) != len(events):
            warnings.append('GC CSV and last checkpoint metadata disagree.')
        if any(metadata.get(key, 0) for key in ('frame_dropped', 'gc_dropped', 'asset_dropped')):
            warnings.append('Profile has explicitly counted discarded records.')
        sessions.append({'session': prefix, 'metadata': metadata, 'warnings': warnings,
                         'scenes': scenes, 'gc_events': events})
    if not sessions:
        raise ValueError('No video-*-frames.csv files; legacy SELECT profiles are not automatic sessions.')
    return {'percentile': 'exact nearest-rank', 'sessions': sessions}


def print_report(data):
    for session in data['sessions']:
        print(f'\n{session["session"]}: {session["metadata"]}')
        for warning in session['warnings']:
            print('WARNING:', warning)
        for scene in session['scenes']:
            print(f'\n{scene["name"]} form={scene["form_id"]} subform={scene["subform"]} '
                  f'state={scene["state"]} match_state={scene["match_state"]} zoom={scene["scale"]} '
                  f'moving={scene["moving"]} {scene["phase"]}: '
                  f'{scene["frames"]} frames, >50ms={scene["over_50ms"]}, >150ms={scene["over_150ms"]}')
            print('metric               mean_ms      p50_ms      p95_ms      p99_ms      max_ms')
            for metric, values in scene['times'].items():
                print(f'{metric:20}', *(f'{values[key]:11.4f}' for key in ('mean_ms','p50_ms','p95_ms','p99_ms','max_ms')))
            print('copies:', scene['copies'], 'profile:', scene['profile'], 'heap accounting:', scene['accounting'])
            print('minimum free bytes: linear=', scene['min_linear_free'], 'VRAM=', scene['min_vram_free'])
            print('worst frames (total ms; origin -> destination; GC; assets; uploads; targets; copies):')
            for row in scene['worst']:
                causes = '; '.join(f'{e["trigger_name"]}:{e["source"]} {e["pause_ns"]/1e6:.3f}ms '
                                   f'heap={e["bytes_before"]}->{e["bytes_after"]} '
                                   f'objects={e["objects_before"]}->{e["objects_after"]}' for e in row['gc_events'])
                print(f'  {row["frame"]}: {row["frame_ns"]/1e6:.4f}; '
                      f'{row["from_form"]}/{row["from_subform"]}/{row["from_state"]} -> '
                      f'{row["form_id"]}/{row["subform"]}/{row["state"]}; GC=[{causes}]; '
                      f'accounting={row.get("accounting_ns",0)/1e6:.3f}ms; assets={row["asset_reads"]}/{row["asset_ns"]/1e6:.3f}ms; '
                      f'uploads={row["uploads"]}/{row["upload_ns"]/1e6:.3f}ms; '
                      f'targets={row["target_creations"]}; copies={row["copies"]}/{row["copy_ns"]/1e6:.3f}ms')
        print('\nColetas (frame 0: inicializacao ou intervalo entre quadros):')
        print('frame trigger          pause_ms bytes_before bytes_after objects_before objects_after source')
        for event in session['gc_events']:
            print(f'{event["frame"]:5} {event["trigger_name"]:16} {event["pause_ns"]/1e6:8.3f} '
                  f'{event["bytes_before"]:12} {event["bytes_after"]:11} '
                  f'{event["objects_before"]:14} {event["objects_after"]:13} {event["source"]}')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('directory', type=Path)
    parser.add_argument('--json', action='store_true')
    args = parser.parse_args()
    data = report(args.directory)
    if args.json:
        print(json.dumps(data, indent=2, ensure_ascii=False))
    else:
        print_report(data)


if __name__ == '__main__':
    main()
