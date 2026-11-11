#include "managed_streams.hpp"
#include <iostream>
#include <sstream>
using namespace pls::cs;using B=Array<std::uint8_t>;using I=std::int32_t;
template<class F>std::string run(F work){try{return work();}catch(const Exception&e){return e.type_name();}}
static const char*tf(bool value){return value?"True":"False";}
struct ProbeStream:MemoryStream {
    I Reads=0,Closes=0,MaxRead=std::numeric_limits<I>::max();bool ThrowClose=false;
    explicit ProbeStream(B bytes):MemoryStream(bytes){}
    I Read(B bytes,I offset,I count)override{++Reads;return MemoryStream::Read(bytes,offset,std::min(count,MaxRead));}
    void Close()override{++Closes;if(ThrowClose)throw IOException();MemoryStream::Close();}
};
struct ProbeReader:BinaryReader {
    I ByteCalls=0,WordCalls=0;explicit ProbeReader(Ref<Stream>stream):BinaryReader(stream){}
    std::uint8_t ReadByte()override{++ByteCalls;return 42;}
    std::uint16_t ReadUInt16()override{++WordCalls;return 7;}
};
static Ref<BinaryReader>reader(std::initializer_list<std::uint8_t>bytes){return make_ref<BinaryReader>(make_ref<MemoryStream>(B::from(bytes)));}
static std::string bytes(B a){std::ostringstream s;for(I i=0;i<a.length();++i){if(i)s<<',';s<<unsigned(a.at(i));}return s.str();}
int main(int argc,char**argv){if(argc>1&&std::string(argv[1])=="dotnet")runtime_profile=RuntimeProfile::DotNet;
    std::cout<<"null-ctor="<<run([]{make_ref<BinaryReader>(Ref<Stream>());return std::string("none");})<<'\n';auto closed=make_ref<MemoryStream>();closed->Close();std::cout<<"closed-ctor="<<run([&]{make_ref<BinaryReader>(closed);return std::string("none");})<<'\n';
    for(std::uint8_t value:{std::uint8_t(0),std::uint8_t(1),std::uint8_t(2),std::uint8_t(255)})std::cout<<"bool-"<<unsigned(value)<<'='<<tf(reader({value})->ReadBoolean())<<'\n';
    std::cout<<"sbyte="<<int(reader({255})->ReadSByte())<<'\n';std::cout<<"u16="<<reader({255,255})->ReadUInt16()<<'\n';std::cout<<"i16="<<reader({0,128})->ReadInt16()<<'\n';std::cout<<"i32="<<reader({120,86,52,18})->ReadInt32()<<'\n';std::cout<<"u32="<<reader({255,255,255,255})->ReadUInt32()<<'\n';std::cout<<"i64="<<reader({0,0,0,0,0,0,0,128})->ReadInt64()<<'\n';std::cout<<"u64="<<reader({255,255,255,255,255,255,255,255})->ReadUInt64()<<'\n';
    std::cout<<"single="<<bit_copy<I>(reader({0,0,0,128})->ReadSingle())<<'\n';std::cout<<"double="<<bit_copy<std::int64_t>(reader({66,0,0,0,0,0,248,127})->ReadDouble())<<'\n';
    for(I n=0;n<=8;++n){auto s=make_ref<MemoryStream>(B::make(n));auto r=make_ref<BinaryReader>(s);auto result=run([&]{return std::to_string(r->ReadInt64());});std::cout<<"eof-i64-"<<n<<'='<<result<<','<<s->get_Position()<<'\n';}
    std::cout<<"eof-byte="<<run([]{return std::to_string(reader({})->ReadByte());})<<'\n';auto slow=make_ref<ProbeStream>(B::from({4,3,2,1,9}));slow->MaxRead=1;auto sr=make_ref<BinaryReader>(slow);auto number=sr->ReadInt32();std::cout<<"slow-numeric="<<number<<','<<slow->get_Position()<<','<<slow->Reads<<'\n';auto buffer=B::from({99,99,99,99});auto read=sr->Read(buffer,1,3);std::cout<<"short-array="<<read<<','<<bytes(buffer)<<','<<slow->get_Position()<<'\n';
    for(int mode=0;mode<2;++mode){auto s=make_ref<MemoryStream>(B::from({1,2}));auto r=make_ref<BinaryReader>(s);if(mode)r->Close();auto b=B::make(2);
        std::cout<<"array-null-"<<mode<<'='<<run([&]{return std::to_string(r->Read(B(),0,0));})<<'\n';std::cout<<"array-negative-"<<mode<<'='<<run([&]{return std::to_string(r->Read(b,-1,0));})<<'\n';std::cout<<"array-negative-count-"<<mode<<'='<<run([&]{return std::to_string(r->Read(b,0,-1));})<<'\n';std::cout<<"array-outside-"<<mode<<'='<<run([&]{return std::to_string(r->Read(b,2,1));})<<'\n';std::cout<<"array-zero-"<<mode<<'='<<run([&]{return std::to_string(r->Read(b,0,0));})<<'\n';
    }
    auto owned=make_ref<ProbeStream>(B::from({7}));auto owner=make_ref<BinaryReader>(owned);std::cout<<"base-identity="<<tf(owned==owner->get_BaseStream())<<'\n';owner->Close();owner->Close();std::cout<<"close="<<owned->Closes<<','<<tf(owned->get_CanRead())<<','<<tf(!owner->get_BaseStream())<<'\n';std::cout<<"closed-byte="<<run([&]{return std::to_string(owner->ReadByte());})<<'\n';std::cout<<"closed-int="<<run([&]{return std::to_string(owner->ReadInt32());})<<'\n';
    auto failing=make_ref<ProbeStream>(B::from({9}));failing->ThrowClose=true;auto fail=make_ref<BinaryReader>(failing);auto e=run([&]{fail->Close();return std::string("none");});auto v=run([&]{return std::to_string(fail->ReadByte());});std::cout<<"close-fail="<<e<<','<<v<<'\n';failing->ThrowClose=false;fail->Close();std::cout<<"close-retry="<<failing->Closes<<'\n';
    auto orphan=make_ref<MemoryStream>(B::from({8}));auto orphan_reader=make_ref<BinaryReader>(orphan);pls::cs::clear_ref(orphan_reader);gc_collect();std::cout<<"no-auto-close="<<tf(orphan->get_CanRead())<<'\n';
    auto source=make_ref<MemoryStream>(B::from({0,255,48,0}));auto derived=make_ref<ProbeReader>(source);auto bv=derived->ReadBoolean();auto signed_byte=derived->ReadSByte();auto word=derived->ReadInt16();std::cout<<"virtual="<<tf(bv)<<','<<int(signed_byte)<<','<<word<<','<<derived->ByteCalls<<','<<derived->WordCalls<<','<<source->get_Position()<<'\n';
}
