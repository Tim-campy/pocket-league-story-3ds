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
