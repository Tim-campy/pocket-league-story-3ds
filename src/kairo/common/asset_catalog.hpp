#pragma once
#include <chrono>
#include <cstdint>
#include <cstdio>
#include <memory>
#include <mutex>
#include <filesystem>
#include <map>
#include <optional>
#include <string>
#include <vector>
namespace pls::assets {
enum class Kind : std::uint8_t { resource=1,member=2,image=3,font=4,audio=5,builtin_font=6,baked_array=7,raw_resource=8 };
struct Entry { Kind kind;std::string key,path,sha256;std::uint64_t size{};std::uint32_t width{},height{}; };
enum class ReadValidation { EveryPayload, PreparedCatalog };
class Catalog {
    std::filesystem::path root_;
    bool prepared_{};
    std::map<std::pair<Kind,std::string>,Entry> entries_;
    // Prepared SD only: one pack opened once instead of one file per read.
    // Pack membership, size and digest are checked against catalog.idx.
    struct Packed { std::uint64_t offset{},size{}; };
    std::map<std::string,Packed> packed_;
    std::shared_ptr<std::FILE> pack_;
    std::unique_ptr<std::mutex> pack_mutex_=std::make_unique<std::mutex>();
    void open_pack();
    // One-slot retention of the last platform load (payload or prepared
    // stream). ResourceManager.LoadStart returns before its index increment
    // when a slice reaches 150 ms; reloading the same item is idempotent in
    // the original (a new object with the same data). Serving the retained
    // result makes progress independent of storage speed. At most one extra
    // payload is held; it is dropped when another resource is requested or
    // at the host frame end (release_retained).
    mutable std::unique_ptr<std::mutex> retain_mutex_=std::make_unique<std::mutex>();
    mutable const Entry* retained_entry_{};
    mutable std::vector<std::uint8_t> retained_;
    mutable const Entry* retained_stream_entry_{};
    mutable std::filesystem::path retained_stream_;
    mutable std::uint64_t retention_hits_{};
    mutable unsigned retained_age_{},retained_stream_age_{};
    std::chrono::milliseconds read_delay_{};
    std::vector<std::uint8_t> read_uncached(const Entry&)const;
    std::filesystem::path prepare_stream_uncached(const Entry&)const;
public:
    explicit Catalog(std::filesystem::path assets_root,ReadValidation=ReadValidation::EveryPayload);
    const Entry* find(Kind,const std::string&)const;
    const Entry* unique(Kind)const;
    std::vector<const Entry*> entries(Kind)const;
    std::filesystem::path path(const Entry&)const;
    std::vector<std::uint8_t> read(const Entry&)const;
    void verify(const Entry&)const;
    std::filesystem::path prepare_stream(const Entry&)const;
    std::uint64_t total_bytes(Kind)const;
    std::size_t size()const{return entries_.size();}
    void release_retained()const;
    // Host frame end: a slice may run once per frame when the loader is a
    // worker posting to the UI thread (BootForm.Run), so retention survives
    // frame boundaries and is dropped only after two frames without a request
    // (or at once when another resource is requested).
    void age_retained()const;
    std::uint64_t retention_hits()const;
    // Diagnostic hosts only: artificial delay per real storage access.
    void set_diagnostic_read_delay(std::chrono::milliseconds delay){read_delay_=delay;}
};
inline const Catalog* installed_catalog{};
inline void install(const Catalog* catalog){installed_catalog=catalog;}
}
