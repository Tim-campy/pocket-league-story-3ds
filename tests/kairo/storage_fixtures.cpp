#include "storage.hpp"
#include "managed_collation.hpp"
#include <fstream>
#include <iostream>
#include <string>
using namespace pls::kairo;
using Bytes=pls::cs::Array<std::uint8_t>;
using Str=pls::cs::String;
template<class F>void P(const char* name,F&& body){std::cout<<name<<'=';try{std::cout<<body();}catch(const pls::cs::Exception& ex){std::cout<<'!'<<ex.type_name();}std::cout<<'\n';}
std::string B(Bytes b){if(b.is_null())return "null";constexpr char hex[]="0123456789abcdef";std::string s;for(std::int32_t i=0;i<b.length();++i){s+=hex[b.at(i)>>4];s+=hex[b.at(i)&15];}return s;}
std::string A(pls::cs::Array<Str> a){if(a.is_null())return "null";std::string s;for(std::int32_t i=0;i<a.length();++i){if(i)s+='|';s+=a.at(i).utf8();}return s;}
const char* truth(bool value){return value?"True":"False";}
int policy(const std::filesystem::path& root){
 unsigned int checked=0;auto require=[&](bool value){if(!value)throw std::runtime_error("Storage policy assertion failed");++checked;};
 const Str unicode(std::u16string{u'K',u'\0',char16_t(0xd800),u'Z'});
 const Str text(std::u16string{u'A',u'\0',char16_t(0xdc00),char16_t(0x96ea)});
 require(PlayerPrefs::GetString(Str(u"missing"),{}).is_null());
 require(PlayerPrefs::GetInt(Str(u"missing"),27)==27);
 PlayerPrefs::SetInt(unicode,-2147483647-1);PlayerPrefs::SetFloat(Str(u"negative-zero"),-0.0f);PlayerPrefs::SetString(Str(u"text"),text);
 PlayerPrefs::SetInt(Str(u"Case"),1);PlayerPrefs::SetInt(Str(u"case"),2);
 PlayerPrefs::SetInt(Str(u"\u00e9"),3);PlayerPrefs::SetInt(Str(u"e\u0301"),4);PlayerPrefs::Save();
 configure_storage(root);require(PlayerPrefs::GetInt(unicode)==(-2147483647-1));
 require(pls::cs::bit_copy<std::uint32_t>(PlayerPrefs::GetFloat(Str(u"negative-zero")))==0x80000000u);
 require(PlayerPrefs::GetString(Str(u"text"))==text);
 require(PlayerPrefs::GetInt(Str(u"Case"))==1&&PlayerPrefs::GetInt(Str(u"case"))==2);
 require(PlayerPrefs::GetInt(Str(u"\u00e9"))==3&&PlayerPrefs::GetInt(Str(u"e\u0301"))==4);
 require(PlayerPrefs::HasKey(Str(u"future-opaque")));
 require(PlayerPrefs::GetString(Str(u"future-opaque"),{}).is_null());
 PlayerPrefs::Save();
 auto source=Bytes::from({0,255,7,0});BytePreferences::PutPreference(unicode,source);source.at(1)=0;
 require(BytePreferences::GetPreference(unicode).at(1)==255);
 auto read=BytePreferences::GetPreference(unicode);read.at(0)=99;require(BytePreferences::GetPreference(unicode).at(0)==0);
 configure_storage(root);require(BytePreferences::GetPreference(unicode).at(1)==255);
 require(BytePreferences::GetPreference(Str(u"future-opaque")).length()==256);
 BytePreferences::RemovePreference(unicode);require(BytePreferences::GetPreference(unicode).is_null());
 require(BytePreferences::GetPreference(Str(u"future-opaque")).length()==256);
 auto payload=Bytes::make(4096);for(std::int32_t i=0;i<payload.length();++i)payload.at(i)=static_cast<std::uint8_t>(i);
 auto storage=Storage::Open(4,true);
 for(int iteration=0;iteration<32;++iteration){payload.at(0)=static_cast<std::uint8_t>(iteration);storage->Write(Str(u"opaque-import"),payload);require(B(storage->Read(Str(u"opaque-import")))==B(payload));}
 storage->Write(Str(u"\u96ea.dat"),Bytes::from({0,1}));require(storage->Read(Str(u"\u96ea.dat")).length()==2);
 std::filesystem::create_directories(root/"rs/directory-target");
 bool rejected=false;try{storage->Write(Str(u"directory-target"),payload);}catch(const pls::cs::IOException&){rejected=true;}require(rejected);
 require(std::filesystem::is_directory(root/"rs/directory-target"));
 for(const auto& item:std::filesystem::directory_iterator(root/"rs"))require(item.path().filename().u16string().find(u".port-tmp-")!=0);
 std::cout<<"{\"native_policy_assertions\":"<<checked<<",\"UTF16_keys_preserved\":true,\"unknown_preference_entries_preserved\":true,\"opaque_save_bytes_preserved\":true,\"game_boot\":false}\n";
 return 0;
}
int main(int argc,char**argv){
 pls::cs::install_mono_collation_character_data();pls::cs::set_default_collation_culture(pls::cs::CollationCulture{});
 if(argc==3&&std::string(argv[2])=="policy"){configure_storage(std::filesystem::u8path(argv[1]));return policy(std::filesystem::u8path(argv[1]));}
 if(argc!=3&&argc!=4)return 2;
 pls::assets::Catalog catalog(std::filesystem::u8path(argv[2]));configure_storage(std::filesystem::u8path(argv[1]),&catalog);
 if(argc==4&&std::string(argv[3])=="resources"){
  std::uint64_t bytes=0;unsigned int files=0,checks=0;
  for(const auto* entry:catalog.entries(pls::assets::Kind::resource)){
   if(entry->key.substr(0,5)!="data/")continue;
   const auto name=entry->key.substr(5);const auto expected=catalog.read(*entry);
   auto require=[&](const std::string& alias){const auto value=Storage::Read(3,false,Str::from_utf8(alias));
    if(value.is_null()||static_cast<std::size_t>(value.length())!=expected.size())throw std::runtime_error("Authenticated resource extent mismatch");
    for(std::int32_t i=0;i<value.length();++i)if(value.at(i)!=expected[static_cast<std::size_t>(i)])throw std::runtime_error("Authenticated resource byte mismatch");++checks;};
   require(name);require(name+".dat");auto uppercase=name;for(auto& c:uppercase)if(c>='a'&&c<='z')c=static_cast<char>(c-'a'+'A');require(" \t"+uppercase+".dat\r\n");
   bytes+=expected.size();++files;
  }
  if(!files)throw std::runtime_error("No authenticated resource fixtures");
  std::cout<<"{\"resources\":"<<files<<",\"resource_bytes\":"<<bytes<<",\"resource_alias_checks\":"<<checks<<",\"game_boot\":false}\n";return 0;
 }
 Storage::Setup(2,8,Str(u"synthetic-root"));
 P("invalid-media",[]{return Storage::Open(0,false)?"unexpected":"null";});
 auto heap=Storage::Open(2,false);auto alias=Bytes::from({1,2,3});
 P("heap-alias",[&]{heap->Write(Str(u"b.gif"),alias);alias.at(0)=4;return B(heap->Read(Str(u"b.png")));});
 P("heap-order",[&]{heap->Write(Str(u"a"),Bytes::from({7}));return A(heap->GetFiles());});
 P("heap-size",[&]{return std::to_string(heap->GetSize(Str(u"b.gif")));});
 P("heap-missing",[&]{return B(heap->Read(Str(u"missing")))+":"+truth(heap->Exists(Str(u"missing")))+":"+std::to_string(heap->GetSize(Str(u"missing")));});
 P("heap-null-value",[&]{heap->Write(Str(u"nil"),{});return std::string(truth(heap->Exists(Str(u"nil"))))+":"+B(heap->Read(Str(u"nil")));});
 P("heap-null-size",[&]{return std::to_string(heap->GetSize(Str(u"nil")));});
 P("heap-delete",[&]{heap->Delete(Str(u"b.gif"));return A(heap->GetFiles());});
 P("null-filename",[&]{return B(heap->Read({}));});
 P("heap-cultural-composed",[&]{heap->Write(Str(u"synthetic-caf\u00e9"),Bytes::from({61}));return B(heap->Read(Str(u"synthetic-cafe\u0301")));});
 P("heap-cultural-replace",[&]{const auto n=heap->GetFiles().length();heap->Write(Str(u"synthetic-cafe\u0301"),Bytes::from({62}));return B(heap->Read(Str(u"synthetic-caf\u00e9")))+":"+std::to_string(heap->GetFiles().length()-n);});
 P("heap-cultural-delete",[&]{heap->Delete(Str(u"synthetic-cafe\u0301"));return truth(heap->Exists(Str(u"synthetic-caf\u00e9")));});
 P("resource",[]{return B(Storage::Read(3,false,Str(u"fixture.dat")))+":"+truth(Storage::Exists(3,Str(u"fixture.dat")));});
 P("resource-missing",[]{return B(Storage::Read(3,false,Str(u"missing")))+":"+truth(Storage::Exists(3,Str(u"missing")));});
 P("resource-readonly",[]{Storage::Write(3,false,Str(u"fixture.dat"),Bytes::from({1}));return B(Storage::Read(3,false,Str(u"fixture.dat")));});
 auto file=Storage::Open(1,false);
 P("file-roundtrip",[&]{file->Write(Str(u"nested/save"),Bytes::from({0,255,1,0,7}));return B(file->Read(Str(u"nested/save")))+":"+std::to_string(file->GetSize(Str(u"nested/save")));});
 P("file-null",[&]{file->Write(Str(u"nil"),{});return std::string(truth(file->Exists(Str(u"nil"))))+":"+B(file->Read(Str(u"nil")));});
 P("file-missing",[&]{return B(file->Read(Str(u"missing")))+":"+std::to_string(file->GetSize(Str(u"missing")));});
 P("file-delete",[&]{file->Delete(Str(u"nested/save"));return truth(file->Exists(Str(u"nested/save")));});
 P("setup",[]{return truth(RecordStore::Setup());});
 RecordStore::SetEncryptionKey(Bytes::from({1,7,255}));auto rs=RecordStore::OpenRecordStore(2);
 P("add-ignore-size",[&]{const auto id=rs->AddRecord(-10);return std::to_string(id)+":"+std::to_string(rs->GetRecordSize(0))+":"+B(rs->ReadRecord(0));});
 P("write-envelope",[&]{rs->WriteRecord(0,Bytes::from({0,1,127,255}));return B(Storage::Read(4,false,Str(u"2000")));});
 P("read-record",[&]{return B(rs->ReadRecord(0))+":"+std::to_string(rs->GetRecordSize(0))+":"+std::to_string(rs->GetNumRecords());});
 P("write-jagged",[&]{auto data=pls::cs::Array<Bytes>::from({Bytes::from({4,3,2})});rs->WriteRecord(1,data);return std::string(truth(data.at(0).is_null()))+":"+B(rs->ReadRecord(1));});
 P("missing-record",[&]{return B(rs->ReadRecord(9));});
 P("short-record",[&]{Storage::Write(4,false,Str(u"2009"),Bytes::from({1,2,3}));return B(rs->ReadRecord(9));});
 P("corrupt-record",[&]{auto data=Storage::Read(4,false,Str(u"2000"));data.at(8)^=1;Storage::Write(4,false,Str(u"2000"),data);return B(rs->ReadRecord(0));});
 P("holes-count",[&]{Storage::Open(4,false)->Delete(Str(u"2009"));rs->WriteRecord(5,Bytes::from({5}));return std::to_string(rs->GetNumRecords());});
 P("remove-last",[&]{rs->RemoveLastRecord();return std::to_string(rs->GetNumRecords());});
 P("rs10-prefix",[]{RecordStore ten(10);ten.WriteRecord(0,Bytes::from({1}));return std::to_string(ten.GetNumRecords());});
 P("resource-record-store",[]{RecordStore::SetResourceFiles(pls::cs::Array<Str>::from({Str(u"fixture")}));RecordStore resource(1);return std::to_string(resource.AddRecord(1))+":"+truth(resource.ExistRecord(99))+":"+std::to_string(resource.GetNumRecords())+":"+std::to_string(resource.GetRecordSize(99))+":"+B(resource.ReadRecord(0));});
 P("resource-record-write",[]{RecordStore resource(1);resource.WriteRecord(0,Bytes::from({1}));resource.RemoveAllRecord();return B(resource.ReadRecord(0));});
 RecordStore::SetResourceFiles({});
 P("remove-all-source-scope",[&]{RecordStore(3).WriteRecord(0,Bytes::from({8}));rs->RemoveAllRecord();return std::to_string(rs->GetNumRecords())+":"+truth(RecordStore(3).ExistRecord(0));});
 P("capacity",[&]{return std::to_string(rs->GetCapacity())+":"+std::to_string(rs->GetSize())+":"+std::to_string(rs->GetSizeAvailable())+":"+std::to_string(RecordStore::GetRecordInfoSize());});
 P("pref-record",[&]{RecordStore::SetPreferenceMode(true);rs->WriteRecord(0,Bytes::from({11,12}));return B(rs->ReadRecord(0))+":"+std::to_string(rs->GetNumRecords())+":"+std::to_string(rs->GetRecordSize(0));});
 P("pref-raw-envelope",[]{return B(BytePreferences::GetPreference(Str(u"2000")));});
 P("pref-remove-last",[&]{rs->RemoveLastRecord();return std::to_string(rs->GetNumRecords());});
 P("file-to-prefs-under-four",[&]{RecordStore::SetPreferenceMode(false);rs->WriteRecord(0,Bytes::from({1}));rs->WriteRecord(1,Bytes::from({2}));rs->WriteRecord(2,Bytes::from({3}));RecordStore::SetPreferenceMode(true);RecordStore::FileToPreferences();return std::to_string(BytePreferences::GetPreferenceKeys().length())+":"+truth(Storage::Exists(4,Str(u"2000")));});
 P("file-to-prefs-four",[&]{RecordStore::SetPreferenceMode(false);rs->WriteRecord(3,Bytes::from({4}));RecordStore::SetPreferenceMode(true);RecordStore::FileToPreferences();return std::to_string(BytePreferences::GetPreferenceKeys().length())+":"+truth(Storage::Exists(4,Str(u"2000")))+":"+B(rs->ReadRecord(3));});
 P("prefs-to-file-four",[&]{RecordStore::SetPreferenceMode(false);RecordStore::PreferencesToFile();return std::to_string(BytePreferences::GetPreferenceKeys().length())+":"+B(rs->ReadRecord(2));});
 P("closed-record",[&]{rs->CloseRecordStore();return B(rs->ReadRecord(2));});
 P("static-read-write",[]{RecordStore::CreateRecordStore();RecordStore::WriteRecord(4,7,Bytes::from({7,0,255}));return B(RecordStore::ReadRecord(4,7));});
 P("add-byte-record",[]{auto q=RecordStore::OpenRecordStore(4);const auto id=q->AddRecord(Bytes::from({6,5}));return std::to_string(id)+":"+B(q->ReadRecord(id));});
}
