// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace kairo::unity::util::Compressor {

void ensure_initialized();

pls::cs::Array<pls::cs::Int32>& _getLowestNode_result();

pls::cs::Array<std::uint8_t>& bitBuffer_();

pls::cs::Int32& bitPoint_();

pls::cs::Array<std::uint8_t>& bits_();

pls::cs::Array<pls::cs::Ref<Compressor_Node>>& nodeTbl_();

pls::cs::Array<std::uint8_t>& nullbits_();

pls::cs::Array<pls::cs::Int32>& weights_();

pls::cs::Array<std::uint8_t> _getBitBuffer();

pls::cs::Array<pls::cs::Int32> _getLowestNode(pls::cs::Ref<FastVector> list);

pls::cs::Int32 _readBit();

pls::cs::Int32 _readByte();

pls::cs::Ref<Compressor_Node> _readNodeFromBitBuffer();

void _setBitBuffer(pls::cs::Array<std::uint8_t> data);

void _writeBit(pls::cs::Int32 bit);

void _writeByte(pls::cs::Int32 v);

void _writeNodeToBitBuffer(pls::cs::Ref<Compressor_Node> node);

pls::cs::Array<std::uint8_t> Compress(pls::cs::Array<std::uint8_t> data);

pls::cs::Array<std::uint8_t> Expand(pls::cs::Array<std::uint8_t> data);
} // namespace kairo::unity::util::Compressor
}
