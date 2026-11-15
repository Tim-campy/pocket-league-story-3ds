# Estresse do coletor (2026-11-15)

Pedido do usuário depois do defeito de estáticos sem raiz
(`docs/notes/unrooted-cross-unit-statics.md`): fechar a classe de defeito com um
modo de estresse, uma auditoria das raízes fora do código gerado e uma amostra
no ARM.

## Modo de estresse (só diagnóstico)

- Motor (`src/runtime/tracing_gc.*`): `Heap::stress(every, poison, quarantine)`.
  Com `every=N`, uma coleta completa no ponto seguro de alocação depois de cada N
  objetos adotados. Com `poison`, cada corpo morto é finalizado (destrutor), preenchido
  com `0xDB` (`stress_poison_byte`) e mantido em quarentena, sem reuso de endereço, até
  o teto; depois do teto os mortos são liberados normalmente (`quarantine_overflow`).
- Ponte (`managed_gc_bridge.inc`, `gc_stress_configure`): só com
  `PLS_DIAGNOSTIC_BUILD` (PC, variáveis `PLS_GC_STRESS_EVERY/POISON/QUARANTINE_MB`) ou
  com as macros do build ARM. Ligado no início do `main`: antes do `main` não existe
  gatilho real de coleta (os falsos positivos S1/S2 da auditoria vinham daí).
- `tools/build_pc.py --gc-stress-every N [--gc-stress-poison] [--gc-stress-quarantine-mb M]`
  (padrão 256 MiB; com 1 GiB a máquina de 8 GB foi ao limite);
  `tools/build_arm11_null.py --gc-stress-every N [--gc-stress-poison]` (8 MiB).
  Resumo `PLS_GC_STRESS={...}` a cada captura e no fim; no recibo da tentativa.
- Contrato mais rígido que o real: no jogo as coletas acontecem no fim de frame, em
  pontos de carga, em chamadas explícitas e a pedido de outra thread. Uma falha só
  sob estresse é classificada antes de ser corrigida.
- Teste do motor: fixture `stress_and_poison` (408 asserções no total): objeto só em
  memória nativa é recolhido e envenenado; objetos alcançáveis mantêm os valores.

## Trechos percorridos

| Trecho | Tentativa | N | Envenenamento | Coletas de estresse | Envenenados | Resultado |
|---|---|---:|---|---:|---:|---|
| Boot até o título e menu (save 68) | 78 | 1 | sim (1 GiB) | 26.276 | 20.225 | parou: "GC cooperative rendezvous timed out" (ver abaixo) |
| Boot e menu (save 68) | 79 | 1 | sim | sem resumo (processo encerrado pelo tempo) | — | sem falha, 600 s, frame 12.000 |
| Foco off/on, idioma, placar, título (`touch-title`) | 81 | 1 | sim (256 MiB) | 473.410 | 508.235 (89 MiB) | sem falha; 600 s esgotados no frame 3.033 |
| Saves: carregar, salvar, 3 semanas, sobrescrever (`saves`) | 82 | 10 | sim | 42.130 | 397.513 (67 MiB) | rota completa, saída 0 |
| Temporada: 3 viradas de ano (save 64, `season`) | 84 | 50 | sim | 60.852 | 2.013.583 (256 MiB; 1.010.544 além do teto) | sem falha; ano 1/12 → ano 4/8 em 600 s |
| Partida completa (save 31, roteiro da tentativa 50) | 85 | 50 | sim | 48.373 | 2.005.089 (256 MiB) | sem falha; `SoccerForm.Update` 4.599 vezes |
| ARM (Azahar, New 3DS): boot e menu | `build/claude-arm-stress-run-menu2` | 100 | sim (8 MiB) | 4.662 | 14.297 (8 MiB; 427.112 além do teto) | sem falha; janela 661–960 (300 frames) medida |

Nenhum uso de objeto morto foi observado. Nenhuma falha de raiz foi encontrada
pelo estresse depois da correção do tradutor (`74890cf`) e das correções da auditoria.

Achado de cobertura: a rota `season` não joga partidas (o time não está inscrito em
liga/copa no save 64; `SoccerForm` só é construído no boot). A partida sob estresse
veio do roteiro da tentativa 50 (save 31). Ver critério 3.

## Encontro de threads com prazo estourado

A tentativa 78 (N=1, primeira execução) terminou com "GC cooperative rendezvous
timed out" depois de 26.276 coletas. Não se repetiu em nenhuma das execuções
seguintes (79, 81, 82, 84, 85, ARM). Hipótese mais provável, `UNKNOWN`: sob estresse a
coleta acontece dentro da alocação, e se a thread coletora segura um mutex nativo
enquanto aloca, outra thread bloqueada nesse mutex não chega ao ponto seguro.
Com os gatilhos reais isso não acontece (a coletora não segura mutex nativo nos
pontos de coleta). Diagnóstico deixado no lugar: `pls::gc::rendezvous_timeout_hook`,
instalado pelo `pc_main` no build de diagnóstico, imprime
`PLS_GC_RENDEZVOUS_THREAD={role,thread,stack}` da coletora e de cada thread que não
parou. Observação da auditoria: `IApplication::Sleep` e o ritmo de frames dormem sem
`GcNativeBlockingScope`; atrasam o encontro (até 50 ms), mas não explicam 5 s.

## Travamento com `Dialog.Show` vigiado

A tentativa 70 travou no mesmo ponto em que o array de idiomas liberado era lido.
Repetida com a mesma configuração depois da correção (tentativa 83): sem
travamento, rota completa. Conclusão (hipótese sustentada, não prova): NRE, IOOR e o
travamento eram três manifestações do mesmo array liberado (um tamanho lido de
memória liberada pode virar um laço muito longo).
