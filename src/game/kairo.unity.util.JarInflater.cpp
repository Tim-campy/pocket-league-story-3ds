// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/java.io.InputStream.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/kairo.unity.io.AssetReader.hpp"
#include "generated/kairo.unity.util.JarInflater.FileInfo.hpp"
#include "generated/kairo.unity.util.JarInflater.hpp"
#include "kairo.unity.util.JarInflater.hpp"

namespace kl_java_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_unity_io = pls::generated::kairo::unity::io;
namespace kl_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;

namespace pls::game {
namespace kairo::unity::util::JarInflater {

void create_init(pls::cs::Ref<kl_util::JarInflater> self, pls::cs::String directory) {
    kl_util::JarInflater::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.JarInflater.#ctor(System.String)", kairo);
    {
        self->directory_ = directory;
        if (!pls::diagnostic::api_call([&]() -> decltype(auto) {
                return pls::cs::culture_ends_with(self->directory_, literal(u"/"));
            })) {
            self->directory_ = pls::cs::String::concat(self->directory_, literal(u"/"));
        }
        pls::cs::String text = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return pls::cs::String::concat(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return ([&]() -> pls::cs::String {
                                                   auto cs_arg0 = self->directory_;
                                                   auto cs_arg1 = 0;
                                                   auto cs_arg2 =
                                                       kl_lang::StringEx::Length(self->directory_) - 1;
                                                   return substring2(cs_arg0, cs_arg1, cs_arg2);
                                               }());
                                           }),
                                           literal(u".dat"));
        });
        StringArray array = StringArray::from({text, pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                   return pls::cs::String::concat(self->directory_, text);
                                               })});
        for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
            pls::cs::Ref<kl_java_io::InputStream> resourceAsStream = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return self->GetResourceAsStream(array[i]); });
            if (is_null(resourceAsStream)) {
                continue;
            }
            {
                auto cs_flow_68 = pls::cs::run_finally(
                    [&]() -> pls::cs::Flow<void> {
                        {
                            pls::diagnostic::api_call(
                                [&]() -> decltype(auto) { return self->_load(resourceAsStream); });
                            return pls::cs::flow_break(1425);
                        }
                        return {};
                    },
                    [&]() {
                        if (!is_null(resourceAsStream)) {
                            pls::diagnostic::api_call(
                                [&]() -> decltype(auto) { return require(resourceAsStream)->Close(); });
                        }
                        resourceAsStream = pls::cs::Ref<kl_java_io::InputStream>{};
                    });
                if (cs_flow_68.is_break(1425))
                    break;
            }
        }
    }
}

// M:kairo.unity.util.JarInflater.#ctor(System.String)
pls::cs::Ref<kl_util::JarInflater> create(pls::cs::String directory) {
    kl_util::JarInflater::ensure_initialized();
    auto self = pls::cs::make_ref<kl_util::JarInflater>();
    JarInflater::create_init(self, directory);
    return self;
}

// M:kairo.unity.util.JarInflater.Exist(System.String)
bool Exist(pls::cs::Ref<kl_util::JarInflater> self, pls::cs::String name) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.JarInflater.Exist(System.String)", kairo);
    {
        name = pls::diagnostic::api_call([&]() -> decltype(auto) { return self->ConvertExtension(name); });
        if (!is_null(self->directory_)) {
            return JarInflater::CheckResourceAsStream(self, pls::cs::String::concat(self->directory_, name));
        }
        return !is_null(pls::diagnostic::api_call([&]() -> decltype(auto) { return self->_search(name); }));
    }
}

// M:kairo.unity.util.JarInflater.GetDirectory
pls::cs::String GetDirectory(pls::cs::Ref<kl_util::JarInflater> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.JarInflater.GetDirectory", kairo);
    {
        return self->directory_;
    }
}

// M:kairo.unity.util.JarInflater.CheckResourceAsStream(System.String)
bool CheckResourceAsStream(pls::cs::Ref<kl_util::JarInflater> self, pls::cs::String file) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.JarInflater.CheckResourceAsStream(System.String)",
                     kairo);
    {
        file = pls::diagnostic::api_call([&]() -> decltype(auto) { return self->ConvertExtension(file); });
        try {
            return pls::diagnostic::api_call(
                       [&]() -> decltype(auto) { return kl_unity_io::AssetReader::Exist(file); }) ||
                   pls::diagnostic::api_call([&]() -> decltype(auto) {
                       return kl_unity_io::AssetReader::Exist(
                           pls::cs::String::concat(file, literal(u".bytes")));
                   });
        } catch (const pls::cs::Exception& cs_caught_65) {
            pls::cs::capture_exception(cs_caught_65);
            {
            }
        }
        return false;
    }
}

// M:kairo.unity.util.JarInflater.GetFiles
StringArray GetFiles(pls::cs::Ref<kl_util::JarInflater> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.JarInflater.GetFiles", kairo);
    {
        if (!is_null(self->directory_)) {
            return StringArray{};
        }
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() {
                auto cs_dictionary = self->files_;
                return cs_dictionary.KeysToArray();
            }());
        });
    }
}
} // namespace kairo::unity::util::JarInflater
}
