"""C++ token stream of a source file, for proving that a formatting change is whitespace-only.

Lexes like a C++17 compiler's phase 3 (no preprocessing): pp-numbers, identifiers, string and
character literals with prefixes (u8, u, U, L, R raw strings), punctuators (longest match),
comments and whitespace dropped. Preprocessor directives keep their tokens; a line break that
ends a directive is recorded as a token, because clang-format may not move it.

    python tools/cpp_tokens.py A B          # compare two files; exit 1 and show the first changes
    python tools/cpp_tokens.py --tree OLD NEW   # compare two folders file by file
"""
import difflib, re, sys
from pathlib import Path

PUNCT = sorted('''%:%: ... <<= >>= <=> -> ->* .* ++ -- << >> <= >= == != && || += -= *= /= %= &= |= ^= ##
:: <: :> <% %> %: { } [ ] ( ) # ; : ? . + - * / % ^ & | ~ ! = < > ,'''.split(), key=len, reverse=True)
IDENT = re.compile(r'[A-Za-z_][A-Za-z_0-9]*')
PPNUM = re.compile(r"\.?[0-9](?:[eEpP][+-]|'[0-9A-Za-z_]|[0-9A-Za-z_.])*")
PREFIX = re.compile(r'(?:u8|u|U|L)?R?(?=["\'])')


def tokens(text):
    out = []; i = 0; n = len(text); line = 1; at_line_start = True; in_directive = False
    while i < n:
        c = text[i]
        if c == '\\' and text.startswith('\n', i + 1):
            i += 2; line += 1; continue
        if c == '\n':
            if in_directive: out.append(('<eol>', line)); in_directive = False
            line += 1; i += 1; at_line_start = True; continue
        if c.isspace(): i += 1; continue
        if text.startswith('//', i):
            j = text.find('\n', i); i = n if j < 0 else j; continue
        if text.startswith('/*', i):
            j = text.find('*/', i + 2); j = n if j < 0 else j + 2
            line += text.count('\n', i, j); i = j; continue
        start = i
        m = PREFIX.match(text, i)
        if m and (m.end() > i or c in '"\''):
            p = m.group(0); q = m.end()
            if 'R' in p and text[q] == '"':
                d = text.index('(', q + 1); delim = text[q + 1:d]
                e = text.index(')' + delim + '"', d) + len(delim) + 2
            else:
                quote = text[q]; e = q + 1
                while text[e] != quote:
                    if text[e] == '\n': raise ValueError(f'unterminated literal at line {line}')
                    e += 2 if text[e] == '\\' else 1
                e += 1
            m2 = IDENT.match(text, e)          # user-defined literal suffix
            if m2: e = m2.end()
            tok = text[start:e]
        elif c.isdigit() or (c == '.' and i + 1 < n and text[i + 1].isdigit()):
            tok = PPNUM.match(text, i).group(0)
        elif IDENT.match(text, i):
            tok = IDENT.match(text, i).group(0)
        else:
            tok = next((p for p in PUNCT if text.startswith(p, i)), c)
            if tok == '#' and at_line_start: in_directive = True
        out.append((tok, line)); line += tok.count('\n'); i = start + len(tok); at_line_start = False
    if in_directive: out.append(('<eol>', line))
    return out


def compare(a_path, b_path, show=6):
    a = tokens(Path(a_path).read_text(encoding='utf8')); b = tokens(Path(b_path).read_text(encoding='utf8'))
    ta = [t for t, _ in a]; tb = [t for t, _ in b]
    if ta == tb: return []
    # First divergence and the matching tail (fast; difflib is quadratic on these files).
    i = next((k for k in range(min(len(ta), len(tb))) if ta[k] != tb[k]), min(len(ta), len(tb)))
    j = 0
    while j < min(len(ta), len(tb)) - i and ta[-1 - j] == tb[-1 - j]: j += 1
    return [dict(first_old_line=a[i][1] if i < len(a) else None, first_new_line=b[i][1] if i < len(b) else None,
                 old=ta[max(0, i - 3):len(ta) - j][:3 + show * 2], new=tb[max(0, i - 3):len(tb) - j][:3 + show * 2],
                 changed_old_tokens=len(ta) - j - i, changed_new_tokens=len(tb) - j - i)]


def main(argv):
    if argv[:1] == ['--tree']:
        old, new = Path(argv[1]), Path(argv[2]); bad = 0; count = 0
        for f in sorted(old.iterdir()):
            if f.suffix not in ('.cpp', '.hpp', '.inc', '.h', '.i'): continue
            count += 1; d = compare(f, new / f.name)
            if d:
                bad += 1; print(f.name); [print('  ', x) for x in d]
        print(f'{count} files, {bad} with token changes'); return 1 if bad else 0
    d = compare(argv[0], argv[1]); [print(x) for x in d]; return 1 if d else 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
