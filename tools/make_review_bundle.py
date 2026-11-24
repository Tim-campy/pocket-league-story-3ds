"""Bundle game code for an external review: one text file, code copied verbatim from the tree.

    python tools/make_review_bundle.py ITEM [ITEM ...] [--max-kb 150] [--output build/review/NAME.txt]

ITEM is one of
  - a file of src/game (or src/kairo/common/generated): `form.TitleForm.hpp`, `src/game/game.Team.cpp`;
  - a class unit without extension: `data.SponsorData` = its .hpp and .cpp, whole;
  - a method by C# DocID: `M:game.Team.Update` (every definition carries a `// M:...` line);
  - a method by C++ name: `Team::Update`, `TitleForm::_draw` (all overloads).

Each excerpt is preceded by its path, line range and the commit it came from; the text is copied
without any edit. The output goes to build/review/ (outside Git). The bundle is refused if it
exceeds the size limit (default 150 KB) or if an item is not found; files with local changes are
flagged, because their text is not the commit's.
"""
import argparse, datetime, re, subprocess, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
FOLDERS = [ROOT / 'src/game', ROOT / 'src/kairo/common/generated']
sys.path.insert(0, str(ROOT / 'tools'))
from cpp_tokens import tokens  # noqa: E402

BODY_PREFIX = {')', 'const', 'noexcept', 'override', 'final', 'mutable'}


def git(*args):
    return subprocess.run(['git', *args], cwd=ROOT, capture_output=True, text=True, check=True).stdout.strip()


def find_file(name):
    p = Path(name)
    if (ROOT / p).is_file(): return [ROOT / p]
    hits = [f / p.name for f in FOLDERS if (f / p.name).is_file()]
    if hits: return hits[:1]
    unit = [f / (p.name + ext) for f in FOLDERS for ext in ('.hpp', '.cpp') if (f / (p.name + ext)).is_file()]
    return unit


def definition_end(text, start_line):
    """Last line of the definition that starts at start_line (1-based): match the body braces."""
    toks = [t for t in tokens(text) if t[1] >= start_line]
    paren = 0; pre = 0; prev = None
    for k, (tok, line) in enumerate(toks):
        if tok in ('(', '['): paren += 1
        elif tok in (')', ']'): paren -= 1
        elif tok == ';' and paren == 0 and pre == 0: return None          # a declaration, not a definition
        elif tok == '{' and paren == 0:
            if pre == 0 and prev in BODY_PREFIX:
                depth = 0
                for tok2, line2 in toks[k:]:
                    depth += (tok2 == '{') - (tok2 == '}')
                    if depth == 0: return line2
                return None
            pre += 1                                                       # brace initializer before the body
        elif tok == '}' and paren == 0: pre -= 1
        prev = tok
    return None


def with_doc_comment(lines, start):
    """Extend a definition upward over its `// M:` / `// T:` comment lines (1-based start)."""
    while start > 1 and re.match(r'\s*// [MTPFE]:', lines[start - 2]): start -= 1
    return start


def find_methods(item):
    found = []
    for folder in FOLDERS:
        for f in sorted(folder.glob('*.cpp')) + sorted(folder.glob('*.hpp')):
            text = f.read_text(encoding='utf8'); lines = text.split('\n')
            if item.startswith(('M:', 'P:')):
                marks = [i + 1 for i, l in enumerate(lines) if l.strip() == '// ' + item]
                for m in marks:
                    start = m + 1
                    while start <= len(lines) and (not lines[start - 1].strip() or re.match(r'\s*// ', lines[start - 1])): start += 1
                    end = definition_end(text, start)
                    if end: found.append((f, with_doc_comment(lines, start), end))
            else:
                cls, _, meth = item.rpartition('::')
                pat = re.compile(r'^(?!\s)(?:[^;=(]*[\s*&>])?' + re.escape(cls) + '::' + re.escape(meth) + r'\(')
                for i, l in enumerate(lines):
                    if pat.match(l):
                        end = definition_end(text, i + 1)
                        if end: found.append((f, with_doc_comment(lines, i + 1), end))
    return found


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('items', nargs='+'); ap.add_argument('--max-kb', type=float, default=150)
    ap.add_argument('--output'); args = ap.parse_args()
    commit = git('rev-parse', 'HEAD'); short = commit[:7]
    excerpts = []; missing = []
    for item in args.items:
        if '::' in item or re.match(r'[MP]:', item):
            hits = find_methods(item)
            if not hits: missing.append(item)
            excerpts += [(item, f, a, b) for f, a, b in hits]
        else:
            files = find_file(item)
            if not files: missing.append(item)
            for f in files:
                n = f.read_text(encoding='utf8').count('\n') + 1
                excerpts.append((item, f, 1, n))
    if missing: sys.exit('not found: ' + ', '.join(missing))
    dirty = {f for _, f, _, _ in excerpts if git('status', '--porcelain', '--', str(f.relative_to(ROOT)))}
    now = datetime.datetime.now().strftime('%Y-%m-%d %H:%M')
    out = [f'Pocket League Story 3DS — pacote de revisão', f'commit {commit}  ({now})',
           'Código copiado sem edição de src/game e src/kairo/common/generated; cada trecho traz caminho e linhas.',
           'Port não oficial; nenhum asset do jogo incluído.', '', 'Conteúdo:']
    for item, f, a, b in excerpts:
        out.append(f'  {f.relative_to(ROOT).as_posix()}:{a}-{b}  ({item})' + ('  [MODIFICADO localmente]' if f in dirty else ''))
    out.append('')
    for item, f, a, b in excerpts:
        rel = f.relative_to(ROOT).as_posix(); lines = f.read_text(encoding='utf8').split('\n')
        flag = f'  [MODIFICADO localmente em relação a {short}]' if f in dirty else ''
        out += ['=' * 100, f'== {rel}:{a}-{b}  @ {short}  ({item}){flag}', '=' * 100]
        out += lines[a - 1:b]; out.append('')
    data = '\n'.join(out).encode('utf8'); limit = int(args.max_kb * 1024)
    if len(data) > limit:
        sizes = {}
        for item, f, a, b in excerpts:
            sizes[item] = sizes.get(item, 0) + len('\n'.join(f.read_text(encoding='utf8').split('\n')[a - 1:b]).encode('utf8'))
        sys.exit(f'bundle has {len(data)} bytes, limit {limit} (--max-kb); per item: {sizes}')
    target = Path(args.output) if args.output else ROOT / 'build/review' / f'review-{short}-{datetime.datetime.now():%Y%m%d-%H%M%S}.txt'
    target.parent.mkdir(parents=True, exist_ok=True); target.write_bytes(data)
    print(dict(output=str(target), bytes=len(data), excerpts=len(excerpts), commit=commit, modified_files=len(dirty)))


if __name__ == '__main__':
    main()
