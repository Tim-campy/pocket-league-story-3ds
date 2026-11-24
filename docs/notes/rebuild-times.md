# Tempos de recompilação do jogo no PC (2026-11-23)

Máquina de desenvolvimento (8 GB de RAM), `python tools/dev.py build` (MSVC, Release,
build de diagnóstico de `src/game`, 2 compilações em paralelo, padrão de
`tools/build_pc.py`). Medido com a máquina sem outro trabalho pesado.

| Situação | Tempo | O que recompila |
|---|---|---|
| nada mudou | 2 s | nada (Ninja confere e sai) |
| um `.cpp` do jogo editado (`game.Team.cpp`) | 17 s | 1 unidade + link |
| um `.hpp` muito incluído editado (`main.AppData.hpp`, incluído por 52 `.cpp`) | 379 s (6,3 min) | 52 unidades + link |
| tudo (depois da formatação; uma vez, depois de `dev.py full`) | 754–914 s (13–15 min) | 253 unidades do jogo e da KairoLibrary |
| ARM (`dev.py arm`), tudo | 1.772 s (30 min) | idem, devkitARM |

**Build depois de `dev.py full`.** Em 2026-11-23 a primeira build depois da verificação
completa recompilou tudo (754 s). Investigação de 2026-11-24 (limite curto):
- Achado e corrigido: o check `mono-collation-generation` reescrevia as tabelas de
  colação (`build/generated/mono-collation/*.inc`, `src/kairo/common/mono_*_methods.inc`)
  com conteúdo igual e hora nova, e o runtime as inclui. `tools/generate_mono_collator.py`
  agora só grava o que mudou. Medido: build depois de `full` 15 s (só o runtime) antes
  da correção; 2 s depois (gerador rodado de novo, horas iguais).
- Não explicado: a recompilação de tudo em 2026-11-23. Repetindo a sequência em
  2026-11-24 (`full` e depois `build`), não houve recompilação do jogo. Causa `UNKNOWN`.

Para comparação: o cabeçalho de apoio `game_generated_forward.hpp` é incluído por 197
`.cpp`; mudá-lo equivale a recompilar quase tudo. Ele é infraestrutura (`AGENTS.md`,
seção 2).

## Experimentos de 2026-11-24 (aprovados para teste; nada entrou)

Máquina: Intel i5-12450HX (8 núcleos, 12 lógicos), 7,7 GB de RAM. Recompilação de tudo
(`touch src/kairo/common/semantic_runtime.hpp` + `dev.py build`), com amostragem de
memória dos `cl.exe` a cada 1 s.

| Configuração | Tudo | Um `.cpp` | Pico de memória dos `cl.exe` (soma / maior processo) | Memória livre mínima | Objetos do jogo |
|---|---|---|---|---|---|
| atual: `--jobs 2`, sem cabeçalho pré-compilado | 1.007 s | 17 s | 849 / 600 MB | 505 MB | — |
| `--jobs 3` | 977 s (−3 %) | — | 1.019 / 605 MB | 503 MB | iguais (mesma compilação) |
| cabeçalho pré-compilado (`game_generated_forward.hpp` no jogo, `portable_generated_runtime.hpp` na KairoLibrary), `--jobs 2` | 451 s (−55 %) | 10 s | 900 / 580 MB | 577 MB | **253/253 diferentes** |

- `--jobs 3` não compensa: 3 % mais rápido, com a memória livre já perto de 0,5 GB.
  O limite não é o processador.
- Cabeçalho pré-compilado: corta o tempo pela metade, mas **não entra**. (1) Os objetos
  mudam (ordem e numeração das seções de código e símbolos), e a regra para entrar era
  objeto idêntico; a equivalência do código ficaria por provar de outro jeito
  (`UNKNOWN`). (2) A auditoria de dependências de `tools/build_pc.py` falha
  (`Ninja omitted required header dependencies`): com o cabeçalho pré-compilado, os
  cabeçalhos do runtime deixam de aparecer nas dependências de cada unidade, e essa
  auditoria é a garantia de que mudar um cabeçalho recompila quem o usa. Adotá-lo
  exigiria adaptar a auditoria e uma prova de equivalência por outro meio (por exemplo,
  os roteiros) — decisão do usuário.

## O que reduzir (propostas, não aplicadas)

1. **Cabeçalho pré-compilado**: medido acima (−55 %); não entrou pelas razões acima.
2. **Menos inclusões de cabeçalhos grandes do jogo nos `.hpp`**: trocar `#include` por
   declaração antecipada onde o cabeçalho só usa `Ref<T>` (ponteiro). Reduz as 52
   unidades de `main.AppData.hpp` para as que usam o tipo completo. É edição de
   `src/game` só de forma; prova pelos objetos.
3. **Mais compilações em paralelo**: medido acima; não compensa nesta máquina.
