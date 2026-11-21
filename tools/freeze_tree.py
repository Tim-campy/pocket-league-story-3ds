"""Freeze step: replace the generated trees by the readable sources (docs/notes/freeze-audit.md, section 4).

Copies every unit of a readable diagnostic tree (translator/readable.py
diagnostic) -- .cpp, .hpp and the .inc parts of split units -- into src/game and
src/kairo/common/generated, replacing the generated-file banner by the
maintained-source header (docs/maintaining-game-code.md). It never runs the
translator and never touches anything else. Run it only inside the freeze
procedure (or a rehearsal branch); it refuses a dirty tree.
"""
import argparse
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SUFFIXES = ('.cpp', '.hpp', '.inc')
TARGETS = (('game', 'src/game'), ('include/generated', 'src/kairo/common/generated'))


def header(date):
    return ('// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)\n'
            f'// by translator/Translator.cs on {date}; maintained by hand since then.\n'
            '// Rules: docs/maintaining-game-code.md')


def convert(text, date):
    """Replace the first generated banner (within the first lines) by the header."""
    lines = text.split('\n')
    for i, line in enumerate(lines[:4]):
        if line.startswith('// GENERATED'):
            lines[i] = header(date)
            return '\n'.join(lines), True
    return text, False


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--readable', type=Path, required=True, help='Readable diagnostic tree (has game/ and include/generated/)')
    p.add_argument('--date', required=True, help='Freeze date, YYYY-MM-DD')
    p.add_argument('--allow-dirty', action='store_true')
    a = p.parse_args()
    if not a.allow_dirty and subprocess.run(['git', 'status', '--porcelain', '--', 'src'], cwd=ROOT, capture_output=True, text=True).stdout.strip():
        raise SystemExit('src/ has local changes; commit or discard them first')
    counts = {}
    for source_rel, target_rel in TARGETS:
        source, target = a.readable / source_rel, ROOT / target_rel
        units = sorted(q for q in source.iterdir() if q.suffix in SUFFIXES)
        if not units:
            raise SystemExit(f'{source} has no units')
        for old in target.iterdir():
            if old.suffix in SUFFIXES:
                old.unlink()
        banners = 0
        for unit in units:
            text, changed = convert(unit.read_text(encoding='utf-8'), a.date)
            banners += changed
            (target / unit.name).write_text(text, encoding='utf-8', newline='\n')
        counts[target_rel] = dict(units=len(units), inc_parts=sum(u.suffix == '.inc' for u in units), headers=banners)
    print(counts)


if __name__ == '__main__':
    main()
