"""Summarize a benchmark result.txt (Azahar run or the file returned from hardware).

Usage: python tools/benchmark_report.py PATH/TO/result.txt
Model codes (libctru 2.7.1): 0 3DS, 1 3DS XL, 2 New 3DS, 3 2DS, 4 New 3DS XL, 5 New 2DS XL.
"""
import json
import sys
from pathlib import Path

MODELS = {0: '3DS', 1: '3DS XL', 2: 'New 3DS', 3: '2DS', 4: 'New 3DS XL', 5: 'New 2DS XL'}


def fields(line):
    out = {}
    for token in line.split()[1:]:
        if '=' in token:
            key, value = token.split('=', 1)
            try:
                out[key] = int(value)
            except ValueError:
                try:
                    out[key] = float(value)
                except ValueError:
                    out[key] = value
    return out


def main():
    path = Path(sys.argv[1])
    lines = path.read_text(encoding='utf-8', errors='replace').splitlines()
    report = dict(source=str(path), windows=[], load_stages={})
    for line in lines:
        tag = line.split(' ', 1)[0]
        if tag == 'PLS_BENCH_MODEL':
            report['model'] = fields(line)
            report['model']['name'] = MODELS.get(report['model'].get('model'), 'UNKNOWN')
        elif tag == 'PLS_BENCH_LOAD':
            report['load'] = fields(line)
            report['load']['seconds_to_title'] = report['load'].get('boot_ns', 0) / 1e9
        elif tag == 'PLS_BENCH_LOAD_STAGE':
            row = fields(line)
            if 'stage' in row:
                count = row.get('count') or 1
                row['mean_ms'] = row['ns'] / count / 1e6
                row['maximum_ms'] = row['maximum_ns'] / 1e6
                if row.get('bytes') and row.get('ns'):
                    row['mb_per_s'] = row['bytes'] / 1048576 / (row['ns'] / 1e9)
                report['load_stages'][row['stage']] = row
        elif tag == 'PLS_BENCH_CLOCK':
            report['clock'] = line.split(' ', 1)[1]
        elif tag == 'PLS_BENCH_WINDOW':
            row = fields(line)
            row['within_50ms_budget'] = row.get('max_ms', 1e9) <= 50.0
            report['windows'].append(row)
        elif tag == 'PLS_BENCH_MEMORY':
            report['memory'] = fields(line)
        elif tag == 'PLS_BENCH_STATUS':
            report['status'] = line.split(' ', 1)[1]
    print(json.dumps(report, indent=2))


if __name__ == '__main__':
    main()
