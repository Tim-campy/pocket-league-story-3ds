#pragma once
#include "managed_streams.hpp"
#include "managed_encoding.hpp"

namespace pls::cs {
class RuntimeStreamReader : public Object {
    enum class EncodingKind {Utf8,Utf16LE,Utf16BE,Ascii,Utf32LE,Utf32BE};
    Ref<Stream> stream_;
    Ref<RuntimeEncoding> encoding_;
    Array<std::uint8_t> input_;
    EncodingKind kind_;
    std::vector<std::uint8_t> pending_,preamble_bytes_;
    std::vector<std::uint8_t> original_preamble_;
    std::u16string decoded_;
    std::size_t position_=0;
    bool checks_=true,preamble_check_=true;
    bool last_read_full_=false;
    void require_open()const;
    bool fill();
    std::size_t detect(std::vector<std::uint8_t>& bytes);
    std::u16string decode(const std::vector<std::uint8_t>& bytes,bool eof);
    int read_char();
    int peek_char();
public:
    RuntimeStreamReader(Ref<Stream> stream,Ref<RuntimeEncoding> encoding);
    std::string managed_type_name()const override{return "System.IO.StreamReader";}
    virtual String ReadLine();
    virtual String ReadToEnd();
    virtual void Close();
    virtual void Dispose(){Close();}
    Ref<Stream> get_BaseStream()const{return stream_;}
    void trace_edges(const EdgeVisitor& visitor)const override;
    void release_edges()override;
};
} // namespace pls::cs
