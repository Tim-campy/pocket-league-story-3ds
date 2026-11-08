// Historical Mono BMP data: GNU Library General Public License version2.
// See THIRD_PARTY.md, third_party/mono-lgpl/COPYING.LIB and the hash-pinned
// official source in tools/setup_mono_collation.py. No Unity bytes are used.
#include "managed_collation.hpp"

namespace pls::cs {
static_assert(sizeof(char16_t)==2,"Historical BMP table footprint requires 16-bit code units");
namespace {
#include "mono_character_tables.inc"
char16_t lower_invariant(char16_t c){
    if(c<=0x24cf)return ToLowerDataLow[c];
    if(c>=0xff21)return ToLowerDataHigh[c-0xff21];
    return c;
}
char16_t upper_invariant(char16_t c){
    if(c<=0x24e9)return ToUpperDataLow[c];
    if(c>=0xff21)return ToUpperDataHigh[c-0xff21];
    return c;
}
bool dot_i(const CollationCulture& culture){
    int neutral=culture.lcid;
    for(int parent:culture.parent_lcids)if(parent!=127)neutral=parent;
    return neutral==31 || neutral==44;
}
// Algorithms adapted from MIT/X11 TextInfo.cs (Ximian2002, Novell2004-2005). Data read by
// these algorithms retains its separate GNU Library GPLv2 attribution above.
char16_t lower(char16_t c,const CollationCulture& culture){
    const bool handle=dot_i(culture);
    if(c<0x40 || (c>0x60 && c<128))return c;
    if(c>=u'A' && c<=u'Z' && (!handle || c!=u'I'))return static_cast<char16_t>(c+0x20);
    if(culture.lcid==127)return lower_invariant(c);
    switch(c){
    case 0x49:if(handle)return char16_t(0x131);break;
    case 0x130:return char16_t(0x69);
    case 0x1c5:return char16_t(0x1c6);
    case 0x1c8:return char16_t(0x1c9);
    case 0x1cb:return char16_t(0x1cc);
    case 0x1f2:return char16_t(0x1f3);
    case 0x3d2:return char16_t(0x3c5);
    case 0x3d3:return char16_t(0x3cd);
    case 0x3d4:return char16_t(0x3cb);
    }
    return lower_invariant(c);
}
char16_t upper(char16_t c,const CollationCulture& culture){
    const bool handle=dot_i(culture);
    if(c<0x60)return c;
    if(c>=u'a' && c<=u'z' && (!handle || c!=u'i'))return static_cast<char16_t>(c-0x20);
    if(culture.lcid==127)return upper_invariant(c);
    switch(c){
    case 0x69:if(handle)return char16_t(0x130);break;
    case 0x131:return char16_t(0x49);
    case 0x1c5:return char16_t(0x1c4);
    case 0x1c8:return char16_t(0x1c7);
    case 0x1cb:return char16_t(0x1ca);
    case 0x1f2:return char16_t(0x1f1);
    case 0x390:return char16_t(0x3aa);
    case 0x3b0:return char16_t(0x3ab);
    case 0x3d0:return char16_t(0x392);
    case 0x3d1:return char16_t(0x398);
    case 0x3d5:return char16_t(0x3a6);
    case 0x3d6:return char16_t(0x3a0);
    case 0x3f0:return char16_t(0x39a);
    case 0x3f1:return char16_t(0x3a1);
    }
    return upper_invariant(c);
}
bool unassigned(char16_t c){return (OtherNotAssignedBits[static_cast<std::uint16_t>(c)/8]&(1<<(c&7)))!=0;}
} // namespace
void install_mono_collation_character_data(){install_collation_character_data({lower,upper,unassigned});}
bool mono_character_is_unassigned(char16_t value)noexcept{return unassigned(value);}
std::size_t mono_character_data_bytes()noexcept{return sizeof(OtherNotAssignedBits)+sizeof(ToLowerDataLow)+sizeof(ToLowerDataHigh)+sizeof(ToUpperDataLow)+sizeof(ToUpperDataHigh);}
} // namespace pls::cs
