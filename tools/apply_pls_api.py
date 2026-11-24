"""One-time rewrite (2026-11-24): pls::diagnostic::api_call([&]() -> decltype(auto) { return X; }) -> PLS_API(X).

    python tools/apply_pls_api.py [--check]

PLS_API (src/kairo/common/diagnostic_profile.hpp) expands to exactly the replaced text, so the
change is invisible after preprocessing. Only the exact form is rewritten: a lambda body that is
a single `return EXPR;`. Anything else is left as is and reported. Nested calls are rewritten
innermost first. Run tools/format_game_code.py afterwards (whitespace only).
"""
import re, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
FOLDERS = [ROOT / 'src/game', ROOT / 'src/kairo/common/generated']
CALL = re.compile(r'pls::diagnostic::\s*api_call\s*\(')  # clang-format may break after '::'
HEAD = re.compile(r'\s*\[&\]\(\)\s*->\s*decltype\(auto\)\s*\{')


def skip_literal(text, i):
    """i at a quote (possibly after a u/u8/U/L prefix): index after the literal."""
    q = text[i]; j = i + 1
    while text[j] != q:
        j += 2 if text[j] == '\\' else 1
    return j + 1


def match_close(text, i, open_ch, close_ch):
    """i at open_ch: index of the matching close_ch, skipping literals and comments."""
    depth = 0; n = len(text)
    while i < n:
        c = text[i]
        if c in '"\'' and not (c == '\'' and i > 0 and text[i - 1].isalnum() and text[i - 1] not in 'uUL8'):
            i = skip_literal(text, i); continue
        if text.startswith('//', i): i = text.index('\n', i); continue
        if text.startswith('/*', i): i = text.index('*/', i) + 2; continue
        if c == open_ch: depth += 1
        elif c == close_ch:
            depth -= 1
            if depth == 0: return i
        i += 1
    raise ValueError('unbalanced')


def top_level_semicolons(expr):
    depth = 0; i = 0; count = 0
    while i < len(expr):
        c = expr[i]
        if c in '"\'' and not (c == '\'' and i > 0 and expr[i - 1].isalnum() and expr[i - 1] not in 'uUL8'):
            i = skip_literal(expr, i); continue
        if c in '([{': depth += 1
        elif c in ')]}': depth -= 1
        elif c == ';' and depth == 0: count += 1
        i += 1
    return count


def rewrite(text):
    starts = [(m.start(), m.end()) for m in CALL.finditer(text)]
    done = skipped = 0
    for s, p in reversed(starts):
        if s >= 2 and text[s - 2:s] == '::': skipped += 1; continue   # ::pls:: form: leave
        m = HEAD.match(text, p)
        if not m: skipped += 1; continue
        brace = m.end() - 1
        close = match_close(text, brace, '{', '}')
        body = text[brace + 1:close].strip()
        k = close + 1
        while text[k].isspace(): k += 1
        if text[k] != ')' or not re.match(r'return\b', body) or not body.endswith(';'): skipped += 1; continue
        expr = body[len('return'):-1].strip()
        if not expr or top_level_semicolons(expr): skipped += 1; continue
        text = text[:s] + 'PLS_API(' + expr + ')' + text[k + 1:]
        done += 1
    return text, done, skipped


def main():
    check = '--check' in sys.argv
    total = skipped_total = 0; files = 0
    for folder in FOLDERS:
        for f in sorted(folder.iterdir()):
            if f.suffix not in ('.cpp', '.hpp', '.inc', '.h'): continue
            text = f.read_text(encoding='utf8')
            if not CALL.search(text): continue
            new, done, skipped = rewrite(text)
            total += done; skipped_total += skipped; files += done > 0
            if skipped: print('left as is:', f.relative_to(ROOT).as_posix(), skipped)
            if not check and new != text: f.write_bytes(new.encode('utf8'))
    print(dict(rewritten=total, files=files, left_as_is=skipped_total, mode='check' if check else 'write'))


if __name__ == '__main__':
    main()
