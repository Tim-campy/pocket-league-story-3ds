#pragma once
#include "semantic_runtime.hpp"
#include "managed_string_ops.hpp"
#include <functional>
#include <string>
#include <vector>

namespace pls::cs {
// LCID and parents must describe the host CLR culture, independently of the
// language selected in the game's asset table. No en-US/ASCII fallback exists.
struct CollationCulture {
    std::int32_t lcid = 127;
    std::vector<std::int32_t> parent_lcids;
    std::string neutral_name;
    bool turkic_i = false;
};

// Mono's MIT SimpleCollator calls historical Char/TextInfo operations. The
// provider must implement the historical BMP data, not current OS NLS/ICU.
// Installed once at a safe point; callbacks must outlive use and be thread-safe.
struct CollationCharacterData {
    std::function<char16_t(char16_t, const CollationCulture&)> lower;
    std::function<char16_t(char16_t, const CollationCulture&)> upper;
    std::function<bool(char16_t)> other_not_assigned;
};
void install_collation_character_data(CollationCharacterData provider);
// Exact official historical BMP tables, separately licensed GNU Library GPLv2.
void install_mono_collation_character_data();
std::size_t mono_character_data_bytes() noexcept;
bool mono_character_is_unassigned(char16_t value) noexcept;
// Explicit process default, installed before workers. Historical Mono workers
// initialize from that default rather than inheriting the parent's override.
void set_default_collation_culture(CollationCulture culture);
void set_current_collation_culture(CollationCulture culture);
void clear_current_collation_culture();
const CollationCulture& current_collation_culture();
std::size_t collation_resource_bytes() noexcept;

std::int32_t culture_compare(const String& left, const String& right, bool ignore_case = false);
inline std::int32_t culture_compare_to(const String& receiver,const String& value){receiver.length();return culture_compare(receiver,value,false);}
inline float culture_parse_single(const String& value){const auto& culture=current_collation_culture();if(culture.lcid!=127&&culture.lcid!=1033)throw NotSupportedException("Single.Parse currently covers only the measured invariant/en-US number format");return single_parse_legacy(value);}
bool culture_equals_ignore_case(const String& left, const String& right);
// Historical Mono's one-argument overload explicitly requests Ordinal, whereas
// the overloads with start/count use CurrentCulture. Keep these distinct.
std::int32_t culture_index_of(const String& source, const String& target);
std::int32_t culture_index_of(const String& source, const String& target, std::int32_t start);
std::int32_t culture_index_of(const String& source, const String& target, std::int32_t start, std::int32_t count);
std::int32_t culture_last_index_of(const String& source, const String& target);
std::int32_t culture_last_index_of(const String& source, const String& target, std::int32_t start);
std::int32_t culture_last_index_of(const String& source, const String& target, std::int32_t start, std::int32_t count);
bool culture_starts_with(const String& source, const String& target);
bool culture_ends_with(const String& source, const String& target);
String culture_to_lower(const String& source);
String culture_to_upper(const String& source);
char16_t culture_char_to_lower(char16_t value);
char16_t culture_char_to_upper(char16_t value);
char16_t invariant_char_to_lower(char16_t value);
char16_t invariant_char_to_upper(char16_t value);
} // namespace pls::cs
