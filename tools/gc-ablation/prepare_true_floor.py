"""Prepare a handwritten checked floor with no hot production-runtime helpers.

This local experiment reuses the private fixture loader and compact prototype
data projection. It is never linked into the game or used as translated source.
"""
import argparse,hashlib,json,re
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2]
BASE=ROOT/'build/gc-prototype'
FILES=['probe_numeric.hpp','probe_type_init.hpp','probe_types.hpp','tracing_heap.hpp','harness.cpp']
HELPERS=r'''
#include <cstring>
#include <limits>
namespace true_floor {
inline int add(int a,int b)noexcept{const auto bits=std::uint32_t(a)+std::uint32_t(b);int result;std::memcpy(&result,&bits,4);return result;}
inline int sub(int a,int b)noexcept{const auto bits=std::uint32_t(a)-std::uint32_t(b);int result;std::memcpy(&result,&bits,4);return result;}
template<class F>inline int integer(F value)noexcept{
    if(!(value>=F(-2147483648.0)&&value<F(2147483648.0)))return std::numeric_limits<int>::min();
    return static_cast<int>(value);
}
template<class T>inline T* require(T* value){if(!value)throw pls::cs::NullReferenceException();return value;}
template<class T>inline int length(pls::cs::Array<T> value){if(!value.ptr)throw pls::cs::NullReferenceException();return value.ptr->size;}
template<class T>inline T& element(pls::cs::Array<T> value,int index){
    if(!value.ptr)throw pls::cs::NullReferenceException();
    if(std::uint32_t(index)>=std::uint32_t(value.ptr->size))throw pls::cs::IndexOutOfRangeException();
    return reinterpret_cast<T*>(value.ptr->data)[index];
}
}
'''
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--output',type=Path,required=True)
    parser.add_argument('--numeric-model',choices=['binary32','mono-arm-vfp'],default='binary32')
    a=parser.parse_args();folder=a.output.resolve()
    if not folder.is_relative_to(ROOT/'build') or folder.exists():raise ValueError('Use a fresh private directory')
    original=(BASE/'kernels.cpp').read_text();prefix=original.split('void cs_ce67d59af0bdb552(')[0]
    fields=re.findall(r'^static (.+?) (cs_[a-f0-9]+_value)\{\};',prefix,re.M)
    if len(fields)!=8:raise ValueError('Expected eight captured static fields')
    prefix=re.sub(r'^static (.+? cs_[a-f0-9]+_value\{\};)',r'\1',prefix,flags=re.M)+'}\n'
    body=(Path(__file__).with_name('handwritten.cpp')).read_text()
    body=body[body.index('#include "probe_types.hpp"'):]
    if a.numeric_model=='mono-arm-vfp':
        replacements={
            'conv_i32(left*right)':'conv_i32(double(left)*double(right))',
            'conv_i32(static_cast<float>(data.at(y).at(x))/weight)':'conv_i32(double(static_cast<float>(data.at(y).at(x)))/double(weight))',
            'x1+w1<x2':'double(x1)+double(w1)<double(x2)',
            'x1>x2+w2':'double(x1)>double(x2)+double(w2)',
            'y1<y2-h2':'double(y1)<double(y2)-double(h2)',
            'y1-h1>y2':'double(y1)-double(h1)>double(y2)',
            'y1+h1<y2':'double(y1)+double(h1)<double(y2)',
            'y1>y2+h2':'double(y1)>double(y2)+double(h2)',
        }
        for old,new in replacements.items():
            if body.count(old)!=1:raise ValueError('Handwritten float expression changed: '+old)
            body=body.replace(old,new)
    declarations='\nnamespace pls::game {\n'+''.join(f'extern {t} {name};\n' for t,name in fields)+'}\n'
    body=body.replace('#include "probe_types.hpp"','#include "probe_types.hpp"\n'+HELPERS+declarations)
    body=re.sub(r'cs_init_[a-f0-9]+\(\);','',body)
    for _,name in fields:body=body.replace(name[:-6]+'()',name)
    # Expand the three nested array forms first, then simple local/field uses.
    body=re.sub(r'(\w+)\.at\((\w+)\)\.at\((\w+)\)',r'true_floor::element(true_floor::element(\1,\2),\3)',body)
    body=re.sub(r'(\w+(?:->\w+)?)\.at\(([^()]*)\)',r'true_floor::element(\1,\2)',body)
    body=re.sub(r'(\w+(?:->\w+)?)\.length\(\)',r'true_floor::length(\1)',body)
    for source,target in [('add_i32','true_floor::add'),('sub_i32','true_floor::sub'),('conv_i32','true_floor::integer'),('cs_require','true_floor::require')]:body=body.replace(source+'(',target+'(')
    body=body.replace('cast_integral<std::uint8_t>','static_cast<std::uint8_t>')
    if re.search(r'\.at\(|\.length\(|cs_init_|conv_i32|add_i32|sub_i32|cs_require|cast_integral',body):raise ValueError('A hot production helper remains')
    folder.mkdir(parents=True)
    for name in FILES:(folder/name).write_bytes((BASE/name).read_bytes())
    # The historical compact prototype used a one-byte trailing member and
    # separately placement-constructed elements. Do not use that extension as
    # the correctness basis of this floor: construct a real T[n] array and keep
    # its returned pointer. The header and payload still share one allocation.
    types=(folder/'probe_types.hpp').read_text()
    types=types.replace('struct Storage {std::int32_t size;alignas(T) unsigned char data[1];};',
                        'struct Storage {std::int32_t size;T* data;};')
    types=types.replace('constexpr auto offset=offsetof(Storage,data);',
                        'constexpr auto offset=(sizeof(Storage)+alignof(T)-1)&~(alignof(T)-1);')
    types=types.replace('p->size=n;for(int i=0;i<n;++i)new(p->data+i*sizeof(T))T{};',
                        'auto elements=::new(static_cast<void*>(reinterpret_cast<unsigned char*>(p)+offset))T[std::size_t(n)]{};::new(static_cast<void*>(p))Storage{n,elements};')
    if 'data[1]' in types or 'p->data+i*sizeof(T)' in types:raise ValueError('Historical trailing-member array remains')
    (folder/'probe_types.hpp').write_text(types)
    harness=(folder/'harness.cpp').read_text()
    harness=harness.replace('        for(int batch=0;batch<5;++batch)',
        '        const auto warm_until=tick()+freq.QuadPart/5;do{for(auto&c:cases){c.reset();c.call();}}while(tick()<warm_until);\n        for(int batch=0;batch<5;++batch)')
    (folder/'harness.cpp').write_text(harness)
    (folder/'kernels.cpp').write_text(prefix,encoding='utf8');(folder/'true_floor.cpp').write_text(body,encoding='utf8')
    paths=[BASE/name for name in FILES]+[BASE/'kernels.cpp',Path(__file__),Path(__file__).with_name('handwritten.cpp')]
    report=dict(status='PREPARED_NOT_MEASURED',inputs={str(p.relative_to(ROOT)):sha(p) for p in paths},files={p.name:sha(p) for p in folder.iterdir() if p.is_file()},limits=['No product changes','Globals are initialized by the fixture before timed calls','Null and bounds checks remain; integer arithmetic wraps; float-to-int rejects nonrepresentable values before C++ conversion','Private data projection, not production layout: a real placement T[n] array follows a header containing length and data pointer; no trailing-member extension','Header/fixture setup may use prototype helpers; five timed bodies call only the independently written inline operations shown here'])
    report['numeric_model']=a.numeric_model
    (folder/'preparation.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(dict(folder=str(folder),status=report['status'])))
if __name__=='__main__':main()
