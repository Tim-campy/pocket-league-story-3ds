# Amostra do código legível (critério 5) — estado de 2026-11-23

Três classes do jogo, mais um trecho de uma quarta, geradas pelo tradutor em
**modo legível** a partir do C# reconstruído (`reference/src/Assembly-CSharp/`).
É o código que, no congelamento (`v1.0.0-faithful`), passa a ser o código-fonte
do jogo, mantido à mão. A amostra foi aprovada pelo usuário em 2026-11-23.

| Classe | C# original | Arquivos | Linhas C++ (hpp + cpp) |
|---|---|---|---|
| `data.SponsorData` (dados) | 251 | `data.SponsorData.hpp/.cpp` | 82 + 311 |
| `game.Team` (regras, ponto flutuante) | 2.301 | `game.Team.hpp/.cpp` | 287 + 2.535 |
| `form.TitleForm` (formulário, desenho) | 975 | `form.TitleForm.hpp/.cpp` | 115 + 1.245 |
| `form.SubForm` (trecho) | — | `form.SubForm.excerpt.cpp` | 212 |

Nenhum identificador com hash (`cs_<hash>`) aparece. As unidades compilam com
MSVC sem erros. O jogo inteiro nesta forma compila no PC e no ARM (3DS) e passa
pela mesma bateria do código canônico (seção "Como a equivalência é garantida").
Evolução de `form.TitleForm.cpp`: 1.655 linhas antes da passada final de emissão,
1.245 agora.

## Contexto que o revisor precisa

* **Origem:** Pocket League Story (Kairosoft), Unity 5.3.4 / Mono 2.6.5. O C#
  foi reconstruído byte a byte e traduzido para C++17 por um tradutor próprio
  (Roslyn). O objetivo é **fidelidade observável ao Mono**, não C++ idiomático:
  ordem de avaliação, exceções, aritmética, inicialização de tipos e coleta de
  lixo têm de se comportar como no jogo original.
* **Runtime:** `pls::cs` (strings UTF-16, arrays com checagem de limites e de
  nulo, exceções do CLR, coletor de lixo próprio de marcar e varrer, preciso no
  heap). `pls::kairo` é a plataforma (desenho, entrada, som). `pls::generated`
  é a KairoLibrary traduzida (`kl_*` são apelidos de namespace dela).
* **Plataforma-alvo:** Nintendo 3DS (ARM11 a 268/804 MHz). O desempenho conta.

## Convenções que aparecem no código

* **Classes:** `struct` com campos e métodos membro de mesmo nome do C#; métodos
  virtuais são membros `virtual`. Cada classe traz duas linhas de apoio:
  `PLS_MANAGED_CLASS(nome C#, Classe, Base, interfaces...)` (identidade do tipo,
  `is`/`as`) e `PLS_DELEGATE_SLOTS(Base, {slot, método}, ...)` (identidade dos
  delegates); o coletor exige `trace_edges`. Regras em
  `docs/maintaining-game-code.md`.
* **Chamadas na própria classe** saem sem `Classe::` (`ChangeState(0)`); ficam
  qualificadas as chamadas não virtuais à base (`base.Init()` →
  `MyFormBase::Init()`) e os casos em que um nome é ocultado.
* **Métodos que redefinem um virtual da plataforma ou do runtime** com `int` na
  assinatura (`SetTouchValue`, `GetHashCode`) têm a assinatura da plataforma
  (`std::int32_t type_raw`) e convertem para `pls::cs::Int32` na entrada.
* **Construção:** `Tipo::create(...)` aloca e inicializa (o `new` do C#);
  `create_init` só inicializa (para construtores derivados).
* **Estáticos:** acessor `Tipo::campo()`. `Tipo::ensure_initialized()` é o
  inicializador de tipo do CLR (chamado na entrada dos métodos que referenciam
  estáticos de um tipo, como o Mono faz com `BeforeFieldInit`, ou no primeiro
  acesso). Caminho rápido: uma leitura e um desvio, sem barreira de memória.
* **Nulo:** `require(x)` é a `NullReferenceException` do C# (o CLR checa em cada
  acesso; o C# não escreve isso). O caminho de exceção fica fora de linha.
* **Números:**
  * `int` é `pls::cs::Int32` e `long` é `pls::cs::Int64` **em toda posição**
    (estouro com volta, divisão com as exceções do C#, mesmo tamanho e alinhamento
    do inteiro nativo); nenhum `add_i32`/`sub_i32` etc.
  * `float` é `pls::cs::Single` e `double` é `pls::cs::Double` em toda posição.
    Aritmética de `float` produz `pls::cs::FloatEval` (binary64, a regra do Mono
    no ARM) e estreita para binary32 ao ser guardada, passada ou devolvida.
  * Conversões que o C# escreve continuam visíveis, na forma mais curta:
    `(float)x` → `pls::cs::Single(x)`, `(int)f` → `pls::cs::to_int32(f)`.
  * Locais sem valor inicial no C# (`int num;`) saem sem inicializador
    (`pls::cs::Int32 num;`, o tipo zera).
* **Arrays:** apelidos curtos por arquivo (`IntArray`, `IntArray2`, `FloatArray`,
  `StringArray`, `ByteArray`...), declarados depois dos includes.
* **Textos:** `literal(u"...")` com os caracteres reais em UTF-8 (escape só para
  controle e para o espaço ideográfico `　`). Cada literal é conferido contra
  o C# (`tools/check_readable_literals.py`).
* **Parênteses:** os que o C# escreve ficam (inclusive `else if ((num == 1))`,
  que está assim no C# reconstruído); os demais saem quando a precedência do C++
  garante o mesmo agrupamento. Ficam também os que os compiladores pedem
  (`&&` dentro de `||`, operadores de bits misturados).
* **Ordem de avaliação:** C# avalia da esquerda para a direita; C++ não garante a
  ordem dos operandos. Onde a ordem é observável (um operando pode lançar ou ter
  efeito), o código a escreve:
  * **chamadas:** temporários `cs_argN` só para os argumentos com efeito ou que
    podem lançar antes do último efeito; `cs_receiver` só quando um argumento pode
    mudar o receptor;
  * **atribuições:** um bloco `{ auto cs_target = ...; <temporários do valor>;
    T cs_value = ...; require(cs_target)->campo = cs_value; }`, com os temporários
    em sequência, na ordem do C#;
  * **operadores:** uma lambda `([&]() -> T { auto cs_left = ...; auto cs_right =
    ...; return ...; }())` quando a expressão é usada como valor dentro de outra.
  Onde a ordem não é observável, a expressão sai direta.
* **Referências cruzadas:** cada método traz `// M:<DocID>` do C# de origem.
* **Instrumentação:** no código que será congelado ficam as macros
  `PLS_METHOD_SCOPE`/`pls::diagnostic::api_call`, sem efeito fora do build de
  diagnóstico; esta amostra foi gerada sem elas. As coletas explícitas do jogo
  (`JSystem.Gc()`) saem dentro de `{ pls::cs::GcCallSite gc_site("M:..."); ... }`,
  que só nomeia a origem da coleta para o benchmark.

## Como a equivalência é garantida (jogo inteiro, nesta forma)

| Prova | Resultado |
|---|---|
| Fixtures de rebaixamento do tradutor, saída legível contra o Mono | 1.715/1.715 |
| 36 discriminantes de ponto flutuante contra o oráculo ARM | 36/36 (controle binary32: 34/36) |
| 5 kernels de ponto flutuante do jogo, entradas capturadas, contra o ARM | 144/144 byte a byte |
| Tempo de inicialização de tipos contra o Mono | idêntico (nos dois caminhos de memória) |
| 85 roteiros de jogo do critério 3 (com estresse do coletor) | 0 alertas, 0 lacunas; mesma cobertura do canônico (± 1 método de simulação dependente de velocidade) |
| Partida de referência contra o código canônico | passos, estados de interface e save idênticos byte a byte |
| Roteiro de menu contra o canônico | passos e estados idênticos; o save difere só no que depende da ordem das threads (`docs/notes/menu-save-difference.md`) |
| Desempenho no New 3DS XL (três execuções) | partida 9,7–10,6 ms de média; menu 6,5–6,7 ms |

## Um método lado a lado: `Team.Cal_evaCoatMulti9block`

C#:

```csharp
public void Cal_evaCoatMulti9block(int[][] data, int cx, int cy, float[] muliti_param)
{
    int num;
    int num2;
    for (int i = 0; i < PANEL_DIRECT_R_9BLOCK.Length; i++)
    {
        num = cx + PANEL_DIRECT_R_9BLOCK[i][0];
        num2 = cy + PANEL_DIRECT_R_9BLOCK[i][1];
        if (num >= 0 && num < Map.MAPCHIP_COAT_WNUM && num2 >= 0 && num2 < Map.MAPCHIP_COAT_HNUM)
        {
            data[num2][num] = (int)((float)data[num2][num] * muliti_param[i]);
        }
    }
}
```

C++ legível (`game.Team.cpp`):

```cpp
void Team::Cal_evaCoatMulti9block(IntArray2 data, pls::cs::Int32 cx, pls::cs::Int32 cy,
                                  FloatArray muliti_param) {
    Map::ensure_initialized();

    pls::cs::Int32 num;
    pls::cs::Int32 num2;
    for (pls::cs::Int32 i = 0; i < Team::PANEL_DIRECT_R_9BLOCK().length(); ++i) {
        num = cx + Team::PANEL_DIRECT_R_9BLOCK()[i][0];
        num2 = cy + Team::PANEL_DIRECT_R_9BLOCK()[i][1];
        if (num >= 0 && num < Map::MAPCHIP_COAT_WNUM() && num2 >= 0 && num2 < Map::MAPCHIP_COAT_HNUM()) {
            data[num2][num] = pls::cs::to_int32((([&]() -> pls::cs::FloatEval {
                auto cs_left = pls::cs::Single(data[num2][num]);
                auto cs_right = muliti_param[i];
                return cs_left * cs_right;
            }())));
        }
    }
}
```

A lambda existe porque os dois operandos podem lançar (`IndexOutOfRange`,
`NullReference`) e o C# exige que o da esquerda lance primeiro.

## O que ainda não está limpo (conhecido)

* **`require(...)` em quase todo acesso a membro** (720 em `game.Team.cpp`, 282 em
  `form.TitleForm.cpp`): é a checagem de nulo do CLR tornada explícita; removê-la
  exigiria aprovação (regra do projeto: nenhuma checagem é removida).
* **Lambdas de ordem** usadas como valor (68 em `game.Team.cpp`) e blocos
  `cs_target` (41): corretos e necessários pela ordem do C#; menos que antes
  (lambdas em posição de comando viraram blocos).
* **Conversões intermediárias** ao achatar um valor (`pls::cs::Single cs_value =
  pls::cs::Int32(GameUtil::RateConvert(...))`): mostram o tipo que o valor tinha no
  C# antes de ser guardado.
* **Duas grafias de alguns tipos da plataforma** (`pls::kairo::Graphics` e
  `kairo::unity::ui::Graphics::DrawString2`) e as coleções `java.util.Vector` como
  funções livres (`Vector_2_Size(x)`): no `docs/backlog.md`, para depois do
  congelamento.
* **Nomes do C#** (inclusive erros de grafia do original, como `muliti_param`,
  `lastKickeer_`) são mantidos de propósito.

## Como foi gerado

```
python translator/readable.py sample --original-managed <Managed do APK>
```

Traduz KairoLibrary e Assembly-CSharp com `"readable": true` para
`build/readable-sample/` (fora do Git), formata com clang-format
(`translator/readable.clang-format`), copia as classes para cá e compila cada
uma com MSVC. Nenhum asset do jogo é lido; os DLLs do APK servem só de
metadados para o Roslyn.
