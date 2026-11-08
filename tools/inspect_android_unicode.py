"""Compare official licensed BMP arrays to read-only APK ELF sections in memory.

No original native library or table payload is extracted, loaded, or written.
Only identities, ELF locations and hashes are published. A table match proves
presence/identity, not arbitrary runtime code paths or all Android behavior.
"""
import argparse
import hashlib
import json
from pathlib import Path
import re
import struct
import zipfile
from setup_mono_collation import LGPL_PINNED, REVISION

ROOT=Path(__file__).resolve().parents[1]
EXPECTED='d557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8'
def sha(data):return hashlib.sha256(data).hexdigest()

def readonly_sections(data):
    if len(data)<52 or data[:6]!=b'\x7fELF\x01\x01':raise ValueError('Expected bounded ELF32 little-endian')
    header=struct.unpack_from('<16sHHIIIIIHHHHHH',data)
    if header[11]!=40 or not header[12] or header[13]>=header[12]:raise ValueError('Invalid ELF section header table')
    def bounded(offset,size):
        if offset<0 or size<0 or offset+size>len(data):raise ValueError('Truncated ELF range')
        return data[offset:offset+size]
    table=bounded(header[6],header[11]*header[12])
    sections=[struct.unpack_from('<IIIIIIIIII',table,i*40) for i in range(header[12])]
    names_section=sections[header[13]];names=bounded(names_section[4],names_section[5])
    result=[]
    for section in sections:
        if section[1]!=1 or not(section[2]&2) or section[2]&1:continue
        if section[0]>=len(names):raise ValueError('Invalid ELF section name')
        end=names.find(b'\0',section[0])
        if end<0:raise ValueError('Unterminated ELF section name')
        result.append(dict(name=names[section[0]:end].decode('ascii'),address=section[3],offset=section[4],data=bounded(section[4],section[5])))
    return result

def main():
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--apk',type=Path,required=True);args=parser.parse_args()
    if sha(args.apk.read_bytes())!=EXPECTED:parser.error('Authenticated expected local APK required')
    source=ROOT/'build/deps/mono-collation/mono/metadata/char-conversions.h'
    if sha(source.read_bytes())!=LGPL_PINNED['mono/metadata/char-conversions.h']:raise ValueError('Official BMP source identity differs')
    text=source.read_text(encoding='utf-8');patterns={}
    for name in ['CategoryData','ToLowerDataLow','ToLowerDataHigh','ToUpperDataLow','ToUpperDataHigh']:
        match=re.search(r'\b'+name+r'\s*\[\]\s*=\s*\{(.*?)\}',text,re.S)
        if not match:raise ValueError('Official BMP array absent')
        values=[int(v) for v in re.findall(r'\d+',match.group(1))]
        patterns[name]=bytes(values) if name=='CategoryData' else struct.pack('<'+'H'*len(values),*values)
    variants=[]
    with zipfile.ZipFile(args.apk) as archive:
        for abi in ['x86','armeabi-v7a']:
            member='lib/'+abi+'/libmono.so';data=archive.read(member);sections=readonly_sections(data);matches=[]
            for name,pattern in patterns.items():
                locations=[]
                for section in sections:
                    start=0
                    while True:
                        index=section['data'].find(pattern,start)
                        if index<0:break
                        locations.append(dict(section=section['name'],file_offset=section['offset']+index,address=section['address']+index));start=index+1
                matches.append(dict(name=name,bytes=len(pattern),sha256=sha(pattern),matches=len(locations),locations=locations,
                                    identity='UNIQUE_READONLY_MATCH' if len(locations)==1 else 'UNKNOWN'))
            variants.append(dict(abi=abi,member=member,library_sha256=sha(data),arrays=matches))
    rejected=0
    for bad in [b'',b'\x7fELF\x01\x01'+b'\0'*46]:
        try:readonly_sections(bad)
        except ValueError:rejected+=1
    if rejected!=2:raise ValueError('Malformed ELF accepted')
    matched=sum(a['identity']=='UNIQUE_READONLY_MATCH' for v in variants for a in v['arrays'])
    report=dict(operation='official-Mono-BMP-data-versus-authenticated-Android-ELF',status='PASS' if matched==10 else 'UNKNOWN',
        apk_sha256=EXPECTED,official_source_revision=REVISION,official_source_sha256=sha(source.read_bytes()),
        producer_sha256=sha(Path(__file__).read_bytes()),variants=variants,matched_arrays=matched,total_arrays=10,
        malformed_elf_tests=rejected,original_library_written=False,original_library_executed=False,original_table_bytes_saved=False,
        limitations=['Proves exact official table presence in read-only Android ELF sections, not every runtime path.'])
    (ROOT/'config/phase2-android-unicode.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(dict(status=report['status'],matched_arrays=matched,total_arrays=10,original_library_written=False)))

if __name__=='__main__':main()
