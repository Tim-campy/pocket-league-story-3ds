"""Resolve private allocation stacks using the matching executable/PDB on Windows.

Counts are native new requests, not inferred C# allocations. Raw addresses and
source locations are diagnostic evidence; classification requires source review.
"""
import argparse
import ctypes as C
from ctypes import wintypes as W
import hashlib
import json
from pathlib import Path
import re


class Symbol(C.Structure):
    _fields_ = [('SizeOfStruct', W.ULONG), ('TypeIndex', W.ULONG),
                ('Reserved', C.c_ulonglong * 2), ('Index', W.ULONG),
                ('Size', W.ULONG), ('ModBase', C.c_ulonglong),
                ('Flags', W.ULONG), ('Value', C.c_ulonglong),
                ('Address', C.c_ulonglong), ('Register', W.ULONG),
                ('Scope', W.ULONG), ('Tag', W.ULONG), ('NameLen', W.ULONG),
                ('MaxNameLen', W.ULONG), ('Name', C.c_char * 1)]


class Line(C.Structure):
    _fields_ = [('SizeOfStruct', W.DWORD), ('Key', C.c_void_p),
                ('LineNumber', W.DWORD), ('FileName', C.c_char_p),
                ('Address', C.c_ulonglong)]


class Symbols:
    def __init__(self, image, base):
        self.dbg = C.WinDLL('dbghelp', use_last_error=True)
        self.process = C.WinDLL('kernel32').GetCurrentProcess()
        d = self.dbg
        d.SymInitializeW.argtypes = [W.HANDLE, W.LPCWSTR, W.BOOL]
        d.SymLoadModuleExW.argtypes = [W.HANDLE, W.HANDLE, W.LPCWSTR,
                                      W.LPCWSTR, C.c_ulonglong, W.DWORD,
                                      C.c_void_p, W.DWORD]
        d.SymLoadModuleExW.restype = C.c_ulonglong
        d.SymFromAddr.argtypes = [W.HANDLE, C.c_ulonglong,
                                  C.POINTER(C.c_ulonglong), C.POINTER(Symbol)]
        d.SymGetLineFromAddr64.argtypes = [W.HANDLE, C.c_ulonglong,
                                          C.POINTER(W.DWORD), C.POINTER(Line)]
        d.SymCleanup.argtypes = [W.HANDLE]
        d.SymSetOptions(0x2 | 0x10 | 0x200)  # undecorate, lines, fail critical errors
        if not d.SymInitializeW(self.process, str(image.parent), False):
            raise C.WinError(C.get_last_error())
        if not d.SymLoadModuleExW(self.process, None, str(image), None,
                                  base, 0, None, 0):
            raise C.WinError(C.get_last_error())

    def resolve(self, address):
        buffer = C.create_string_buffer(C.sizeof(Symbol) + 4096)
        symbol = C.cast(buffer, C.POINTER(Symbol))
        symbol.contents.SizeOfStruct = C.sizeof(Symbol)
        symbol.contents.MaxNameLen = 4096
        displacement = C.c_ulonglong()
        result = {'address': address, 'symbol': 'UNKNOWN'}
        # A captured return address points after the allocation call.
        if self.dbg.SymFromAddr(self.process, address - 1,
                                C.byref(displacement), symbol):
            result['symbol'] = C.string_at(C.addressof(buffer) + Symbol.Name.offset,
                                           symbol.contents.NameLen).decode(errors='replace')
            result['displacement'] = displacement.value
        line = Line(); line.SizeOfStruct = C.sizeof(Line)
        offset = W.DWORD()
        if self.dbg.SymGetLineFromAddr64(self.process, address - 1,
                                        C.byref(offset), C.byref(line)):
            result.update(file=line.FileName.decode(errors='replace'), line=line.LineNumber)
        return result

    def close(self):
        self.dbg.SymCleanup(self.process)


def parse(text):
    meta = re.search(r'PLS_ALLOC_TRACE_META base=(\d+) overflow=(\d+) recursive=(\d+)', text)
    if not meta:
        raise ValueError('Completed attribution metadata missing')
    base, overflow, recursive = map(int, meta.groups())
    windows = [dict(index=int(a), count=int(b), bytes=int(c)) for a, b, c in
               re.findall(r'^PLS_ALLOC_TRACE_WINDOW (\d+) (\d+) (\d+)$', text, re.M)]
    sites = []
    for line in text.splitlines():
        if line.startswith('PLS_ALLOC_SITE '):
            values = list(map(int, line.split()[1:]))
            sites.append(dict(count=values[0], bytes=values[1], addresses=values[2:]))
    if len(windows) != 300 or [w['index'] for w in windows] != list(range(300)):
        raise ValueError('Expected all 300 attribution windows')
    if overflow or recursive:
        raise ValueError(f'Incomplete attribution: overflow={overflow}, recursive={recursive}')
    for field in ['count', 'bytes']:
        if sum(s[field] for s in sites) != sum(w[field] for w in windows):
            raise ValueError('Window/site conservation failed: ' + field)
    return base, windows, sites


def source_operations(text, actual_count):
    """Keep measured source events separate from an unproven CLR heap ratio."""
    meta = re.search(r'^PLS_SOURCE_META overflow=(\d+)', text, re.M)
    if not meta:
        return dict(status='NOT_INSTRUMENTED')
    if int(meta[1]):
        raise ValueError('Source operation table overflow')
    windows = [dict(index=int(a), completed=int(b), failed=int(c)) for a,b,c in
               re.findall(r'^PLS_SOURCE_WINDOW (\d+) (\d+) (\d+)$', text, re.M)]
    sites = [dict(kind=k, completed=int(c), failed=int(f), source=s) for k,c,f,s in
             re.findall(r'^PLS_SOURCE_SITE (\S+) (\d+) (\d+) (.+)$', text, re.M)]
    if [w['index'] for w in windows] != list(range(300)):
        raise ValueError('Source window coverage differs')
    for field in ['completed', 'failed']:
        if sum(w[field] for w in windows) != sum(s[field] for s in sites):
            raise ValueError('Source operation conservation failed')
    kinds = {}
    for s in sites:
        kinds[s['kind']] = kinds.get(s['kind'], 0) + s['completed']
    count = sum(kinds.values())
    return dict(status='MEASURED_SOURCE_OPERATIONS', completed=count,
                cpp_new_per_completed_source_operation=actual_count/count if count else None,
                by_kind=kinds, windows=windows,
                top20=sorted(sites, key=lambda s: -s['completed'])[:20], sites=sites,
                clr_heap_equivalence=False,
                limitations=['Only instrumented translated original C# expressions; native API/BCL internals are not source-instrumented.',
                             'Delegate/closure evaluations are not proof of compiler allocation frequency or shared display-class lifetime.',
                             'Generic boxing and concatenation operations can avoid or combine heap allocations.',
                             'Expressions which throw are not counted; they can already have performed partial native allocations.'])


def group_sites(sites):
    """Group call paths at the first port-owned allocation caller, not by count."""
    groups = {}
    for site in sites:
        frames = [f for f in site['stack'] if re.match(r'`*pls::', f['symbol'])]
        frame = frames[0] if frames else site['stack'][1] if len(site['stack'])>1 else site['stack'][0]
        file = frame.get('file','UNKNOWN').replace('\\','/')
        relative = next((file[file.index(marker):] for marker in ['/src/','/tests/'] if marker in file),file)
        key=(frame['symbol'],relative,frame.get('line',0))
        classification='UNKNOWN: original allocation versus translation overhead requires source review'
        symbol=frame['symbol']
        if 'register_managed_object' in symbol:
            classification='INTRODUCED: collector registry node/bucket bookkeeping'
        elif 'Delegate<' in symbol and 'operator()' in symbol:
            classification='INTRODUCED: invocation-time copy of delegate bindings'
        elif 'make_ref<' in symbol:
            classification='MIXED_OR_UNKNOWN: managed object and shared ownership control block; inspect original operation'
        row=groups.setdefault(key,dict(symbol=symbol,file=relative,line=frame.get('line'),count=0,bytes=0,call_paths=0,classification=classification))
        row['count']+=site['count'];row['bytes']+=site['bytes'];row['call_paths']+=1
    return list(groups.values())


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--run', type=Path, required=True)
    p.add_argument('--image', type=Path, required=True)
    p.add_argument('--output', type=Path, required=True)
    args = p.parse_args()
    image = args.image.resolve(strict=True)
    proof = json.loads((args.run / 'result.json').read_text())
    if proof['exit_code'] != 0 or not proof.get('allocation_probe'):
        raise ValueError('Successful separate allocation run required')
    if hashlib.sha256(image.read_bytes()).hexdigest() != proof['executable_sha256']:
        raise ValueError('Executable differs from the measured run')
    log = args.run / 'stdout.log'
    if hashlib.sha256(log.read_bytes()).hexdigest() != proof['stdout_sha256']:
        raise ValueError('Measured log changed')
    text = log.read_text()
    base, windows, sites = parse(text)
    resolver = Symbols(image, base)
    try:
        symbols = {a: resolver.resolve(a) for a in sorted({a for s in sites for a in s['addresses']})}
    finally:
        resolver.close()
    for s in sites:
        s['stack'] = [symbols[a] for a in s.pop('addresses')]
        s['classification'] = 'UNKNOWN: source review required'
    output = dict(scenario=proof['scenario'], frames=len(windows),
                  allocations=sum(w['count'] for w in windows),
                  bytes=sum(w['bytes'] for w in windows), windows=windows,
                  top20_count=sorted(sites, key=lambda s: -s['count'])[:20],
                  top20_bytes=sorted(sites, key=lambda s: -s['bytes'])[:20], sites=sites,
                  executable_sha256=proof['executable_sha256'],
                  original_source_allocation_count='UNKNOWN', runtime_overhead_ratio='UNKNOWN')
    output['source_operations'] = source_operations(text, output['allocations'])
    grouped=group_sites(sites)
    output['allocation_callers']=grouped
    output['top20_callers_count']=sorted(grouped,key=lambda s:-s['count'])[:20]
    output['top20_callers_bytes']=sorted(grouped,key=lambda s:-s['bytes'])[:20]
    output['symbol_limitations']='Link-time identical-code folding can display another template specialization for a shared address; retain source line and stack evidence.'
    args.output.write_text(json.dumps(output, indent=2) + '\n', encoding='utf8')
    print(json.dumps({k: output[k] for k in ['scenario', 'frames', 'allocations', 'bytes']}))


if __name__ == '__main__':
    main()
