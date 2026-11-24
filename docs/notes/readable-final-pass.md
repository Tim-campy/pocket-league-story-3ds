# Passada final do modo legível (A1–A7, rodada de 2026-11-17)

Pedido do usuário de 2026-11-17 ("Avaliação e decisões", item A). Cada passo
foi conferido pelos diferenciais contra o Mono antes do seguinte. Commits:
`260d466` (A1–A5), `5a803e2` (A6), este (A7 e os ajustes que ele revelou).

## O que mudou

| Item | Estado | Prova |
|---|---|---|
| A1 inicialização de tipos | Feito. Métodos de instância e construtores do próprio tipo não chamam mais `ensure_initialized`; métodos estáticos mantêm a guarda na entrada. Regra: ECMA-335 II.10.5.3.1 (tipo sem `BeforeFieldInit` é inicializado na primeira chamada de qualquer construtor ou no primeiro acesso a membro estático); ECMA-334 §15.12. **Correção de fidelidade nos dois modos:** o construtor passa a rodar o inicializador do tipo antes do corpo (173 arquivos de `src/game` regenerados). | `tests/translator/TypeInitTimingFixtures.cs` + check `type-init-translated` (Mono, normal e legível iguais: `50\|DB\|1\|DBH\|41\|3\|9\|4\|DBHmVnrxvySs`), inclusive método de instância chamado de dentro do construtor estático |
| A2 `finally` sem exceção de controle | Feito. `run_finally` mantido; o corpo protegido devolve `Flow<R>` (retornou+valor, `break`, `continue`, normal) e depois vem `return`/`break`/`continue` comuns. `ReturnFlow` não aparece mais no modo legível (TitleForm: 15 → 0). A troca de exceção quando o `finally` lança continua igual ao C#. | lowering legível 1.715/1.715 |
| A3 lambdas de ordem | Feito em parte (contagem abaixo). Estático de tipo com inicializador só de constantes, ou já inicializado comprovadamente, é puro; leituras do mesmo array não mudam a exceção observada; lambda que é o valor inteiro de uma declaração ou `return` vira temporários nomeados; atribuições encadeadas viram instruções em sequência na ordem do C#. | lowering legível 1.715/1.715 |
| A4 sobrecargas | Feito. Sufixo pelos tipos dos parâmetros nas posições em que o grupo difere, nunca ordinal; quando todas essas posições têm o mesmo tipo, uma palavra só (`RateConvertFloat`). | amostra compila; lowering legível |
| A5 delegates e aliases | Feito. Lambda C# vira uma chamada `Delegate::from_closure(identidade, chave, [capturas](...) {...}, capturas...)`, que rastreia as capturas; cada `.cpp` declara `namespace kl_<seg> = pls::generated::...` e usa só o alias. Grafia única por tipo: cada tipo aparece com um só nome por unidade. | lowering legível; amostra |
| A6 `release_edges` | Feito, removido com o build `shared_ptr` depois da verificação completa (126/126). Guia de manutenção atualizado. | `5a803e2` |
| A7 relatório | Este documento. Ajuste revelado pelo próprio A7: `(float)i` de `Int32` tipado sai como `pls::cs::Single(i)`, e a aritmética em volta passa a usar os operadores do C1 (`Team`: 284 → 261 `static_cast<double>`). | lowering legível 1.715/1.715; 36 discriminantes ARM em modo legível (controle binary32 34); `test_readable_numeric` 23/23 |

## Lambdas de ordem que restam (A3)

Contagem de `([&]()` nas três classes da amostra (mesmo método nas duas datas):
**167 em `29efd56` → 118 agora** (Team 144 → 102, TitleForm 18 → 12,
SponsorData 5 → 4). O número 212 citado antes contava também os
temporários de instrução. As 118 restantes, por motivo:

| Quantidade | Forma | Por que a ordem importa |
|---|---|---|
| 48 | operação binária | os dois operandos podem lançar exceções diferentes (arrays ou campos distintos, chamadas) ou um deles lê estático cuja inicialização tem efeito (ex.: `Map::MAPCHIP_COAT_WNUM()`: o inicializador de `Map` aloca vetores, então não é "só constantes") |
| 37 | atribuição ou composta usada como valor (elemento ou campo) | o C# avalia alvo, índice e valor numa ordem fixa e o valor da expressão é o armazenado |
| 31 | chamada com argumentos ordenados | argumentos com efeitos ou exceções; o C++ não fixa a ordem dos argumentos |
| 2 | criação de objeto (`create_init`) | alocação antes dos argumentos |

Dentro de `&&`/`||` não há como mover para instruções anteriores sem perder o
curto-circuito, então essas ficam como lambda.

**Proposta para decidir (não aplicada):** `Map` não declara construtor
estático (`BeforeFieldInit`). Por ECMA-335, um tipo assim pode ser inicializado
em qualquer momento antes do primeiro acesso a campo estático, e o Mono o faz ao
compilar o método que o usa, antes de o corpo rodar. Tratar a leitura de
estático de tipo `BeforeFieldInit` como sem ordem eliminaria as duas lambdas de
`Cal_evaCoatMulti` e outras do mesmo tipo. Fica fora da regra que o usuário
fixou ("só constantes ou já inicializado"), por isso não foi feito.

`ensure_initialized` restantes: Team 75 → 36, TitleForm 28 → 8, SponsorData 12
(todos em métodos estáticos, onde o C# exige a guarda na entrada).

## Os quatro trechos lado a lado (A7)

### 1. `Team.Get_playerPosEva` (sobrecarga de 4 parâmetros, expressão float)

C#:
```csharp
public int Get_playerPosEva(Player player, int xi, int yi, bool div)
{
    int[][] coatEva = player.GetCoatEva();
    int sum = GetSum(coatEva, xi, yi, div);
    int num = GameUtil.RateConvert(sum, 0, 700, 0, 100, true);
    Vector3D posFromAddress = Camera.GetPosFromAddress(xi, yi);
    int num2 = 0;
    if (team_id_ == 0) { num2 = ((int)GameUtil.RateConvert(posFromAddress.z_, -900f, 900f, 0f, 100f, true)); } else { num2 = ((int)GameUtil.RateConvert(posFromAddress.z_, 900f, -900f, 0f, 100f, true)); }
    { int recoveredReturn_42482 = (int)((0.7f * (float)num + 0.3f * (float)num2) / 1f); return recoveredReturn_42482; }
}
```

Antes (`29efd56`):
```cpp
std::int32_t Team::Get_playerPosEva(pls::cs::Ref<Player> player, pls::cs::Int32 xi, pls::cs::Int32 yi,
                                    bool div) {
    Team::ensure_initialized();

    pls::cs::Array<pls::cs::Array<std::int32_t>> coatEva = require(player)->GetCoatEva();
    pls::cs::Int32 sum = Team::GetSum(coatEva, xi, yi, div);
    pls::cs::Int32 num = GameUtil::RateConvert(sum, 0, 700, 0, 100, true);
    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> posFromAddress =
        Camera::GetPosFromAddress(xi, yi);
    pls::cs::Int32 num2 = 0;
    if (team_id_ == 0) {
        num2 = (pls::cs::conv_i32(GameUtil::RateConvert_3(
            require(posFromAddress)->z_, static_cast<float>(-900.0f), 900.0f, 0.0f, 100.0f, true)));
    } else {
        num2 = (pls::cs::conv_i32(GameUtil::RateConvert_3(require(posFromAddress)->z_, 900.0f,
                                                          static_cast<float>(-900.0f), 0.0f, 100.0f, true)));
    }
    {
        pls::cs::Int32 recoveredReturn_42482 = pls::cs::conv_i32(
            ((static_cast<double>(((static_cast<double>((static_cast<double>(0.7f) *
                                                         static_cast<double>(static_cast<float>(num)))) +
                                    static_cast<double>((static_cast<double>(0.3f) *
                                                         static_cast<double>(static_cast<float>(num2))))))) /
              static_cast<double>(1.0f))));
        return recoveredReturn_42482;
    }
}
```

Agora:
```cpp
std::int32_t Team::Get_playerPosEva(pls::cs::Ref<Player> player, pls::cs::Int32 xi, pls::cs::Int32 yi,
                                    bool div) {
    pls::cs::Array<pls::cs::Array<std::int32_t>> coatEva = require(player)->GetCoatEva();
    pls::cs::Int32 sum = Team::GetSum(coatEva, xi, yi, div);
    pls::cs::Int32 num = GameUtil::RateConvert(sum, 0, 700, 0, 100, true);
    pls::cs::Ref<kl_util3d::Vector3D> posFromAddress = Camera::GetPosFromAddress(xi, yi);
    pls::cs::Int32 num2 = 0;
    if (team_id_ == 0) {
        num2 = (pls::cs::conv_i32(GameUtil::RateConvertFloat(
            require(posFromAddress)->z_, static_cast<float>(-900.0f), 900.0f, 0.0f, 100.0f, true)));
    } else {
        num2 = (pls::cs::conv_i32(GameUtil::RateConvertFloat(
            require(posFromAddress)->z_, 900.0f, static_cast<float>(-900.0f), 0.0f, 100.0f, true)));
    }
    {
        pls::cs::Int32 recoveredReturn_42482 =
            pls::cs::conv_i32((((((0.7f * pls::cs::Single(num)) + (0.3f * pls::cs::Single(num2)))) / 1.0f)));
        return recoveredReturn_42482;
    }
}
```
A expressão é avaliada em binary64 pelos operadores de `Single`/`FloatEval` e
convertida para `int` sem estreitar, como o Mono ARM. Ainda sobram parênteses
redundantes e o `static_cast<float>(-900.0f)` do menos unário.

### 2. `Team.Cal_evaCoatMulti`

C#:
```csharp
public void Cal_evaCoatMulti(int mode, int[][] data, int cx, int cy, float[] muliti_param)
{
    int[][][] array = null;
    if ((mode == 0)) { array = PANEL_DIRECT; } else if ((mode == 1)) { array = PANEL_DIRECT_R; }
    for (int i = 0; i < array.Length; i++)
    {
        if (muliti_param[i] == 0f) { continue; }
        for (int j = 0; j < array[i].Length; j++)
        {
            if (cx + array[i][j][0] >= 0 && cx + array[i][j][0] < Map.MAPCHIP_COAT_WNUM && cy + array[i][j][1] >= 0 && cy + array[i][j][1] < Map.MAPCHIP_COAT_HNUM)
            {
                int num = cx + array[i][j][0];
                int num2 = cy + array[i][j][1];
                data[num2][num] = (int)((float)data[num2][num] * muliti_param[i]);
            }
        }
    }
}
```

Antes: igual ao de agora, mais `Team::ensure_initialized();` na primeira linha.

Agora:
```cpp
void Team::Cal_evaCoatMulti(pls::cs::Int32 mode, pls::cs::Array<pls::cs::Array<std::int32_t>> data,
                            pls::cs::Int32 cx, pls::cs::Int32 cy, pls::cs::Array<float> muliti_param) {
    pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>> array =
        pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>{};
    if ((mode == 0)) {
        array = Team::PANEL_DIRECT();
    } else if ((mode == 1)) {
        array = Team::PANEL_DIRECT_R();
    }
    for (pls::cs::Int32 i = 0; i < (array).length(); ++i) {
        if (muliti_param[i] == 0.0f) {
            continue;
        }
        for (pls::cs::Int32 j = 0; j < (array[i]).length(); ++j) {
            if (((((cx + array[i][j][0]) >= 0) && ([&]() -> bool {
                      auto cs_left = (cx + array[i][j][0]);
                      auto cs_right = Map::MAPCHIP_COAT_WNUM();
                      return (cs_left < cs_right);
                  }())) &&
                 ((cy + array[i][j][1]) >= 0)) &&
                ([&]() -> bool {
                    auto cs_left = (cy + array[i][j][1]);
                    auto cs_right = Map::MAPCHIP_COAT_HNUM();
                    return (cs_left < cs_right);
                }())) {
                pls::cs::Int32 num = (cx + array[i][j][0]);
                pls::cs::Int32 num2 = (cy + array[i][j][1]);
                data[num2][num] = pls::cs::conv_i32((([&]() -> double {
                    auto cs_left = static_cast<double>(static_cast<float>(data[num2][num]));
                    auto cs_right = static_cast<double>(muliti_param[i]);
                    return (cs_left * cs_right);
                }())));
            }
        }
    }
}
```
Resultado negativo: este é o pior dos quatro. As duas lambdas da condição vêm
de `Map::MAPCHIP_COAT_WNUM()` (inicializador de `Map` aloca; ver a proposta
`BeforeFieldInit` acima) e ficam dentro de `&&`. A terceira multiplica
elementos de dois arrays diferentes (`data` e `muliti_param`), que podem lançar
exceções diferentes; não há como provar, sem análise de fluxo, que
`muliti_param[i]` já foi lido com sucesso no `if` de cima.

### 3. `TitleForm.LoadKiaroAdClickNum` (`return` antes de `try/finally`)

C#:
```csharp
public void LoadKiaroAdClickNum()
{
    if (MyConfig.SMART_PASS || MyConfig.AMAZON) { return; }
    kairoAdClickNum_ = 0;
    if (apdat_.sysSave_.bins[5].Length > 0) {
    ByteArrayInputStream byteArrayInputStream = null;
    try
    {
        byteArrayInputStream = new ByteArrayInputStream(apdat_.sysSave_.bins[5]);
        kairoAdClickNum_ = StreamUtil.ReadShort(byteArrayInputStream);
    }
    finally
    {
        if (byteArrayInputStream != null) { byteArrayInputStream.Close(); }
        byteArrayInputStream = null;
    }
}
}
```

Antes:
```cpp
void TitleForm::LoadKiaroAdClickNum() {
    TitleForm::ensure_initialized();
    try {
        if (cfg::MyConfig::SMART_PASS() || cfg::MyConfig::AMAZON()) {
            throw pls::cs::ReturnFlow<void>{};
        }
        kairoAdClickNum_ = 0;
        if ((require(require(apdat_)->sysSave_)->bins[5]).length() > 0) {
            pls::cs::Ref<generated::java::io::ByteArrayInputStream> byteArrayInputStream =
                pls::cs::Ref<generated::java::io::ByteArrayInputStream>{};
            pls::cs::run_finally(
                [&]() {
                    {
                        byteArrayInputStream = generated::java::io::ByteArrayInputStream::create(
                            require(require(apdat_)->sysSave_)->bins[5]);
                        kairoAdClickNum_ = pls::cs::cast_integral<std::int32_t>(
                            generated::kairo::unity::util::StreamUtil::ReadShort(
                                static_cast<pls::cs::Ref<generated::java::io::InputStream>>(
                                    byteArrayInputStream)));
                    }
                },
                [&]() {
                    if (!is_null(byteArrayInputStream)) {
                        require(byteArrayInputStream)->Close();
                    }
                    byteArrayInputStream = pls::cs::Ref<generated::java::io::ByteArrayInputStream>{};
                });
        }
    } catch (const pls::cs::ReturnFlow<void>& cs_return) {
        return;
    }
}
```

Agora:
```cpp
void TitleForm::LoadKiaroAdClickNum() {
    if (cfg::MyConfig::SMART_PASS() || cfg::MyConfig::AMAZON()) {
        return;
    }
    kairoAdClickNum_ = 0;
    if ((require(require(apdat_)->sysSave_)->bins[5]).length() > 0) {
        pls::cs::Ref<kl_io::ByteArrayInputStream> byteArrayInputStream =
            pls::cs::Ref<kl_io::ByteArrayInputStream>{};
        pls::cs::run_finally(
            [&]() {
                {
                    byteArrayInputStream =
                        kl_io::ByteArrayInputStream::create(require(require(apdat_)->sysSave_)->bins[5]);
                    kairoAdClickNum_ =
                        pls::cs::cast_integral<std::int32_t>(kl_unity_util::StreamUtil::ReadShort(
                            static_cast<pls::cs::Ref<kl_io::InputStream>>(byteArrayInputStream)));
                }
            },
            [&]() {
                if (!is_null(byteArrayInputStream)) {
                    require(byteArrayInputStream)->Close();
                }
                byteArrayInputStream = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
            });
    }
}
```
Sem `ReturnFlow` nem `try/catch` de controle; o `return` fora do `try` é um
`return` comum. Os aliases `kl_io` e `kl_unity_util` substituem os nomes longos.

### 4. Delegate de `TitleForm._draw`

C#:
```csharp
if (!Language.Japanese())
{
    LanguageForm.DrawButton(g, delegate
    {
        formMan_.ChangeCurrentForm(apdat_.frmBoot_);
    });
}
```

Antes (24 linhas: struct local com `trace_edges`, `release_edges`, `Invoke` e
o registro do delegate):
```cpp
    if (!(generated::kairo::unity::util::Language::Japanese())) {
        system::form::LanguageForm::DrawButton(
            g, ([&]() {
                struct Lambda_717_32 : pls::cs::Object {
                    pls::cs::Ref<TitleForm> self;
                    void trace_edges(const pls::cs::EdgeVisitor& v) const override {
                        pls::cs::Object::trace_edges(v);
                        pls::cs::trace_value(self, v);
                    }
                    void release_edges() override {
                        pls::cs::Object::release_edges();
                        pls::cs::clear_ref(self);
                    }
                    void Invoke() {
                        {
                            require(self->formMan_)
                    ...
```

Agora:
```cpp
    if (!(kl_unity_util::Language::Japanese())) {
        system::form::LanguageForm::DrawButton(
            g,
            pls::cs::Delegate<void()>::from_closure(
                pls::cs::raw(this), std::string("M:form.TitleForm._draw(kairo.unity.ui.Graphics):20130"),
                [self = this]() -> void {
                    {
                        require(self->formMan_)
                            ->ChangeCurrentForm(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(
                                require(self->apdat_)->frmBoot_));
                    }
                },
                this),
            20);
    }
```
Uma chamada. `this` vai na lista de capturas da lambda e como argumento de
`from_closure`, que o rastreia; a identidade e a chave reproduzem a igualdade
de delegates do C#. O `20` é o parâmetro opcional de `DrawButton` que o C# não
escreve.

## Limitações conhecidas (não corrigidas nesta passada)

- Parênteses redundantes em expressões aritméticas.
- `static_cast<float>(-900.0f)` no menos unário de literal float.
- Chamadas com argumentos ordenados ainda usam `cs_arg0..N` em bloco
  (`Graphics::DrawStringBold(cs_receiver, cs_arg0, ...)`).
- Campos, elementos de array e retornos de método continuam com os tipos comuns
  (`float`, `std::int32_t`); expressões com eles ainda usam `static_cast<double>`.

## C6b — jogo inteiro em modo legível (estado em 2026-11-18)

| Etapa | Estado |
|---|---|
| 1. Compilar e linkar no PC | **Feito.** `python tools/archived/build_readable_pc.py` (depois de `translator/readable.py sample`) compila as 401 unidades do jogo e as 121 da KairoLibrary portável legíveis e linka `pc_game.exe` (7,2 MB). O CMake ganhou `PLS_GAME_SOURCE_DIR` e `PLS_PORTABLE_GENERATED_DIR` (padrões iguais aos de antes). |
| 2. Executar sob roteiros com salvaguarda e estresse moderado do coletor | **Não feito.** O executor de roteiros, a salvaguarda e o isolamento de saves só existem no build de diagnóstico, que hoje aceita apenas o snapshot do código canônico (`src/game`, conferido por hash contra `config/phase2-game-translation.json`). Falta uma variante de diagnóstico legível: o emissor manter `PLS_METHOD_SCOPE`/`api_call` no modo legível sob uma opção privada, `diagnostic_snapshot.py` aceitar a árvore legível como variante sem promoção de cobertura (como `candidate_generation`) e `build_pc.py` validar essa procedência. O executável legível não foi rodado fora do diagnóstico porque gravaria o save em `%APPDATA%`, fora de `build/`. |
| 3. Verificação completa com o jogo legível | **Não feito** (depende de 2 e de o legível passar a ser a árvore verificada). |
| 4. Build ARM e benchmark para o New 3DS | **Não feito** (depende de 2). |

Defeitos do emissor legível que só apareceram ao compilar o jogo inteiro
(todos corrigidos; diferencial legível 1.715/1.715 depois de cada um; o modo
normal não muda: `src/game` regenerado ficou idêntico):

- ordem dos includes: `generated/...` achava a árvore canônica antes da legível;
- constantes de enum da plataforma (`enum class`: `Image::Format`, `AppEventType`, `DateTimeKind`) sem a conversão explícita;
- bootstrap (`translator/bootstrap_source.py`): lia o relatório canônico da KairoLibrary, substituía o cabeçalho geral por includes com hash e chamava métodos de instância com o objeto como argumento (agora `cs::nonnull(obj)->M(...)`);
- nome injetado de classe: dentro de `panel::MainPanel`, `MainPanel` designa a própria classe (C++), não a base `kfw::panel::MainPanel`;
- constantes `NaN`/infinito: agora `std::numeric_limits` em forma `constexpr`, com os bits do C# (`float.NaN` = 0xFFC00000 → `-quiet_NaN()`);
- temporários com tipo template (`Ref<...> cs_arg0`) não recebiam sufixo ao subir para o bloco e colidiam;
- ocultação de nomes do C++: um método declarado na derivada esconde o de mesmo nome da base (`BillingManager::Load(byte[])` escondia `StoreBase::Load(InputStream)`); a chamada a método-membro não virtual passa a nomear a classe que o declara quando alguma derivada tem método de mesmo nome.

## Tipos BeforeFieldInit (decisão de 2026-11-18, item 1)

Regra observada no Unity Mono 2.6.5 (fixture `BfiTiming` em
`tests/translator/TypeInitTimingFixtures.cs`, check `type-init-translated`):
para um tipo sem construtor estático declarado, o inicializador roda na
**entrada** de cada método (ou lambda) cujo IL referencia um campo estático do
tipo, na ordem da primeira referência no IL, uma vez só:

| Caso | Mono | Tradução (normal e legível) |
|---|---|---|
| referência em ramo não executado | inicializa na entrada (`A12`) | igual |
| três tipos no mesmo método (Second, First, Third) | `CBD` antes do corpo, na ordem do IL | igual |
| referência dentro de laço | antes da 1ª iteração (`ELLL`) | igual |
| dois métodos que leem o mesmo tipo, com outro entre eles | entrada do primeiro, uma vez (`oFpoq`) | igual |
| chamada de método estático do tipo | o chamador não inicializa; a entrada do chamado sim (`cGg`) | igual (guarda na entrada do método estático) |
| método pequeno chamado só num ramo | sem efeito de inlining: inicializa quando ele roda (`565H6`) | igual |
| método do próprio tipo sem campo | inicializa o tipo na entrada (`+Jj`) | igual |
| lambda | na entrada da lambda (`yMz`) | igual |

Resultado completo idêntico nos três: `153:IA12CBD34ELLLoFpoqcGg565H6w+JjyMz`.
Nenhum caso divergiu do esperado. Tipos com construtor estático explícito
mantêm o momento exato atual (primeira leitura/escrita).

Implementação: `Translator.EntryInitTypes` (varredura na ordem do IL; numa
atribuição simples o valor vem antes do campo; lambdas e funções locais à
parte); construtores incluem os inicializadores de campos de instância e os
argumentos de `base(...)`/`this(...)`. No legível, a leitura de estático de tipo
BeforeFieldInit é pura (`InitializedAtRead`). Modo normal: 82 arquivos gerados
mudaram.

Lambdas de ordem nas três classes da amostra: **118 → 90** (Team 102 → 74,
TitleForm 12, SponsorData 4). Por motivo: 39 operações binárias, 27 chamadas com
argumentos ordenados, 22 atribuições usadas como valor, 2 criações de objeto.

`Team.Cal_evaCoatMulti` agora:
```cpp
void Team::Cal_evaCoatMulti(pls::cs::Int32 mode, pls::cs::Array<pls::cs::Array<std::int32_t>> data,
                            pls::cs::Int32 cx, pls::cs::Int32 cy, pls::cs::Array<float> muliti_param) {
    Map::ensure_initialized();

    pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>> array =
        pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>{};
    if ((mode == 0)) {
        array = Team::PANEL_DIRECT();
    } else if ((mode == 1)) {
        array = Team::PANEL_DIRECT_R();
    }
    for (pls::cs::Int32 i = 0; i < (array).length(); ++i) {
        if (muliti_param[i] == 0.0f) {
            continue;
        }
        for (pls::cs::Int32 j = 0; j < (array[i]).length(); ++j) {
            if (((((cx + array[i][j][0]) >= 0) && ((cx + array[i][j][0]) < Map::MAPCHIP_COAT_WNUM())) &&
                 ((cy + array[i][j][1]) >= 0)) &&
                ((cy + array[i][j][1]) < Map::MAPCHIP_COAT_HNUM())) {
                pls::cs::Int32 num = (cx + array[i][j][0]);
                pls::cs::Int32 num2 = (cy + array[i][j][1]);
                data[num2][num] = pls::cs::conv_i32((([&]() -> double {
                    auto cs_left = static_cast<double>(static_cast<float>(data[num2][num]));
                    auto cs_right = static_cast<double>(muliti_param[i]);
                    return (cs_left * cs_right);
                }())));
            }
        }
    }
}
```
(Antes: duas lambdas a mais, uma em cada comparação com `Map::MAPCHIP_COAT_*NUM()`;
ver a seção A7.) A lambda que resta multiplica elementos de dois arrays
diferentes (`data`, `muliti_param`), que podem lançar exceções diferentes.

## C6b etapa 2 — o jogo legível executado (2026-11-19)

Ferramentas: `translator/readable.py diagnostic --original-managed M --output build/<nova>`
(árvores legíveis com a instrumentação por método, opção privada
`readable_diagnostic` do tradutor), `tools/build_pc.py --readable-diagnostic
build/<nova>` (mesmos roteiros, salvaguarda, estresse do coletor e saves
isolados em `build/`; histórico próprio `build/c6b-readable-attempts.json`, que
nunca promove o livro-razão canônico), `tools/run_readable_routes.py` (reexecuta
o conjunto de roteiros do critério 3 num build), `tools/archived/compare_route_sets.py`,
`tools/archived/compare_readable_coverage.py`, `tools/archived/compare_readable_determinism.py`.

**Conjunto de roteiros do critério 3** (85 execuções = cada roteiro concluído do
histórico canônico, por par roteiro/save; os dois builds com o código atual,
`--gc-stress-every 50 --gc-stress-poison`, salvaguarda ativa):

| | canônico | legível |
|---|---|---|
| roteiros concluídos | 83/85 | 83/85 (os mesmos 2 incompletos: `actions.route` atinge 600 s sob estresse; `dialogs-exit.route` encerra o jogo) |
| métodos executados (união) | 1.573 | 1.573 — **nenhum só de um lado** |
| alertas da salvaguarda | 0 | 0 |
| lacunas de tradução | 0 | 0 |

Por execução: mesma cobertura em 77/85, mesmos estados de interface em 83/85,
mesmos quadros de passo (relativos à âncora) em 79/85, mesmos saves em 59/85.
As 8 diferenças de cobertura estão todas na simulação dentro do jogo (IA de
jogador, bola, treino, experiência) e vão nos dois sentidos. O canônico sozinho
mostra o mesmo tipo de variação quando só a velocidade muda: com o código atual,
`chain2` executa `GameUtil.Sin` sem estresse e não com estresse; `delay-load`,
`AddCommandFlagOn/Off`; `saves.route` difere entre duas execuções canônicas
idênticas; `yearend` varia entre execuções legíveis idênticas. Conclusão: sem
indício de defeito de emissão; a simulação depende do tempo real (abaixo).

**Determinismo cruzado** (`compare_readable_determinism.py`, depois da âncora de
título, onde o relógio virtual é rebaseado):
- roteiro dos menus: 180 passos no mesmo quadro relativo, 330 estados de
  interface iguais, mesmo quadro final; o legível é determinístico entre
  execuções (3/3);
- **partida de referência** (`match-touch`, save 31): 127 passos, 18 estados e o
  save do jogo (`rs/0003`) **idênticos byte a byte**;
- trecho de temporada (`season`, 600 s): 702 passos e os 972 estados em comum
  idênticos (as execuções param por tempo real em pontos diferentes, por isso o
  save final difere).

**Limite do harness (resultado negativo).** O boot do legível é 2 quadros mais
curto (16 → 14). A causa é a thread de carregamento do `BootForm`, que espera com
`Thread.Sleep` em tempo real e conversa com a principal pelo campo compartilhado
`bowWait_`; o relógio virtual é um contador único avançado por leituras de
qualquer thread. O canônico, só mais lento (estresse do coletor), passa de 16 a
124 quadros de boot e muda leituras de relógio por quadro e o save do menu.
Portanto, igualdade byte a byte de save só é exigível em trechos sem essa
interação (a partida de referência é um deles). Torná-la exigível em todo lugar
pede um relógio virtual por thread e `Sleep` virtual no modo de diagnóstico.

**Mapa do coletor** (`tests/repository/test_gc_field_tracing.py`) sobre as
árvores legíveis inteiras: 150 listas `trace_edges` no jogo e 35 na KairoLibrary
portável, 0 problemas (campos de referência × rastreados × estáticos × raízes).
O teste foi corrigido para o código inteiro: declarações quebradas em várias
linhas, coleções gerenciadas (`List`, `Dictionary`, `Stack`…) como referência,
`SharedField<T>` só quando `T` é referência, e definições em `_templates.hpp`.

## C6b etapas 3 e 4 — ARM legível e benchmark (2026-11-19)

`python tools/build_arm11_null.py --apk APK --readable build/c6b-readable-diag-2 --output build/<nova>`
(o CMake do ARM ganhou `PLS_PORTABLE_GENERATED_DIR`; padrão inalterado). Um
defeito só apareceu com o GCC do devkitARM (o MSVC aceitou): um `new static`
do C# (`LanguageForm.OnTouchEvent`) com a assinatura de um virtual herdado; o
estático passa a se chamar `OnTouchEventStatic` (diferencial legível 1.715/1.715).

| ARM (Release, O2, uma tarefa) | legível | canônico |
|---|---|---|
| `.3dsx` | 7.507.476 B | 10.786.024 B |
| código (`text`) | 7.385.048 B | 10.562.052 B |
| dados + bss | 12.152 + 65.360 B | 12.160 + 79.760 B |
| compilação | 2.199 s | 2.693 s |

O legível tem 30 % menos código e compila 18 % mais rápido no ARM. PC Release:
`pc_game.exe` legível 7.196.160 B (o canônico não foi medido pelo mesmo
método nesta rodada: `UNKNOWN`).

Azahar (só boot e conclusão; o emulador não mede a velocidade do aparelho):
menu New 3DS, partida New 3DS e menu Old 3DS concluídos sem exceção.

Pasta do cartão: `build/c6b-sd-readable/` (`3ds/` e `pls-benchmark/`, 48 MB,
cenário `suite`), `pls-benchmark.3dsx` SHA-256 `dec1fa98c3f0f282b79420847fa3ad84d85bf0fc3feef7360a11c4fd0ab5b6f3`.
