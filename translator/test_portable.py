"""Differential source/native tests for emitted real portable methods.

All inputs are synthetic. The C# oracle is generated from the same readonly
source AST, compiled as a new standalone test tool; no original game or Unity
DLL is copied, loaded or executed. This is source-oracle coverage, not PC boot.
"""
import hashlib
import argparse
import json
from pathlib import Path
import shutil
import subprocess
import sys

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tools'))
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths
from pc_compiler import environment

CLASSES={}
METHODS=[]
BUILDING=set()


def run(command,folder,name,env=None):
    p=subprocess.run([str(v) for v in command],cwd=ROOT,capture_output=True,env=env,timeout=180 if name=='native-compile' else 60)
    (folder/(name+'.log')).write_bytes(p.stdout+p.stderr)
    if p.returncode:raise RuntimeError('Differential step failed; '+str(folder/(name+'.log')))
    return p.stdout.decode('utf-8-sig')


def values(type,index):
    if type=='bool':return ('bool','bool',['false','true'][index%2])
    if type=='System.Random':
        return ('pls::cs::Ref<pls::cs::Random>','System.Random',('pls::cs::make_ref<pls::cs::Random>(std::int32_t('+str(index%7)+'))','new System.Random('+str(index%7)+')'))
    if type=='System.DateTime':return ('pls::cs::DateTime','System.DateTime',('pls::cs::DateTime(std::int64_t(638000000000000000ll+'+str(index%7*10000)+'),pls::cs::DateTimeKind::Utc)','new System.DateTime(638000000000000000L+'+str(index%7*10000)+',System.DateTimeKind.Utc)'))
    if type=='System.TimeZoneInfo':return ('pls::cs::Ref<pls::cs::TimeZoneInfo>','System.TimeZoneInfo',('pls::cs::TimeZoneInfo::get_Utc()','System.TimeZoneInfo.Utc'))
    if type in ('System.IO.Stream','System.IO.MemoryStream'):
        nt='pls::cs::Ref<pls::cs::'+('Stream' if type.endswith('.Stream') else 'MemoryStream')+'>'
        return (nt,type,('pls::cs::make_ref<pls::cs::MemoryStream>(pls::cs::Array<std::uint8_t>::from({3,5,7,9}))','new System.IO.MemoryStream(new byte[]{3,5,7,9})'))
    if type=='System.IO.SeekOrigin':return ('pls::cs::SeekOrigin',type,['0','1','2','-1','3','7','0'][index%7])
    if type=='byte':return ('std::uint8_t','byte',['0','1','127','128','255','17','3'][index%7])
    if type=='sbyte':return ('std::int8_t','sbyte',['0','1','-1','127','-128','17','-3'][index%7])
    if type=='int':return ('std::int32_t','int', ['0','1','-1','7','-7','2147483647','(-2147483647-1)'][index%7])
    if type=='long':return ('std::int64_t','long',['0','1','-1','17','-17','9223372036854775807','(-9223372036854775807-1)'][index%7])
    if type=='short':return ('std::int16_t','short',['0','1','-1','32767','-32768','255','-256'][index%7])
    if type=='float':return ('float','float',['0.0f','-0.0f','1.0f','-1.0f','7.25f','-17.5f','0.125f'][index%7])
    if type=='double':return ('double','double',['0.0','-0.0','1.0','-1.0','7.25','-17.5','0.125'][index%7])
    if type=='char':return ('char16_t','char',['0','65','0xd800','0xdc00','0xffff','0x3042','32'][index%7])
    if type=='string':
        cs=['null','""','"fixture"','"A\\0B"','"\\ud83d\\ude00"','"\\ud800"','"abcdef"'][index%7]
        cpp=['pls::cs::String{}','pls::cs::String(u"")','pls::cs::String(u"fixture")','pls::cs::String(u"A\\0B",3)',
             'pls::cs::String(u"\\xd83d" u"\\xde00",2)','pls::cs::String(u"\\xd800",1)','pls::cs::String(u"abcdef")'][index%7]
        return ('pls::cs::String','string',(cpp,cs))
    if type=='byte[]':
        data=[None,[],[0],[0,1,127,128,255],[1,2,3,4,5,6,7,8],[255,0,255],[]][index%7]
        if data is None:return ('pls::cs::Array<std::uint8_t>','byte[]',('pls::cs::Array<std::uint8_t>{}','null'))
        content=','.join(map(str,data));return ('pls::cs::Array<std::uint8_t>','byte[]',('pls::cs::Array<std::uint8_t>::from({'+content+'})','new byte[]{'+content+'}'))
    if type=='object':
        if index%7==0:return ('pls::cs::Ref<pls::cs::Object>','object',('pls::cs::Ref<pls::cs::Object>{}','null'))
        if index%7==6:return ('pls::cs::Ref<pls::cs::Object>','object',('pls::cs::box(std::int32_t(23))','(object)23'))
        return ('pls::cs::Ref<pls::cs::Object>','object',('pls::cs::box(pls::cs::Array<std::int32_t>::from({3,5,7,9}))','(object)new int[]{3,5,7,9}'))
    if type.endswith('[]'):
        element=type[:-2];et,_,_=values(element,0);native='pls::cs::Array<'+et+'>'
        if index%7==0:return (native,type,(native+'{}','null'))
        count=[0,0,1,3,2,1,0][index%7];cpp_elements=[];cs_elements=[]
        for i in range(count):
            nt,mt,v=values(element,index+i)
            if isinstance(v,tuple):nv,mv=v
            else:nv=nt+'('+v+')';mv='('+mt+')('+v+')'
            cpp_elements.append(nv);cs_elements.append(mv)
        return (native,type,(native+'::from({'+','.join(cpp_elements)+'})','new '+element+'[]{'+','.join(cs_elements)+'}'))
    if type in CLASSES:
        cls=CLASSES[type];native='pls::cs::Ref<pls::generated::'+cls['cpp_name']+'>'
        if index%7==0 or type in BUILDING:return (native,type,(native+'{}','null'))
        BUILDING.add(type)
        ctors=[m for m in METHODS if m['is_constructor'] and m['containing_type']==type and all(p['type'] not in CLASSES for p in m['parameters'])]
        if not ctors:
            native_value='pls::cs::make_ref<pls::generated::'+cls['cpp_name']+'>()'
            managed_value='('+type+')System.Runtime.CompilerServices.RuntimeHelpers.GetUninitializedObject(typeof('+type+'))'
            native_setup='';managed_setup=''
            for field in cls['fields']:
                ft=field['type']
                if any(t in ft for t in CLASSES) and ft not in CLASSES:continue
                nt,mt,v=values(ft,index)
                if isinstance(v,tuple):nv,mv=v
                else:nv=nt+'('+v+')';mv='('+mt+')('+v+')'
                native_setup+='x->'+field['cpp_name']+'='+nv+';'
                managed_setup+='(('+field['declaring_type']+')x).'+field['name']+'='+mv+';'
            BUILDING.remove(type)
            return (native,type,('([](){auto x='+native_value+';'+native_setup+'return x;}())','(new Func<'+type+'>(()=>{var x='+managed_value+';'+managed_setup+'return x;}))()'))
        ctor=min(ctors,key=lambda c:len(c['parameters']))
        cppargs=[];csargs=[]
        for i,p in enumerate(ctor['parameters']):
            nt,mt,v=values(p['type'],index+i)
            if isinstance(v,tuple):nv,mv=v
            else:nv=nt+'('+v+')';mv='('+mt+')('+v+')'
            cppargs.append(nv);csargs.append(mv)
        templates=ctor.get('concrete_cpp_type_arguments',[]);callee=ctor['cpp_name']+('<'+','.join(templates)+'>' if templates else '')
        native_value=callee+'('+','.join(cppargs)+')';managed_value='new '+type+'('+','.join(csargs)+')'
        if type=='java.util.Vector<int>':
            field=next(f for f in cls['fields'] if f['name']=='list_')
            native_value='([](){auto x='+native_value+';for(int n:{3,5,7})x->'+field['cpp_name']+'.Add(pls::cs::box(std::int32_t(n)));return x;}())'
            managed_value='(new Func<'+type+'>(()=>{var x='+managed_value+';foreach(int n in new int[]{3,5,7})x.list_.Add(n);return x;}))()'
        if type=='kairo.unity.util.FastVector<int>':
            fields={f['name']:f['cpp_name'] for f in cls['fields']}
            native_value='([](){auto x='+native_value+';x->'+fields['elementData']+'=pls::cs::Array<std::int32_t>::from({3,5,7});x->'+fields['elementCount']+'=3;x->'+fields['bufSize_']+'=3;return x;}())'
            managed_value='(new Func<'+type+'>(()=>{var x='+managed_value+';x.elementData=new int[]{3,5,7};x.elementCount=3;x.bufSize_=3;return x;}))()'
        if type in ('java.io.InputStream','java.io.OutputStream'):
            field=next(f for f in cls['fields'] if f['name']=='Wrapped')
            nv='pls::cs::make_ref<pls::cs::MemoryStream>'+( '(pls::cs::Array<std::uint8_t>::from({3,5,7,9}))' if type.endswith('InputStream') else '()')
            mv='new System.IO.MemoryStream'+('(new byte[]{3,5,7,9})' if type.endswith('InputStream') else '()')
            native_value='([](){auto x='+native_value+';x->'+field['cpp_name']+'='+nv+';return x;}())'
            managed_value='(new Func<'+type+'>(()=>{var x='+managed_value+';x.Wrapped='+mv+';return x;}))()'
        BUILDING.remove(type)
        return (native,type,(native_value,managed_value))
    raise ValueError('Missing differential input type '+type)


CS_FORMAT=r'''
using System;
using System.Globalization;
public static class Harness {
 public static DateTime FixedUtcNow(){return new DateTime(638000000000000000L,DateTimeKind.Utc);}
 static string TN(Type t){if(t==typeof(int))return "int";if(t==typeof(object))return "object";if(t.IsGenericType){var args=Array.ConvertAll(t.GetGenericArguments(),TN);return t.Namespace+"."+t.Name.Split('`')[0]+"<"+String.Join(",",args)+">";}return t.FullName;}
 static string F(object value) {
  if(value==null)return "null";
  if(value is string s){var output="s:";foreach(char c in s)output+=((int)c).ToString("x4");return output;}
  if(value is char c1)return "c:"+((int)c1).ToString("x4");
  if(value is bool b)return b?"true":"false";
  if(value is DateTime time)return "t:"+time.Ticks+":"+(int)time.Kind;
  if(value is TimeZoneInfo tz)return "tz:"+F(tz.Id)+":"+tz.BaseUtcOffset.Ticks;
  if(value is System.IO.MemoryStream memory)return "mem:"+memory.CanRead+":"+memory.CanSeek+":"+memory.CanWrite+":"+F(memory.ToArray())+":"+(memory.CanSeek?memory.Position.ToString():"closed");
  if(value is float f)return "f:"+unchecked((uint)BitConverter.SingleToInt32Bits(f)).ToString("x8");
  if(value is double d)return "d:"+unchecked((ulong)BitConverter.DoubleToInt64Bits(d)).ToString("x16");
  if(value is Array a){var output="[";foreach(var item in a)output+=F(item)+",";return output+"]";}
  if(value is System.Collections.IList list){var output="[";foreach(var item in list)output+=F(item)+",";return output+"]";}
  if(value.GetType().Assembly==typeof(SourceOracle).Assembly){var t=value.GetType();var fs=Array.FindAll(t.GetFields(System.Reflection.BindingFlags.Public|System.Reflection.BindingFlags.NonPublic|System.Reflection.BindingFlags.Instance),f=>f.DeclaringType.Assembly==typeof(SourceOracle).Assembly);Array.Sort(fs,(x,y)=>String.CompareOrdinal(TN(x.DeclaringType)+"::"+x.Name,TN(y.DeclaringType)+"::"+y.Name));var output="obj:"+TN(t)+"{";foreach(var f1 in fs)output+=TN(f1.DeclaringType)+"::"+f1.Name+":"+F(f1.GetValue(value))+",";return output+"}";}
  return Convert.ToString(value,CultureInfo.InvariantCulture);
 }
 public static void Main(){
'''
CPP_FORMAT=r'''
#include <iostream>
#include <iomanip>
#include <sstream>
#include "portable_generated.cpp"
using namespace pls::generated;
std::string F(const pls::cs::String& value) {
 if(value.is_null())return "null";std::ostringstream out;out<<"s:";
 for(std::int32_t i=0;i<value.length();++i)out<<std::hex<<std::setw(4)<<std::setfill('0')<<static_cast<unsigned>(value.at(i));return out.str();
}
std::string F(char16_t value){std::ostringstream out;out<<"c:"<<std::hex<<std::setw(4)<<std::setfill('0')<<static_cast<unsigned>(value);return out.str();}
std::string F(bool value){return value?"true":"false";}
std::string F(const pls::cs::Ref<pls::cs::Random>&value){return value?"System.Random":"null";}
std::string F(const pls::cs::DateTime&value){return "t:"+std::to_string(value.get_Ticks())+":"+std::to_string(static_cast<std::int32_t>(value.get_Kind()));}
std::string F(const pls::cs::Ref<pls::cs::TimeZoneInfo>&value){return value?"tz:"+F(value->get_Id())+":"+std::to_string(value->get_BaseUtcOffset().get_Ticks()):"null";}
std::string F(const pls::cs::Ref<pls::cs::Stream>&value);
std::string F(const pls::cs::Ref<pls::cs::MemoryStream>&value){return F(std::static_pointer_cast<pls::cs::Stream>(value));}
std::string F(float value){std::ostringstream out;out<<"f:"<<std::hex<<std::setw(8)<<std::setfill('0')<<pls::cs::bit_copy<std::uint32_t>(value);return out.str();}
std::string F(double value){std::ostringstream out;out<<"d:"<<std::hex<<std::setw(16)<<std::setfill('0')<<pls::cs::bit_copy<std::uint64_t>(value);return out.str();}
template<class T>std::string F(T value){return std::to_string(value);}
template<class T>std::string F(const pls::cs::Array<T>& value){if(value.is_null())return "null";std::string out="[";for(std::int32_t i=0;i<value.length();++i)out+=F(value.at(i))+",";return out+"]";}
std::string F(const pls::cs::Ref<pls::cs::Object>&value){if(!value)return "null";if(auto b=std::dynamic_pointer_cast<pls::cs::Box<std::int32_t>>(value))return F(b->value);if(std::dynamic_pointer_cast<pls::cs::ArrayBase>(value))return F(pls::cs::Array<std::int32_t>::from_object(value));throw std::runtime_error("Missing synthetic boxed formatter");}
template<class T>std::string F(const pls::cs::List<T>& value){if(value.is_null())return "null";std::string out="[";for(std::int32_t i=0;i<value.count();++i)out+=F(value.get_Item(i))+",";return out+"]";}
'''


def main():
    global CLASSES,METHODS
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--report',type=Path,default=ROOT/'config/phase2-translation.json')
    parser.add_argument('--generated',type=Path,default=ROOT/'src/kairo/common/generated')
    parser.add_argument('--oracle',type=Path,default=ROOT/'build/translator/KairoLibrary-source-oracle.cs')
    parser.add_argument('--result',type=Path,default=ROOT/'config/phase2-portable-differential.json')
    parser.add_argument('--folder',type=Path,default=ROOT/'build/translator/differential')
    options=parser.parse_args()
    report=json.loads(options.report.read_text(encoding='utf-8-sig'))
    CLASSES={c['type']:c for c in report['generated_classes']};METHODS=report['emitted_methods']
    folder=options.folder;folder.mkdir(parents=True,exist_ok=True)
    cs=[CS_FORMAT];cpp=[CPP_FORMAT];cases=[]
    # Reference overloads are declared before recursive array/object formatting.
    # Their bodies expose only synthetic test state from generated typed objects.
    prototypes=[];definitions=[]
    for cls in CLASSES.values():
        native='pls::cs::Ref<pls::generated::'+cls['cpp_name']+'>'
        signature='std::string F(const '+native+'& value)'
        prototypes.append(signature+';')
        body=signature+'{if(!value)return "null";std::string out="obj:'+cls['type']+'{";'
        for field in sorted(cls['fields'],key=lambda f:f['declaring_type']+'::'+f['name']):body+='out+="'+field['declaring_type']+'::'+field['name']+':"+F(value->'+field['cpp_name']+')+",";'
        definitions.append(body+'return out+"}";}')
    # Insert declarations before the generic array formatter for dependent lookup.
    cpp[0]=cpp[0].replace('template<class T>std::string F(T value)', '\n'.join(prototypes)+'\ntemplate<class T>std::string F(T value)')
    stream_f='std::string F(const pls::cs::Ref<pls::cs::Stream>&value){if(!value)return "null";if(auto m=std::dynamic_pointer_cast<pls::cs::MemoryStream>(value))return "mem:"+std::string(m->get_CanRead()?"True":"False")+":"+(m->get_CanSeek()?"True":"False")+":"+(m->get_CanWrite()?"True":"False")+":"+F(m->ToArray())+":"+(m->get_CanSeek()?std::to_string(m->get_Position()):"closed");'
    if 'java.io.WrappedSystemStream' in CLASSES:stream_f+='if(auto typed=std::dynamic_pointer_cast<pls::generated::'+CLASSES['java.io.WrappedSystemStream']['cpp_name']+'>(value))return F(typed);'
    definitions.append(stream_f+'throw std::runtime_error("Missing synthetic stream formatter");}')
    cpp+=definitions
    fields=report['static_fields']
    for method_index,method in enumerate(report['emitted_methods']):
        for case_index in range(7):
            case_id=str(method_index)+':'+str(case_index)
            args=[];cs.append('{');cpp.append('void cs_case_'+case_id.replace(':','_')+'(){')
            if not method['is_static'] and not method['is_constructor']:
                typ,managed,(cpp_value,cs_value)=values(method['containing_type'],case_index)
                cpp.append(f'{typ} self={cpp_value};');cs.append(f'{managed} self={cs_value};')
            for pindex,parameter in enumerate(method['parameters']):
                typ,managed,value=values(parameter['type'],case_index+pindex)
                if parameter['name'] in ('length','len','bounded','size','capacity','initialCapacity','bufferSize') and parameter['type']=='int':value=['0','1','2','4','8','-1','3'][case_index%7]
                if parameter['type']=='string' and ('.ParseInt(' in method['id'] or '.ParseLong(' in method['id'] or 'JInteger.ValueOf(' in method['id']):
                    upper='9223372036854775807' if '.ParseLong(' in method['id'] else '2147483647'
                    over='9223372036854775808' if '.ParseLong(' in method['id'] else '2147483648'
                    text=[None,'0','-17',upper,over,'  +27  ','invalid'][case_index%7]
                    value=('pls::cs::String{}','null') if text is None else ('pls::cs::String(u'+json.dumps(text)+')',json.dumps(text))
                if isinstance(value,tuple):cpp_value,cs_value=value
                else:cpp_value=typ+'('+value+')';cs_value='('+managed+')('+value+')'
                cpp.append(f'{typ} arg{pindex}={cpp_value};');cs.append(f'{managed} arg{pindex}={cs_value};');args.append('arg'+str(pindex))
            templates=method.get('concrete_cpp_type_arguments',[])
            native_callee=method['cpp_name']+('<'+','.join(templates)+'>' if templates else '')
            invocation=native_callee+'('+','.join(args)+')'
            if method['is_constructor']:managed_invocation='new '+method['containing_type']+'('+','.join(args)+')'
            elif not method['is_static']:
                invocation=native_callee+'('+','.join(['self']+args)+')'
                if method['kind']=='PropertyGet':managed_invocation='self['+','.join(args)+']' if method.get('is_indexer') else 'self.'+method['name'][4:]
                elif method['kind']=='PropertySet':managed_invocation=('self['+','.join(args[:-1])+']' if method.get('is_indexer') else 'self.'+method['name'][4:])+'='+args[-1]
                else:managed_invocation='self.'+method['name']+'('+','.join(args)+')'
            elif method['kind']=='Conversion':managed_invocation='('+method['return_type']+')'+args[0]
            elif method['kind']=='UserDefinedOperator':
                token={'op_Equality':'==','op_Inequality':'!=','op_Addition':'+','op_Subtraction':'-','op_Multiply':'*','op_Division':'/'}[method['name']]
                managed_invocation='('+args[0]+' '+token+' '+args[1]+')'
            else:managed_invocation='SourceOracle.'+invocation
            prefix=case_id+'|'
            cs.append('string result;try{'+(managed_invocation+';result="void";' if method['return_type']=='void' else 'result=F('+managed_invocation+');')+'}catch(Exception e){result="!"+e.GetType().FullName;}')
            cpp.append('std::string result;try{'+(invocation+';result="void";' if method['return_type']=='void' else 'result=F('+invocation+');')+'}catch(const pls::cs::Exception& e){result="!"+std::string(e.type_name());}')
            # Compare post-call input arrays and global static state, not only return values.
            for pindex,parameter in enumerate(method['parameters']):
                if parameter['type'].endswith('[]') or parameter['type'] in CLASSES or parameter['type']=='object':
                    cs.append(f'result+="|a{pindex}:"+F(arg{pindex});');cpp.append(f'result+="|a{pindex}:"+F(arg{pindex});')
            if not method['is_static'] and not method['is_constructor']:
                cs.append('result+="|self:"+F(self);');cpp.append('result+="|self:"+F(self);')
            for field in fields:
                name=field['cpp_name'];cs.append('result+="|state:"+F(SourceOracle.'+name+');');cpp.append('result+="|state:"+F(pls::generated::'+name+');')
            cs.append('Console.WriteLine("'+prefix+'"+result);');cpp.append('std::cout<<"'+prefix+'"<<result<<"\\n";')
            cs.append('}');cpp.append('}');cases.append(dict(case=case_id,method=method['id']))
    cs.append('}}');cpp.append('int main(){pls::cs::runtime_profile=pls::cs::RuntimeProfile::DotNet;pls::cs::utc_clock_ticks=[](){return std::int64_t(638000000000000000ll);};')
    cpp+=['cs_case_'+case['case'].replace(':','_')+'();' for case in cases]
    cpp.append('return 0;}')
    cs_file=folder/'Harness.cs';cpp_file=folder/'Harness.cpp'
    cs_file.write_text('\n'.join(cs),encoding='utf-8',newline='\n');cpp_file.write_text('\n'.join(cpp),encoding='utf-8',newline='\n')
    compiler,runtime,framework=compiler_paths();oracle=folder/'Harness.dll'
    libs=['System.Private.CoreLib','System.Runtime','System.Console','System.Collections','System.Linq','netstandard']
    command=[compiler,'/nologo','/noconfig','/nostdlib+','/target:exe','/out:'+str(oracle)]
    command+=['/r:'+str(framework/(name+'.dll')) for name in libs]+[options.oracle,cs_file]
    run(command,folder,'csharp-compile')
    (folder/'Harness.runtimeconfig.json').write_text(json.dumps({'runtimeOptions':{'tfm':'net10.0','framework':{'name':'Microsoft.NETCore.App','version':'10.0.10'}}}),encoding='utf-8',newline='\n')
    env=environment();exe=folder/'Harness.exe'
    cpp_command=[shutil.which('cl.exe',path=env['PATH']),'/nologo','/std:c++17','/EHsc','/fp:strict','/utf-8','/W4',
        '/I'+str(ROOT/'src/kairo/common'),'/I'+str(options.generated),'/Fe:'+str(exe),'/Fo'+str(folder)+'/',cpp_file,ROOT/'src/kairo/common/semantic_runtime.cpp',ROOT/'src/kairo/common/managed_streams.cpp']
    run(cpp_command,folder,'native-compile',env)
    expected=run([runtime,oracle],folder,'managed-output').splitlines();actual=run([exe],folder,'native-output',env).splitlines()
    if len(expected)!=len(cases) or len(actual)!=len(cases):raise ValueError('Missing differential output cases')
    failures=[dict(cases[i],expected=expected[i],actual=actual[i]) for i in range(len(cases)) if expected[i]!=actual[i]]
    result=dict(operation='differential-generated-portable-method-source-oracle',cases=len(cases),passed=len(cases)-len(failures),
        methods=len(report['emitted_methods']),executed_method_ids=[m['id'] for m in report['emitted_methods']],
        failures=[dict(method=f['method'],case=f['case']) for f in failures],
        scalar_float_comparison='exact IEEE bits',post_state_compared=True,original_binaries_used=False,
        game_executed=False,runtime_profile='DotNet; fixture input selected operations do not exercise documented Mono-specific divergences',
        source_oracle_sha256=hashlib.sha256(options.oracle.read_bytes()).hexdigest(),
        cpp_generated_sha256=hashlib.sha256((options.generated/'portable_generated.cpp').read_bytes()).hexdigest(),
        hpp_generated_sha256=hashlib.sha256((options.generated/'portable_generated.hpp').read_bytes()).hexdigest(),
        generated_files=[dict(path=p.relative_to(ROOT).as_posix(),sha256=hashlib.sha256(p.read_bytes()).hexdigest()) for p in sorted(set(options.generated.glob('*.?pp'))|set(options.generated.glob('*.inc')))],
        native_compiler_sha256=hashlib.sha256(Path(cpp_command[0]).read_bytes()).hexdigest(),
        native_executable=dict(path=exe.relative_to(ROOT).as_posix(),sha256=hashlib.sha256(exe.read_bytes()).hexdigest()),
        source_oracle_executable=dict(path=oracle.relative_to(ROOT).as_posix(),sha256=hashlib.sha256(oracle.read_bytes()).hexdigest()),
        differential_runner_sha256=hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),
        runtime_sources=[dict(path=p.relative_to(ROOT).as_posix(),sha256=hashlib.sha256(p.read_bytes()).hexdigest()) for p in sorted(set((ROOT/'src/kairo/common').glob('*.hpp'))|{ROOT/'src/kairo/common/semantic_runtime.cpp',ROOT/'src/kairo/common/managed_streams.cpp'})],
        comparison_profile='Standalone source oracle compiled with current Roslyn/.NET10; native profile DotNet. Historical divergences require separate runtime-oracle receipts.')
    (folder/'failures.json').write_text(json.dumps(failures,indent=2)+'\n',encoding='utf-8',newline='\n')
    options.result.write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps({k:result[k] for k in ['cases','passed','methods','game_executed']}))
    if failures:raise ValueError('Native/source differential mismatches; see private failures.json')


if __name__=='__main__':main()
