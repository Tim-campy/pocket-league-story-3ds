#include "managed_dictionary.hpp"
#include <iostream>
using namespace pls::cs;
struct MutableDispatch:Object {
    std::int32_t Calls=0;
    bool Equals(const Ref<Object>&value)override{++Calls;return bool(std::dynamic_pointer_cast<MutableDispatch>(value));}
    std::int32_t GetHashCode()override{++Calls;return 17;}
    String ToString()override{++Calls;return String::from_utf8("calls:"+std::to_string(Calls));}
};
struct NamedDispatch:Object{std::string managed_type_name()const override{return "NamedDispatch";}};
static const char*tf(bool value){return value?"True":"False";}
int main(int argc,char**argv){if(argc>1&&std::string(argv[1])=="dotnet")runtime_profile=RuntimeProfile::DotNet;
    auto instance=make_ref<MutableDispatch>();Ref<Object>obj=instance;auto equals=obj->Equals(make_ref<MutableDispatch>());std::cout<<"equals="<<tf(equals)<<','<<instance->Calls<<'\n';auto hash=obj->GetHashCode();std::cout<<"hash="<<hash<<','<<instance->Calls<<'\n';auto rendered=obj->ToString();std::cout<<"text="<<rendered.utf8()<<','<<instance->Calls<<'\n';
    auto list=List<Ref<Object>>::make();list.Add(obj);auto contains=list.Contains(make_ref<MutableDispatch>());std::cout<<"list-dispatch="<<tf(contains)<<','<<instance->Calls<<'\n';
    auto dict=Dictionary<Ref<Object>,std::int32_t>::make();dict.Add(obj,1);auto found=dict.ContainsKey(obj);std::cout<<"dictionary-dispatch="<<tf(found)<<','<<instance->Calls<<'\n';
    std::cout<<"base-name="<<make_ref<Object>()->ToString().utf8()<<'\n';std::cout<<"derived-name="<<make_ref<NamedDispatch>()->ToString().utf8()<<'\n';
    auto text=String(u"ab");auto str=text.as_object();auto returned=str->ToString();std::cout<<"string-text="<<returned.utf8()<<','<<tf(text.as_object()==returned.as_object())<<'\n';
    Ref<Object>values[]={box(true),box(false),box(char16_t(u'Z')),box(std::uint8_t(255)),box(std::int8_t(-128)),box(std::numeric_limits<std::int16_t>::min()),box(std::numeric_limits<std::uint16_t>::max()),box(std::numeric_limits<std::int32_t>::min()),box(std::numeric_limits<std::uint32_t>::max()),box(std::numeric_limits<std::int64_t>::min()),box(std::numeric_limits<std::uint64_t>::max())};
    for(std::size_t i=0;i<sizeof(values)/sizeof(values[0]);++i)std::cout<<"boxed-"<<i<<'='<<values[i]->ToString().utf8()<<'\n';
    integer_number_format.negative_sign=String(u"minus");std::cout<<"boxed-culture="<<box(std::int32_t(-42))->ToString().utf8()<<'\n';
}
