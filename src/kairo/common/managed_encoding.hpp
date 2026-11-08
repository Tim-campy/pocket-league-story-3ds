#pragma once
#include "semantic_runtime.hpp"
namespace pls::cs {
// Built-in managed encodings. Legacy code-page codecs require their own proven
// implementation; JString's original Shift_JIS decoder is translated source.
class RuntimeEncoding:public Object {
public:
    enum class Kind {Utf8,Utf16LE,Utf16BE,Ascii};
private:
    Kind kind_;
public:
    explicit RuntimeEncoding(Kind kind):kind_(kind){}
    Kind kind()const noexcept{return kind_;}
    std::string managed_type_name()const override{return "System.Text.Encoding";}
    static Ref<RuntimeEncoding> get_UTF8();
    static Ref<RuntimeEncoding> get_Unicode();
    static Ref<RuntimeEncoding> get_BigEndianUnicode();
    static Ref<RuntimeEncoding> get_ASCII();
    static Ref<RuntimeEncoding> GetEncoding(const String& name);
    Array<std::uint8_t> GetBytes(const String& value)const;
    String GetString(const Array<std::uint8_t>& value)const;
    String GetString(const Array<std::uint8_t>& value,std::int32_t offset,std::int32_t count)const;
};
}
