"""Collector map check for game classes in readable form (criterion 5, item C5a).

For every struct of a readable game unit (``<Type>.hpp`` + ``<Type>.cpp``):
  * each instance field that can hold a managed reference (declared with a
    ``pls::cs::`` reference type: ``Ref<...>``, ``String``, ``Array<...>``,
    ``Delegate<...>``) is traced in ``trace_edges`` and released in
    ``release_edges``; nothing else is traced;
  * each static storage that can hold a managed reference
    (``static pls::cs::... Type_field_storage``) is listed in the type's
    ``GcRootProvider``.

A field missing from ``trace_edges`` lets the collector free an object that is
still reachable; this check catches it when the C++ is edited by hand after the
freeze (it becomes mandatory then). Run:
    python tests/repository/test_gc_field_tracing.py [folder ...]
Default folders: docs/readable-sample (and src/game when it holds readable units).
"""
from pathlib import Path
import re
import sys
import unittest

ROOT = Path(__file__).resolve().parents[2]
REFERENCE_TYPE = re.compile(r'^pls::cs::(Ref|String|Array|Delegate|SharedField)\b')


def _body(text, start):
    """Return the text of the brace block that opens at or after ``start``."""
    open_index = text.index('{', start)
    depth = 0
    for index in range(open_index, len(text)):
        if text[index] == '{':
            depth += 1
        elif text[index] == '}':
            depth -= 1
            if depth == 0:
                return text[open_index + 1:index]
    raise ValueError('unbalanced braces')


def struct_fields(header):
    """{struct: [(type, name)]} for instance data members of each struct."""
    result = {}
    for match in re.finditer(r'\bstruct\s+(\w+)\s*(?::[^{]*)?\{', header):
        name = match.group(1)
        body = _body(header, match.start())
        fields = []
        depth = 0
        for line in body.splitlines():
            stripped = line.strip()
            depth_before = depth
            depth += stripped.count('{') - stripped.count('}')
            if depth_before != 0 or not stripped.endswith('{};') or '(' in stripped:
                continue
            if stripped.startswith(('static ', 'using ', 'friend ', 'virtual ')):
                continue
            declaration = stripped[:-3].strip()
            field_type, _, field_name = declaration.rpartition(' ')
            fields.append((field_type.strip(), field_name.strip()))
        result[name] = fields
    return result


def traced(source, struct, member):
    match = re.search(r'\b' + struct + r'::' + member + r'\s*\(', source)
    if not match:
        return None
    body = _body(source, match.start())
    call = 'trace_value' if member == 'trace_edges' else 'release_value'
    return set(re.findall(r'pls::cs::' + call + r'\(\s*(\w+)', body))


def check_folder(folder):
    problems = []
    checked = 0
    for header_path in sorted(Path(folder).glob('*.hpp')):
        source_path = header_path.with_suffix('.cpp')
        if not source_path.exists():
            continue
        header = header_path.read_text(encoding='utf-8')
        source = source_path.read_text(encoding='utf-8')
        for struct, fields in struct_fields(header).items():
            references = {name for field_type, name in fields if REFERENCE_TYPE.match(field_type)}
            values = {name for field_type, name in fields if not REFERENCE_TYPE.match(field_type)}
            for member in ('trace_edges', 'release_edges'):
                listed = traced(source, struct, member)
                if listed is None:
                    if references:
                        problems.append(f'{header_path.name}: {struct}::{member} missing; reference fields {sorted(references)}')
                    continue
                checked += 1
                for name in sorted(references - listed):
                    problems.append(f'{header_path.name}: {struct}.{name} is a reference field not listed in {member}')
                for name in sorted(listed & values):
                    problems.append(f'{header_path.name}: {struct}.{name} is not a reference field but is listed in {member}')
            storages = re.findall(r'static\s+(pls::cs::[^\n;]+?)\s+(' + struct + r'_\w+_storage)\s*\{\}\s*;', source)
            roots_match = re.search(r'GcRootProvider\s+roots\s*\(', source)
            roots = set(re.findall(r'pls::cs::trace_value\(\s*(\w+_storage)', _body(source, roots_match.start()))) if roots_match else set()
            for storage_type, storage in storages:
                if REFERENCE_TYPE.match(storage_type) and storage not in roots:
                    problems.append(f'{source_path.name}: static {storage} holds references but is not a GC root')
    return checked, problems


def default_folders():
    folders = [ROOT / 'docs/readable-sample']
    game = ROOT / 'src/game'
    if any(game.glob('*.hpp')) and 'readable mode' in next(game.glob('*.hpp')).read_text(encoding='utf-8')[:200]:
        folders.append(game)
    return folders


class GcFieldTracing(unittest.TestCase):
    def test_readable_units(self):
        for folder in default_folders():
            checked, problems = check_folder(folder)
            self.assertGreater(checked, 0, f'no trace_edges/release_edges found in {folder}')
            self.assertEqual(problems, [], '\n'.join(problems))


if __name__ == '__main__':
    if len(sys.argv) > 1 and not sys.argv[1].startswith('-'):
        total = []
        for folder in sys.argv[1:]:
            checked, problems = check_folder(folder)
            print(f'{folder}: {checked} lists checked, {len(problems)} problems')
            total += problems
        print('\n'.join(total))
        sys.exit(1 if total else 0)
    unittest.main()
