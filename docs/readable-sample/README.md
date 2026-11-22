# Amostra do código legível (critério 5) — estado de 2026-11-22

Três classes do jogo, mais um trecho de uma quarta, geradas pelo tradutor em
**modo legível** a partir do C# reconstruído (`reference/src/Assembly-CSharp/`).
É o código que, no congelamento (`v1.0.0-faithful`), passa a ser o código-fonte
do jogo, mantido à mão. Esta amostra existe para revisão de qualidade.

| Classe | C# original | Arquivos | Linhas C++ (hpp + cpp) |
|---|---|---|---|
| `data.SponsorData` (dados) | 251 | `data.SponsorData.hpp/.cpp` | 95 + 327 |
| `game.Team` (regras, ponto flutuante) | 2.301 | `game.Team.hpp/.cpp` | 299 + 2.865 |
| `form.TitleForm` (formulário, desenho) | 975 | `form.TitleForm.hpp/.cpp` | 148 + 1.655 |
| `form.SubForm` (trecho) | — | `form.SubForm.excerpt.cpp` | 214 |

Nenhum identificador com hash (`cs_<hash>`) aparece. As unidades compilam com
MSVC sem erros. O jogo inteiro nesta forma compila no PC e no ARM (3DS) e passa
pela mesma bateria do código canônico (seção "Como a equivalência é garantida").

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
  virtuais são membros `virtual`. O coletor exige `trace_edges` (lista as
  referências gerenciadas de cada objeto) e os metadados `managed_type_name`,
  `source_reference_assignable`.
* **Construção:** `Tipo::create(...)` aloca e inicializa (o `new` do C#);
  `create_init` só inicializa (para construtores derivados).
* **Estáticos:** armazenamento `Tipo_campo_storage`; leitura e escrita pelo
  acessor `Tipo::campo()`. `Tipo::ensure_initialized()` é o inicializador de
  tipo do CLR: chamado na entrada dos métodos que referenciam estáticos de um
  tipo, como o Mono faz (`BeforeFieldInit`), ou no primeiro acesso (tipos com
  construtor estático explícito). Custo do caminho rápido: uma leitura e um
  desvio, sem barreira de memória.
* **Nulo:** `require(x)` é a `NullReferenceException` do C# (C# não escreve isso;
  o CLR checa em cada acesso). O caminho de exceção fica fora de linha.
* **Números** (2026-11-21):
  * `int` em locais e parâmetros: `pls::cs::Int32` (estouro com volta, divisão
    com as exceções do C#); em campos, `std::int32_t`.
  * `float`: `pls::cs::Single` em **toda** posição (campo, array, parâmetro,
    retorno, local, constante); `double`: `pls::cs::Double`.
  * Aritmética de `float` produz `pls::cs::FloatEval` (binary64, a regra do Mono
    no ARM) e estreita para binary32 ao ser guardada, passada ou devolvida —
    dentro dos tipos. A regra inteira está em `src/runtime/numeric_types.hpp`.
  * Conversões que o C# escreve continuam visíveis: `(float)x` →
    `pls::cs::Single(x)`, `(double)x` → `pls::cs::Double(x)`, `(int)f` →
    `pls::cs::conv_i32(f)`. Nenhum `static_cast<float>`/`<double>` resta.
* **Ordem de avaliação:** C# avalia da esquerda para a direita; C++ não garante a
  ordem dos operandos. Onde a ordem é observável (um operando pode lançar ou ter
  efeito), o tradutor usa uma lambda que avalia `cs_left` antes de `cs_right`
  (`([&]() -> T { auto cs_left = ...; auto cs_right = ...; return ...; }())`).
  Onde não é observável, a expressão sai inline.
* **Atribuição a elemento de array:** um bloco `{ auto cs_target = ...; auto
  cs_index = ...; auto cs_value = ...; cs_target.set_Item(cs_index, cs_value); }`
  preserva a ordem do C# (array, índice, valor) e as exceções.
* **Strings:** `literal(u"...")` (literal internado, como o CLR).
* **Referências cruzadas:** cada método traz `// M:<DocID>` do C# de origem.
* **Casts de referência:** os `static_cast<pls::cs::Ref<T>>` que restam são
  upcasts de referência explícitos (ex.: passar um `Ref<GameForm>` onde se
  espera `Ref<FormBase>`); não são numéricos.
* **Instrumentação:** no código que será congelado ficam as macros
  `PLS_METHOD_SCOPE`/`pls::diagnostic::api_call`, sem efeito fora do build de
  diagnóstico (decisão de 2026-11-21); esta amostra foi gerada sem elas.

## Como a equivalência é garantida (jogo inteiro, nesta forma)

| Prova | Resultado |
|---|---|
| Fixtures de rebaixamento do tradutor, saída legível contra o Mono | 1.715/1.715 |
| 36 discriminantes de ponto flutuante contra o oráculo ARM | 36/36 (controle binary32: 34/36) |
| 5 kernels de ponto flutuante do jogo, entradas capturadas, contra o ARM | 144/144 byte a byte |
| Tempo de inicialização de tipos contra o Mono | idêntico |
| 85 roteiros de jogo do critério 3 (com estresse do coletor) | 0 alertas, 0 lacunas; mesma cobertura do canônico (± 2 métodos de simulação dependente de velocidade) |
| Partida de referência contra o código canônico | passos, estados de interface e save idênticos byte a byte |
| Desempenho no New 3DS XL | partida 10,2–10,6 ms de média (meta ≤ 12 ms) |

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
void Team::Cal_evaCoatMulti9block(pls::cs::Array<pls::cs::Array<std::int32_t>> data, pls::cs::Int32 cx,
                                  pls::cs::Int32 cy, pls::cs::Array<pls::cs::Single> muliti_param) {
    Map::ensure_initialized();

    pls::cs::Int32 num = pls::cs::Int32{};
    pls::cs::Int32 num2 = pls::cs::Int32{};
    for (pls::cs::Int32 i = 0; i < (Team::PANEL_DIRECT_R_9BLOCK()).length(); ++i) {
        num = (cx + Team::PANEL_DIRECT_R_9BLOCK()[i][0]);
        num2 = (cy + Team::PANEL_DIRECT_R_9BLOCK()[i][1]);
        if ((((num >= 0) && (num < Map::MAPCHIP_COAT_WNUM())) && (num2 >= 0)) &&
            (num2 < Map::MAPCHIP_COAT_HNUM())) {
            data[num2][num] = pls::cs::conv_i32((([&]() -> pls::cs::FloatEval {
                auto cs_left = pls::cs::Single(data[num2][num]);
                auto cs_right = muliti_param[i];
                return (cs_left * cs_right);
            }())));
        }
    }
}
```

A lambda existe porque os dois operandos podem lançar (`IndexOutOfRange`,
`NullReference`) e o C# exige que o da esquerda lance primeiro.

## O que ainda não está limpo (conhecido)

* **Parênteses redundantes** (`if ((mode == 0))`, `(((a) && b))`): a saída
  preserva o agrupamento da árvore de expressão sem simplificar.
* **Inicializações explícitas por valor padrão** (`pls::cs::Int32 num =
  pls::cs::Int32{};`) onde o C# declara sem valor (`int num;`, atribuído antes de
  ser lido pela regra de atribuição definida do C#).
* **Lambdas de ordem e blocos `cs_target`/`cs_value`**: corretos, porém
  verbosos; reduzi-los exige provar, caso a caso, que a ordem não é observável.
* **`require(...)` em quase todo acesso a membro** (714 em `game.Team.cpp`): é a
  checagem de nulo do CLR tornada explícita; removê-la exigiria aprovação (regra
  do projeto: nenhuma checagem é removida).
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

**Para a revisão:** os arquivos são saída do gerador; os comentários sobre
qualidade valem para o padrão de emissão (corrigido no tradutor antes do
congelamento) ou, depois dele, para a manutenção à mão.
