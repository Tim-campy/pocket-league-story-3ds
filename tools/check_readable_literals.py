"""Every text literal of the readable code equals a C# literal, character by character.

Decodes each u"..." literal of a readable tree (C++ escapes, adjacent pieces
joined) and each string literal of the reconstructed C# (regular and verbatim),
and requires every emitted literal to be, exactly, a C# literal of the same
source file, of the same assembly, or a concatenation of C# literals (a constant
the C# compiler folded). Independent of the translator: it re-reads both texts.

    python tools/check_readable_literals.py [--readable build/<readable tree>]
"""
import argparse, json, re, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
# Literals the translator synthesizes (not C# text): runtime spellings of the CLR.
SYNTHESIZED = {'': 'empty string', 'True': 'bool.ToString()', 'False': 'bool.ToString()',
               'pls-offline': 'offline service policy value (config/service-overrides.json, tools/write_service_policy.py)'}


def cpp_literals(text):
    """u"..." literals (adjacent pieces joined), decoded to Python str."""
    out = []
    i = 0
    n = len(text)
    while True:
        j = text.find('u"', i)
        if j < 0:
            return out
        if j > 0 and (text[j - 1].isalnum() or text[j - 1] == '_'):
            i = j + 2; continue
        value = []; k = j
        while k < n and text.startswith('u"', k):
            k += 2
            while text[k] != '"':
                c = text[k]
                if c != '\\':
                    value.append(c); k += 1; continue
                e = text[k + 1]
                if e in 'nrt"\\?\'':
                    value.append({'n': '\n', 'r': '\r', 't': '\t'}.get(e, e)); k += 2
                elif e == 'u':
                    value.append(chr(int(text[k + 2:k + 6], 16))); k += 6
                elif e == 'U':
                    value.append(chr(int(text[k + 2:k + 10], 16))); k += 10
                elif e == 'x':
                    m = re.match(r'[0-9A-Fa-f]+', text[k + 2:]); value.append(chr(int(m.group(0), 16))); k += 2 + len(m.group(0))
                elif e in '01234567':
                    m = re.match(r'[0-7]{1,3}', text[k + 1:]); value.append(chr(int(m.group(0), 8))); k += 1 + len(m.group(0))
                else:
                    raise ValueError('unknown C++ escape \\' + e)
            k += 1
            while k < n and text[k] in ' \t\r\n':
                k += 1
        out.append(''.join(value)); i = k


def cs_literals(text):
    """String literals of a C# file (comments skipped), decoded."""
    out = []; i = 0; n = len(text)
    escapes = {'n': '\n', 'r': '\r', 't': '\t', '0': '\0', 'a': '\a', 'b': '\b', 'f': '\f', 'v': '\v', '"': '"', "'": "'", '\\': '\\'}
    while i < n:
        c = text[i]
        if text.startswith('//', i):
            i = text.find('\n', i); i = n if i < 0 else i; continue
        if text.startswith('/*', i):
            i = text.find('*/', i) + 2; continue
        if c == "'":
            i += 2 if text[i + 1] != '\\' else 3
            while text[i] != "'": i += 1
            i += 1; continue
        if text.startswith('@"', i):
            i += 2; value = []
            while True:
                if text[i] == '"' and text[i + 1:i + 2] == '"': value.append('"'); i += 2; continue
                if text[i] == '"': i += 1; break
                value.append(text[i]); i += 1
            out.append(''.join(value)); continue
        if c == '"':
            i += 1; value = []
            while text[i] != '"':
                if text[i] == '\\':
                    e = text[i + 1]
                    if e == 'u': value.append(chr(int(text[i + 2:i + 6], 16))); i += 6; continue
                    if e == 'U': value.append(chr(int(text[i + 2:i + 10], 16))); i += 10; continue
                    if e == 'x':
                        m = re.match(r'[0-9A-Fa-f]{1,4}', text[i + 2:]); value.append(chr(int(m.group(0), 16))); i += 2 + len(m.group(0)); continue
                    value.append(escapes[e]); i += 2; continue
                value.append(text[i]); i += 1
            i += 1; out.append(''.join(value)); continue
        i += 1
    return out


def concatenation(value, pieces):
    """value is a concatenation of at least two literals of pieces (constant folding)."""
    pieces = [p for p in pieces if p]
    reach = {0: 0}
    for pos in range(len(value)):
        if pos not in reach: continue
        for p in pieces:
            if value.startswith(p, pos):
                end = pos + len(p); reach[end] = max(reach.get(end, 0), reach[pos] + 1)
    return reach.get(len(value), 0) >= 2


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--readable', type=Path, help='Readable tree with game/ and include/generated/ (default after the freeze: src/game and src/kairo/common/generated)')
    a = p.parse_args()
    report = dict(checked=0, by_file=0, by_assembly=0, folded=0, synthesized=0, mismatches=[])
    roots = [ROOT / 'reference/src/Assembly-CSharp', ROOT / 'reference/src/KairoLibrary']
    sources = {path: cs_literals(path.read_text(encoding='utf-8-sig')) for root in roots for path in root.rglob('*.cs')}
    everything = set(v for values in sources.values() for v in values)
    trees = [('game', a.readable / 'game'), ('include/generated', a.readable / 'include/generated')] if a.readable else [('src/game', ROOT / 'src/game'), ('src/kairo/common/generated', ROOT / 'src/kairo/common/generated')]
    for unit_dir, folder in trees:
        for unit in sorted(folder.glob('*.*')):
            if unit.suffix not in ('.cpp', '.hpp', '.inc'): continue
            stem = unit.name.split('_cpp_part_')[0].rsplit('.', 1)[0]
            parts = stem.split('.')
            own = set()
            for root in roots:  # a type of either assembly can be emitted in either tree
                guess = root.joinpath(*parts[:-1], parts[-1].split('_')[0] + '.cs')
                if guess in sources: own = set(sources[guess]); break
            for literal in cpp_literals(unit.read_text(encoding='utf-8')):
                report['checked'] += 1
                if literal in own: report['by_file'] += 1
                elif literal in everything: report['by_assembly'] += 1
                elif literal in SYNTHESIZED: report['synthesized'] += 1
                elif concatenation(literal, own or everything): report['folded'] += 1
                else: report['mismatches'].append(dict(unit=f'{unit_dir}/{unit.name}', literal=literal))
    report['status'] = 'PASS' if not report['mismatches'] else 'FAIL'
    out = dict(report, mismatches=report['mismatches'][:40], mismatch_count=len(report['mismatches']))
    sys.stdout.reconfigure(encoding='utf-8')
    print(json.dumps(out, ensure_ascii=False))
    return 0 if report['status'] == 'PASS' else 1


if __name__ == '__main__':
    sys.exit(main())
