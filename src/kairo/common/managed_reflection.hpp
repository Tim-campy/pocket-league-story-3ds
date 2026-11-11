#pragma once
// Closed metadata used by source-generated typeof/array construction. This is
// not a CLR loader: unresolved names outside the registered set fail explicitly.
#include "semantic_runtime.hpp"
#include <map>
#include <set>
#include <typeindex>

namespace pls::cs {
class RuntimeAssembly;
class RuntimeType : public Object {
public:
    static Ref<RuntimeType>for_name(const std::string&);
    String full_name;
    std::function<Ref<ArrayBase>(std::int32_t)> create_array;
    std::function<void(const Ref<ArrayBase>&,const Ref<Object>&,std::int32_t)> assign_array_element;
    explicit RuntimeType(String name):full_name(std::move(name)){}
    String get_FullName(){return full_name;}
    String get_Name(){auto text=full_name.utf8();auto offset=text.find_last_of(".+");return String::from_utf8(offset==std::string::npos?text:text.substr(offset+1));}
    Ref<RuntimeAssembly>get_Assembly();
    void trace_edges(const EdgeVisitor&visitor)const override{trace_value(full_name,visitor);}
    void release_edges()override{full_name={};}
};
struct RuntimeTypeRegistry {
    std::recursive_mutex mutex;
    std::map<std::string,Ref<RuntimeType>> names{};
    std::map<std::type_index,Ref<RuntimeType>> elements{};
    std::set<std::string> proven_absent_names;
};
inline RuntimeTypeRegistry&runtime_types(){static RuntimeTypeRegistry value;static GcRootProvider roots([](const EdgeVisitor&visitor){for(const auto&entry:value.names)trace_value(entry.second,visitor);for(const auto&entry:value.elements)trace_value(entry.second,visitor);});return value;}
inline Ref<RuntimeType>RuntimeType::for_name(const std::string&name){auto&registry=runtime_types();std::lock_guard<std::recursive_mutex>lock(registry.mutex);auto&value=registry.names[name];if(!value)value=make_ref<RuntimeType>(String::from_utf8(name));return value;}
class RuntimeAssembly : public Object {
public:
    Ref<RuntimeType>GetType(const String&name){
        if(name.is_null())throw ArgumentNullException();auto text=name.utf8();if(text.empty())throw ArgumentException();
        auto&registry=runtime_types();std::lock_guard<std::recursive_mutex>lock(registry.mutex);
        auto found=registry.names.find(text);if(found!=registry.names.end())return found->second;
        if(registry.proven_absent_names.count(text))return {};
        throw NotSupportedException("Assembly.GetType name has no generated metadata descriptor");
    }
};
inline Ref<RuntimeAssembly>RuntimeType::get_Assembly(){static auto value=make_ref<RuntimeAssembly>();static GcRootProvider roots([](const EdgeVisitor&visitor){trace_value(value,visitor);});return value;}
template<class T>struct reflection_array_element {static constexpr bool is_array=false;};
template<class T>struct reflection_array_element<Array<T>> {static constexpr bool is_array=true;using type=T;};
template<class T>Ref<RuntimeType>runtime_type_of(){
    auto&registry=runtime_types();std::lock_guard<std::recursive_mutex>lock(registry.mutex);
    auto name=managed_type_name_traits<T>::name();auto found=registry.names.find(name);if(found!=registry.names.end())return found->second;
    auto value=make_ref<RuntimeType>(String::from_utf8(name));registry.names.emplace(name,value);registry.elements.emplace(std::type_index(typeid(T)),value);
    value->create_array=[](std::int32_t length){return pls::cs::static_pointer_cast<ArrayBase>(Array<T>::make(length).as_object());};
    value->assign_array_element=[](const Ref<ArrayBase>&array,const Ref<Object>&item,std::int32_t index){auto typed=Array<T>::from_object(array);typed.at(index)=item?unbox<T>(item):T{};};
    if constexpr(reflection_array_element<T>::is_array)runtime_type_of<typename reflection_array_element<T>::type>();
    else if(name.size()>2)registry.proven_absent_names.insert(name.substr(0,name.size()-2));
    return value;
}
inline Ref<ArrayBase>runtime_create_array(const Ref<RuntimeType>&element,std::int32_t length){if(!element)throw ArgumentNullException();if(length<0)throw ArgumentOutOfRangeException();if(!element->create_array)throw NotSupportedException("Array.CreateInstance type has no generated array factory");return element->create_array(length);}
inline void runtime_array_set_value(const Ref<ArrayBase>&array,const Ref<Object>&value,std::int32_t index){
    if(!array)throw NullReferenceException();auto&registry=runtime_types();std::lock_guard<std::recursive_mutex>lock(registry.mutex);
    auto found=registry.elements.find(std::type_index(array->element_type()));if(found==registry.elements.end())throw NotSupportedException("Array.SetValue element has no generated metadata descriptor");
    found->second->assign_array_element(array,value,index);
}
} // namespace pls::cs
