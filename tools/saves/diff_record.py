"""Field-level comparison of two port RecordStore records (diagnostic tool, 2026-11-23).

A record file is the CRC (8 bytes, big endian, the port's table in storage.cpp) and
the payload; the port's RecordStore key stays one zero byte, so there is no XOR.
The payload of the game saves is a kairo Property (ints, longs, strings, bins); each
bins[i] is one serialized subsystem (AppData.cs, saveGame: bins[0] players,
bins[1] qmData, ..., bins[14] UserData). Reads only the two files given.

    python tools/saves/diff_record.py RECORD_A RECORD_B
"""
import struct, sys

T = []
for i in range(256):
    v = i
    for _ in range(8): v = (v >> 1) if (v & 1) else (0xedb88320 ^ (v >> 1))
    T.append(v)
def crc(b):
    v = 0xffffffff
    for x in b: v = T[(v ^ x) & 255] ^ (v >> 8)
    return v ^ 0xffffffff

def payload(p):
    raw = open(p, 'rb').read()
    assert crc(raw[8:]) == int.from_bytes(raw[:8], 'big'); return raw[8:]

def prop(b):
    p = 0
    def i32():
        nonlocal p; v = struct.unpack('>i', b[p:p + 4])[0]; p += 4; return v
    out = {}
    n = i32()
    for _ in range(n):
        t = i32(); size = i32(); items = []
        for _ in range(size):
            if t == 1: items.append(i32())
            elif t == 2: items.append(struct.unpack('>q', b[p:p + 8])[0]); p += 8
            else:
                ln = i32(); items.append(None if ln < 0 else b[p:p + ln]); p += max(ln, 0)
        out[t] = items
    assert p == len(b)
    return out

a, c = prop(payload(sys.argv[1])), prop(payload(sys.argv[2]))
names = {1: 'ints', 2: 'lngs', 3: 'strs', 4: 'bins', 0: 'pros'}
for t in sorted(set(a) | set(c)):
    x, y = a.get(t, []), c.get(t, [])
    if len(x) != len(y): print(names[t], 'count', len(x), len(y)); continue
    for i, (u, v) in enumerate(zip(x, y)):
        if u == v: continue
        if t in (1, 2): print(f'{names[t]}[{i}]', u, '->', v)
        elif t == 3: print(f'strs[{i}]', u, '->', v)
        else:
            u = u or b''; v = v or b''
            first = next((k for k in range(min(len(u), len(v))) if u[k] != v[k]), min(len(u), len(v)))
            ndiff = sum(1 for k in range(min(len(u), len(v))) if u[k] != v[k])
            print(f'bins[{i}] len {len(u)} -> {len(v)}, first diff at {first}, differing bytes {ndiff}')
            print('   canon', u[max(0, first - 8):first + 24].hex()); print('   read ', v[max(0, first - 8):first + 24].hex())
