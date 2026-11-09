"""Check scalar formulas against authenticated CIL, then exercise own C# oracle.

Reads file-backed metadata/CIL only. No Unity assembly is loaded or executed.
"""
import argparse,hashlib,json,subprocess,sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'translator'))
from translate import prepare,run

def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--original-managed',type=Path,required=True);args=parser.parse_args()
    original=args.original_managed.resolve()/'UnityEngine.dll'
    if sha(original)!='7cc901371cc77e103d00b5845e8285f85fbdf36bb47ccf3d824f94c4ead32421':raise ValueError('Authenticated external metadata required')
    binary=original.read_bytes();data=binary[24028+12:24028+12+281]
    if hashlib.sha256(data).hexdigest()!='bbe514ff0efbcb5cc1dc901c4dac0cf0b325a1ca78565dbadc7b3dedcd72a812':raise ValueError('MultiplyPoint CIL differs')
    names={0x040000fb+c*4+r:'m'+str(r)+str(c) for c in range(4)for r in range(4)}
    names.update({0x040000eb:'x',0x040000ec:'y',0x040000ed:'z'})
    stack=[];local={};temp=None;i=0;result=None
    while i<len(data):
        op=data[i];i+=1
        if op in (0x12,0x0f):n=data[i];i+=1;stack.append(('ref','out'if op==0x12 else'p'));assert n==(0 if op==0x12 else 1)
        elif op==2:stack.append(('ref','m'))
        elif op in (0x7b,0x7d):
            field=names[int.from_bytes(data[i:i+4],'little')];i+=4
            if op==0x7b:
                obj=stack.pop()[1];stack.append(local[field]if obj=='out'else(obj,field))
            else:value=stack.pop();assert stack.pop()==('ref','out');local[field]=value
        elif op in (0x58,0x5a,0x5b):b=stack.pop();a=stack.pop();stack.append(({0x58:'+',0x5a:'*',0x5b:'/'}[op],a,b))
        elif op==0x0b:temp=stack.pop()
        elif op==0x07:stack.append(temp)
        elif op==0x22:stack.append(('constant',int.from_bytes(data[i:i+4],'little')));i+=4
        elif op==0x25:stack.append(stack[-1])
        elif op==0x06:stack.append(('ref','out'))
        elif op==0x2a:assert stack.pop()==('ref','out');result=local.copy()
        else:raise ValueError('Unrecognized scalar CIL '+hex(op))
    def row(r):
        a=('*',('m','m'+str(r)+'0'),('p','x'));b=('*',('m','m'+str(r)+'1'),('p','y'));c=('*',('m','m'+str(r)+'2'),('p','z'))
        return ('+',('+',('+',a,b),c),('m','m'+str(r)+'3'))
    w=('/',('constant',0x3f800000),row(3))
    if result!={axis:('*',row(r),w)for r,axis in enumerate('xyz')}or stack:raise ValueError('Scalar operation order differs')
    identity=binary[25116+12:25116+12+202]
    if hashlib.sha256(identity).hexdigest()!='6e76eb59aaa47eb4a6aa71f541e842a96025e70e62067b6de6a731bc90d6c91b':raise ValueError('Identity CIL differs')
    fields='public float '+','.join('m'+str(r)+str(c)for c in range(4)for r in range(4))+';'
    formula=lambda r:'+'.join('m'+str(r)+str(c)+'*p.'+'xyz'[c]for c in range(3))+'+m'+str(r)+'3'
    support='namespace UnityEngine {public struct Vector3{public float x,y,z;public Vector3(float a,float b){x=a;y=b;z=0;}public Vector3(float a,float b,float c){x=a;y=b;z=c;}}public struct Matrix4x4{'+fields+'public static Matrix4x4 identity{get{var m=new Matrix4x4();m.m00=m.m11=m.m22=m.m33=1;return m;}}public Vector3 MultiplyPoint(Vector3 p){var o=new Vector3();'+''.join('o.'+axis+'='+formula(r)+';'for r,axis in enumerate('xyz'))+'float w='+formula(3)+';w=1f/w;o.x*=w;o.y*=w;o.z*=w;return o;}}}'
    folder,runtime,tool,producer=prepare();output=folder/'matrix-point-generated';output.mkdir(parents=True,exist_ok=True)
    profile=Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono/lib/mono/unity')
    source=ROOT/'tests/translator/MatrixPointFixtures.cs'
    request=dict(assembly='MatrixPointFixtures',sources=[str(source)],references=[str(profile/(n+'.dll'))for n in ['mscorlib','System','System.Core']]+[str(original)],selected=[],select_all_source_methods=True,output=str(output),external_value_types={'T:UnityEngine.Matrix4x4':'pls::kairo::Matrix4x4','T:UnityEngine.Vector3':'pls::kairo::Vector3'},external_fields={'F:UnityEngine.Matrix4x4.'+n:n for n in names.values()if n.startswith('m')},external_methods={'M:UnityEngine.Matrix4x4.get_identity':'pls::kairo::Matrix4x4::identity','M:UnityEngine.Matrix4x4.MultiplyPoint(UnityEngine.Vector3)':'value-member:MultiplyPoint'},native_includes=['matrix4.hpp'],oracle_support=support)
    request['external_fields'].update({'F:UnityEngine.Vector3.'+n:n for n in 'xyz'})
    inp=folder/'matrix-point-input.json';report_file=folder/'matrix-point-report.json';inp.write_text(json.dumps(request),encoding='utf8')
    run([runtime,tool,inp,report_file],folder/'matrix-point-translator.log')
    report=json.loads(report_file.read_text(encoding='utf-8-sig'))
    if report['rejected_methods']:raise ValueError(report['rejected_methods'])
    target=ROOT/'config/phase2-matrix-point-fixtures.json'
    subprocess.run([sys.executable,ROOT/'translator/test_portable.py','--report',report_file,'--generated',output,'--oracle',output/'source_oracle.cs','--folder',folder/'matrix-point-differential','--result',target],check=True,cwd=ROOT)
    proof=json.loads(target.read_text(encoding='utf8'));proof.update(producer=producer,runner_sha256=sha(Path(__file__)),fixture_sha256=sha(source),original_metadata_only=dict(sha256=sha(original),multiply_point_token='0x060005ea',cil_sha256=hashlib.sha256(data).hexdigest(),symbolic_operation_order_checked=True,original_loaded_or_executed=False,rea_evidence='ev_8b443d2643d13ebd7a2036ae67ccc4d177bdc473569635c9e973b012cfba559f'),limitations=['Only default, identity, field access, scalar point projection and Vector3 scalar constructors admitted; no engine linked.','Identity CIL is hash-bound; MultiplyPoint operation order independently interpreted from authenticated CIL.'])
    target.write_text(json.dumps(proof,indent=2)+'\n',encoding='utf8',newline='\n')
if __name__=='__main__':main()
