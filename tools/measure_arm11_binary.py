"""Measure ELF sections and conservatively attribute text symbols; never read assets."""
import argparse
from collections import defaultdict
import hashlib
import json
from pathlib import Path
import re
import subprocess

BIN = Path('C:/devkitPro/devkitARM/bin')


def sha(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def category(name):
    # Type arguments alone do not turn a standard-library instantiation into
    # game logic. Unknown/static C functions remain unassigned without a map.
    head = name.split('(', 1)[0]
    for namespace, label in [('pls::game::', 'game_functions_and_type_helpers'),
                             ('pls::generated::', 'portable_generated'),
                             ('pls::cs::', 'managed_runtime'),
                             ('pls::kairo::', 'kairo_api'),
                             ('pls::sdl::', 'platform'),
                             ('pls::null_backend::', 'platform')]:
        if re.search(r'(?:^|\s|thunk to )' + re.escape(namespace), head):
            return label
    if re.search(r'(?:^|\s)(?:std::|__gnu_cxx::)', head):
        return 'cpp_library_and_template_instantiations'
    return 'unassigned_requires_link_map'


def measure(elf, image):
    listing = subprocess.check_output([BIN/'arm-none-eabi-readelf.exe', '-SW', elf], text=True)
    sections = []
    for line in listing.splitlines():
        found = re.match(r'\s*\[\s*\d+\]\s+(\S+)\s+(\S+)\s+([0-9a-f]+)\s+([0-9a-f]+)\s+([0-9a-f]+)\s+\S+\s+(\S*)', line)
        if found:
            name, kind, address, offset, size, flags = found.groups()
            sections.append(dict(name=name, kind=kind, address=int(address, 16),
                                 offset=int(offset, 16), bytes=int(size, 16), flags=flags))
    text = next(row for row in sections if row['name'] == '.text')
    lo, hi = text['address'], text['address'] + text['bytes']
    ranges = defaultdict(list)
    process = subprocess.Popen([BIN/'arm-none-eabi-nm.exe', '-S', '-C', '--defined-only', elf],
                               stdout=subprocess.PIPE, text=True, encoding='utf8', errors='replace')
    for line in process.stdout:
        fields = line.split(maxsplit=3)
        if len(fields) != 4:
            continue
        try:
            begin, size = int(fields[0], 16), int(fields[1], 16)
        except ValueError:
            continue
        if size and lo <= begin < hi and begin + size <= hi:
            ranges[(begin, begin + size)].append(category(fields[3].strip()))
    if process.wait():
        raise RuntimeError('nm failed')
    totals, cursor = defaultdict(int), lo
    overlap = 0
    for (begin, end), labels in sorted(ranges.items()):
        if begin > cursor:
            totals['unattributed_padding_or_unsized_symbols'] += begin - cursor
        if begin < cursor:
            overlap += min(cursor, end) - begin
        effective = max(0, end - max(begin, cursor))
        label = labels[0] if len(set(labels)) == 1 else 'aliased_symbols_ambiguous'
        totals[label] += effective
        cursor = max(cursor, end)
    totals['unattributed_padding_or_unsized_symbols'] += hi - cursor
    assert sum(totals.values()) == text['bytes']
    return dict(operation='arm11-binary-section-measurement', elf_sha256=sha(elf),
                image_sha256=sha(image), image_bytes=image.stat().st_size,
                sections=sections, text_symbol_categories=dict(totals),
                overlapping_symbol_bytes=overlap,
                limitation='Symbol categories are not library/archive provenance. Unassigned bytes require a link map; debug sections are not 3DSX payload.')


def map_provenance(path, sections):
    """Attribute allocated input sections; discard entries outside ELF sections."""
    spans=[];pending=None
    for line in path.read_text(encoding='utf8',errors='replace').splitlines():
        full=re.match(r'^ (\.\S+)\s+(0x[0-9a-fA-F]+)\s+(0x[0-9a-fA-F]+)\s+(.+)$',line)
        continuation=re.match(r'^\s+(0x[0-9a-fA-F]+)\s+(0x[0-9a-fA-F]+)\s+(.+)$',line)
        if full:
            section,address,size,owner=full.groups();pending=None
        elif pending and continuation:
            section=pending;address,size,owner=continuation.groups();pending=None
        else:
            name=re.match(r'^ (\.\S+)\s*$',line)
            pending=name[1]if name else None
            continue
        begin=int(address,16);size=int(size,16)
        if not size or not begin:continue
        # Debug-section offsets are not VMAs: large .debug_info fragments can
        # numerically overlap .text and must never enter the allocation map.
        if not section.startswith(('.text','.rodata','.ARM.extab','.ARM.exidx','.data','.sdata','.tdata','.init','.fini','.ctors','.dtors','.got','.gcc_except_table','.gnu.linkonce')):continue
        normalized=owner.replace('\\','/')
        archive=re.search(r'(?:^|/)([^/ ]+\.a)\(([^)]+)\)',normalized)
        if archive:
            label=archive[1]
            if label=='libnull_runtime.a':
                member=archive[2]
                label=('portable_generated'if 'portable_generated' in member else
                       'collation_runtime_and_constants'if 'collation' in member or 'character_data' in member else
                       'managed_runtime_objects'if 'managed_' in member or 'semantic_runtime' in member else
                       'kairo_platform_objects')
        elif 'game_generated' in normalized or 'bootstrap_generated' in normalized:label='game_objects_including_template_instantiations'
        elif 'null_main' in normalized:label='benchmark_host'
        elif '.o' in normalized:label='crt_or_other_object'
        else:continue
        spans.append((begin,begin+size,label))
    result={}
    for section in sections:
        if 'A'not in section['flags'] or section['kind']=='NOBITS':continue
        lo=section['address'];hi=lo+section['bytes'];cursor=lo;totals=defaultdict(int)
        for begin,end,label in sorted(spans):
            begin=max(begin,lo);end=min(end,hi)
            if end<=begin:continue
            if begin>cursor:totals['padding_or_unattributed']+=begin-cursor
            if end>cursor:totals[label]+=end-max(begin,cursor)
            cursor=max(cursor,end)
        totals['padding_or_unattributed']+=hi-cursor
        assert sum(totals.values())==section['bytes']
        result[section['name']]=dict(totals)
    return dict(map_sha256=sha(path),sections=result,
                limitation='Object/archive provenance includes template instantiations and constants; it is a separate view from function-symbol categories.')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--elf', type=Path, required=True)
    parser.add_argument('--image', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--map',type=Path)
    args = parser.parse_args()
    result = measure(args.elf, args.image)
    if args.map:result['link_map']=map_provenance(args.map,result['sections'])
    args.output.write_text(json.dumps(result, indent=2)+'\n', encoding='utf8')
    print(json.dumps({key: result[key] for key in ['image_bytes', 'text_symbol_categories', 'overlapping_symbol_bytes']}))
