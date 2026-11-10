"""Inspect Math.Sin provenance without extracting or executing APK libraries."""
import argparse
import hashlib
import json
from pathlib import Path
import struct
import urllib.request
import zipfile
ROOT=Path(__file__).resolve().parents[1]
EXPECTED='d557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8'
PIN='f08f8a27bfe3aafda4e430ee2365dec73c1070d7'
SOURCE_HASHES={
    'sysmath.c':'d351166f89fc03c2712971acfec19073f1df254bbf231bc7983b5d961b2e85b4',
    'icall-def.h':'2b6e68c19819da0cf44099d4be4edfcd3187f5e7cb2519156978391b976d9fda',
}
def sha(data):return hashlib.sha256(data).hexdigest()

def pinned_source(name,cache_root=ROOT/'build/deps/mono-math-source'):
    expected=SOURCE_HASHES[name]
    path=cache_root/PIN/name
    if path.is_file():
        data=path.read_bytes()
    else:
        url=f'https://raw.githubusercontent.com/mono/mono/{PIN}/mono/metadata/{name}'
        data=urllib.request.urlopen(url,timeout=30).read()
        if sha(data)!=expected:raise ValueError('Pinned source digest differs: '+name)
        path.parent.mkdir(parents=True,exist_ok=True)
        path.write_bytes(data)
    if sha(data)!=expected:raise ValueError('Cached source digest differs: '+name)
    return data

def imports(data):
    if data[:6]!=b'\x7fELF\x01\x01':raise ValueError('Only ELF32 little endian supported')
    header=struct.unpack_from('<16sHHIIIIIHHHHHH',data)
    if header[11]!=40 or header[6]+40*header[12]>len(data):raise ValueError('Invalid section directory')
    sections=[struct.unpack_from('<IIIIIIIIII',data,header[6]+i*40) for i in range(header[12])]
    def bounded(offset,length):
        if offset<0 or length<0 or offset+length>len(data):raise ValueError('Truncated ELF')
        return data[offset:offset+length]
    result=[]
    for si,section in enumerate(sections):
        if section[1]!=11:continue
        if section[9]!=16 or section[5]%16 or section[6]>=len(sections):raise ValueError('Invalid symbol table')
        string_section=sections[section[6]];strings=bounded(string_section[4],string_section[5]);symbols=bounded(section[4],section[5]);targets={}
        for index in range(len(symbols)//16):
            name,address,size,info,other,owner=struct.unpack_from('<IIIBBH',symbols,index*16)
            if name>=len(strings) or strings.find(b'\0',name)<0:raise ValueError('Invalid symbol string')
            name=strings[name:strings.find(b'\0',name)].decode('utf-8','strict')
            if name=='sin':
                if owner!=0 or address!=0:raise ValueError('Expected an undefined native sin import')
                targets[index]=dict(name=name,symbol_index=index,value=address,section_index=owner,relocations=[])
        for relocations in sections:
            if relocations[1]!=9 or relocations[6]!=si:continue
            raw=bounded(relocations[4],relocations[5])
            if len(raw)%8:raise ValueError('Invalid REL table')
            for offset in range(0,len(raw),8):
                address,info=struct.unpack_from('<II',raw,offset)
                if info>>8 in targets:targets[info>>8]['relocations'].append(dict(address=address,type=info&255))
        result.extend(targets.values())
    if len(result)!=1 or not result[0]['relocations']:raise ValueError('Native sin import absent or ambiguous')
    return result[0]
def main():
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--apk',required=True,type=Path);args=parser.parse_args()
    if sha(args.apk.read_bytes())!=EXPECTED:parser.error('Authenticated original APK required')
    sources=[]
    for name,needle in [('sysmath.c','return sin (x);'),('icall-def.h','ICALL(MATH_14, "Sin", ves_icall_System_Math_Sin)')]:
        url=f'https://raw.githubusercontent.com/mono/mono/{PIN}/mono/metadata/{name}'
        data=pinned_source(name);lines=data.decode().splitlines()
        hits=[i+1 for i,line in enumerate(lines) if needle in line]
        if len(hits)!=1:raise ValueError('Pinned source mapping changed')
        sources.append(dict(url=url,revision=PIN,sha256=sha(data),line=hits[0],finding=needle))
    variants=[]
    with zipfile.ZipFile(args.apk) as archive:
        for abi in ['x86','armeabi-v7a']:
            member='lib/'+abi+'/libmono.so';data=archive.read(member)
            variants.append(dict(abi=abi,member=member,library_sha256=sha(data),native_import=imports(data)))
    report=dict(operation='static-Android-Math-Sin-provenance',status='PASS',producer_sha256=sha(Path(__file__).read_bytes()),apk_sha256=EXPECTED,sources=sources,variants=variants,
        original_libraries_extracted=False,original_libraries_executed=False,android_negative_zero_result='UNKNOWN',
        interpretation='Pinned upstream icall forwards to C sin; both APK runtimes import sin. This does not prove the stripped internal wrapper matches source or execute Android libm.',
        windows_fixture_discrepancy='Unity SDK Mono Math.Sin(-0.0) observed +0.0, native std::sin and modern CLR observed -0.0; no signed-zero normalization adopted.')
    (ROOT/'config/phase2-android-math.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(dict(status='PASS',variants=len(variants),android_negative_zero='UNKNOWN')))
if __name__=='__main__':main()
