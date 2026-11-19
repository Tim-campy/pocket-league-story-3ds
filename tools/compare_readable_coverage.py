"""C6b: compare per-method coverage of a readable diagnostic run with a canonical one.

    python tools/compare_readable_coverage.py --readable N --canonical M

N: attempt in build/c6b-readable-attempts.json; M: attempt in
config/phase2-diagnostic-attempts.json. Both logs are parsed with the same
parser (tools/diagnostic_execution.py). Prints the methods whose completed
invocation count differs, and the route end frames. Never edits a ledger.
"""
import argparse, json, re, sys
from pathlib import Path
ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))
from diagnostic_execution import parse


def load(history_path, number):
    history = json.loads((ROOT / history_path).read_text(encoding='utf-8'))
    attempt = next(a for a in history['attempts'] if a['number'] == number)
    log = next(ROOT / row['path'] for row in attempt['logs'] if row['path'].endswith('game-run.stderr'))
    text = log.read_text(encoding='utf-8', errors='replace')
    methods, frames, gaps = parse(text)
    done = re.findall(r'^PLS_ROUTE_DONE=(\d+)', text, re.M)
    return attempt, {key[1]: row for key, row in methods.items()}, int(done[-1]) if done else None, gaps


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('--readable', type=int, required=True)
    parser.add_argument('--canonical', type=int, required=True)
    parser.add_argument('--output', type=Path)
    args = parser.parse_args()
    _, readable, readable_done, readable_gaps = load('build/c6b-readable-attempts.json', args.readable)
    _, canonical, canonical_done, canonical_gaps = load('config/phase2-diagnostic-attempts.json', args.canonical)
    ran = lambda rows: {i for i, r in rows.items() if r['completed'] > 0}
    only_readable = sorted(ran(readable) - ran(canonical)); only_canonical = sorted(ran(canonical) - ran(readable))
    count_diff = sorted((i, canonical[i]['calls'], readable[i]['calls']) for i in ran(readable) & ran(canonical) if readable[i]['calls'] != canonical[i]['calls'])
    result = dict(readable_attempt=args.readable, canonical_attempt=args.canonical,
                  route_done_frame=dict(readable=readable_done, canonical=canonical_done),
                  executed=dict(readable=len(ran(readable)), canonical=len(ran(canonical))),
                  only_readable=only_readable, only_canonical=only_canonical,
                  call_count_differences=len(count_diff), call_count_examples=count_diff[:20],
                  gaps=dict(readable=sorted(readable_gaps), canonical=sorted(canonical_gaps)),
                  same_coverage=not only_readable and not only_canonical)
    text = json.dumps(result, indent=2) + '\n'
    if args.output: args.output.write_text(text, encoding='utf-8')
    print(text)


if __name__ == '__main__':
    main()
