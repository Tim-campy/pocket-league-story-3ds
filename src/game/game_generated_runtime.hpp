#include "diagnostic_profile.hpp"
// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "semantic_runtime.hpp"
#include "managed_shared_field.hpp"
#include "managed_text.hpp"
#include "managed_random.hpp"
#include "managed_time.hpp"
#include "managed_streams.hpp"
#include "managed_dictionary.hpp"
#include "managed_type_init.hpp"
#include "managed_reflection.hpp"
#include "managed_exceptions.hpp"
#include "managed_thread.hpp"
#include "managed_collation.hpp"
#include "managed_encoding.hpp"
#include "managed_regex.hpp"
#include "managed_stream_reader.hpp"
#include "managed_path.hpp"
#include "managed_string_ops.hpp"
#include "managed_guid_uri.hpp"
#include "generated/portable_generated_runtime.hpp"
#include "generated/portable_generated_forward.hpp"
#include "application.hpp"
#include "baked_arrays.hpp"
#include "services_managed.hpp"
#include "text_input.hpp"
#include "dialog_service.hpp"
#include "mesh.hpp"
#include "graphics.hpp"
#include "font.hpp"
#include "sound.hpp"
#include "forms.hpp"
#include "canvas.hpp"
#include "storage.hpp"
#include "input.hpp"
#include "system.hpp"
#include "forms_execution.hpp"
#include "offline_http.hpp"
#include "capture.hpp"
#include "forms_callbacks.hpp"
#include "matrix4.hpp"
#include "debug_input.hpp"
#include "runtime_memory.hpp"
#include "vector2.hpp"
#include "touch_value_accessor.hpp"
#include "globalization.hpp"
#include "storage.hpp"
#include "application.hpp"
#include "asset_reader.hpp"
#include "display_metrics.hpp"
#include "bootstrap_bindings.hpp"
#include <cmath>
#include <cstring>

namespace pls::game {
[[maybe_unused]] static float float_from_bits(std::uint32_t bits) {
    float value;
    std::memcpy(&value, &bits, sizeof(value));
    return value;
}

[[maybe_unused]] static double double_from_bits(std::uint64_t bits) {
    double value;
    std::memcpy(&value, &bits, sizeof(value));
    return value;
}

template<class T> bool is_instance(const pls::cs::Ref<pls::cs::Object>& value) {
    if (!value)
        return false;
    if constexpr (pls::cs::is_shared_ref<T>::value)
        return bool(pls::cs::dynamic_pointer_cast<typename pls::cs::is_shared_ref<T>::element_type>(value));
    else {
        try {
            (void)pls::cs::unbox<T>(value);
            return true;
        } catch (const pls::cs::InvalidCastException&) {
            return false;
        }
    }
}

template<class T> std::int32_t value_hash(T value) {
    auto object = pls::cs::box(value);
    if (!object)
        throw pls::cs::NullReferenceException();
    return object->GetHashCode();
}

[[maybe_unused]] static pls::cs::String string_identity(const pls::cs::String& value) {
    value.length();
    return value;
}

[[maybe_unused]] static pls::cs::String object_string(const pls::cs::Ref<pls::cs::Object>& value) {
    return value ? value->ToString() : pls::cs::String(u"");
}

// Mono String.Concat(object,object): null arguments are empty; then Concat(ToString(), ToString()).
[[maybe_unused]] static pls::cs::String concat_objects2(const pls::cs::Ref<pls::cs::Object>& first,
                                                        const pls::cs::Ref<pls::cs::Object>& second) {
    auto a = object_string(first);
    auto b = object_string(second);
    return pls::cs::String::concat(a, b);
}

[[maybe_unused]] static pls::cs::String concat_objects3(const pls::cs::Ref<pls::cs::Object>& first,
                                                        const pls::cs::Ref<pls::cs::Object>& second,
                                                        const pls::cs::Ref<pls::cs::Object>& third) {
    auto a = object_string(first);
    auto b = object_string(second);
    auto c = object_string(third);
    return pls::cs::String::concat(pls::cs::String::concat(a, b), c);
}

[[maybe_unused]] static pls::cs::String concat_strings3(const pls::cs::String& a, const pls::cs::String& b,
                                                        const pls::cs::String& c) {
    return pls::cs::String::concat(pls::cs::String::concat(a, b), c);
}

[[maybe_unused]] static pls::cs::String concat_strings4(const pls::cs::String& a, const pls::cs::String& b,
                                                        const pls::cs::String& c, const pls::cs::String& d) {
    return pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(a, b), c), d);
}

[[maybe_unused]] static pls::cs::String
concat_object_array(const pls::cs::Array<pls::cs::Ref<pls::cs::Object>>& values) {
    if (values.is_null())
        throw pls::cs::ArgumentNullException();
    auto result = pls::cs::String(u"");
    for (std::int32_t i = 0; i < values.length(); ++i) {
        auto part = object_string(values.at(i));
        if (part.is_null() && pls::cs::runtime_profile == pls::cs::RuntimeProfile::UnityMono265)
            throw pls::cs::NullReferenceException();
        result = pls::cs::String::concat(result, part);
    }
    return result;
}

[[maybe_unused]] static bool contains_string(const pls::cs::String& source, const pls::cs::String& value) {
    return pls::cs::culture_index_of(source, value) >= 0;
}

[[maybe_unused]] static bool string_equals(const pls::cs::String& left, const pls::cs::String& right) {
    left.length();
    return left == right;
}

template<class T> inline T require(T value) {
    if (!value)
        pls::cs::throw_null_reference();
    return value;
}

[[maybe_unused]] static pls::cs::String string_from_chars(pls::cs::Array<char16_t> chars) {
    if (chars.is_null())
        throw pls::cs::ArgumentNullException();
    std::u16string out;
    for (std::int32_t i = 0; i < chars.length(); ++i)
        out.push_back(chars.at(i));
    return pls::cs::String(std::move(out));
}

[[maybe_unused]] static bool is_little_endian() {
    const std::uint16_t value = 1;
    std::uint8_t first;
    std::memcpy(&first, &value, 1);
    return first == 1;
}

template<class T> static T network_to_host(T value) {
    if constexpr (std::is_class_v<T>)
        return T(network_to_host(value.raw()));
    else {
        if (!is_little_endian())
            return value;
        using U = std::make_unsigned_t<T>;
        U bits{};
        std::memcpy(&bits, &value, sizeof(T));
        U result = 0;
        for (std::size_t i = 0; i < sizeof(T); ++i) {
            result = static_cast<U>((result << 8) | (bits & 255));
            bits >>= 8;
        }
        T out{};
        std::memcpy(&out, &result, sizeof(T));
        return out;
    }
}

[[maybe_unused]] static pls::cs::String substring2(const pls::cs::String& source, std::int32_t start,
                                                   std::int32_t count) {
    const auto n = source.length();
    if (start < 0 || count < 0 || static_cast<std::int64_t>(start) + count > n)
        throw pls::cs::ArgumentOutOfRangeException();
    std::u16string value;
    for (std::int32_t i = 0; i < count; ++i)
        value.push_back(source.at(start + i));
    return pls::cs::String(std::move(value));
}

[[maybe_unused]] static pls::cs::String substring1(const pls::cs::String& source, std::int32_t start) {
    if (start < 0 || start > source.length())
        throw pls::cs::ArgumentOutOfRangeException();
    return substring2(source, start, source.length() - start);
}

[[maybe_unused]] static pls::cs::Array<char16_t> to_chars(const pls::cs::String& source) {
    auto result = pls::cs::Array<char16_t>::make(source.length());
    for (std::int32_t i = 0; i < result.length(); ++i)
        result.at(i) = source.at(i);
    return result;
}

[[maybe_unused]] static std::int32_t index_char2(const pls::cs::String& source, char16_t value,
                                                 std::int32_t start) {
    auto n = source.length();
    if (start < 0 || start > n)
        throw pls::cs::ArgumentOutOfRangeException();
    for (auto i = start; i < n; ++i)
        if (source.at(i) == value)
            return i;
    return -1;
}

[[maybe_unused]] static std::int32_t last_index_char1(const pls::cs::String& source, char16_t value) {
    for (auto i = source.length(); i > 0; --i)
        if (source.at(i - 1) == value)
            return i - 1;
    return -1;
}

[[maybe_unused]] static std::int32_t index_char1(const pls::cs::String& source, char16_t value) {
    return index_char2(source, value, 0);
}

[[maybe_unused]] static pls::cs::String char_string(char16_t value) {
    return pls::cs::String(std::u16string(1, value));
}

template<class T> pls::cs::String integer_string(T value) {
    auto text = std::to_string(value);
    if (!text.empty() && text[0] == '-')
        return pls::cs::String::concat(pls::cs::integer_number_format.negative_sign,
                                       pls::cs::String::from_utf8(text.substr(1)));
    return pls::cs::String::from_utf8(text);
}

template<class T> pls::cs::Ref<pls::cs::Object> clone_array(pls::cs::Array<T> value) {
    return value.clone().as_object();
}

template<class T> pls::cs::Array<std::uint8_t> bit_bytes(T value) {
    using U = std::conditional_t<sizeof(T) == 8, std::uint64_t,
                                 std::conditional_t<sizeof(T) == 4, std::uint32_t, std::uint16_t>>;
    U bits{};
    std::memcpy(&bits, &value, sizeof(T));
    auto result = pls::cs::Array<std::uint8_t>::make(sizeof(T));
    for (std::int32_t i = 0; i < result.length(); ++i)
        result.at(i) = static_cast<std::uint8_t>(bits >> (i * 8));
    return result;
}

template<class T> T bits_from(pls::cs::Array<std::uint8_t> source, std::int32_t start) {
    if (source.is_null())
        throw pls::cs::ArgumentNullException();
    if (start < 0 || start >= source.length())
        throw pls::cs::ArgumentOutOfRangeException();
    if (static_cast<std::int64_t>(start) + sizeof(T) > source.length())
        throw pls::cs::ArgumentException();
    using U = std::conditional_t<sizeof(T) == 8, std::uint64_t,
                                 std::conditional_t<sizeof(T) == 4, std::uint32_t, std::uint16_t>>;
    U bits = 0;
    for (std::int32_t i = 0; i < sizeof(T); ++i)
        bits |= static_cast<U>(source.at(start + i)) << (i * 8);
    T result;
    std::memcpy(&result, &bits, sizeof(T));
    return result;
}

template<std::size_t N> pls::cs::String literal(const char16_t (&text)[N]) {
    return pls::cs::String::literal(text, N - 1);
}

template<class T> bool is_null(const T& value) {
    return pls::cs::box(value) == pls::cs::Ref<pls::cs::Object>{};
}

[[maybe_unused]] static std::int32_t post_increment(std::int32_t& value) {
    const auto old = value;
    pls::cs::Int32 typed = value;
    ++typed;
    value = typed;
    return old;
}

[[maybe_unused]] static std::int64_t post_increment(std::int64_t& value) {
    const auto old = value;
    pls::cs::Int64 typed = value;
    ++typed;
    value = typed;
    return old;
}

[[maybe_unused]] static std::uint32_t post_increment(std::uint32_t& value) {
    const auto old = value;
    value = pls::cs::add_u32(old, 1);
    return old;
}

[[maybe_unused]] static std::uint64_t post_increment(std::uint64_t& value) {
    const auto old = value;
    value = pls::cs::add_u64(old, 1);
    return old;
}

[[maybe_unused]] static std::int32_t post_decrement(std::int32_t& value) {
    const auto old = value;
    pls::cs::Int32 typed = value;
    --typed;
    value = typed;
    return old;
}

[[maybe_unused]] static std::int64_t post_decrement(std::int64_t& value) {
    const auto old = value;
    pls::cs::Int64 typed = value;
    --typed;
    value = typed;
    return old;
}

[[maybe_unused]] static std::uint32_t post_decrement(std::uint32_t& value) {
    const auto old = value;
    value = pls::cs::sub_u32(old, 1);
    return old;
}

[[maybe_unused]] static std::uint64_t post_decrement(std::uint64_t& value) {
    const auto old = value;
    value = pls::cs::sub_u64(old, 1);
    return old;
}

[[maybe_unused]] static std::int32_t pre_increment(std::int32_t& value) {
    pls::cs::Int32 typed = value;
    ++typed;
    value = typed;
    return value;
}

[[maybe_unused]] static pls::cs::Int32 pre_increment(pls::cs::Int32& value) {
    return ++value;
}

[[maybe_unused]] static pls::cs::Int64 pre_increment(pls::cs::Int64& value) {
    return ++value;
}

[[maybe_unused]] static pls::cs::Int32 pre_decrement(pls::cs::Int32& value) {
    return --value;
}

[[maybe_unused]] static pls::cs::Int64 pre_decrement(pls::cs::Int64& value) {
    return --value;
}

[[maybe_unused]] static pls::cs::Int32 post_increment(pls::cs::Int32& value) {
    return value++;
}

[[maybe_unused]] static pls::cs::Int64 post_increment(pls::cs::Int64& value) {
    return value++;
}

[[maybe_unused]] static pls::cs::Int32 post_decrement(pls::cs::Int32& value) {
    return value--;
}

[[maybe_unused]] static pls::cs::Int64 post_decrement(pls::cs::Int64& value) {
    return value--;
}

[[maybe_unused]] static std::int64_t pre_increment(std::int64_t& value) {
    pls::cs::Int64 typed = value;
    ++typed;
    value = typed;
    return value;
}

[[maybe_unused]] static std::uint32_t pre_increment(std::uint32_t& value) {
    value = pls::cs::add_u32(value, 1);
    return value;
}

[[maybe_unused]] static std::uint64_t pre_increment(std::uint64_t& value) {
    value = pls::cs::add_u64(value, 1);
    return value;
}

[[maybe_unused]] static std::int32_t pre_decrement(std::int32_t& value) {
    pls::cs::Int32 typed = value;
    --typed;
    value = typed;
    return value;
}

[[maybe_unused]] static std::int64_t pre_decrement(std::int64_t& value) {
    pls::cs::Int64 typed = value;
    --typed;
    value = typed;
    return value;
}

[[maybe_unused]] static std::uint32_t pre_decrement(std::uint32_t& value) {
    value = pls::cs::sub_u32(value, 1);
    return value;
}

[[maybe_unused]] static std::uint64_t pre_decrement(std::uint64_t& value) {
    value = pls::cs::sub_u64(value, 1);
    return value;
}
}
