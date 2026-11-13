# Sessão Claude 1 — orientação, memória do boot ARM e retenção conservadora

Datas: 2026-11-11 e 2026-11-12. Base: `45ebd7d`. Fatos medidos; hipóteses marcadas.

## 1. Ambiente: código de página do console

`cl.exe` e `csc` localizam mensagens no código de página de saída do console
(OEM 850 nesta máquina). O prefixo do `/showIncludes` saiu como
`Observa\x87\xc6o` (850) contra `Observa\xc3\xa7\xc3\xa3o` (65001), medido
alternando `SetConsoleOutputCP`. O Ninja compara bytes com o prefixo gravado em
UTF-8 pelo CMake. Falharam `cmake-header-dependencies` e `portable-differential`
(decodificação UTF-8). Correção: `tools/pc_compiler.py:utf8_console()` fixa 65001
durante o processo e restaura ao sair; chamado por `environment()`,
`verify_phase2.py`, `test_portable.py` e `run_semantic_fixtures.py`.

## 2. Verificação retomável

`verify_phase2.py` grava um recibo por check em
`build/phase2-verification/receipts/`, com chave = hash do snapshot de código,
APK, DLLs gerenciadas, produtor e comando. Relançar pula checks válidos;
`--full` força tudo. A aprovação final recalcula o estado e recusa se algum
recibo não vale para a árvore no fim. `--jobs N` (padrão 1) define
`PLS_BUILD_JOBS`, que limita Ninja/`cmake --build` em `generated_build.py`,
`build_pc.py` e testes que compilam. Pico de memória por check medido com Job
Object (toda a árvore de processos). Execução completa com `--jobs 1`: 0,7 h.

| Check mais pesado | Pico comprometido |
|---|---:|
| game-partial-compile | 1.258.958.848 bytes |
| sdl-and-assets | 608.370.688 bytes |
| portable-split-differential | 608.079.872 bytes |

Resultado negativo: a primeira execução retomável aprovou os 122 checks, mas a
aprovação foi recusada porque `config/collation-license-audit.json` (recibo,
reescrito pelo próprio check) entrava no snapshot de código. Corrigido.

## 3. Salto de memória no boot ARM (29 → 94 MB)

Sonda de pilha (`build/arm-allocation-failure-probe`, Azahar New 100%):
`std::bad_alloc` em `MemoryStream.ToArray`, a partir de
`JarInflater.GetData` ← `ResourceManager.LoadStart` ← `TitleForm.Init`.
`LoadStart` chama `RunOnUiThread(..., true)` em laço; no port isso executa
em linha na thread de UI, então todo o carregamento do título ocorre num único
`host_update`. O coletor só verificava o limite no fim do frame: entre o frame
de boot 480 e a falha, 0 coletas, registro 26.664 → 38.265 objetos, `malloc`
28.893.376 → 95.370.432 bytes. Causa: lixo das cópias por arquivo de
`GetData`, nunca coletado durante o carregamento.

Correção (plataforma/runtime; `LoadStart` intacto):

- `cs::gc_loading_safepoint()` coleta se o limite de volume foi atingido;
  chamado no retorno da chamada `RunOnUiThread` em linha **mais externa**
  com espera (`IApplication::inline_ui_depth`).
- Resultado negativo registrado: a primeira versão coletava também em
  chamadas aninhadas (`Image.Use` é uma chamada em linha dentro da fatia).
  A coleta (~23 ms no emulador) entrou no cronômetro de 150 ms da fatia e
  disparou o comportamento original de retornar antes do incremento: o mesmo
  item foi recarregado indefinidamente (coletas 100–876 idênticas, 19.590 →
  18.795 objetos). Nessa execução o `malloc` estabilizou em 29.285.528 bytes;
  a primeira coleta reduziu 29.154 objetos a 6.891.
- No CTR, `collect`/`inspect` passaram a esperar a rendezvous com sondagem de
  1 ms com prazo (`wait_condition_for`), como o restante do runtime faz por
  causa de `arm11-condition-wakeup.md`. Efeito isolado: pendente (ver §6).
- `--gc-trace` em `build_arm11_null.py` (`PLS_GC_TRACE`): uma linha por coleta,
  apenas diagnóstico.

## 4. Retenção conservadora nos testes do coletor

Diagnóstico `PLS_GC_ROOT_TRACE` (desligado por padrão, `tracing_gc.cpp`):
após a marcação, reenumera as raízes sem marcar e informa as que alcançam
`root_trace_target`, com tipo, palavra a partir do SP, vizinhos, quadro
(desenrolado com `RtlVirtualUnwind` no coletor) e vtable do objeto (DbgHelp).

| Fixture | Raiz medida | Classificação |
|---|---|---|
| GcFixtures, asserção 11 | slot não inicializado do quadro de `Heap::collect` (thread principal), valor interior a buffer de delegate em endereço reaproveitado | resíduo de pilha |
| GcFixtures, asserção 8 | thread principal em espera nativa; slot vizinho a endereços de retorno velhos de `Array<int>::at`; valor interior a `Array<Object*>` reaproveitado | resíduo de pilha |
| Stack, "Popped slot releases…" | mesmo slot (palavra 75) do quadro de `Heap::collect`, contendo o item marcado na coleta anterior | resíduo do próprio coletor (defeito) |

A varredura cobre apenas a parte viva: do SP capturado até o topo
(`copied_low` = SP de `capture`). Nenhuma área abaixo do SP é varrida.

Correções:

- Coletor: `Heap::collect` executa o corpo e depois zera até 16 KiB de pilha
  morta abaixo do chamador, limitado ao fundo registrado da pilha da thread
  (pilhas pequenas do CTR). Remove a autorretenção de um ciclo.
- Testes: coletas de `GcFixtures` em thread de trabalho unida
  (`isolated_gc_collect`) e `scrub_stack()` antes de cada ciclo. Asserções
  inalteradas.

| Medida | Antes | Depois |
|---|---:|---:|
| GcFixtures native-only, ambiente completo | 19/40 falhas | 0/400 e 0/200 |
| GcFixtures, ambiente vazio | 2/40 | — |
| Stack GC | 40/40 falhas (20/20 vazio) | 0/200 |
| Motor isolado | 401 PASS | 401 PASS |
| Fixture CTR (New/Old) | 403/403 | 403/403 |

## 5. PC: partida completa

Release 43 (save da tentativa 31, entradas da 41): 5.753 frames, 709 métodos
do jogo e 197 portáveis, sem lacuna; capturas mostram fim da partida (0–0) e
retorno à gestão. A Release 41 terminou 0–1: placar não determinístico.
Resultado negativo: a Release 42 omitiu `--diagnostic-save-from-attempt 31` e
parou na seleção de saves vazia.

## 6. Pendências

Boot ARM até título/menu/partida nos perfis New e Old com a correção de
fatias; isolamento da sondagem da rendezvous; relógio virtual para semente
fixa; benchmark de hardware; limpeza adiada (candidato em
`build/claude-gc-lazy/`, não medido).

## 7. Rodada seguinte (2026-11-12): boot ARM até o menu

Causa final do salto de memória: `title00.png` (textura 524.312 bytes) passa
de 150 ms no Azahar (abertura de arquivo mediana 16,5 ms; leitura ~5 MB/s).
`ResourceManager.LoadStart` retorna antes do incremento e repete o item
indefinidamente; sem coleta durante a carga, o lixo chegava a 94 MB. Medido
pelo rastreio `--gc-trace`, que passou a registrar a última chave lida.

Correções de plataforma (`LoadStart` intacto):

- Pacote único `converted/catalog.pak` + índice, gerado por
  `prepare_arm11_sd.py` (fontes e áudio continuam arquivos: tipos 4, 5 e 6).
  Leitura de catálogo: 17 ms → 0,8 ms (mediana, Azahar). `--no-pack` mantém
  o modo antigo. Tamanho e SHA-256 de cada entrada conferidos contra
  `catalog.idx`.
- Retenção de uma entrada no catálogo (`read` e `prepare_stream`), liberada
  ao pedir outro recurso ou no fim do frame. Recarga idempotente no original:
  `img[l]=LoadImage`/`Image.Load`, `seb[l]=new Seb` (Reverse/SetCacheSize no
  novo objeto), `sound[l]=SoundOGG.Load`; índices e contadores iguais.
- Atraso artificial de leitura só para diagnóstico (`--read-delay-ms`).

Resultado Azahar New 100%, relógio real, imagem de diagnóstico: título em
13,8 s (108 frames), 86 acertos da retenção, janela de menu completa (300
frames, form 4), média 8,13 ms/frame, malloc 43,8 MB. Não é medição de hardware.

Resultado negativo: com 500 ms por leitura o boot não chegou ao título em
50 min; ciclo de 77 leituras reais por coleta com objetos estáveis. Causa
UNKNOWN; anel de leituras (`--gc-trace`) preparado para identificar.

Relógio virtual (diagnóstico/benchmark): início fixo, 1 ms por consulta,
50 ms por frame; âncora no primeiro `TitleForm`. Duas execuções do replay
completo no PC: 96/97 capturas idênticas (a diferente é o frame 1, antes da
âncora) e mesmo placar 0–0. Sem âncora: 10/97 idênticas, placares 2–1 e 0–0.

Recibo de tentativas: lista de fontes por tentativa trocada por SHA-256 +
contagem (lista completa na pasta privada); 2.091.515 → 404.487 bytes.

## 8. Benchmark em hardware (2026-11-12)

Suíte única (`--scenario suite`): carga com relógio real até o `TitleForm`,
depois relógio virtual e janelas de menu (191–420) e partida (1201–1500);
`sdmc:/pls-benchmark/result.txt` com modelo do console. Guia:
`docs/benchmark-hardware.md`. Resultados privados em `build/hw-return/`.

Execuções no New 3DS XL:

1. v2 (`ed1729a1…`): carga até o título 14,44 s; falha após o frame 181 com
   diálogo de erro do jogo (exceção capturada por `Main.OnUpdate`). Save
   devolvido idêntico ao enviado. Reproduções no Azahar com RTC em 2011 e 2024
   completaram: hipótese da data refutada.
2. v3 (`fbfb2973…`, com registro da última exceção capturada): causa
   `System.IO.IOException: cannot rename` ao gravar `rs/0000`. O sdmc da libctru
   não renomeia sobre arquivo existente; Windows e Azahar substituem.
   Correção em `storage.cpp`: troca via `<nome>.port-old` só para arquivo comum,
   com recuperação antes de leituras e testes de existência.
3. v4 (`a1175e80…`): **completa**. Partida média 12,05 ms, máx. 13,03 ms, sem
   coletas; menu média 7,05 ms, máx. 143,4 ms por coleta de 102,4 ms; título em
   14,23 s; leitura 3,53 MB/s; maior carga de imagem 246 ms.

Retenção de recurso: a liberação no fim do frame anulava a retenção quando o
`LoadStart` roda em worker (`BootForm.Run`) e cada fatia cai num frame.
Agora a entrada só cai após dois frames sem pedido ou a pedido de outro
recurso. Atraso artificial de 500 ms por leitura: título em 451 s, 379 acertos,
memória estável (44 MB). 2 s por leitura: não testado.

Isolamento da sondagem da rendezvous (Azahar New, menu): 23 coletas, pausa
média 97,5 ms com e sem sondagem; sem efeito mensurável neste caminho.

Teste `image-lifetime`: falha intermitente (4/60) por resíduo de pilha;
coletas e checagens de expiração em worker unido + `scrub_stack`: 0/300.

## 9. Critério 2 alterado e limpeza adiada (2026-11-13)

Critério 2 (decisão do usuário): New 3DS real, backend nulo, nenhum frame
acima de 50 ms em menu e partida, incluindo coletas, em três execuções, e
partida com média abaixo de 20 ms. Paridade C++/Mono passou a melhoria opcional
(`docs/backlog.md`). Medição com vídeo real refeita na Fase 4 (`AGENTS.md`).

Limpeza adiada (marcação por época; coletas por volume só marcam; remoção em
fatias de 1 ms no fim do frame; coletas explícitas completas). Fixtures do
coletor aprovadas após correções. **Não adotada**: sonda de pausas do PC,
replay da partida, mesmo método da rodada herdada:

| Variante | Coletas | Média | Máxima | Pausas >= 2 ms |
|---|---:|---:|---:|---:|
| Coletor publicado | 21 | 15,04 ms | 49,83 ms | 20 |
| Limpeza adiada | 22 | 19,87 ms | 140,62 ms | 19 |
| Fatias da limpeza adiada | 19 | 5,66 ms | 17,78 ms | — |

Causa: a varredura publicada compacta faixas em bloco quando muitos objetos
morrem; a adiada remove um objeto por vez (nó de `std::map`, índice por
página, registro denso), bem mais caro. Com fatias de 1 ms a limpeza não
termina antes da coleta seguinte, que conclui a sobra dentro da pausa pelo
caminho lento. Candidato preservado em `build/claude-gc-lazy2/`.
Consequência: reduzir pausas exige estruturas de metadados mais baratas
(registro sem `std::map` por objeto, descritor por ponteiro, índice por
página sem vetores por objeto), não só adiar a varredura.

Adotado do experimento: o coletor zera a pilha morta também **antes** da
coleta (resíduo no quadro de `Heap::collect` de uma thread anterior que usou
as mesmas páginas, medido com `PLS_GC_ROOT_TRACE`). Fixture do motor:
`isolated()` desloca as chamadas para pilha não usada e o caso de buffer
imutável coleta sem raízes do chamador. Motor: 0 falhas em 400 execuções.

## 10. Frequência das coletas e benchmark v5 (2026-11-13)

**Perfil no PC (janela de menu ocioso, 300 frames, sonda de alocação):**
27.600 alocações, 4,88 MB. Strings do código do jogo (~14.700, originais);
`MeshManager` reconstruindo vetores de lotes a cada frame (~3.000 / 2,1 MB,
memória nativa da plataforma, fora do heap gerenciado); `Font` e adaptadores
de fonte criados por frame (~3.600, plataforma). No PC, zero coletas na
janela.

**Rastreio no Azahar (`--gc-trace`):** as coletas dentro da janela de menu
eram pedidas por *toda* inicialização/finalização de formulário
(`FormManagerBase::source_ExecuteInitAndFinish`), com 1–420 KB alocados entre
elas. Cada uma custa ≥ 20 ms (marcar ~25 mil vivos).

**Mudanças (plataforma, sem lógica do jogo):**
- Pedido de coleta só quando o formulário que entra ou sai é janela
  principal (`CheckMainWindow()`), a regra do próprio `FormManager` original.
- Limiar por volume no 3DS de 2 para 4 MiB (heap estável ~16,5 MB retidos).

**Antes / depois (Azahar, New, suíte, mesmo método):**

| | antes | depois |
|---|---|---|
| Coletas na janela de menu | 6 | 3 |
| Tempo de coleta no menu | 185 ms | 127 ms |
| Maior pausa no menu | 68,9 ms | 71,4 ms |
| Máximo por frame no menu | 98,7 ms | 78,1 ms |
| Partida: coletas | 0 | 0 |
| Até o título | 13,34 s | 13,38 s |

O limiar maior não encurtou o carregamento (dominado por E/S). A maior pausa
é uma transição de tela real com ~10 mil mortos: ~21 ms fixos + ~4,6 µs por
morto. **Previsão para o console: ~105 ms, reprovado.** Plano da reforma em
`docs/notes/gc-reform-plan.md`.

v5: `build/benchmark-arm11-5/null_game.3dsx` (`72b3a5f5…`), pasta do cartão
`build/sd-benchmark-v5/`.

**Tradução:** distribuição dos 190 em `docs/notes/translation-pending.md`;
plano de cobertura em `docs/coverage-plan.md`; lista de nunca alcançados em
`docs/coverage-never-reached.md`.
