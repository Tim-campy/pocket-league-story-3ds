# Fronteira semântica do port — Fase 0

Referência somente leitura: tag `v1.0.0-csharp-reconstruction`, commit `c7d097a847ca1f1a8e5fb7141ff11d338f5915c4`. Roslyn moderno percorreu **97 fontes** do Assembly-CSharp, **448825 nós AST**, com **278293 consultas de símbolos** e **278256 consultas de tipos**. Os binários originais foram lidos externamente como metadados; não foram copiados para o port nem executados.

**775 símbolos KairoLibrary**, em **98 tipos**. Erros semânticos: **0**; locais com candidatos sem resolução única: **0**.

A unidade de contagem é o símbolo original: NamedType, método/construtor, propriedade, campo ou evento. Instanciações genéricas são normalizadas à definição; os argumentos são inventariados como tipos; acessores são associados à propriedade/evento. Referências constantes são incluídas antes de qualquer inlining. Tipos inferidos, convertidos, argumentos genéricos e tipos que declaram os membros também contam. Operações ligadas incluem conversões e chamadas de construtores base implícitas. Ocorrências do mesmo símbolo no mesmo span são deduplicadas; os três nós de uma invocação contam como uma chamada. Chamadores são métodos/membros do fonte, não uma suposição de caminhos executados.

O inventário é o contrato direto; dependências transitivas da implementação Kairo não são contadas como chamadas adicionais do jogo. Classificações e propostas são de planejamento, não estados de implementação. Todos os estados foram gerados como `todo`. Nenhum tradutor ou backend foi escrito.

## Números por categoria

| Categoria | Símbolos |
|---|---:|
| portavel | 254 |
| reimplementar | 452 |
| remover | 69 |

## Números por área

| Área | Símbolos | Tipos | Tratamentos |
|---|---:|---:|---|
| anuncios | 9 | 4 | remover: 9 |
| armazenamento | 50 | 6 | reimplementar: 50 |
| cobranca | 4 | 1 | remover: 4 |
| colecoes_streams | 160 | 24 | portavel: 160 |
| desenho | 90 | 10 | portavel: 2, reimplementar: 88 |
| entrada | 47 | 5 | reimplementar: 47 |
| fontes_texto | 50 | 5 | reimplementar: 50 |
| formularios_ui | 173 | 14 | reimplementar: 173 |
| imagens | 13 | 3 | reimplementar: 13 |
| notificacoes | 6 | 1 | remover: 6 |
| rede | 50 | 5 | remover: 50 |
| som | 11 | 2 | reimplementar: 11 |
| utilitarios | 112 | 21 | portavel: 92, reimplementar: 20 |
| licenciamento | 0 | 0 | Sem símbolo Kairo direto; integração retida/transitiva analisada separadamente |

## Referências diretas ao UnityEngine

**18 símbolos**, em **7 tipos**. Cada linha recebe proposta específica por tipo; nenhuma usa o motor no port. [CSV completo](../config/unity-direct.csv).

| Símbolo | Chamadores | Proposta |
|---|---|---|
| `M:UnityEngine.AndroidJavaClass.#ctor(System.String)` | `M:native.AppPlugin.#cctor`, `M:native.WebBoxPlugin.#cctor` | Remover ponte JNI Android. Finish vira saída de plataforma; Init, mailer, compra e WebBox exigem caminho indisponível/decisão de escopo; não devolver sucesso fictício. |
| `M:UnityEngine.AndroidJavaObject.CallStatic(System.String,System.Object[])` | `M:native.AppPlugin.Finish`, `M:native.AppPlugin.Init(System.Int32,System.Boolean,System.String)`, `M:native.AppPlugin.LaunchMailer(System.String,System.String)`, `M:native.WebBoxPlugin.Create`, `M:native.WebBoxPlugin.Dispose`, `M:native.WebBoxPlugin.LoadUrl(System.String)`, `M:native.WebBoxPlugin.SetViewRect(System.Int32,System.Int32,System.Int32,System.Int32)`, `M:native.WebBoxPlugin.SetVisible(System.Boolean)` | Remover ponte JNI Android. Finish vira saída de plataforma; Init, mailer, compra e WebBox exigem caminho indisponível/decisão de escopo; não devolver sucesso fictício. |
| `M:UnityEngine.AndroidJavaObject.CallStatic``1(System.String,System.Object[])` | `M:native.AppPlugin.ShowPurchaseLog(System.String,System.Int32,System.String,System.Boolean)`, `M:native.WebBoxPlugin.Visible` | Remover ponte JNI Android. Finish vira saída de plataforma; Init, mailer, compra e WebBox exigem caminho indisponível/decisão de escopo; não devolver sucesso fictício. |
| `M:UnityEngine.MonoBehaviour.#ctor` | `M:system.tapjoy.ui.Tapjoy.#ctor(System.String,System.String,System.Boolean)` | Substituir ciclo de vida/objetos Unity por host do port; não incorporar runtime Unity. |
| `M:UnityEngine.Object.op_Equality(UnityEngine.Object,UnityEngine.Object)` | `M:system.tapjoy.MyTapjoy.GetInstance` | Substituir comparação Unity por teste de existência/vida do objeto do port; Unity destroyed-object não equivale só a ponteiro nulo. |
| `M:UnityEngine.Object.op_Inequality(UnityEngine.Object,UnityEngine.Object)` | `M:form.GameForm.Finish`, `M:form.SoccerForm.Finish` | Substituir comparação Unity por teste de existência/vida do objeto do port; Unity destroyed-object não equivale só a ponteiro nulo. |
| `M:UnityEngine.PlayerPrefs.GetInt(System.String,System.Int32)` | `M:system.billing.ui.StoreBase.GetRestoreRequest`, `M:system.tapjoy.ui.Tapjoy.Init` | Substituir preferências por armazenamento local/SD se os chamadores forem mantidos; são restauração de cobrança e saldo Tapjoy, cuja remoção requer decisão sobre saldo. |
| `M:UnityEngine.PlayerPrefs.Save` | `M:system.billing.ui.StoreBase.SetRestoreRequest(System.Int32)`, `M:system.tapjoy.ui.Tapjoy.AddBalance(System.Int32)`, `M:system.tapjoy.ui.Tapjoy.SubBalance(System.Int32)` | Substituir preferências por armazenamento local/SD se os chamadores forem mantidos; são restauração de cobrança e saldo Tapjoy, cuja remoção requer decisão sobre saldo. |
| `M:UnityEngine.PlayerPrefs.SetInt(System.String,System.Int32)` | `M:system.billing.ui.StoreBase.SetRestoreRequest(System.Int32)`, `M:system.tapjoy.ui.Tapjoy.AddBalance(System.Int32)`, `M:system.tapjoy.ui.Tapjoy.SubBalance(System.Int32)` | Substituir preferências por armazenamento local/SD se os chamadores forem mantidos; são restauração de cobrança e saldo Tapjoy, cuja remoção requer decisão sobre saldo. |
| `P:UnityEngine.Application.targetFrameRate` | `M:main.Main.OnUpdate` | Substituir targetFrameRate pelo agendamento do host; preservar a intenção temporal do chamador Main.OnUpdate. |
| `P:UnityEngine.QualitySettings.vSyncCount` | `M:main.Main.OnUpdate` | Remover ajuste vSyncCount do motor; sincronização passa ao backend, sem mudar a temporização lógica. |
| `T:UnityEngine.AndroidJavaClass` | `M:native.AppPlugin.#cctor`, `M:native.AppPlugin.Finish`, `M:native.AppPlugin.Init(System.Int32,System.Boolean,System.String)`, `M:native.AppPlugin.LaunchMailer(System.String,System.String)`, `M:native.AppPlugin.ShowPurchaseLog(System.String,System.Int32,System.String,System.Boolean)`, `M:native.WebBoxPlugin.#cctor`, `M:native.WebBoxPlugin.Create`, `M:native.WebBoxPlugin.Dispose`, `M:native.WebBoxPlugin.LoadUrl(System.String)`, `M:native.WebBoxPlugin.SetViewRect(System.Int32,System.Int32,System.Int32,System.Int32)`, `M:native.WebBoxPlugin.SetVisible(System.Boolean)`, `M:native.WebBoxPlugin.Visible`, `T:native.AppPlugin`, `T:native.WebBoxPlugin` | Remover ponte JNI Android. Finish vira saída de plataforma; Init, mailer, compra e WebBox exigem caminho indisponível/decisão de escopo; não devolver sucesso fictício. |
| `T:UnityEngine.AndroidJavaObject` | `M:native.AppPlugin.Finish`, `M:native.AppPlugin.Init(System.Int32,System.Boolean,System.String)`, `M:native.AppPlugin.LaunchMailer(System.String,System.String)`, `M:native.AppPlugin.ShowPurchaseLog(System.String,System.Int32,System.String,System.Boolean)`, `M:native.WebBoxPlugin.Create`, `M:native.WebBoxPlugin.Dispose`, `M:native.WebBoxPlugin.LoadUrl(System.String)`, `M:native.WebBoxPlugin.SetViewRect(System.Int32,System.Int32,System.Int32,System.Int32)`, `M:native.WebBoxPlugin.SetVisible(System.Boolean)`, `M:native.WebBoxPlugin.Visible` | Remover ponte JNI Android. Finish vira saída de plataforma; Init, mailer, compra e WebBox exigem caminho indisponível/decisão de escopo; não devolver sucesso fictício. |
| `T:UnityEngine.Application` | `M:main.Main.OnUpdate` | Substituir targetFrameRate pelo agendamento do host; preservar a intenção temporal do chamador Main.OnUpdate. |
| `T:UnityEngine.MonoBehaviour` | `M:system.tapjoy.ui.Tapjoy.#ctor(System.String,System.String,System.Boolean)`, `T:system.tapjoy.ui.Tapjoy` | Substituir ciclo de vida/objetos Unity por host do port; não incorporar runtime Unity. |
| `T:UnityEngine.Object` | `M:form.GameForm.Finish`, `M:form.SoccerForm.Finish`, `M:system.tapjoy.MyTapjoy.GetInstance` | Substituir ciclo de vida/objetos Unity por host do port; não incorporar runtime Unity. |
| `T:UnityEngine.PlayerPrefs` | `M:system.billing.ui.StoreBase.GetRestoreRequest`, `M:system.billing.ui.StoreBase.SetRestoreRequest(System.Int32)`, `M:system.tapjoy.ui.Tapjoy.AddBalance(System.Int32)`, `M:system.tapjoy.ui.Tapjoy.Init`, `M:system.tapjoy.ui.Tapjoy.SubBalance(System.Int32)` | Substituir preferências por armazenamento local/SD se os chamadores forem mantidos; são restauração de cobrança e saldo Tapjoy, cuja remoção requer decisão sobre saldo. |
| `T:UnityEngine.QualitySettings` | `M:main.Main.OnUpdate` | Remover ajuste vSyncCount do motor; sincronização passa ao backend, sem mudar a temporização lógica. |

## API KairoLibrary por área

[CSV completo com todos os chamadores, locais e papéis semânticos](../config/boundary.csv). A tabela abaixo lista todo símbolo; nomes são identificadores de código, não textos do jogo.

### anuncios — 9 símbolos

| Símbolo | Tipo de símbolo | Categoria | Chamadores distintos |
|---|---|---|---:|
| `F:kairo.common.cfg.Config.ADMOB_ENABLE` | Field | remover | 9 |
| `M:kairo.unity.ad.AdMobView.GetAdHeight` | Method | remover | 2 |
| `M:kairo.unity.ad.AdMobView.IsLoad` | Method | remover | 1 |
| `M:kairo.unity.ad.AdMobView.IsStart` | Method | remover | 1 |
| `M:kairo.unity.ad.AdMobView.Start` | Method | remover | 1 |
| `M:kairo.unity.ui.Canvas.GetAdMobView` | Method | remover | 2 |
| `M:kairo.unity.ui.Canvas.UpdateAdMobView` | Method | remover | 1 |
| `T:kairo.unity.ad.AdMobView` | NamedType | remover | 4 |
| `T:kairo.unity.system.tapjoy.ui.ITapjoy` | NamedType | remover | 1 |

### armazenamento — 50 símbolos

| Símbolo | Tipo de símbolo | Categoria | Chamadores distintos |
|---|---|---|---:|
| `F:kairo.unity.ui.ResourceManager.img` | Field | reimplementar | 86 |
| `F:kairo.unity.ui.ResourceManager.seb` | Field | reimplementar | 68 |
| `F:kairo.unity.ui.ResourceManager.sound` | Field | reimplementar | 5 |
| `M:kairo.unity.io.AssetReader.SetSecurity(System.Int64[],System.Boolean)` | Method | reimplementar | 1 |
| `M:kairo.unity.io.RecordStore.AddRecord(System.Byte[])` | Method | reimplementar | 1 |
| `M:kairo.unity.io.RecordStore.AddRecord(System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.io.RecordStore.CloseRecordStore` | Method | reimplementar | 14 |
| `M:kairo.unity.io.RecordStore.CreateRecordStore` | Method | reimplementar | 2 |
| `M:kairo.unity.io.RecordStore.GetNumRecords` | Method | reimplementar | 5 |
| `M:kairo.unity.io.RecordStore.GetRecordSize(System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.io.RecordStore.OpenRecordStore(System.Int32)` | Method | reimplementar | 14 |
| `M:kairo.unity.io.RecordStore.PreferencesToFile` | Method | reimplementar | 1 |
| `M:kairo.unity.io.RecordStore.ReadRecord(System.Int32,System.Int32)` | Method | reimplementar | 10 |
| `M:kairo.unity.io.RecordStore.ReadRecord(System.Int32)` | Method | reimplementar | 4 |
| `M:kairo.unity.io.RecordStore.RemoveAllRecord` | Method | reimplementar | 1 |
| `M:kairo.unity.io.RecordStore.RemoveLastRecord` | Method | reimplementar | 1 |
| `M:kairo.unity.io.RecordStore.SetResourceFiles(System.String[])` | Method | reimplementar | 1 |
| `M:kairo.unity.io.RecordStore.Setup` | Method | reimplementar | 1 |
| `M:kairo.unity.io.RecordStore.WriteRecord(System.Int32,System.Byte[])` | Method | reimplementar | 4 |
| `M:kairo.unity.io.RecordStore.WriteRecord(System.Int32,System.Int32,System.Byte[])` | Method | reimplementar | 2 |
| `M:kairo.unity.io.ScratchPad.GetSPSize(System.Int32)` | Method | reimplementar | 3 |
| `M:kairo.unity.io.ScratchPad.ReadByteArray(System.Int32,System.Int32,System.Int32)` | Method | reimplementar | 2 |
| `M:kairo.unity.io.ScratchPad.WriteByteArray(System.Int32,System.Int32,System.Byte[])` | Method | reimplementar | 1 |
| `M:kairo.unity.io.Storage.Exists(System.Int32,System.String)` | Method | reimplementar | 1 |
| `M:kairo.unity.io.Storage.Read(System.Int32,System.Boolean,System.String)` | Method | reimplementar | 9 |
| `M:kairo.unity.io.Storage.Setup(System.Int32,System.Int32,System.String)` | Method | reimplementar | 1 |
| `M:kairo.unity.system.GameDataRecord.#ctor(System.Int32,System.Boolean)` | Method | reimplementar | 1 |
| `M:kairo.unity.system.GameDataRecord.#ctor(System.Int32,System.Int32,System.Boolean)` | Method | reimplementar | 1 |
| `M:kairo.unity.system.GameDataRecord.Add(System.String,System.Byte[])` | Method | reimplementar | 1 |
| `M:kairo.unity.system.GameDataRecord.Add(System.String,System.Int64)` | Method | reimplementar | 1 |
| `M:kairo.unity.system.GameDataRecord.Add(System.String,System.String)` | Method | reimplementar | 1 |
| `M:kairo.unity.system.GameDataRecord.Add(System.String)` | Method | reimplementar | 1 |
| `M:kairo.unity.system.GameDataRecord.GetData(System.String)` | Method | reimplementar | 1 |
| `M:kairo.unity.system.GameDataRecord.GetFriendId` | Method | reimplementar | 1 |
| `M:kairo.unity.system.GameDataRecord.GetNumber` | Method | reimplementar | 1 |
| `M:kairo.unity.system.GameDataRecord.GetString(System.String)` | Method | reimplementar | 1 |
| `M:kairo.unity.system.GameDataRecord.GetValue(System.String)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.ResourceManager.#ctor(System.String,System.String,System.String,System.String,System.String,System.String,System.String)` | Method | reimplementar | 9 |
| `M:kairo.unity.ui.ResourceManager.Dispose` | Method | reimplementar | 10 |
| `M:kairo.unity.ui.ResourceManager.DrawSeb(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32,System.Int32)` | Method | reimplementar | 4 |
| `M:kairo.unity.ui.ResourceManager.DrawSeb(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32)` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.ResourceManager.Load(System.Byte[],System.Int32)` | Method | reimplementar | 9 |
| `M:kairo.unity.ui.ResourceManager.Load(System.String,System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.ResourceManager.SetRecordNameBits(System.Int32)` | Method | reimplementar | 4 |
| `T:kairo.unity.io.AssetReader` | NamedType | reimplementar | 1 |
| `T:kairo.unity.io.RecordStore` | NamedType | reimplementar | 20 |
| `T:kairo.unity.io.ScratchPad` | NamedType | reimplementar | 4 |
| `T:kairo.unity.io.Storage` | NamedType | reimplementar | 10 |
| `T:kairo.unity.system.GameDataRecord` | NamedType | reimplementar | 1 |
| `T:kairo.unity.ui.ResourceManager` | NamedType | reimplementar | 123 |

### cobranca — 4 símbolos

| Símbolo | Tipo de símbolo | Categoria | Chamadores distintos |
|---|---|---|---:|
| `M:kairo.unity.system.KairoBase.AddPaymentMoney(System.String,System.String,System.String,System.Int32,System.Int32,System.Boolean)` | Method | remover | 2 |
| `M:kairo.unity.system.KairoBase.GetPaymentMoney` | Method | remover | 1 |
| `M:kairo.unity.system.KairoBase.IsIllegalCountry` | Method | remover | 2 |
| `M:kairo.unity.system.KairoBase.IsIllegalPackage` | Method | remover | 2 |

### colecoes_streams — 160 símbolos

| Símbolo | Tipo de símbolo | Categoria | Chamadores distintos |
|---|---|---|---:|
| `F:kairo.common.cfg.Config.AD_SIZE` | Field | portavel | 1 |
| `F:kairo.common.cfg.Config.APPLI_TYPE` | Field | portavel | 7 |
| `F:kairo.common.cfg.Config.BASE64_PUBLIC_KEY` | Field | portavel | 1 |
| `F:kairo.common.cfg.Config.DEBUG` | Field | portavel | 16 |
| `F:kairo.common.cfg.Config.DEBUG_CMD` | Field | portavel | 21 |
| `F:kairo.common.cfg.Config.DEBUG_CMD_DEV` | Field | portavel | 1 |
| `F:kairo.common.cfg.Config.DEBUG_FAST` | Field | portavel | 1 |
| `F:kairo.common.cfg.Config.DEBUG_SLOW` | Field | portavel | 2 |
| `F:kairo.common.cfg.Config.drawImageCount_` | Field | portavel | 1 |
| `F:kairo.common.cfg.Config.FPS_UNLIMITED` | Field | portavel | 1 |
| `F:kairo.common.cfg.Config.MUTE_SE` | Field | portavel | 2 |
| `F:kairo.common.cfg.Config.PID` | Field | portavel | 5 |
| `F:kairo.common.cfg.Config.PRINT` | Field | portavel | 32 |
| `F:kairo.common.cfg.Config.PTW` | Field | portavel | 9 |
| `F:kairo.common.cfg.Config.REGIST_ENABLE` | Field | portavel | 2 |
| `F:kairo.common.cfg.Config.SHOW_DEBUG` | Field | portavel | 2 |
| `F:kairo.common.cfg.Config.SHOW_FPS` | Field | portavel | 1 |
| `F:kairo.common.cfg.Config.TRIAL_VERSION` | Field | portavel | 7 |
| `F:kairo.common.cfg.Config.UNITY_EDITOR` | Field | portavel | 2 |
| `F:kairo.common.cfg.Config.URL_DATA` | Field | portavel | 1 |
| `F:kairo.common.cfg.Config.URL_GET_SCORE` | Field | portavel | 1 |
| `F:kairo.common.cfg.Config.URL_RANKING` | Field | portavel | 1 |
| `F:kairo.common.cfg.Config.URL_REGIST` | Field | portavel | 1 |
| `F:kairo.common.cfg.Config.URL_REGIST_SCORE` | Field | portavel | 1 |
| `F:kairo.common.cfg.Config.URL_SITE` | Field | portavel | 3 |
| `F:kairo.common.cfg.Config.URL_SP` | Field | portavel | 3 |
| `F:kairo.common.cfg.Config.URL_VERSIONUP` | Field | portavel | 1 |
| `M:java.io.ByteArrayInputStream.#ctor(System.Byte[])` | Method | portavel | 13 |
| `M:java.io.ByteArrayInputStream.Available` | Method | portavel | 1 |
| `M:java.io.ByteArrayOutputStream.#ctor` | Method | portavel | 9 |
| `M:java.io.ByteArrayOutputStream.Close` | Method | portavel | 9 |
| `M:java.io.ByteArrayOutputStream.ToByteArray` | Method | portavel | 9 |
| `M:java.io.DataInputStream.#ctor(java.io.InputStream)` | Method | portavel | 1 |
| `M:java.io.DataInputStream.Close` | Method | portavel | 1 |
| `M:java.io.DataInputStream.ReadInt` | Method | portavel | 1 |
| `M:java.io.InputStream.Available` | Method | portavel | 1 |
| `M:java.io.InputStream.Close` | Method | portavel | 13 |
| `M:java.io.InputStream.Read(System.Byte[])` | Method | portavel | 1 |
| `M:java.io.InputStream.Skip(System.Int64)` | Method | portavel | 1 |
| `M:java.lang.JInteger.#ctor(System.Int32)` | Method | portavel | 8 |
| `M:java.lang.JInteger.IntValue` | Method | portavel | 8 |
| `M:java.lang.JInteger.op_Implicit(java.lang.JInteger)~System.Int32` | Method | portavel | 1 |
| `M:java.lang.JInteger.ParseInt(System.String)` | Method | portavel | 33 |
| `M:java.lang.JInteger.ValueOf(System.String)` | Method | portavel | 1 |
| `M:java.lang.JLong.ParseLong(System.String)` | Method | portavel | 3 |
| `M:java.lang.JMath.Abs(System.Int32)` | Method | portavel | 15 |
| `M:java.lang.JMath.Abs(System.Int64)` | Method | portavel | 2 |
| `M:java.lang.JMath.Abs(System.Single)` | Method | portavel | 12 |
| `M:java.lang.JMath.Cos(System.Double)` | Method | portavel | 4 |
| `M:java.lang.JMath.Sin(System.Double)` | Method | portavel | 6 |
| `M:java.lang.JMath.Sqrt(System.Double)` | Method | portavel | 26 |
| `M:java.lang.JMath.ToRadians(System.Double)` | Method | portavel | 3 |
| `M:java.lang.JString.New(System.Byte[])` | Method | portavel | 11 |
| `M:java.lang.JString.New(System.String)` | Method | portavel | 1 |
| `M:java.lang.JString.ValueOf(System.Char)` | Method | portavel | 1 |
| `M:java.lang.JString.ValueOf(System.Int32)` | Method | portavel | 19 |
| `M:java.lang.JString.ValueOf(System.Int64)` | Method | portavel | 13 |
| `M:java.lang.JString.ValueOf(System.Object)` | Method | portavel | 1 |
| `M:java.lang.JSystem.Arraycopy(System.Object,System.Int32,System.Object,System.Int32,System.Int32)` | Method | portavel | 13 |
| `M:java.lang.JSystem.CurrentTimeMillis` | Method | portavel | 21 |
| `M:java.lang.JSystem.Gc` | Method | portavel | 8 |
| `M:java.lang.StringEx.CharAt(System.String,System.Int32)` | Method | portavel | 15 |
| `M:java.lang.StringEx.EqualsIgnoreCase(System.String,System.String)` | Method | portavel | 1 |
| `M:java.lang.StringEx.GetBytes(System.String)` | Method | portavel | 5 |
| `M:java.lang.StringEx.Length(System.String)` | Method | portavel | 33 |
| `M:java.lang.StringEx.SubstringJ(System.String,System.Int32,System.Int32)` | Method | portavel | 7 |
| `M:java.lang.StringEx.SubstringJ(System.String,System.Int32)` | Method | portavel | 4 |
| `M:java.util.JCalendar.Get(System.Int32)` | Method | portavel | 5 |
| `M:java.util.JCalendar.GetInstance` | Method | portavel | 5 |
| `M:java.util.JCalendar.SetTime(java.util.JDate)` | Method | portavel | 3 |
| `M:java.util.JCalendar.SetTimeInMillis(System.Int64)` | Method | portavel | 3 |
| `M:java.util.JDate.#ctor` | Method | portavel | 1 |
| `M:java.util.JDate.#ctor(System.Int64)` | Method | portavel | 2 |
| `M:java.util.JRandom.#ctor` | Method | portavel | 2 |
| `M:java.util.JRandom.NextInt` | Method | portavel | 2 |
| `M:java.util.JTool.MakeArray``1(System.Int32[])` | Method | portavel | 62 |
| `M:java.util.Vector.#ctor` | Method | portavel | 71 |
| `M:java.util.Vector`1.#ctor` | Method | portavel | 1 |
| `M:java.util.Vector`1.Add(`0)` | Method | portavel | 5 |
| `M:java.util.Vector`1.AddElement(`0)` | Method | portavel | 73 |
| `M:java.util.Vector`1.Clear` | Method | portavel | 1 |
| `M:java.util.Vector`1.ElementAt(System.Int32)` | Method | portavel | 118 |
| `M:java.util.Vector`1.FirstElement` | Method | portavel | 11 |
| `M:java.util.Vector`1.IndexOf(`0)` | Method | portavel | 16 |
| `M:java.util.Vector`1.InsertElementAt(`0,System.Int32)` | Method | portavel | 2 |
| `M:java.util.Vector`1.op_Equality(java.util.Vector{`0},java.util.Vector)` | Method | portavel | 2 |
| `M:java.util.Vector`1.op_Inequality(java.util.Vector{`0},java.util.Vector)` | Method | portavel | 1 |
| `M:java.util.Vector`1.RemoveAllElements` | Method | portavel | 29 |
| `M:java.util.Vector`1.RemoveElement(`0)` | Method | portavel | 3 |
| `M:java.util.Vector`1.RemoveElementAt(System.Int32)` | Method | portavel | 25 |
| `M:java.util.Vector`1.SetElementAt(`0,System.Int32)` | Method | portavel | 12 |
| `M:java.util.Vector`1.Size` | Method | portavel | 129 |
| `M:kairo.common.cfg.Config.#ctor` | Method | portavel | 1 |
| `M:kairo.common.cfg.Config.Init(System.String)` | Method | portavel | 1 |
| `M:kairo.unity.io.ByteListOutputStream.#ctor` | Method | portavel | 1 |
| `M:kairo.unity.io.ByteListOutputStream.Size` | Method | portavel | 1 |
| `M:kairo.unity.io.ByteListOutputStream.ToByteArray(System.Int32,System.Int32)` | Method | portavel | 1 |
| `M:kairo.unity.util.FastVector.#ctor` | Method | portavel | 2 |
| `M:kairo.unity.util.FastVector`1.#ctor` | Method | portavel | 2 |
| `M:kairo.unity.util.FastVector`1.Add(`0)` | Method | portavel | 2 |
| `M:kairo.unity.util.FastVector`1.Contains(`0)` | Method | portavel | 1 |
| `M:kairo.unity.util.FastVector`1.ElementAt(System.Int32)` | Method | portavel | 7 |
| `M:kairo.unity.util.FastVector`1.FirstElement` | Method | portavel | 2 |
| `M:kairo.unity.util.FastVector`1.InsertElementAt(`0,System.Int32)` | Method | portavel | 1 |
| `M:kairo.unity.util.FastVector`1.LastElement` | Method | portavel | 1 |
| `M:kairo.unity.util.FastVector`1.RemoveAllElements` | Method | portavel | 1 |
| `M:kairo.unity.util.FastVector`1.RemoveAllElementsKeep` | Method | portavel | 1 |
| `M:kairo.unity.util.FastVector`1.RemoveElement(`0)` | Method | portavel | 1 |
| `M:kairo.unity.util.FastVector`1.RemoveElementAt(System.Int32)` | Method | portavel | 3 |
| `M:kairo.unity.util.FastVector`1.Size` | Method | portavel | 10 |
| `M:kairo.unity.util.JarInflater.#ctor(System.Byte[])` | Method | portavel | 6 |
| `M:kairo.unity.util.JarInflater.Close` | Method | portavel | 6 |
| `M:kairo.unity.util.JarInflater.GetData(System.String)` | Method | portavel | 5 |
| `M:kairo.unity.util.JarInflater.GetInputStream(System.String)` | Method | portavel | 1 |
| `M:kairo.unity.util.JarInflater.GetSize(System.String)` | Method | portavel | 3 |
| `M:kairo.unity.util.StreamUtil.Read(java.io.InputStream,System.Boolean)` | Method | portavel | 3 |
| `M:kairo.unity.util.StreamUtil.Read(java.io.InputStream)` | Method | portavel | 1 |
| `M:kairo.unity.util.StreamUtil.ReadBoolean(java.io.InputStream)` | Method | portavel | 16 |
| `M:kairo.unity.util.StreamUtil.ReadByte(java.io.InputStream)` | Method | portavel | 5 |
| `M:kairo.unity.util.StreamUtil.ReadFloat(java.io.InputStream)` | Method | portavel | 2 |
| `M:kairo.unity.util.StreamUtil.ReadInt(java.io.InputStream)` | Method | portavel | 27 |
| `M:kairo.unity.util.StreamUtil.ReadLong(java.io.InputStream)` | Method | portavel | 2 |
| `M:kairo.unity.util.StreamUtil.ReadShort(java.io.InputStream)` | Method | portavel | 23 |
| `M:kairo.unity.util.StreamUtil.ReadString(java.io.InputStream)` | Method | portavel | 7 |
| `M:kairo.unity.util.StreamUtil.ReadVector3D(java.io.InputStream)` | Method | portavel | 4 |
| `M:kairo.unity.util.StreamUtil.Write(java.io.OutputStream,System.Byte[],System.Boolean)` | Method | portavel | 3 |
| `M:kairo.unity.util.StreamUtil.WriteBoolean(java.io.OutputStream,System.Boolean)` | Method | portavel | 15 |
| `M:kairo.unity.util.StreamUtil.WriteByte(java.io.OutputStream,System.Byte)` | Method | portavel | 3 |
| `M:kairo.unity.util.StreamUtil.WriteByte(java.io.OutputStream,System.SByte)` | Method | portavel | 2 |
| `M:kairo.unity.util.StreamUtil.WriteFloat(java.io.OutputStream,System.Single)` | Method | portavel | 2 |
| `M:kairo.unity.util.StreamUtil.WriteInt(java.io.OutputStream,System.Int32)` | Method | portavel | 26 |
| `M:kairo.unity.util.StreamUtil.WriteLong(java.io.OutputStream,System.Int64)` | Method | portavel | 2 |
| `M:kairo.unity.util.StreamUtil.WriteShort(java.io.OutputStream,System.Int16)` | Method | portavel | 21 |
| `M:kairo.unity.util.StreamUtil.WriteString(java.io.OutputStream,kairo.unity.util.SecureString)` | Method | portavel | 1 |
| `M:kairo.unity.util.StreamUtil.WriteString(java.io.OutputStream,System.String)` | Method | portavel | 6 |
| `M:kairo.unity.util.StreamUtil.WriteVector3D(java.io.OutputStream,kairo.unity.m3d4.util3d.Vector3D)` | Method | portavel | 4 |
| `T:java.io.ByteArrayInputStream` | NamedType | portavel | 13 |
| `T:java.io.ByteArrayOutputStream` | NamedType | portavel | 9 |
| `T:java.io.DataInputStream` | NamedType | portavel | 1 |
| `T:java.io.InputStream` | NamedType | portavel | 45 |
| `T:java.io.OutputStream` | NamedType | portavel | 40 |
| `T:java.lang.JInteger` | NamedType | portavel | 50 |
| `T:java.lang.JLong` | NamedType | portavel | 3 |
| `T:java.lang.JMath` | NamedType | portavel | 53 |
| `T:java.lang.JRunnable` | NamedType | portavel | 10 |
| `T:java.lang.JString` | NamedType | portavel | 44 |
| `T:java.lang.JSystem` | NamedType | portavel | 41 |
| `T:java.lang.StringEx` | NamedType | portavel | 38 |
| `T:java.util.JCalendar` | NamedType | portavel | 6 |
| `T:java.util.JDate` | NamedType | portavel | 3 |
| `T:java.util.JRandom` | NamedType | portavel | 6 |
| `T:java.util.JTool` | NamedType | portavel | 62 |
| `T:java.util.Vector` | NamedType | portavel | 241 |
| `T:java.util.Vector`1` | NamedType | portavel | 186 |
| `T:kairo.common.cfg.Config` | NamedType | portavel | 93 |
| `T:kairo.unity.io.ByteListOutputStream` | NamedType | portavel | 1 |
| `T:kairo.unity.util.FastVector` | NamedType | portavel | 7 |
| `T:kairo.unity.util.FastVector`1` | NamedType | portavel | 16 |
| `T:kairo.unity.util.JarInflater` | NamedType | portavel | 8 |
| `T:kairo.unity.util.StreamUtil` | NamedType | portavel | 81 |

### desenho — 90 símbolos

| Símbolo | Tipo de símbolo | Categoria | Chamadores distintos |
|---|---|---|---:|
| `F:kairo.unity.graphics.RectangleF.left` | Field | portavel | 1 |
| `M:kairo.unity.graph.Graph.Easing(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)` | Method | reimplementar | 2 |
| `M:kairo.unity.graphics.MeshManager.SetDepth(System.Int32,System.Boolean)` | Method | reimplementar | 1 |
| `M:kairo.unity.graphics.MeshManager.SetDepthFront` | Method | reimplementar | 1 |
| `M:kairo.unity.graphics.Offscreen.CreateOffscreen(kairo.unity.graphics.Offscreen.RenderMethod,kairo.unity.graphics.Offscreen.RenderMethod,kairo.unity.graphics.Offscreen.GetLayoutMethod,System.Int32)` | Method | reimplementar | 2 |
| `M:kairo.unity.graphics.Offscreen.Dispose` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.Graphics.ClearClip` | Method | reimplementar | 5 |
| `M:kairo.unity.ui.Graphics.ClearImageClip` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Graphics.ClearRenderRect` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.Graphics.ClipRect(System.Single,System.Single,System.Single,System.Single,System.Boolean)` | Method | reimplementar | 21 |
| `M:kairo.unity.ui.Graphics.CopyArea(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.Graphics.Dispose(System.Boolean)` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.Graphics.DrawArc(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.Graphics.DrawImage(kairo.unity.ui.Image,System.Single,System.Single,System.Int32,System.Int32,System.Int32,System.Int32)` | Method | reimplementar | 40 |
| `M:kairo.unity.ui.Graphics.DrawImage(kairo.unity.ui.Image,System.Single,System.Single)` | Method | reimplementar | 27 |
| `M:kairo.unity.ui.Graphics.DrawLine(System.Single,System.Single,System.Single,System.Single,System.Single)` | Method | reimplementar | 22 |
| `M:kairo.unity.ui.Graphics.DrawRect(System.Single,System.Single,System.Single,System.Single)` | Method | reimplementar | 33 |
| `M:kairo.unity.ui.Graphics.DrawScaledImage(kairo.unity.ui.Image,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32,System.Int32,System.Int32)` | Method | reimplementar | 12 |
| `M:kairo.unity.ui.Graphics.DrawString(kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Graphics.DrawString(kairo.unity.ui.TextFormat,System.String,System.Single,System.Single)` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.Graphics.DrawString(System.Int64,System.Single,System.Single,System.Int32)` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.Graphics.DrawString(System.Int64,System.Single,System.Single)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Graphics.DrawString(System.String,System.Single,System.Single,System.Int32)` | Method | reimplementar | 39 |
| `M:kairo.unity.ui.Graphics.DrawString(System.String,System.Single,System.Single)` | Method | reimplementar | 38 |
| `M:kairo.unity.ui.Graphics.DrawString2(System.String,System.Single,System.Single,System.Int32)` | Method | reimplementar | 7 |
| `M:kairo.unity.ui.Graphics.DrawString2(System.String,System.Single,System.Single)` | Method | reimplementar | 5 |
| `M:kairo.unity.ui.Graphics.DrawStringBold(System.String,System.Single,System.Single,System.Int32,System.Int32)` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.Graphics.DrawText(System.String,System.Single,System.Single,System.Single,System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Graphics.FillArc(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.Graphics.FillRect(System.Single,System.Single,System.Single,System.Single)` | Method | reimplementar | 66 |
| `M:kairo.unity.ui.Graphics.GetAnchorPosition(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.Graphics.GetColor` | Method | reimplementar | 7 |
| `M:kairo.unity.ui.Graphics.GetColorOfRGB(System.Int32,System.Int32,System.Int32,System.Int32)` | Method | reimplementar | 10 |
| `M:kairo.unity.ui.Graphics.GetColorOfRGB(System.Int32,System.Int32,System.Int32)` | Method | reimplementar | 104 |
| `M:kairo.unity.ui.Graphics.GetFont(kairo.unity.ui.Font)` | Method | reimplementar | 30 |
| `M:kairo.unity.ui.Graphics.GetMeshManager` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Graphics.GetOriginX` | Method | reimplementar | 15 |
| `M:kairo.unity.ui.Graphics.GetOriginY` | Method | reimplementar | 15 |
| `M:kairo.unity.ui.Graphics.GetRenderRect` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Graphics.GetScale` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.Graphics.IsAutoTextLayout` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Graphics.PopBlendMode` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Graphics.PopClip` | Method | reimplementar | 21 |
| `M:kairo.unity.ui.Graphics.PopFont` | Method | reimplementar | 4 |
| `M:kairo.unity.ui.Graphics.PopMatrix` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.Graphics.PopOrigin` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.Graphics.PopRenderMode` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Graphics.PushBlendMode(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Graphics.PushFont(kairo.unity.ui.Font)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Graphics.PushFont(System.Int32)` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.Graphics.PushMatrix(kairo.unity.ui.Matrix)` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.Graphics.PushOrigin(System.Int32,System.Int32,System.Boolean)` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.Graphics.PushRenderMode(System.Int32,System.Int32,System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Graphics.Scale(System.Single)` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.Graphics.SetAutoTextLayout(System.Boolean)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Graphics.SetClip(System.Single,System.Single,System.Single,System.Single)` | Method | reimplementar | 5 |
| `M:kairo.unity.ui.Graphics.SetColor(System.Int32,System.Int32,System.Int32,System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Graphics.SetColor(System.Int32,System.Int32,System.Int32)` | Method | reimplementar | 15 |
| `M:kairo.unity.ui.Graphics.SetColor(System.Int32)` | Method | reimplementar | 99 |
| `M:kairo.unity.ui.Graphics.SetFont(kairo.unity.ui.Font)` | Method | reimplementar | 7 |
| `M:kairo.unity.ui.Graphics.SetImageClip(System.Single,System.Single,System.Single,System.Single)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Graphics.SetOrigin(System.Int32,System.Int32)` | Method | reimplementar | 23 |
| `M:kairo.unity.ui.Graphics.SetRenderMode` | Method | reimplementar | 4 |
| `M:kairo.unity.ui.Graphics.SetRenderMode(System.Int32,System.Int32,System.Int32)` | Method | reimplementar | 14 |
| `M:kairo.unity.ui.Graphics.SetRenderMode(System.Int32,System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Graphics.SetRenderRect(System.Int32,System.Int32,System.Int32,System.Int32)` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.Graphics.StringWidth(System.String)` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.Matrix.RotateTemporary(System.Single,System.Single,System.Single)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Matrix.ScaleTemporary(System.Single,System.Single,System.Single,System.Single)` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.Seb.ClearClip` | Method | reimplementar | 4 |
| `M:kairo.unity.ui.Seb.Draw(kairo.unity.ui.Graphics,System.Single,System.Single,kairo.unity.ui.Image[],System.Int32)` | Method | reimplementar | 17 |
| `M:kairo.unity.ui.Seb.DrawFrame(kairo.unity.ui.Graphics,System.Single,System.Single,kairo.unity.ui.Image[],System.Int32,System.Int32)` | Method | reimplementar | 15 |
| `M:kairo.unity.ui.Seb.Frame` | Method | reimplementar | 7 |
| `M:kairo.unity.ui.Seb.GetBoundingRect` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.Seb.GetBoundingRect(System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Seb.GetMaxFrame` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.Seb.GetSprite(System.Int32,System.Int32)` | Method | reimplementar | 6 |
| `M:kairo.unity.ui.Seb.GetSprites(System.Int32)` | Method | reimplementar | 5 |
| `M:kairo.unity.ui.Seb.SetClip(System.Int32,System.Int32,System.Int32,System.Int32)` | Method | reimplementar | 4 |
| `P:kairo.unity.graphics.Offscreen.Image` | Property | reimplementar | 3 |
| `T:kairo.unity.graph.Graph` | NamedType | reimplementar | 2 |
| `T:kairo.unity.graphics.MeshManager` | NamedType | reimplementar | 1 |
| `T:kairo.unity.graphics.Offscreen` | NamedType | reimplementar | 13 |
| `T:kairo.unity.graphics.Offscreen.GetLayoutMethod` | NamedType | reimplementar | 2 |
| `T:kairo.unity.graphics.Offscreen.RenderMethod` | NamedType | reimplementar | 2 |
| `T:kairo.unity.graphics.RectangleF` | NamedType | portavel | 1 |
| `T:kairo.unity.ui.Balloon.BalloonRender` | NamedType | reimplementar | 1 |
| `T:kairo.unity.ui.Graphics` | NamedType | reimplementar | 312 |
| `T:kairo.unity.ui.Matrix` | NamedType | reimplementar | 2 |
| `T:kairo.unity.ui.Seb` | NamedType | reimplementar | 83 |

### entrada — 47 símbolos

| Símbolo | Tipo de símbolo | Categoria | Chamadores distintos |
|---|---|---|---:|
| `F:kairo.unity.surface.TouchComponent.height` | Field | reimplementar | 2 |
| `F:kairo.unity.surface.TouchComponent.id` | Field | reimplementar | 10 |
| `F:kairo.unity.surface.TouchComponent.option` | Field | reimplementar | 6 |
| `F:kairo.unity.surface.TouchComponent.paintX` | Field | reimplementar | 3 |
| `F:kairo.unity.surface.TouchComponent.paintY` | Field | reimplementar | 3 |
| `F:kairo.unity.surface.TouchComponent.value` | Field | reimplementar | 9 |
| `F:kairo.unity.surface.TouchComponent.width` | Field | reimplementar | 2 |
| `F:kairo.unity.surface.TouchComponent.x` | Field | reimplementar | 2 |
| `F:kairo.unity.surface.TouchComponent.y` | Field | reimplementar | 2 |
| `F:kairo.unity.surface.TouchEvent.component` | Field | reimplementar | 28 |
| `F:kairo.unity.surface.TouchEvent.dx` | Field | reimplementar | 3 |
| `F:kairo.unity.surface.TouchEvent.dy` | Field | reimplementar | 3 |
| `F:kairo.unity.surface.TouchEvent.pinch` | Field | reimplementar | 2 |
| `F:kairo.unity.surface.TouchEvent.type` | Field | reimplementar | 8 |
| `F:kairo.unity.surface.TouchEvent.x` | Field | reimplementar | 1 |
| `F:kairo.unity.surface.TouchEvent.y` | Field | reimplementar | 1 |
| `F:kairo.unity.surface.TouchOption.args` | Field | reimplementar | 4 |
| `F:kairo.unity.surface.TouchOption.collisionBits` | Field | reimplementar | 1 |
| `F:kairo.unity.surface.TouchOption.dragCell` | Field | reimplementar | 1 |
| `F:kairo.unity.surface.TouchOption.dragGridH` | Field | reimplementar | 1 |
| `F:kairo.unity.surface.TouchOption.extendValues` | Field | reimplementar | 1 |
| `F:kairo.unity.surface.TouchOption.flag` | Field | reimplementar | 3 |
| `F:kairo.unity.surface.TouchOption.keys` | Field | reimplementar | 1 |
| `F:kairo.unity.surface.TouchOption.margin` | Field | reimplementar | 1 |
| `M:kairo.unity.surface.TouchComponent.Check(System.Int32)` | Method | reimplementar | 5 |
| `M:kairo.unity.surface.TouchComponent.GetId(System.Int64)` | Method | reimplementar | 1 |
| `M:kairo.unity.surface.TouchComponent.GetKey` | Method | reimplementar | 5 |
| `M:kairo.unity.surface.TouchComponent.GetKey(System.Int32,System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.surface.TouchComponent.GetPriority` | Method | reimplementar | 1 |
| `M:kairo.unity.surface.TouchComponent.SetPaint(System.Int32,System.Int32,System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.surface.TouchComponent.SetPaint(System.Int32,System.Int32)` | Method | reimplementar | 4 |
| `M:kairo.unity.surface.TouchOption.#ctor` | Method | reimplementar | 1 |
| `M:kairo.unity.surface.TouchOption.Create` | Method | reimplementar | 11 |
| `M:kairo.unity.surface.TouchOption.Create(System.Int32)` | Method | reimplementar | 14 |
| `M:kairo.unity.surface.TouchOption.Create(System.Int32[])` | Method | reimplementar | 3 |
| `M:kairo.unity.surface.TouchOption.Drag(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)` | Method | reimplementar | 2 |
| `M:kairo.unity.surface.TouchOption.Drag(System.Int32,System.Int32)` | Method | reimplementar | 2 |
| `M:kairo.unity.surface.TouchOption.ExtendValues(System.Int32)` | Method | reimplementar | 3 |
| `M:kairo.unity.surface.TouchOption.Flag(System.Int32)` | Method | reimplementar | 6 |
| `M:kairo.unity.surface.TouchOption.Margin(System.Int32,System.Int32,System.Int32,System.Int32)` | Method | reimplementar | 12 |
| `M:kairo.unity.surface.TouchValueAccessor.GetTouchValue(System.Int32,System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.surface.TouchValueAccessor.SetTouchValue(System.Int32,System.Int32)` | Method | reimplementar | 1 |
| `T:kairo.unity.surface.MotionEvent` | NamedType | reimplementar | 1 |
| `T:kairo.unity.surface.TouchComponent` | NamedType | reimplementar | 86 |
| `T:kairo.unity.surface.TouchEvent` | NamedType | reimplementar | 32 |
| `T:kairo.unity.surface.TouchOption` | NamedType | reimplementar | 40 |
| `T:kairo.unity.surface.TouchValueAccessor` | NamedType | reimplementar | 8 |

### fontes_texto — 50 símbolos

| Símbolo | Tipo de símbolo | Categoria | Chamadores distintos |
|---|---|---|---:|
| `F:kairo.unity.util.Language.LanguagePackInfo.Author` | Field | reimplementar | 1 |
| `F:kairo.unity.util.Language.LanguagePackInfo.Title` | Field | reimplementar | 1 |
| `M:kairo.unity.ui.Font.#ctor` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.Font.GetHeight` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.Font.GetSize` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.Font.PopLocalizeSetting` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.Font.PushLocalizeSetting(System.Boolean)` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.Font.SetSize(System.Int32,System.Boolean)` | Method | reimplementar | 7 |
| `M:kairo.unity.ui.Font.StringWidth(System.String)` | Method | reimplementar | 20 |
| `M:kairo.unity.ui.Font.StringWidthF(System.String)` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.TextFormat.Create(System.String)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.TextLayout.#ctor` | Method | reimplementar | 6 |
| `M:kairo.unity.ui.TextLayout.#ctor(System.Boolean,System.Boolean)` | Method | reimplementar | 6 |
| `M:kairo.unity.ui.TextLayout.Draw(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32)` | Method | reimplementar | 4 |
| `M:kairo.unity.ui.TextLayout.Draw(kairo.unity.ui.Graphics,System.Single,System.Single)` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.TextLayout.Draw(kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Int32,System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.TextLayout.Draw(kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32,System.Int32)` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.TextLayout.Draw(kairo.unity.ui.TextFormat,kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Int32,System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.TextLayout.Flush` | Method | reimplementar | 13 |
| `M:kairo.unity.ui.TextLayout.Frame` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.TextLayout.GetHeight` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.TextLayout.GetText` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.TextLayout.IsEnd` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.TextLayout.SetAnchor(System.Int32)` | Method | reimplementar | 7 |
| `M:kairo.unity.ui.TextLayout.SetColor(System.Int32)` | Method | reimplementar | 13 |
| `M:kairo.unity.ui.TextLayout.SetFontSize(System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.TextLayout.SetLineSpace(System.Int32)` | Method | reimplementar | 12 |
| `M:kairo.unity.ui.TextLayout.SetSize(System.Single,System.Single)` | Method | reimplementar | 11 |
| `M:kairo.unity.ui.TextLayout.SetSpeed(System.Int32)` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.TextLayout.SetText(System.String)` | Method | reimplementar | 15 |
| `M:kairo.unity.util.Language.English` | Method | reimplementar | 9 |
| `M:kairo.unity.util.Language.Get` | Method | reimplementar | 1 |
| `M:kairo.unity.util.Language.GetCustomLanguagePackLocation` | Method | reimplementar | 1 |
| `M:kairo.unity.util.Language.GetLanguageCode` | Method | reimplementar | 7 |
| `M:kairo.unity.util.Language.GetLanguagePackFile` | Method | reimplementar | 1 |
| `M:kairo.unity.util.Language.GetLanguagePackInfo(System.Byte[])` | Method | reimplementar | 1 |
| `M:kairo.unity.util.Language.GetSystemLanguagePackFiles` | Method | reimplementar | 1 |
| `M:kairo.unity.util.Language.Japanese` | Method | reimplementar | 13 |
| `M:kairo.unity.util.Language.LT(System.String,System.String)` | Method | reimplementar | 2 |
| `M:kairo.unity.util.Language.MakeLangPackTemplate(System.Boolean,System.Int32,System.String@,System.String@)` | Method | reimplementar | 1 |
| `M:kairo.unity.util.Language.SetLanguagePack(System.String,System.Byte[],System.Boolean)` | Method | reimplementar | 1 |
| `M:kairo.unity.util.Language.SetSoftLabelTable(System.String[][])` | Method | reimplementar | 1 |
| `M:kairo.unity.util.Language.SetTextTable(System.String[][])` | Method | reimplementar | 1 |
| `M:kairo.unity.util.Language.TranslateSoftLabel(System.String)` | Method | reimplementar | 2 |
| `M:kairo.unity.util.Language.TranslateText(System.String,System.Boolean)` | Method | reimplementar | 4 |
| `T:kairo.unity.ui.Font` | NamedType | reimplementar | 37 |
| `T:kairo.unity.ui.TextFormat` | NamedType | reimplementar | 3 |
| `T:kairo.unity.ui.TextLayout` | NamedType | reimplementar | 27 |
| `T:kairo.unity.util.Language` | NamedType | reimplementar | 35 |
| `T:kairo.unity.util.Language.LanguagePackInfo` | NamedType | reimplementar | 1 |

### formularios_ui — 173 símbolos

| Símbolo | Tipo de símbolo | Categoria | Chamadores distintos |
|---|---|---|---:|
| `F:kairo.unity.surface.SurfaceBase.lastTouchX` | Field | reimplementar | 1 |
| `F:kairo.unity.surface.SurfaceBase.lastTouchY` | Field | reimplementar | 1 |
| `F:kairo.unity.surface.SurfaceManagerBase.surfaceList_` | Field | reimplementar | 1 |
| `F:kairo.unity.system.lineup.ui.LineupManager.instance_` | Field | reimplementar | 1 |
| `M:kairo.unity.form.FormBase.#ctor(System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.form.FormBase.CheckUsable` | Method | reimplementar | 1 |
| `M:kairo.unity.form.FormBase.GetId` | Method | reimplementar | 17 |
| `M:kairo.unity.form.FormBase.GetLeftSoftLabel` | Method | reimplementar | 2 |
| `M:kairo.unity.form.FormBase.IsAlive` | Method | reimplementar | 1 |
| `M:kairo.unity.form.FormBase.Pop` | Method | reimplementar | 18 |
| `M:kairo.unity.form.FormBase.Push(kairo.unity.form.FormBase)` | Method | reimplementar | 24 |
| `M:kairo.unity.form.FormBase.SetSoftLabel(System.String,System.String,System.String,System.String)` | Method | reimplementar | 25 |
| `M:kairo.unity.form.FormBase.SetTouchValue(System.Int32,System.Int32)` | Method | reimplementar | 2 |
| `M:kairo.unity.form.FormManagerBase.#ctor` | Method | reimplementar | 1 |
| `M:kairo.unity.form.FormManagerBase.Capture(kairo.unity.surface.SurfaceBase,System.String[],kairo.unity.form.FormManagerBase.OnCaptureCompleted,System.Boolean)` | Method | reimplementar | 1 |
| `M:kairo.unity.form.FormManagerBase.ChangeCurrentForm(kairo.unity.form.FormBase)` | Method | reimplementar | 12 |
| `M:kairo.unity.form.FormManagerBase.Draw(kairo.unity.ui.Graphics)` | Method | reimplementar | 1 |
| `M:kairo.unity.form.FormManagerBase.DrawAllForms` | Method | reimplementar | 7 |
| `M:kairo.unity.form.FormManagerBase.Drawn` | Method | reimplementar | 1 |
| `M:kairo.unity.form.FormManagerBase.Execute` | Method | reimplementar | 1 |
| `M:kairo.unity.form.FormManagerBase.GetCurrentForm` | Method | reimplementar | 3 |
| `M:kairo.unity.form.FormManagerBase.GetForm(System.Int32)` | Method | reimplementar | 13 |
| `M:kairo.unity.form.FormManagerBase.GetFormsNum` | Method | reimplementar | 8 |
| `M:kairo.unity.form.FormManagerBase.GetTopForm` | Method | reimplementar | 20 |
| `M:kairo.unity.form.FormManagerBase.IsCapturing` | Method | reimplementar | 3 |
| `M:kairo.unity.form.FormManagerBase.IsPause` | Method | reimplementar | 4 |
| `M:kairo.unity.form.FormManagerBase.OnDraw` | Method | reimplementar | 1 |
| `M:kairo.unity.form.FormManagerBase.Pop` | Method | reimplementar | 7 |
| `M:kairo.unity.form.FormManagerBase.Pop(kairo.unity.form.FormBase)` | Method | reimplementar | 2 |
| `M:kairo.unity.form.FormManagerBase.PreDraw` | Method | reimplementar | 1 |
| `M:kairo.unity.form.FormManagerBase.PreUpdate` | Method | reimplementar | 1 |
| `M:kairo.unity.form.FormManagerBase.Push(kairo.unity.form.FormBase,kairo.unity.form.FormBase)` | Method | reimplementar | 1 |
| `M:kairo.unity.form.FormManagerBase.Push(kairo.unity.form.FormBase)` | Method | reimplementar | 17 |
| `M:kairo.unity.form.FormManagerBase.RemoveAllForms` | Method | reimplementar | 6 |
| `M:kairo.unity.form.FormManagerBase.Resume` | Method | reimplementar | 1 |
| `M:kairo.unity.form.FormManagerBase.SetPause(System.Boolean)` | Method | reimplementar | 1 |
| `M:kairo.unity.form.FormManagerBase.Updated` | Method | reimplementar | 1 |
| `M:kairo.unity.surface.SurfaceBase.#ctor` | Method | reimplementar | 3 |
| `M:kairo.unity.surface.SurfaceBase.AddTouchComponent(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,kairo.unity.surface.TouchOption)` | Method | reimplementar | 5 |
| `M:kairo.unity.surface.SurfaceBase.BeginTouchRegist(kairo.unity.ui.Graphics)` | Method | reimplementar | 1 |
| `M:kairo.unity.surface.SurfaceBase.CheckFirstTouch(System.Int32,System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.surface.SurfaceBase.CheckFirstTouch(System.Int32)` | Method | reimplementar | 6 |
| `M:kairo.unity.surface.SurfaceBase.CheckTouch(System.Int32,System.Int32)` | Method | reimplementar | 4 |
| `M:kairo.unity.surface.SurfaceBase.ClearTouchComponent` | Method | reimplementar | 1 |
| `M:kairo.unity.surface.SurfaceBase.DoEnd` | Method | reimplementar | 1 |
| `M:kairo.unity.surface.SurfaceBase.EndTouchRegist(kairo.unity.ui.Graphics)` | Method | reimplementar | 1 |
| `M:kairo.unity.surface.SurfaceBase.GetComponent(System.Int32)` | Method | reimplementar | 2 |
| `M:kairo.unity.surface.SurfaceBase.GetComponentId(System.Int32)` | Method | reimplementar | 2 |
| `M:kairo.unity.surface.SurfaceBase.GetComponentLength` | Method | reimplementar | 2 |
| `M:kairo.unity.surface.SurfaceBase.GetGameHeight` | Method | reimplementar | 42 |
| `M:kairo.unity.surface.SurfaceBase.GetGameWidth` | Method | reimplementar | 52 |
| `M:kairo.unity.surface.SurfaceBase.GetHeight` | Method | reimplementar | 5 |
| `M:kairo.unity.surface.SurfaceBase.GetScaleRatio` | Method | reimplementar | 8 |
| `M:kairo.unity.surface.SurfaceBase.GetTouchEventId(System.Int32,System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.surface.SurfaceBase.GetTouchEventKey(System.Int64,System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.surface.SurfaceBase.GetWidth` | Method | reimplementar | 6 |
| `M:kairo.unity.surface.SurfaceBase.GetX` | Method | reimplementar | 7 |
| `M:kairo.unity.surface.SurfaceBase.GetY` | Method | reimplementar | 8 |
| `M:kairo.unity.surface.SurfaceBase.IsTouch` | Method | reimplementar | 2 |
| `M:kairo.unity.surface.SurfaceBase.OnReceiveTouchEvent(kairo.unity.surface.MotionEvent)` | Method | reimplementar | 1 |
| `M:kairo.unity.surface.SurfaceBase.SetHeight(System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.surface.SurfaceBase.SetLocation(System.Int32,System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.surface.SurfaceBase.SetScaleRatio(System.Single)` | Method | reimplementar | 3 |
| `M:kairo.unity.surface.SurfaceBase.SetSize(System.Int32,System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.surface.SurfaceManagerBase.#ctor` | Method | reimplementar | 1 |
| `M:kairo.unity.surface.SurfaceManagerBase.CheckScreenRotation` | Method | reimplementar | 1 |
| `M:kairo.unity.surface.SurfaceManagerBase.CheckScreenRotation(System.Boolean)` | Method | reimplementar | 1 |
| `M:kairo.unity.surface.SurfaceManagerBase.Draw(kairo.unity.ui.Graphics)` | Method | reimplementar | 1 |
| `M:kairo.unity.surface.SurfaceManagerBase.DrawComponents(kairo.unity.ui.Graphics)` | Method | reimplementar | 1 |
| `M:kairo.unity.surface.SurfaceManagerBase.IsRotating` | Method | reimplementar | 1 |
| `M:kairo.unity.system.lineup.ui.LineupData.GetExplain` | Method | reimplementar | 1 |
| `M:kairo.unity.system.lineup.ui.LineupData.GetImage` | Method | reimplementar | 1 |
| `M:kairo.unity.system.lineup.ui.LineupData.GetURL` | Method | reimplementar | 1 |
| `M:kairo.unity.system.lineup.ui.LineupManager.#ctor` | Method | reimplementar | 1 |
| `M:kairo.unity.system.lineup.ui.LineupManager.CheckShowableLineup` | Method | reimplementar | 1 |
| `M:kairo.unity.system.lineup.ui.LineupManager.GetShowableLineups` | Method | reimplementar | 1 |
| `M:kairo.unity.system.lineup.ui.LineupManager.Init` | Method | reimplementar | 1 |
| `M:kairo.unity.system.lineup.ui.LineupManager.Load(System.Byte[])` | Method | reimplementar | 1 |
| `M:kairo.unity.system.lineup.ui.LineupManager.Start(System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.system.lineup.ui.LineupManager.UnloadImage` | Method | reimplementar | 1 |
| `M:kairo.unity.system.lineup.ui.LineupManager.Write` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Balloon.#ctor(System.String,System.Int32)` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.Balloon.Draw(kairo.unity.ui.Graphics,System.Single,System.Single)` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.Balloon.SetSpace(System.Int32,System.Int32,System.Int32,System.Int32,kairo.unity.ui.Balloon.BalloonRender)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Canvas.BeginPaint` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Canvas.CheckKeyPulse(System.Int32)` | Method | reimplementar | 23 |
| `M:kairo.unity.ui.Canvas.CheckKeyRepeat(System.Int32)` | Method | reimplementar | 23 |
| `M:kairo.unity.ui.Canvas.CheckKeyState(System.Int32)` | Method | reimplementar | 15 |
| `M:kairo.unity.ui.Canvas.ClearKeyBuffer` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.Canvas.DecideKeyState` | Method | reimplementar | 4 |
| `M:kairo.unity.ui.Canvas.EndPaint` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Canvas.Fullscreen(System.Boolean)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Canvas.GetHeight` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Canvas.GetHeight2` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Canvas.GetInstance` | Method | reimplementar | 27 |
| `M:kairo.unity.ui.Canvas.GetKeypadState` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.Canvas.GetSoftLabel(System.Int32)` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.Canvas.GetSoftLabelL` | Method | reimplementar | 5 |
| `M:kairo.unity.ui.Canvas.GetSoftLabelR` | Method | reimplementar | 5 |
| `M:kairo.unity.ui.Canvas.GetStatusBarHeight` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Canvas.GetStatusBarPosition` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Canvas.GetSurfaceManager` | Method | reimplementar | 4 |
| `M:kairo.unity.ui.Canvas.GetWidth2` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Canvas.ImeOnBlock(System.String,System.Int32,System.Int32)` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.Canvas.IsFullscreen` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Canvas.IsGetStatusBarHeight` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Canvas.IsGetStatusBarPosition` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Canvas.IsLinearFilterEnable` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.Canvas.KeyClick(System.Int32)` | Method | reimplementar | 14 |
| `M:kairo.unity.ui.Canvas.KeyDown(System.Int32,System.Boolean)` | Method | reimplementar | 5 |
| `M:kairo.unity.ui.Canvas.KeyUp(System.Int32)` | Method | reimplementar | 4 |
| `M:kairo.unity.ui.Canvas.OpenBrowser(System.String)` | Method | reimplementar | 9 |
| `M:kairo.unity.ui.Canvas.SetBackground(System.Int32)` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.Canvas.SetDisplayCurrent(kairo.unity.ui.IApplication)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Canvas.SetKeyDoubleInterval(System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Canvas.SetKeyRepeatInterval(System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Canvas.SetLinearFilterEnable(System.Boolean)` | Method | reimplementar | 6 |
| `M:kairo.unity.ui.Canvas.SetSoftLabel(System.Int32,System.String)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Canvas.SetSoftLabel(System.String,System.String,System.String,System.String)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Canvas.SetSurfaceManager(kairo.unity.surface.SurfaceManagerBase)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Canvas.UpdateSoftLabel` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.Canvas.VersionUp(System.String)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Canvas.Vibrator(System.Int64)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.Dialog.#ctor(System.Int32,System.String)` | Method | reimplementar | 10 |
| `M:kairo.unity.ui.Dialog.SetText(System.String)` | Method | reimplementar | 10 |
| `M:kairo.unity.ui.Dialog.Show` | Method | reimplementar | 10 |
| `M:kairo.unity.ui.IApplication.#ctor` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.IApplication.CheckUiThread` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.IApplication.Focus` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.IApplication.GetBattery` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.IApplication.GetCurrentApp` | Method | reimplementar | 30 |
| `M:kairo.unity.ui.IApplication.GetFormManager` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.IApplication.GetHeight` | Method | reimplementar | 6 |
| `M:kairo.unity.ui.IApplication.GetOrientation` | Method | reimplementar | 5 |
| `M:kairo.unity.ui.IApplication.GetPackageName` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.IApplication.GetProperty(System.String)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.IApplication.GetResource` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.IApplication.GetScaleRatio(System.Boolean)` | Method | reimplementar | 6 |
| `M:kairo.unity.ui.IApplication.GetTotalFrames` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.IApplication.GetViewport` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.IApplication.GetWidth` | Method | reimplementar | 5 |
| `M:kairo.unity.ui.IApplication.Init(kairo.unity.ui.IApplication)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.IApplication.IsBatteryCharging` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.IApplication.IsSide` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.IApplication.OnCreate` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.IApplication.ResetOrientation` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.IApplication.RunOnUiThread(kairo.unity.ui.IApplication.UIMethod,System.Boolean)` | Method | reimplementar | 4 |
| `M:kairo.unity.ui.IApplication.RunOnUiThread(System.Threading.ThreadStart,System.Boolean)` | Method | reimplementar | 7 |
| `M:kairo.unity.ui.IApplication.SetOrientation(System.Int32)` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.IApplication.SetScaleRatio(System.Single)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.IApplication.SetViewport(System.Int32,System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.IApplication.Terminate` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.UIException.GetStatus` | Method | reimplementar | 2 |
| `M:kfw.panel.MainPanel.#ctor` | Method | reimplementar | 2 |
| `M:kfw.panel.MainPanel.#ctor(System.String,System.String,System.Int32,System.Int32,System.String)` | Method | reimplementar | 3 |
| `M:kfw.panel.MainPanel.SetItemName(System.String)` | Method | reimplementar | 1 |
| `M:kfw.panel.MainPanel.Show(kairo.unity.ui.Canvas,kfw.panel.MainPanel.OnFinishMethod)` | Method | reimplementar | 2 |
| `M:kfw.panel.MainPanel.Show(kairo.unity.ui.Canvas)` | Method | reimplementar | 2 |
| `P:kairo.unity.surface.SurfaceBase.registTouch` | Property | reimplementar | 1 |
| `T:kairo.unity.form.FormBase` | NamedType | reimplementar | 103 |
| `T:kairo.unity.form.FormManagerBase` | NamedType | reimplementar | 67 |
| `T:kairo.unity.surface.SurfaceBase` | NamedType | reimplementar | 94 |
| `T:kairo.unity.surface.SurfaceManagerBase` | NamedType | reimplementar | 9 |
| `T:kairo.unity.system.lineup.ui.LineupData` | NamedType | reimplementar | 4 |
| `T:kairo.unity.system.lineup.ui.LineupManager` | NamedType | reimplementar | 10 |
| `T:kairo.unity.ui.Balloon` | NamedType | reimplementar | 2 |
| `T:kairo.unity.ui.Canvas` | NamedType | reimplementar | 106 |
| `T:kairo.unity.ui.Dialog` | NamedType | reimplementar | 10 |
| `T:kairo.unity.ui.IApplication` | NamedType | reimplementar | 53 |
| `T:kairo.unity.ui.IApplication.UIMethod` | NamedType | reimplementar | 4 |
| `T:kairo.unity.ui.UIException` | NamedType | reimplementar | 2 |
| `T:kfw.panel.MainPanel` | NamedType | reimplementar | 12 |
| `T:kfw.panel.MainPanel.OnFinishMethod` | NamedType | reimplementar | 4 |

### imagens — 13 símbolos

| Símbolo | Tipo de símbolo | Categoria | Chamadores distintos |
|---|---|---|---:|
| `F:kairo.unity.ui.Image.Filter.Point` | Field | reimplementar | 2 |
| `F:kairo.unity.ui.Image.Format.ARGB32` | Field | reimplementar | 2 |
| `M:kairo.unity.ui.Image.CreateImage(System.Int32,System.Int32,kairo.unity.ui.Image.Format,kairo.unity.ui.Image.Filter)` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.Image.Dispose` | Method | reimplementar | 4 |
| `M:kairo.unity.ui.Image.GetGraphics` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.Image.GetHeight` | Method | reimplementar | 14 |
| `M:kairo.unity.ui.Image.GetWidth` | Method | reimplementar | 16 |
| `M:kairo.unity.ui.Image.Load(System.Byte[],kairo.unity.ui.Image.Format,kairo.unity.ui.Image.Filter)` | Method | reimplementar | 4 |
| `M:kairo.unity.ui.Image.SetTransparentColor(System.Int32)` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.Image.SetTransparentEnabled(System.Boolean)` | Method | reimplementar | 2 |
| `T:kairo.unity.ui.Image` | NamedType | reimplementar | 117 |
| `T:kairo.unity.ui.Image.Filter` | NamedType | reimplementar | 2 |
| `T:kairo.unity.ui.Image.Format` | NamedType | reimplementar | 2 |

### notificacoes — 6 símbolos

| Símbolo | Tipo de símbolo | Categoria | Chamadores distintos |
|---|---|---|---:|
| `F:kairo.unity.system.notification.ui.NotifyManager.instance_` | Field | remover | 1 |
| `M:kairo.unity.system.notification.ui.NotifyManager.#ctor` | Method | remover | 1 |
| `M:kairo.unity.system.notification.ui.NotifyManager.GetValue(System.Int32)` | Method | remover | 1 |
| `M:kairo.unity.system.notification.ui.NotifyManager.GetValuesNum` | Method | remover | 1 |
| `M:kairo.unity.system.notification.ui.NotifyManager.RemoveValues(System.Int32[])` | Method | remover | 1 |
| `T:kairo.unity.system.notification.ui.NotifyManager` | NamedType | remover | 4 |

### rede — 50 símbolos

| Símbolo | Tipo de símbolo | Categoria | Chamadores distintos |
|---|---|---|---:|
| `F:kairo.unity.system.KairoBase.appliVersion_` | Field | remover | 1 |
| `F:kairo.unity.system.KairoBase.instance_` | Field | remover | 1 |
| `F:kairo.unity.system.KairoBase.login_` | Field | remover | 1 |
| `F:kairo.unity.system.KairoBase.start_` | Field | remover | 1 |
| `F:kairo.unity.system.KairoBase.startCount_` | Field | remover | 1 |
| `M:java.net.URLDecoder.Decode(System.String)` | Method | remover | 1 |
| `M:java.net.URLEncoder.Encode(System.String,System.String)` | Method | remover | 1 |
| `M:kairo.unity.analytics.AnalyticsTracker.TrackPageView(System.Boolean,System.String,System.String[])` | Method | remover | 1 |
| `M:kairo.unity.io.Http.Connect(System.String,System.Byte[],System.Boolean,System.Boolean)` | Method | remover | 1 |
| `M:kairo.unity.io.Http.Connect(System.String,System.Byte[],System.Boolean)` | Method | remover | 10 |
| `M:kairo.unity.io.Http.GetErrorCode` | Method | remover | 4 |
| `M:kairo.unity.io.Http.GetErrorText` | Method | remover | 4 |
| `M:kairo.unity.io.Http.GetErrorUrl` | Method | remover | 2 |
| `M:kairo.unity.io.Http.PopErrorCode` | Method | remover | 1 |
| `M:kairo.unity.io.Http.PopErrorText` | Method | remover | 4 |
| `M:kairo.unity.system.KairoBase.#ctor` | Method | remover | 1 |
| `M:kairo.unity.system.KairoBase.AccessCounter(System.Int32,System.String)` | Method | remover | 2 |
| `M:kairo.unity.system.KairoBase.Check(System.Int32)` | Method | remover | 2 |
| `M:kairo.unity.system.KairoBase.CheckUserId` | Method | remover | 3 |
| `M:kairo.unity.system.KairoBase.Connect(System.String)` | Method | remover | 8 |
| `M:kairo.unity.system.KairoBase.Connected(System.String,System.Byte[],System.Boolean)` | Method | remover | 1 |
| `M:kairo.unity.system.KairoBase.ConnectGameData(kairo.unity.system.GameDataRecord)` | Method | remover | 1 |
| `M:kairo.unity.system.KairoBase.ConnectGameData(kairo.unity.system.GameDataRecord[])` | Method | remover | 1 |
| `M:kairo.unity.system.KairoBase.ConnectGameDataRanking(System.String,System.String,System.String,System.String,System.String,System.Boolean,System.String)` | Method | remover | 1 |
| `M:kairo.unity.system.KairoBase.ConnectGameDataSearch(System.String,System.String,System.String,System.String,System.Int64,System.Int64,System.Int64,System.String,System.Int32)` | Method | remover | 1 |
| `M:kairo.unity.system.KairoBase.ConnectGift(System.String)` | Method | remover | 1 |
| `M:kairo.unity.system.KairoBase.ConnectLangPackCheck(System.String,System.Int32,System.Int32)` | Method | remover | 1 |
| `M:kairo.unity.system.KairoBase.ConnectLangPackSet(System.String,System.Int32,System.Int32,System.String)` | Method | remover | 1 |
| `M:kairo.unity.system.KairoBase.ConnectLangPackWeb(System.String)` | Method | remover | 1 |
| `M:kairo.unity.system.KairoBase.ConnectLogin(System.Boolean,System.Boolean)` | Method | remover | 1 |
| `M:kairo.unity.system.KairoBase.Finish` | Method | remover | 1 |
| `M:kairo.unity.system.KairoBase.GetFriendId` | Method | remover | 2 |
| `M:kairo.unity.system.KairoBase.GetInstance` | Method | remover | 13 |
| `M:kairo.unity.system.KairoBase.GetLatestVersion` | Method | remover | 1 |
| `M:kairo.unity.system.KairoBase.IsInit` | Method | remover | 1 |
| `M:kairo.unity.system.KairoBase.IsLogin` | Method | remover | 1 |
| `M:kairo.unity.system.KairoBase.MakeQuery(System.String,System.String)` | Method | remover | 6 |
| `M:kairo.unity.system.KairoBase.MakeUrl(System.String,System.Byte[])` | Method | remover | 1 |
| `M:kairo.unity.system.KairoBase.MakeUrl(System.String)` | Method | remover | 1 |
| `M:kairo.unity.system.KairoBase.On(System.Int32)` | Method | remover | 2 |
| `M:kairo.unity.system.KairoBase.Save` | Method | remover | 7 |
| `M:kairo.unity.system.KairoBase.SaveAll` | Method | remover | 2 |
| `M:kairo.unity.system.KairoBase.SetReserveSave(System.Boolean)` | Method | remover | 3 |
| `M:kairo.unity.system.KairoBase.SetReserveSaveEnable(System.Boolean)` | Method | remover | 2 |
| `M:kairo.unity.system.KairoBase.Update` | Method | remover | 1 |
| `T:java.net.URLDecoder` | NamedType | remover | 1 |
| `T:java.net.URLEncoder` | NamedType | remover | 1 |
| `T:kairo.unity.analytics.AnalyticsTracker` | NamedType | remover | 1 |
| `T:kairo.unity.io.Http` | NamedType | remover | 21 |
| `T:kairo.unity.system.KairoBase` | NamedType | remover | 35 |

### som — 11 símbolos

| Símbolo | Tipo de símbolo | Categoria | Chamadores distintos |
|---|---|---|---:|
| `M:kairo.unity.ui.SoundBase.GetState` | Method | reimplementar | 2 |
| `M:kairo.unity.ui.SoundBase.SetLoop(System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.SoundBase.SetSoundType(System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.SoundBase.Stop` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.SoundPlayer.GetInstance` | Method | reimplementar | 7 |
| `M:kairo.unity.ui.SoundPlayer.Play(kairo.unity.ui.SoundBase)` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.SoundPlayer.ReflectVolumeAndMute` | Method | reimplementar | 1 |
| `M:kairo.unity.ui.SoundPlayer.SetMute(System.Int32,System.Boolean)` | Method | reimplementar | 3 |
| `M:kairo.unity.ui.SoundPlayer.SetVolume(System.Int32,System.Int32)` | Method | reimplementar | 5 |
| `T:kairo.unity.ui.SoundBase` | NamedType | reimplementar | 9 |
| `T:kairo.unity.ui.SoundPlayer` | NamedType | reimplementar | 7 |

### utilitarios — 112 símbolos

| Símbolo | Tipo de símbolo | Categoria | Chamadores distintos |
|---|---|---|---:|
| `F:kairo.unity.m3d4.util3d.Vector3D.x_` | Field | portavel | 108 |
| `F:kairo.unity.m3d4.util3d.Vector3D.y_` | Field | portavel | 53 |
| `F:kairo.unity.m3d4.util3d.Vector3D.z_` | Field | portavel | 102 |
| `F:kairo.unity.util.Property.bins` | Field | portavel | 6 |
| `F:kairo.unity.util.Property.ints` | Field | portavel | 60 |
| `F:kairo.unity.util.Property.lngs` | Field | portavel | 22 |
| `F:kairo.unity.util.Property.pros` | Field | portavel | 2 |
| `F:kairo.unity.util.Property.strs` | Field | portavel | 19 |
| `F:kairo.unity.util.SecureProperty.bins` | Field | portavel | 2 |
| `F:kairo.unity.util.SecureProperty.ints` | Field | portavel | 8 |
| `F:kairo.unity.util.SecureProperty.strs` | Field | portavel | 7 |
| `M:java.lang.JRuntime.FreeMemory` | Method | reimplementar | 2 |
| `M:java.lang.JRuntime.GetRuntime` | Method | reimplementar | 2 |
| `M:java.lang.JRuntime.TotalMemory` | Method | reimplementar | 1 |
| `M:java.lang.JThread.#ctor(java.lang.JRunnable)` | Method | reimplementar | 5 |
| `M:java.lang.JThread.#ctor(System.Threading.ThreadStart)` | Method | reimplementar | 5 |
| `M:java.lang.JThread.op_Equality(java.lang.JThread,java.lang.JThread)` | Method | reimplementar | 1 |
| `M:java.lang.JThread.op_Inequality(java.lang.JThread,java.lang.JThread)` | Method | reimplementar | 6 |
| `M:java.lang.JThread.Sleep(System.Int64)` | Method | reimplementar | 13 |
| `M:java.lang.JThread.Start` | Method | reimplementar | 10 |
| `M:java.lang.JThread.Yield` | Method | reimplementar | 4 |
| `M:kairo.unity.io.ConnectionException.GetStatus` | Method | portavel | 2 |
| `M:kairo.unity.m3d4.util3d.Vector3D.#ctor` | Method | portavel | 63 |
| `M:kairo.unity.m3d4.util3d.Vector3D.#ctor(System.Single,System.Single,System.Single)` | Method | portavel | 16 |
| `M:kairo.unity.m3d4.util3d.Vector3D.Add(kairo.unity.m3d4.util3d.Vector3D)` | Method | portavel | 3 |
| `M:kairo.unity.m3d4.util3d.Vector3D.Add(System.Single,System.Single,System.Single)` | Method | portavel | 1 |
| `M:kairo.unity.m3d4.util3d.Vector3D.Set(kairo.unity.m3d4.util3d.Vector3D)` | Method | portavel | 29 |
| `M:kairo.unity.m3d4.util3d.Vector3D.Set(System.Single,System.Single,System.Single)` | Method | portavel | 26 |
| `M:kairo.unity.native.KairoPlugin.GetLanguagePanelResult` | Method | reimplementar | 1 |
| `M:kairo.unity.native.KairoPlugin.GetReleaseNumber` | Method | reimplementar | 1 |
| `M:kairo.unity.native.KairoPlugin.IsLanguagePanelFinish` | Method | reimplementar | 1 |
| `M:kairo.unity.native.KairoPlugin.ShowToast(System.String,System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.native.KairoPlugin.StartLanguagePanel(System.String[],System.Int32,System.String,System.Int32)` | Method | reimplementar | 1 |
| `M:kairo.unity.util.Base64.Decode(System.String)` | Method | portavel | 1 |
| `M:kairo.unity.util.Base64.Encode(System.Byte[])` | Method | portavel | 1 |
| `M:kairo.unity.util.BitUtil.Check(System.Int32,System.Int32)` | Method | portavel | 76 |
| `M:kairo.unity.util.BitUtil.Join(System.Int16,System.Int16)` | Method | portavel | 1 |
| `M:kairo.unity.util.BitUtil.Off(System.Int32,System.Int32)` | Method | portavel | 26 |
| `M:kairo.unity.util.BitUtil.On(System.Int32,System.Int32)` | Method | portavel | 28 |
| `M:kairo.unity.util.BitUtil.Split(System.Int32)` | Method | portavel | 8 |
| `M:kairo.unity.util.ClockTime.GetTime` | Method | reimplementar | 1 |
| `M:kairo.unity.util.Compressor.Compress(System.Byte[])` | Method | portavel | 1 |
| `M:kairo.unity.util.Compressor.Expand(System.Byte[])` | Method | portavel | 1 |
| `M:kairo.unity.util.CRC64.GetValue(System.Byte[])` | Method | portavel | 2 |
| `M:kairo.unity.util.EncodeUtil.ByteAryToLong(System.Byte[],System.Boolean)` | Method | portavel | 1 |
| `M:kairo.unity.util.EncodeUtil.LongToByteAry(System.Int64,System.Boolean)` | Method | portavel | 1 |
| `M:kairo.unity.util.Encrypter.Decode(System.Byte[],System.Byte[])` | Method | portavel | 1 |
| `M:kairo.unity.util.Encrypter.Encode(System.Byte[],System.Byte[])` | Method | portavel | 1 |
| `M:kairo.unity.util.Encrypter.SetEncryptionKey(System.Byte[])` | Method | portavel | 1 |
| `M:kairo.unity.util.Log.Info(System.Exception)` | Method | portavel | 38 |
| `M:kairo.unity.util.Log.Info(System.String,System.Exception)` | Method | portavel | 25 |
| `M:kairo.unity.util.Property.#ctor` | Method | portavel | 1 |
| `M:kairo.unity.util.Property.#ctor(kairo.unity.util.Property[],System.Int32[],System.Int64[],System.String[],System.Byte[][])` | Method | portavel | 5 |
| `M:kairo.unity.util.Property.Load(System.Byte[])` | Method | portavel | 4 |
| `M:kairo.unity.util.Property.ToByteArray` | Method | portavel | 2 |
| `M:kairo.unity.util.SecureInt.#ctor` | Method | portavel | 10 |
| `M:kairo.unity.util.SecureInt.#ctor(kairo.unity.util.SecureInt)` | Method | portavel | 3 |
| `M:kairo.unity.util.SecureInt.#ctor(System.Int32)` | Method | portavel | 17 |
| `M:kairo.unity.util.SecureInt.Get` | Method | portavel | 26 |
| `M:kairo.unity.util.SecureInt.op_Implicit(kairo.unity.util.SecureInt)~System.Int32` | Method | portavel | 2 |
| `M:kairo.unity.util.SecureInt.op_Implicit(System.Int32)~kairo.unity.util.SecureInt` | Method | portavel | 3 |
| `M:kairo.unity.util.SecureLong.op_Implicit(kairo.unity.util.SecureLong)~System.Int64` | Method | portavel | 1 |
| `M:kairo.unity.util.SecureLong.op_Implicit(System.Int64)~kairo.unity.util.SecureLong` | Method | portavel | 1 |
| `M:kairo.unity.util.SecureProperty.#ctor(kairo.unity.util.SecureProperty[],System.Int32[],System.Int64[],System.String[],System.Byte[][])` | Method | portavel | 2 |
| `M:kairo.unity.util.SecureProperty.Load(System.Byte[])` | Method | portavel | 1 |
| `M:kairo.unity.util.SecureProperty.ToByteArray` | Method | portavel | 1 |
| `M:kairo.unity.util.SecureString.#ctor(System.String)` | Method | portavel | 6 |
| `M:kairo.unity.util.SecureString.EndsWith(System.String)` | Method | portavel | 2 |
| `M:kairo.unity.util.SecureString.Equals(kairo.unity.util.SecureString)` | Method | portavel | 2 |
| `M:kairo.unity.util.SecureString.Equals(System.String)` | Method | portavel | 3 |
| `M:kairo.unity.util.SecureString.Get` | Method | portavel | 3 |
| `M:kairo.unity.util.SecureString.IndexOf(System.Int32)` | Method | portavel | 1 |
| `M:kairo.unity.util.SecureString.Length` | Method | portavel | 4 |
| `M:kairo.unity.util.SecureString.op_Addition(kairo.unity.util.SecureString,System.String)` | Method | portavel | 1 |
| `M:kairo.unity.util.SecureString.op_Implicit(kairo.unity.util.SecureString)~System.String` | Method | portavel | 4 |
| `M:kairo.unity.util.SecureString.op_Implicit(System.String)~kairo.unity.util.SecureString` | Method | portavel | 3 |
| `M:kairo.unity.util.SecureString.StartsWith(System.String)` | Method | portavel | 2 |
| `M:kairo.unity.util.SecureString.ToString` | Method | portavel | 3 |
| `M:kairo.unity.util.SecureString.ToString(kairo.unity.util.SecureString)` | Method | portavel | 19 |
| `M:kairo.unity.util.SecureString.ValueOf(System.String)` | Method | portavel | 7 |
| `M:kairo.unity.util.StringUtil.Escape(System.String)` | Method | portavel | 1 |
| `M:kairo.unity.util.StringUtil.FormatString(System.String,System.Int32,System.Char,System.Boolean)` | Method | portavel | 1 |
| `M:kairo.unity.util.StringUtil.FormatString(System.String,System.Int32,System.Char)` | Method | portavel | 4 |
| `M:kairo.unity.util.StringUtil.FormatString(System.String,System.Int32)` | Method | portavel | 3 |
| `M:kairo.unity.util.StringUtil.LoadStringArray(kairo.unity.util.JarInflater,System.String)` | Method | portavel | 2 |
| `M:kairo.unity.util.StringUtil.Replace(System.String,System.String,System.String)` | Method | portavel | 7 |
| `M:kairo.unity.util.StringUtil.Replace(System.String,System.String)` | Method | portavel | 13 |
| `M:kairo.unity.util.StringUtil.Split(System.String,System.String,System.Boolean,System.Boolean,System.Boolean)` | Method | portavel | 2 |
| `M:kairo.unity.util.StringUtil.Split(System.String,System.String)` | Method | portavel | 38 |
| `M:kairo.unity.util.StringUtil.SplitIntegers(System.String,System.String)` | Method | portavel | 4 |
| `P:kairo.unity.util.KairoException.DisplayMessage` | Property | portavel | 1 |
| `T:java.lang.JRuntime` | NamedType | reimplementar | 2 |
| `T:java.lang.JThread` | NamedType | reimplementar | 35 |
| `T:kairo.unity.io.ConnectionException` | NamedType | portavel | 2 |
| `T:kairo.unity.m3d4.util3d.Vector3D` | NamedType | portavel | 233 |
| `T:kairo.unity.native.KairoPlugin` | NamedType | reimplementar | 3 |
| `T:kairo.unity.util.Base64` | NamedType | portavel | 2 |
| `T:kairo.unity.util.BitUtil` | NamedType | portavel | 119 |
| `T:kairo.unity.util.ClockTime` | NamedType | reimplementar | 1 |
| `T:kairo.unity.util.Compressor` | NamedType | portavel | 2 |
| `T:kairo.unity.util.CRC64` | NamedType | portavel | 2 |
| `T:kairo.unity.util.EncodeUtil` | NamedType | portavel | 2 |
| `T:kairo.unity.util.Encrypter` | NamedType | portavel | 3 |
| `T:kairo.unity.util.KairoException` | NamedType | portavel | 1 |
| `T:kairo.unity.util.Log` | NamedType | portavel | 57 |
| `T:kairo.unity.util.NotPermitException` | NamedType | portavel | 1 |
| `T:kairo.unity.util.Property` | NamedType | portavel | 90 |
| `T:kairo.unity.util.SecureInt` | NamedType | portavel | 56 |
| `T:kairo.unity.util.SecureLong` | NamedType | portavel | 4 |
| `T:kairo.unity.util.SecureProperty` | NamedType | portavel | 17 |
| `T:kairo.unity.util.SecureString` | NamedType | portavel | 45 |
| `T:kairo.unity.util.StringUtil` | NamedType | portavel | 59 |

## Limitações e reprodução

Ferramentas: `tools/BoundaryInventory.cs` e `tools/inventory_boundary.py`. Execute com `python tools/inventory_boundary.py --managed-dir <diretorio-Managed-da-copia-local>`. A pasta é lida, nunca copiada. O driver emite apenas metadados, contagens e nomes de símbolos, sem valores literais. Não é tradutor nem implementação de API. O comparer DesktopAssemblyIdentityComparer.Default é necessário para a unificação desktop/Unity dos perfis mscorlib2.0.0.0/2.0.5.0; sem ele a primeira tentativa teve 17.465 erros CS0012 e 49 derivados. O ajuste afeta somente a resolução semântica do inspetor, não compila ou altera uma DLL do jogo. A fixture própria em tests/repository/test_boundary_semantics.py confirma constantes, propriedades, métodos, genéricos, conversão implícita, foreach e construtor base implícito.

O comportamento de rede, cobrança, anúncios, licenciamento e notificações, incluindo falhas/desligamento, é analisado separadamente em `docs/notes/offline-behavior.md`. Categorias de remoção não autorizam substituir callbacks por sucesso nem modificar a lógica do jogo.
