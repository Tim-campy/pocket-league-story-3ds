#include "application.hpp"
#include "../../src/kairo/platform/sdl/globalization.hpp"
#include <cstring>
#include <iomanip>
#include <iostream>
#include <sstream>
using namespace pls::cs;
namespace {
int assertions=0;void check(bool condition,const char*message){++assertions;if(!condition)throw std::runtime_error(message);}
std::string hex(const String&text){if(text.is_null())return "NULL";std::ostringstream out;out<<std::hex<<std::setfill('0');for(char16_t c:text.code_units())out<<std::setw(4)<<static_cast<unsigned>(c);return out.str();}
String cached;
std::string get(const String&key){try{auto result=pls::kairo::IApplication::GetProperty(key);return hex(result)+";cached_ref="+(!result.is_null()&&result.as_object()==cached.as_object()?"True":"False");}catch(const Exception&e){return std::string("E:")+e.type_name();}}
void phase(const char*name){std::vector<String>keys={String{},String(u"microedition.platform"),String(u"Platform"),String(u"platform"),String(u"PLATFORM"),String(u"Microedition.platform"),String(u"microedition.Platform"),String(u"microedition.platform "),String(u"MIDlet-Jar-URL"),String(u""),String(u"user.agent")};for(std::size_t i=0;i<keys.size();++i)std::cout<<name<<'-'<<i<<'\t'<<get(keys[i])<<'\n';}
void cache(String value){cached=value;pls::kairo::IApplication::host_platform(std::move(value));}
int backend(){
    using pls::sdl::detail::device_model_from_registry;
    const auto windows=String(u"Windows");
    auto read_text=[](const std::u16string&text){return device_model_from_registry([&](void*data,std::uint32_t&bytes){const auto size=static_cast<std::uint32_t>((text.size()+1)*2);if(!data){bytes=size;return 0u;}if(bytes<size){bytes=size;return 234u;}std::memcpy(data,text.c_str(),size);bytes=size;return 0u;});};
    check(read_text(u"own-model")==String(u"own-model"),"Registry SZ read");
    check(read_text(u" A ")==String(u" A "),"Model is not trimmed");
    check(read_text(std::u16string{0x3b1,0xd800})==String(std::u16string{0x3b1,0xd800}),"UTF16 code units preserved");
    check(read_text(u"")==windows,"Empty model fallback");
    check(read_text(std::u16string{u'A',0,u'B'})==String(u"A"),"First registry terminator");
    check(device_model_from_registry({})==windows,"Missing reader fallback");
    check(device_model_from_registry([](void*,std::uint32_t&){return 2u;})==windows,"Missing value fallback");
    for(auto size:{0u,1u,3u,65538u})check(device_model_from_registry([&](void*,std::uint32_t&bytes){bytes=size;return 0u;})==windows,"Invalid or excessive size fallback");
    int calls=0;
    auto grew=device_model_from_registry([&](void*data,std::uint32_t&bytes){++calls;if(!data){bytes=4;return 0u;}if(calls==2){bytes=10;return 234u;}const char16_t text[]={u'G',u'r',u'o',u'w',0};std::memcpy(data,text,sizeof(text));bytes=sizeof(text);return 0u;});
    check(grew==String(u"Grow")&&calls==3,"ERROR_MORE_DATA retries size growth");
    calls=0;auto exhausted=device_model_from_registry([&](void*,std::uint32_t&bytes){++calls;bytes=4;return 234u;});check(exhausted==windows&&calls==5,"Retry budget bounded");
    check(device_model_from_registry([](void*data,std::uint32_t&bytes){if(!data){bytes=4;return 0u;}const char16_t text[]={u'A',u'B'};std::memcpy(data,text,4);bytes=4;return 0u;})==windows,"Unterminated malformed value fallback");
    check(device_model_from_registry([](void*data,std::uint32_t&bytes){if(!data){bytes=4;return 0u;}bytes=100;return 0u;})==windows,"Oversized successful response rejected");
    check(device_model_from_registry([](void*data,std::uint32_t&bytes){bytes=data?1:4;return 0u;})==windows,"Odd successful response rejected");
    check(device_model_from_registry([](void*data,std::uint32_t&bytes){bytes=4;return data?5u:0u;})==windows,"Read failure fallback");
    check(device_model_from_registry([](void*data,std::uint32_t&bytes){if(!data){bytes=4;return 234u;}const char16_t text[]={u'A',0};std::memcpy(data,text,4);bytes=4;return 0u;})==String(u"A"),"Initial MORE_DATA size accepted");
    check(device_model_from_registry([](void*data,std::uint32_t&bytes){if(!data){bytes=4;return 0u;}bytes=65538;return 234u;})==windows,"Retry size bounded");
    check(read_text(std::u16string(32767,u'A')).length()==32767,"Maximum permitted value");
    auto model=pls::sdl::device_model();check(!model.is_null()&&model.length()>0,"Native model is nonempty");
    std::cout<<"{\"status\":\"PASS\",\"assertions\":"<<assertions<<",\"native_model_nonempty\":true,\"hardware_value_logged\":false}\n";return 0;
}
}
int main(int argc,char**){GcMutatorScope mutator;if(argc>1)return backend();
    phase("before-awake");cache(String(u"cached-model-A"));phase("cached-A");phase("live-changed-cache-unchanged");cache(String(u"cached-model-B"));phase("host-refresh-B");cache({});phase("cache-null");cache(String(std::u16string{0x3b1,0,0xd800}));phase("cached-code-units");
}
