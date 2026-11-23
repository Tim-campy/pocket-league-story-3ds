# Última passada do emissor legível (2026-11-22)

Rodada pedida antes do congelamento: emissão mais curta, sem mudar a semântica.
Checkpoint `d9fa275` (verificação completa 127/127). Árvore final do jogo:
`build/claude-readable-final` (privada). Amostra: `docs/readable-sample/`.

## A.1 Blocos de chamada

Temporário só para argumento com efeito ou que pode lançar, quando a ordem é
observável; receptor guardado só quando um argumento pode mudá-lo; sem
`throw` manual; lista de funções puras (`Graphics.GetColorOfRGB`, as duas
sobrecargas: só aritmética sobre os argumentos). Nesta rodada, também as chamadas
ao construtor base (`create_init`), que ainda geravam `Int32 cs_arg0 = 0;`.

`form.TitleForm.cpp` (declarações contadas no texto da amostra formatada):

| Medida | Antes do A.1 (`6362af4`) | Depois do A.1 (`0e530c5`) | Final |
|---|---:|---:|---:|
| Linhas | 1.655 | 1.301 | 1.258 |
| Temporários `cs_argN` | 185 | 77 | 76 |
| `cs_receiver` | 52 | 8 | 8 |
| Blocos `{ ... }` | 73 | 56 | 56 |
| `throw` manual | 52 | 0 | 0 |
| `static_cast` | 125 | 4 | 4 |

`game.Team.cpp`: linhas 3.044 → 2.696 → 2.578; temporários 176 → 115 → 115;
`cs_receiver` 23 → 6 → 6; `static_cast` 533 → 0.

## A.2 Inteiros

`pls::cs::Int32`/`Int64` em toda posição do código legível; nenhum `add_i32`,
`sub_i32`, `mul_i32`, `div_i32` ou `mod_i32` no jogo. Fronteiras com tipos comuns
de C++, por necessidade: slots que redefinem um virtual do runtime ou da
plataforma com inteiro na assinatura (`GetHashCode`, `SetTouchValue`,
`GetTouchValue`) e delegates da plataforma (`Offscreen.GetLayoutMethod`, com cópia
de ida e volta dos parâmetros `ref`). Tamanho e alinhamento iguais aos do inteiro
envolvido (`static_assert`). Saves: partida de referência igual ao canônico; save
do menu igual antes e depois do A.2. Custo no ARM11: [readable-int32-cost.md](readable-int32-cost.md)
(372 → 363 instruções nos cinco kernels; `Cal_evaCoatMulti9block` +4).

## A.3 Textos

Caracteres reais em UTF-8, escape só para controle (sobra `　`, o espaço
ideográfico). `tools/check_readable_literals.py`: 4.230 literais, 0 divergências.
`TitleForm.kairoAdUrl_jp` (`%3soccer`) está assim no C# reconstruído.

## A.4 Limpezas

- a. Chamada a método não virtual da própria classe sem `Tipo::` quando a busca não
  qualificada do C++ chega à mesma função (o tradutor marca, o renomeador escreve
  só o nome). Chamadas virtuais qualificadas: 94 no jogo, todas correspondem a um
  `base.M()` do C#, a um método estático ou a uma sobrecarga não virtual.
- b. Parênteses: os que o C# escreve ficam (inclusive `else if ((num == 1))`, que o
  C# reconstruído escreve assim); os do emissor saem quando a precedência do C++
  garante o mesmo agrupamento. Ficam os pares sobre os quais o compilador avisa
  (`&&` em `||`, operadores de bits misturados, aritmética em deslocamento,
  comparação em comparação), casts, unários repetidos e lambdas.
- c. `pls::cs::Int32 num;` (e `Int64`, `Single`, `Double`, `String`, `Array`,
  `Delegate`): o construtor padrão zera. `Ref<T>` é ponteiro e mantém `= {}`.
- d. **Parcial.** Coleções genéricas da KairoLibrary ganharam membros de
  encaminhamento; o jogo escreve `x->Size()` quando o tipo estático do receptor é
  `Vector<T>` (120 chamadas). Quando o receptor é a classe não genérica
  `java.util.Vector` (1.215 chamadas), a função livre fica: a chamada de membro
  exigiria que a unidade incluísse o cabeçalho de `Vector`, e o tradutor decide as
  inclusões pelos nomes que aparecem no texto. O sufixo `_2` é o nome da classe
  genérica (`Vector` já é a não genérica).
- e. **Não feito.** `kairo.unity.ui.Graphics` é, no C++, a classe da plataforma
  (`pls::kairo::Graphics`, escrita à mão) e o namespace com as constantes e os
  estáticos traduzidos do C# (`kairo::unity::ui::Graphics::DrawString2`). Uma só
  grafia exigiria que a classe da plataforma declarasse membros gerados pelo
  tradutor, invertendo a dependência. Proposta para depois do congelamento.
- f. Apelidos por `.cpp`: `IntArray`, `IntArray2`, `IntArray3`, `StringArray`,
  `FloatArray`, `ByteArray`...

## A.5 Código de apoio

`PLS_MANAGED_CLASS` e `PLS_DELEGATE_SLOTS` (runtime), documentados em
`docs/maintaining-game-code.md`; `tools/check_readable_support.py` (178 classes,
296 slots, 0 problemas; detecta a linha de tabela removida e a classe sem a macro).

## A.6 Lambdas e blocos restantes (jogo inteiro, árvore de diagnóstico)

| Construção (motivo) | Depois do A.2 | Final |
|---|---:|---:|
| Lambdas de ordem (sem os invólucros de diagnóstico) | 4.893 | 4.804 |
| Temporários de argumento `cs_arg` (efeito ou exceção antes do último efeito) | 4.740 | 4.684 |
| `cs_receiver` (argumento pode mudar ou lançar antes da verificação de nulo) | 583 | 583 |
| `cs_left`/`cs_right` (dois operandos que lançam ou têm efeito) | 1.847 | 1.847 |
| `cs_target` (alvo lido antes de um valor com efeito) | 1.091 | 1.054 |
| `cs_old` (atribuição composta com lado direito que lança) | 217 | 180 |
| `cs_index` (índice com efeito) | 506 | 506 |

Atribuição direta nova: composta com receptor campo de `this` e lado direito sem
escrita (`v_.z_ *= -1.0f`), porque o campo lido duas vezes, sem nada entre as
leituras, é o mesmo. Os `cs_target` restantes têm valor com chamada traduzida
(que pode escrever o campo do receptor) ou alvo encadeado (`a.b.c = v`, em que o C#
avalia `a.b` antes de `v`).

## B Salvaguarda de threads

Ver `docs/maintaining-game-code.md`, "Threads e memória". No 3DS: núcleo ilegível
ou diferente do da aplicação é fatal, com mensagem em `stderr`
(`sdmc:/pls-benchmark/stderr.log`). PC: leitura sem barreira (x86 TSO); outros
alvos: `acquire`. `tools/test_type_init_translated.py` roda o PC nos dois caminhos.

## C Validação (árvore final `build/claude-readable-final`)

- Verificação completa 127/127 (checkpoint `d9fa275`).
- Diferencial do rebaixamento legível contra o Mono: 1.715/1.715.
- Determinismo cruzado: partida de referência (`match-touch`, save 31) com 127
  passos, 18 estados e `rs/0003` idênticos ao canônico 430; menus (`menu-explore`)
  com 180 passos e 330 estados idênticos ao canônico 431.
- Conjunto de roteiros do critério 3, refeito do zero sobre a árvore final
  (tentativas 231–318), sob a salvaguarda e o estresse moderado do coletor:
  87 execuções, 85 roteiros concluídos, 0 alertas, 0 lacunas. Contra a
  reexecução do canônico atual: 1.572 × 1.573 métodos, a diferença é
  `TPlayer.AddCommandRunningRegist` (simulação dependente da velocidade, como nas
  rodadas anteriores).
- Resultado negativo do executor: a primeira chamada retomou o estado da rodada
  anterior (`build/c6b-route-set-readable.json`) e só refez as 2 execuções
  incompletas; o estado foi guardado à parte e o conjunto refeito do zero.
- `lots.route` ficou incompleto uma vez (o carregamento da partida, em fatias de
  tempo real, terminou 216 quadros depois e o roteiro passou o tempo esperando no
  passo 451); refeito, concluiu em 473 s.
- `zoom.route`: os métodos de escala da `GameForm` aparecem só na tentativa
  canônica 335 (código de 2026-11-19); a reexecução do canônico atual também não
  os alcança. Não é diferença do legível.
- Literais 4.230/0; código de apoio 178 classes/0; mapa do coletor 0 problemas;
  kernels contra o ARM 144/144; inicialização de tipos igual ao Mono nos dois
  caminhos de memória.

### ARM

- Build ARM11 da árvore final (`build/claude-arm-readable-final`, recibo de prova
  emitido). A primeira tentativa falhou no link: as chamadas de membro do A.4d não
  traziam o nome da função livre, e o empacotador (que decide por nome quais
  `_templates.hpp` incluir) deixou de incluir as definições de `FastVector`. No PC o
  MSVC achou a instanciação em outra unidade. Correção: a chamada carrega
  `PLS_DEP(função)`, lido pelo empacotador e removido ao gravar.
- Azahar, New 3DS, partida: janela de 300 quadros completa, média 9,6 ms, p95
  11,7 ms, máximo 13,0 ms, sem coletas (o emulador não mede o aparelho). As 4
  threads gerenciadas registram o núcleo; no Azahar a leitura dá -32768 nas duas
  (já documentado em `perf-regression-2026-11-21.md`; no aparelho, 0 e 0).
- Pasta do cartão para o benchmark (`suite`): `build/claude-sd-final` (privada).

### Testes intermitentes encontrados (anteriores à rodada)

- `tracing-gc-engine`: `stress_and_poison`, asserções 405/407 (o objeto sem raiz
  não foi recolhido / o heap não ficou vazio), 3 falhas em 30 execuções isoladas.
  A fixture e `src/runtime/tracing_gc.cpp` não mudam desde `b9c136f` (2026-11-15).
  Hipótese: retenção conservadora por resíduo de pilha (mesmo tipo do problema de
  2026-11-12). Causa exata: **UNKNOWN**. Não corrigido.
- `diagnostic-leaf-guards`: falhou uma vez dentro da verificação completa
  (`A caught guard was not fatal to the supervisor`, supervisor com limite de
  10 s); 3/3 isolado. Hipótese: tempo do supervisor com a máquina carregada.
- Com as duas retomadas, a verificação completa terminou 127/127.

## Resultados negativos

- A.4d parcial e A.4e não feito (acima).
- `Cal_evaCoatMulti9block` com 4 instruções a mais no ARM11.
- Save do menu: o legível difere do canônico desde rodadas anteriores (execuções
  110 e 201; a partir dos bytes 4–7 do cabeçalho). Causa: **UNKNOWN**. A partida de
  referência é idêntica.
