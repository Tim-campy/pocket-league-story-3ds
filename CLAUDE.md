# CLAUDE.md — Port de Pocket League Story para Nintendo 3DS

Este arquivo orienta o Claude neste repositório. As regras completas do projeto estão em `AGENTS.md`: **leia-o integralmente antes de qualquer ação.** Em caso de conflito, vale o `AGENTS.md`; a seção 2 dele (regras de conteúdo) prevalece sobre tudo.

## O projeto em uma página

- **O quê:** port não oficial de Pocket League Story (Kairosoft, Android, Unity 5.3.4f1 com Mono) para o Nintendo 3DS. Alvo principal: New 3DS XL. O 3DS original é bônus.
- **De onde vem o código:** de uma reconstrução byte a byte do C# original, concluída e verificada (submódulo `reference/`, tag `v1.0.0-csharp-reconstruction`, somente leitura).
- **Como:** um tradutor próprio converte o C# em C++ (`src/game/`, gerado, nunca editado à mão). A camada de plataforma da KairoLibrary é reimplementada em `src/kairo/`, com backends nulo (medição), SDL (PC) e CTR (3DS). O runtime (`src/runtime/`) fornece strings UTF-16, arrays, exceções, coletor de lixo próprio por rastreamento, e a colação e a formatação numérica do Mono.
- **Regra de conteúdo:** o repositório só contém código de engenharia reversa e código novo. Nenhum asset, binário original, save ou captura entra no Git. Os assets vêm do APK local do usuário, verificado por hash, em tempo de build.
- **Usuário:** fala português. Relatórios e mensagens em português.

## Você está assumindo um trabalho em andamento

O trabalho até aqui foi feito por outro agente (Codex), ao longo de muitas rodadas. Você não tem o histórico da conversa; o que vale é o que está no repositório.

Antes de começar:

1. Leia `AGENTS.md`, `PROGRESS.md` e `docs/toolchain.md`.
2. Leia os relatórios mais recentes em `docs/notes/`, em especial `runtime-cost-final.md` (estado do runtime e do desempenho), `tracing-gc-conversion.md` (coletor), `mono-arm-float-rule.md` e `float-discriminants.md` (ponto flutuante), `arm11-hardware-benchmark.md` (benchmark no 3DS).
3. Leia os últimos commits (`git log`) para ver o que mudou por último.
4. Descubra os comandos reais de build, teste, verificação completa, tradução e progresso em `tools/` e nos documentos. **Não presuma nomes de scripts.** Depois de confirmá-los executando, registre-os na seção "Comandos" no fim deste arquivo, para as próximas sessões.
5. Confirme o APK local pelo SHA-256 de `docs/apk.md`.

Os números deste arquivo são um retrato do momento da troca de agente. Se divergirem de `PROGRESS.md` ou do que você medir, vale o que está no repositório.

## Estado na troca de agente (checkpoint `45ebd7d`)

| Critério do congelamento | Estado |
|---|---|
| 1. Tradução completa | 1.768 de 1.958 métodos do jogo compilam; 190 corpos e 22 slots virtuais pendentes; 26 das 53 políticas offline por integrar |
| 2. Coletor e desempenho | **Critério alterado em 2026-11-13:** no New 3DS real, backend nulo, três execuções: (a) nenhum frame >50 ms em jogo estável (partida e menu parado, com coletas por volume); (b) pausas em trocas de tela principal e carregamentos até 150 ms; (c) partida com média <20 ms. Coletas classificadas por tipo no benchmark (v6). v5 no New 3DS XL, três execuções: menu com 3 coletas por janela, maior 105,6–107,7 ms (frame 113–115 ms); frames sem coleta ≤ 11 ms; partida média 8,9–12,6 ms, máx. 15,2–25,9 ms, sem coletas |
| 3. Percurso completo no PC | Título, saves, gestão, partida completa e retorno funcionam. Temporada e roteiro de cobertura pendentes; 776 métodos exercitados |
| 4. Fidelidade | Regra de ponto flutuante confirmada em emulador Android ARM e adotada; confirmação em aparelho pendente. Comparação de telas com o original pendente |
| 5. Código legível e aprovado | Não iniciado |

Nenhum congelamento foi feito. Estamos na Fase 2 (tradução fiel).

### Problemas abertos, em ordem de prioridade

1. **Boot no ARM falha com `std::bad_alloc`:** o uso de memória salta de cerca de 29 MB para 94 MB durante o carregamento. Há uma sonda compilada e não executada para localizar a alocação.
2. **Leitura de arquivos lenta no ARM:** cerca de 50 ms por recurso no emulador. O carregador original (`ResourceManager.LoadStart`) trabalha em fatias de 150 ms e **não deve ser alterado**; a correção é na plataforma e no pipeline.
3. **Benchmark para hardware:** o `.3dsx` de diagnóstico existe, mas não é um benchmark qualificado de menu e partida. O usuário vai executá-lo no New 3DS quando estiver pronto.
4. **Pausas do coletor:** máximo de 36 ms no PC; meta abaixo de 2 ms. A remoção de objetos mortos domina (27 de 36 ms); a marcação custa 2 ms. Falta a limpeza adiada.
5. **Métodos quentes ainda 2 a 4 vezes acima do Mono**, com um piso escrito à mão mais próximo. As regras de inicialização de tipos não estão generalizadas.
6. **Reprodutibilidade:** a semente aleatória não está fixada no modo de diagnóstico; placares variam entre execuções idênticas.

### O orçamento que decide

O jogo pede 20 quadros por segundo (`Main.OnUpdate`, `SetTargetFps(20)`): 50 ms por frame. A estimativa a partir do PC deixa o New 3DS no limite. **Só a medição no aparelho real decide**; o emulador Azahar não reproduz a velocidade do hardware. **Medido em 2026-11-12 no New 3DS XL (backend nulo): partida com média de 12,05 ms; o gargalo restante são as pausas do coletor (102 ms no menu).**

## Decisões já tomadas (não reabrir sem motivo novo)

- Coletor próprio: marcar e varrer, sem mover, preciso no heap por mapas de tipos, conservador em pilhas e registradores, referências como ponteiros comuns, coleta em pontos seguros, threads cooperativas. O bdwgc é só referência de desempenho no PC.
- Ponto flutuante: operações `float` em binary64, com estreitamento em armazenamentos, conversões explícitas, argumentos e retornos. A referência é o Android ARM.
- `/fp:strict`, verificações de nulo e de limites são obrigatórios. Nenhuma verificação é removida sem aprovação do usuário.
- Liberações explícitas de recursos (`Image.Unuse/Dispose`, `ResourceManager`, `SoundBase.Dispose`, `Offscreen.Dispose/OnDestroy`) são imediatas e independentes da coleta.
- Serviços Android removidos, com políticas offline: registro local, cobrança indisponível sem conceder itens pagos e sem remover estado do save, anúncios removidos.
- Áudio em streaming; texturas sem perda; fontes rasterizadas do TTF do APK; imagens pré-convertidas pelo pipeline.
- Textos literais do C# reconstruído ficam no C++; textos dos assets vêm dos assets.
- A parte LGPL v2 da colação do Mono (tabelas auxiliares) fica separada e documentada.
- A lógica do jogo não muda antes do congelamento. Melhorias pedidas vão para `docs/backlog.md`.

## Como trabalhar aqui

- **Meça antes de mudar, e depois.** Todo ganho de desempenho tem número antes e depois, pelo mesmo método, em máquina ociosa.
- **Fato ou hipótese.** O que não foi verificado é `UNKNOWN`. Hipóteses refutadas ficam registradas.
- **`src/game/` é saída do tradutor.** Erro de tradução se corrige no tradutor, regenerando.
- **Cadência:** entre checkpoints, só os testes do componente alterado. Verificação completa antes de cada checkpoint. Publique antes de encerrar a sessão; não deixe trabalho local sem verificação.
- **Dependências:** código aberto com licença permissiva está pré-autorizado em `build/deps/`, com versão, hash e licença registrados. Copyleft e instalação no sistema exigem pergunta.
- **Pare e pergunte** para: decisões de design de telas e controles, qualquer coisa que toque as regras de conteúdo, remoção de verificações, mudanças que dependam de suposição sobre threads, e o congelamento.
- **Não pare** para confirmar hipótese técnica: teste-a.
- **Ambiente:** Windows, MSVC, CMake e Ninja para o PC; devkitARM, libctru e Azahar para o 3DS; emulador Android ARM para o oráculo numérico. Tudo em `build/deps/` ou já instalado; consulte `docs/toolchain.md`.
- **Relatórios:** formato de oito seções do `AGENTS.md`, abrindo com a tabela dos cinco critérios, com resultados negativos e o que depende do usuário.

## O que depende do usuário

- Executar o benchmark no New 3DS quando o `.3dsx` estiver qualificado.
- Repetir o teste numérico em um aparelho Android, quando tiver um disponível.
- Decidir o design das duas telas e dos controles (Fase 3).
- Aprovar a amostra de C++ legível e o congelamento.

## Comandos

Confirmados executando em 2026-11-11 (Claude, primeira sessão). `APK` = APK local
autenticado por `docs/apk.md`; `MANAGED` = diretório `assets/bin/Data/Managed`
extraído desse APK (fora do repositório).

**Ambiente Windows:** o MSVC e o Roslyn localizam suas mensagens pelo código de
página do console (OEM 850 nesta máquina). O Ninja compara bytes do prefixo do
`/showIncludes`. `tools/pc_compiler.py` (`utf8_console`) fixa 65001 durante o
processo; `verify_phase2.py` e `translator/test_portable.py` chamam isso no
início. Um script novo que compile C++/C# deve chamar `environment()` ou
`utf8_console()`.

| Finalidade | Comando | Observação |
|---|---|---|
| Verificação completa (122 checks) | `python tools/verify_phase2.py --apk APK --original-managed MANAGED --jobs 1` | ~0,7 h com `--jobs 1`; **retomável**: recibo por check em `build/phase2-verification/receipts/`, vinculado ao estado do código; relançar pula checks válidos; `--full` força tudo; registra pico de memória por check (maior: `game-partial-compile`, ~1,2 GiB) |
| Diferencial portável | `python translator/test_portable.py` | ~7 min; 2.617/2.618 (divergência registrada `JMath.Sin(-0)`) |
| Fixtures semânticas por componente | `python tests/translator/run_semantic_fixtures.py --fixture GcFixtures` | outros: `CollectionFixtures`, `EncodingFixtures`, etc. |
| Motor do coletor isolado | `python tools/test_tracing_gc.py` | 401 asserções |
| Dependências CMake/Ninja | `python tools/test_cmake_dependencies.py` | sensível ao código de página |
| Snapshot do diagnóstico | `python translator/diagnostic_snapshot.py --output build/<pasta-nova>` | segundos |
| Build ARM11 (backend nulo) | `python tools/build_arm11_null.py --apk APK --snapshot build/<snapshot> --output build/<pasta-nova>` | gera `null_game.3dsx` + `build-proof.json` |
| Execução no Azahar | `python tools/run_arm11_null.py --apk APK --image build/<pasta>/null_game.3dsx --output build/<pasta-nova> --scenario menu\|match --model new\|old --asset-root build/ctr-assets-native-v1` | logs do convidado em `<saída>/launcher/user/sdmc/pls-benchmark/` |
| Tradução do jogo (gera `src/game/` e compila) | `python tools/translate --assembly Assembly-CSharp --bootstrap-main --compile --original-managed MANAGED` | ~20 min, pico ~1,2 GiB; `--diagnostics-only` só lista rejeições |
| Diferencial de rebaixamento | `python translator/test_lowering.py` | fixtures em `tests/translator/LoweringFixtures.cs` contra o Mono |
| Livro-razão e `PROGRESS.md` | `python tools/progress` | estados: `todo`, `translated`, `embedded`, `no-body`, `runs`, `verified` |
| Pasta do cartão para hardware | `python tools/prepare_arm11_sd.py --apk APK --image build/<pasta>/null_game.3dsx --scenario suite --output build/<pasta-nova> --asset-root build/ctr-assets-native-v1` | recusa pasta existente |
| Simbolizar pilha ARM | `arm-none-eabi-addr2line -f -C -i -e <elf> <endereços>` | em `C:/devkitPro/devkitARM/bin` |

Nomes do C++ gerado são hashes (`cs_<hash>`); para achar o método original,
procure no `.cpp` as cadeias `src/Assembly-CSharp/...:M:<método>` próximas.

**Retenção conservadora nos testes do coletor (resolvida em 2026-11-12):** as
falhas de `GcFixtures` e `Stack` eram resíduo de pilha. Diagnóstico: compile o
fixture com `/DPLS_GC_ROOT_TRACE=1 /Zi` e grave o endereço-alvo em
`pls::gc::root_trace_target`; o coletor informa a raiz, o quadro e o objeto.
Detalhes em `docs/notes/claude-session-1.md`.

**Memória da máquina:** comandos em segundo plano podem ser encerrados por
pressão de memória. Um item pesado por vez (compilação, emulador ou benchmark).
