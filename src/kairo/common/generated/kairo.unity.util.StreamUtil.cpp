// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.io.ByteArrayOutputStream.hpp"
#include "java.io.EOFException.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "kairo.unity.m3d4.util3d.Vector3D.hpp"
#include "kairo.unity.util.EncodeUtil.hpp"
#include "kairo.unity.util.SecureString.hpp"
#include "kairo.unity.util.StreamUtil.hpp"
#include "kairo.unity.util.StringUtil.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;

namespace pls::generated {
namespace kairo::unity::util::StreamUtil {

static PLS_NOINLINE void cs_init_5098bfda9cf65745_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.StreamUtil", flag, []() {

    });
}

void ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_5098bfda9cf65745_slow(flag);
}

// M:kairo.unity.util.StreamUtil.Read(java.io.InputStream,System.Int32)
ByteArray Read(pls::cs::Ref<java::io::InputStream> stream, pls::cs::Int32 size) {
    StreamUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.StreamUtil.Read(java.io.InputStream,System.Int32)",
                     kairo);
    {
        if (size == -1) {
            return ByteArray{};
        }
        pls::cs::Ref<java::io::ByteArrayOutputStream> byteArrayOutputStream =
            java::io::ByteArrayOutputStream::create();
        ByteArray b = ByteArray::make(size);
        pls::cs::Int32 num = 0;
        pls::cs::Int32 num2 = 0;
        while (num2 < size) {
            num = require(stream)->Read(b, 0, size - num2);
            if (num < 0) {
                break;
            }
            num2 += num;
            if (num > 0) {
                require(byteArrayOutputStream)->Write(b, 0, num);
            }
        }
        if (num2 < size) {
            pls::cs::throw_exception(java::io::EOFException::create(pls::cs::String::concat(
                pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(literal(u"request["),
                                                                                        integer_string(size)),
                                                                literal(u"] read[")),
                                        integer_string(num2)),
                literal(u"]"))));
        }
        b = ByteArray{};
        return require(byteArrayOutputStream)->ToByteArray();
    }
}

// M:kairo.unity.util.StreamUtil.Read(java.io.InputStream,System.Boolean)
ByteArray ReadBool(pls::cs::Ref<java::io::InputStream> stream, bool size) {
    StreamUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.StreamUtil.Read(java.io.InputStream,System.Boolean)",
                     kairo);
    {
        if (size) {
            return StreamUtil::Read(stream, StreamUtil::ReadInt(stream));
        }
        return StreamUtil::Read(stream);
    }
}

// M:kairo.unity.util.StreamUtil.Read(java.io.InputStream)
ByteArray Read(pls::cs::Ref<java::io::InputStream> stream) {
    StreamUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.StreamUtil.Read(java.io.InputStream)", kairo);
    {
        pls::cs::Ref<java::io::ByteArrayOutputStream> byteArrayOutputStream =
            java::io::ByteArrayOutputStream::create();
        ByteArray array = ByteArray::make(1024);
        while (true) {
            pls::cs::Int32 num = require(stream)->Read(array, 0, array.length());
            if (num < 0) {
                break;
            }
            if (num > 0) {
                require(byteArrayOutputStream)->Write(array, 0, num);
            }
        }
        return require(byteArrayOutputStream)->ToByteArray();
    }
}

// M:kairo.unity.util.StreamUtil.ReadByte(java.io.InputStream)
std::int8_t ReadByte(pls::cs::Ref<java::io::InputStream> stream) {
    StreamUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.StreamUtil.ReadByte(java.io.InputStream)", kairo);
    {
        return pls::cs::cast_integral<std::int8_t>(StreamUtil::Read(stream, 1)[0]);
    }
}

// M:kairo.unity.util.StreamUtil.ReadShort(java.io.InputStream)
std::int16_t ReadShort(pls::cs::Ref<java::io::InputStream> stream) {
    StreamUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.StreamUtil.ReadShort(java.io.InputStream)", kairo);
    {
        return EncodeUtil::ByteAryToShort(StreamUtil::Read(stream, 2), true);
    }
}

// M:kairo.unity.util.StreamUtil.ReadInt(java.io.InputStream)
pls::cs::Int32 ReadInt(pls::cs::Ref<java::io::InputStream> stream) {
    StreamUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.StreamUtil.ReadInt(java.io.InputStream)", kairo);
    {
        return EncodeUtil::ByteAryToInt(StreamUtil::Read(stream, 4), true);
    }
}

// M:kairo.unity.util.StreamUtil.ReadLong(java.io.InputStream)
pls::cs::Int64 ReadLong(pls::cs::Ref<java::io::InputStream> stream) {
    StreamUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.StreamUtil.ReadLong(java.io.InputStream)", kairo);
    {
        return EncodeUtil::ByteAryToLong(StreamUtil::Read(stream, 8), true);
    }
}

// M:kairo.unity.util.StreamUtil.ReadBoolean(java.io.InputStream)
bool ReadBoolean(pls::cs::Ref<java::io::InputStream> stream) {
    StreamUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.StreamUtil.ReadBoolean(java.io.InputStream)", kairo);
    {
        return (pls::cs::cast_integral<pls::cs::Int32>(StreamUtil::Read(stream, 1)[0]) == 1);
    }
}

// M:kairo.unity.util.StreamUtil.ReadFloat(java.io.InputStream)
pls::cs::Single ReadFloat(pls::cs::Ref<java::io::InputStream> stream) {
    StreamUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.StreamUtil.ReadFloat(java.io.InputStream)", kairo);
    {
        return EncodeUtil::ByteAryToFloat(StreamUtil::Read(stream, 4), true);
    }
}

// M:kairo.unity.util.StreamUtil.ReadVector3D(java.io.InputStream)
pls::cs::Ref<m3d4::util3d::Vector3D> ReadVector3D(pls::cs::Ref<java::io::InputStream> stream) {
    StreamUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.StreamUtil.ReadVector3D(java.io.InputStream)",
                     kairo);
    {
        pls::cs::Ref<m3d4::util3d::Vector3D> vector3D = m3d4::util3d::Vector3D::create();
        {
            pls::cs::Single cs_arg0 = StreamUtil::ReadFloat(stream);
            require(vector3D)->SetX(cs_arg0);
        }
        {
            pls::cs::Single cs_arg0 = StreamUtil::ReadFloat(stream);
            require(vector3D)->SetY(cs_arg0);
        }
        {
            pls::cs::Single cs_arg0 = StreamUtil::ReadFloat(stream);
            require(vector3D)->SetZ(cs_arg0);
        }
        return vector3D;
    }
}

// M:kairo.unity.util.StreamUtil.ReadString(java.io.InputStream)
pls::cs::String ReadString(pls::cs::Ref<java::io::InputStream> stream) {
    StreamUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.StreamUtil.ReadString(java.io.InputStream)", kairo);
    {
        ByteArray array = StreamUtil::ReadBool(stream, true);
        if ([&]() {
                auto cs_left = pls::cs::box(array);
                auto cs_right = pls::cs::box(ByteArray{});
                return cs_left == cs_right;
            }()) {
            return pls::cs::String{};
        }
        return StringUtil::GetString(array);
    }
}

// M:kairo.unity.util.StreamUtil.Write(java.io.OutputStream,System.Byte[])
void Write(pls::cs::Ref<java::io::OutputStream> os, ByteArray data) {
    StreamUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.StreamUtil.Write(java.io.OutputStream,System.Byte[])", kairo);
    {
        StreamUtil::Write(os, data, false);
    }
}

// M:kairo.unity.util.StreamUtil.Write(java.io.OutputStream,System.Byte[],System.Boolean)
void Write(pls::cs::Ref<java::io::OutputStream> os, ByteArray data, bool size) {
    StreamUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.StreamUtil.Write(java.io.OutputStream,System.Byte[],System.Boolean)",
                     kairo);
    {
        if (size) {
            StreamUtil::WriteInt(os, (([&]() {
                                     auto cs_left = pls::cs::box(data);
                                     auto cs_right = pls::cs::box(ByteArray{});
                                     return cs_left == cs_right;
                                 }()))
                                         ? -1
                                         : data.length());
            if ([&]() {
                    auto cs_left = pls::cs::box(data);
                    auto cs_right = pls::cs::box(ByteArray{});
                    return cs_left == cs_right;
                }()) {
                return;
            }
        }
        if (data.length() != 0) {
            require(os)->Write(data);
        }
    }
}

// M:kairo.unity.util.StreamUtil.WriteByte(java.io.OutputStream,System.SByte)
void WriteByte(pls::cs::Ref<java::io::OutputStream> os, std::int8_t data) {
    StreamUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.StreamUtil.WriteByte(java.io.OutputStream,System.SByte)", kairo);
    {
        require(os)->Write(pls::cs::cast_integral<pls::cs::Int32>(data));
    }
}

// M:kairo.unity.util.StreamUtil.WriteByte(java.io.OutputStream,System.Byte)
void WriteByteByte(pls::cs::Ref<java::io::OutputStream> os, std::uint8_t data) {
    StreamUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.StreamUtil.WriteByte(java.io.OutputStream,System.Byte)", kairo);
    {
        require(os)->Write(pls::cs::cast_integral<pls::cs::Int32>(data));
    }
}

// M:kairo.unity.util.StreamUtil.WriteShort(java.io.OutputStream,System.Int16)
void WriteShort(pls::cs::Ref<java::io::OutputStream> os, std::int16_t data) {
    StreamUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.StreamUtil.WriteShort(java.io.OutputStream,System.Int16)", kairo);
    {
        ByteArray array = EncodeUtil::ShortToByteAry(data, true);
        for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
            std::int8_t b = pls::cs::cast_integral<std::int8_t>(array[i]);
            require(os)->Write(pls::cs::cast_integral<pls::cs::Int32>(b));
        }
    }
}

// M:kairo.unity.util.StreamUtil.WriteInt(java.io.OutputStream,System.Int32)
void WriteInt(pls::cs::Ref<java::io::OutputStream> os, pls::cs::Int32 data) {
    StreamUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.StreamUtil.WriteInt(java.io.OutputStream,System.Int32)", kairo);
    {
        ByteArray array = EncodeUtil::IntToByteAry(data, true);
        for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
            std::int8_t b = pls::cs::cast_integral<std::int8_t>(array[i]);
            require(os)->Write(pls::cs::cast_integral<pls::cs::Int32>(b));
        }
    }
}

// M:kairo.unity.util.StreamUtil.WriteLong(java.io.OutputStream,System.Int64)
void WriteLong(pls::cs::Ref<java::io::OutputStream> os, pls::cs::Int64 data) {
    StreamUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.StreamUtil.WriteLong(java.io.OutputStream,System.Int64)", kairo);
    {
        ByteArray array = EncodeUtil::LongToByteAry(data, true);
        for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
            std::int8_t b = pls::cs::cast_integral<std::int8_t>(array[i]);
            require(os)->Write(pls::cs::cast_integral<pls::cs::Int32>(b));
        }
    }
}

// M:kairo.unity.util.StreamUtil.WriteBoolean(java.io.OutputStream,System.Boolean)
void WriteBoolean(pls::cs::Ref<java::io::OutputStream> os, bool data) {
    StreamUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.StreamUtil.WriteBoolean(java.io.OutputStream,System.Boolean)",
                     kairo);
    {
        require(os)->Write(
            pls::cs::cast_integral<pls::cs::Int32>(pls::cs::cast_integral<std::int8_t>((data ? 1 : 0))));
    }
}

// M:kairo.unity.util.StreamUtil.WriteFloat(java.io.OutputStream,System.Single)
void WriteFloat(pls::cs::Ref<java::io::OutputStream> os, pls::cs::Single data) {
    StreamUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.StreamUtil.WriteFloat(java.io.OutputStream,System.Single)", kairo);
    {
        ByteArray array = EncodeUtil::FloatToByteAry(data, true);
        for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
            std::int8_t b = pls::cs::cast_integral<std::int8_t>(array[i]);
            require(os)->Write(pls::cs::cast_integral<pls::cs::Int32>(b));
        }
    }
}

// M:kairo.unity.util.StreamUtil.WriteVector3D(java.io.OutputStream,kairo.unity.m3d4.util3d.Vector3D)
void WriteVector3D(pls::cs::Ref<java::io::OutputStream> os, pls::cs::Ref<m3d4::util3d::Vector3D> value) {
    StreamUtil::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.util.StreamUtil.WriteVector3D(java.io.OutputStream,kairo.unity.m3d4.util3d.Vector3D)",
        kairo);
    {
        StreamUtil::WriteFloat(os, require(value)->GetX());
        StreamUtil::WriteFloat(os, require(value)->GetY());
        StreamUtil::WriteFloat(os, require(value)->GetZ());
    }
}

// M:kairo.unity.util.StreamUtil.WriteString(java.io.OutputStream,kairo.unity.util.SecureString)
void WriteString(pls::cs::Ref<java::io::OutputStream> os, pls::cs::Ref<SecureString> data) {
    StreamUtil::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.util.StreamUtil.WriteString(java.io.OutputStream,kairo.unity.util.SecureString)",
        kairo);
    {
        StreamUtil::Write(os,
                          (is_null(data)) ? ByteArray{} : pls::diagnostic::api_call([&]() -> decltype(auto) {
                              return ([&]() -> ByteArray {
                                  auto cs_receiver = pls::cs::RuntimeEncoding::get_UTF8();
                                  auto cs_arg0 = require(data)->Get();
                                  return require(cs_receiver)->GetBytes(cs_arg0);
                              }());
                          }),
                          true);
    }
}

// M:kairo.unity.util.StreamUtil.WriteString(java.io.OutputStream,System.String)
void WriteStringString(pls::cs::Ref<java::io::OutputStream> os, pls::cs::String data) {
    StreamUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.StreamUtil.WriteString(java.io.OutputStream,System.String)", kairo);
    {
        StreamUtil::Write(os,
                          (is_null(data)) ? ByteArray{} : pls::diagnostic::api_call([&]() -> decltype(auto) {
                              return require(pls::cs::RuntimeEncoding::get_UTF8())->GetBytes(data);
                          }),
                          true);
    }
}
} // namespace kairo::unity::util::StreamUtil
}
