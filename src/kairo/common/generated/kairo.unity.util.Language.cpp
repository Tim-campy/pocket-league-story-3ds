// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "java.lang.StringEx.hpp"
#include "java.util.JLocale.hpp"
#include "java.util.Vector.hpp"
#include "java.util.Vector_1.hpp"
#include "kairo.common.cfg.Config.hpp"
#include "kairo.unity.util.Language.LangPackFormat.hpp"
#include "kairo.unity.util.Language.LangPackRecord.hpp"
#include "kairo.unity.util.Language.Position.hpp"
#include "kairo.unity.util.Language.RecordPosition.hpp"
#include "kairo.unity.util.Language.hpp"
#include "kairo.unity.util.StringUtil.hpp"
#include "java.util.Vector_1_templates.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;
using StringArray = pls::cs::Array<pls::cs::String>;
using StringArray2 = pls::cs::Array<pls::cs::Array<pls::cs::String>>;

namespace pls::generated {
namespace kairo::unity::util::Language {

static StringArray2 BUILTIN_SOFTLABEL_TABLE_storage{};

static StringArray2 BUILTIN_TRANSLATE_TABLE_storage{};

static pls::cs::Array<StringArray2> builtInTextTable__storage{};

static StringArray FOLDERS_storage{};

static pls::cs::Int32 forceResetType__storage{};

static pls::cs::String KAIRO_ENGLISH_storage{};

static pls::cs::String KAIRO_JAPANESE_storage{};

static StringArray langPackFolders__storage{};

static pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<Language_LangPackFormat>> langPackFormats__storage{};

static pls::cs::Dictionary<pls::cs::String,pls::cs::Array<pls::cs::List<Language_RecordPosition>>> langPackLines__storage{};

static pls::cs::Array<pls::cs::Ref<Language_LangPackRecord>> langPackRecords__storage{};

static pls::cs::Int32 language__storage{};

static pls::cs::Int32 priorityLanguage__storage{};

static StringArray2 softlabelTable__storage{};

static pls::cs::Array<StringArray2> textTable__storage{};

static PLS_NOINLINE void cs_init_72d9658ed61145d6_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(BUILTIN_SOFTLABEL_TABLE_storage,visitor);pls::cs::trace_value(BUILTIN_TRANSLATE_TABLE_storage,visitor);pls::cs::trace_value(builtInTextTable__storage,visitor);pls::cs::trace_value(FOLDERS_storage,visitor);pls::cs::trace_value(forceResetType__storage,visitor);pls::cs::trace_value(KAIRO_ENGLISH_storage,visitor);pls::cs::trace_value(KAIRO_JAPANESE_storage,visitor);pls::cs::trace_value(langPackFolders__storage,visitor);pls::cs::trace_value(langPackFormats__storage,visitor);pls::cs::trace_value(langPackLines__storage,visitor);pls::cs::trace_value(langPackRecords__storage,visitor);pls::cs::trace_value(language__storage,visitor);pls::cs::trace_value(priorityLanguage__storage,visitor);pls::cs::trace_value(softlabelTable__storage,visitor);pls::cs::trace_value(textTable__storage,visitor);});static pls::cs::TypeInitState state;state.run("kairo.unity.util.Language",flag,[](){
language__storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.Language.language_",[&](){return -1;});
priorityLanguage__storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.Language.priorityLanguage_",[&](){return -1;});
KAIRO_JAPANESE_storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.Language.KAIRO_JAPANESE",[&](){return literal(u"*Japanese");});
KAIRO_ENGLISH_storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.Language.KAIRO_ENGLISH",[&](){return literal(u"*English");});
forceResetType__storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.Language.forceResetType_",[&](){return 0;});
FOLDERS_storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.Language.FOLDERS",[&](){return StringArray::from({literal(u"Japanese.lproj"), literal(u"English.lproj")});});
BUILTIN_TRANSLATE_TABLE_storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.Language.BUILTIN_TRANSLATE_TABLE",[&](){return StringArray2::from({StringArray::from({literal(u"画面が広くなって<br>さらに<co=60,100,200>横回転</co>も<br>可能になりました!"), literal(u"<po=c>The display area stream now larger and can also be viewed stream <co=3366ff>landscape mode</co>!")}), StringArray::from({literal(u"無事に広告表示が解除されたようですね！"), literal(u"You've successfully removed ads from the game!")}), StringArray::from({literal(u"さらに、画面の回転に対応しました!!ﾒﾆｭｰ｢ｼｽﾃﾑ｣-｢設定変更｣から横回転のON/OFFが切り替えられます。"), literal(u"You can also rotate the display if your device supports it! Toggle this on or off via \"System\" > \"Options.\"")}), StringArray::from({literal(u"画面も変わって新しい気分で<br>経営を進めていきましょう!"), literal(u"Maybe the new display will offer fresh perspectives on the game! Enjoy!")}), StringArray::from({literal(u"通信を許可し電波を確認して再起動してください。\n通信OFFの場合は一部の機能がご利用頂けない場合がございます。"), literal(u"Please ensure connections are enabled, check your signal, and restart the app. Some features may be inaccessible with connections disabled.")}), StringArray::from({literal(u"メッセージ"), literal(u"Message")}), StringArray::from({literal(u"ﾒｯｾｰｼﾞ"), literal(u"Message")}), StringArray::from({literal(u"通信中"), literal(u"Transmitting")}), StringArray::from({literal(u"了解"), literal(u"OK")}), StringArray::from({literal(u"いらっしゃいませ"), literal(u"Welcome!")}), StringArray::from({literal(u"売り切れ"), literal(u"Sold Out")}), StringArray::from({literal(u"ﾌﾌﾌﾌ。\nどれにします"), literal(u"Heh heh. Which do you want?")}), StringArray::from({literal(u"通信に失敗しました"), literal(u"A communication error occurred.")}), StringArray::from({literal(u"アイテムの購入"), literal(u"Buy Items")}), StringArray::from({literal(u"利用規約を読む(必読)"), literal(u"Read Terms of Use (Required)")}), StringArray::from({literal(u"規約に同意してﾏｰｹｯﾄへ移動"), literal(u"Accept terms and proceed.")}), StringArray::from({literal(u"購入後ｹﾞｰﾑを再開するとｹﾞｯﾄ"), literal(u"Restart after purchase to claim items.")}), StringArray::from({literal(u"買いに行く"), literal(u"Proceed")}), StringArray::from({literal(u"規約に同意して買いに行く"), literal(u"Accept terms and proceed")}), StringArray::from({literal(u"報告"), literal(u"Alert")}), StringArray::from({literal(u"アイテムが無事に\n届きました"), literal(u"Your purchase is here!")}), StringArray::from({literal(u"どちらに入店しますか"), literal(u"Select a Shop")}), StringArray::from({literal(u"パンプキン商会"), literal(u"Pumpkin Products")}), StringArray::from({literal(u"チケットショップ"), literal(u"Ticket Shop")}), StringArray::from({literal(u"おっと…<br>本部との<co=60,100,200>通信に失敗</co>してしまいました。"), literal(u"Oh, dear... We <co=60,100,200>can't seem to contact</co> corporate HQ.")}), StringArray::from({literal(u"電波や通信の状態を確認して<br>もう一回お店に来ると…"), literal(u"Come back to the shop after checking your signal and communications status.")}), StringArray::from({literal(u"本来のステキな商品が陳列されますよ。"), literal(u"Our usual impressive selection of products should be available to you then.")}), StringArray::from({literal(u"というわけで…<br>またお待ちしています。"), literal(u"We'll be waiting!")}), StringArray::from({literal(u"ここは、世界的に見て超レアな<br>｢チケット｣を売るお店ですよ。"), literal(u"Here we sell tickets--premium items not easily found anywhere else stream the world.")}), StringArray::from({literal(u"なかなかの金額だからよく考えて買っていってくださいね。"), literal(u"They're a bit pricey, so think carefully before buying, okay?")}), StringArray::from({literal(u"フフフ。"), literal(u"Heh heh.")}), StringArray::from({literal(u"フフフ<br>いらっしゃい。"), literal(u"Welcome!")}), StringArray::from({literal(u"あー、残念ながら<br>そちらは<co=60,100,200>売り切れ</co>です。<br>他の商品もご覧下さいませ。"), literal(u"Ah, unfortunately we're <co=60,100,200>sold out</co> of that, but please have a look at our other offerings.")}), StringArray::from({literal(u"チケットが最大の<0>枚を超えてしまいます。"), literal(u"You can't exceed <0> tickets.")}), StringArray::from({literal(u"おや、お目が高いですね。"), literal(u"Ah, an excellent choice.")}), StringArray::from({literal(u"こちらは<co=60,100,200>現実のお金で購入する</co>ステキな商品です。"), literal(u"This wonderful item can only be purchased with <co=60,100,200>actual, real-life money</co>.")}), StringArray::from({literal(u"ちびっこは、<co=60,100,200>保護者の方</co>に確認してから購入するようにして下さいね。フフフ。"), literal(u"Children must check with a <co=60,100,200>parent or guardian</co> before making purchases.")}), StringArray::from({literal(u"これからいつでもお店はありますからいつでも来て下さいね。"), literal(u"This shop will be open at all times now, so stop by anytime.")}), StringArray::from({literal(u"フフフ<br>また来てくださいね。"), literal(u"Come again!")}), StringArray::from({literal(u"<0>さん"), literal(u"<0>")}), StringArray::from({literal(u"ﾌﾟﾚｲ <0>時間<1>分"), literal(u"Play time: <0> hr <1> min")}), StringArray::from({literal(u"申請してみる"), literal(u"Friend Request")}), StringArray::from({literal(u"全国に散らばるユーザーを<br>フレンドとして最大<0>人まで<br>登録できます。<br>フレンドの合計ﾌﾟﾚｲ時間に<br>よって起動時にボーナスが<br>入ります。IDを聞いて友達<br>に申請してみましょう。"), literal(u"You can register up to five<br>friends. You'll earn bonuses<br>at game startup based on their<br>total play time. Ask friends for<br>their IDs to add them.")}), StringArray::from({literal(u"ﾆｯｸﾈｰﾑ"), literal(u"Nickname")}), StringArray::from({literal(u"ﾆｯｸﾈｰﾑ "), literal(u"nickname")}), StringArray::from({literal(u"ﾆｯｸﾈｰﾑを入力してください"), literal(u"Enter a nickname.")}), StringArray::from({literal(u"空白以外で入力してください"), literal(u"Nickname cannot include spaces.")}), StringArray::from({literal(u"利用できない文字があります"), literal(u"Contains one or more unusable characters.")}), StringArray::from({literal(u"フレンドのID"), literal(u"Friend's ID")}), StringArray::from({literal(u"フレンドのID "), literal(u"friend's ID")}), StringArray::from({literal(u"フレンドIDを入力してください"), literal(u"Enter your friend's ID.")}), StringArray::from({literal(u"おめでとうございます!<br>新しい<co=60,100,200>フレンド</co>が登録されボーナスが入りました!"), literal(u"Congratulations! You get a bonus for registering a new <co=60,100,200>friend</co>!")}), StringArray::from({literal(u"一緒にプレイしていれば今後もボーナスが入っていきますよ!"), literal(u"If you both continue playing, you'll earn more bonuses stream the future!")}), StringArray::from({literal(u"ちなみに<co=255,0,0>アプリは削除しないで</co>下さいね。削除するとフレンドが全部消えて戻せなくなってしまいます。"), literal(u"By the way, <co=255,0,0>don't delete this app</co> or all of your friend data will be lost for good.")}), StringArray::from({literal(u"ゲームの前に"), literal(u"Getting Started")}), StringArray::from({literal(u"あなたのﾆｯｸﾈｰﾑを入力してね"), literal(u"Please enter your nickname.")}), StringArray::from({literal(u"ここをタッチ"), literal(u"Tap here")}), StringArray::from({literal(u"※あとで変更できます※"), literal(u"It can be changed later.")}), StringArray::from({literal(u"OK"), literal(u"OK")}), StringArray::from({literal(u"新しいﾆｯｸﾈｰﾑを入力してね"), literal(u"Enter a new nickname.")}), StringArray::from({literal(u"<0>  <1>時間 <2>分"), literal(u"<0>  <1> hr <2> min")}), StringArray::from({literal(u"前回起動時"), literal(u"Last Played")}), StringArray::from({literal(u"累計"), literal(u"Total:")}), StringArray::from({literal(u"<0>時間<1>分"), literal(u"<0> hr <1> min")}), StringArray::from({literal(u"から申請があります。"), literal(u"has sent a friend request.")}), StringArray::from({literal(u"他<0>件"), literal(u"<0> other(s)")}), StringArray::from({literal(u"フレンドを探す"), literal(u"Find a friend")}), StringArray::from({literal(u"ﾌﾚﾝﾄﾞ説明"), literal(u"Help")}), StringArray::from({literal(u"IDを教える"), literal(u"Share ID")}), StringArray::from({literal(u"あなたのIDはこちら(ﾀｯﾁしてね)"), literal(u"Your ID (tap to share)")}), StringArray::from({literal(u"検索はこちら"), literal(u"Search here")}), StringArray::from({literal(u"ここに入力"), literal(u"Enter here")}), StringArray::from({literal(u"検索"), literal(u"Search")}), StringArray::from({literal(u"確認"), literal(u"Message")}), StringArray::from({literal(u"承認まで時間がかかります"), literal(u"Approval may take time.")}), StringArray::from({literal(u"申請する"), literal(u"Request")}), StringArray::from({literal(u"やめる"), literal(u"Cancel")}), StringArray::from({literal(u"に申請しました。"), literal(u"Friend request sent to")}), StringArray::from({literal(u"許可されるまでお待ちください"), literal(u"Please wait for approval.")}), StringArray::from({literal(u"友達に知らせよう"), literal(u"Message")}), StringArray::from({literal(u"閉じる"), literal(u"Close")}), StringArray::from({literal(u"反映まで時間がかかります"), literal(u"Updates may take time.")}), StringArray::from({literal(u"承認する"), literal(u"Approve")}), StringArray::from({literal(u"拒否する"), literal(u"Decline")}), StringArray::from({literal(u"フレンドの承認"), literal(u"Friend Added")}), StringArray::from({literal(u"フレンド増加"), literal(u"New Friend")}), StringArray::from({literal(u"<co=0070FF><0>さん</co><br>を承認しました。"), literal(u"<co=0070FF><0></co><br>added.")}), StringArray::from({literal(u"ｹﾞｰﾑを進めるとﾎﾞｰﾅｽがあるかも"), literal(u"You may receive bonuses.")}), StringArray::from({literal(u"※相手には通知されません※"), literal(u"The player will not be notified.")}), StringArray::from({literal(u"削除する"), literal(u"Delete")}), StringArray::from({literal(u"もどる"), literal(u"Back")}), StringArray::from({literal(u"<0>さん\nを削除しますか?"), literal(u"Delete<br><0>?")}), StringArray::from({literal(u"フレンドについて"), literal(u"About Friends")}), StringArray::from({literal(u"ﾌﾚﾝﾄﾞﾎﾞｰﾅｽ(<0>分毎)"), literal(u"Friend Bonus (every <0> min)")}), StringArray::from({literal(u"ﾌﾚﾝﾄﾞから <co=254,233,1><0></co>時間<co=254,233,1><1></co>分 取得"), literal(u"You got a friend bonus of <co=254,233,1><0></co> hr <co=254,233,1><1></co> min.")}), StringArray::from({literal(u"(最大)"), literal(u"(Max)")}), StringArray::from({literal(u"受け取る"), literal(u"Claim")}), StringArray::from({literal(u"また次回"), literal(u"Next Time")}), StringArray::from({literal(u"ﾌﾚﾝﾄﾞﾎﾞｰﾅｽGET"), literal(u"Friend Bonus")}), StringArray::from({literal(u"<co=0070FF>チケット<0>枚</co><br>入手できました。"), literal(u"You got<br><co=0070FF><0> tickets</co>.")}), StringArray::from({literal(u"ﾌﾚﾝﾄﾞﾎﾞｰﾅｽ"), literal(u"Friend Bonus")}), StringArray::from({literal(u"フレンドが<co=254,233,1><0>人</co>増えました!"), literal(u"New friends: <co=254,233,1><0></co>")}), StringArray::from({literal(u"<co=0,128,255><0></co>さんが<br>ﾌﾚﾝﾄﾞになりました!"), literal(u"You've added<br><co=0,128,255><0></co>!")}), StringArray::from({literal(u"通信できませんでした。|設定を確認し時間を|おいて挑戦して下さい。&ﾌﾚﾝﾄﾞは<friend_max>人まで登録できます"), literal(u"Transmission failed. Check your settings and try again later.")}), StringArray::from({literal(u"サポート専用\nｼｮｯﾌﾟｺｰﾄﾞを入力して下さい"), literal(u"Please enter the shop code (for customer support only).")}), StringArray::from({literal(u"ｼｮｯﾌﾟｺｰﾄﾞ"), literal(u"Shop Code")}), StringArray::from({literal(u"セーブデータを受信する"), literal(u"Receive save data")}), StringArray::from({literal(u"サポート専用\nお問合せｺｰﾄﾞを入力して下さい"), literal(u"Please enter your\ninquiry support code.")}), StringArray::from({literal(u"お問合せｺｰﾄﾞ"), literal(u"Inquiry support code")}), StringArray::from({literal(u"オススメアプリ情報"), literal(u"Recommended Apps")}), StringArray::from({literal(u"タイトル画面へ"), literal(u"Go to Title Screen")}), StringArray::from({literal(u"お友達にこのアプリを紹介"), literal(u"Invite your friends!")}), StringArray::from({literal(u"0Pは登録できません。"), literal(u"You can't register 0 points.")}), StringArray::from({literal(u"<0>は登録できません。"), literal(u"You can't register <0>.")}), StringArray::from({literal(u"ｱﾌﾟﾘのﾊﾞｰｼﾞｮﾝｱｯﾌﾟを行います"), literal(u"Updating app...")}), StringArray::from({literal(u"認証に失敗しました。購入時のアカウントを設定し、電波状態を確認してください。"), literal(u"Authentication failed. Please use the account you used to purchase the app and check your signal.")}), StringArray::from({literal(u"購入時のアカウントを設定し、電波状態を確認してください。"), literal(u"Please use the account you used to purchase the app and check your signal.")}), StringArray::from({literal(u"横画面モードは"), literal(u"Landscape mode available")}), StringArray::from({literal(u"正式版でご利用頂けます!!"), literal(u"in the Full Version!")}), StringArray::from({literal(u"システムの都合上 <0> は使えません"), literal(u"Do not use: <0>")}), StringArray::from({literal(u"<0>を入力して下さい"), literal(u"Please enter a <0>.")}), StringArray::from({literal(u"ｱﾌﾟﾘ起動中"), literal(u"Loading")}), StringArray::from({literal(u"リソース読込失敗"), literal(u"Loading failed")}), StringArray::from({literal(u"スタート"), literal(u"Start")}), StringArray::from({literal(u"セーブスロット"), literal(u"Slot")}), StringArray::from({literal(u"中断データから再開"), literal(u"Resume")}), StringArray::from({literal(u"セーブデータを読込"), literal(u"Load Data")}), StringArray::from({literal(u"中断データなし"), literal(u"No autosave data")}), StringArray::from({literal(u"空きスロット"), literal(u"Empty")}), StringArray::from({literal(u"<0>年"), literal(u"Yr <0>")}), StringArray::from({literal(u"<0>月 <1>週"), literal(u"Mn <0> Wk <1>")}), StringArray::from({literal(u"システムの都合上 / | < > \\ は使えません"), literal(u"Do not use: / | < > \\")}), StringArray::from({literal(u"データを選択してください"), literal(u"Select data to load")}), StringArray::from({literal(u"セーブデータがありません"), literal(u"No save data found")}), StringArray::from({literal(u"このゲームについて"), literal(u"About the Game")}), StringArray::from({literal(u"最高クリアポイント"), literal(u"Max Clear Points")}), StringArray::from({literal(u"記録がありません"), literal(u"None")}), StringArray::from({literal(u"該当\u3000無し"), literal(u"None")}), StringArray::from({literal(u"正式版へ"), literal(u"Full Ver.")}), StringArray::from({literal(u"ハイスコアは<br>正式版でご利用頂けます!!"), literal(u"Get the full version to upload your hi scores!")}), StringArray::from({literal(u"おつかれさまでした。<br>ここでLite版は終了となります"), literal(u"Well done. You've finished the Lite version.")}), StringArray::from({literal(u"このあと正式版のサイトにアクセスすることが出来ます。"), literal(u"After this you'll jump to our site, so check it out!")}), StringArray::from({literal(u"それではまた会いましょう。"), literal(u"Thanks for playing!")}), StringArray::from({literal(u"<0>最新号<br>が発行されました"), literal(u"The latest <0><br>is now on sale.")}), StringArray::from({literal(u"はい"), literal(u"Yes")}), StringArray::from({literal(u"いいえ"), literal(u"No")}), StringArray::from({literal(u"ｼｽﾃﾑ"), literal(u"System")}), StringArray::from({literal(u"セーブ"), literal(u"Save")}), StringArray::from({literal(u"設定変更"), literal(u"Options")}), StringArray::from({literal(u"遊び方"), literal(u"Help")}), StringArray::from({literal(u"ハイスコア"), literal(u"High Score")}), StringArray::from({literal(u"ｹﾞｰﾑ終了"), literal(u"Quit")}), StringArray::from({literal(u"続きから"), literal(u"Continue")}), StringArray::from({literal(u"最初から"), literal(u"New Game")}), StringArray::from({literal(u"建築"), literal(u"Build")}), StringArray::from({literal(u"情報"), literal(u"Info")}), StringArray::from({literal(u"ｱｲﾃﾑ"), literal(u"Items")}), StringArray::from({literal(u"ﾀｲﾄﾙへ"), literal(u"Title")}), StringArray::from({literal(u"小計 <0>P"), literal(u"Subtotal: <0>")}), StringArray::from({literal(u"合計 <0>P !!"), literal(u"Total: <0>")}), StringArray::from({literal(u"<0>個"), literal(u"<0>")}), StringArray::from({literal(u"<0>種"), literal(u"<0>")}), StringArray::from({literal(u"<0>人"), literal(u"<0>")}), StringArray::from({literal(u"<0>P"), literal(u"<0>")}), StringArray::from({literal(u"<0>P !!"), literal(u"<0>!!")}), StringArray::from({literal(u"ゲームセーブ中"), literal(u"Saving game...")}), StringArray::from({literal(u"会話ウィンドウ"), literal(u"Speech Window")}), StringArray::from({literal(u"イベント"), literal(u"Event")}), StringArray::from({literal(u"設定"), literal(u"Options")}), StringArray::from({literal(u"画面"), literal(u"Priority")}), StringArray::from({literal(u"ｽﾋﾟｰﾄﾞ"), literal(u"Speed")}), StringArray::from({literal(u"BGM"), literal(u"Music")}), StringArray::from({literal(u"効果音"), literal(u"SFX")}), StringArray::from({literal(u"画面回転"), literal(u"Rotation")}), StringArray::from({literal(u"描画優先"), literal(u"Graphics")}), StringArray::from({literal(u"速度優先"), literal(u"Perf.")}), StringArray::from({literal(u"高速"), literal(u"Fast")}), StringArray::from({literal(u"普通"), literal(u"Normal")}), StringArray::from({literal(u"自動"), literal(u"Auto")}), StringArray::from({literal(u"固定"), literal(u"Lock")}), StringArray::from({literal(u"速度優先にすると一部の演出や"), literal(u"Selecting “Perf.” prioritizes")}), StringArray::from({literal(u"表示が削除されます"), literal(u"performance over graphics.")}), StringArray::from({literal(u"ゲームの動作速度を変更します"), literal(u"Change the game's speed.")}), StringArray::from({literal(u"ｹﾞｰﾑをｸﾘｱすると変更できます"), literal(u"(Unlocked after beating game.)")}), StringArray::from({literal(u"本体の向きに合わせて"), literal(u"Choose to automatically")}), StringArray::from({literal(u"画面を回転するか設定します"), literal(u"rotate the screen or not.")}), StringArray::from({literal(u"ゲーム中のボリュームを"), literal(u"Adjust the volume.")}), StringArray::from({literal(u"設定します"), literal(u"")}), StringArray::from({literal(u"for カイロパーク"), literal(u"(C) Kairosoft Co., Ltd.")}), StringArray::from({literal(u"(C)カイロソフト"), literal(u"(C) Kairosoft Co., Ltd.")}), StringArray::from({literal(u"クリアポイント"), literal(u"Clear Points")}), StringArray::from({literal(u"ｸﾘｱﾎﾟｲﾝﾄの計算"), literal(u"Page")}), StringArray::from({literal(u"= + <0>P"), literal(u"= <0>")}), StringArray::from({literal(u"次へ"), literal(u"Next")}), StringArray::from({literal(u"維持/月"), literal(u"Maint.")}), StringArray::from({literal(u"基本"), literal(u"Base")}), StringArray::from({literal(u"ﾎﾞｰﾅｽ"), literal(u"Bns")}), StringArray::from({literal(u"合計"), literal(u"Total")}), StringArray::from({literal(u"ボーナス"), literal(u"Bonus")}), StringArray::from({literal(u"男性"), literal(u"Male")}), StringArray::from({literal(u"女性"), literal(u"Female")}), StringArray::from({literal(u"<0>月"), literal(u"Month <0>")}), StringArray::from({literal(u"維持費"), literal(u"Maint.")}), StringArray::from({literal(u"<0>/月"), literal(u"<0>/month")}), StringArray::from({literal(u"未設定"), literal(u"None")}), StringArray::from({literal(u"価格"), literal(u"Price")}), StringArray::from({literal(u"在庫"), literal(u"Stock")}), StringArray::from({literal(u"所有数"), literal(u"Owned")}), StringArray::from({literal(u"完了"), literal(u"Complete")}), StringArray::from({literal(u"実行中"), literal(u"In progress")}), StringArray::from({literal(u"<0>個 完了"), literal(u"<0> complete")}), StringArray::from({literal(u"<0>\u3000<1>月号"), literal(u"<0>: <1> Issue")}), StringArray::from({literal(u"アイテム一覧"), literal(u"Item List")}), StringArray::from({literal(u"所有"), literal(u"Owned")}), StringArray::from({literal(u"アイテムの一覧"), literal(u"Item List")}), StringArray::from({literal(u"使用回数"), literal(u"Times Used")}), StringArray::from({literal(u"<0> 回"), literal(u"<0>")}), StringArray::from({literal(u"『<0>』"), literal(u"<0>")}), StringArray::from({literal(u"概要"), literal(u"Summary")}), StringArray::from({literal(u"期間"), literal(u"Length")}), StringArray::from({literal(u"費用"), literal(u"Cost")}), StringArray::from({literal(u"名前"), literal(u"Name")}), StringArray::from({literal(u"順位"), literal(u"Rank")}), StringArray::from({literal(u"施設の一覧"), literal(u"Facilities")}), StringArray::from({literal(u"全て"), literal(u"All")}), StringArray::from({literal(u"全ての施設"), literal(u"All Facilities")}), StringArray::from({literal(u"一覧"), literal(u"List")}), StringArray::from({literal(u"今のセーブデータに<br>上書きされます"), literal(u"Overwrite current progress?")}), StringArray::from({literal(u"今のセーブデータは<br>消えてしまいます"), literal(u"Delete current progress?")}), StringArray::from({literal(u"ゲームセーブ完了"), literal(u"Save complete.")}), StringArray::from({literal(u"画面をスクロールしながら建てる場所を選びます。建物をタッチしながら動かせば細かい調整もできます。"), literal(u"Scroll to select a location. Keep your finger on the item while scrolling to make fine adjustments. Tap to build.")}), StringArray::from({literal(u"既に設定されています"), literal(u"Already set.")}), StringArray::from({literal(u"お金が足りません"), literal(u"You don't have enough money.")}), StringArray::from({literal(u"臨時収入 <co=000080><0></co>を入手しました"), literal(u"You got <co=000080><0></co>.")}), StringArray::from({literal(u"人の追跡を開始します。<br>このあと、もう一回人をタッチすると詳しい情報も見れます。"), literal(u"Now following this guest. Tap again to see detailed info.")}), StringArray::from({literal(u"<0>を建築中です"), literal(u"Building <0>...")}), StringArray::from({literal(u"『<0>』を撤去"), literal(u"Remove <0>")}), StringArray::from({literal(u"どこまで撤去しますか？"), literal(u"Remove until where?")}), StringArray::from({literal(u"どこから<0>を敷きますか？"), literal(u"Start <0> where?")}), StringArray::from({literal(u"どこまで敷きますか？"), literal(u"Place until where?")}), StringArray::from({literal(u"春"), literal(u"Spr")}), StringArray::from({literal(u"夏"), literal(u"Sum")}), StringArray::from({literal(u"秋"), literal(u"Aut")}), StringArray::from({literal(u"冬"), literal(u"Wnt")}), StringArray::from({literal(u"『<co=008000><0></co>』が完了"), literal(u"<co=008000><0></co> is complete.")}), StringArray::from({literal(u"維持費が<0> ひかれました"), literal(u"-<0> in monthly maintenance.")}), StringArray::from({literal(u"カイロニュース"), literal(u"Kairo News")}), StringArray::from({literal(u"カイロパークに飛びます"), literal(u"Visit us at Kairo Park.")}), StringArray::from({literal(u"アプリ紹介ページに飛びます"), literal(u"Check out Kairo Park Apps.")}), StringArray::from({literal(u"ゲームを終了して"), literal(u"Quit the game and head to")}), StringArray::from({literal(u"カイロパークへ接続します"), literal(u"Head to Kairo Park?")}), StringArray::from({literal(u"アプリ紹介ページへ接続します"), literal(u"Head to our App intro page?")}), StringArray::from({literal(u"サイトへ行く"), literal(u"OK")}), StringArray::from({literal(u"ゲームを終了します"), literal(u"Quit the game?")}), StringArray::from({literal(u"最新ゲームの情報は"), literal(u"Stay up-to-date with the")}), StringArray::from({literal(u"カイロパークでGET"), literal(u"latest Kairo Park info!")}), StringArray::from({literal(u"通貨単位"), literal(u"Currency")}), StringArray::from({literal(u"円"), literal(u"\\")}), StringArray::from({literal(u"ドル"), literal(u"$")}), StringArray::from({literal(u"お金の表記を変更できます"), literal(u"Switch currency to yen/dollars.")}), StringArray::from({literal(u"\\100 = $1というレートです"), literal(u"Note that ￥100 = ＄1.")}), StringArray::from({literal(u"カイロパークはこちら"), literal(u"Enter Kairo Park")}), StringArray::from({literal(u"認証中"), literal(u"Loading")}), StringArray::from({literal(u"名前を入力して下さい"), literal(u"Please enter a name.")}), StringArray::from({literal(u"全角<0>文字以内にして下さい"), literal(u"Enter up to <0> characters.")}), StringArray::from({literal(u"<0>年<1>月<2>週"), literal(u"Yr <0> Mn <1> Wk <2>")}), StringArray::from({literal(u"ロードに失敗しました"), literal(u"Load failed.")}), StringArray::from({literal(u"読み込みに失敗しました。"), literal(u"Could not read data.")}), StringArray::from({literal(u"通信を許可し電波状態を確認して下さい。"), literal(u"Make sure to allow connection to network and check your signal strength.")}), StringArray::from({literal(u"通信を許可し電波状況<br>を確認して下さい"), literal(u"Make sure to allow connection to network and<br>check your signal quality.")}), StringArray::from({literal(u"認証に失敗しました。"), literal(u"Authentication failed.")}), StringArray::from({literal(u"サーバーエラーが発生しました。"), literal(u"A server error has occurred.")}), StringArray::from({literal(u"データエラーが発生しました。<br>アプリを再インストールしてください。"), literal(u"A data error has occurred.<br>Please re-install the application.")}), StringArray::from({literal(u"起動失敗 アプリを再起動して下さい"), literal(u"An error has occurred.<br>Please restart the application.")}), StringArray::from({literal(u"ゲーム開始に失敗しました"), literal(u"Could not start game.")}), StringArray::from({literal(u"中断ﾃﾞｰﾀ<0>"), literal(u"Auto <0>")}), StringArray::from({literal(u"ｾｰﾌﾞﾃﾞｰﾀ<0>"), literal(u"Save <0>")}), StringArray::from({literal(u"全てのﾃﾞｰﾀを送信"), literal(u"Send all data")}), StringArray::from({literal(u"エラー内容を表示する"), literal(u"Show error log")}), StringArray::from({literal(u"全てのデータを送信します"), literal(u"Send all data?")}), StringArray::from({literal(u"中断データ<0> を送信します"), literal(u"Send Autosave Data <0>?")}), StringArray::from({literal(u"セーブデータ<0> を送信します"), literal(u"Send Save Data <0>?")}), StringArray::from({literal(u"送信を完了しました。<br>ご協力ありがとうございます。<br>今後もカイロパークを宜しくお願い致します。"), literal(u"Data sent.<br>Thanks for your cooperation.<br>We hope you'll stick with us!")}), StringArray::from({literal(u"エラーが発生しました<br>リトライしますか？"), literal(u"An error has occurred.<br>Retry?")}), StringArray::from({literal(u"セーブデータの送信"), literal(u"Send Save Data")}), StringArray::from({literal(u"送る内容を選んでください"), literal(u"Choose data to send.")}), StringArray::from({literal(u"データの送信中"), literal(u"Sending data")}), StringArray::from({literal(u"電源キーを押さないでください。"), literal(u"Do not turn the device off.")}), StringArray::from({literal(u"ｴﾗｰ"), literal(u"Error")}), StringArray::from({literal(u"Lite版"), literal(u"Lite Version")}), StringArray::from({literal(u"エラーが発生しました。"), literal(u"An error has occurred.")}), StringArray::from({literal(u"決定"), literal(u"OK")}), StringArray::from({literal(u"アプリの設定画面から「アプリの権限」をすべてオンにして再起動して下さい。"), literal(u"On the app settings screen, turn on all \"App Permissions\" and restart the app.")}), StringArray::from({literal(u"しばらくお待ちください"), literal(u"Please wait...")}), StringArray::from({literal(u"権限：ストレージを許可して起動し直してください。<br>※ゲームの保存に必要となります。"), literal(u"Authority: Please re-boot to allow the storage.<br>You will need to save the game.")}), StringArray::from({literal(u"起動できません。"), literal(u"You can not start.")}), StringArray::from({literal(u"内容を短くして下さい"), literal(u"Please shorten the content")}), StringArray::from({literal(u"Tapjoyの機能をご利用する際には\n追跡型広告制限を解除し、アプリを再起動してください。\n設定アプリ > プライバシー > 広告 > 追跡型広告制限"), literal(u"How to use TapJoy\n- Terminate \"Limit Ad Tracking\" and restart the game.\n* Setting app > Privacy > Advertising > Limit Ad Tracking")})});});
BUILTIN_SOFTLABEL_TABLE_storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.Language.BUILTIN_SOFTLABEL_TABLE",[&](){return StringArray2::from({StringArray::from({literal(u"決定"), literal(u"Confirm")}), StringArray::from({literal(u"終了"), literal(u"Finish")}), StringArray::from({literal(u"戻る"), literal(u"Back")}), StringArray::from({literal(u"はい"), literal(u"Yes")}), StringArray::from({literal(u"いいえ"), literal(u"No")}), StringArray::from({literal(u"確認"), literal(u"Check")}), StringArray::from({literal(u"セーブ"), literal(u"Save")}), StringArray::from({literal(u"メニュー"), literal(u"Menu")}), StringArray::from({literal(u"MAP"), literal(u"Map")}), StringArray::from({literal(u"通常"), literal(u"Normal")}), StringArray::from({literal(u"出発"), literal(u"Depart")}), StringArray::from({literal(u"全て"), literal(u"All")}), StringArray::from({literal(u"完了"), literal(u"Complete")}), StringArray::from({literal(u"HELP"), literal(u"Help")}), StringArray::from({literal(u"自分"), literal(u"Self")}), StringArray::from({literal(u"上位"), literal(u"Top")}), StringArray::from({literal(u"ｻｲﾄ"), literal(u"Site")}), StringArray::from({literal(u"価格"), literal(u"Price")}), StringArray::from({literal(u"人気"), literal(u"Popular")}), StringArray::from({literal(u"開始"), literal(u"Start")}), StringArray::from({literal(u"編集"), literal(u"Edit")}), StringArray::from({literal(u"相性"), literal(u"Compat.")}), StringArray::from({literal(u"回転"), literal(u"Rotate")}), StringArray::from({literal(u"称号"), literal(u"Name")}), StringArray::from({literal(u"次へ"), literal(u"Next")}), StringArray::from({literal(u"報告書"), literal(u"Report")}), StringArray::from({literal(u"輸出"), literal(u"Export")}), StringArray::from({literal(u"自動"), literal(u"Auto")}), StringArray::from({literal(u"ヒント"), literal(u"Hint")}), StringArray::from({literal(u"順番"), literal(u"Order")}), StringArray::from({literal(u"捕捉"), literal(u"Note")}), StringArray::from({literal(u"初期化"), literal(u"Defaults")}), StringArray::from({literal(u"退却"), literal(u"Remove")}), StringArray::from({literal(u"高速"), literal(u"Fast")}), StringArray::from({literal(u"標準"), literal(u"Normal")}), StringArray::from({literal(u"解除"), literal(u"Cancel")}), StringArray::from({literal(u"販売"), literal(u"Sell")}), StringArray::from({literal(u"改名"), literal(u"Rename")}), StringArray::from({literal(u"詳細"), literal(u"Details")}), StringArray::from({literal(u"辞典"), literal(u"Guide")}), StringArray::from({literal(u"反転"), literal(u"Rotate")}), StringArray::from({literal(u"中止"), literal(u"Cancel")}), StringArray::from({literal(u"階層"), literal(u"Floor")}), StringArray::from({literal(u"説明"), literal(u"Info")}), StringArray::from({literal(u"お任せ"), literal(u"Auto")}), StringArray::from({literal(u"切替"), literal(u"Toggle")}), StringArray::from({literal(u"外す"), literal(u"Remove")}), StringArray::from({literal(u"省略"), literal(u"Skip")}), StringArray::from({literal(u"地図"), literal(u"Map")}), StringArray::from({literal(u"ｽﾃｰﾀｽ"), literal(u"Status")}), StringArray::from({literal(u"部隊"), literal(u"Units")}), StringArray::from({literal(u"棄権"), literal(u"Forfeit")}), StringArray::from({literal(u"作戦"), literal(u"Tactics")}), StringArray::from({literal(u"ｿｰﾄ"), literal(u"Sort")}), StringArray::from({literal(u"診断"), literal(u"Diagnose")}), StringArray::from({literal(u"ｾｰﾌﾞ"), literal(u"Save")}), StringArray::from({literal(u"ﾒﾆｭｰ"), literal(u"Menu")}), StringArray::from({literal(u"補足"), literal(u"Supplement")}), StringArray::from({literal(u"設定"), literal(u"Setting")}), StringArray::from({literal(u"下へ"), literal(u"Down")}), StringArray::from({literal(u"上へ"), literal(u"To top")}), StringArray::from({literal(u"清算"), literal(u"Liquidation")}), StringArray::from({literal(u"合成"), literal(u"Synthesis")}), StringArray::from({literal(u"仲間"), literal(u"Fellow")}), StringArray::from({literal(u"追跡"), literal(u"Tracking")}), StringArray::from({literal(u"最大"), literal(u"Maximum")}), StringArray::from({literal(u"褒美"), literal(u"Reward")}), StringArray::from({literal(u"船へ"), literal(u"To ship")}), StringArray::from({literal(u"牢屋"), literal(u"Jail")}), StringArray::from({literal(u"ｼﾞｮﾌﾞ"), literal(u"Job")}), StringArray::from({literal(u"ﾊﾟｽﾜｰﾄﾞ"), literal(u"Password")}), StringArray::from({literal(u"GET!!"), literal(u"GET !!")}), StringArray::from({literal(u"ｵｽｽﾒ"), literal(u"Recommended")}), StringArray::from({literal(u"閉じる"), literal(u"Close up")}), StringArray::from({literal(u"行動"), literal(u"Action")}), StringArray::from({literal(u"倉庫"), literal(u"Warehouse")}), StringArray::from({literal(u"効果"), literal(u"Effect")}), StringArray::from({literal(u"同意"), literal(u"Consent")}), StringArray::from({literal(u"規約"), literal(u"Agreement")}), StringArray::from({literal(u"ｼｬｯﾌﾙ"), literal(u"Shuffle")}), StringArray::from({literal(u"停止"), literal(u"Stop")}), StringArray::from({literal(u"履歴"), literal(u"History")}), StringArray::from({literal(u"投入"), literal(u"Input")}), StringArray::from({literal(u"完成"), literal(u"Completion")}), StringArray::from({literal(u"解雇"), literal(u"Dismissal")}), StringArray::from({literal(u"ｽｷﾙ"), literal(u"Skill")}), StringArray::from({literal(u"ﾊﾟﾝﾌﾟｷﾝ"), literal(u"Pumpkin")}), StringArray::from({literal(u"撤去"), literal(u"Removal")}), StringArray::from({literal(u"購入"), literal(u"Purchase")}), StringArray::from({literal(u"売却"), literal(u"Sale")}), StringArray::from({literal(u"LVUP"), literal(u"LVUP")}), StringArray::from({literal(u"ｽﾞｰﾑ"), literal(u"Zoom")}), StringArray::from({literal(u"情報"), literal(u"Information")})});});

});}

void ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_72d9658ed61145d6_slow(flag);}

StringArray2& BUILTIN_SOFTLABEL_TABLE(){Language::ensure_initialized();return BUILTIN_SOFTLABEL_TABLE_storage;}

StringArray2& BUILTIN_TRANSLATE_TABLE(){Language::ensure_initialized();return BUILTIN_TRANSLATE_TABLE_storage;}

pls::cs::Array<StringArray2>& builtInTextTable_(){Language::ensure_initialized();return builtInTextTable__storage;}

StringArray& FOLDERS(){Language::ensure_initialized();return FOLDERS_storage;}

pls::cs::Int32& forceResetType_(){Language::ensure_initialized();return forceResetType__storage;}

pls::cs::String& KAIRO_ENGLISH(){Language::ensure_initialized();return KAIRO_ENGLISH_storage;}

pls::cs::String& KAIRO_JAPANESE(){Language::ensure_initialized();return KAIRO_JAPANESE_storage;}

StringArray& langPackFolders_(){Language::ensure_initialized();return langPackFolders__storage;}

pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<Language_LangPackFormat>>& langPackFormats_(){Language::ensure_initialized();return langPackFormats__storage;}

pls::cs::Dictionary<pls::cs::String,pls::cs::Array<pls::cs::List<Language_RecordPosition>>>& langPackLines_(){Language::ensure_initialized();return langPackLines__storage;}

pls::cs::Array<pls::cs::Ref<Language_LangPackRecord>>& langPackRecords_(){Language::ensure_initialized();return langPackRecords__storage;}

pls::cs::Int32& language_(){Language::ensure_initialized();return language__storage;}

pls::cs::Int32& priorityLanguage_(){Language::ensure_initialized();return priorityLanguage__storage;}

StringArray2& softlabelTable_(){Language::ensure_initialized();return softlabelTable__storage;}

pls::cs::Array<StringArray2>& textTable_(){Language::ensure_initialized();return textTable__storage;}

// M:kairo.unity.util.Language.Get
pls::cs::Int32 Get() {
Language::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.Get",kairo);
{
common::cfg::Config::ensure_initialized();

if (Language::priorityLanguage_() != -1) {
return Language::priorityLanguage_();
}
if (Language::language_() != -1) {
return Language::language_();
}
if (common::cfg::Config::LANGUAGE() == -1) {
Language::language_() = Language::Get(java::util::JLocale::GetDefault());
} else {
Language::language_() = common::cfg::Config::LANGUAGE();
}
return Language::language_();

}

}

// M:kairo.unity.util.Language.Get(java.util.JLocale)
pls::cs::Int32 Get(pls::cs::Ref<java::util::JLocale> locale) {
Language::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.Get(java.util.JLocale)",kairo);
{
java::util::JLocale::ensure_initialized();

if (Language::priorityLanguage_() != -1) {
return Language::priorityLanguage_();
}
if (require(java::util::JLocale::JAPAN())->Equals(pls::cs::box(locale)) || require(java::util::JLocale::JAPANESE())->Equals(pls::cs::box(locale))) {
return 0;
}
return 1;

}

}

// M:kairo.unity.util.Language.Japanese
bool Japanese() {
Language::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.Japanese",kairo);
{
return Language::Get() == 0;
}

}

// M:kairo.unity.util.Language.MakeTextTable(System.String[][])
pls::cs::Array<StringArray2> MakeTextTable(StringArray2 textTable) {
Language::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.MakeTextTable(System.String[][])",kairo);
{
StringArray2 array = textTable;
{ auto cs_each26 = array; for (std::int32_t cs_i26=0; cs_i26<cs_each26.length(); ++cs_i26) { StringArray array2 = cs_each26.get_Item(cs_i26); {
pls::cs::String text = array2[0];
pls::cs::Ref<pls::cs::RegexMatchCollection> matchCollection = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::RuntimeRegex::Matches(text, literal(u"<co=([0-9A-F]+)>"));});
if (require(matchCollection)->get_Count() > 0) {
pls::cs::Ref<pls::cs::StringBuilder> stringBuilder = ([&]() { return pls::cs::make_ref<pls::cs::StringBuilder>(); }());
for (pls::cs::Int32 j = 0; j < require(matchCollection)->get_Count(); ++j) {
auto cs_receiver_17=matchCollection;auto cs_index_17=j;
pls::cs::Ref<pls::cs::RegexMatch> match = require(cs_receiver_17)->get_Item(cs_index_17);
if (j == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = stringBuilder; auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return substring2(text, 0, require(match)->get_Index());}); return require(cs_receiver)->Append(cs_arg0); }());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = stringBuilder; auto cs_arg0 = pls::cs::String::concat(pls::cs::String::concat(literal(u"<co="), pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_to_lower(require(([&](){auto cs_receiver=require(match)->get_Groups();auto cs_index=1;return require(cs_receiver)->get_Item(cs_index);}()))->get_Value());})), literal(u">")); return require(cs_receiver)->Append(cs_arg0); }());});
pls::cs::Int32 num = text.length();
if (j + 1 < require(matchCollection)->get_Count()) {
num = require(([&](){auto cs_receiver=matchCollection;auto cs_index=(j + 1);return require(cs_receiver)->get_Item(cs_index);}()))->get_Index();
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = stringBuilder; auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = text; auto cs_arg1 = ([&]() -> pls::cs::Int32 { auto cs_left = pls::cs::Int32(require(match)->get_Index()); auto cs_right = require(match)->get_Length(); return cs_left + cs_right; }()); auto cs_arg2 = num - (([&]() -> pls::cs::Int32 { auto cs_left = pls::cs::Int32(require(match)->get_Index()); auto cs_right = require(match)->get_Length(); return cs_left + cs_right; }())); return substring2(cs_arg0,cs_arg1,cs_arg2); }());}); return require(cs_receiver)->Append(cs_arg0); }());});
}
text = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(stringBuilder)->ToString();});
}
matchCollection = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::RuntimeRegex::Matches(text, literal(u"<co=([0-9\\s]+),([0-9\\s]+),([0-9\\s]+)>"));});
if (require(matchCollection)->get_Count() > 0) {
pls::cs::Ref<pls::cs::StringBuilder> stringBuilder2 = ([&]() { return pls::cs::make_ref<pls::cs::StringBuilder>(); }());
for (pls::cs::Int32 k = 0; k < require(matchCollection)->get_Count(); ++k) {
auto cs_receiver_18=matchCollection;auto cs_index_18=k;
pls::cs::Ref<pls::cs::RegexMatch> match2 = require(cs_receiver_18)->get_Item(cs_index_18);
if (k == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = stringBuilder2; auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return substring2(text, 0, require(match2)->get_Index());}); return require(cs_receiver)->Append(cs_arg0); }());});
}
auto cs_hole0_19=pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::int32_parse(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_trim(require(([&](){auto cs_receiver_19=require(match2)->get_Groups();auto cs_index_19=1;return require(cs_receiver_19)->get_Item(cs_index_19);}()))->get_Value());}));});auto cs_hole1_19=pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::int32_parse(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_trim(require(([&](){auto cs_receiver_19=require(match2)->get_Groups();auto cs_index_19=2;return require(cs_receiver_19)->get_Item(cs_index_19);}()))->get_Value());}));});auto cs_hole2_19=pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::int32_parse(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_trim(require(([&](){auto cs_receiver_19=require(match2)->get_Groups();auto cs_index_19=3;return require(cs_receiver_19)->get_Item(cs_index_19);}()))->get_Value());}));});pls::cs::String cs_text_19(u"");cs_text_19=pls::cs::String::concat(cs_text_19,pls::cs::format_i32_hex(cs_hole0_19,2,false));cs_text_19=pls::cs::String::concat(cs_text_19,pls::cs::format_i32_hex(cs_hole1_19,2,false));cs_text_19=pls::cs::String::concat(cs_text_19,pls::cs::format_i32_hex(cs_hole2_19,2,false));
pls::cs::String text2 = cs_text_19;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(stringBuilder2)->Append(pls::cs::String::concat(pls::cs::String::concat(literal(u"<co="), text2), literal(u">")));});
pls::cs::Int32 num2 = text.length();
if (k + 1 < require(matchCollection)->get_Count()) {
num2 = require(([&](){auto cs_receiver=matchCollection;auto cs_index=(k + 1);return require(cs_receiver)->get_Item(cs_index);}()))->get_Index();
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = stringBuilder2; auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = text; auto cs_arg1 = ([&]() -> pls::cs::Int32 { auto cs_left = pls::cs::Int32(require(match2)->get_Index()); auto cs_right = require(match2)->get_Length(); return cs_left + cs_right; }()); auto cs_arg2 = num2 - (([&]() -> pls::cs::Int32 { auto cs_left = pls::cs::Int32(require(match2)->get_Index()); auto cs_right = require(match2)->get_Length(); return cs_left + cs_right; }())); return substring2(cs_arg0,cs_arg1,cs_arg2); }());}); return require(cs_receiver)->Append(cs_arg0); }());});
}
text = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(stringBuilder2)->ToString();});
}
array2[0] = text;
} } }
pls::cs::List<StringArray> list = pls::cs::List<StringArray>::make();
array = textTable;
{ auto cs_each27 = array; for (std::int32_t cs_i27=0; cs_i27<cs_each27.length(); ++cs_i27) { StringArray array3 = cs_each27.get_Item(cs_i27); {
for (pls::cs::Int32 l = 0; l < array3.length(); ++l) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_starts_with(array3[l], literal(u"<po="));})) {
pls::cs::Int32 num3 = pls::diagnostic::api_call([&]() -> decltype(auto) {return index_char1(array3[l], u'>');});
if (num3 != -1) {
array3[l] = pls::diagnostic::api_call([&]() -> decltype(auto) {return substring1(array3[l], num3 + 1);});
}
if (l != 0) {
array3[l] = Language::AdjustMacroScope(array3[l]);
}
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return list.Add(array3);});
pls::cs::String text3 = array3[0];
pls::cs::String src = text3;
src = Language::AdjustMacroScope(src);
pls::cs::Ref<pls::cs::RegexMatchCollection> matchCollection2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::RuntimeRegex::Matches(src, literal(u"<co=([0-9a-f]+)>"));});
bool flag = require(matchCollection2)->get_Count() > 0;
if (require(matchCollection2)->get_Count() == 0) {
matchCollection2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::RuntimeRegex::Matches(src, literal(u"<co=([0-9\\s]+),([0-9\\s]+),([0-9\\s]+)>"));});
}
if (require(matchCollection2)->get_Count() > 0) {
pls::cs::Ref<pls::cs::StringBuilder> stringBuilder3 = ([&]() { return pls::cs::make_ref<pls::cs::StringBuilder>(); }());
for (pls::cs::Int32 m = 0; m < require(matchCollection2)->get_Count(); ++m) {
auto cs_receiver_20=matchCollection2;auto cs_index_20=m;
pls::cs::Ref<pls::cs::RegexMatch> match3 = require(cs_receiver_20)->get_Item(cs_index_20);
if (m == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = stringBuilder3; auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return substring2(src, 0, require(match3)->get_Index());}); return require(cs_receiver)->Append(cs_arg0); }());});
}
pls::cs::String text4 = literal(u"");
if (flag) {
text4 = (([&]() { auto cs_left = pls::cs::String::concat(([&]() { auto cs_left = pls::cs::String::concat(integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_value=pls::diagnostic::api_call([&]() -> decltype(auto) {return substring2(require(([&](){auto cs_receiver=require(match3)->get_Groups();auto cs_index=1;return require(cs_receiver)->get_Item(cs_index);}()))->get_Value(), 0, 2);});return pls::cs::int32_parse_hex_number(cs_value,true);}());})), literal(u",")); auto cs_right = integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_value=pls::diagnostic::api_call([&]() -> decltype(auto) {return substring2(require(([&](){auto cs_receiver=require(match3)->get_Groups();auto cs_index=1;return require(cs_receiver)->get_Item(cs_index);}()))->get_Value(), 2, 2);});return pls::cs::int32_parse_hex_number(cs_value,true);}());})); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u",")); auto cs_right = integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_value=pls::diagnostic::api_call([&]() -> decltype(auto) {return substring2(require(([&](){auto cs_receiver=require(match3)->get_Groups();auto cs_index=1;return require(cs_receiver)->get_Item(cs_index);}()))->get_Value(), 4, 2);});return pls::cs::int32_parse_hex_number(cs_value,true);}());})); return pls::cs::String::concat(cs_left,cs_right); }()));
} else {
text4 = ([&](){auto cs_hole0=pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::int32_parse(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_trim(require(([&](){auto cs_receiver=require(match3)->get_Groups();auto cs_index=1;return require(cs_receiver)->get_Item(cs_index);}()))->get_Value());}));});auto cs_hole1=pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::int32_parse(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_trim(require(([&](){auto cs_receiver=require(match3)->get_Groups();auto cs_index=2;return require(cs_receiver)->get_Item(cs_index);}()))->get_Value());}));});auto cs_hole2=pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::int32_parse(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_trim(require(([&](){auto cs_receiver=require(match3)->get_Groups();auto cs_index=3;return require(cs_receiver)->get_Item(cs_index);}()))->get_Value());}));});pls::cs::String cs_text(u"");cs_text=pls::cs::String::concat(cs_text,pls::cs::format_i32_hex(cs_hole0,2,true));cs_text=pls::cs::String::concat(cs_text,pls::cs::format_i32_hex(cs_hole1,2,true));cs_text=pls::cs::String::concat(cs_text,pls::cs::format_i32_hex(cs_hole2,2,true));return cs_text;}());
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(stringBuilder3)->Append(pls::cs::String::concat(pls::cs::String::concat(literal(u"<co="), text4), literal(u">")));});
pls::cs::Int32 num4 = src.length();
if (m + 1 < require(matchCollection2)->get_Count()) {
num4 = require(([&](){auto cs_receiver=matchCollection2;auto cs_index=(m + 1);return require(cs_receiver)->get_Item(cs_index);}()))->get_Index();
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = stringBuilder3; auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = src; auto cs_arg1 = ([&]() -> pls::cs::Int32 { auto cs_left = pls::cs::Int32(require(match3)->get_Index()); auto cs_right = require(match3)->get_Length(); return cs_left + cs_right; }()); auto cs_arg2 = num4 - (([&]() -> pls::cs::Int32 { auto cs_left = pls::cs::Int32(require(match3)->get_Index()); auto cs_right = require(match3)->get_Length(); return cs_left + cs_right; }())); return substring2(cs_arg0,cs_arg1,cs_arg2); }());}); return require(cs_receiver)->Append(cs_arg0); }());});
}
src = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(stringBuilder3)->ToString();});
}
if (src != text3) {
StringArray array4 = StringArray::make(array3.length());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() { auto cs_source = array3; auto cs_dest = array4; auto cs_count = array3.length(); StringArray::copy(cs_source,0,cs_dest,0,cs_count); }());});
array4[0] = src;
pls::diagnostic::api_call([&]() -> decltype(auto) {return list.Add(array4);});
}
text3 = src;
src = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_replace(src, literal(u"～"), literal(u"〜"));});
if (src != text3) {
StringArray array5 = StringArray::make(array3.length());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() { auto cs_source = array3; auto cs_dest = array5; auto cs_count = array3.length(); StringArray::copy(cs_source,0,cs_dest,0,cs_count); }());});
array5[0] = src;
pls::diagnostic::api_call([&]() -> decltype(auto) {return list.Add(array5);});
}
} } }
pls::cs::Int32 num5 = 0;
for (pls::cs::Int32 n = 0; n < list.get_Count(); ++n) {
if (num5 < java::lang::StringEx::Length(list.get_Item(n)[0])) {
num5 = java::lang::StringEx::Length(list.get_Item(n)[0]);
}
}
++num5;
pls::cs::Array<pls::cs::Ref<java::util::Vector>> array6 = pls::cs::Array<pls::cs::Ref<java::util::Vector>>::make(num5);
for (pls::cs::Int32 num6 = 0; num6 < list.get_Count(); ++num6) {
pls::cs::Int32 num7 = java::lang::StringEx::Length(list.get_Item(num6)[0]);
if ([&]() { pls::cs::Ref<java::util::Vector_2<pls::cs::Ref<pls::cs::Object>>> cs_left = array6.get_Item(num7); pls::cs::Ref<java::util::Vector> cs_right = pls::cs::Ref<java::util::Vector>{}; return java::util::Vector_2_op_Equality(cs_left,cs_right); }()) {
array6.set_Item(num7, java::util::Vector::create());
}
{ auto cs_receiver = array6.get_Item(num7); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(list.get_Item(num6)); java::util::Vector_2_Add(require(cs_receiver), cs_arg0); }
if (!Language::Japanese()) {
{ auto cs_target = list.get_Item(num6); auto cs_index = 0; auto cs_value = StringUtil::Replace(list.get_Item(num6)[0], literal(u"\\"), literal(u"¥"));cs_target.set_Item(cs_index,cs_value);}
{ auto cs_target = list.get_Item(num6); auto cs_index = 1; auto cs_value = StringUtil::Replace(list.get_Item(num6)[1], literal(u"\\"), literal(u"¥"));cs_target.set_Item(cs_index,cs_value);}
}
}
pls::cs::Array<StringArray2> array7 = pls::cs::Array<StringArray2>::make(array6.length());
for (pls::cs::Int32 num8 = 0; num8 < array7.length(); ++num8) {
if (!(([&]() { pls::cs::Ref<java::util::Vector_2<pls::cs::Ref<pls::cs::Object>>> cs_left = array6.get_Item(num8); pls::cs::Ref<java::util::Vector> cs_right = pls::cs::Ref<java::util::Vector>{}; return java::util::Vector_2_op_Equality(cs_left,cs_right); }()))) {
array7[num8] = StringArray2::make(java::util::Vector_2_Size(require(array6.get_Item(num8))));
for (pls::cs::Int32 num9 = 0; num9 < array7[num8].length(); ++num9) {
{ auto cs_target = array7[num8]; auto cs_index = num9; auto cs_value = pls::cs::unbox<StringArray>(java::util::Vector_2_ElementAt(require(array6.get_Item(num8)), num9));cs_target.set_Item(cs_index,cs_value);}
}
}
}
return array7;
}

}

// M:kairo.unity.util.Language.AdjustMacroScope(System.String)
pls::cs::String AdjustMacroScope(pls::cs::String src) {
Language::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.AdjustMacroScope(System.String)",kairo);
{
pls::cs::List<pls::cs::String> list = pls::cs::List<pls::cs::String>{};
pls::cs::Int32 startIndex = 0;
while (true) {
startIndex = pls::diagnostic::api_call([&]() -> decltype(auto) {return index_char2(src, u'<', startIndex);});
if (startIndex == -1) {
break;
}
if (java::lang::StringEx::StartsWith(src, literal(u"<co="), startIndex) || java::lang::StringEx::StartsWith(src, literal(u"<si="), startIndex) || java::lang::StringEx::StartsWith(src, literal(u"<st="), startIndex)) {
if (is_null(list)) {
list = pls::cs::List<pls::cs::String>::make();
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = list; auto cs_arg0 = pls::cs::String::concat(pls::cs::String::concat(literal(u"</"), pls::diagnostic::api_call([&]() -> decltype(auto) {return substring2(src, startIndex + 1, 2);})), literal(u">")); cs_receiver.Add(cs_arg0); }());});
} else if ((java::lang::StringEx::StartsWith(src, literal(u"</co>"), startIndex) || java::lang::StringEx::StartsWith(src, literal(u"</si>"), startIndex) || java::lang::StringEx::StartsWith(src, literal(u"</st>"), startIndex)) && !is_null(list)) {
pls::cs::String text = pls::diagnostic::api_call([&]() -> decltype(auto) {return substring2(src, startIndex, 5);});
for (pls::cs::Int32 num = pls::cs::Int32(list.get_Count()) - 1; num >= 0; --num) {
if (list.get_Item(num) == text) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return list.RemoveAt(num);});
break;
}
}
}
++startIndex;
}
if (!is_null(list) && (list.get_Count() > 0)) {
pls::cs::String text2 = literal(u"");
for (pls::cs::Int32 i = 0; i < list.get_Count(); ++i) {
text2 = pls::cs::String::concat(text2,list.get_Item(i));
}
src = pls::cs::String::concat(src,text2);
}
return src;
}

}

// M:kairo.unity.util.Language.TranslateSoftLabel(System.String)
pls::cs::String TranslateSoftLabel(pls::cs::String softlabel) {
Language::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.TranslateSoftLabel(System.String)",kairo);
{
if (is_null(softlabel) || (softlabel.length() > 10)) {
return softlabel;
}
pls::cs::String softLabelInput = softlabel;
if ([&]() { auto cs_left = pls::cs::box(Language::softlabelTable_()); auto cs_right = pls::cs::box(StringArray2{}); return cs_left != cs_right; }()) {
for (pls::cs::Int32 i = 0; i < Language::softlabelTable_().length(); ++i) {
if (([&]() -> bool { auto cs_left = softLabelInput.length(); auto cs_right = Language::softlabelTable_()[i][0].length(); return cs_left == cs_right; }()) && pls::diagnostic::api_call([&]() -> decltype(auto) {return string_equals(softLabelInput, Language::softlabelTable_()[i][0]);})) {
return Language::softlabelTable_()[i][1];
}
}
}
pls::cs::Int32 num = Language::Get();
if (num != 0) {
try {
for (pls::cs::Int32 j = 0; j < Language::BUILTIN_SOFTLABEL_TABLE().length(); ++j) {
if (([&]() -> bool { auto cs_left = softLabelInput.length(); auto cs_right = Language::BUILTIN_SOFTLABEL_TABLE()[j][0].length(); return cs_left == cs_right; }()) && pls::diagnostic::api_call([&]() -> decltype(auto) {return string_equals(softLabelInput, Language::BUILTIN_SOFTLABEL_TABLE()[j][0]);})) {
if (num >= Language::BUILTIN_SOFTLABEL_TABLE()[j].length()) {
num = 1;
}
if (([&]() { auto cs_left = pls::cs::box(Language::langPackRecords_()); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<Language_LangPackRecord>>{}); return cs_left != cs_right; }()) && (Language::BUILTIN_SOFTLABEL_TABLE()[j].length() >= 3)) {
num = 2;
}
return Language::BUILTIN_SOFTLABEL_TABLE()[j][num];
}
}
} catch(const pls::cs::Exception& cs_caught_28) {pls::cs::capture_exception(cs_caught_28);
{

}}
}
return softlabel;
}

}

// M:kairo.unity.util.Language.TranslateText(System.String,System.Boolean)
pls::cs::String TranslateText(pls::cs::String text,bool tabCheck) {
Language::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.TranslateText(System.String,System.Boolean)",kairo);
{
text = StringUtil::Replace(text, literal(u"\\"), literal(u"¥"));
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return index_char1(text, char16_t(8));}) != -1) {
text = StringUtil::Replace(text, literal(u"\010"), literal(u""));
return text;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_index_of(text, literal(u"<"));}) != -1) {
pls::cs::Ref<pls::cs::RegexMatchCollection> matchCollection = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::RuntimeRegex::Matches(text, literal(u"<co=[0-9A-Z]+>"));});
if (require(matchCollection)->get_Count() > 0) {
pls::cs::Ref<pls::cs::StringBuilder> stringBuilder = ([&]() { return pls::cs::make_ref<pls::cs::StringBuilder>(); }());
for (pls::cs::Int32 i = 0; i < require(matchCollection)->get_Count(); ++i) {
auto cs_receiver_16=matchCollection;auto cs_index_16=i;
pls::cs::Ref<pls::cs::RegexMatch> match = require(cs_receiver_16)->get_Item(cs_index_16);
if (i == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = stringBuilder; auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return substring2(text, 0, require(match)->get_Index());}); return require(cs_receiver)->Append(cs_arg0); }());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = stringBuilder; auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_to_lower(require(match)->get_Value());}); return require(cs_receiver)->Append(cs_arg0); }());});
pls::cs::Int32 num = text.length();
if (i + 1 < require(matchCollection)->get_Count()) {
num = require(([&](){auto cs_receiver=matchCollection;auto cs_index=(i + 1);return require(cs_receiver)->get_Item(cs_index);}()))->get_Index();
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = stringBuilder; auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = text; auto cs_arg1 = ([&]() -> pls::cs::Int32 { auto cs_left = pls::cs::Int32(require(match)->get_Index()); auto cs_right = require(match)->get_Length(); return cs_left + cs_right; }()); auto cs_arg2 = num - (([&]() -> pls::cs::Int32 { auto cs_left = pls::cs::Int32(require(match)->get_Index()); auto cs_right = require(match)->get_Length(); return cs_left + cs_right; }())); return substring2(cs_arg0,cs_arg1,cs_arg2); }());}); return require(cs_receiver)->Append(cs_arg0); }());});
}
text = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(stringBuilder)->ToString();});
}
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return contains_string(text, literal(u"\t"));})) {
pls::cs::String text2 = StringUtil::Replace(text, literal(u"\t"), literal(u"¥t"));
pls::cs::String comparisonSource = text2;
pls::cs::String text3 = Language::_translateText(comparisonSource);
if (comparisonSource != text3) {
return StringUtil::Replace(text3, literal(u"¥t"), literal(u"\t"));
}
pls::cs::String text4 = StringUtil::Replace(text2, literal(u"\n"), literal(u"<br>"));
text3 = Language::_translateText(text4);
if (text4 != text3) {
return StringUtil::Replace(text3, literal(u"¥t"), literal(u"\t"));
}
if (tabCheck) {
StringArray array = StringUtil::Split(text, literal(u"\t"));
text = literal(u"");
for (pls::cs::Int32 j = 0; j < array.length(); ++j) {
if (j != 0) {
text = pls::cs::String::concat(text,literal(u"\t"));
}
text = pls::cs::String::concat(text,Language::_translateText(array[j]));
}
return text;
}
return text;
}
{
pls::cs::String result = text;
pls::cs::String text5 = Language::_translateText(text);
if (text5 != text) {
return text5;
}
text = StringUtil::Replace(text, literal(u"\r\n"), literal(u"<br>"));
text = StringUtil::Replace(text, literal(u"\n"), literal(u"<br>"));
text5 = Language::_translateText(text);
if (text5 != text) {
return text5;
}
return result;
}
}

}

// M:kairo.unity.util.Language._translateText(System.String)
pls::cs::String _translateText(pls::cs::String text) {
Language::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language._translateText(System.String)",kairo);
{
pls::cs::String text2 = text;
pls::cs::String text3 = pls::cs::String{};
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_starts_with(text2, literal(u"<po="));})) {
pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return index_char1(text2, u'>');});
if (num != -1) {
text3 = pls::diagnostic::api_call([&]() -> decltype(auto) {return substring2(text2, 0, num + 1);});
text2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return substring1(text2, num + 1);});
}
}
pls::cs::Int32 num2 = java::lang::StringEx::Length(text2);
if (([&]() { auto cs_left = pls::cs::box(Language::textTable_()); auto cs_right = pls::cs::box(pls::cs::Array<StringArray2>{}); return cs_left != cs_right; }()) && num2 < Language::textTable_().length() && ([&]() { auto cs_left = pls::cs::box(Language::textTable_()[num2]); auto cs_right = pls::cs::box(StringArray2{}); return cs_left != cs_right; }())) {
for (pls::cs::Int32 i = 0; i < Language::textTable_()[num2].length(); ++i) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return string_equals(text2, Language::textTable_()[num2][i][0]);})) {
if (!is_null(text3)) {
return pls::cs::String::concat(text3, Language::textTable_()[num2][i][1]);
}
return Language::textTable_()[num2][i][1];
}
}
}
pls::cs::Int32 num3 = Language::Get();
if (num3 != 0) {
try {
if ([&]() { auto cs_left = pls::cs::box(Language::builtInTextTable_()); auto cs_right = pls::cs::box(pls::cs::Array<StringArray2>{}); return cs_left == cs_right; }()) {
for (pls::cs::Int32 j = 0; j < Language::BUILTIN_TRANSLATE_TABLE().length(); ++j) {
for (pls::cs::Int32 k = 0; k < Language::BUILTIN_TRANSLATE_TABLE()[j].length(); ++k) {
{ auto cs_target = Language::BUILTIN_TRANSLATE_TABLE()[j]; auto cs_index = k; auto cs_value = StringUtil::Replace(Language::BUILTIN_TRANSLATE_TABLE()[j][k], literal(u"\n"), literal(u"<br>"));cs_target.set_Item(cs_index,cs_value);}
}
}
Language::builtInTextTable_() = Language::MakeTextTable(Language::BUILTIN_TRANSLATE_TABLE());
}
if (([&]() { auto cs_left = pls::cs::box(Language::builtInTextTable_()); auto cs_right = pls::cs::box(pls::cs::Array<StringArray2>{}); return cs_left != cs_right; }()) && num2 < Language::builtInTextTable_().length() && ([&]() { auto cs_left = pls::cs::box(Language::builtInTextTable_()[num2]); auto cs_right = pls::cs::box(StringArray2{}); return cs_left != cs_right; }())) {
for (pls::cs::Int32 l = 0; l < Language::builtInTextTable_()[num2].length(); ++l) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return string_equals(text2, Language::builtInTextTable_()[num2][l][0]);})) {
if (num3 >= Language::builtInTextTable_()[num2][l].length()) {
num3 = 1;
}
if (([&]() { auto cs_left = pls::cs::box(Language::langPackRecords_()); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<Language_LangPackRecord>>{}); return cs_left != cs_right; }()) && (Language::builtInTextTable_()[num2][l].length() >= 3)) {
num3 = 2;
}
return (is_null(text3)) ? Language::builtInTextTable_()[num2][l][num3] : (pls::cs::String::concat(text3, Language::builtInTextTable_()[num2][l][num3]));
}
}
}
} catch(const pls::cs::Exception& cs_caught_25) {pls::cs::capture_exception(cs_caught_25);
{

}}
}
text2 = Language::TranslateSoftLabel(text2);
if (!is_null(text3)) {
return pls::cs::String::concat(text3, text2);
}
return text2;
}

}

// M:kairo.unity.util.Language.GetFolder
pls::cs::String GetFolder() {
Language::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.GetFolder",kairo);
{
{auto cs_array_10 = Language::FOLDERS(); auto cs_index_10 = Language::Get();
return cs_array_10.get_Item(cs_index_10);}
}

}

// M:kairo.unity.util.Language.GetLanguagePackFolders
StringArray GetLanguagePackFolders() {
Language::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.GetLanguagePackFolders",kairo);
{
return Language::langPackFolders_();
}

}

// M:kairo.unity.util.Language.ConvertLanguagePack(System.String,System.Byte[])
ByteArray ConvertLanguagePack(pls::cs::String file,ByteArray data) {
Language::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.ConvertLanguagePack(System.String,System.Byte[])",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(Language::langPackRecords_()); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<Language_LangPackRecord>>{}); return cs_left == cs_right; }()) || !pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_ends_with(file, literal(u".txt"));})) {
return data;
}
file = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_to_lower(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::RuntimePath::GetFileNameWithoutExtension(file);}));});
pls::cs::Array<pls::cs::List<Language_RecordPosition>> value = pls::cs::Array<pls::cs::List<Language_RecordPosition>>{};
if (!pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_dictionary=Language::langPackLines_();auto cs_key=file;return cs_dictionary.TryGetValue(cs_key,value);}());})) {
return data;
}
pls::cs::Ref<Language_LangPackFormat> value2 = pls::cs::Ref<Language_LangPackFormat>{};
if (!pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_dictionary=Language::langPackFormats_();auto cs_key=file;return cs_dictionary.TryGetValue(cs_key,value2);}());})) {
return data;
}
pls::cs::String text = StringUtil::GetString(data);
if (is_null(text)) {
return data;
}
StringArray array = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=text;auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=require(value2)->LineCode;return pls::cs::string_split(cs_text,cs_separators);}());});
text = pls::cs::String{};
pls::cs::Ref<pls::cs::StringBuilder> stringBuilder = ([&]() { return pls::cs::make_ref<pls::cs::StringBuilder>(); }());
for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
if (i != 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(stringBuilder)->Append(require(value2)->LineCode);});
}
if (i >= value.length() || is_null(value.get_Item(i)) || (value.get_Item(i).get_Count() <= 0)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = stringBuilder; auto cs_arg0 = array[i]; return require(cs_receiver)->Append(cs_arg0); }());});
array[i] = pls::cs::String{};
continue;
}
auto cs_values_13=pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text_13=array[i];auto cs_separators_13=pls::cs::Array<char16_t>::make(1);cs_separators_13.at(0)=require(value2)->SegCode;return pls::cs::string_split(cs_text_13,cs_separators_13);}());});if(cs_values_13.is_null())throw pls::cs::ArgumentNullException();auto cs_list_13=pls::cs::List<pls::cs::String>::make(cs_values_13.length());cs_list_13.AddRange(cs_values_13);
pls::cs::List<pls::cs::String> list = cs_list_13;
array[i] = pls::cs::String{};
for (pls::cs::Int32 num = pls::cs::Int32(value.get_Item(i).get_Count()) - 1; num >= 0; --num) {
Language_RecordPosition recordPosition = value.get_Item(i).get_Item(num);
if (require(recordPosition.Record)->To.get_Count() > 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = list; auto cs_arg0 = recordPosition.Segment; auto cs_arg1 = require(recordPosition.Record)->From.get_Count(); cs_receiver.RemoveRange(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_list=list;auto cs_arg0=recordPosition.Segment;auto cs_arg1=require(recordPosition.Record)->To;cs_list.InsertRange(cs_arg0,cs_arg1);}());});
}
}
for (pls::cs::Int32 j = 0; j < list.get_Count(); ++j) {
if (j != 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(stringBuilder)->Append(require(value2)->SegCode);});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = stringBuilder; auto cs_arg0 = list.get_Item(j); return require(cs_receiver)->Append(cs_arg0); }());});
}
}
return java::lang::StringEx::GetBytes(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(stringBuilder)->ToString();}));
}

}
} // namespace kairo::unity::util::Language
}
