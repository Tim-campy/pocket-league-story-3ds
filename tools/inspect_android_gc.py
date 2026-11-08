"""Authenticate the local APK and statically inspect GC max-generation exports.

No native library is extracted, loaded or executed. Only symbol locations,
decoded instruction descriptions and hashes are published as analysis evidence.
"""
import argparse
import hashlib
import json
from pathlib import Path
import struct
import zipfile

ROOT=Path(__file__).resolve().parents[1]
EXPECTED='d557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8'
def sha(data):return hashlib.sha256(data).hexdigest()
def export(data,name):
    if len(data)<52 or data[:6]!=b'\x7fELF\x01\x01':raise ValueError('Expected ELF32 little endian')
    h=struct.unpack_from('<16sHHIIIIIHHHHHH',data)
    if h[11]!=40 or h[12]==0:raise ValueError('Unsupported section headers')
    def bounded(offset,size):
        if offset<0 or size<0 or offset+size>len(data):raise ValueError('Truncated ELF range')
        return data[offset:offset+size]
    table=bounded(h[6],h[11]*h[12])
    sections=[struct.unpack_from('<IIIIIIIIII',table,i*40) for i in range(h[12])]
    found=set()
    for section in sections:
        if section[1] not in (2,11):continue
        if section[9]!=16 or section[5]%16 or section[6]>=len(sections):raise ValueError('Invalid symbol table')
        strings=sections[section[6]];strings=bounded(strings[4],strings[5])
        symbols=bounded(section[4],section[5])
        for i in range(0,len(symbols),16):
            ni,address,size,info,other,index=struct.unpack_from('<IIIBBH',symbols,i)
            if ni>=len(strings):raise ValueError('Invalid symbol name')
            end=strings.find(b'\0',ni)
            if end<0:raise ValueError('Unterminated symbol')
            if strings[ni:end].decode('utf-8','strict')!=name:continue
            if (info&15)!=2 or not size or index>=len(sections):raise ValueError('Not a bounded function symbol')
            section=sections[index]
            start=address&~1 if h[2]==40 else address
            if start<section[3] or start+size>section[3]+section[5]:raise ValueError('Function outside its section')
            offset=section[4]+start-section[3]
            found.add((address,offset,size,bounded(offset,size)))
    if len(found)!=1:raise ValueError('Function identity is absent or ambiguous')
    address,offset,size,code=found.pop()
    return h[2],address,offset,size,code

def decode_return(machine,address,code):
    trace=[]
    if machine==3:
        # Tiny x86 decoder for ordinary frame setup, constant-EAX and return.
        i=0;eax=None;returned=False
        while i<len(code):
            if code[i]==0x55:trace.append('push ebp');i+=1
            elif code[i:i+2]==bytes([0x89,0xe5]):trace.append('mov ebp, esp');i+=2
            elif code[i]==0xb8 and i+5<=len(code):
                eax=struct.unpack_from('<I',code,i+1)[0];trace.append('mov eax, immediate '+str(eax));i+=5
            elif code[i]==0x5d:trace.append('pop ebp');i+=1
            elif code[i]==0xc3 and i==len(code)-1:trace.append('ret');returned=True;i+=1
            else:raise ValueError('Unrecognized x86 instruction: conclusion UNKNOWN')
        if not returned or eax is None:raise ValueError('Return not established')
        return eax,trace
    if machine==40 and address%2==0 and len(code)%4==0:
        known={};returned=False
        for i in range(0,len(code),4):
            word=struct.unpack_from('<I',code,i)[0]
            if word==0xe52db004:trace.append('push fp')
            elif word==0xe28db000:trace.append('add fp, sp, #0')
            elif word==0xe24bd000:trace.append('sub sp, fp, #0')
            elif word==0xe49db004:trace.append('pop fp')
            elif word==0xe12fff1e and i==len(code)-4:trace.append('bx lr');returned=True
            elif word&0xffe00000==0xe3a00000:
                reg=(word>>12)&15;rotate=((word>>8)&15)*2;value=word&255
                if rotate:value=((value>>rotate)|(value<<(32-rotate)))&0xffffffff
                known[reg]=value;trace.append('mov r'+str(reg)+', immediate '+str(value))
            elif word&0xffeffff0==0xe1a00000:
                reg=(word>>12)&15;source=word&15
                if source not in known:raise ValueError('Unknown source register')
                known[reg]=known[source];trace.append('mov r'+str(reg)+', r'+str(source))
            else:raise ValueError('Unrecognized ARM instruction: conclusion UNKNOWN')
        if not returned or 0 not in known:raise ValueError('Return not established')
        return known[0],trace
    raise ValueError('Unsupported machine or Thumb mode: conclusion UNKNOWN')

def main():
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--apk',required=True,type=Path)
    args=parser.parse_args()
    if sha(args.apk.read_bytes())!=EXPECTED:parser.error('Authenticated local APK required')
    rows=[]
    with zipfile.ZipFile(args.apk) as archive:
        for abi in ['x86','armeabi-v7a']:
            member='lib/'+abi+'/libmono.so';data=archive.read(member)
            machine,address,offset,size,code=export(data,'mono_gc_max_generation')
            result,trace=decode_return(machine,address,code)
            if result!=0:raise ValueError('Previously expected nongenerational GC contract changed')
            rows.append(dict(abi=abi,member=member,library_sha256=sha(data),symbol='mono_gc_max_generation',
                address=address,file_offset=offset,function_size=size,function_sha256=sha(code),
                complete_function_decoded=True,instructions=trace,return_value=result))
    # Decoder rejection is exercised with own synthetic ISA bytes, not game data.
    rejected=False
    try:decode_return(3,0,bytes([0xcc,0xc3]))
    except ValueError:rejected=True
    if not rejected:raise ValueError('Unsafe decoder fallback')
    report=dict(operation='authenticated-APK-static-Android-GC-export-analysis',status='PASS',
        apk_sha256=EXPECTED,producer_sha256=sha(Path(__file__).read_bytes()),variants=rows,
        rejected_unknown_instruction_test=True,original_library_extracted=False,original_library_executed=False,
        limitations=['Establishes max generation zero on these two APK runtimes only; not all collector behavior.',
                    'REA native ELF analysis unavailable on this Windows provider; bounded ELF symbol and tiny ISA decoders used.'])
    (ROOT/'config/phase2-android-gc.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(dict(status='PASS',variants=len(rows),max_generation=0,original_library_extracted=False)))

if __name__=='__main__':main()
