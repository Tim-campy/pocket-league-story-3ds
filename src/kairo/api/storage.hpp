#pragma once
#include "semantic_runtime.hpp"
#include "asset_catalog.hpp"
#include <filesystem>

namespace pls::kairo {
// Host paths are the platform replacement for IApplication.GetDataPath().
void configure_storage(std::filesystem::path preferences_root,const assets::Catalog* catalog=nullptr,bool heap_enabled=true,int application_type=2);
class IllegalFileException : public cs::IOException {
public:using cs::IOException::IOException;
    const char* type_name()const noexcept override{return "kairo.unity.util.IllegalFileException";}
};
class PlayerPrefs {
public:
    static bool HasKey(cs::String);
    static std::int32_t GetInt(cs::String,std::int32_t=0);
    static float GetFloat(cs::String,float=0.0f);
    static cs::String GetString(cs::String,cs::String=cs::String(u""));
    static void SetInt(cs::String,std::int32_t);
    static void SetFloat(cs::String,float);
    static void SetString(cs::String,cs::String);
    static void DeleteKey(cs::String);
    static void DeleteAll();
    static void Save();
};
// Byte preferences are the platform leaf behind KairoPlugin, not Unity's typed
// PlayerPrefs. Values are the original opaque RMS bytes, including their XOR.
class BytePreferences {
public:
    static cs::Array<std::uint8_t> GetPreference(cs::String);
    static void PutPreference(cs::String,cs::Array<std::uint8_t>);
    static void RemovePreference(cs::String);
    static cs::Array<cs::String> GetPreferenceKeys();
};
class Storage : public cs::Object {
    int media_{};
    cs::String folder_;
public:
    static constexpr std::int32_t MEDIA_MEMORY=0,MEDIA_DATAFOLDER=1,MEDIA_HEAP=2,MEDIA_RESOURCE=3,MEDIA_RECORDSTORE=4;
    Storage(cs::String folder,int media):media_(media),folder_(folder){}
    static void Setup(std::int32_t access,std::int32_t share,cs::String root);
    static cs::Ref<Storage> Open(std::int32_t media,bool security);
    static cs::String GetFolder(std::int32_t media);
    void trace_edges(const cs::EdgeVisitor& v)const override{cs::trace_value(folder_,v);}
    void release_edges()override{cs::release_value(folder_);}
    void Close();
    cs::Array<std::uint8_t> Read(cs::String filename);
    void Write(cs::String filename,cs::Array<std::uint8_t> data);
    void Delete(cs::String filename);
    bool Exists(cs::String filename);
    std::int32_t GetSize(cs::String filename);
    cs::Array<cs::String> GetFiles();
    static cs::Array<std::uint8_t> Read(std::int32_t media,bool security,cs::String filename);
    static void Write(std::int32_t media,bool security,cs::String filename,cs::Array<std::uint8_t> data);
    static bool Exists(std::int32_t media,cs::String filename);
};
class RecordStore : public cs::Object {
    std::int32_t rs_id_;
public:
    explicit RecordStore(std::int32_t id):rs_id_(id){}
    static void SetPreferenceMode(bool);
    static bool Setup();
    static void CreateRecordStore();
    static void PreferencesToFile();
    static void FileToPreferences();
    static void SetResourceFiles(cs::Array<cs::String>);
    // The emitted Encrypter setter must forward the same array here; no game
    // key is compiled into this module. Default matches Encrypter's zero byte.
    static void SetEncryptionKey(cs::Array<std::uint8_t>);
    static void SetEncryptionKey(cs::Array<std::int8_t>);
    std::int32_t AddRecord(std::int32_t size);
    std::int32_t AddRecord(cs::Array<std::uint8_t> data);
    void WriteRecord(std::int32_t,cs::Array<std::uint8_t>);
    void WriteRecord(std::int32_t,cs::Array<cs::Array<std::uint8_t>>);
    cs::Array<std::uint8_t> ReadRecord(std::int32_t);
    bool ExistRecord(std::int32_t);
    std::int32_t GetRecordSize(std::int32_t);
    std::int32_t GetNumRecords();
    void RemoveLastRecord();
    void RemoveAllRecord();
    void CloseRecordStore(){}
    std::int32_t GetSizeAvailable(){return 1048576;}
    std::int32_t GetCapacity(){return 1048576;}
    std::int32_t GetSize(){return 0;}
    static std::int32_t GetRecordInfoSize(){return 33;}
    static cs::Ref<RecordStore> OpenRecordStore(std::int32_t);
    static void WriteRecord(std::int32_t rs,std::int32_t rc,cs::Array<std::uint8_t>);
    static cs::Array<std::uint8_t> ReadRecord(std::int32_t rs,std::int32_t rc);
};
}
