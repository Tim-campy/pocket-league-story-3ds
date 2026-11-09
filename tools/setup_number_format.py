"""Pin official MIT Mono managed formatting sources; emit only their math tables."""
import argparse,hashlib,json,re,urllib.request
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
REVISION='b6587926c0f146c8b12985744f33a13b39a22d57'
PINNED={'NumberFormatter.cs':'1af3dead8e359aed4f0b28184f22a4633fc71b1be6090bb1e7856bc3949f3f0d','NumberFormatter.jvm.cs':'987ca1330b298b6a90429a0c580ff0c7d16ed45a02ed1da3a41ef6fb3ba6a1b7'}
def sha(data):return hashlib.sha256(data).hexdigest()
def main():
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--apk',required=True,type=Path);args=parser.parse_args()
    if sha(args.apk.read_bytes())!='d557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8':parser.error('Expected authenticated local APK required')
    folder=ROOT/'build/deps/mono-numberformat';folder.mkdir(parents=True,exist_ok=True);sources=[]
    for name,digest in PINNED.items():
        path=folder/name;url='https://raw.githubusercontent.com/Unity-Technologies/mono/'+REVISION+'/mcs/class/corlib/System/'+name
        data=path.read_bytes()if path.exists()else urllib.request.urlopen(url,timeout=30).read()
        if sha(data)!=digest:raise ValueError('Official formatter source hash differs: '+name)
        if not path.exists():path.write_bytes(data)
        if b'Permission is hereby granted, free of charge'not in data[:2200]:raise ValueError('Missing MIT grant in source header')
        sources.append(dict(path=name,sha256=digest,url=url,bytes=len(data),license='MIT/X11'))
    text=(folder/'NumberFormatter.jvm.cs').read_text(encoding='utf8');tables={}
    for name in ('MantissaBitsTable','TensExponentTable'):
        match=re.search(r'\b'+name+r'\s*=\s*\{([^}]+)\}',text,re.S)
        if not match:raise ValueError('Managed MIT table absent: '+name)
        values=[int(token.strip())for token in match[1].split(',')if token.strip()]
        if len(values)!=2048:raise ValueError('Unexpected table extent')
        tables[name]=values
    output=ROOT/'build/generated/mono-numberformat';output.mkdir(parents=True,exist_ok=True)
    code='// GENERATED from official managed MIT NumberFormatter.jvm.cs; see THIRD_PARTY.md.\n'
    for name,cpp,typ,suffix in [('MantissaBitsTable','mono_mantissa_bits','std::uint64_t','ull'),('TensExponentTable','mono_tens_exponent','std::int32_t','')]:
        values=tables[name];code+='static constexpr '+typ+' '+cpp+'[2048]={\n'+''.join(','.join(str(v)+suffix for v in values[i:i+8])+',\n'for i in range(0,len(values),8))+'};\n'
    generated=output/'mono_number_tables.inc';data=code.encode('utf8')
    if not generated.exists()or generated.read_bytes()!=data:generated.write_bytes(data)
    report=dict(operation='official-MIT-mono-number-format-tables',revision=REVISION,sources=sources,license='MIT/X11',tables_payload_bytes=24576,generated=dict(path=generated.relative_to(ROOT).as_posix(),sha256=sha(data),bytes=len(data)),producer_sha256=sha(Path(__file__).read_bytes()),game_assets_used=False,new_LGPL_data=False)
    (ROOT/'config/phase2-number-format-sources.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf8',newline='\n');print(json.dumps(dict(license=report['license'],tables_payload_bytes=24576,new_LGPL_data=False)))
if __name__=='__main__':main()
