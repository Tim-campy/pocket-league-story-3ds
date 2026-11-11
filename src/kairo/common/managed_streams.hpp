#pragma once
#include "semantic_runtime.hpp"

namespace pls::cs {

enum class SeekOrigin : std::int32_t { Begin = 0, Current = 1, End = 2 };

class Stream : public Object {
public:
    virtual bool get_CanRead() = 0;
    virtual bool get_CanSeek() = 0;
    virtual bool get_CanWrite() = 0;
    virtual std::int64_t get_Length() = 0;
    virtual std::int64_t get_Position() = 0;
    virtual void set_Position(std::int64_t value) = 0;
    virtual std::int32_t Read(Array<std::uint8_t> buffer, std::int32_t offset, std::int32_t count) = 0;
    virtual void Write(Array<std::uint8_t> buffer, std::int32_t offset, std::int32_t count) = 0;
    virtual std::int64_t Seek(std::int64_t offset, SeekOrigin origin) = 0;
    virtual void SetLength(std::int64_t length) = 0;
    virtual void Flush() = 0;
    virtual void Close() = 0;
    virtual void Dispose() { Close(); }
    virtual std::int32_t ReadByte();
    virtual void WriteByte(std::uint8_t value);
};

// Pure managed memory only. No filesystem, SDL, platform SDK or CLR dependency.
class MemoryStream : public Stream {
public:
    MemoryStream();
    explicit MemoryStream(std::int32_t capacity);
    explicit MemoryStream(Array<std::uint8_t> buffer);
    MemoryStream(Array<std::uint8_t> buffer, bool writable);
    MemoryStream(Array<std::uint8_t> buffer, std::int32_t index, std::int32_t count);
    MemoryStream(Array<std::uint8_t> buffer, std::int32_t index, std::int32_t count, bool writable);
    MemoryStream(Array<std::uint8_t> buffer, std::int32_t index, std::int32_t count, bool writable, bool publicly_visible);
    template<class... Args> static Ref<MemoryStream> make(Args&&... args) {
        return make_ref<MemoryStream>(std::forward<Args>(args)...);
    }
    bool get_CanRead() override;
    bool get_CanSeek() override;
    bool get_CanWrite() override;
    std::int64_t get_Length() override;
    std::int64_t get_Position() override;
    void set_Position(std::int64_t value) override;
    std::int32_t get_Capacity() const;
    void set_Capacity(std::int32_t value);
    std::int32_t Read(Array<std::uint8_t> buffer, std::int32_t offset, std::int32_t count) override;
    void Write(Array<std::uint8_t> buffer, std::int32_t offset, std::int32_t count) override;
    std::int32_t ReadByte() override;
    void WriteByte(std::uint8_t value) override;
    std::int64_t Seek(std::int64_t offset, SeekOrigin origin) override;
    void SetLength(std::int64_t length) override;
    void Flush() override;
    void Close() override;
    void Dispose() override { Close(); }
    Array<std::uint8_t> ToArray() const;
    Array<std::uint8_t> GetBuffer() const;
    void trace_edges(const EdgeVisitor&visitor)const override{trace_value(buffer_,visitor);}
    void release_edges()override{release_value(buffer_);}
private:
    Array<std::uint8_t> buffer_;
    std::int32_t origin_ = 0, position_ = 0, length_ = 0, capacity_ = 0;
    bool expandable_ = true, writable_ = true, exposable_ = true, open_ = true;
    void ensure_open() const;
    void ensure_writable() const;
    void ensure_capacity(std::int32_t capacity);
    void validate_buffer(const Array<std::uint8_t>& buffer, std::int32_t offset, std::int32_t count) const;
};

// Primitive binary reads are little-endian, independent of host endianness.
// Array Read delegates once to Stream.Read, deliberately allowing short reads.
class BinaryReader : public Object {
    Ref<Stream>stream_{};Array<std::uint8_t>buffer_;bool closed_=false;
    void require_open()const;
    Array<std::uint8_t>fill(std::int32_t count);
    std::uint64_t read_bits(std::int32_t bytes);
public:
    explicit BinaryReader(Ref<Stream>stream);
    virtual Ref<Stream>get_BaseStream()const{return stream_;}
    virtual std::uint8_t ReadByte();
    virtual std::int8_t ReadSByte();
    virtual bool ReadBoolean();
    virtual std::int16_t ReadInt16();virtual std::uint16_t ReadUInt16();
    virtual std::int32_t ReadInt32();virtual std::uint32_t ReadUInt32();
    virtual std::int64_t ReadInt64();virtual std::uint64_t ReadUInt64();
    virtual float ReadSingle();virtual double ReadDouble();
    virtual std::int32_t Read(Array<std::uint8_t>buffer,std::int32_t offset,std::int32_t count);
    virtual void Close();virtual void Dispose(){Close();}
    void trace_edges(const EdgeVisitor&visitor)const override{trace_value(stream_,visitor);trace_value(buffer_,visitor);}
    void release_edges()override{release_value(stream_);release_value(buffer_);}
};
} // namespace pls::cs
