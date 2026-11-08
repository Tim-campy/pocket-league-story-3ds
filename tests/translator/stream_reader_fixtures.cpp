#include "managed_stream_reader.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
using namespace pls::cs;
namespace {
struct Input:MemoryStream {
    int reads=0,closes=0,chunk;
    Input(Array<std::uint8_t> bytes,int c):MemoryStream(bytes),chunk(c){}
    std::int32_t Read(Array<std::uint8_t> bytes,std::int32_t index,std::int32_t count)override{++reads;return MemoryStream::Read(bytes,index,chunk?std::min(chunk,count):count);}
    void Close()override{++closes;MemoryStream::Close();}
};
std::string hex(const String& text){if(text.is_null())return "NULL";std::ostringstream out;out<<std::hex<<std::setfill('0');for(char16_t c:text.code_units())out<<std::setw(4)<<static_cast<unsigned>(c);return out.str();}
Ref<RuntimeEncoding> codec(const std::string& name){if(name=="le")return RuntimeEncoding::get_Unicode();if(name=="be")return RuntimeEncoding::get_BigEndianUnicode();if(name=="ascii")return RuntimeEncoding::get_ASCII();return RuntimeEncoding::get_UTF8();}
}
int main(int argc,char**argv){if(argc>1&&std::string(argv[1])=="dotnet")runtime_profile=RuntimeProfile::DotNet;std::string line;while(std::getline(std::cin,line)){
    std::vector<std::string>parts;std::size_t start=0;for(;;){auto pos=line.find('|',start);parts.push_back(line.substr(start,pos-start));if(pos==std::string::npos)break;start=pos+1;}
    auto bytes=Array<std::uint8_t>::make(static_cast<std::int32_t>(parts[1].size()/2));for(std::int32_t i=0;i<bytes.length();++i)bytes[i]=static_cast<std::uint8_t>(std::stoul(parts[1].substr(static_cast<std::size_t>(i)*2,2),nullptr,16));
    auto stream=make_ref<Input>(bytes,std::stoi(parts[3]));std::string result;
    try{if(parts[4]=="closed")stream->Close();auto reader=make_ref<RuntimeStreamReader>(parts[4]=="nullstream"?Ref<Stream>{}:stream,parts[4]=="nullencoding"?Ref<RuntimeEncoding>{}:codec(parts[2]));
        run_finally([&]{if(parts[4]=="dispose"){reader->Dispose();try{reader->ReadLine();result="unexpected";}catch(const Exception&e){result=e.type_name();}try{reader->ReadToEnd();result+=",unexpected";}catch(const Exception&e){result+=","+std::string(e.type_name());}}
            else if(parts[4]=="lines"){for(;;){auto text=reader->ReadLine();if(text.is_null())break;result+='['+hex(text)+']';}}
            else result=hex(reader->ReadToEnd());
            if(parts[4]!="dispose")result+=";r="+std::to_string(stream->reads)+";p="+std::to_string(stream->get_Position());},[&]{reader->Dispose();});
    }catch(const Exception&e){result=e.type_name();}
    std::cout<<parts[0]<<'\t'<<result<<";c="<<stream->closes<<'\n';
}}
