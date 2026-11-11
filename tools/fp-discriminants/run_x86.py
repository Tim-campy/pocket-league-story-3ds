"""Compile discriminating C# with the pinned Unity smcs and run Mono x86.

Outputs and assemblies are private. Model predictions are computed separately
from the oracle; a local spill/inlining decision must not be inferred from a
single match. In particular x87 can retain more precision than ARM binary64.
"""
import hashlib
import json
import os
from pathlib import Path
import struct
import subprocess
from fractions import Fraction

ROOT = Path(__file__).resolve().parents[2]
MONO = Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono')


def single(value):
    return struct.unpack('<f', struct.pack('<f', value))[0]


def bits(value):
    return struct.pack('>d', value).hex().upper()


def predictions():
    rows = []
    for a, b in [(16777216., 1.), (-16777216., -1.), (9007199254740992., 1.), (-9007199254740992., -1.)]:
        for name in ['expression', 'local', 'field', 'array', 'argument',
                     'return', 'inlining', 'loop', 'explicit_conversion']:
            models = {}
            for model in ['strict_binary32', 'binary64_narrow_storage_and_calls',
                          'binary64_retained_locals', 'binary64_retained_inline',
                          'binary64_retained_return', 'x87_retained_return']:
                wide = model != 'strict_binary32'
                retained_local = model in ['binary64_retained_locals', 'binary64_retained_inline']
                retained_inline = model == 'binary64_retained_inline'
                # These integer inputs and sums fit the x87 64-bit significand
                # exactly; Fraction supplies that prediction without relying
                # on Python's binary64 intermediate rounding.
                extended = model == 'x87_retained_return'
                value = Fraction(a) + Fraction(b) if extended else a + b
                if not wide:
                    value = single(value)
                narrow = name in ['field', 'array', 'argument', 'return', 'explicit_conversion']
                if name == 'return' and model in ['binary64_retained_return', 'x87_retained_return']:
                    narrow = False
                narrow |= name == 'local' and not retained_local
                narrow |= name == 'inlining' and not retained_inline
                if narrow:
                    value = single(value)
                if name == 'loop':
                    value = a
                    for _ in range(3):
                        value += b
                        if not retained_local:
                            value = single(value)
                result = float(value - (Fraction(a) if extended else a))
                models[model] = dict(value=result, binary64_bits=bits(result))
            rows.append(dict(case=name, a=a, b=b, models=models))
    return rows


def main():
    output = ROOT/'build/fp-discriminants-x86'
    output.mkdir(parents=True, exist_ok=True)
    source = ROOT/'tools/fp-discriminants/FloatDiscriminants.cs'
    exe = output/'FloatDiscriminants.exe'
    mono = MONO/'bin/mono.exe'
    compiler = MONO/'lib/mono/unity/smcs.exe'
    env = dict(os.environ, MONO_PATH=str(MONO/'lib/mono/unity'), MONO_CFG_DIR=str(MONO/'etc'))
    command = [str(mono), str(compiler), '-optimize+', '-debug-', '-out:'+str(exe), str(source)]
    subprocess.run(command, env=env, check=True)
    result_path = output/'results.tsv'
    subprocess.run([str(mono), str(exe), str(result_path), str(output/'cil.tsv')], env=env, check=True)
    rows = predictions()
    actual = {}
    for line in result_path.read_text().splitlines()[1:]:
        name, a, b, value, binary = line.split('\t')
        actual[(name, single(float(a)), single(float(b)))] = dict(value=float(value), binary64_bits=binary)
    for row in rows:
        row['observed'] = actual[(row['case'], row['a'], row['b'])]
        row['matching_models'] = [name for name, expected in row['models'].items()
                                  if expected['binary64_bits'] == row['observed']['binary64_bits']]
    files = [source, mono, compiler, MONO/'lib/mono/unity/mscorlib.dll', exe]
    report = dict(status='MEASURED_X86_ONLY', compile_command=command, rows=rows,
                  hashes={str(p):hashlib.sha256(p.read_bytes()).hexdigest() for p in files},
                  limitation='x87 register retention and JIT inlining/spilling may differ from ARM; production rule unchanged.')
    (output/'report.json').write_text(json.dumps(report, indent=2)+'\n')
    print(json.dumps(dict(status=report['status'], cases=len(rows),
                         results=[dict(case=r['case'], a=r['a'], value=r['observed']['value'],
                                       matching_models=r['matching_models']) for r in rows]), indent=2))


if __name__ == '__main__':
    main()
