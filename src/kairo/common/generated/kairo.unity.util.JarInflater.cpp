// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.io.ByteArrayInputStream.hpp"
#include "java.io.ByteArrayOutputStream.hpp"
#include "java.io.DataInputStream.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.lang.JString.hpp"
#include "java.lang.JSystem.hpp"
#include "kairo.common.cfg.Config.hpp"
#include "kairo.unity.io.AssetReader.hpp"
#include "kairo.unity.util.JarInflater.FileInfo.hpp"
#include "kairo.unity.util.JarInflater.hpp"
#include "kairo.unity.util.Language.hpp"
#include "kairo.unity.util.Log.hpp"
#include "kairo.unity.util.StreamUtil.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;
using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::generated {
namespace kairo::unity::util {

void JarInflater::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(files_, visitor);
    pls::cs::trace_value(data_, visitor);
    pls::cs::trace_value(directory_, visitor);
}

static PLS_NOINLINE void cs_init_52158c8b20364c2b_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.JarInflater", flag, []() {

    });
}

void JarInflater::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_52158c8b20364c2b_slow(flag);
}

void JarInflater::create_init(pls::cs::Ref<JarInflater> self, ByteArray data) {
    JarInflater::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.JarInflater.#ctor(System.Byte[])", kairo);
    {
        if ([&]() {
                auto cs_left = pls::cs::box(data);
                auto cs_right = pls::cs::box(ByteArray{});
                return cs_left == cs_right;
            }()) {
            throw pls::cs::NullReferenceException();
        }
        pls::cs::Ref<java::io::ByteArrayInputStream> byteArrayInputStream =
            pls::cs::Ref<java::io::ByteArrayInputStream>{};
        pls::cs::run_finally(
            [&]() {
                {
                    byteArrayInputStream = java::io::ByteArrayInputStream::create(data);
                    self->_load(byteArrayInputStream);
                }
            },
            [&]() {
                if (!is_null(byteArrayInputStream)) {
                    try {
                        require(byteArrayInputStream)->Close();
                    } catch (const pls::cs::Exception& cs_caught_4) {
                        pls::cs::capture_exception(cs_caught_4);
                        {
                        }
                    }
                }
                byteArrayInputStream = pls::cs::Ref<java::io::ByteArrayInputStream>{};
            });
    }
}

// M:kairo.unity.util.JarInflater.#ctor(System.Byte[])
pls::cs::Ref<JarInflater> JarInflater::create(ByteArray data) {
    JarInflater::ensure_initialized();
    auto self = pls::cs::make_ref<JarInflater>();
    JarInflater::create_init(self, data);
    return self;
}

// M:kairo.unity.util.JarInflater._load(java.io.InputStream)
void JarInflater::_load(pls::cs::Ref<java::io::InputStream> stream) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.JarInflater._load(java.io.InputStream)", kairo);
    {
        StreamUtil::ReadInt(stream);
        pls::cs::Int32 size = StreamUtil::ReadInt(stream);
        pls::cs::Int32 num = StreamUtil::ReadInt(stream);
        StringArray array = StringArray::make(num);
        IntArray array2 = IntArray::make(num);
        IntArray array3 = IntArray::make(num);
        ByteArray array4 = ByteArray::make(num);
        for (pls::cs::Int32 i = 0; i < num; ++i) {
            ByteArray bytes = StreamUtil::Read(stream, StreamUtil::ReadInt(stream));
            array[i] = java::lang::JString::New(bytes);
        }
        for (pls::cs::Int32 j = 0; j < num; ++j) {
            array2[j] = StreamUtil::ReadInt(stream);
        }
        for (pls::cs::Int32 k = 0; k < num; ++k) {
            array3[k] = StreamUtil::ReadInt(stream);
        }
        array4 = StreamUtil::Read(stream, array4.length());
        files_ = pls::cs::Dictionary<pls::cs::String, pls::cs::Ref<JarInflater_FileInfo>>::make();
        for (pls::cs::Int32 l = 0; l < array.length(); ++l) {
            pls::cs::Ref<JarInflater_FileInfo> fileInfo = JarInflater_FileInfo::create();
            {
                auto cs_target = fileInfo;
                auto cs_value = array[l];
                require(cs_target)->Name = cs_value;
            }
            {
                auto cs_target = fileInfo;
                pls::cs::Int32 cs_value = array2[l];
                require(cs_target)->Offset = cs_value;
            }
            {
                auto cs_target = fileInfo;
                pls::cs::Int32 cs_value = array3[l];
                require(cs_target)->Size = cs_value;
            }
            {
                auto cs_target = fileInfo;
                auto cs_value = array4[l];
                require(cs_target)->Flag = cs_value;
            }
            pls::cs::String key = PLS_API(pls::cs::culture_to_lower(array[l]));
            {
                auto cs_target = files_;
                auto cs_index = key;
                auto cs_value = fileInfo;
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        data_ = StreamUtil::Read(stream, size);
    }
}

// M:kairo.unity.util.JarInflater.Close
void JarInflater::Close() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.JarInflater.Close", kairo);
    {
        data_ = ByteArray{};
        directory_ = pls::cs::String{};
        if (!is_null(files_)) {
            PLS_API(files_.Clear());
        }
        files_ = pls::cs::Dictionary<pls::cs::String, pls::cs::Ref<JarInflater_FileInfo>>{};
    }
}

// M:kairo.unity.util.JarInflater.GetInputStream(System.String)
pls::cs::Ref<java::io::InputStream> JarInflater::GetInputStream(pls::cs::String name) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.JarInflater.GetInputStream(System.String)", kairo);
    {
        name = ConvertExtension(name);
        if (!is_null(directory_)) {
            pls::cs::Ref<java::io::InputStream> resourceAsStream =
                GetResourceAsStream(pls::cs::String::concat(directory_, name));
            if (!is_null(resourceAsStream)) {
                return resourceAsStream;
            }
        }
        pls::cs::Ref<JarInflater_FileInfo> fileInfo = _search(name);
        if (is_null(fileInfo)) {
            return pls::cs::Ref<java::io::InputStream>{};
        }
        ByteArray array = ByteArray{};
        pls::cs::Ref<java::io::DataInputStream> dataInputStream = pls::cs::Ref<java::io::DataInputStream>{};
        {
            auto cs_flow_12 = pls::cs::run_finally(
                [&]() -> pls::cs::Flow<pls::cs::Ref<java::io::InputStream>> {
                    {
                        auto cs_left_11 = ([&]() -> pls::cs::Int32 {
                            auto cs_left_11 = ([&]() -> pls::cs::Int32 {
                                auto cs_left_11 =
                                    ((pls::cs::Int32(0xFF) & data_[require(fileInfo)->Offset + 0]) << 24);
                                auto cs_right_11 =
                                    ((pls::cs::Int32(0xFF) & data_[require(fileInfo)->Offset + 1]) << 16);
                                return cs_left_11 | cs_right_11;
                            }());
                            auto cs_right_11 =
                                ((pls::cs::Int32(0xFF) & data_[require(fileInfo)->Offset + 2]) << 8);
                            return cs_left_11 | cs_right_11;
                        }());
                        auto cs_right_11 = (pls::cs::Int32(0xFF) & data_[require(fileInfo)->Offset + 3]);
                        pls::cs::Int32 num = (cs_left_11 | cs_right_11);
                        ByteArray array2 = ByteArray::make(num);
                        java::lang::JSystem::Arraycopy(pls::cs::box(data_), require(fileInfo)->Offset + 4,
                                                       pls::cs::box(array2), 0, num);
                        if ((require(fileInfo)->Flag & 1) != 0 && require(fileInfo)->Size > 0) {
                            throw pls::cs::Exception(
                                literal(u"JarInflater.getInputStream() 圧縮には対応していません").utf8());
                        }
                        array = array2;
                        array = Language::ConvertLanguagePack(name, array);
                        return pls::cs::flow_return(java::io::ByteArrayInputStream::create(array));
                    }
                    return {};
                },
                [&]() {
                    if (!is_null(dataInputStream)) {
                        try {
                            require(dataInputStream)->Close();
                        } catch (const pls::cs::Exception& cs_caught_11) {
                            pls::cs::capture_exception(cs_caught_11);
                            {
                            }
                        }
                    }
                    dataInputStream = pls::cs::Ref<java::io::DataInputStream>{};
                });
            return cs_flow_12.value();
        }
    }
}

// M:kairo.unity.util.JarInflater.GetSize(System.String)
pls::cs::Int64 JarInflater::GetSize(pls::cs::String name) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.JarInflater.GetSize(System.String)", kairo);
    {
        name = ConvertExtension(name);
        if (!is_null(directory_)) {
            ByteArray array =
                PLS_API(pls::kairo::Storage::Read(3, false, pls::cs::String::concat(directory_, name)));
            if ([&]() {
                    auto cs_left = pls::cs::box(array);
                    auto cs_right = pls::cs::box(ByteArray{});
                    return cs_left != cs_right;
                }()) {
                return pls::cs::cast_integral<pls::cs::Int64>(array.length());
            }
        }
        pls::cs::Ref<JarInflater_FileInfo> fileInfo = _search(name);
        if (is_null(fileInfo)) {
            return -1ll;
        }
        return pls::cs::cast_integral<pls::cs::Int64>(require(fileInfo)->Size);
    }
}

// M:kairo.unity.util.JarInflater.GetData(System.String)
ByteArray JarInflater::GetData(pls::cs::String name) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.JarInflater.GetData(System.String)", kairo);
    {
        common::cfg::Config::ensure_initialized();

        name = ConvertExtension(name);
        if (!is_null(directory_)) {
            ByteArray array =
                PLS_API(pls::kairo::Storage::Read(3, false, pls::cs::String::concat(directory_, name)));
            if ([&]() {
                    auto cs_left = pls::cs::box(array);
                    auto cs_right = pls::cs::box(ByteArray{});
                    return cs_left != cs_right;
                }()) {
                return array;
            }
        }
        if (pls::cs::to_int32(GetSize(name)) == -1) {
            if (common::cfg::Config::PRINT()) {
                Log::Info(
                    pls::cs::String::concat(pls::cs::String::concat(literal(u"JarInflater.getData: ["), name),
                                            literal(u"]が見つかりません")),
                    pls::cs::Ref<pls::cs::ExceptionObject>{});
            }
            return ByteArray{};
        }
        pls::cs::Ref<java::io::InputStream> inputStream = GetInputStream(name);
        if (is_null(inputStream)) {
            return ByteArray{};
        }
        pls::cs::Ref<java::io::ByteArrayOutputStream> byteArrayOutputStream =
            java::io::ByteArrayOutputStream::create();
        ByteArray array2 = ByteArray{};
        ByteArray array3 = ByteArray::make(1024);
        pls::cs::Int32 len;
        pls::cs::run_finally(
            [&]() {
                {
                    while ((([&]() {
                               pls::cs::Int32 cs_value = require(inputStream)->Read(array3);
                               len = cs_value;
                               return cs_value;
                           }())) >= 0) {
                        require(byteArrayOutputStream)->Write(array3, 0, len);
                    }
                    array2 = require(byteArrayOutputStream)->ToByteArray();
                }
            },
            [&]() {
                if (!is_null(byteArrayOutputStream)) {
                    try {
                        require(byteArrayOutputStream)->Close();
                    } catch (const pls::cs::Exception& cs_caught_5) {
                        pls::cs::capture_exception(cs_caught_5);
                        {
                        }
                    }
                }
                byteArrayOutputStream = pls::cs::Ref<java::io::ByteArrayOutputStream>{};
                if (!is_null(inputStream)) {
                    try {
                        require(inputStream)->Close();
                    } catch (const pls::cs::Exception& cs_caught_6) {
                        pls::cs::capture_exception(cs_caught_6);
                        {
                        }
                    }
                }
                inputStream = pls::cs::Ref<java::io::InputStream>{};
            });
        return array2;
    }
}

// M:kairo.unity.util.JarInflater._search(System.String)
pls::cs::Ref<JarInflater_FileInfo> JarInflater::_search(pls::cs::String name) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.JarInflater._search(System.String)", kairo);
    {
        if (is_null(name) || is_null(files_)) {
            return pls::cs::Ref<JarInflater_FileInfo>{};
        }
        name = PLS_API(pls::cs::culture_to_lower(ConvertExtension(PLS_API(pls::cs::string_trim(name)))));
        StringArray accessFilesList = io::AssetReader::GetAccessFilesList(name);
        for (pls::cs::Int32 i = 0; i < accessFilesList.length(); ++i) {
            pls::cs::Ref<JarInflater_FileInfo> value = pls::cs::Ref<JarInflater_FileInfo>{};
            if (PLS_API(([&]() {
                    auto cs_dictionary = files_;
                    auto cs_key = PLS_API(pls::cs::culture_to_lower(accessFilesList[i]));
                    return cs_dictionary.TryGetValue(cs_key, value);
                }()))) {
                return value;
            }
        }
        return pls::cs::Ref<JarInflater_FileInfo>{};
    }
}

// M:kairo.unity.util.JarInflater.GetResourceAsStream(System.String)
pls::cs::Ref<java::io::InputStream> JarInflater::GetResourceAsStream(pls::cs::String file) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.JarInflater.GetResourceAsStream(System.String)",
                     kairo);
    {
        file = ConvertExtension(file);
        try {
            if (io::AssetReader::Exist(file)) {
                return io::AssetReader::GetInputStream(file);
            }
            file = pls::cs::String::concat(file, literal(u".bytes"));
            if (io::AssetReader::Exist(file)) {
                return io::AssetReader::GetInputStream(file);
            }
        } catch (const pls::cs::Exception& cs_caught_13) {
            pls::cs::capture_exception(cs_caught_13);
            {
            }
        }
        return pls::cs::Ref<java::io::InputStream>{};
    }
}

// M:kairo.unity.util.JarInflater.ConvertExtension(System.String)
pls::cs::String JarInflater::ConvertExtension(pls::cs::String file) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.JarInflater.ConvertExtension(System.String)", kairo);
    {
        if (is_null(file)) {
            return file;
        }
        file = common::cfg::Config::ConvertExtension(file);
        if (!is_null(directory_)) {
            pls::cs::String text =
                PLS_API(pls::cs::culture_to_lower(PLS_API(pls::cs::RuntimePath::GetExtension(file))));
            pls::cs::String text2 = text;
            if (text == literal(u".inf") || text == literal(u".ini")) {
                text = literal(u".txt");
            }
            if (text != text2) {
                file = PLS_API(pls::cs::RuntimePath::ChangeExtension(file, text));
            }
        }
        return file;
    }
}
} // namespace kairo::unity::util
}
