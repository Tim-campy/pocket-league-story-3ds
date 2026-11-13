#include "ctr_texture.hpp"
#include "asset_catalog.hpp"
#include "semantic_runtime.hpp"
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
namespace {
unsigned assertions=0;
void check(bool value){++assertions;if(!value)throw std::runtime_error("Prepared texture assertion "+std::to_string(assertions));}
std::vector<std::uint8_t> read(const std::filesystem::path& path){std::ifstream f(path,std::ios::binary);if(!f)throw std::runtime_error("Own fixture absent");return {std::istreambuf_iterator<char>(f),{}};}
void write(const std::filesystem::path& path,const std::vector<std::uint8_t>& data){std::ofstream f(path,std::ios::binary|std::ios::trunc);f.write(reinterpret_cast<const char*>(data.data()),std::streamsize(data.size()));if(!f)throw std::runtime_error("Own fixture write failed");}
template<class F>void io_failure(F action){bool failed=false;try{action();}catch(const pls::cs::IOException&){failed=true;}check(failed);}
}
int main(int argc,char**argv){
 if(argc!=2)return 2;const auto root=std::filesystem::u8path(argv[1]);
 for(auto shape:std::array<std::array<std::uint32_t,2>,5>{{{1,1},{7,9},{8,8},{17,15},{33,29}}}){
  const auto stem=std::to_string(shape[0])+"x"+std::to_string(shape[1]);auto data=read(root/(stem+".ctr"));const auto expected=read(root/(stem+".raw"));
  const auto layout=pls::assets::ctr_texture::validate(data,shape[0],shape[1]);check(pls::assets::ctr_texture::linear(data,layout)==expected);
  for(unsigned y=0;y<shape[1];++y)for(unsigned x=0;x<shape[0];++x){auto p=pls::assets::ctr_texture::pixel(data,layout,x,y);for(unsigned c=0;c<4;++c)check(p[c]==expected[(y*shape[0]+x)*4+c]);}
  bool failed=false;try{(void)pls::assets::ctr_texture::pixel(data,layout,shape[0],0);}catch(const std::out_of_range&){failed=true;}check(failed);
  data.pop_back();failed=false;try{(void)pls::assets::ctr_texture::validate(data,shape[0],shape[1]);}catch(const std::invalid_argument&){failed=true;}check(failed);
 }
 using namespace pls::assets;
 Catalog strict(root),prepared(root,ReadValidation::PreparedCatalog);
 check(strict.unique(Kind::image)==nullptr);check(strict.unique(Kind::resource)==nullptr);check(strict.unique(Kind::builtin_font)!=nullptr);
 const auto* entry=strict.find(Kind::image,"own-0");check(entry!=nullptr);
 auto original=strict.read(*entry);check(prepared.read(*entry)==original);prepared.verify(*entry);
 check(strict.prepare_stream(*entry)==strict.path(*entry));check(prepared.prepare_stream(*entry)==prepared.path(*entry));
 auto changed=original;changed.back()^=1;write(root/entry->path,changed);strict.release_retained();prepared.release_retained();
 io_failure([&]{(void)strict.read(*entry);});check(prepared.read(*entry)==changed);io_failure([&]{prepared.verify(*entry);});
 io_failure([&]{(void)strict.prepare_stream(*entry);});check(prepared.prepare_stream(*entry)==prepared.path(*entry));
 changed.pop_back();write(root/entry->path,changed);prepared.release_retained();io_failure([&]{(void)prepared.read(*entry);});io_failure([&]{(void)prepared.prepare_stream(*entry);});write(root/entry->path,original);
 auto marker=read(root/"converted/prevalidated.sha256");
 std::vector<std::uint8_t> lf,crlf;
 for(auto c:marker)if(c!='\r'){lf.push_back(c);if(c=='\n')crlf.push_back('\r');crlf.push_back(c);}
 for(const auto& lines:{lf,crlf}){write(root/"converted/prevalidated.sha256",lines);Catalog portable(root,ReadValidation::PreparedCatalog);check(portable.read(*entry)==original);}
 auto wrong=marker;wrong[wrong.size()-2]=wrong[wrong.size()-2]=='0'?'1':'0';write(root/"converted/prevalidated.sha256",wrong);
 io_failure([&]{Catalog invalid(root,ReadValidation::PreparedCatalog);});write(root/"converted/prevalidated.sha256",marker);
 {Catalog retained(root,ReadValidation::PreparedCatalog);check(retained.read(*entry)==original);const auto hits=retained.retention_hits();
  auto altered=original;altered.back()^=1;write(root/entry->path,altered);
  check(retained.read(*entry)==original);check(retained.retention_hits()==hits+1);
  retained.release_retained();check(retained.read(*entry)==altered);check(retained.retention_hits()==hits+1);
  check(retained.prepare_stream(*entry)==retained.path(*entry));check(retained.prepare_stream(*entry)==retained.path(*entry));check(retained.retention_hits()==hits+2);
  write(root/entry->path,original);retained.release_retained();check(retained.read(*entry)==original);
  retained.age_retained();check(retained.read(*entry)==original);check(retained.retention_hits()==hits+3);
  write(root/entry->path,altered);retained.age_retained();retained.age_retained();check(retained.read(*entry)==altered);
  write(root/entry->path,original);}
 std::cout<<"{\"status\":\"PASS\",\"assertions\":"<<assertions<<"}\n";
}
