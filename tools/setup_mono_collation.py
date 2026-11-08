"""Acquire pinned official MIT class-library collation sources and inspect external metadata.

Does not load game code, install a runtime, or copy an original DLL. Downloaded
files live in ignored build/deps. The explicitly authorized historical BMP
data has separate GNU Library GPLv2 provenance; it is never labeled MIT.
"""
import argparse
import hashlib
import json
import os
from pathlib import Path
import subprocess
import sys
import urllib.request

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths

REVISION = 'f08f8a27bfe3aafda4e430ee2365dec73c1070d7'
UNITY_REVISION = 'b6587926c0f146c8b12985744f33a13b39a22d57'
BASE = 'https://raw.githubusercontent.com/mono/mono/'+REVISION+'/'
PINNED = {
    'LICENSE': '4c6abe1c24230a058f13f47c94d1ce106a47fc0177b7a3e13dc5a6fe9541fac5',
    'mcs/MIT.X11': 'c493ac4f1910850f33e9115002ce7e7c9bc8dfe43f4bbc708d8938dd1cd76f92',
    'mcs/class/corlib/Mono.Globalization.Unicode/SimpleCollator.cs': '182227d686f9a9c8e54cbc813f7054ede1788e19c1c4c18c0127759e3e22ffb5',
    'mcs/class/corlib/Mono.Globalization.Unicode/MSCompatUnicodeTable.cs': '210e804915cd8bad3822edae323f4336b4dd106de17547957aa6777f3cf140de',
    'mcs/class/corlib/Mono.Globalization.Unicode/MSCompatUnicodeTableUtil.cs': '1ffd47cba10d72fd1d4283bc5b84de446e90c4e99c9f80a55eed57d03921e153',
    'mcs/class/corlib/Mono.Globalization.Unicode/CodePointIndexer.cs': 'bc2baee883a8a7db7e24da06942ecab13503fe1656d703b3f6772885eff6e75c',
    'mcs/class/corlib/System/String.cs': '011015d86d73fe057f8eefbb8f84f600f112fe324b5d290fdc8cd14dfda26547',
    'mcs/class/corlib/System/Char.cs': 'c8943b0e1e1b06cb0d56a8005725f6d59818dd5c419bcec29966431e7486a3f9',
    'mcs/class/corlib/System.Globalization/TextInfo.cs': '3b498c1f9d7b9e56d6ce7f58dcc6e971d6a21609d8891e7698df5619c7c698ee',
    'mcs/class/corlib/System.Globalization/CompareInfo.cs': '5c7d2edf043dc8294e870dbdb7c6e0dbe0e87a16a76feda203c980b91c1173f2',
    'mcs/class/corlib/resources/collation.core.bin': '418209a0f7e0380c6c96279fdcc7f293103a759f8da72715b41a7dfff97d7d12',
    'mcs/class/corlib/resources/collation.tailoring.bin': '959690bf532d5156d8d8530615c735fe288c01f8f878573840978de499d78d07',
    'mcs/class/corlib/resources/collation.cjkJA.bin': '6394132f0fcdc80c6e8960a65ec032d42b9734aed8463b28d81c86ea30cd26c9',
    'mcs/class/corlib/resources/collation.cjkCHS.bin': 'ba23e608d99505649001591fb134f85591e0b201b29b0406864eea6e5802350c',
    'mcs/class/corlib/resources/collation.cjkCHT.bin': 'b3a7ee51b79123da5175f1c3c8903f6252b86093f5f17be3b2960126253de616',
    'mcs/class/corlib/resources/collation.cjkKO.bin': 'd84e0ce625f046824f38c3436bab9324990e2c8cbbaa5cd10bb368ebba741f5a',
    'mcs/class/corlib/resources/collation.cjkKOlv2.bin': '22d987df85d3c492121ff0653530cc080205c3257885256f1d060b92d93aabbc',
}
LGPL_PINNED = {
    'mono/metadata/char-conversions.h': 'b73fbd2efc19dc6e6104448383e3859595264f210e5e0dbdd19e691712477d83',
    'COPYING.LIB': 'e0db38a37e8178f2032d4e6964e9108d99242b76bedc7818cb39cd856de96389',
}

def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apk', type=Path, required=True)
    args = parser.parse_args()
    expected = 'd557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8'
    if sha(args.apk) != expected:
        parser.error('Authenticated expected local APK is required')
    folder = ROOT/'build/deps/mono-collation'
    folder.mkdir(parents=True, exist_ok=True)
    records = []
    for relative, digest in {**PINNED,**LGPL_PINNED}.items():
        path = folder/relative
        if not path.is_file() or sha(path) != digest:
            data = urllib.request.urlopen(BASE+relative, timeout=30).read()
            if hashlib.sha256(data).hexdigest() != digest:
                raise ValueError('Official dependency hash mismatch: '+relative)
            path.parent.mkdir(parents=True, exist_ok=True)
            path.write_bytes(data)
        records.append(dict(path=relative, sha256=digest, bytes=path.stat().st_size, url=BASE+relative,
                            license='GNU-Library-GPL-2.0' if relative in LGPL_PINNED else 'MIT-X11 class-library / licensing map'))
    # Compile an own PEReader helper against already installed Microsoft refs.
    csc, dotnet, framework = compiler_paths()
    helper = ROOT/'tools/MonoCollationMetadata.cs'
    output = folder/'Metadata.dll'
    names = ['System.Private.CoreLib','System.Runtime','System.Console','System.Collections',
             'System.Reflection.Metadata','System.Collections.Immutable','System.Memory','System.Text.Json',
             'System.Security.Cryptography','System.IO.Compression','System.IO.Compression.ZipFile','netstandard']
    options = ['/nologo','/nostdlib+','/nullable:enable','/target:exe','/out:'+str(output)]
    options += ['/r:'+str(framework/(name+'.dll')) for name in names]+[str(helper)]
    response = folder/'metadata.rsp'
    response.write_text('\n'.join('"'+value+'"' for value in options)+'\n', encoding='utf-8', newline='\n')
    def run(command, name):
        result = subprocess.run([str(v) for v in command], cwd=ROOT, capture_output=True, timeout=60)
        (folder/(name+'.log')).write_bytes(result.stdout+result.stderr)
        if result.returncode:
            raise RuntimeError('See build/deps/mono-collation/'+name+'.log')
        return result.stdout
    run([csc,'/noconfig','@'+str(response)], 'compile')
    output.with_suffix('.runtimeconfig.json').write_text(json.dumps(dict(runtimeOptions=dict(tfm='net10.0',framework=dict(name='Microsoft.NETCore.App',version='10.0.10'))))+'\n', encoding='utf-8', newline='\n')
    unity = Path(os.environ.get('UNITY_ROOT', str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))
    external = [unity/'Editor/Data/Mono/lib/mono/2.0/mscorlib.dll', unity/'Editor/Data/Mono/lib/mono/unity/mscorlib.dll']
    external = [p for p in external if p.is_file()]
    if any(p.resolve().is_relative_to(ROOT) for p in external):
        raise ValueError('Original SDK DLL must remain outside port')
    inspected = json.loads(run([dotnet,output,*external,args.apk.resolve()], 'metadata').decode('utf-8-sig'))
    resource_names = {Path(p).name:p for p in PINNED if '/resources/' in p}
    for assembly in inspected:
        for resource in assembly['resources']:
            relative = resource_names.get(resource['name'])
            resource['official_resource_matches'] = relative is not None and resource['sha256'] == PINNED[relative]
    apk_methods = {(r['type'],r['name'],r['signature']):r for r in inspected[-1]['methods']}
    il_comparison = []
    trim_comparison=[]
    for assembly in inspected[:-1]:
        same = sum(1 for method in assembly['methods']
                   if (method['type'],method['name'],method['signature']) in apk_methods
                   and apk_methods[(method['type'],method['name'],method['signature'])]['il_sha256'] == method['il_sha256'])
        il_comparison.append(dict(label=assembly['label'], methods=len(assembly['methods']),
                                  raw_il_hashes_equal_to_apk=same, metadata_tokens_normalized=False))
        target={(m['name'],m['signature']):m for m in inspected[-1]['string_trim_methods']}
        matching=sum(target.get((m['name'],m['signature']),{}).get('il_sha256')==m['il_sha256'] for m in assembly['string_trim_methods'])
        trim_comparison.append(dict(label=assembly['label'],methods=len(assembly['string_trim_methods']),raw_il_hashes_equal_to_apk=matching,
            whole_managed_core_equal_to_apk=assembly['assembly_sha256']==inspected[-1]['assembly_sha256'],
            whitespace_fields_equal_to_apk=assembly['string_whitespace_fields']==inspected[-1]['string_whitespace_fields'],
            string_cctor_constant_data_equal_to_apk=assembly['string_cctor_constant_data']==inspected[-1]['string_cctor_constant_data'],
            metadata_tokens_normalized=False,original_assembly_executed=False))
    unity_comparison = []
    for record in records:
        url = 'https://raw.githubusercontent.com/Unity-Technologies/mono/'+UNITY_REVISION+'/'+record['path']
        data = urllib.request.urlopen(url, timeout=30).read()
        unity_comparison.append(dict(path=record['path'], sha256=hashlib.sha256(data).hexdigest(),
                                     matches_upstream=hashlib.sha256(data).hexdigest() == record['sha256']))
    if not all(v['matches_upstream'] for v in unity_comparison):
        raise ValueError('Chosen upstream component differs from Unity 5.3 source')
    report = dict(operation='official-mono-collation-preparation', revision=REVISION,
                  unity_fork_revision=UNITY_REVISION, unity_comparison=unity_comparison,
                  selected_revision_reason='Official mono-2-6 component matches all19 files of Unity5.3 staging merge2016-03-11; all7resources match APK and SDK; exact SDK source revision UNKNOWN',
                  status='INSPECTED', files=records, inspected_assemblies=inspected,
                  inspected_method_comparison=il_comparison,
                  inspected_string_trim_comparison=trim_comparison,
                  official_resource_bytes=sum(r['bytes'] for r in records if '/resources/' in r['path']),
                  apk_sha256=expected, producer_sha256=sha(Path(__file__)), helper_sha256=sha(helper),
                  original_assembly_executed=False, original_assembly_copied=False,
                  original_resource_bytes_saved=False, component_compiled_by_this_setup=False,
                  licensing_scope='mcs/class collation MIT X11; authorized BMP data mono/metadata/char-conversions.h separately GNU Library GPLv2 June1991',
                  lgpl_data_authorization='Explicit user authorization after 0b9d3e7; license and provenance recorded separately')
    (ROOT/'config/phase2-mono-collation-source.json').write_text(json.dumps(report,indent=2)+'\n', encoding='utf-8', newline='\n')
    print(json.dumps(dict(files=len(records), official_resource_bytes=report['official_resource_bytes'],
                         inspected=[dict(label=a['label'], resources=len(a['resources']), matches=sum(r['official_resource_matches'] for r in a['resources'])) for a in inspected])))

if __name__ == '__main__':
    main()
