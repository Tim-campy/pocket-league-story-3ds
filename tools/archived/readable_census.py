"""Census of the ordering constructs left in readable C++ (items A.1f and A.6).

Counts, per file and in total, the constructs the readable emitter still writes
to keep the C# evaluation order:

  lines        physical lines
  blocks       immediately invoked lambdas `([&]() ... }())`, all reasons
  call_blocks  blocks that hold argument temporaries (`cs_arg`)
  binary       blocks that order the two operands of an operator (`cs_left`)
  target       assignments ordered through `cs_target` (target before value)
  value        compound/increment blocks through `cs_value`
  cs_arg, cs_receiver   temporaries of call blocks
  api_call     diagnostic wrappers (only in diagnostic trees; zero in a sample)

Text counting, independent of the translator.

    python tools/readable_census.py FOLDER [FILE ...] [--json OUT]
"""
import argparse, json, re, sys
from pathlib import Path

BLOCK = re.compile(r'\(\[&\]\(\)')


def blocks(text):
    """Yield the source of each `([&]() ... }())` block (outermost and nested)."""
    for m in BLOCK.finditer(text):
        start = m.start(); depth = 0; i = start
        while i < len(text):
            c = text[i]
            if c == '"':
                i += 1
                while i < len(text) and text[i] != '"':
                    i += 2 if text[i] == '\\' else 1
            elif c == '(':
                depth += 1
            elif c == ')':
                depth -= 1
                if depth == 0:
                    yield text[start:i + 1]; break
            i += 1


def census(text):
    row = dict(lines=text.count('\n') + 1, blocks=0, call_blocks=0, binary=0, target=0, value=0,
               cs_arg=len(re.findall(r'\bcs_arg\d+\b', text)) , cs_receiver=len(re.findall(r'\bcs_receiver\b', text)),
               api_call=text.count('pls::diagnostic::api_call('))
    for b in blocks(text):
        row['blocks'] += 1
        head = b[:400]
        if re.search(r'\bcs_arg\d+ =', head): row['call_blocks'] += 1
        elif 'auto cs_left' in head or re.search(r'\bcs_left =', head): row['binary'] += 1
        elif 'cs_target' in head: row['target'] += 1
        elif 'cs_value' in head: row['value'] += 1
    return row


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('folder', type=Path); p.add_argument('files', nargs='*'); p.add_argument('--json', type=Path)
    a = p.parse_args()
    units = [a.folder / f for f in a.files] if a.files else sorted(x for x in a.folder.rglob('*') if x.suffix in ('.cpp', '.hpp', '.inc'))
    rows = {}; total = {}
    for unit in units:
        row = census(unit.read_text(encoding='utf-8')); rows[str(unit.relative_to(a.folder))] = row
        for k, v in row.items(): total[k] = total.get(k, 0) + v
    out = dict(folder=str(a.folder), files=len(rows), total=total, by_file=rows)
    if a.json: a.json.write_text(json.dumps(out, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(files=len(rows), total=total) if not a.files else rows, ensure_ascii=False))
    return 0


if __name__ == '__main__':
    sys.exit(main())
