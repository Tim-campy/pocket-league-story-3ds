"""Exclusive sampled-IP attribution within authenticated null-host frame windows.

Inline frames come from DbgHelp/PDB, never inferred from the containing method.
Unknown native helpers remain unknown rather than being charged to game logic.
"""
import argparse
import bisect
import collections
import csv
import ctypes as C
from ctypes import wintypes as W
import hashlib
import json
from pathlib import Path
from allocation_sites import Symbols, Symbol, Line


class InlineSymbols(Symbols):
    def __init__(self, image, base):
        super().__init__(image, base)
        d = self.dbg
        d.SymAddrIncludeInlineTrace.argtypes = [W.HANDLE, C.c_ulonglong]
        d.SymAddrIncludeInlineTrace.restype = W.DWORD
        d.SymQueryInlineTrace.argtypes = [W.HANDLE, C.c_ulonglong, W.DWORD,
            C.c_ulonglong, C.c_ulonglong, C.POINTER(W.DWORD), C.POINTER(W.DWORD)]
        d.SymFromInlineContext.argtypes = [W.HANDLE, C.c_ulonglong, W.ULONG,
            C.POINTER(C.c_ulonglong), C.POINTER(Symbol)]
        d.SymGetLineFromInlineContext.argtypes = [W.HANDLE, C.c_ulonglong,
            W.ULONG, C.c_ulonglong, C.POINTER(W.DWORD), C.POINTER(Line)]

    def frame(self, address, context=None):
        buffer = C.create_string_buffer(C.sizeof(Symbol)+4096)
        symbol = C.cast(buffer, C.POINTER(Symbol))
        symbol.contents.SizeOfStruct = C.sizeof(Symbol)
        symbol.contents.MaxNameLen = 4096
        displacement = C.c_ulonglong()
        result = {'symbol': 'UNKNOWN', 'inline_context': context}
        if context is None:
            ok = self.dbg.SymFromAddr(self.process, address, C.byref(displacement), symbol)
        else:
            ok = self.dbg.SymFromInlineContext(self.process, address, context, C.byref(displacement), symbol)
        if ok:
            result['symbol'] = C.string_at(C.addressof(buffer)+Symbol.Name.offset,
                symbol.contents.NameLen).decode(errors='replace')
        line = Line(); line.SizeOfStruct = C.sizeof(Line); offset = W.DWORD()
        if context is None:
            ok = self.dbg.SymGetLineFromAddr64(self.process, address, C.byref(offset), C.byref(line))
        else:
            ok = self.dbg.SymGetLineFromInlineContext(self.process, address, context, 0, C.byref(offset), C.byref(line))
        if ok:
            result.update(file=line.FileName.decode(errors='replace'), line=line.LineNumber)
        return result

    def resolve_ip(self, address):
        count = self.dbg.SymAddrIncludeInlineTrace(self.process, address)
        frames = []
        if count:
            context, index = W.DWORD(), W.DWORD()
            if not self.dbg.SymQueryInlineTrace(self.process, address, 0, address,
                    address, C.byref(context), C.byref(index)):
                return {'frames': [self.frame(address)], 'inline_error': C.get_last_error()}
            frames = [self.frame(address, context.value+i) for i in range(count)]
        return {'frames': frames+[self.frame(address)], 'inline_count': count}


def category(frames):
    # Inspect innermost frames first; a standard-library implementation can be
    # assigned to its first owning runtime/API frame, but not blindly to game.
    for frame in frames:
        s = frame['symbol']; f = frame.get('file', '').replace('\\', '/').lower()
        if any(x in s for x in ('_Incref', '_Decref', '_Incwref', '_Decwref', '_Interlocked', '_MT_INCR', '_MT_DECR')):
            return 'runtime/refcount'
        if s.startswith(('std::_Ptr_base<', 'std::shared_ptr<', 'std::weak_ptr<')):
            return 'runtime/reference-copy-other'
        if any(x in s for x in ('operator new', 'operator delete', '_Destroy', '_Delete_this', 'gc_register', 'gc_collect', 'make_ref<')):
            return 'runtime/allocation-destruction'
        if 'managed_type_init' in f or 'TypeInitialization' in s or 'type_init_detail' in s or '::cs_init_' in s:
            return 'runtime/type-init'
        if any(x in s for x in ('__Cxx', '_CxxThrow', 'Exception::', 'run_finally')):
            return 'runtime/exceptions'
        if s.startswith('pls::cs::String') or any(x in f for x in ('managed_string', 'managed_encoding', 'managed_float_format')):
            return 'runtime/strings'
        if s.startswith('pls::cs::Array') and any(x in s for x in ('::at', '::get_Item', '::set_Item', '::operator[]', '::length', '::require')):
            return 'runtime/array-access-and-bounds'
        if 'semantic_runtime' in f or s.startswith('pls::cs::'):
            return 'runtime/conversions-generics-other'
        if 'portable_generated' in f or s.startswith(('pls::portable::', 'pls::generated::')):
            return 'portable-kairo'
        if '/kairo/' in f:
            name = Path(f).stem
            if name in ('font', 'managed_collation'): return 'native-kairo/text-metrics'
            if name in ('mesh', 'graphics', 'canvas', 'image_lifetime'): return 'native-kairo/drawing-batches'
            if name in ('offscreen', 'capture'): return 'native-kairo/offscreen'
            if name in ('input', 'text_input'): return 'native-kairo/input'
            if name in ('sound', 'audio'): return 'native-kairo/sound'
            return 'native-kairo/other'
        if 'game_generated' in f or s.startswith('pls::game::'):
            # Do not hide an unidentified inlined STL operation in the caller.
            return 'game-logic' if frame is frames[0] else 'unattributed/inlined-library'
        if '__security_check_cookie' in s: return 'system/compiler-security'
    return 'unattributed/native'


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--samples', type=Path, required=True)
    p.add_argument('--stdout', type=Path, required=True)
    p.add_argument('--image', type=Path, required=True)
    p.add_argument('--output', type=Path, required=True)
    a = p.parse_args()
    receipt = json.loads((a.stdout.parent/'result.json').read_text())
    digest = lambda path: hashlib.sha256(path.read_bytes()).hexdigest()
    if receipt['executable_sha256'] != digest(a.image) or receipt['stdout_sha256'] != digest(a.stdout):
        raise ValueError('Run/image evidence differs')
    if receipt.get('allocation_probe') or receipt.get('method_instrumentation') or receipt.get('memory_categories'):
        raise ValueError('Instrumented timing executable is inadmissible')
    windows = [tuple(map(int, line.split('=')[1].split(','))) for line in
        a.stdout.read_text().splitlines() if line.startswith('PLS_NULL_QPC=')]
    if len(windows) != 300: raise ValueError('Exactly 300 frames required')
    starts = [w[1] for w in windows]
    rows = list(csv.reader(a.samples.open(encoding='utf-8-sig')))
    images = [(int(r[1]), int(r[2]), r[3]) for r in rows if r[0] == 'M']
    target = next(x for x in images if Path(x[2]).name == a.image.name)
    resolver = InlineSymbols(a.image.resolve(), target[0])
    ips = collections.Counter(); outside = 0; nonprocess = 0
    for r in rows:
        if r[0] != 'P': continue
        qpc, thread, ip, weight, non = map(int, r[1:])
        i = bisect.bisect_right(starts, qpc)-1
        if i < 0 or qpc >= windows[i][2]: outside += weight; continue
        if non: nonprocess += weight; continue
        ips[ip] += weight
    counts = collections.Counter(); details = []
    for ip, weight in ips.items():
        module = next((m for m in images if m[0] <= ip < m[0]+m[1]), None)
        if module == target:
            info = resolver.resolve_ip(ip)
            cat = 'unattributed/inline-error' if info.get('inline_error') else category(info['frames'])
        else:
            info = {'module': module[2] if module else 'UNKNOWN'}
            cat = 'system' if module or ip >= (1 << 63) else 'unattributed/module'
        counts[cat] += weight
        details.append(dict(ip=ip, weight=weight, category=cat, **info))
    if nonprocess: counts['system/interrupt'] += nonprocess
    total = sum(counts.values())
    result = dict(samples=total, outside_frames=outside, frames=300,
        metric='equal-period sampled-IP count, exclusive categories',
        image_sha256=digest(a.image), stdout_sha256=digest(a.stdout), samples_sha256=digest(a.samples),
        pdb_sha256=hashlib.sha256(a.image.with_suffix('.pdb').read_bytes()).hexdigest(),
        categories=[dict(category=c, samples=n, percent=n*100/total) for c,n in counts.most_common()],
        inline_ips=sum(bool(d.get('inline_count')) for d in details),
        details=sorted(details, key=lambda d: -d['weight']))
    resolver.close()
    a.output.write_text(json.dumps(result, indent=2)+'\n', encoding='utf-8')
    print(json.dumps({k:v for k,v in result.items() if k!='details'}))


if __name__ == '__main__': main()
