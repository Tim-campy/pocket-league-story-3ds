# Tradução pendente: 190 corpos, 22 slots, 26 políticas

Medido em 2026-11-13 sobre `config/translation.csv` (1.958 métodos IL,
`estado=todo` em 190) e `config/phase2-game-translation.json` (relatório do
tradutor: 1.768 emitidos, 106 rejeitados com diagnóstico, 22 slots virtuais
sem definição, 53 políticas de serviço).

## 1. Distribuição dos 190 por motivo

O livro-razão conta métodos do IL; o tradutor trabalha sobre o fonte. 108 dos
190 são membros que o compilador C# gera sem declaração no fonte; 82 são
métodos do fonte rejeitados pelo tradutor.

### 1a. Membros gerados pelo compilador (108)

| Grupo | Qtde | Situação real |
|---|---:|---|
| Construtor estático (`.cctor`) | 49 | 47 já emitidos como inicializador de tipo (`type_initializers`); 2 em `AppPlugin`/`WebBoxPlugin` (Android) |
| Lambda / closure (`<X>m__N`, `AnonStorey`) | 42 | 12 dentro de métodos já emitidos (traduzidos em linha); 30 dentro de métodos rejeitados (seguem o pai) |
| Construtor implícito (`.ctor` sem fonte) | 12 | 3 de classes já geradas (inclui `MatchForm+UserRecord`, aninhada); 9 de classes não geradas (`IabHelper`, `Json`, `MyConfig`, `KairoText`, `TJPlacement`…) |
| Membros de delegate (`HttpForm+HttpMethod`) | 4 | `Invoke/BeginInvoke/EndInvoke/.ctor`; o delegate é traduzido como chamável |
| `HttpForm+ResultData.IEnumerable.GetEnumerator` | 1 | tipo `IEnumerator` não suportado (conta também em 1b) |

**62 dos 108 já existem no C++** (47 + 12 + 3) e só faltam no livro-razão:
falta a regra de associação IL → fonte para membros gerados. Os outros 46
seguem o pai/classe da seção 1b ou dependem de um tipo ainda não gerado.

### 1b. Métodos do fonte rejeitados (82 no livro-razão; 106 diagnósticos)

Seguindo a cadeia "dependency not lowered" até a causa primeira:

| Causa primeira | Métodos bloqueados | Natureza |
|---|---:|---|
| `KairoBase.ConnectLogin`: chamada `ref/out` sem vínculo | 25 | tradutor (chamada `ref/out` a método nativo/fonte) |
| Tapjoy (`MonoBehaviour` + SDK) | 15 | serviço removido: política offline |
| `AndroidJavaClass` (`AppPlugin`, `WebBoxPlugin`, `WebBox`) | 17 | serviço removido: política offline |
| `BillingManager.Init/Load<T>`: inicializador de objeto/construtor | 9 | tradutor |
| `KairoPlugin.ShowFepPanel` → `FepPanel`, `MainPanel`, `InputPanel` | 5 | plataforma: **entrada de texto** (decisão de controles) |
| `KairoBase.ConnectPaymemtMoney`: `Enumerable.ElementAt` | 6 | BCL |
| `java.net.URLDecoder`: `Byte.Parse(NumberStyles)` | 4 | BCL |
| `KairoPlugin.GetGCMRegistrationId`, `NotifyManager.#ctor` | 6 | serviço removido (notificação push) |
| `KairoPlugin.StartLanguagePanel` | 2 | plataforma: painel de idioma (decisão de telas) |
| `Canvas.Vibrator`, `Canvas.GetAdMobView` | 4 | política: vibração / anúncio removido |
| `String.Concat(object[])`, `(object,object)`; concatenação composta | 4 | tradutor (contrato `ToString` dos operandos) |
| `Enumerable.ToList`, `foreach` com enumerador, `IEnumerator` | 4 | BCL / tradutor |
| Método abstrato sem corpo (`StoreBase.GetItems`, `FriendData.PlayBonus`) | 2 | só livro-razão: abstrato não tem corpo |

## 2. Os 22 slots virtuais sem definição

Todos pertencem às cadeias acima: `MatchForm.Run` (ConnectLogin),
`KairoService.OnInit/OnStart/OnLoad/Connected` (Billing, Friend, GCM),
`BillingForm.Update/Run`, `FriendForm.Init/Update`, `LanguageForm.Update`,
`MainPanel.Show`/`InputPanel.Show` (FEP), `SpForm.Run` e
`TouchEvent.ToString` (`String.Concat`). Hoje cada slot lança
`NotSupportedException` se chamado.

## 3. As 26 políticas offline não integradas

Das 53: 27 emitidas, **25 `not_reached`** (nenhuma raiz do tradutor chega a
elas, porque os chamadores estão nas cadeias rejeitadas) e **1 `rejected`**.
Integrar as políticas é, na prática, destravar as cadeias da seção 1b.

## 4. Ordem de trabalho proposta (por dependência)

1. **Livro-razão** (sem mudar C++): associar `.cctor` → inicializador de tipo,
   lambdas → método pai, construtores implícitos → classe gerada, abstratos →
   sem corpo. Fecha 64 dos 190. **Feito em 2026-11-13:** estados `embedded`
   (62) e `no-body` (2) no livro-razão, por regra com autoteste em
   `tools/update_phase2_progress.py`; pendentes reais: 126.
2. **Tradutor, recursos gerais:** chamada `ref/out` para método do fonte
   (destrava 25, inclusive `MatchForm.Run`); inicializador de objeto em método
   genérico (9); `String.Concat(object…)` com contrato `ToString` exato (4).
3. **BCL:** `Enumerable.ElementAt/ToList`, `Byte.Parse(NumberStyles)`,
   enumerador em `foreach` e `IEnumerator` (14).
4. **Políticas de serviços removidos** (já decididas): Tapjoy, WebBox,
   AppPlugin, GCM/notificação, AdMob, vibração; corpos no backend que seguem a
   política offline registrada, chamadores traduzidos normalmente (≈42).
5. **Depende do usuário (Fase 3):** painel de entrada de texto (`FepPanel`,
   nome de time/jogador) e painel de idioma. São telas/controles; o corpo
   atual lança exceção.

## 5. Cobertura

Ver `docs/coverage-plan.md` (roteiro de execução e lista de métodos nunca
alcançados).

## 6. Resultado da primeira etapa do tradutor (2026-11-13)

`int.TryParse` com destino `out` em elemento de array e a sobrecarga
`(string, NumberStyles.HexNumber, CultureInfo.InvariantCulture, out int)`
passaram a ser traduzidos (runtime: `int32_try_parse_hex_number`, semântica do
Mono: nulo, formato inválido e estouro devolvem `false` com zero). Três casos
novos em `LoweringFixtures` (elemento, hexadecimal, índice fora dos limites
antes da chamada); diferencial contra o Mono: 1.421/1.421.

`KairoBase.ConnectLogin` saiu da causa primeira, mas a cadeia continua
bloqueada um nível abaixo: `KairoBase.GetSignature` →
`KairoPlugin._getSignature` (assinatura do pacote Android, via objeto Java).
Emitidos continuam 1.768; rejeitados 106 → 109 (os três novos são a cadeia
`GetSignature`, antes escondida atrás do `TryParse`).

**Decisão pendente do usuário:** a cadeia `ConnectLogin`/`Connect*` (25
métodos, inclusive o slot `MatchForm.Run`, amigos, escalações e presentes) é o
login e a troca de dados com o servidor da Kairosoft. Nenhuma das 53 políticas
offline cobre a conexão em si. Proposta: política "servidor indisponível"
no ponto `KairoBase.Connect(...)` (mesma resposta que o jogo recebe sem rede),
e assinatura do pacote como valor fixo local sem significado. Precisa de
aprovação por tocar o comportamento de serviços.

## 7. Segunda etapa (2026-11-13, após decisões do usuário)

- **Política 54** (servidor indisponível; assinatura local fixa) emitida: 28
  políticas emitidas. Detalhes em `docs/design/services.md`.
- **MD5** (`MD5.Create().ComputeHash(byte[])`, intrínseco exato, RFC 1321 no
  runtime): diferencial contra o Mono 1.435/1.435 (inclui vetores RFC e nulo).
- A cadeia `ConnectLogin` avança mais um nível e para em
  `JInteger.ToHexString` → `Convert.ToString(int, 16)` (29 métodos). Itens
  seguintes, por métodos destravados: `Convert.ToString(int, 2|8|16)`,
  `Enumerable.ElementAt` sobre `List<T>` (6), inicializador de objeto em
  método genérico (9), `byte.Parse(s, HexNumber)` (4), `Keys/Values.ToList()`.

## 8. Terceira etapa (2026-11-13)

Construções novas no tradutor/runtime, todas com fixture contra o Mono
(diferencial 1.477/1.477): `Convert.ToString(int, 2|8|16)`,
`List<T>.ElementAt` (Linq), `byte.Parse(s, HexNumber|AllowHexSpecifier)`,
`String.Split(char[], StringSplitOptions)`, `String.Concat(object, object)`,
`String.Concat(string, string, string)`; `Debug.LogException` ligado ao log da
plataforma. Políticas: 54 ampliada com `KairoBase.CheckNetwork` (= sem rede) e
`KairoPlugin.SetClockTime` (sem hora de servidor); notificações:
`KairoPlugin.GetGCMRegistrationId` → nulo.

| | antes | agora |
|---|---:|---:|
| Métodos emitidos | 1.768 | 1.785 |
| Rejeitados (diagnóstico do tradutor) | 109 | 85 |
| Slots virtuais sem definição | 22 | 17 |
| Políticas emitidas / não alcançadas | 28 / 25 | 33 / 23 |

A cadeia `ConnectLogin`/`Connect*` traduz inteira. `MatchForm.Run` agora para
em `GameDataRecord.Data.Clone` (inicializador de objeto), a mesma construção
de `BillingManager.Init/Load`. Próximos, por slots destravados:
inicializador de objeto (5 slots), `ShowFepPanel` (3; depende da política de
texto no PC), `Storage.Open(int,bool)` (1), `String.Concat(object[])` (1),
`AppPlugin.LaunchMailer` (1; serviço Android removido), concatenação composta
com contrato de `ToString` (3).

## 9. Quarta etapa (2026-11-13)

- **Inicializador de objeto** (`new C(args){ campo = valor, ... }`) em classes
  do fonte: construtor primeiro, depois cada atribuição da esquerda para a
  direita, lado direito no escopo de fora. Fixtures de ordem, campo do próprio
  objeto (`Clone`) e campo da classe base; diferencial 1.519/1.519.
- **`Storage`**: `Open(int,bool)` e os 7 métodos de instância ligados à
  plataforma já existente (`security_` é gravado e nunca lido no original,
  `Storage.cs:49/70/76`).
- Resultado: 1.789 emitidos, 74 rejeitados, 15 slots (`MatchForm.Run` e
  `KairoService.OnStart` definidos).
- Restantes, por natureza: serviços Android (`AppPlugin.LaunchMailer`,
  `WebBox*`), painel de texto `ShowFepPanel` (design), painel de idioma
  (design), cobrança (`new T()` em métodos virtuais genéricos,
  `ConnectPaymemtMoney`), concatenações em `ToString` de depuração
  (`TouchEvent`, `GameDataRecord`) e `BillingForm._update`,
  `String.Concat(object[])` em `SpForm.Run`.
