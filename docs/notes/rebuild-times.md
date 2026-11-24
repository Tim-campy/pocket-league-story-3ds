# Tempos de recompilação do jogo no PC (2026-11-23)

Máquina de desenvolvimento (8 GB de RAM), `python tools/dev.py build` (MSVC, Release,
build de diagnóstico de `src/game`, 2 compilações em paralelo, padrão de
`tools/build_pc.py`). Medido com a máquina sem outro trabalho pesado.

| Situação | Tempo | O que recompila |
|---|---|---|
| nada mudou | 2 s | nada (Ninja confere e sai) |
| um `.cpp` do jogo editado (`game.Team.cpp`) | 17 s | 1 unidade + link |
| um `.hpp` muito incluído editado (`main.AppData.hpp`, incluído por 52 `.cpp`) | 379 s (6,3 min) | 52 unidades + link |
| tudo (depois da formatação, ou na primeira build depois de `dev.py full`) | 754–914 s (13–15 min) | 253 unidades do jogo e da KairoLibrary |
| ARM (`dev.py arm`), tudo | 1.772 s (30 min) | idem, devkitARM |

A primeira build do PC depois de `dev.py full` recompilou tudo (754 s). Causa
`UNKNOWN`; hipótese não verificada: a verificação regenera arquivos compartilhados de
`build/` (tabelas geradas) com hora nova.

Para comparação: o cabeçalho de apoio `game_generated_forward.hpp` é incluído por 197
`.cpp`; mudá-lo equivale a recompilar quase tudo. Ele é infraestrutura (`AGENTS.md`,
seção 2).

## O que reduzir (propostas, não aplicadas)

1. **Cabeçalho pré-compilado** (`target_precompile_headers`) com
   `semantic_runtime.hpp`, `numeric_types.hpp` e `game_generated_runtime.hpp`, que
   toda unidade inclui. É o maior ganho provável numa unidade de 17 s, mas o quanto
   do tempo é análise desses cabeçalhos é `UNKNOWN` (medir com `/Bt+` ou
   `-ftime-trace` antes). Muda o `CMakeLists.txt` (decisão do usuário); o código de
   máquina não muda (provar com `tools/compare_objects.py`).
2. **Menos inclusões de cabeçalhos grandes do jogo nos `.hpp`**: trocar `#include` por
   declaração antecipada onde o cabeçalho só usa `Ref<T>` (ponteiro). Reduz as 52
   unidades de `main.AppData.hpp` para as que usam o tipo completo. É edição de
   `src/game` só de forma; prova pelos objetos.
3. **Mais compilações em paralelo** (`--jobs 3`): limitado pela memória de 8 GB; o
   pico por unidade é `UNKNOWN` nesta árvore (medir antes).
