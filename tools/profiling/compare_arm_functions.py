"""Compare the ARM11 machine code of selected game functions in two null_game.elf builds.

Disassembles each function with arm-none-eabi-objdump and compares the instruction
sequences with addresses, branch targets and literal-pool offsets normalized (a
function that only moved is "identical"). Used to decide whether an emission change
needs a new hardware benchmark (user rule, 2026-11-23).

    python tools/profiling/compare_arm_functions.py BEFORE.elf AFTER.elf
"""
import json, re, subprocess, sys
from pathlib import Path

BIN = Path('C:/devkitPro/devkitARM/bin')
FUNCTIONS = {  # readable C++ names (demangled prefix)
    'Team::GetSum': r'pls::game::game::Team::GetSum\(',
    'Team::Cal_evaCoatMulti9block': r'pls::game::game::Team::Cal_evaCoatMulti9block\(',
    'GameUtil::ChRectHitRectFloat': r'pls::game::game::GameUtil::ChRectHitRectFloat\(',
    'AppData::InsertGameObject': r'pls::game::main::AppData::InsertGameObject\(',
    'Camera::ConvertScreenToCamera': r'pls::game::game::Camera::ConvertScreenToCamera\(',
    'TitleForm::_draw': r'pls::game::form::TitleForm::_draw\(',
}


def symbols(elf):
    out = subprocess.check_output([str(BIN / 'arm-none-eabi-nm.exe'), '-C', '--defined-only', '-S', str(elf)], text=True, errors='replace')
    rows = []
    for line in out.splitlines():
        parts = line.split(' ', 3)
        if len(parts) == 4 and parts[2] in 'tT': rows.append((int(parts[0], 16), int(parts[1], 16), parts[3]))
    return rows


def body(elf, start, size):
    out = subprocess.check_output([str(BIN / 'arm-none-eabi-objdump.exe'), '-d', '--no-show-raw-insn', f'--start-address={start}', f'--stop-address={start + size}', str(elf)], text=True, errors='replace')
    ops = []
    for line in out.splitlines():
        m = re.match(r'^\s*[0-9a-f]+:\s+(\S+)\s*(.*)$', line)
        if not m: continue
        op, args = m.group(1), m.group(2)
        args = re.sub(r'<[^>]*>', '<sym>', args)            # symbol + offset of branch targets
        args = re.sub(r'\b[0-9a-f]{5,8}\b', 'ADDR', args)     # absolute addresses
        args = re.sub(r';.*$', '', args).strip()              # literal-pool comments
        if op == '.word': args = 'DATA'                        # literal-pool words (data addresses)
        ops.append(op + ' ' + args)
    return ops


def main():
    before, after = Path(sys.argv[1]), Path(sys.argv[2])
    sb, sa = symbols(before), symbols(after)
    report = {}
    for name, pattern in FUNCTIONS.items():
        own = lambda r: re.match(pattern, r[2]) and '::{lambda' not in r[2] and '[clone' not in r[2]  # the function itself, not its lambdas
        rb = [r for r in sb if own(r)]; ra = [r for r in sa if own(r)]
        if len(rb) != 1 or len(ra) != 1: report[name] = dict(status='not-found', before=len(rb), after=len(ra)); continue
        ob, oa = body(before, rb[0][0], rb[0][1]), body(after, ra[0][0], ra[0][1])
        same = ob == oa
        diff = [(i, x, y) for i, (x, y) in enumerate(zip(ob, oa)) if x != y][:6]
        report[name] = dict(status='identical' if same else 'different', before=len(ob), after=len(oa), first_differences=diff)
    print(json.dumps(report, indent=1, ensure_ascii=False))
    return 0 if all(r['status'] == 'identical' for r in report.values()) else 1


if __name__ == '__main__':
    sys.exit(main())
