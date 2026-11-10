// Mono class-library collator adaptation. Copyright (C) 2005 Novell, Inc.
// MIT/X11, see THIRD_PARTY.md and tools/setup_mono_collation.py.
#include "managed_collation.hpp"
#include <algorithm>
#include <array>
#include <initializer_list>
#include <memory>
#include <optional>
#include <utility>

namespace pls::cs {
namespace {
using byte = std::uint8_t;
#include "mono_collation_tables.inc"

CollationCharacterData character_data;
thread_local std::optional<CollationCulture> current_culture;
std::optional<CollationCulture> default_culture;
const CollationCharacterData& require_character_data() {
    if(!character_data.lower || !character_data.upper || !character_data.other_not_assigned)
        throw NotSupportedException("Historical Mono BMP casing/category provider is not installed");
    return character_data;
}

// Small value adapters keep the reviewed source algorithm close to the MIT C#.
struct Str {
    std::shared_ptr<const std::u16string> value;
    int Length = 0;
    Str() = default;
    Str(std::nullptr_t) {}
    explicit Str(std::u16string text):value(std::make_shared<const std::u16string>(std::move(text))),Length(static_cast<int>(value->size())){}
    // The C# collator receives the existing immutable String. Alias its
    // storage instead of allocating/copying a native string adapter per call.
    explicit Str(const String& text):value(text.as_object(),&text.code_units()),Length(text.length()){}
    char16_t operator[](int index) const {if(index<0 || index>=Length)throw IndexOutOfRangeException();return (*value)[static_cast<std::size_t>(index)];}
    bool same_storage(const Str& other)const noexcept{return value==other.value;}
    bool operator==(std::nullptr_t)const noexcept{return !value;}
    bool operator!=(std::nullptr_t)const noexcept{return bool(value);}
};
template<class T> struct Buf {
    std::shared_ptr<std::vector<T>> value;
    int Length = 0;
    Buf() = default;
    explicit Buf(std::vector<T> v):value(std::make_shared<std::vector<T>>(std::move(v))),Length(static_cast<int>(value->size())){}
    T& operator[](int i)const {if(i<0 || i>=Length)throw IndexOutOfRangeException();return (*value)[static_cast<std::size_t>(i)];}
    bool operator==(std::nullptr_t)const noexcept{return !value;}
    bool operator!=(std::nullptr_t)const noexcept{return bool(value);}
};
struct ContractionData {Str Source, Replacement;Buf<byte> SortKey;};
using Contraction = std::shared_ptr<ContractionData>;
struct Level2Map {byte Source, Replace;};
struct Indexer {
    std::vector<std::pair<int,int>> ranges;
    int default_index = 0;
    Indexer() = default;
    Indexer(std::initializer_list<std::pair<int,int>> r,int d):ranges(r),default_index(d){}
    int ToIndex(int cp)const {int index=0;for(const auto& r:ranges){if(cp<r.first)return default_index;if(cp<r.second)return cp-r.first+index;index+=r.second-r.first;}return default_index;}
};
std::uint32_t read32(const byte* p){return p[0]|(std::uint32_t(p[1])<<8)|(std::uint32_t(p[2])<<16)|(std::uint32_t(p[3])<<24);}
struct Tailoring {int lcid, index, count;bool french;};
struct Uni {
    static constexpr int MaxExpansionLength = 3;
    std::array<const byte*,5> tables{};
    std::vector<Tailoring> tailorings;
    std::u16string tailoring_chars;
    const Indexer ignorable{{{0,0x3400},{0xa000,0xa500},{0xf900,0x10000}},-1};
    const Indexer category{{{0,0x1200},{0x1e00,0x2800},{0x3000,0x3400},{0x4e00,0xa000},{0xac00,0xd7b0},{0xf900,0x10000}},0};
    const Indexer level2{{{0,0xf00},{0x1e00,0x2800},{0x3000,0x3400},{0xfb00,0x10000}},0};
    const Indexer level3{{{0,0x1200},{0x1e00,0x2800},{0x3000,0x3400},{0xfb00,0x10000}},0};
    Uni(){
        std::size_t offset=1;
        if(collation_core[0]!=3 || collation_tailoring[0]!=3)throw InvalidOperationException("Mono collation resource version");
        for(auto& t:tables){auto size=read32(collation_core+offset);offset+=4;t=collation_core+offset;offset+=size;}
        offset=1;const auto count=read32(collation_tailoring+offset);offset+=4;
        for(std::uint32_t i=0;i<count;++i){auto l=read32(collation_tailoring+offset);auto x=read32(collation_tailoring+offset+4);auto n=read32(collation_tailoring+offset+8);bool f=collation_tailoring[offset+12]!=0;offset+=13;tailorings.push_back({static_cast<int>(l),static_cast<int>(x),static_cast<int>(n),f});}
        offset+=2;const auto chars=read32(collation_tailoring+offset);offset+=4;
        for(std::uint32_t i=0;i<chars;++i,offset+=2)tailoring_chars.push_back(static_cast<char16_t>(collation_tailoring[offset]|(collation_tailoring[offset+1]<<8)));
    }
    static const Uni& instance(){static const Uni result;return result;}
    static byte Category(int cp){const auto& u=instance();return u.tables[1][u.category.ToIndex(cp)];}
    static byte Level1(int cp){const auto& u=instance();return u.tables[2][u.category.ToIndex(cp)];}
    static byte Level2(int cp){const auto& u=instance();return u.tables[3][u.level2.ToIndex(cp)];}
    static byte Level3(int cp){const auto& u=instance();return u.tables[4][u.level3.ToIndex(cp)];}
    static bool IsIgnorable(int cp,byte flag=1){
        if(cp==0)return false;
        if((flag&1)!=0){if(require_character_data().other_not_assigned(static_cast<char16_t>(cp)))return true;if(0xd880<=cp && cp<0xdb80)return true;}
        const auto& u=instance();const int index=u.ignorable.ToIndex(cp);return index>=0 && (u.tables[0][index]&flag)!=0;
    }
    static bool IsIgnorableNonSpacing(int cp){return IsIgnorable(cp,4);}
    static bool IsIgnorableSymbol(int cp){return IsIgnorable(cp,2);}
#include "mono_unicode_methods.inc"
};
namespace COpt {
constexpr int None=0,IgnoreCase=1,IgnoreNonSpace=2,IgnoreSymbols=4,IgnoreKanaType=8,IgnoreWidth=16,StringSort=0x20000000,Ordinal=0x40000000,OrdinalIgnoreCase=0x10000000;
}
namespace CompareOptions = COpt;
enum class ExtenderType {None,Simple,Voiced,Conditional,Buggy};
struct Context {
    int Option;byte *NeverMatchFlags,*AlwaysMatchFlags,*Buffer1,*Buffer2;int PrevCode;byte* PrevSortKey;bool QuickCheckPossible;
    Context(int o,byte* a,byte* n,byte* b1,byte* b2,byte* p,bool q):Option(o),NeverMatchFlags(n),AlwaysMatchFlags(a),Buffer1(b1),Buffer2(b2),PrevCode(-1),PrevSortKey(p),QuickCheckPossible(q){}
    void ClearPrevInfo(){PrevCode=-1;PrevSortKey=nullptr;}
};
struct PreviousInfo {int Code=-1;byte* SortKey=nullptr;explicit PreviousInfo(bool){}};
struct Escape {Str Source;int Index=0,Start=0,End=0,Optional=0;};
struct TextInfo {
    CollationCulture culture;
    char16_t ToLower(char16_t c)const{return require_character_data().lower(c,culture);}
    char16_t ToUpper(char16_t c)const{return require_character_data().upper(c,culture);}
};
struct Collator {
    TextInfo textInfo;
    bool frenchSort=false;
    const byte *cjkCatTable=nullptr,*cjkLv1Table=nullptr,*cjkLv2Table=nullptr;
    Indexer cjkIndexer,cjkLv2Indexer;
    int lcid;
    Buf<Contraction> contractions,invariant_contractions;
    Buf<Level2Map> level2Maps;
    Buf<byte> unsafeFlags{std::vector<byte>(0x300/8)};
    static std::pair<Buf<Contraction>,Buf<Level2Map>> build(const Tailoring& t){
        const auto& chars=Uni::instance().tailoring_chars;std::vector<Contraction> cs;std::vector<Level2Map> maps;
        int index=t.index,end=t.index+t.count;
        while(index<end){const auto kind=chars[static_cast<std::size_t>(index++)];
            if(kind==2){maps.push_back({static_cast<byte>(chars[static_cast<std::size_t>(index)]),static_cast<byte>(chars[static_cast<std::size_t>(index+1)])});index+=2;continue;}
            std::u16string source;while(chars[static_cast<std::size_t>(index)]!=0)source.push_back(chars[static_cast<std::size_t>(index++)]);++index;
            auto c=std::make_shared<ContractionData>();c->Source=Str(std::move(source));
            if(kind==1){std::vector<byte> key;for(int i=0;i<4;++i)key.push_back(static_cast<byte>(chars[static_cast<std::size_t>(index++)]));++index;c->SortKey=Buf<byte>(std::move(key));}
            else if(kind==3){std::u16string replacement;while(chars[static_cast<std::size_t>(index)]!=0)replacement.push_back(chars[static_cast<std::size_t>(index++)]);++index;c->Replacement=Str(std::move(replacement));}
            else throw InvalidOperationException("Mono tailoring opcode");
            cs.push_back(std::move(c));
        }
        std::sort(cs.begin(),cs.end(),[](const Contraction&a,const Contraction&b){return *a->Source.value<*b->Source.value;});
        std::sort(maps.begin(),maps.end(),[](const Level2Map&a,const Level2Map&b){return a.Source<b.Source;});
        return {Buf<Contraction>(std::move(cs)),Buf<Level2Map>(std::move(maps))};
    }
    explicit Collator(const CollationCulture& culture):textInfo{culture},lcid(culture.lcid){
        const auto& infos=Uni::instance().tailorings;
        auto find=[&](int id)->const Tailoring*{for(const auto& x:infos)if(x.lcid==id)return &x;return nullptr;};
        const Tailoring* invariant=find(127);if(!invariant)throw InvalidOperationException("Mono invariant tailoring absent");
        const Tailoring* selected=find(lcid);for(int id:culture.parent_lcids){if(selected)break;selected=find(id);}if(!selected)selected=invariant;
        frenchSort=selected->french;auto selected_tables=build(*selected);contractions=std::move(selected_tables.first);level2Maps=std::move(selected_tables.second);
        invariant_contractions=build(*invariant).first;
        for(const auto& list:{contractions,invariant_contractions})for(const auto& c:*list.value)if(c->Source.Length>1)for(char16_t ch:*c->Source.value){auto& f=unsafeFlags[static_cast<int>(ch)/8];f=static_cast<byte>(f|(1<<(static_cast<int>(ch)&7)));}
        const byte* resource=nullptr;
        if(culture.neutral_name=="ja")resource=collation_cjkJA;
        else if(culture.neutral_name=="zh-CHS")resource=collation_cjkCHS;
        else if(culture.neutral_name=="zh-CHT")resource=collation_cjkCHT;
        else if(culture.neutral_name=="ko")resource=collation_cjkKO;
        if(resource){cjkIndexer=culture.neutral_name=="zh-CHS"?Indexer{{{0x3100,0x3400},{0x4e00,0xa000},{0xe800,0x10000}},-1}:Indexer{{{0x3100,0x3400},{0x4e00,0xa000},{0xf900,0xfb00}},-1};const auto count=read32(resource+1);cjkCatTable=resource+5;cjkLv1Table=resource+5+count;}
        if(culture.neutral_name=="ko"){cjkLv2Indexer=cjkIndexer;cjkLv2Table=collation_cjkKOlv2+5;}
    }
#include "mono_collator_methods.inc"
};
thread_local std::unique_ptr<Collator> collator_cache;
Collator& make_collator(){if(!collator_cache)collator_cache=std::make_unique<Collator>(current_collation_culture());return *collator_cache;}
void check_target(const String& s,const String& t){if(s.is_null())throw NullReferenceException();if(t.is_null())throw ArgumentNullException();}
} // namespace

void install_collation_character_data(CollationCharacterData provider){if(!provider.lower || !provider.upper || !provider.other_not_assigned)throw ArgumentException();character_data=std::move(provider);}
void set_default_collation_culture(CollationCulture culture){if(culture.lcid<0)throw ArgumentOutOfRangeException();default_culture=std::move(culture);}
void set_current_collation_culture(CollationCulture culture){if(culture.lcid<0)throw ArgumentOutOfRangeException();current_culture=std::move(culture);collator_cache.reset();}
void clear_current_collation_culture(){current_culture.reset();collator_cache.reset();}
const CollationCulture& current_collation_culture(){if(!current_culture){if(!default_culture)throw NotSupportedException("CurrentCulture has not been supplied by the host");current_culture=*default_culture;}return *current_culture;}
std::size_t collation_resource_bytes()noexcept{return sizeof(collation_core)+sizeof(collation_tailoring)+sizeof(collation_cjkJA)+sizeof(collation_cjkCHS)+sizeof(collation_cjkCHT)+sizeof(collation_cjkKO)+sizeof(collation_cjkKOlv2);}
std::int32_t culture_compare(const String&a,const String&b,bool ignore){if(a.is_null())return b.is_null()?0:-1;if(b.is_null())return 1;return make_collator().Compare(Str(a),Str(b),ignore?COpt::IgnoreCase:COpt::None);}
bool culture_equals_ignore_case(const String&a,const String&b){return culture_compare(a,b,true)==0;}
std::int32_t culture_index_of(const String&s,const String&t){check_target(s,t);const auto position=s.code_units().find(t.code_units());return position==std::u16string::npos?-1:static_cast<std::int32_t>(position);}
std::int32_t culture_index_of(const String&s,const String&t,std::int32_t start){check_target(s,t);return culture_index_of(s,t,start,s.length()-start);}
std::int32_t culture_index_of(const String&s,const String&t,std::int32_t start,std::int32_t count){check_target(s,t);if(start<0 || start>s.length() || count<0 || count>s.length()-start)throw ArgumentOutOfRangeException();if(t.length()==0)return start;if(count==0)return -1;return make_collator().IndexOf(Str(s),Str(t),start,count,COpt::None);}
std::int32_t culture_last_index_of(const String&s,const String&t){check_target(s,t);return culture_last_index_of(s,t,s.length()==0?0:s.length()-1,s.length());}
std::int32_t culture_last_index_of(const String&s,const String&t,std::int32_t start){check_target(s,t);return culture_last_index_of(s,t,start,start<s.length()?add_i32(start,1):start);}
std::int32_t culture_last_index_of(const String&s,const String&t,std::int32_t start,std::int32_t count){check_target(s,t);if(start< -1 || start>s.length() || count<0 || count>s.length() || static_cast<std::int64_t>(start)-count+1<0)throw ArgumentOutOfRangeException();if(t.length()==0)return start;if(s.length()==0 || count==0)return -1;if(start==s.length())--start;return make_collator().LastIndexOf(Str(s),Str(t),start,count,COpt::None);}
bool culture_starts_with(const String&s,const String&t){check_target(s,t);return make_collator().IsPrefix(Str(s),Str(t),COpt::None);}
bool culture_ends_with(const String&s,const String&t){check_target(s,t);return make_collator().IsSuffix(Str(s),Str(t),COpt::None);}
String culture_to_lower(const String&s){if(s.is_null())throw NullReferenceException();auto value=s.code_units();for(auto& c:value)c=require_character_data().lower(c,current_collation_culture());return String(std::move(value));}
String culture_to_upper(const String&s){if(s.is_null())throw NullReferenceException();auto value=s.code_units();for(auto& c:value)c=require_character_data().upper(c,current_collation_culture());return String(std::move(value));}
char16_t culture_char_to_lower(char16_t value){return require_character_data().lower(value,current_collation_culture());}
char16_t culture_char_to_upper(char16_t value){return require_character_data().upper(value,current_collation_culture());}
char16_t invariant_char_to_lower(char16_t value){return require_character_data().lower(value,CollationCulture{});}
char16_t invariant_char_to_upper(char16_t value){return require_character_data().upper(value,CollationCulture{});}
} // namespace pls::cs
