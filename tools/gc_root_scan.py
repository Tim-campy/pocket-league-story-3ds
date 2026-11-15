"""Find hand-written storage that can hold managed references outside traced
managed fields: namespace-scope variables, static/inline static class members,
function statics and thread_locals whose type names a managed reference type.

Used by tests/repository/test_gc_root_inventory.py against
config/gc-root-inventory.json (each finding must be listed with its rooting
form). Generated code is excluded (tests/repository/test_generated_static_roots.py).
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SCOPE = ('src/runtime', 'src/kairo', 'src/main')
EXCLUDED = ('src/kairo/common/generated/',)
MANAGED = re.compile(r'\b(?:Ref|Array|List|Stack|Dictionary|SharedField|ExceptionRef|Delegate|Weak)\s*<|\bString\b(?!_|\s*\()|\b(?:std::function)\s*<[^;]*\b(?:Ref|Array|String|Delegate)\b')
# Aggregates (native structs) known to contain managed references.
AGGREGATES = re.compile(r'\b(?:GraphicsRuntimeBindings|ImageRuntimeBindings|TextServices|KairoCallbacks|FormCallbacks|SurfaceCallbacks|BootstrapBindings|IntegerNumberFormat|RuntimeTypeRegistry|DialogRequest|TextPanelRequest|LanguagePanelRequest|GlobalizationProvider|State)\b')
STORAGE = re.compile(r'(?:^|(?<=[;{}]))\s*((?:(?:inline|static|thread_local|const|constexpr|extern|mutable)\s+)+)?([A-Za-z_][\w:<>,\s\*&()]*?)(?:\s+|(?<=[>*&]))([A-Za-z_]\w*)\s*(\{[^;{}]*\}|=[^;]*)?\s*;', re.S)


def strip(text):
    text = re.sub(r'//[^\n]*', lambda m: ' ' * len(m.group()), text)
    text = re.sub(r'/\*.*?\*/', lambda m: re.sub(r'[^\n]', ' ', m.group()), text, flags=re.S)
    text = re.sub(r'"(?:\\.|[^"\\\n])*"', lambda m: '"' + ' ' * (len(m.group()) - 2) + '"', text)
    text = re.sub(r"'(?:\\.|[^'\\\n])'", "' '", text)
    return text


def blocks(text):
    """Yield (start, end, kind) for every brace block; kind: namespace/class/function/other."""
    stack, result = [], []
    for i, c in enumerate(text):
        if c == '{':
            head = text[max(0, i - 300):i]
            head = head[max(head.rfind(';'), head.rfind('}'), head.rfind('{')) + 1:].strip()
            if re.search(r'\bnamespace\b[\w:\s]*$', head):
                kind = 'namespace'
            elif re.search(r'\b(?:class|struct|union)\b[^()]*$', head) and not re.search(r'=\s*$', head):
                kind = 'class'
            elif re.search(r'\)\s*(?:const|noexcept|override|final|mutable|->\s*[\w:<>]+|\s)*$', head) or head.endswith(']') :
                kind = 'function'
            else:
                kind = 'other'
            stack.append((i, kind))
        elif c == '}' and stack:
            start, kind = stack.pop()
            result.append((start, i, kind))
    return result


def scope_at(spans, position):
    kinds = [kind for start, end, kind in spans if start < position < end]
    return kinds


def scan_file(path):
    raw = path.read_text(encoding='utf-8', errors='replace')
    text = strip(raw)
    spans = sorted(blocks(text))
    findings = []
    for match in STORAGE.finditer(text):
        specifiers, kind, name = match.group(1) or '', match.group(2), match.group(3)
        declaration = match.group(0).lstrip(';{} \n\t')
        auto_static = kind.strip() == 'auto' and re.search(r'\b(?:static|thread_local)\b', specifiers)
        if not (MANAGED.search(kind) or AGGREGATES.search(kind) or auto_static):
            continue
        if kind.strip() in ('return', 'using', 'typedef', 'friend', 'case', 'else', 'throw', 'delete', 'new', 'goto'):
            continue
        if re.match(r'\s*(?:return|using|typedef|friend|throw|co_return)\b', declaration):
            continue
        position = match.start(3)
        kinds = scope_at(spans, position)
        innermost = kinds[-1] if kinds else 'namespace'
        static_like = bool(re.search(r'\b(?:static|thread_local)\b', specifiers))
        if innermost == 'namespace' or not kinds:
            storage = 'thread_local' if 'thread_local' in specifiers else 'namespace'
        elif innermost == 'class' and static_like:
            storage = 'class-static'
        elif innermost in ('function', 'other') and static_like:
            storage = 'function-static' if 'thread_local' not in specifiers else 'thread_local'
        else:
            continue
        if '(' in re.sub(r'std::function\s*<.*>', '', kind):
            continue
        names = [name]
        initializer = match.group(4) or ''
        depth = 0; current = ''
        for ch in initializer:
            depth += ch in '<({[' ; depth -= ch in '>)}]'
            current += ch
        names += re.findall(r'(?:^|[)}\]]\s*),\s*([A-Za-z_]\w*)\s*[={]', initializer)
        line = raw.count('\n', 0, position) + 1
        for each in dict.fromkeys(names):
            findings.append({'file': path.relative_to(ROOT).as_posix(), 'line': line, 'name': each,
                             'storage': storage, 'type': ' '.join(kind.split())})
    return findings


def scan():
    result = []
    for folder in SCOPE:
        for path in sorted((ROOT / folder).rglob('*')):
            rel = path.relative_to(ROOT).as_posix()
            if path.suffix not in ('.hpp', '.cpp', '.inc', '.h') or any(rel.startswith(e) for e in EXCLUDED):
                continue
            result.extend(scan_file(path))
    return result


def traced_names(path):
    """Names traced by a GcRootProvider/add_roots/trace function in this file."""
    text = strip(path.read_text(encoding='utf-8', errors='replace'))
    return set(re.findall(r'trace_value\(\s*(?:[\w:]+::)?(\w+)', text)) | set(re.findall(r'(\w+)\.trace_edges\(', text)) | set(re.findall(r'(\w+)\.\w+\.trace_edges\(', text)) \
        | set(re.findall(r'for\s*\(\s*(?:const\s+)?auto\s*&?\s*\w+\s*:\s*(\w+)\s*\)', text))


if __name__ == '__main__':
    json.dump(scan(), sys.stdout, indent=1, ensure_ascii=False)
