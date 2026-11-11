"""Disassemble locally captured Mono ARM machine code; never publish dumps."""
import argparse
import hashlib
import json
import importlib.metadata
from pathlib import Path
import capstone

ROOT = Path(__file__).resolve().parents[2]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--results', required=True, type=Path)
    args = parser.parse_args()
    folder = args.results.resolve()
    if not folder.is_relative_to(ROOT / 'build'):
        raise ValueError('Private results must stay under build/')
    report = json.loads((folder / 'report.json').read_text())
    status = (folder / 'status.txt').read_text()
    if 'machine=armv7l' not in status or 'VFP=1' not in status:
        raise ValueError('Missing ARM/VFP guest evidence')
    decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    rows = []
    for path in sorted(folder.glob('jit-*.bin')):
        data = path.read_bytes()
        digest = hashlib.sha256(data).hexdigest()
        if digest != report['result_hashes']['files/probe/' + path.name]:
            raise ValueError('Changed JIT capture: ' + path.name)
        instructions = list(decoder.disasm(data, 0))
        listing = '\n'.join(f'{i.address:04x}: {i.mnemonic} {i.op_str}' for i in instructions)
        (folder / (path.stem + '.asm.txt')).write_text(listing + '\n')
        rows.append(dict(method=path.stem, sha256=digest, bytes=len(data),
                         decoded_bytes=sum(i.size for i in instructions),
                         vfp=[f'{i.address:04x}: {i.mnemonic} {i.op_str}'
                              for i in instructions if i.mnemonic.startswith('v')]))
    if len(rows) != 10 or any(not r['vfp'] for r in rows):
        raise ValueError('Missing native VFP instructions in one or more probes')
    distribution=importlib.metadata.distribution('capstone')
    dependencies={str(p):hashlib.sha256(distribution.locate_file(p).read_bytes()).hexdigest()
                  for p in distribution.files if str(p).endswith(('.dll','LICENSE.TXT'))}
    evidence = dict(status='ARM_VFP_MACHINE_CODE_OBSERVED', methods=rows,
                    capstone_version=capstone.__version__,
                    capstone_package_version=distribution.version,dependency_hashes=dependencies,
                    limitation='Guest ARM code is emulated by QEMU on the host; this proves the Mono ARM VFP JIT path, not hardware timing.')
    (folder / 'jit-analysis.json').write_text(json.dumps(evidence, indent=2) + '\n')
    print(json.dumps(evidence, indent=2))


if __name__ == '__main__':
    main()
