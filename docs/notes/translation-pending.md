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
