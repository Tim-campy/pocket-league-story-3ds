// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::system {

struct KairoBase : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(
        pls::cs::Object, {"M:kairo.unity.system.KairoBase.OnInit", "M:kairo.unity.system.KairoBase.OnInit"},
        {"M:kairo.unity.system.KairoBase.OnStart", "M:kairo.unity.system.KairoBase.OnStart"},
        {"M:kairo.unity.system.KairoBase.OnLoad(java.io.InputStream)",
         "M:kairo.unity.system.KairoBase.OnLoad(java.io.InputStream)"},
        {"M:kairo.unity.system.KairoBase.OnWrite(java.io.OutputStream)",
         "M:kairo.unity.system.KairoBase.OnWrite(java.io.OutputStream)"},
        {"M:kairo.unity.system.KairoBase.OnNewGame(System.Boolean)",
         "M:kairo.unity.system.KairoBase.OnNewGame(System.Boolean)"},
        {"M:kairo.unity.system.KairoBase.OnLoadGame(java.io.InputStream)",
         "M:kairo.unity.system.KairoBase.OnLoadGame(java.io.InputStream)"},
        {"M:kairo.unity.system.KairoBase.OnWriteGame(java.io.OutputStream)",
         "M:kairo.unity.system.KairoBase.OnWriteGame(java.io.OutputStream)"},
        {"M:kairo.unity.system.KairoBase.Finish", "M:kairo.unity.system.KairoBase.Finish"},
        {"M:kairo.unity.system.KairoBase.Connected(System.String,System.Byte[],System.Boolean)",
         "M:kairo.unity.system.KairoBase.Connected(System.String,System.Byte[],System.Boolean)"},
        {"M:kairo.unity.system.KairoBase.Update", "M:kairo.unity.system.KairoBase.Update"},
        {"M:kairo.unity.system.KairoBase.Save", "M:kairo.unity.system.KairoBase.Save"},
        {"M:kairo.unity.system.KairoBase.SaveAll", "M:kairo.unity.system.KairoBase.SaveAll"},
        {"M:kairo.unity.system.KairoBase.HandleActivityResult(System.Int32,System.Int32,System.Object)",
         "M:kairo.unity.system.KairoBase.HandleActivityResult(System.Int32,System.Int32,System.Object)"},
        {"M:kairo.unity.system.KairoBase.OnSaveGameBegin", "M:kairo.unity.system.KairoBase.OnSaveGameBegin"},
        {"M:kairo.unity.system.KairoBase.OnSaveGameEnd", "M:kairo.unity.system.KairoBase.OnSaveGameEnd"});
    PLS_MANAGED_CLASS("kairo.unity.system.KairoBase", KairoBase, pls::cs::Object)
    pls::cs::Int32 reserveSave{};
    bool reserveSaveEnable{};
    pls::cs::Ref<generated::kairo::unity::util::SecureString> host_{};
    pls::cs::Ref<generated::kairo::unity::util::SecureString> pubHost_{};
    pls::cs::Int32 appliVersion_{};
    pls::cs::Int32 latestVersion_{};
    pls::cs::Ref<generated::kairo::unity::util::SecureString> userId_{};
    pls::cs::Ref<generated::kairo::unity::util::SecureString> friendId_{};
    pls::cs::Int32 pkgId_{};
    pls::cs::Int32 networkLevel_{};
    bool rootBan_{};
    bool login_{};
    pls::cs::Int32 startCount_{};
    pls::cs::Ref<generated::kairo::unity::util::SecureInt> flag_{};
    bool init_{};
    bool start_{};
    pls::cs::Ref<generated::java::util::Vector> accessCounter_{};
    pls::cs::Ref<generated::java::util::Vector> userCounter_{};
    pls::cs::Int64 cheat_{};
    pls::cs::Int32 accountType_{};
    bool illegalPackage_{};
    bool illegalCountry_{};
    pls::cs::Array<pls::cs::String> arguments_{};
    pls::cs::Array<pls::cs::Int32> argumentsInt_{};
    pls::cs::String gcmId_{};
    bool isPlaying_{};
    pls::cs::Dictionary<pls::cs::String, pls::cs::Int32> cgiLogLevel_{};
    pls::cs::Ref<generated::java::util::Vector> connectTaskList_{};
    pls::cs::Array<appli::GameAppli> appList_{};
    pls::cs::Int32 appListDate_{};
    pls::cs::String COMMON_SERVER{};
    pls::cs::Array<pls::cs::Int32> prgStart_{};
    pls::cs::Stack<pls::cs::Ref<KairoBase_ConnectObject>> connects_{};
    pls::cs::List<pls::cs::Ref<payment::PaymentDataRecord>> paymemtList_{};
    pls::cs::List<pls::cs::String> connectPaymemtMoneyResponse_{};
    virtual void OnInit();
    virtual void OnStart();
    virtual void OnLoad(pls::cs::Ref<generated::java::io::InputStream> stream);
    virtual void OnWrite(pls::cs::Ref<generated::java::io::OutputStream> os);
    virtual void OnNewGame(bool take);
    virtual void OnLoadGame(pls::cs::Ref<generated::java::io::InputStream> stream);
    virtual void OnWriteGame(pls::cs::Ref<generated::java::io::OutputStream> os);
    virtual void Finish();
    virtual void Connected(pls::cs::String cgi, pls::cs::Array<std::uint8_t> send, bool split);
    virtual void Update();
    virtual void Save() = 0;
    virtual void SaveAll() = 0;
    virtual bool HandleActivityResult(pls::cs::Int32 requestCode, pls::cs::Int32 resultCode,
                                      pls::cs::Ref<pls::cs::Object> data);
    virtual void OnSaveGameBegin();
    virtual void OnSaveGameEnd();
    static constexpr pls::cs::Int32 NETLEVEL_LOW = 0;
    static constexpr pls::cs::Int32 NETLEVEL_MIDDLE = 1;
    static constexpr pls::cs::Int32 NETLEVEL_HIGH = 2;
    static constexpr pls::cs::Int32 ACCESSCOUNT_COMMON = 0;
    static constexpr pls::cs::Int32 ACCESSCOUNT_USER = 1;
    static constexpr pls::cs::Int32 MIGRATION_NONE = -1;
    static constexpr pls::cs::Int32 MIGRATION_START = 0;
    static constexpr pls::cs::Int32 MIGRATION_COMPLETE = 1;
    static constexpr pls::cs::Int32 PAY_MODE_GET = 1;
    static constexpr pls::cs::Int32 PAY_MODE_ADD = 2;
    static constexpr pls::cs::Int32 PAY_MODE_USE = 3;
    static constexpr pls::cs::Int32 CONNECT_TRY_SLEEP = 100;
    static constexpr bool NEXT_STARTUP_ASYSC = false;
    static pls::cs::Ref<KairoBase> create();

    static void ensure_initialized();

    static pls::cs::Array<pls::cs::Int32>& CONNECT_TRY();

    static pls::cs::Ref<KairoBase_KairoDummy>& dummy_();

    static pls::cs::Ref<KairoBase>& instance_();

    static void create_init(pls::cs::Ref<KairoBase> self);

    static pls::cs::Ref<KairoBase> GetInstance();

    bool ConnectLogin(bool enforce, bool retry);

    void AccessCounter(pls::cs::Int32 type, pls::cs::String name, pls::cs::Int32 up, bool save);

    void AccessCounter(pls::cs::Int32 type, pls::cs::String name);

    void ConnectAccessCounter();

    pls::cs::Array<pls::cs::String> ConnectGift(pls::cs::String pw);

    pls::cs::Ref<GameDataRecord> ConnectGameData(pls::cs::Ref<GameDataRecord> gameData);

    pls::cs::Ref<GameDataRecord> ConnectGameData(pls::cs::String tbname,
                                                 pls::cs::Ref<GameDataRecord> gameData);

    pls::cs::Array<pls::cs::Ref<GameDataRecord>>
    ConnectGameDataGameDataRecordArray(pls::cs::Array<pls::cs::Ref<GameDataRecord>> dataList);

    pls::cs::Array<pls::cs::Ref<GameDataRecord>>
    ConnectGameDataGameDataRecordArray(pls::cs::String tbname,
                                       pls::cs::Array<pls::cs::Ref<GameDataRecord>> dataList);

    pls::cs::Array<pls::cs::Ref<GameDataRecord>>
    ConnectGameDataSearch(pls::cs::String get, pls::cs::String where, pls::cs::String order,
                          pls::cs::String column, pls::cs::Int64 value, pls::cs::Int64 low,
                          pls::cs::Int64 high, pls::cs::String count, pls::cs::Int32 logic);

    pls::cs::Array<pls::cs::Ref<GameDataRecord>>
    ConnectGameDataSearch(pls::cs::String tbname, pls::cs::String get, pls::cs::String where,
                          pls::cs::String order, pls::cs::String column, pls::cs::Int64 value,
                          pls::cs::Int64 low, pls::cs::Int64 high, pls::cs::String count,
                          pls::cs::Int32 logic);

    pls::cs::Array<pls::cs::Array<pls::cs::Ref<GameDataRecord>>>
    ConnectGameDataRanking(pls::cs::String friendId, pls::cs::String get, pls::cs::String where,
                           pls::cs::String column, pls::cs::String top, bool self_, pls::cs::String order);

    pls::cs::Array<pls::cs::Array<pls::cs::Ref<GameDataRecord>>>
    ConnectGameDataRanking(pls::cs::String tbname, pls::cs::String friendId, pls::cs::String get,
                           pls::cs::String where, pls::cs::String column, pls::cs::String top, bool self_,
                           pls::cs::String order);

    pls::cs::String CorrectGetGameData(pls::cs::String get);

    pls::cs::String CorrectWhereGameData(pls::cs::String where);

    pls::cs::Array<pls::cs::Array<std::uint8_t>> ConnectLineupList(pls::cs::String time);

    pls::cs::Array<pls::cs::Array<std::uint8_t>> ConnectLineupImage(pls::cs::String files);

    pls::cs::Array<std::uint8_t> FromDBValue(pls::cs::String table, pls::cs::String name,
                                             pls::cs::Array<std::uint8_t> value);

    pls::cs::Array<std::uint8_t> ToDBValue(pls::cs::String table, pls::cs::String name,
                                           pls::cs::Array<std::uint8_t> value);

    pls::cs::Int32 GetColumnType(pls::cs::String table, pls::cs::String column);

    pls::cs::Array<pls::cs::String> CgiLogin(pls::cs::String userid, pls::cs::String c, pls::cs::String pkg,
                                             pls::cs::String r, pls::cs::Array<std::uint8_t> signature);

    static pls::cs::String MakeQuery(pls::cs::String query, pls::cs::Int32 param);

    static pls::cs::String MakeQueryString(pls::cs::String query, pls::cs::String param);

    pls::cs::String MakeUrl(pls::cs::String cgi, pls::cs::Array<std::uint8_t> send);

    pls::cs::String MakeUrl(pls::cs::String cgi);

    static pls::cs::Array<pls::cs::Array<std::uint8_t>> Connect(pls::cs::String cgi, bool split);

    static pls::cs::Array<pls::cs::Array<std::uint8_t>>
    Connect(pls::cs::String cgi, pls::cs::Array<std::uint8_t> send, bool split);

    static pls::cs::Array<std::uint8_t> Connect(pls::cs::String cgi);

    static pls::cs::Array<std::uint8_t> ConnectByteArray(pls::cs::String cgi,
                                                         pls::cs::Array<std::uint8_t> send);

    static void ConnectAsync(pls::cs::String cgi, pls::cs::Array<std::uint8_t> send, pls::cs::Int32 count,
                             pls::cs::Int32 day);

    pls::cs::String GetUserId();

    bool CheckUserId();

    pls::cs::String GetFriendId();

    static pls::cs::String GetSignature();

    void ExecuteConnectTask();

    bool CheckNetwork();

    pls::cs::Int32 GetLatestVersion();

    bool CheckRoot();

    bool IsLogin();

    bool Check(pls::cs::Int32 bit);

    void On(pls::cs::Int32 bit);

    void SetReserveSaveEnable(bool enable);

    bool IsCheater();

    bool AddPaymentMoney(pls::cs::String product_id, pls::cs::String order_code,
                         pls::cs::String purchaseToken, pls::cs::Int32 amount, pls::cs::Int32 action,
                         bool async);

    pls::cs::Int32 GetPaymentMoney();

    pls::cs::Int32
    ConnectPaymemtMoney(pls::cs::Int32 mode,
                        pls::cs::List<pls::cs::Ref<payment::PaymentDataRecord>> paymemtListData, bool async);

    pls::cs::String GetPaymentHost();

    void ConnectNotificationRegist(pls::cs::String gcmId);

    bool ConnectLangPackCheck(pls::cs::String file, pls::cs::Int32 ver, pls::cs::Int32 hash);

    void ConnectLangPackSet(pls::cs::String file, pls::cs::Int32 ver, pls::cs::Int32 hash,
                            pls::cs::String data);

    void ConnectLangPackWeb(pls::cs::String file);

    void LoadAppList();

    pls::cs::Array<appli::GameAppli> LoadAppList(pls::cs::Array<std::uint8_t> data, pls::cs::Int32& date);

    pls::cs::Array<appli::GameAppli> GetAppList(bool languageOnly, bool releaseOnly);

    pls::cs::Array<pls::cs::Array<std::uint8_t>>
    HttpConnect(pls::cs::String url, pls::cs::Array<std::uint8_t> send, bool check, bool split);

    pls::cs::Array<std::uint8_t> HttpConnect(pls::cs::String url, pls::cs::Array<std::uint8_t> send,
                                             bool check);

    void SetGameState(bool playing);

    bool IsGamePlaying();

    void SetSystemStartProgress(pls::cs::Int32 progress);

    pls::cs::String GetCommonServer();
};
} // namespace kairo::unity::system
}
