"""Format the game code with its .clang-format and prove the change is whitespace-only.

    python tools/format_game_code.py            # format src/game and src/kairo/common/generated in place
    python tools/format_game_code.py --check    # only report files that are not formatted (exit 1)

Proof run after formatting: every file's C++ token stream (tools/cpp_tokens.py) and its text with all
whitespace removed are identical to the text before. Exits 1 if any file changed beyond whitespace
(the formatted text is then left in place for inspection; restore with git checkout).
"""
import argparse, re, subprocess, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANG_FORMAT = Path('C:/Program Files/Microsoft Visual Studio/18/Community/VC/Tools/Llvm/x64/bin/clang-format.exe')
FOLDERS = [ROOT / 'src/game', ROOT / 'src/kairo/common/generated']
SUFFIXES = ('.cpp', '.hpp', '.inc', '.h')
sys.path.insert(0, str(ROOT / 'tools'))
from cpp_tokens import tokens  # noqa: E402


def sources(folder):
    return sorted(f for f in folder.iterdir() if f.suffix in SUFFIXES)


def main():
    parser = argparse.ArgumentParser(); parser.add_argument('--check', action='store_true'); args = parser.parse_args()
    style = (ROOT / 'src/game/.clang-format').read_bytes()
    if (ROOT / 'src/kairo/common/generated/.clang-format').read_bytes() != style:
        sys.exit('src/kairo/common/generated/.clang-format differs from src/game/.clang-format')
    changed = []; bad = []; count = 0
    for folder in FOLDERS:
        for f in sources(folder):
            count += 1
            before = f.read_text(encoding='utf8')
            after = subprocess.run([str(CLANG_FORMAT), '--style=file', '--assume-filename=' + str(f)], input=before.encode('utf8'),
                                   capture_output=True, check=True, cwd=folder).stdout.decode('utf8')
            if after == before: continue
            changed.append(f)
            if args.check: continue
            if re.sub(r'\s', '', before) != re.sub(r'\s', '', after) or [t for t, _ in tokens(before)] != [t for t, _ in tokens(after)]:
                bad.append(f)
            f.write_bytes(after.encode('utf8'))
    rel = lambda p: p.relative_to(ROOT).as_posix()
    print(dict(files=count, changed=len(changed), changed_beyond_whitespace=[rel(f) for f in bad], mode='check' if args.check else 'format'))
    if args.check and changed:
        print('not formatted:', *[rel(f) for f in changed[:20]], sep='\n  ')
    return 1 if bad or (args.check and changed) else 0


if __name__ == '__main__':
    sys.exit(main())
