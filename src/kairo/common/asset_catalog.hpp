#pragma once
#include <cstdint>
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
};
inline const Catalog* installed_catalog{};
inline void install(const Catalog* catalog){installed_catalog=catalog;}
}
