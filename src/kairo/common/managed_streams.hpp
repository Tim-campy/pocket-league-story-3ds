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
private:
    Array<std::uint8_t> buffer_;
    std::int32_t origin_ = 0, position_ = 0, length_ = 0, capacity_ = 0;
    bool expandable_ = true, writable_ = true, exposable_ = true, open_ = true;
    void ensure_open() const;
    void ensure_writable() const;
    void ensure_capacity(std::int32_t capacity);
    void validate_buffer(const Array<std::uint8_t>& buffer, std::int32_t offset, std::int32_t count) const;
};
} // namespace pls::cs
