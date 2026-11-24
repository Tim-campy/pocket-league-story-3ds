"""Compare two trees of object files: machine code and data must be identical.

    python tools/compare_objects.py BEFORE AFTER [--filter src/game --filter common/generated]

COFF (.obj, MSVC, normal and /bigobj): the header timestamp is ignored; every section that is not
debug information (.debug$*) is compared byte for byte with its relocations, and the symbol table
is compared with the auxiliary records of debug sections masked (their length and checksum follow
the debug data). ELF (.o, devkitARM): every section except .debug* / .rel(a).debug* is compared
(name, type, flags, size, bytes), the symbol table included. Debug information carries line
numbers, which formatting changes by design; it never reaches the code.

Prints one JSON summary; exit 1 if any object differs, with the differing sections listed.
"""
import argparse, json, struct, sys
from pathlib import Path


def coff_sections(data):
    if data[:4] == b'\x00\x00\xff\xff':                        # ANON_OBJECT_HEADER_BIGOBJ
        nsec, symptr, nsym = struct.unpack_from('<III', data, 44); hdr = 56; symsize = 20
    else:
        _, nsec, _, symptr, nsym = struct.unpack_from('<HHIII', data, 0)
        opt = struct.unpack_from('<H', data, 16)[0]; hdr = 20 + opt; symsize = 18
    secs = []
    for k in range(nsec):
        o = hdr + 40 * k
        name = data[o:o + 8].rstrip(b'\x00').decode('latin1')
        size, ptr, relptr = struct.unpack_from('<III', data, o + 16)[0:1] + struct.unpack_from('<II', data, o + 20)
        nrel = struct.unpack_from('<H', data, o + 32)[0]; chars = struct.unpack_from('<I', data, o + 36)[0]
        raw = data[ptr:ptr + size] if ptr else b''
        rel = data[relptr:relptr + 10 * nrel] if nrel else b''
        secs.append(dict(name=name, chars=chars, raw=raw, rel=rel))
    # Symbol table with the aux records of debug sections masked.
    syms = bytearray(data[symptr:symptr + symsize * nsym]); k = 0
    while k < nsym:
        o = k * symsize
        secnum = struct.unpack_from('<i' if symsize == 20 else '<h', syms, o + 12)[0]
        naux = syms[o + symsize - 1]
        if 0 < secnum <= len(secs) and secs[secnum - 1]['name'].startswith('.debug') and naux:
            syms[o + symsize:o + symsize * (1 + naux)] = bytes(symsize * naux)
        k += 1 + naux
    strtab = data[symptr + symsize * nsym:]
    return secs, bytes(syms), strtab


def coff_digest(path):
    data = path.read_bytes(); secs, syms, strtab = coff_sections(data)
    parts = {f'{i}:{s["name"]}': (s['chars'], s['raw'], s['rel']) for i, s in enumerate(secs) if not s['name'].startswith('.debug')}
    parts['<symbols>'] = syms; parts['<strings>'] = strtab
    return parts


def elf_digest(path):
    data = path.read_bytes()
    assert data[:4] == b'\x7fELF' and data[4] == 1, path            # ELF32 (ARM)
    e = '<' if data[5] == 1 else '>'
    shoff = struct.unpack_from(e + 'I', data, 32)[0]; shentsize, shnum, shstrndx = struct.unpack_from(e + 'HHH', data, 46)
    hdrs = [struct.unpack_from(e + 'IIIIIIIIII', data, shoff + shentsize * k) for k in range(shnum)]
    names = hdrs[shstrndx]
    def name(h): o = names[4] + h[0]; return data[o:data.index(b'\x00', o)].decode('latin1')
    parts = {}
    for i, h in enumerate(hdrs):
        n = name(h)
        if n.startswith(('.debug', '.rel.debug', '.rela.debug')): continue
        nm, typ, flags, addr, off, size = h[:6]
        body = b'' if typ == 8 else data[off:off + size]               # SHT_NOBITS
        parts[f'{i}:{n}'] = (typ, flags, size, body)
    return parts


def digest(path):
    return coff_digest(path) if path.suffix == '.obj' else elf_digest(path)


def main():
    ap = argparse.ArgumentParser(); ap.add_argument('before'); ap.add_argument('after')
    ap.add_argument('--filter', action='append', default=[]); args = ap.parse_args()
    before, after = Path(args.before), Path(args.after)
    files = sorted(p.relative_to(before) for p in before.rglob('*') if p.suffix in ('.obj', '.o'))
    if args.filter: files = [f for f in files if any(x in f.as_posix() for x in args.filter)]
    same = 0; differ = {}; missing = []
    for rel in files:
        b = after / rel
        if not b.exists(): missing.append(rel.as_posix()); continue
        if (before / rel).read_bytes() == b.read_bytes(): same += 1; continue
        x, y = digest(before / rel), digest(b)
        if x == y: same += 1; continue
        differ[rel.as_posix()] = sorted(k for k in set(x) | set(y) if x.get(k) != y.get(k))
    print(json.dumps(dict(objects=len(files), identical_code_and_data=same, different=differ, missing=missing), indent=1))
    return 1 if differ or missing else 0


if __name__ == '__main__':
    sys.exit(main())
