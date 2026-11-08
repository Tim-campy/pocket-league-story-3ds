// Manually expressed language-oracle fixtures. These validate the runtime, not
// coverage of the production translator. Only own synthetic data is present.
#include "semantic_runtime.hpp"
#include <iostream>
#include <sstream>

using namespace pls::cs;
using I=std::int32_t;using L=std::int64_t;
static std::string trace;
static I mark(const char*label,I value){trace+=label;return value;}
static I join(I a,I b,I c){return add_i32(add_i32(mul_i32(a,100),mul_i32(b,10)),c);}
template<class F>std::string type_of(F body){try{body();return "none";}catch(const Exception&ex){return ex.type_name();}}
struct CounterClosure {Ref<Cell<I>>value=std::make_shared<Cell<I>>(4);I invoke(){value->value=add_i32(value->value,3);return value->value;}};
static Delegate<I()>make_counter(){auto closure=std::make_shared<CounterClosure>();return Delegate<I()>::bind(closure,"counter",[closure]{return closure->invoke();});}
static I property;
static I property_get(){trace+='G';return property;}
static void property_set(I value){trace+='S';property=value;}
static I choose(I value){switch(value){case 1:return 11;case 3:case 4:return 22;default:return 33;}}

int main(int argc,char**argv){
    if(argc>1 && std::string(argv[1])=="mono")runtime_profile=RuntimeProfile::UnityMono265;
    if(argc>1 && std::string(argv[1])=="dotnet")runtime_profile=RuntimeProfile::DotNet;
    const I maximum=std::numeric_limits<I>::max(),minimum=std::numeric_limits<I>::min(),minus_one=-1;
    const L maximum64=std::numeric_limits<L>::max(),minimum64=std::numeric_limits<L>::min();
    std::cout<<"i32="<<add_i32(maximum,1)<<','<<sub_i32(minimum,1)<<','<<mul_i32(maximum,3)<<','<<neg_i32(minimum)<<'\n';
    std::cout<<"i64="<<add_i64(maximum64,1)<<','<<sub_i64(minimum64,1)<<','<<mul_i64(maximum64,3)<<','<<neg_i64(minimum64)<<'\n';
    std::cout<<"unsigned="<<cast_integral<std::uint32_t>(minus_one)<<','<<cast_integral<std::uint64_t>(L(-1))<<'\n';
    std::cout<<"casts="<<I(cast_integral<std::int8_t>(255))<<','<<cast_integral<std::int16_t>(65535)<<','<<cast_integral<I>(std::uint32_t(4294967295u))<<'\n';
    std::cout<<"division="<<div_i32(-7,3)<<','<<mod_i32(-7,3)<<','<<div_i32(7,-3)<<','<<mod_i32(7,-3)<<'\n';
    std::cout<<"min-div="<<type_of([&]{std::cout<<div_i32(minimum,minus_one);})<<'\n';
    std::cout<<"min-rem="<<type_of([&]{if(mod_i32(minimum,minus_one)!=0)throw Exception();})<<'\n';
    std::cout<<"divide-zero="<<type_of([]{std::cout<<div_i32(3,0);})<<'\n';
    std::cout<<"shifts="<<shr_i32(minus_one,1)<<','<<ushr_i32(minus_one,1)<<','<<shl_i32(1,32)<<','<<shl_i32(1,-1)<<'\n';
    trace.clear();I joined=[&]{auto a=mark("A",1);auto b=mark("B",2);auto c=mark("C",3);return join(a,b,c);}();std::cout<<"arguments="<<trace<<','<<joined<<'\n';
    trace.clear();Array<I>missing;auto assignment=type_of([&]{auto a=missing;auto index=mark("I",0);auto rhs=mark("R",1);a.at(index)=rhs;});std::cout<<"array-store="<<trace<<','<<assignment<<'\n';
    trace.clear();auto one=Array<I>::make(1);auto bounds=type_of([&]{auto a=one;auto index=mark("I",9);auto rhs=mark("R",1);a.at(index)=rhs;});std::cout<<"array-bounds-store="<<trace<<','<<bounds<<'\n';
    trace.clear();auto compound=type_of([&]{auto a=one;auto index=mark("I",9);auto old=a.at(index);auto rhs=mark("R",1);a.at(index)=add_i32(old,rhs);});std::cout<<"array-compound="<<trace<<','<<compound<<'\n';
    String text(std::u16string{u'A',char16_t(0xD83D),char16_t(0xDE00),char16_t(0),u'Z'});
    std::cout<<"utf16="<<text.length()<<','<<I(text.at(1))<<','<<I(text.at(2))<<','<<I(text.at(3))<<'\n';
    auto sign=[](I value){return (value>0)-(value<0);};
    std::cout<<"ordinal="<<sign(String::compare_ordinal(String(u"a"),String(u"c")))<<','<<sign(String::compare_ordinal(String(u"a"),String(u"aaa")))<<','<<sign(String::compare_ordinal(String(),String(u"")))<<','<<(String()==String(u"")?"True":"False")<<'\n';
    std::cout<<"concat="<<String::concat(String(),String(u"x")).utf8()<<','<<String::concat(String(),String()).length()<<'\n';
    std::cout<<"string-null="<<type_of([]{String s;std::cout<<s.length();})<<'\n';
    std::cout<<"string-bounds="<<type_of([&]{std::cout<<I(text.at(99));})<<'\n';
    auto original=Array<I>::from({1,2,3,4});auto alias=original;alias.at(0)=8;Array<I>::copy(original,0,original,1,3);
    std::cout<<"array-alias="<<original.at(0)<<','<<original.at(1)<<','<<original.at(2)<<','<<original.at(3)<<'\n';
    std::cout<<"array-null="<<type_of([]{Array<I>n;std::cout<<n.length();})<<'\n';
    std::cout<<"array-negative="<<type_of([]{auto x=Array<I>::make(-1);std::cout<<x.length();})<<'\n';
    trace.clear();try{run_finally([]{try{throw DivideByZeroException();}catch(const ArithmeticException&){trace+='C';throw;}},[]{trace+='F';});}catch(const SystemException&){trace+='O';}std::cout<<"exception="<<trace<<'\n';
    std::cout<<"finally-replace="<<type_of([]{run_finally([]{throw DivideByZeroException();},[]{throw InvalidOperationException();});})<<'\n';
    I output=2;I returned=run_finally([&]{return output;},[&]{output=7;});std::cout<<"finally-return="<<returned<<','<<output<<'\n';
    auto counter=make_counter();I first=counter();I second=counter();std::cout<<"closure="<<first<<','<<second<<'\n';
    trace.clear();Delegate<void()>changed;auto a=Delegate<void()>::from_static("A",[]{trace+='A';});auto b=Delegate<void()>::from_static("B",[]{trace+='B';});changed+=a;changed+=b;changed+=a;changed-=a;changed();std::cout<<"event="<<trace<<'\n';
    trace.clear();property_set(5);I old=property_get();property_set(add_i32(old,2));std::cout<<"property="<<trace<<','<<property<<'\n';
    std::cout<<"switch="<<choose(1)<<','<<choose(4)<<','<<choose(9)<<'\n';
    I total=0;goto add;again:total=add_i32(total,10);goto done;add:total=add_i32(total,3);goto again;done:std::cout<<"goto="<<total<<'\n';
    float f=16777216.0f;float g=f+1.0f;g-=f;double d=9007199254740992.0;double e=d+1.0;e-=d;
    std::cout<<"float-width="<<g<<','<<e<<','<<bit_copy<I>(0.1f)<<','<<bit_copy<L>(0.1)<<'\n';
}
