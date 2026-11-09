"""Prove native value storage and emitted managed-address operations."""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import sys
from translate import ROOT,prepare,run

EXPECTED_UNITY='7cc901371cc77e103d00b5845e8285f85fbdf36bb47ccf3d824f94c4ead32421'

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--original-managed',type=Path,required=True)
    opts=parser.parse_args()
    original=opts.original_managed/'UnityEngine.dll';binary=original.read_bytes()
    if hashlib.sha256(binary).hexdigest()!=EXPECTED_UNITY:raise ValueError('Unity metadata artifact does not match the authenticated APK')
    # The offsets/tokens are bound to the complete artifact digest and REA
    # MVID 8ff1c57a-358d-4cd9-bfaa-aa0ef82c83ff. No assembly is loaded/executed.
    stores=bytes([2,3,0x7d])+int(0x040000e8).to_bytes(4,'little')+bytes([2,4,0x7d])+int(0x040000e9).to_bytes(4,'little')+bytes([0x2a])
    for offset in (12840,12984):
        if binary[offset]!=0x3e or binary[offset+1:offset+16]!=stores:raise ValueError('Constructor/Set no longer have the proved two scalar field stores')
    folder,runtime,tool,producer=prepare();output=folder/'vector-value-generated';output.mkdir(parents=True,exist_ok=True)
    unity=Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono/lib/mono/unity')
    source=ROOT/'tests/translator/VectorValueFixtures.cs'
    request=dict(assembly='VectorValueFixtures',sources=[str(source)],references=[str(unity/(name+'.dll'))for name in ['mscorlib','System','System.Core']]+[str(original.resolve())],selected=[],select_all_source_methods=True,output=str(output),
        external_value_types={'T:UnityEngine.Vector2':'pls::kairo::Vector2'},
        external_fields={'F:UnityEngine.Vector2.x':'x','F:UnityEngine.Vector2.y':'y'},
        external_methods={'M:UnityEngine.Vector2.Set(System.Single,System.Single)':'value-member:Set'},native_includes=['vector2.hpp'],
        oracle_support='namespace UnityEngine { public struct Vector2 {public float x,y;public Vector2(float x,float y){this.x=x;this.y=y;}public void Set(float x,float y){this.x=x;this.y=y;}}}')
    input_file=folder/'vector-value-input.json';report_file=folder/'vector-value-report.json'
    input_file.write_text(json.dumps(request,indent=2)+'\n',encoding='utf8',newline='\n')
    run([runtime,tool,input_file,report_file],folder/'vector-value-translator.log')
    report=json.loads(report_file.read_text())
    if report['rejected_methods']:raise ValueError('Unexpected unsupported vector fixture: '+str(report['rejected_methods']))
    target=ROOT/'config/phase2-vector2-fixtures.json'
    subprocess.run([sys.executable,ROOT/'translator/test_portable.py','--report',report_file,'--generated',output,'--oracle',output/'source_oracle.cs','--folder',folder/'vector-value-differential','--result',target],check=True,cwd=ROOT)
    result=json.loads(target.read_text());result.update(operation='native-value-and-generated-address-fixtures',producer=producer,
        runner_sha256=hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),fixture_sha256=hashlib.sha256(source.read_bytes()).hexdigest(),
        original_metadata_only=dict(sha256=EXPECTED_UNITY,mvid='8ff1c57a-358d-4cd9-bfaa-aa0ef82c83ff',type='UnityEngine.Vector2',methods=['.ctor(Single,Single)','Set(Single,Single)'],field_tokens={'x':'0x040000e8','y':'0x040000e9'},cil_sha256=hashlib.sha256(stores).hexdigest(),rea_evidence='ev_c7cd7c4d0494ef316fa96a3a064dee1fc9ee07ec6773dbadeb33e809e4a0d29c',original_loaded_or_executed=False),
        limitations=['Only default, constructor, Set and x/y fields are mapped; Normalize, operators, boxing and formatting remain unsupported.'])
    target.write_text(json.dumps(result,indent=2)+'\n',encoding='utf8',newline='\n')

if __name__=='__main__':main()
