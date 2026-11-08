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
import re
import time

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tools'))
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths
from pc_compiler import environment

CLASSES={}
METHODS=[]
BUILDING=set()
RUN_TIMINGS={}


def run(command,folder,name,env=None):
    started=time.perf_counter()
    try:
        p=subprocess.run([str(v) for v in command],cwd=ROOT,capture_output=True,env=env,timeout=180 if name=='native-compile' else 60)
    except subprocess.TimeoutExpired as failure:
        stdout=failure.stdout or b'';stderr=failure.stderr or b''
        (folder/(name+'.stdout')).write_bytes(stdout);(folder/(name+'.stderr')).write_bytes(stderr)
        (folder/(name+'.log')).write_bytes(stdout+stderr)
        complete=[line for line in stdout.splitlines(keepends=True)if line.endswith(b'\n')and re.match(rb'^\d+:\d+\|',line)]
        case=complete[-1].split(b'|',1)[0].decode() if complete else None
        method=METHODS[int(case.split(':')[0])]['id'] if case else None
        diagnostic=dict(status='TIMEOUT',seconds=time.perf_counter()-started,timeout_seconds=failure.timeout,
            completed_case_lines=len(complete),last_completed_case=case,last_completed_method=method,
            note='Last observed completed output identifies progress, not the exact instruction executing at timeout.')
        (folder/(name+'.timing.json')).write_text(json.dumps(diagnostic,indent=2)+'\n',encoding='utf8',newline='\n')
        raise
    RUN_TIMINGS[name]=time.perf_counter()-started
    (folder/(name+'.timing.json')).write_text(json.dumps(dict(status='PASS'if p.returncode==0 else 'FAIL',seconds=RUN_TIMINGS[name]),indent=2)+'\n',encoding='utf8',newline='\n')
    (folder/(name+'.log')).write_bytes(p.stdout+p.stderr)
    if p.returncode:raise RuntimeError('Differential step failed; '+str(folder/(name+'.log')))
    return p.stdout.decode('utf-8-sig')


def values(type,index):
    if type=='bool':return ('bool','bool',['false','true'][index%2])
    if type=='System.Exception':
        return ('pls::cs::ExceptionRef',type,('pls::cs::ExceptionRef{}','null')) if index%7==0 else ('pls::cs::ExceptionRef',type,('pls::cs::make_exception("System.ArgumentException",pls::cs::String(u"synthetic"))','new System.ArgumentException("synthetic")'))
    if type=='System.Type':return ('pls::cs::Ref<pls::cs::RuntimeType>',type,('pls::cs::runtime_type_of<pls::cs::Array<std::uint8_t>>()','typeof(byte[])'))
    if type=='System.Random':
        return ('pls::cs::Ref<pls::cs::Random>','System.Random',('pls::cs::make_ref<pls::cs::Random>(std::int32_t('+str(index%7)+'))','new System.Random('+str(index%7)+')'))
    if type=='System.DateTime':return ('pls::cs::DateTime','System.DateTime',('pls::cs::DateTime(std::int64_t(638000000000000000ll+'+str(index%7*10000)+'),pls::cs::DateTimeKind::Utc)','new System.DateTime(638000000000000000L+'+str(index%7*10000)+',System.DateTimeKind.Utc)'))
    if type=='System.TimeZoneInfo':return ('pls::cs::Ref<pls::cs::TimeZoneInfo>','System.TimeZoneInfo',('pls::cs::TimeZoneInfo::get_Utc()','System.TimeZoneInfo.Utc'))
    if type=='System.IO.BinaryReader':return ('pls::cs::Ref<pls::cs::BinaryReader>',type,('pls::cs::make_ref<pls::cs::BinaryReader>(pls::cs::make_ref<pls::cs::MemoryStream>(pls::cs::Array<std::uint8_t>::from({3,5,7,9})))','new System.IO.BinaryReader(new System.IO.MemoryStream(new byte[]{3,5,7,9}))'))
    if type in ('System.IO.Stream','System.IO.MemoryStream'):
        nt='pls::cs::Ref<pls::cs::'+('Stream' if type.endswith('.Stream') else 'MemoryStream')+'>'
        return (nt,type,('pls::cs::make_ref<pls::cs::MemoryStream>(pls::cs::Array<std::uint8_t>::from({3,5,7,9}))','new System.IO.MemoryStream(new byte[]{3,5,7,9})'))
    if type=='System.IO.SeekOrigin':return ('pls::cs::SeekOrigin',type,['0','1','2','-1','3','7','0'][index%7])
    if type=='byte':return ('std::uint8_t','byte',['0','1','127','128','255','17','3'][index%7])
    if type=='sbyte':return ('std::int8_t','sbyte',['0','1','-1','127','-128','17','-3'][index%7])
    if type=='int':return ('std::int32_t','int', ['0','1','-1','7','-7','2147483647','(-2147483647-1)'][index%7])
    if type=='long':return ('std::int64_t','long',['0','1','-1','17','-17','9223372036854775807','(-9223372036854775807-1)'][index%7])
    if type=='ushort':return ('std::uint16_t','ushort',['0','1','127','129','33088','65535','33440'][index%7])
    if type=='uint':return ('std::uint32_t','uint',['0','1','2147483647','2147483648','4294967295','17','255'][index%7])
    if type=='ulong':return ('std::uint64_t','ulong',['0','1','9223372036854775807','9223372036854775808','18446744073709551615','17','255'][index%7])
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
        if CLASSES[type].get('is_interface'):return ('pls::cs::Ref<pls::generated::'+CLASSES[type]['cpp_name']+'>',type,('pls::cs::Ref<pls::generated::'+CLASSES[type]['cpp_name']+'>{}','null'))
        cls=CLASSES[type];native='pls::generated::'+cls['cpp_name'] if cls.get('is_value_type') else 'pls::cs::Ref<pls::generated::'+cls['cpp_name']+'>'
        if (index%7==0 and not cls.get('is_value_type')) or type in BUILDING:return (native,type,(native+'{}','null'))
        BUILDING.add(type)
        ctors=[m for m in METHODS if m['is_constructor'] and m['containing_type']==type and all(p['type'] not in CLASSES for p in m['parameters'])]
        if not ctors:
            native_value='pls::generated::'+cls['cpp_name']+'{}' if cls.get('is_value_type') else 'pls::cs::make_ref<pls::generated::'+cls['cpp_name']+'>()'
            managed_value='default('+type+')' if cls.get('is_value_type') else '('+type+')System.Runtime.Serialization.FormatterServices.GetUninitializedObject(typeof('+type+'))'
            native_setup='';managed_setup=''
            for field in cls['fields']:
                ft=field['type']
                if any(t in ft for t in CLASSES) and ft not in CLASSES:continue
                nt,mt,v=values(ft,index)
                if isinstance(v,tuple):nv,mv=v
                else:nv=nt+'('+v+')';mv='('+mt+')('+v+')'
                native_setup+='x'+('.' if cls.get('is_value_type') else '->')+field['cpp_name']+'='+nv+';'
                managed_setup+='(('+field['declaring_type']+')x).'+field['name']+'='+mv+';'
            BUILDING.remove(type)
            return (native,type,('([](){auto x='+native_value+';'+native_setup+'return x;}())','(new Func<'+type+'>(()=>{var x='+managed_value+';'+managed_setup+'return x;}))()'))
        if type=='java.util.JTimeZone':
            ctor=next(c for c in ctors if [p['type'] for p in c['parameters']]==['string'])
            BUILDING.remove(type)
            return (native,type,(ctor['cpp_name']+'(pls::cs::String(u"Fixture/Zone"))','new '+type+'("Fixture/Zone")'))
        if type=='kairo.unity.util.JarInflater':
            ctor=next(c for c in ctors if [p['type'] for p in c['parameters']]==['byte[]'])
            BUILDING.remove(type)
            return (native,type,(ctor['cpp_name']+'(pls::cs::Array<std::uint8_t>::make(12))','new '+type+'(new byte[12])'))
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
 static long serializationTicks,hashTicks;
 sealed class ReferenceComparer : System.Collections.Generic.IEqualityComparer<object> {
  public bool Equals(object a,object b){return object.ReferenceEquals(a,b);}
  public int GetHashCode(object a){return System.Runtime.CompilerServices.RuntimeHelpers.GetHashCode(a);}
 }
 static readonly System.Collections.Generic.HashSet<object> active=new System.Collections.Generic.HashSet<object>(new ReferenceComparer());
 public static DateTime FixedUtcNow(){return new DateTime(638000000000000000L,DateTimeKind.Utc);}
 static string TN(Type t){if(t==typeof(int))return "int";if(t==typeof(object))return "object";if(t.IsGenericType){var args=Array.ConvertAll(t.GetGenericArguments(),TN);return t.Namespace+"."+t.Name.Split('`')[0]+"<"+String.Join(",",args)+">";}return t.FullName.Replace('+','.');}
 static string F(object value) {
  if(value==null)return "null";
  if(value is Delegate)return "delegate";
  if(value.GetType().FullName=="UnityEngine.TextAsset")return "textasset:"+F(value.GetType().GetField("bytes").GetValue(value))+":"+F(value.GetType().GetField("text").GetValue(value));
  if(value is string s){const string hex="0123456789abcdef";var output=new char[2+s.Length*4];output[0]='s';output[1]=':';for(int i=0;i<s.Length;i++){int c=s[i];for(int shift=12;shift>=0;shift-=4)output[2+i*4+(12-shift)/4]=hex[(c>>shift)&15];}return new string(output);}
  if(value is char c1)return "c:"+((int)c1).ToString("x4");
  if(value is bool b)return b?"true":"false";
  if(value is DateTime time)return "t:"+time.Ticks+":"+(int)time.Kind;
  if(value is Type type)return "type:"+F(type.FullName);
  if(value is TimeZoneInfo tz)return "tz:"+F(tz.Id)+":"+tz.BaseUtcOffset.Ticks;
  if(value is System.IO.BinaryReader reader)return "reader:"+F(reader.BaseStream);
  if(value is System.IO.MemoryStream memory)return "mem:"+memory.CanRead+":"+memory.CanSeek+":"+memory.CanWrite+":"+F(memory.ToArray())+":"+(memory.CanSeek?memory.Position.ToString():"closed");
  if(value is float f)return "f:"+unchecked((uint)BitConverter.ToInt32(BitConverter.GetBytes(f),0)).ToString("x8");
  if(value is double d)return "d:"+unchecked((ulong)BitConverter.DoubleToInt64Bits(d)).ToString("x16");
  if(value is Array a){var output=new System.Text.StringBuilder("[");foreach(var item in a)output.Append(F(item)).Append(',');return output.Append(']').ToString();}
  if(value is System.Collections.IDictionary dictionary){var output=new System.Text.StringBuilder("dict[");foreach(System.Collections.DictionaryEntry pair in dictionary)output.Append(F(pair.Key)).Append(':').Append(F(pair.Value)).Append(',');return output.Append(']').ToString();}
  if(value is System.Collections.IList list){var output=new System.Text.StringBuilder("[");foreach(var item in list)output.Append(F(item)).Append(',');return output.Append(']').ToString();}
  if(value.GetType().Assembly==typeof(SourceOracle).Assembly){var t=value.GetType();bool tracked=!t.IsValueType;if(tracked&&!active.Add(value))return "cycle";try{var fs=Array.FindAll(t.GetFields(System.Reflection.BindingFlags.Public|System.Reflection.BindingFlags.NonPublic|System.Reflection.BindingFlags.Instance),f=>f.DeclaringType.Assembly==typeof(SourceOracle).Assembly);Array.Sort(fs,(x,y)=>String.CompareOrdinal(TN(x.DeclaringType)+"::"+x.Name,TN(y.DeclaringType)+"::"+y.Name));var output=new System.Text.StringBuilder("obj:").Append(TN(t)).Append('{');foreach(var f1 in fs)output.Append(TN(f1.DeclaringType)).Append("::").Append(f1.Name).Append(':').Append(F(f1.GetValue(value))).Append(',');return output.Append('}').ToString();}finally{if(tracked)active.Remove(value);}}
  return Convert.ToString(value,CultureInfo.InvariantCulture);
 }
'''
CPP_FORMAT=r'''
#include <iostream>
#include <iomanip>
#include <sstream>
#include <chrono>
#if defined(_MSC_VER)
#pragma optimize("gt",on)
#endif
#include "sha256.hpp"
#if defined(_MSC_VER)
#pragma optimize("",off)
#endif
#include "portable_generated.cpp"
using namespace pls::generated;
static std::chrono::nanoseconds serialization_time{},hash_time{};
static std::vector<const pls::cs::Object*>format_path;
struct FormatGuard{const pls::cs::Object*value;explicit FormatGuard(const pls::cs::Object*v):value(v){format_path.push_back(v);}~FormatGuard(){format_path.pop_back();}};
std::string F(const pls::cs::String& value) {
 if(value.is_null())return "null";constexpr char hex[]="0123456789abcdef";std::string out="s:";out.reserve(2+std::size_t(value.length())*4);
 for(std::int32_t i=0;i<value.length();++i){auto c=value.at(i);for(int shift=12;shift>=0;shift-=4)out+=hex[(c>>shift)&15];}return out;
}
std::string F(char16_t value){std::ostringstream out;out<<"c:"<<std::hex<<std::setw(4)<<std::setfill('0')<<static_cast<unsigned>(value);return out.str();}
std::string F(bool value){return value?"true":"false";}
std::string F(const pls::cs::Ref<pls::cs::RuntimeType>&value){return value?"type:"+F(value->get_FullName()):"null";}
std::string F(const pls::cs::Ref<pls::cs::Random>&value){return value?"System.Random":"null";}
std::string F(const pls::cs::DateTime&value){return "t:"+std::to_string(value.get_Ticks())+":"+std::to_string(static_cast<std::int32_t>(value.get_Kind()));}
std::string F(const pls::cs::Ref<pls::cs::TimeZoneInfo>&value){return value?"tz:"+F(value->get_Id())+":"+std::to_string(value->get_BaseUtcOffset().get_Ticks()):"null";}
std::string F(const pls::cs::Ref<pls::cs::Stream>&value);
std::string F(const pls::cs::Ref<pls::cs::BinaryReader>&value){return value?"reader:"+F(value->get_BaseStream()):"null";}
std::string F(const pls::cs::Ref<pls::cs::MemoryStream>&value){return F(std::static_pointer_cast<pls::cs::Stream>(value));}
std::string F(float value){std::ostringstream out;out<<"f:"<<std::hex<<std::setw(8)<<std::setfill('0')<<pls::cs::bit_copy<std::uint32_t>(value);return out.str();}
std::string F(double value){std::ostringstream out;out<<"d:"<<std::hex<<std::setw(16)<<std::setfill('0')<<pls::cs::bit_copy<std::uint64_t>(value);return out.str();}
template<class R,class...A>std::string F(const pls::cs::Delegate<R(A...)>&value){return value.is_null()?"null":"delegate";}
template<class T>std::string F(T value){return std::to_string(value);}
template<class T>std::string F(const pls::cs::Array<T>& value){if(value.is_null())return "null";std::string out="[";for(std::int32_t i=0;i<value.length();++i)out+=F(value.at(i))+",";return out+"]";}
std::string F(const pls::cs::Ref<pls::cs::Object>&value){if(!value)return "null";if(auto b=std::dynamic_pointer_cast<pls::cs::Box<std::int32_t>>(value))return F(b->value);if(std::dynamic_pointer_cast<pls::cs::ArrayBase>(value))return F(pls::cs::Array<std::int32_t>::from_object(value));throw std::runtime_error("Missing synthetic boxed formatter");}
std::string F(const pls::cs::Ref<pls::cs::ArrayBase>&value){if(!value)return "null";if(value->element_type()==typeid(std::uint8_t))return F(pls::cs::Array<std::uint8_t>::from_object(value));if(value->element_type()==typeid(pls::cs::Array<std::uint8_t>))return F(pls::cs::Array<pls::cs::Array<std::uint8_t>>::from_object(value));throw std::runtime_error("Missing reflective array synthetic formatter");}
template<class K,class V>std::string F(const pls::cs::Dictionary<K,V>&value){if(value.is_null())return "null";std::string out="dict[";auto e=value.GetEnumerator();while(e.MoveNext()){auto p=e.get_Current();out+=F(p.get_Key())+":"+F(p.get_Value())+",";}return out+"]";}
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
    if 'FixtureApp' in report.get('oracle_native_setup',''):
        prototypes.append('std::string F(const pls::cs::Ref<pls::kairo::NativeTextAsset>&value);')
        definitions.append('std::string F(const pls::cs::Ref<pls::kairo::NativeTextAsset>&value){return value?"textasset:"+F(value->get_bytes())+":"+F(value->get_text()):"null";}')
    for cls in CLASSES.values():
        native='pls::generated::'+cls['cpp_name'] if cls.get('is_value_type') else 'pls::cs::Ref<pls::generated::'+cls['cpp_name']+'>'
        signature='std::string F(const '+native+'& value)'
        prototypes.append(signature+';')
        body=signature+'{'
        if not cls.get('is_value_type'):
            object_value='std::dynamic_pointer_cast<pls::cs::Object>(value)' if cls.get('is_interface') else 'value'
            body+='if(!value)return "null";auto object='+object_value+';if(std::find(format_path.begin(),format_path.end(),object.get())!=format_path.end())return "cycle";FormatGuard guard(object.get());'
        body+='std::string out="obj:'+cls['type']+'{";'
        for field in sorted(cls['fields'],key=lambda f:f['declaring_type']+'::'+f['name']):body+='out+="'+field['declaring_type']+'::'+field['name']+':"+F(value'+('.' if cls.get('is_value_type') else '->')+field['cpp_name']+')+",";'
        definitions.append(body+'return out+"}";}')
    object_dispatch=''
    for cls in sorted(CLASSES.values(),key=lambda c:len(c['fields']),reverse=True):
        if not cls.get('is_interface') and not cls.get('is_value_type'):
            object_dispatch+='if(auto typed=std::dynamic_pointer_cast<pls::generated::'+cls['cpp_name']+'>(value))return F(typed);'
    cpp[0]=cpp[0].replace('if(std::dynamic_pointer_cast<pls::cs::ArrayBase>(value))',object_dispatch+'if(std::dynamic_pointer_cast<pls::cs::ArrayBase>(value))')
    # Insert declarations before the generic array formatter for dependent lookup.
    cpp[0]=cpp[0].replace('template<class T>std::string F(T value)', '\n'.join(prototypes)+'\ntemplate<class T>std::string F(T value)')
    stream_f='std::string F(const pls::cs::Ref<pls::cs::Stream>&value){if(!value)return "null";if(auto m=std::dynamic_pointer_cast<pls::cs::MemoryStream>(value))return "mem:"+std::string(m->get_CanRead()?"True":"False")+":"+(m->get_CanSeek()?"True":"False")+":"+(m->get_CanWrite()?"True":"False")+":"+F(m->ToArray())+":"+(m->get_CanSeek()?std::to_string(m->get_Position()):"closed");'
    if 'java.io.WrappedSystemStream' in CLASSES:stream_f+='if(auto typed=std::dynamic_pointer_cast<pls::generated::'+CLASSES['java.io.WrappedSystemStream']['cpp_name']+'>(value))return F(typed);'
    definitions.append(stream_f+'throw std::runtime_error("Missing synthetic stream formatter");}')
    cpp+=definitions
    fields=report['static_fields']
    cs.append('static string SnapshotState(){long start=System.Diagnostics.Stopwatch.GetTimestamp();var builder=new System.Text.StringBuilder();')
    cpp.append('std::string SnapshotState(){auto start=std::chrono::steady_clock::now();std::string result;')
    for field in fields:
        name=field['cpp_name']
        cs.append('builder.Append("|state:").Append(F(SourceOracle.'+name+'));')
        cpp.append('result+="|state:"+F(pls::generated::'+field.get('cpp_accessor',name)+');')
    cs.append('var result=builder.ToString();long formatted=System.Diagnostics.Stopwatch.GetTimestamp();serializationTicks+=formatted-start;var raw=new byte[result.Length*2];for(int i=0;i<result.Length;i++){raw[i*2]=(byte)result[i];raw[i*2+1]=(byte)(result[i]>>8);}using(var hash=System.Security.Cryptography.SHA256.Create()){var digest=BitConverter.ToString(hash.ComputeHash(raw)).Replace("-","").ToLowerInvariant();hashTicks+=System.Diagnostics.Stopwatch.GetTimestamp()-formatted;return "|state-sha256:"+digest;}}')
    cpp.append('auto formatted=std::chrono::steady_clock::now();serialization_time+=formatted-start;pls::assets::Sha256 hash;auto units=pls::cs::String::from_utf8(result);std::vector<std::uint8_t>raw(std::size_t(units.length())*2);for(std::int32_t i=0;i<units.length();i++){auto value=units.at(i);raw[std::size_t(i)*2]=static_cast<std::uint8_t>(value);raw[std::size_t(i)*2+1]=static_cast<std::uint8_t>(value>>8);}hash.update(raw.data(),raw.size());auto digest=hash.finish();hash_time+=std::chrono::steady_clock::now()-formatted;return "|state-sha256:"+digest;}')
    for method_index,method in enumerate(report['emitted_methods']):
        for case_index in range(7):
            case_id=str(method_index)+':'+str(case_index)
            args=[];cs.append('static void cs_case_'+case_id.replace(':','_')+'(){');cpp.append('void cs_case_'+case_id.replace(':','_')+'(){')
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
                if method['id'].startswith('M:java.lang.JString.New(') and parameter['name'] in ('enc','charsetName','encoding'):
                    text=['UTF-8','Shift_JIS','Unicode','ASCII',None,'invalid','UTF-8'][case_index%7]
                    value=('pls::cs::String{}','null') if text is None else ('pls::cs::String(u'+json.dumps(text)+')',json.dumps(text))
                if method['id']=='M:kairo.unity.util.Compressor.Expand(System.Byte[])' and parameter['type']=='byte[]' and case_index>=2:
                    raw=[[0],[0,1,2],[255,0,255],[1,2,3],[1]*7][case_index-2]
                    compress=next(m for m in METHODS if m['id']=='M:kairo.unity.util.Compressor.Compress(System.Byte[])')['cpp_name']
                    contents=','.join(map(str,raw))
                    value=(compress+'(pls::cs::Array<std::uint8_t>::from({'+contents+'}))','SourceOracle.'+compress+'(new byte[]{'+contents+'})')
                if 'kairo.unity.util.JarInflater.#ctor' in method['id'] and parameter['type']=='byte[]':
                    data=[None,[],[0]*12,[0]*11,[0]*12,[0]*8+[255]*4,[0]*12][case_index%7]
                    value=('pls::cs::Array<std::uint8_t>{}','null') if data is None else ('pls::cs::Array<std::uint8_t>::from({'+','.join(map(str,data))+'})','new byte[]{'+','.join(map(str,data))+'}')
                if 'java.util.JTool.MakeArray' in method['id'] and parameter['name']=='counts':
                    counts=[None,[],[2],[2,3],[2,0],[0,2],[-1,2]][case_index%7]
                    value=('pls::cs::Array<std::int32_t>{}','null') if counts is None else ('pls::cs::Array<std::int32_t>::from({'+','.join(map(str,counts))+'})','new int[]{'+','.join(map(str,counts))+'}')
                if 'java.util.JTool.MakeArrayRecursive' in method['id'] and parameter['name']=='index':value='0'
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
            else:managed_invocation='SourceOracle.'+method['cpp_name']+('<'+','.join(method.get('concrete_cs_type_arguments',['int']*len(templates)))+'>' if templates else '')+'('+','.join(args)+')'
            prefix=case_id+'|'
            if method.get('identity_hash_result'):
                cs.append('string result;try{var first='+managed_invocation+';var second='+managed_invocation+';Console.Error.WriteLine("identity-hash|'+case_id+'|"+first);result=first==second?"identity-hash:stable":"identity-hash:UNSTABLE";}catch(Exception e){result="!"+e.GetType().FullName;}')
                cpp.append('std::string result;try{auto first='+invocation+';auto second='+invocation+';std::cerr<<"identity-hash|'+case_id+'|"<<first<<"\\n";result=first==second?"identity-hash:stable":"identity-hash:UNSTABLE";}catch(const pls::cs::Exception&e){result="!"+std::string(e.type_name());}')
            else:
                cs.append('string result;try{'+(managed_invocation+';result="void";' if method['return_type']=='void' else 'result=F('+managed_invocation+');')+'}catch(Exception e){result="!"+e.GetType().FullName;}')
                cpp.append('std::string result;try{'+(invocation+';result="void";' if method['return_type']=='void' else 'result=F('+invocation+');')+'}catch(const pls::cs::Exception& e){result="!"+std::string(e.type_name());}')
            # Compare post-call input arrays and global static state, not only return values.
            for pindex,parameter in enumerate(method['parameters']):
                if parameter['type'].endswith('[]') or parameter['type'] in CLASSES or parameter['type']=='object':
                    cs.append(f'result+="|a{pindex}:"+F(arg{pindex});');cpp.append(f'result+="|a{pindex}:"+F(arg{pindex});')
            if not method['is_static'] and not method['is_constructor']:
                cs.append('result+="|self:"+F(self);');cpp.append('result+="|self:"+F(self);')
            cs.append('result+=SnapshotState();');cpp.append('result+=SnapshotState();')
            cs.append('Console.WriteLine("'+prefix+'"+result);');cpp.append('std::cout<<"'+prefix+'"<<result<<"\\n";')
            cs.append('}');cpp.append('}');cases.append(dict(case=case_id,method=method['id']))
    cs.append('public static void Main(){System.Threading.Thread.CurrentThread.CurrentCulture=CultureInfo.InvariantCulture;System.Threading.Thread.CurrentThread.CurrentUICulture=CultureInfo.InvariantCulture;');cs+=['cs_case_'+case['case'].replace(':','_')+'();' for case in cases];cs.append('System.Console.Error.WriteLine("harness-profile|serialization_seconds="+((double)serializationTicks/System.Diagnostics.Stopwatch.Frequency).ToString("R",CultureInfo.InvariantCulture)+"|hash_seconds="+((double)hashTicks/System.Diagnostics.Stopwatch.Frequency).ToString("R",CultureInfo.InvariantCulture));}}');cpp.append('int main(){pls::cs::runtime_profile=pls::cs::RuntimeProfile::UnityMono265;pls::cs::managed_path_platform=pls::cs::PathPlatform::Windows;pls::cs::install_mono_collation_character_data();pls::cs::set_current_collation_culture(pls::cs::CollationCulture{127,{},"",false});pls::cs::utc_clock_ticks=[](){return std::int64_t(638000000000000000ll);};')
    cpp.append(report.get('oracle_native_setup',''))
    if 'asset_reader.hpp' in (ROOT/'src/kairo/common/generated/portable_generated.hpp').read_text(encoding='utf-8') and options.report.name not in ('lowering-report.json','content-report.json'):
        sys.path.insert(0,str(ROOT/'tools'))
        from test_asset_reader import synthetic_catalog
        catalog_folder=folder/'synthetic-catalog';synthetic_catalog(catalog_folder)
        cpp.append('static pls::assets::Catalog fixture_catalog('+json.dumps(catalog_folder.as_posix())+');pls::assets::install(&fixture_catalog);pls::kairo::configure_storage('+json.dumps((folder/'synthetic-preferences').as_posix())+',&fixture_catalog);')
    cpp+=['cs_case_'+case['case'].replace(':','_')+'();' for case in cases]
    cpp.append('std::cerr<<"harness-profile|serialization_seconds="<<std::chrono::duration<double>(serialization_time).count()<<"|hash_seconds="<<std::chrono::duration<double>(hash_time).count()<<"\\n";return 0;}')
    cs_file=folder/'Harness.cs';cpp_file=folder/'Harness.cpp'
    cs_file.write_text('\n'.join(cs),encoding='utf-8',newline='\n');cpp_file.write_text('\n'.join(cpp),encoding='utf-8',newline='\n')
    compiler,_,_=compiler_paths()
    unity=Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono')
    runtime=unity/'bin/mono.exe';framework=unity/'lib/mono/unity';oracle=folder/'Harness-managed.exe'
    command=[compiler,'/nologo','/noconfig','/nostdlib+','/target:exe','/out:'+str(oracle)]
    command+=['/r:'+str(framework/(name+'.dll')) for name in ['mscorlib','System','System.Core']]+[options.oracle,cs_file]
    run(command,folder,'csharp-compile')
    env=environment();exe=folder/'Harness.exe'
    cpp_command=[shutil.which('cl.exe',path=env['PATH']),'/nologo','/std:c++17','/EHsc','/Od','/fp:strict','/utf-8','/W4',
        '/I'+str(ROOT/'src/kairo/common'),'/I'+str(ROOT/'src/kairo/api'),'/I'+str(ROOT/'src'),'/I'+str(options.generated),'/I'+str(ROOT/'build/generated/mono-collation'),'/Fe:'+str(exe),'/Fo'+str(folder)+'/',cpp_file,ROOT/'src/kairo/common/semantic_runtime.cpp',ROOT/'src/kairo/common/managed_streams.cpp',ROOT/'src/kairo/common/managed_exceptions.cpp',ROOT/'src/kairo/common/managed_thread.cpp',ROOT/'src/kairo/common/managed_encoding.cpp',ROOT/'src/kairo/common/managed_regex.cpp',ROOT/'src/kairo/common/managed_stream_reader.cpp',ROOT/'src/kairo/common/managed_string_ops.cpp',ROOT/'src/kairo/common/managed_collation.cpp',ROOT/'src/kairo/common/managed_mono_character_data.cpp',ROOT/'src/kairo/platform/sdl/globalization.cpp','Advapi32.lib']
    if report.get('oracle_native_setup') and 'FixtureApp' in report['oracle_native_setup']:
        cpp_command += [ROOT/'src/kairo/common/storage.cpp',ROOT/'src/kairo/common/asset_catalog.cpp',ROOT/'src/kairo/common/asset_reader.cpp']
    proof_inputs=set(options.generated.glob('*.?pp'))|set(options.generated.glob('*.inc'))|set((ROOT/'src/kairo/common').rglob('*.hpp'))|set((ROOT/'src/kairo/api').rglob('*.hpp'))|set((ROOT/'build/generated/mono-collation').glob('*.*'))|{Path(p) for p in cpp_command if Path(str(p)).suffix=='.cpp'}
    proof_before={str(p):hashlib.sha256(p.read_bytes()).hexdigest() for p in proof_inputs}
    run(cpp_command,folder,'native-compile',env)
    expected=run([runtime,oracle],folder,'managed-output',dict(env,MONO_PATH=str(framework))).splitlines();actual=run([exe],folder,'native-output',env).splitlines()
    if len(expected)!=len(cases) or len(actual)!=len(cases):raise ValueError('Missing differential output cases')
    failures=[dict(cases[i],expected=expected[i],actual=actual[i]) for i in range(len(cases)) if expected[i]!=actual[i]]
    known_platform=[failure for failure in failures if failure['method']=='M:java.lang.JMath.Sin(System.Double)' and failure['expected'].split('|')[1]=='d:0000000000000000' and failure['actual'].split('|')[1]=='d:8000000000000000']
    unexpected=[failure for failure in failures if failure not in known_platform]
    nonmatching_methods={failure['method'] for failure in failures}
    if any(hashlib.sha256(Path(p).read_bytes()).hexdigest()!=h for p,h in proof_before.items()):raise RuntimeError('Differential native inputs changed concurrently; rerun before publishing')
    result=dict(operation='differential-generated-portable-method-source-oracle',cases=len(cases),passed=len(cases)-len(failures),
        methods=len(report['emitted_methods']),verified_method_ids=[m['id'] for m in report['emitted_methods'] if m['id'] not in nonmatching_methods],known_platform_differences=[dict(method=f['method'],case=f['case'],note='Windows Unity Mono Math.Sin(-0) returns +0 while std::sin returns -0; Android runtime sign UNKNOWN, original Android Mono imports sin. Production call is unchanged.') for f in known_platform],unexpected_failures=[dict(method=f['method'],case=f['case']) for f in unexpected],executed_method_ids=[m['id'] for m in report['emitted_methods']],
        failures=[dict(method=f['method'],case=f['case']) for f in failures],
        scalar_float_comparison='exact IEEE bits',identity_hash_comparison='For exact return base.GetHashCode bodies only: repeated calls must be stable; allocation-dependent raw values are recorded privately and are not compared across runtimes.',identity_hash_method_ids=[m['id'] for m in report['emitted_methods'] if m.get('identity_hash_result')],post_state_compared=True,original_binaries_used=False,execution_seconds=RUN_TIMINGS,
        game_executed=False,runtime_profile='UnityMono265; actual Unity 5.3.4f1 SDK Mono source oracle, culture fixed invariant before first source type initialization',
        source_oracle_sha256=hashlib.sha256(options.oracle.read_bytes()).hexdigest(),
        cpp_generated_sha256=hashlib.sha256((options.generated/'portable_generated.cpp').read_bytes()).hexdigest(),
        hpp_generated_sha256=hashlib.sha256((options.generated/'portable_generated.hpp').read_bytes()).hexdigest(),
        generated_files=[dict(path=p.relative_to(ROOT).as_posix(),sha256=hashlib.sha256(p.read_bytes()).hexdigest()) for p in sorted(set(options.generated.glob('*.?pp'))|set(options.generated.glob('*.inc')))],
        native_compiler_options=['/std:c++17','/EHsc','/Od','/fp:strict','/utf-8','/W4'],native_compiler_sha256=hashlib.sha256(Path(cpp_command[0]).read_bytes()).hexdigest(),
        native_executable=dict(path=exe.relative_to(ROOT).as_posix(),sha256=hashlib.sha256(exe.read_bytes()).hexdigest()),
        source_oracle_executable=dict(path=oracle.relative_to(ROOT).as_posix(),sha256=hashlib.sha256(oracle.read_bytes()).hexdigest()),
        differential_runner_sha256=hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),
        runtime_sources=[dict(path=p.relative_to(ROOT).as_posix(),sha256=proof_before[str(p)]) for p in sorted(proof_inputs)],
        snapshot_comparison='SHA256 of every UTF-16LE byte of the complete deterministic post-state serialization; no field, value or surrogate normalization',
        oracle_framework=[dict(filename=(name+'.dll'),sha256=hashlib.sha256((framework/(name+'.dll')).read_bytes()).hexdigest())for name in ['mscorlib','System','System.Core']],
        comparison_profile='Standalone readonly-source oracle compiled with current Roslyn against Unity SDK mscorlib/System/System.Core; executes on Unity Mono 2.6.5. Native target UnityMono265, invariant fixture culture.')
    (folder/'failures.json').write_text(json.dumps(failures,indent=2)+'\n',encoding='utf-8',newline='\n')
    options.result.write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps({k:result[k] for k in ['cases','passed','methods','game_executed']}))
    if unexpected:raise ValueError('Unexpected native/source differential mismatches; see private failures.json')


if __name__=='__main__':main()
