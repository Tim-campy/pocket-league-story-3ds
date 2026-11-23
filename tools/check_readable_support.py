"""Support code of every class in the readable C++ is present and complete (A.5).

Each translated class carries, in its header, one line of type identity and one table of
delegate slots (docs/maintaining-game-code.md, "Código de apoio das classes"):

    PLS_MANAGED_CLASS("form.TitleForm", TitleForm, MyFormBase, ...interfaces);
    PLS_DELEGATE_SLOTS(MyFormBase,
        {"Update", "M:form.TitleForm.Update"}, ...);

A maintainer who adds a class, or overrides one more C# virtual method, must add the
matching line. This check fails when:
  * a class derived from a managed base has no PLS_MANAGED_CLASS naming it;
  * a C++ `override` of a C# method has no entry in the class's PLS_DELEGATE_SLOTS (the
    delegate built from that slot would report the base method).
Runtime hooks that are not C# methods (trace_edges, memory_ranges, ...) are not slots.

    python tools/check_readable_support.py [--readable build/<readable tree>]
"""
import argparse, json, re, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
RUNTIME_HOOKS = {'trace_edges', 'release_edges', 'memory_ranges', 'managed_type_name', 'managed_delegate_method_id',
                 'source_reference_assignable', 'source_managed_type_name', 'finalize', 'dispose_native'}


def classes(text):
    """(name, body) of each `struct Name : Base {` at namespace level."""
    for m in re.finditer(r'^(?:template\s*<[^>]*>\s*)?struct (\w+) : ([^{]+)\{', text, re.M):
        depth, i = 1, m.end()
        while depth and i < len(text):
            depth += {'{': 1, '}': -1}.get(text[i], 0); i += 1
        yield m.group(1), m.group(2), text[m.end():i - 1]


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--readable', type=Path, help='Readable tree with game/ and include/generated/ (default: src/game and src/kairo/common/generated)')
    a = p.parse_args()
    folders = [a.readable / 'game', a.readable / 'include/generated'] if a.readable else [ROOT / 'src/game', ROOT / 'src/kairo/common/generated']
    report = dict(classes=0, slots=0, problems=[])
    for folder in folders:
        for header in sorted(folder.glob('*.hpp')):
            text = header.read_text(encoding='utf-8')
            for name, bases, body in classes(text):
                report['classes'] += 1
                where = f'{header.relative_to(header.parents[1]).as_posix()}: {name}'
                identity = re.search(r'PLS_MANAGED_CLASS\((?:\([^;]*?\)|"[^"]*"), (\w+),', body)
                if not identity or identity.group(1) != name:
                    report['problems'].append(where + ': no PLS_MANAGED_CLASS naming the class'); continue
                table = re.search(r'PLS_DELEGATE_SLOTS\((.*?)\);', body, re.S)
                methods = set(re.findall(r'\{"[^"]*", "M:[^"(]*\.([^".(]+)(?:\(|")', table.group(1))) if table else set()
                for member in re.findall(r'^[^\n;{}]*?\b(\w+)\([^;{}\n]*\)[ \t]*(?:const[ \t]*)?override[ \t]*;', body, re.M):
                    if member in RUNTIME_HOOKS: continue
                    report['slots'] += 1
                    if member not in methods and not any(member.startswith(m) for m in methods):
                        report['problems'].append(where + f': override {member} has no PLS_DELEGATE_SLOTS entry')
    report['status'] = 'PASS' if not report['problems'] else 'FAIL'
    out = dict(report, problems=report['problems'][:40], problem_count=len(report['problems']))
    print(json.dumps(out, ensure_ascii=False))
    return 0 if report['status'] == 'PASS' else 1


if __name__ == '__main__':
    sys.exit(main())
