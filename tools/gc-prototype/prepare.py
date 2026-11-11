from pathlib import Path
import re,json,hashlib
ROOT=Path(__file__).resolve().parents[2]
HERE=ROOT/'build/gc-prototype'
HERE.mkdir(parents=True,exist_ok=True)
BASE=ROOT/'build/game-diagnostic-runtime-consolidated-20261110'
IDS=['cs_ce67d59af0bdb552','cs_440a39169e42578b','cs_885d2f23113de984','cs_75873ce2f7c043dd','cs_e2cc7be9866cb657']
FILES=['game_generated_type_ca6f5bbc06a496a9.cpp','game_generated_type_403f4e6631bd3667.cpp','game_generated_type_403f4e6631bd3667.cpp','game_generated_type_1815a6964debf82a.cpp','game_generated_type_2ffa6f51468590ea_cpp_part_0000.inc']
def body(text,name):
    m=re.search(r'^(?:void|bool|std::int32_t) '+name+r'\([^\n]*\) \{',text,re.M)
    if not m:raise ValueError(name)
    b=text.index('{',m.start());n=1;e=b+1
    while n:n+=(text[e]=='{')-(text[e]=='}');e+=1
    return text[m.start():e]
bodies=[body((BASE/p).read_text(),name) for name,p in zip(IDS,FILES)]
prefix=(ROOT/'src/kairo/common/semantic_runtime.hpp').read_text().split('class String;')[0]
(HERE/'probe_numeric.hpp').write_text(prefix+'\n}\n')
init=(ROOT/'src/kairo/common/managed_type_init.hpp').read_text().replace('#include "semantic_runtime.hpp"','#include "probe_numeric.hpp"')
(HERE/'probe_type_init.hpp').write_text(init)
types=r'''#pragma once
#include "probe_numeric.hpp"
#include "probe_type_init.hpp"
#include "tracing_heap.hpp"
#include <array>
#define PLS_METHOD_SCOPE(...)
namespace probe {inline bool loading_fixture=false;}
namespace pls::cs {
template<class T>using Ref=T*;
template<class T>struct Map {static probe::Layout layout(){return {};}};
template<class T>struct Array {
    struct Storage {std::int32_t size;alignas(T) unsigned char data[1];};
    Storage* ptr=nullptr;
    static_assert(std::is_trivially_copyable_v<T>);
    static Array make(std::int32_t n){
        if(n<0)throw OverflowException();
        constexpr auto offset=offsetof(Storage,data);
        if(std::size_t(n)>(SIZE_MAX-offset)/sizeof(T))throw OutOfMemoryException();
        probe::Layout layout{};
        if constexpr(!std::is_arithmetic_v<T>){static const std::size_t edge=offset;layout={&edge,1,sizeof(T),std::size_t(n)};}
        auto p=static_cast<Storage*>(probe::heap().allocate(std::max(sizeof(Storage),offset+std::size_t(n)*sizeof(T)),layout));
        p->size=n;for(int i=0;i<n;++i)new(p->data+i*sizeof(T))T{};
        if(probe::loading_fixture)probe::heap().fixture_root(p);
        return {p};
    }
    bool is_null()const noexcept{return !ptr;}
    std::int32_t length()const{if(!ptr)throw NullReferenceException();return ptr->size;}
    T& at(std::int32_t i)const{if(!ptr)throw NullReferenceException();if(i<0||i>=ptr->size)throw IndexOutOfRangeException();return reinterpret_cast<T*>(ptr->data)[i];}
    T get_Item(std::int32_t i)const{return at(i);}
    void set_Item(std::int32_t i,T value)const{at(i)=value;}
};
template<class T,class...A>T* make_ref(A&&...args){auto p=new(probe::heap().allocate(sizeof(T),Map<T>::layout()))T(std::forward<A>(args)...);if(probe::loading_fixture)probe::heap().fixture_root(p);return p;}
struct GcMutatorScope{}; // The five kernels run on the single registered test thread.
}
namespace pls::generated {struct cs_3c64e1d398f2e00f{float cs_5940b7db44d7fcc3{},cs_3f971496b3e90e07{};};}
namespace pls::game {
template<class T>T* cs_require(T* value){if(!value)throw pls::cs::NullReferenceException();return value;}
struct cs_403f4e6631bd3667{pls::cs::Array<float> cs_86f9bdd77df832c7;};
struct cs_2ffa6f51468590ea{
    pls::cs::Array<pls::cs::Array<int>> cs_64448a7513b68aab,cs_a983c6db567ab7de;
    pls::cs::Array<std::uint8_t> cs_797d22d4c2c75df4;
    int cs_dcc4c8afca6eace7{},cs_6de10b92fdc859b0{},cs_3d3b5753ef643c4e{};
};
inline float cs_f32(std::uint32_t v){return pls::cs::bit_copy<float>(v);}
'''
statics={'cs_9bf7f8f14a7b18c8':('std::int32_t','ca6f5bbc06a496a9'),'cs_0b895d788cf303f2':('std::int32_t','ca6f5bbc06a496a9'),'cs_56196b1ca040e8ab':('std::int32_t','ca6f5bbc06a496a9'),'cs_011e7ba02b8a8647':('std::int32_t','ca6f5bbc06a496a9'),'cs_026b8db91320700d':('pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f>','ca6f5bbc06a496a9'),'cs_ad318f24aaa1750d':('pls::cs::Array<pls::cs::Array<int>>','403f4e6631bd3667'),'cs_4f935210abbc9091':('std::int32_t','5d7ab327c8a1ff44'),'cs_3618bfacb06c987c':('std::int32_t','5d7ab327c8a1ff44')}
# Derive Map's actual owner ID from the existing field accessor definition.
for key in ['cs_4f935210abbc9091','cs_3618bfacb06c987c']:
    matches=[]
    for path in BASE.glob('*.cpp'):
        m=re.search(r'^std::int32_t& '+key+r'\(\)\{cs_init_([a-f0-9]+)\(\);',path.read_text(),re.M)
        if m:matches.append(m[1])
    if len(matches)!=1:raise ValueError((key,matches))
    statics[key]=(statics[key][0],matches[0])
owners=sorted({owner for _,owner in statics.values()}|{'1815a6964debf82a','2ffa6f51468590ea'})
for owner in owners:types+=f'void cs_init_{owner}();\n'
for key,(t,owner) in statics.items():types+=f'{t}& {key}();\n'
for b in bodies:types+=b[:b.index('{')].strip()+';\n'
types+='}\nnamespace pls::cs {\n'
for t,fields in [('pls::game::cs_403f4e6631bd3667',['cs_86f9bdd77df832c7']),('pls::game::cs_2ffa6f51468590ea',['cs_64448a7513b68aab','cs_a983c6db567ab7de','cs_797d22d4c2c75df4'])]:
    offsets=','.join(f'offsetof({t},{f})' for f in fields)
    types+=f'template<>struct Map<{t}>{{static probe::Layout layout(){{static const std::size_t offsets[]={{{offsets}}};return {{offsets,{len(fields)},0,1}};}}}};\n'
types+='}\n'
(HERE/'probe_types.hpp').write_text(types)
code='#include "probe_types.hpp"\nnamespace pls::game {\n'
for owner in owners:code+=f'void cs_init_{owner}(){{static pls::cs::TypeInitState state;state.run("probe-captured-type",[]{{}});}}\n'
for key,(t,owner) in statics.items():code+=f'static {t} {key}_value{{}};\n{t}& {key}(){{cs_init_{owner}();return {key}_value;}}\n'
code+='\n'.join(bodies)+'\n}\n'
(HERE/'kernels.cpp').write_text(code)
h=(ROOT/'tools/profiling/hot_methods_native.cpp').read_text()
h=re.sub(r'#include "[^"]+"\n','',h)
h='#include "probe_types.hpp"\n'+h
h=h.replace('pls::assets::Catalog assets(std::filesystem::u8path(argv[3]));pls::kairo::install_asset_catalog(&assets);','')
h=h.replace('std::ifstream r(path,std::ios::binary);Case c;','std::ifstream r(path,std::ios::binary);Case c;probe::loading_fixture=true;')
h=h.replace('throw std::runtime_error("Capture trailing bytes");return c;','throw std::runtime_error("Capture trailing bytes");probe::loading_fixture=false;return c;')
h=h.replace('for(int k=0;k<10;++k)for(auto&c:cases)', 'probe::heap().collect();for(int k=0;k<10;++k)for(auto&c:cases)')
h=h.replace('\n    }\n}catch', '\n        cases.clear();probe::heap().clear_fixture_roots();probe::heap().collect();\n    }\n}catch')
(HERE/'harness.cpp').write_text(h)
proof=dict(scope='Isolated numeric-array kernel projection; five unchanged generated bodies; projected unused fields and static initializer bodies excluded, captured statics restored outside timings. Original TypeInitState fast/slow path retained. No covariance exercised. Single mutator; no production claims.',bodies=[dict(id=i,source=f,sha256=hashlib.sha256(b.encode()).hexdigest())for i,f,b in zip(IDS,FILES,bodies)],reference_representation='Raw T*; array is a trivially copied one-pointer value; no refcount/barrier/copy hook',inputs='80 local captured files, not copied into sources')
(HERE/'projection.json').write_text(json.dumps(proof,indent=2)+'\n')
print(json.dumps(proof))

import shutil
for name in ['tracing_heap.hpp','heap_test.cpp']:
    shutil.copyfile(Path(__file__).resolve().parent/name,HERE/name)
