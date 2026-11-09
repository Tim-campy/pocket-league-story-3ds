// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_8d93189702e4084b.hpp"
#include "generated/portable_generated_type_8d93189702e4084b.hpp"
namespace pls::game {

// M:java.io.DataInputStream.ReadByte
std::int8_t cs_aa5d67607a160f11(pls::cs::Ref<pls::generated::cs_8d93189702e4084b> cs_this) { pls::generated::cs_init_8d93189702e4084b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.DataInputStream.ReadByte",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int8_t { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_783a5dc8c7385bc4; }()); return pls::game::cs_require(cs_receiver)->ReadSByte(); }());});
}
}
}
}

// M:java.io.DataInputStream.ReadShort
std::int16_t cs_17dee35cf6e3ebff(pls::cs::Ref<pls::generated::cs_8d93189702e4084b> cs_this) { pls::generated::cs_init_8d93189702e4084b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.DataInputStream.ReadShort",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_783a5dc8c7385bc4; }()); return pls::game::cs_require(cs_receiver)->ReadInt16(); }());}); return pls::game::cs_network_to_host<std::int16_t>(cs_arg0); }());});
}
}
}
}
}
