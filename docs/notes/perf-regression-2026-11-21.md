# Regressão de desempenho: atribuição e correção (2026-11-21)

Pedido do usuário (item A da rodada de 2026-11-21): bissecção entre a v6 e o
atual, atribuição por mudança, diferença canônico × legível por categoria,
inicialização de tipos com custo próximo de zero, tipos numéricos no ARM, meta
de 12 ms de média na partida no New 3DS.

## Método

`tools/perf_bisect.py`: para cada commit, um worktree próprio
(`.claude/worktrees/bisect-<sha>`), a tradução de diagnóstico **daquele** commit,
o snapshot, o build ARM (backend nulo, `-O2`) e o Azahar com
`tools/run_arm11_null.py --scenario menu|match --model new`, lendo
`elapsed_ms.mean` (janelas de 300 quadros). Mesmo emulador (`e6d76f0b…`) e
mesma pasta de assets em todos os pontos. Resultados em
`build/perf-bisect/summary.json` (privado).

**Limite do método.** O Azahar mede ticks emulados, não o hardware. O menu é
estável (variação < 0,05 ms entre execuções); a partida varia 1–2,5 ms entre
execuções do mesmo binário (a carga e o estado da partida dependem do relógio
real do convidado), então a partida não atribui diferenças pequenas. O custo
das barreiras de memória do ARM11 (`DMB`, `mcr p15,0,rX,c7,c10,5`) e de cache
não é reproduzido com fidelidade: **só o console decide**.

**Correção de um número anterior.** O "v6 8,87 ms no Azahar" da auditoria era
um número de **hardware** (execução 1 do v5, que terminou a partida dentro da
janela). Medida agora no Azahar, a v6 dá 14,72 / 15,31 ms na partida.

## Bissecção (Azahar, New 3DS)

| Commit | Data | Mudança | Menu (ms) | Partida (ms) |
|---|---|---|---|---|
| `dd2012f` | 11-14 | **v6** | 8,13 / 8,14 | 14,72 / 15,31 |
| `3c0ab32` | 11-15 | roteiro de temporada, amostra legível | 8,16 / 8,15 / 8,12 | — |
| `74890cf` | 11-15 | raízes de estáticos entre unidades; local de origem nas exceções | **8,57** / 8,57 / 8,58 | 14,70 / 15,30 / 14,24 |
| `b9c136f` | 11-15 | modo de estresse do coletor | 8,60 / 8,61 / 8,59 | 13,77 / 15,36 |
| `9dc2396` | 11-15 | roteiros de cobertura | 8,60 / 8,62 / 8,59 | 12,78 |
| `6b5b151` | 11-15 | revisão da ordem de travas do coletor | **8,73** / 8,73 / 8,74 | 14,40 / 12,90 / 14,82 |
| `13a98dd` | 11-17 | decisões 4a (ref de campo nulo, `Sin(-0)`) | 8,76 / 8,73 / 8,73 | 14,77 / 14,96 / 15,16 |
| `29efd56` | 11-17 | antes de A1 | 8,73 / 8,73 / 8,76 | 14,83 / 14,49 / 14,92 |
| `260d466` | 11-18 | A1 (inicialização em construtores) | 8,74 / 8,74 / 8,74 | 14,85 / 15,26 |
| `5a803e2` | 11-18 | A6 (sem `release_edges`) | 8,73 / 8,76 / 8,73 | 14,81 / 13,45 |
| `5ac6196` | 11-18 | BeforeFieldInit na entrada | 8,63 / 8,64 / 8,62 | 15,67 / 15,84 / 15,17 |
| `eddc7b9` | 11-20 | atual (orientação, GamePad) | 8,64 / 8,64 | 13,33 / 15,61 |

**Atribuição no menu (Azahar):** +0,43 ms em `74890cf` e +0,13 ms em `6b5b151`;
A1, BFI, A6, as decisões 4a e a orientação não pioram o menu no emulador. No
`74890cf` o código gerado quase não mudou (4 raízes estáticas novas); o caminho
quente da checagem de limites é idêntico (só o código frio cresceu ~40 bytes por
ponto de acesso, `throw_array_bounds(index,size)`). A causa exata dos 0,43 ms
dentro desse commit é `UNKNOWN`; a hipótese de exceções lançadas por quadro no
menu (cada uma passou a construir uma `std::string` de origem) não foi medida.
Ela deixou de importar: as correções abaixo levam o menu abaixo da v6.

**Partida:** a variação entre execuções (até 2,5 ms) é maior que as diferenças
entre commits; no Azahar a partida não atribui a regressão.

## Por que o console perde mais que o emulador

No console a partida do legível ficou ~55 % mais lenta que a v6 (17–18,7 ms
contra 10,5–11,8 ms); no Azahar, ~25 %. A causa principal encontrada no código:

* **Inicialização de tipos.** Cada `cs_init_X()` / `Type::ensure_initialized()`
  tinha, no caminho rápido, a guarda de um `static` local (`__cxa_guard`, com
  `DMB`) para o `TypeInitState` e outra para o `GcRootProvider`, mais
  `completed_.load(acquire)` — **3 barreiras `DMB` por chamada**. Como o
  inicializador inteiro estava no mesmo corpo, a função não era expandida em
  linha e o prólogo (9 registradores, 524 bytes de pilha em
  `Player::ensure_initialized`) rodava antes do teste. `Player::Update` chamava
  `Player::ensure_initialized` 3 vezes por jogador e por quadro, além dos
  acessores de estáticos de outros tipos (`Map::COAT_GOAL1_GLOBALPOS()` →
  `Map::ensure_initialized()`), cada um com as suas barreiras. Uma `DMB` no
  ARM11 MPCore drena o buffer de escrita; no Azahar ela quase não custa.
* **Legível × canônico (antes da correção):** no legível, `require<T*>` não era
  expandido em linha (o `throw NullReferenceException()` no corpo o tornava
  grande: 19 chamadas só em `Player::Update`), nem `Array<Ref<T>>::get_Item`
  (o caminho de covariância com `dynamic_pointer_cast` estava no corpo: 8
  chamadas em `Player::Update`), e os acessores de estáticos de tipos
  BeforeFieldInit chamavam `ensure_initialized` a cada leitura. No canônico as
  checagens de nulo eram expandidas no lugar.
* **Tipos numéricos (A.3): não são causa.** No GCC do devkitARM (`-O2`,
  `armv6k`, `hard-float`) `Int32`, `Single` e `FloatEval` se dissolvem por
  completo: `Int32+Int32` → `add`; `a*b+c` → `mla`; `Single*Single+Single` →
  `vcvt.f64.f32`×3 + `vmla.f64` + `vcvt.f32.f64` (é a regra binary64, não custo
  do tipo); um campo `+=` → `vldr/vadd/vstr`. Nenhuma função fora de linha
  desses tipos no ELF legível (0 símbolos); são trivialmente copiáveis, passados
  em registradores.

## Correções (2026-11-21)

1. **Caminho rápido da inicialização de tipos** (`managed_type_init.hpp`,
   emissão em `Translator.cs`): `cs_init_X()` testa um `TypeInitFlag`
   constante (sem guarda) e só então chama `cs_init_X_slow()` (`noinline`),
   que mantém a semântica inteira (`TypeInitState::run`, recursão, ciclos,
   falha em cache). Caminho rápido no ARM: `ldr; ldrb; uxtb; cmp; bxne lr` —
   **5 instruções, sem barreira, sem guarda, sem prólogo**. O sinalizador é
   publicado com `release` só quando o inicializador terminou.
   *Leitura sem barreira:* válida em x86/x64 (TSO) e no 3DS porque toda thread
   gerenciada roda no núcleo da aplicação; isso é **verificado** na entrada de
   cada thread gerenciada (`managed_thread.cpp`, `PLS_THREAD_CORE`, aborta se
   diferir). Outras arquiteturas mantêm `acquire`. Observação: no Azahar
   `svcGetProcessorID` devolve lixo e `svcGetThreadIdealProcessor` devolve
   -32768 para as duas threads (iguais, então passa); a evidência real é o log
   do console.
   *Fidelidade:* diferencial de tempo de inicialização contra o Mono idêntico
   nos dois modos (`153:IA12CBD34ELLLoFpoqcGg565H6w+JjyMz`); 24/24 casos do
   runtime.
2. **`require`** (`cs_require`): o lançamento vai para
   `pls::cs::throw_null_reference()` (`noreturn`, fora de linha); mesma
   exceção. A função passa a ser expandida no lugar.
3. **`Array::get_Item`/`set_Item`:** o caminho de covariância vai para funções
   `noinline`; o acesso comum é expandido no lugar. Mesma semântica.

### Antes e depois (Azahar, New 3DS)

| Build | Menu (ms) | Partida (ms) |
|---|---|---|
| v6 `dd2012f` | 8,13 / 8,14 | 14,72 / 15,31 |
| canônico antes (`eddc7b9`) | 8,64 / 8,64 | 13,33 / 15,61 |
| **canônico corrigido** | **7,92 / 7,90 / 7,91** | **10,40 / 11,68 / 11,94** |
| legível antes (C6b) | 11,24 | 19,38 |
| **legível corrigido** | **7,00 / 7,00 / 7,00** | **11,25 / 11,77 / 9,98** |

No emulador o legível corrigido fica 12 % abaixo do canônico corrigido no menu
e ~14 % abaixo da v6; a partida do legível cai ~42 %.

### No console (New 3DS XL, 2026-11-21, código legível final A+B)

Pasta `build/sd-benchmark-readable-final/` (imagem `620f375a…`), três execuções
com arquivos numerados e o mesmo `PLS_BENCH_RUN` em `result-N`, `stdout-N` e
`stderr-N` (ids `1-4004285468594`, `2-4004285595084`, `3-4004285710535`).

| Medida | exec. 1 | exec. 2 | exec. 3 | limite / meta |
|---|---|---|---|---|
| Partida: média | **10,62 ms** | **10,15 ms** | **10,36 ms** | meta ≤ 12 ms; critério < 20 ms |
| Partida: p95 / maior quadro | 11,54 / 11,90 | 11,65 / 12,00 | 11,45 / 11,58 ms | 50 ms |
| Partida: coletas | 0 | 0 | 0 | — |
| Menu: média | 6,64 | 6,65 | 6,51 ms | — |
| Menu: maior quadro estável | 10,47 | 10,49 | 10,68 ms | 50 ms |
| Menu: transições (3; maior pausa / maior quadro) | 106,6 / 113,7 | 106,8 / 113,8 | 103,1 / 110,3 ms | 150 ms |

Antes (legível, 2026-11-20): partida 16,96 / 18,68 / 17,27 ms. v6: 10,49–11,77 ms.
**Meta atingida; a partida do código a congelar voltou ao nível da v6 (−40 %).**
`PLS_THREAD_CORE application=0 thread=0` em todas as threads gerenciadas: a
condição da leitura sem barreira (um só núcleo) verificada no aparelho.

## O que não foi feito (e por quê)

* **Guarda por método e inicialização antecipada** de tipos BeforeFieldInit sem
  efeito observável: com o caminho rápido em 5 instruções sem barreira, a
  checagem por tipo custa uma chamada curta. Fica para depois da medição no
  console: se a partida ficar ≤ 12 ms, o ganho restante não justifica a
  complexidade e o risco de fidelidade; se não ficar, é o próximo passo.
* **Causa exata dos +0,43 ms do menu em `74890cf`:** `UNKNOWN` (superada pela
  correção).
