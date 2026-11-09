"""One bounded UCD-only attempt to replace the historical Mono BMP data.

The candidates are generated exclusively from pinned official UnicodeData.
The LGPL header is read only for a separately reported comparison, never to
patch either candidate. Production files and generated tables are untouched.
"""
import collections
import hashlib
import json
from pathlib import Path
import re
import shutil
import struct
import subprocess
import sys
import urllib.request

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT/'tools'))
from pc_compiler import environment
from setup_mono_collation import REVISION, UNITY_REVISION, LGPL_PINNED

DEPS = ROOT/'build/deps/unicode-legacy'
OUTPUT = ROOT/'build/unicode-regeneration'
MONO = 'https://raw.githubusercontent.com/mono/mono/'+REVISION+'/'
FILES = {
    'UnicodeData-3.1.0.txt': ('https://www.unicode.org/Public/3.1-Update/UnicodeData-3.1.0.txt',
        '8e57884da0da3a66782b8a6332a601fccbcae9ed0060e12501aca02fa56ffecd'),
    'UnicodeData-3.0.0.txt': ('https://www.unicode.org/Public/3.0-Update/UnicodeData-3.0.0.txt',
        'f41d967bc458ee106f0c3948bfad71cd0860d96c49304e3fd02eaf2bbae4b6d9'),
    'Unicode-LICENSE.txt': ('https://www.unicode.org/license.txt',
        'e7a93b009565cfce55919a381437ac4db883e9da2126fa28b91d12732bc53d96'),
    'ReadMe-3.1.0.txt': ('https://www.unicode.org/Public/3.1-Update/ReadMe-3.1.0.txt',
        'a20b55ea29adf4cd28633a2e74e1e3d3e348108031c79d7d7ea90549341dba0a'),
    'mcs/class/corlib/Documentation/en/System.Globalization/UnicodeCategory.xml':
        (MONO+'mcs/class/corlib/Documentation/en/System.Globalization/UnicodeCategory.xml',
        '7f162c16a1fc82fee3cfdd75f7dc4036d8a9b0823ca6d2dc8fa36093cc49192c'),
    'mcs/class/corlib/Test/System/CharCategoryTest.cs':
        (MONO+'mcs/class/corlib/Test/System/CharCategoryTest.cs',
        'a544d67eb76ec1df4681daa9bc160cb5700dae51b59c3bce9d4dc3a7c2f7e0e9'),
    'mono/metadata/ChangeLog': (MONO+'mono/metadata/ChangeLog',
        '265bfb71d33d9dc5adb70a7e47d6080f226d51879e79348afbdaa70d94dc44f3'),
    'unity-UnicodeCategory.xml':
        ('https://raw.githubusercontent.com/Unity-Technologies/mono/'+UNITY_REVISION+
        '/mcs/class/corlib/Documentation/en/System.Globalization/UnicodeCategory.xml',
        '7f162c16a1fc82fee3cfdd75f7dc4036d8a9b0823ca6d2dc8fa36093cc49192c'),
}


def sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def acquire():
    records = []
    for name, (url, expected) in FILES.items():
        path = DEPS/name
        if not path.exists():
            data = urllib.request.urlopen(url, timeout=30).read()
            if hashlib.sha256(data).hexdigest() != expected:
                raise ValueError('Official source hash changed: '+name)
            path.parent.mkdir(parents=True, exist_ok=True)
            path.write_bytes(data)
        if sha(path) != expected:
            raise ValueError('Pinned local dependency changed: '+name)
        records.append(dict(path=path.relative_to(ROOT).as_posix(),url=url,
                            sha256=expected,bytes=path.stat().st_size))
    return records


def from_ucd(path):
    lower, upper = list(range(65536)), list(range(65536))
    categories = ['Cn']*65536
    pending = None
    for line in path.read_text(encoding='utf-8').splitlines():
        fields = line.split(';')
        if len(fields) != 15:
            raise ValueError('UnicodeData row must have 15 fields')
        cp = int(fields[0], 16)
        if fields[1].endswith(', First>'):
            if pending is not None:
                raise ValueError('Nested UnicodeData range')
            pending = (cp,fields[2])
            continue
        if fields[1].endswith(', Last>'):
            if pending is None or pending[1] != fields[2]:
                raise ValueError('Mismatched UnicodeData range')
            for value in range(pending[0], min(cp+1,65536)):
                categories[value] = fields[2]
            pending = None
            continue
        if cp >= 65536:
            continue
        categories[cp] = fields[2]
        if fields[12]:
            upper[cp] = int(fields[12],16)
        if fields[13]:
            lower[cp] = int(fields[13],16)
    if pending is not None:
        raise ValueError('Unclosed UnicodeData range')
    # These extents are the existing provider ABI, not copied mapping values.
    arrays = dict(ToLowerDataLow=lower[:0x24d0],ToLowerDataHigh=lower[0xff21:],
                  ToUpperDataLow=upper[:0x24ea],ToUpperDataHigh=upper[0xff21:])
    flags = [0]*8192
    for cp, category in enumerate(categories):
        if category == 'Cn':
            flags[cp//8] |= 1 << (cp&7)
    digits = []
    for cp, category in enumerate(categories):
        if category != 'Nd':
            continue
        if digits and digits[-1][1]+1 == cp:
            digits[-1][1] = cp
        else:
            digits.append([cp,cp])
    return arrays, flags, digits, categories


def original_arrays():
    path = ROOT/'build/deps/mono-collation/mono/metadata/char-conversions.h'
    if sha(path) != LGPL_PINNED['mono/metadata/char-conversions.h']:
        raise ValueError('Baseline comparison input differs')
    text = path.read_text(encoding='utf-8')
    arrays = {}
    for name in ['CategoryData','ToLowerDataLow','ToLowerDataHigh','ToUpperDataLow','ToUpperDataHigh']:
        match = re.search(r'\b'+name+r'\s*\[\]\s*=\s*\{(.*?)\}',text,re.S)
        if not match:
            raise ValueError('Baseline comparison array absent')
        arrays[name] = [int(n) for n in re.findall(r'\d+', match.group(1))]
    return arrays


def emit_tables(path, arrays, flags):
    lines = ['// Generated exclusively from official UnicodeData; Unicode License V3.',
             '// No original/Mono mapping values are copied or used as patches.',
             'static constexpr std::uint8_t OtherNotAssignedBits[] = {']
    lines += [','.join(map(str,flags[i:i+32]))+',' for i in range(0,len(flags),32)]
    lines.append('};')
    for name, values in arrays.items():
        lines.append('static constexpr char16_t '+name+'[] = {')
        lines += [','.join(map(str,values[i:i+24]))+',' for i in range(0,len(values),24)]
        lines.append('};')
    path.write_text('\n'.join(lines)+'\n',encoding='utf-8',newline='\n')


def main():
    OUTPUT.mkdir(parents=True, exist_ok=True)
    records = acquire()
    original = original_arrays()
    proof = json.loads((ROOT/'config/phase2-mono-collation-tests.json').read_text(encoding='utf-8'))
    oracle = ROOT/'build/mono-collation-fixtures/edge-mono.stdout'
    if sha(oracle) != proof['edge_cases']['mono_stdout_sha256']:
        raise ValueError('Retained historical oracle changed')
    expected = dict(line.split('\t',1) for line in oracle.read_text(encoding='utf-8-sig').splitlines())
    if len(expected) != 25704:
        raise ValueError('Incomplete required oracle corpus')
    source = ROOT/'src/kairo/common/managed_mono_character_data.cpp'
    inputs = [Path(__file__),source,ROOT/'tests/translator/mono_collation_edge_fixtures.cpp',
              ROOT/'src/kairo/common/semantic_runtime.cpp',ROOT/'src/kairo/common/semantic_runtime.hpp',
              ROOT/'src/kairo/common/managed_collation.cpp',ROOT/'src/kairo/common/managed_collation.hpp',
              ROOT/'src/kairo/common/mono_collator_methods.inc',ROOT/'src/kairo/common/mono_unicode_methods.inc',
              ROOT/'build/generated/mono-collation/mono_collation_tables.inc']
    snapshot = {p.relative_to(ROOT).as_posix():sha(p) for p in inputs}
    env = environment()
    compiler = shutil.which('cl.exe',path=env['PATH'])
    candidates = []
    for version in ['3.1.0','3.0.0']:
        folder = OUTPUT/version
        folder.mkdir(exist_ok=True)
        arrays, flags, digits, categories = from_ucd(DEPS/('UnicodeData-'+version+'.txt'))
        differences = {}
        for name, values in arrays.items():
            base = 0xff21 if name.endswith('High') else 0
            changes = [i for i, (old,new) in enumerate(zip(original[name], values)) if old != new]
            differences[name] = dict(entries=len(values),different_entries=len(changes),
                witnesses=[dict(codepoint=f'U+{i+base:04X}',baseline=original[name][i],ucd=values[i]) for i in changes[:8]])
        category_changes = [cp for cp in range(65536)
                            if (original['CategoryData'][cp]==29) != (categories[cp]=='Cn')]
        decimal_changes = [cp for cp in range(65536)
                           if (original['CategoryData'][cp]==8) != (categories[cp]=='Nd')]
        table = folder/'unicode_character_tables.inc'
        emit_tables(table,arrays,flags)
        # Retain the existing MIT TextInfo algorithm and provider ABI; replace
        # only the data include, with newly generated independent UCD values.
        native = source.read_text(encoding='utf-8')
        native = native[native.index('#include "managed_collation.hpp"'):]
        native = native.replace('"mono_character_tables.inc"','"unicode_character_tables.inc"')
        provider = folder/'unicode_character_provider.cpp'
        provider.write_text('// Private UCD-only candidate; not installed in production.\n'+native,
                            encoding='utf-8',newline='\n')
        exe = folder/'edge.exe'
        command = [compiler,'/nologo','/std:c++17','/EHsc','/fp:strict','/utf-8','/W4',
            '/I'+str(ROOT/'src/kairo/common'),'/I'+str(folder),
            '/I'+str(ROOT/'build/generated/mono-collation'),'/Fe:'+str(exe),'/Fo'+str(folder)+'/',
            ROOT/'src/kairo/common/semantic_runtime.cpp',ROOT/'src/kairo/common/managed_collation.cpp',
            provider,ROOT/'tests/translator/mono_collation_edge_fixtures.cpp']
        result = subprocess.run(list(map(str,command)),cwd=ROOT,env=env,capture_output=True,timeout=120)
        (folder/'compile.log').write_bytes(result.stdout+result.stderr)
        if result.returncode:
            raise RuntimeError('See private Unicode candidate compile.log')
        result = subprocess.run([str(exe)],cwd=ROOT,env=env,capture_output=True,timeout=60)
        (folder/'results.stdout').write_bytes(result.stdout)
        (folder/'results.stderr').write_bytes(result.stderr)
        if result.returncode:
            raise RuntimeError('Unicode candidate execution failed')
        actual = dict(line.split('\t',1) for line in result.stdout.decode('utf-8-sig').splitlines())
        if actual.keys() != expected.keys():
            raise ValueError('Incomplete Unicode candidate observations')
        failed = [key for key in expected if expected[key] != actual[key]]
        by_culture = collections.Counter(re.match(r'c(\d+)a',key).group(1) for key in failed)
        payload = bytes(flags)+b''.join(struct.pack('<H',v) for values in arrays.values() for v in values)
        digits_path = folder/'decimal-digit-ranges.json'
        digits_path.write_text(json.dumps(digits)+'\n',encoding='utf-8',newline='\n')
        row = dict(version=version,construction='UnicodeData fields12/13 simple case mappings; Cn/Nd categories; no baseline patches',
            tables=differences,unassigned_bitmap_different_codepoints=len(category_changes),
            unassigned_bitmap_witnesses=[f'U+{cp:04X}' for cp in category_changes[:8]],
            decimal_digit_different_codepoints=len(decimal_changes),decimal_digit_ranges=len(digits),
            case_and_bitmap_bytes=len(payload),decimal_digit_range_bytes=len(digits)*4,
            generated_payload_sha256=hashlib.sha256(payload).hexdigest(),
            cases=len(expected),passed=len(expected)-len(failed),mismatches=len(failed),
            mismatches_by_culture=dict(by_culture),
            witnesses=[dict(case=k,expected=expected[k],actual=actual[k]) for k in failed[:12]],
            provider_sha256=sha(provider),table_include_sha256=sha(table),
            executable_sha256=sha(exe),stdout_sha256=sha(folder/'results.stdout'),
            inputs_sha256=snapshot,production_changed=False)
        candidates.append(row)
        print(json.dumps(dict(version=version,cases=len(expected),passed=row['passed'],
                              mismatches=len(failed),category_differences=len(category_changes))),flush=True)
    if any(sha(ROOT/name) != value for name,value in snapshot.items()):
        raise ValueError('Source inputs changed during audit; retry under a stable snapshot')
    eligible = [r for r in candidates if r['mismatches']==0 and
                not r['unassigned_bitmap_different_codepoints'] and
                all(t['different_entries']==0 for t in r['tables'].values())]
    report = dict(operation='bounded-official-UCD-regeneration-audit',status='PASS',audit_completed=True,
        adoption='CANDIDATE_EQUIVALENT' if eligible else 'RETAIN_SEPARATE_LGPL_COMPONENT',
        documented_unicode_version='3.1',documented_version_source=FILES['mcs/class/corlib/Documentation/en/System.Globalization/UnicodeCategory.xml'][0],
        documented_version_lines=[19,26],mono_revision=REVISION,unity_revision=UNITY_REVISION,
        version_caveat='Mono/Unity documentation says3.1; historical invariant CLR tables are not identical to raw UCD3.1. UCD3.0 is a bounded historical control, not a second replacement policy.',
        upstream_generation_evidence=dict(path='mono/metadata/ChangeLog',lines=[21010,21020],
            date='2005-04-06',text_summary='Table regeneration corrected to invariant culture; historical CharCategoryTest records generation under MS.NET.'),
        ucd_license='Unicode License V3',files=records,candidates=candidates,
        oracle_stdout_sha256=sha(oracle),baseline_header_sha256=LGPL_PINNED['mono/metadata/char-conversions.h'],
        producer_sha256=sha(Path(__file__)),production_changed=False,
        limitations=['This audit does not choose a project-wide license or establish Android runtime equality.',
                    'No mapping values or corrective patches are copied from the LGPL baseline into the UCD candidate.',
                    'The 25704 observations are synthetic; full array differences are reported to expose gaps outside that sample.',
                    'Production stays on the separately attributed LGPL provider unless an independent equivalent is established.'])
    (ROOT/'config/phase2-unicode-regeneration.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')


if __name__ == '__main__':
    main()
