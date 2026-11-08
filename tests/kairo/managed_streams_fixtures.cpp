#include "managed_streams.hpp"
#include <iostream>
#include <string>
using namespace pls::cs;
using Bytes = Array<std::uint8_t>;
class DelegatingStream : public Stream {
    MemoryStream inner;
public:
    bool get_CanRead() override{return inner.get_CanRead();}
    bool get_CanSeek() override{return inner.get_CanSeek();}
    bool get_CanWrite() override{return inner.get_CanWrite();}
    std::int64_t get_Length() override{return inner.get_Length();}
    std::int64_t get_Position() override{return inner.get_Position();}
    void set_Position(std::int64_t n) override{inner.set_Position(n);}
    std::int32_t Read(Bytes b,std::int32_t o,std::int32_t n) override{return inner.Read(b,o,n);}
    void Write(Bytes b,std::int32_t o,std::int32_t n) override{inner.Write(b,o,n);}
    std::int64_t Seek(std::int64_t o,SeekOrigin origin) override{return inner.Seek(o,origin);}
    void SetLength(std::int64_t n) override{inner.SetLength(n);}
    void Flush() override{inner.Flush();}
    void Close() override{inner.Close();}
};
template<class F> void P(const char* name, F&& body) {
    std::cout << name << '=';
    try { std::cout << body(); } catch (const Exception& ex) { std::cout << '!' << ex.type_name(); }
    std::cout << '\n';
}
template<class F> std::string N(F&& body) { body(); return "ok"; }
std::string B(Bytes bytes) { std::string s; for(std::int32_t i=0;i<bytes.length();++i)s+=std::to_string(bytes.at(i))+","; return s; }
std::string S(MemoryStream& m) {return std::to_string(m.get_Length())+":"+std::to_string(m.get_Position())+":"+std::to_string(m.get_Capacity())+":"+B(m.ToArray());}
std::string flags(Stream& m) {return std::string(m.get_CanRead()?"True":"False")+":"+(m.get_CanSeek()?"True":"False")+":"+(m.get_CanWrite()?"True":"False");}
std::string seek(MemoryStream& m,std::int64_t offset,SeekOrigin origin) {const auto result=m.Seek(offset,origin);return std::to_string(result)+":"+std::to_string(m.get_Position());}
int main(int argc,char**argv) {
 runtime_profile=argc>1 && std::string(argv[1])=="dotnet"?RuntimeProfile::DotNet:RuntimeProfile::UnityMono265;
 MemoryStream m;
 P("empty",[&]{return S(m);});
 P("empty-eof",[&]{return std::to_string(m.ReadByte());});
 P("first-write",[&]{m.WriteByte(7);return S(m);});
 P("seek-gap",[&]{m.set_Position(5);m.WriteByte(9);return S(m);});
 P("shrink",[&]{m.SetLength(2);return S(m);});
 P("expand-zero",[&]{m.SetLength(6);return S(m);});
 P("capacity-shrink",[&]{m.set_Capacity(6);return S(m);});
 P("capacity-below-length",[&]{return N([&]{m.set_Capacity(5);});});
 P("write-expand",[&]{m.set_Position(6);m.Write(Bytes::from({3,4,5}),0,3);return S(m);});
 P("seek-begin",[&]{return seek(m,1,SeekOrigin::Begin);});
 P("seek-current",[&]{return seek(m,2,SeekOrigin::Current);});
 P("seek-end",[&]{return seek(m,-1,SeekOrigin::End);});
 P("seek-negative",[&]{return std::to_string(m.Seek(-20,SeekOrigin::Begin));});
 P("seek-invalid-origin",[&]{return std::to_string(m.Seek(0,static_cast<SeekOrigin>(4)));});
 P("position-negative",[&]{return N([&]{m.set_Position(-1);});});
 P("position-too-large",[&]{return N([&]{m.set_Position(2147483648LL);});});
 P("length-negative",[&]{return N([&]{m.SetLength(-1);});});
 P("length-too-large",[&]{return N([&]{m.SetLength(2147483648LL);});});
 auto target=Bytes::from({90,91,92,93,94});m.set_Position(7);
 P("read-offset",[&]{const auto n=m.Read(target,1,3);return std::to_string(n)+":"+B(target)+":"+std::to_string(m.get_Position());});
 P("read-eof",[&]{const auto n=m.Read(target,0,5);return std::to_string(n)+":"+std::to_string(m.get_Position());});
 P("read-null",[&]{return std::to_string(m.Read({},0,0));});
 P("read-offset-negative",[&]{return std::to_string(m.Read(target,-1,0));});
 P("read-count-negative",[&]{return std::to_string(m.Read(target,0,-1));});
 P("read-bounds",[&]{return std::to_string(m.Read(target,4,2));});
 P("write-null",[&]{return N([&]{m.Write({},0,0);});});
 P("write-offset-negative",[&]{return N([&]{m.Write(target,-1,0);});});
 P("write-count-negative",[&]{return N([&]{m.Write(target,0,-1);});});
 P("write-bounds",[&]{return N([&]{m.Write(target,4,2);});});
 auto backing=Bytes::from({10,11,12,13,14,15});
 MemoryStream slice(backing,2,3,true,true);
 P("slice-initial",[&]{return S(slice);});
 P("slice-seek-begin",[&]{return seek(slice,0,SeekOrigin::Begin);});
 P("slice-seek-current",[&]{return seek(slice,1,SeekOrigin::Current);});
 P("slice-seek-end",[&]{return seek(slice,-1,SeekOrigin::End);});
 P("slice-read-alias",[&]{backing.at(4)=88;const auto b=slice.ReadByte();return std::to_string(b)+":"+S(slice);});
 P("slice-write-alias",[&]{slice.set_Position(0);slice.WriteByte(77);return B(backing);});
 P("slice-buffer-alias",[&]{return backing==slice.GetBuffer()?"True":"False";});
 P("slice-copy-not-alias",[&]{auto b=slice.ToArray();b.at(0)=99;return B(slice.ToArray());});
 P("slice-expand",[&]{return N([&]{slice.SetLength(4);});});
 P("slice-capacity-same",[&]{return N([&]{slice.set_Capacity(3);});});
 P("slice-capacity-change",[&]{return N([&]{slice.set_Capacity(4);});});
 P("slice-overlap",[&]{slice.set_Position(0);slice.Write(backing,1,3);return B(backing);});
 MemoryStream ro(Bytes::from({1,2}),false);
 P("readonly-flags",[&]{return flags(ro);});
 P("readonly-write",[&]{return N([&]{ro.WriteByte(1);});});
 P("readonly-zero-write",[&]{return N([&]{ro.Write(Bytes::make(0),0,0);});});
 P("readonly-setlength",[&]{return N([&]{ro.SetLength(1);});});
 P("private-buffer",[&]{return B(ro.GetBuffer());});
 P("null-buffer-constructor",[&]{MemoryStream x(Bytes{});return S(x);});
 P("negative-capacity-constructor",[&]{MemoryStream x(-1);return S(x);});
 P("slice-negative-offset",[&]{MemoryStream x(backing,-1,1);return S(x);});
 P("slice-negative-count",[&]{MemoryStream x(backing,0,-1);return S(x);});
 P("slice-invalid-range",[&]{MemoryStream x(backing,5,2);return S(x);});
 MemoryStream edge(2);
 P("far-eof-read",[&]{edge.set_Position(20);const auto n=edge.Read(target,0,1);return std::to_string(n)+":"+std::to_string(edge.get_Position());});
 P("far-eof-byte",[&]{const auto n=edge.ReadByte();return std::to_string(n)+":"+std::to_string(edge.get_Position());});
 P("zero-write-extends",[&]{edge.Write(Bytes::make(0),0,0);return S(edge);});
 P("retained-buffer",[&]{MemoryStream x(2);x.Write(Bytes::from({1,2}),0,2);auto old=x.GetBuffer();x.WriteByte(3);return std::string(old==x.GetBuffer()?"True":"False")+":"+B(old)+":"+B(x.ToArray());});
 P("overlap-read",[&]{auto b=Bytes::from({1,2,3,4,5,6});MemoryStream x(b);const auto n=x.Read(b,2,4);return std::to_string(n)+":"+B(b);});
 P("slice-shrink-expand",[&]{auto b=Bytes::from({1,2,3,4,5,6});MemoryStream x(b,1,4,true,true);x.SetLength(1);x.SetLength(3);return S(x)+":"+B(b);});
 P("slice-position-max",[&]{MemoryStream x(backing,2,3);x.set_Position(std::numeric_limits<std::int32_t>::max());return std::to_string(x.get_Position());});
 P("seek-too-large",[&]{return std::to_string(edge.Seek(2147483648LL,SeekOrigin::Begin));});
 P("seek-minimum",[&]{return std::to_string(edge.Seek(std::numeric_limits<std::int64_t>::min(),SeekOrigin::Current));});
 P("position-max-write",[&]{MemoryStream x;x.set_Position(std::numeric_limits<std::int32_t>::max());return N([&]{x.WriteByte(1);});});
 P("position-max-write-state",[&]{MemoryStream x;x.set_Position(std::numeric_limits<std::int32_t>::max());try{x.WriteByte(1);}catch(const Exception&){}return std::to_string(x.get_Position());});
 P("fixed-zero-write-gap",[&]{MemoryStream x(backing);x.set_Position(20);return N([&]{x.Write(Bytes::make(0),0,0);});});
 P("readonly-null-write",[&]{return N([&]{ro.Write({},0,0);});});
 P("readonly-negative-length",[&]{return N([&]{ro.SetLength(-1);});});
 P("dispose-idempotent",[&]{MemoryStream x;x.Dispose();x.Dispose();return x.get_CanRead()?"True":"False";});
 DelegatingStream delegated;Stream& bridge=delegated;
 P("base-write-byte",[&]{bridge.WriteByte(255);return std::to_string(bridge.get_Length())+":"+std::to_string(bridge.get_Position());});
 P("base-read-byte",[&]{bridge.set_Position(0);return std::to_string(bridge.ReadByte());});
 P("base-eof-byte",[&]{return std::to_string(bridge.ReadByte());});
 P("base-dispose",[&]{bridge.Dispose();return bridge.get_CanRead()?"True":"False";});
 m.Close();
 P("closed-flags",[&]{return flags(m);});
 P("closed-array",[&]{return B(m.ToArray());});
 P("closed-buffer",[&]{return std::to_string(m.GetBuffer().length());});
 P("closed-flush",[&]{return N([&]{m.Flush();});});
 P("closed-read",[&]{return std::to_string(m.ReadByte());});
 P("closed-read-null",[&]{return std::to_string(m.Read({},0,0));});
 P("closed-read-negative-offset",[&]{return std::to_string(m.Read(target,-1,0));});
 P("closed-write-null",[&]{return N([&]{m.Write({},0,0);});});
 P("closed-write-byte",[&]{return N([&]{m.WriteByte(1);});});
 P("closed-length",[&]{return std::to_string(m.get_Length());});
 P("closed-capacity",[&]{return std::to_string(m.get_Capacity());});
 P("closed-set-capacity-negative",[&]{return N([&]{m.set_Capacity(-1);});});
 P("closed-position",[&]{return std::to_string(m.get_Position());});
 P("closed-negative-position",[&]{return N([&]{m.set_Position(-1);});});
 P("closed-negative-length",[&]{return N([&]{m.SetLength(-1);});});
 P("closed-setlength",[&]{return N([&]{m.SetLength(0);});});
 P("closed-seek",[&]{return std::to_string(m.Seek(0,SeekOrigin::Begin));});
 P("closed-private-buffer",[&]{ro.Close();return B(ro.GetBuffer());});
}
