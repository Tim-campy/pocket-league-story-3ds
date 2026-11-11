#include "managed_streams.hpp"

namespace pls::cs {
namespace {
bool historical() noexcept { return runtime_profile == RuntimeProfile::UnityMono265; }
void zero_range(Array<std::uint8_t> buffer, std::int32_t begin, std::int32_t end) {
    for (auto i = begin; i < end; ++i) buffer.at(i) = 0;
}
}

std::int32_t Stream::ReadByte() {
    auto byte = Array<std::uint8_t>::make(1);
    return Read(byte, 0, 1) == 0 ? -1 : byte.at(0);
}
void Stream::WriteByte(std::uint8_t value) { Write(Array<std::uint8_t>::from({value}), 0, 1); }

BinaryReader::BinaryReader(Ref<Stream>stream):stream_(std::move(stream)){
    if(!stream_)throw ArgumentNullException();if(!stream_->get_CanRead())throw ArgumentException();
    buffer_=Array<std::uint8_t>::make(32);
}
void BinaryReader::require_open()const{if(closed_)throw ObjectDisposedException();}
Array<std::uint8_t>BinaryReader::fill(std::int32_t count){
    require_open();std::int32_t offset=0;
    while(offset<count){const auto read=stream_->Read(buffer_,offset,count-offset);if(read==0)throw EndOfStreamException();if(read<0||read>count-offset)throw IOException("Stream.Read returned an invalid count");offset+=read;}
    return buffer_;
}
std::uint8_t BinaryReader::ReadByte(){require_open();const auto value=stream_->ReadByte();if(value== -1)throw EndOfStreamException();return static_cast<std::uint8_t>(value);}
std::int8_t BinaryReader::ReadSByte(){return cast_integral<std::int8_t>(historical()?ReadByte():BinaryReader::ReadByte());}
bool BinaryReader::ReadBoolean(){return (historical()?ReadByte():BinaryReader::ReadByte())!=0;}
std::uint64_t BinaryReader::read_bits(std::int32_t count){auto bytes=fill(count);std::uint64_t value=0;for(std::int32_t i=0;i<count;++i)value|=static_cast<std::uint64_t>(bytes.at(i))<<(i*8);return value;}
std::uint16_t BinaryReader::ReadUInt16(){return static_cast<std::uint16_t>(read_bits(2));}
std::int16_t BinaryReader::ReadInt16(){return cast_integral<std::int16_t>(read_bits(2));}
std::uint32_t BinaryReader::ReadUInt32(){return static_cast<std::uint32_t>(read_bits(4));}
std::int32_t BinaryReader::ReadInt32(){return cast_integral<std::int32_t>(read_bits(4));}
std::uint64_t BinaryReader::ReadUInt64(){return read_bits(8);}
std::int64_t BinaryReader::ReadInt64(){return cast_integral<std::int64_t>(read_bits(8));}
float BinaryReader::ReadSingle(){return bit_copy<float>(static_cast<std::uint32_t>(read_bits(4)));}
double BinaryReader::ReadDouble(){return bit_copy<double>(read_bits(8));}
std::int32_t BinaryReader::Read(Array<std::uint8_t>buffer,std::int32_t offset,std::int32_t count){
    if(historical())require_open();if(buffer.is_null())throw ArgumentNullException();if(offset<0||count<0)throw ArgumentOutOfRangeException();if(static_cast<std::int64_t>(offset)+count>buffer.length())throw ArgumentException();
    require_open();return stream_->Read(buffer,offset,count);
}
void BinaryReader::Close(){if(closed_)return;stream_->Close();closed_=true;if(historical()){clear_ref(stream_);buffer_={};}}

MemoryStream::MemoryStream() : MemoryStream(0) {}
MemoryStream::MemoryStream(std::int32_t capacity) {
    if (capacity < 0) throw ArgumentOutOfRangeException();
    buffer_ = Array<std::uint8_t>::make(capacity);
    capacity_ = capacity;
}
MemoryStream::MemoryStream(Array<std::uint8_t> buffer) : MemoryStream(buffer, true) {}
MemoryStream::MemoryStream(Array<std::uint8_t> buffer, bool writable) {
    if (buffer.is_null()) throw ArgumentNullException();
    buffer_ = buffer;
    length_ = capacity_ = buffer.length();
    expandable_ = exposable_ = false;
    writable_ = writable;
}
MemoryStream::MemoryStream(Array<std::uint8_t> buffer, std::int32_t index, std::int32_t count)
    : MemoryStream(buffer, index, count, true, false) {}
MemoryStream::MemoryStream(Array<std::uint8_t> buffer, std::int32_t index, std::int32_t count, bool writable)
    : MemoryStream(buffer, index, count, writable, false) {}
MemoryStream::MemoryStream(Array<std::uint8_t> buffer, std::int32_t index, std::int32_t count, bool writable, bool publicly_visible) {
    if (buffer.is_null()) throw ArgumentNullException();
    if (index < 0 || count < 0) throw ArgumentOutOfRangeException();
    if (static_cast<std::int64_t>(index) + count > buffer.length()) throw ArgumentException();
    buffer_ = buffer;
    origin_ = position_ = index;
    length_ = capacity_ = index + count;
    expandable_ = false;
    writable_ = writable;
    exposable_ = publicly_visible;
}
void MemoryStream::ensure_open() const { if (!open_) throw ObjectDisposedException(); }
void MemoryStream::ensure_writable() const { if (!writable_) throw NotSupportedException(); }
bool MemoryStream::get_CanRead() { return open_; }
bool MemoryStream::get_CanSeek() { return open_; }
bool MemoryStream::get_CanWrite() { return open_ && writable_; }
std::int64_t MemoryStream::get_Length() { ensure_open(); return length_ - origin_; }
std::int64_t MemoryStream::get_Position() { ensure_open(); return sub_i32(position_, origin_); }
std::int32_t MemoryStream::get_Capacity() const { ensure_open(); return capacity_ - origin_; }
void MemoryStream::set_Position(std::int64_t value) {
    if (historical()) ensure_open();
    if (value < 0 || value > std::numeric_limits<std::int32_t>::max()) throw ArgumentOutOfRangeException();
    ensure_open();
    // A slice's physical index also has to fit the backing managed array model.
    if (!historical() && value > std::numeric_limits<std::int32_t>::max() - origin_) throw ArgumentOutOfRangeException();
    position_ = add_i32(static_cast<std::int32_t>(value), origin_);
}
void MemoryStream::set_Capacity(std::int32_t value) {
    ensure_open();
    if (value < length_ - origin_) throw ArgumentOutOfRangeException();
    if (!expandable_) {
        if (historical() || value != capacity_ - origin_) throw NotSupportedException();
        return;
    }
    if (value == capacity_) return;
    auto replacement = Array<std::uint8_t>::make(value);
    Array<std::uint8_t>::copy(buffer_, 0, replacement, 0, length_);
    buffer_ = replacement;
    capacity_ = value;
}
void MemoryStream::ensure_capacity(std::int32_t requested) {
    if (requested <= capacity_) return;
    if (!expandable_) throw NotSupportedException();
    std::int64_t capacity = std::max<std::int64_t>(256, requested);
    capacity = std::max(capacity, static_cast<std::int64_t>(capacity_) * 2);
    capacity = std::min<std::int64_t>(capacity, std::numeric_limits<std::int32_t>::max());
    set_Capacity(static_cast<std::int32_t>(capacity));
}
void MemoryStream::validate_buffer(const Array<std::uint8_t>& buffer, std::int32_t offset, std::int32_t count) const {
    if (buffer.is_null()) throw ArgumentNullException();
    if (offset < 0 || count < 0) throw ArgumentOutOfRangeException();
    if (static_cast<std::int64_t>(offset) + count > buffer.length()) {
        if (historical()) throw ArgumentException();
        throw ArgumentOutOfRangeException();
    }
}
std::int32_t MemoryStream::Read(Array<std::uint8_t> buffer, std::int32_t offset, std::int32_t count) {
    if (historical()) ensure_open();
    validate_buffer(buffer, offset, count);
    ensure_open();
    const auto available = std::max<std::int64_t>(0, static_cast<std::int64_t>(length_) - position_);
    const auto size = static_cast<std::int32_t>(std::min<std::int64_t>(count, available));
    if (size > 0) Array<std::uint8_t>::copy(buffer_, position_, buffer, offset, size);
    position_ += size;
    return size;
}
void MemoryStream::Write(Array<std::uint8_t> buffer, std::int32_t offset, std::int32_t count) {
    if (historical()) { ensure_open(); ensure_writable(); }
    validate_buffer(buffer, offset, count);
    ensure_open();
    ensure_writable();
    const auto end = static_cast<std::int64_t>(position_) + count;
    if (end > std::numeric_limits<std::int32_t>::max()) throw IOException();
    ensure_capacity(static_cast<std::int32_t>(end));
    if (position_ > length_) zero_range(buffer_, length_, position_);
    Array<std::uint8_t>::copy(buffer, offset, buffer_, position_, count);
    position_ = static_cast<std::int32_t>(end);
    length_ = std::max(length_, position_);
}
std::int32_t MemoryStream::ReadByte() {
    ensure_open();
    if (position_ >= length_) return -1;
    return buffer_.at(position_++);
}
void MemoryStream::WriteByte(std::uint8_t value) {
    ensure_open(); ensure_writable();
    const auto end = add_i32(position_, 1);
    if (end > length_) {
        ensure_capacity(end);
        if (position_ > length_) zero_range(buffer_, length_, position_);
        length_ = end;
    }
    const auto index = position_;
    if (historical()) position_ = end;
    buffer_.at(index) = value;
    if (!historical()) position_ = end;
}
std::int64_t MemoryStream::Seek(std::int64_t offset, SeekOrigin origin) {
    ensure_open();
    if (offset > std::numeric_limits<std::int32_t>::max()) throw ArgumentOutOfRangeException();
    std::int64_t base = 0;
    switch (origin) {
        case SeekOrigin::Begin: base = origin_; break;
        case SeekOrigin::Current: base = position_; break;
        case SeekOrigin::End: base = length_; break;
        default: throw ArgumentException();
    }
    // The old Mono implementation truncates the offset to Int32 and adds with
    // managed wrap. .NET10 rejects a negative result using the full Int64 value.
    if (historical()) {
        const auto result = add_i32(static_cast<std::int32_t>(base), cast_integral<std::int32_t>(offset));
        if (result < origin_) throw IOException();
        position_ = result;
        return position_;
    }
    // Check before addition; offsets may be Int64.MinValue.
    if (offset < static_cast<std::int64_t>(origin_) - base) throw IOException();
    if (offset > std::numeric_limits<std::int32_t>::max() - base) throw IOException();
    position_ = static_cast<std::int32_t>(base + offset);
    return position_ - origin_;
}
void MemoryStream::SetLength(std::int64_t length) {
    if (historical()) { ensure_open(); ensure_writable(); }
    if (length < 0 || length > std::numeric_limits<std::int32_t>::max()) throw ArgumentOutOfRangeException();
    ensure_writable();
    ensure_open();
    if (length > std::numeric_limits<std::int32_t>::max() - origin_) throw ArgumentOutOfRangeException();
    const auto end = static_cast<std::int32_t>(length) + origin_;
    ensure_capacity(end);
    if (end > length_) zero_range(buffer_, length_, end);
    else if (historical() && end < length_) zero_range(buffer_, end, length_);
    length_ = end;
    if (position_ > length_) position_ = length_;
}
void MemoryStream::Flush() {}
void MemoryStream::Close() { open_ = false; writable_ = false; expandable_ = false; }
Array<std::uint8_t> MemoryStream::ToArray() const {
    auto result = Array<std::uint8_t>::make(length_ - origin_);
    Array<std::uint8_t>::copy(buffer_, origin_, result, 0, result.length());
    return result;
}
Array<std::uint8_t> MemoryStream::GetBuffer() const {
    if (!exposable_) throw UnauthorizedAccessException();
    return buffer_;
}
} // namespace pls::cs
