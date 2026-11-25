# Documentação — índice

Regras do projeto e do agente: [`../AGENTS.md`](../AGENTS.md). Ferramentas: [`../tools/README.md`](../tools/README.md). Estado: versão fiel
congelada na tag `v1.0.0-faithful` (2026-11-23); o código do jogo (`src/game/`) é
mantido à mão; a próxima fase proposta é o backend 3DS.

**Vigente** = descreve o código e as regras de hoje; mantenha-o atualizado quando
mudar o que ele descreve. **Histórico** = registro de como se chegou aqui; não
atualize, só leia.

## Vigente

### Para editar o jogo

| Documento | Para quê |
|---|---|
| [maintaining-game-code.md](maintaining-game-code.md) | receitas de edição, macros, erros comuns e o check que pega cada um |
| [changes-from-original.md](changes-from-original.md) | toda mudança de comportamento em relação a `v1.0.0-faithful` |
| [backlog.md](backlog.md) | pedidos e ideias ainda não decididos (inclui reforma do coletor, A.4d/A.4e) |
| [plan-next-phases.md](plan-next-phases.md) | proposta das Fases 4 e 5 (não executada) |
| [design/phase4-video.md](design/phase4-video.md) | bloco de vídeo: contrato, etapas, riscos e estado da primeira entrega |
| [notes/phase4-video-device-test.md](notes/phase4-video-device-test.md) | teste privado do título GPU no aparelho, instalação e evidências |
| [design/phase3-decision.md](design/phase3-decision.md) | **decisão** de telas e controles do 3DS (2026-11-16) |
| [design/phase3-prototype.md](design/phase3-prototype.md) | protótipo das duas telas no PC (`dev.py run`) |
| [design/dialogs.md](design/dialogs.md), [design/focus.md](design/focus.md), [design/services.md](design/services.md) | decisões de diálogos, foco/suspensão e serviços removidos |
| [design/pending-text-and-language.md](design/pending-text-and-language.md) | pendências de entrada de texto e de idioma (decisão do usuário) |
| [design/diagnostic-text-input.md](design/diagnostic-text-input.md) | entrada de texto no PC |
| [release-notes/v1.0.0-faithful.md](release-notes/v1.0.0-faithful.md) | nota da versão fiel (números finais) |

### Para construir, medir e verificar

| Documento | Para quê |
|---|---|
| [toolchain.md](toolchain.md) | ferramentas instaladas e versões |
| [apk.md](apk.md) | identidade (SHA-256) do APK esperado |
| [assets.md](assets.md) | inventário de assets e memória |
| [benchmark-hardware.md](benchmark-hardware.md) | como medir no New 3DS |
| [notes/route-runner-design.md](notes/route-runner-design.md) | formato dos roteiros (`tests/routes/*.route`) |
| [notes/verification-groups.md](notes/verification-groups.md) | grupos da verificação completa |
| [notes/rebuild-times.md](notes/rebuild-times.md) | tempos de recompilação e propostas |
| [notes/route-speed-2026-11-24.md](notes/route-speed-2026-11-24.md) | tempo dos roteiros: medição, `--jobs`, `--smoke`, `--affected`, suspensão |
| [notes/formatting-2026-11-23.md](notes/formatting-2026-11-23.md), [notes/pls-api-2026-11-24.md](notes/pls-api-2026-11-24.md) | como provar que uma mudança é só de forma (tokens, objetos), com os dois casos feitos |
| [notes/gc-root-inventory.md](notes/gc-root-inventory.md), [notes/gc-stress.md](notes/gc-stress.md) | raízes do coletor fora do jogo; modo de estresse |
| [notes/mono-arm-float-rule.md](notes/mono-arm-float-rule.md) | a regra de ponto flutuante |
| [notes/offline-behavior.md](notes/offline-behavior.md) | comportamento dos serviços Android removidos |
| [notes/criterion4a-status.md](notes/criterion4a-status.md) | teste numérico pendente em aparelho Android (usuário) |
| [readable-sample/README.md](readable-sample/README.md) | ponteiro para o pacote de revisão (`tools/make_review_bundle.py`) |

## Histórico (Fase 2: tradução fiel, até 2026-11-23)

- [history/AGENTS-phase2.md](history/AGENTS-phase2.md) e
  [history/CLAUDE-phase2.md](history/CLAUDE-phase2.md) — as regras e o guia da primeira
  metade (critérios do congelamento, regras do tradutor, comandos antigos).
- [history/freeze-audit.md](history/freeze-audit.md) — auditoria, ensaios e registro do
  congelamento.
- [history/PROGRESS-phase2.md](history/PROGRESS-phase2.md) e
  [history/config/](history/config/) — livro-razão da tradução e recibos dos checks
  arquivados com o tradutor.
- [history/translator.md](history/translator.md), [history/csharp-subset.md](history/csharp-subset.md),
  relatórios de fase (`history/*-report.md`).
- [coverage-plan.md](coverage-plan.md), [coverage-never-reached.md](coverage-never-reached.md),
  [boundary.md](boundary.md), [culture-usage.md](culture-usage.md) — cobertura e
  inventários da Fase 2 (ainda lidos por ferramentas, por isso ficam no lugar).
- [notes/](notes/) — notas técnicas datadas das rodadas da Fase 2 (medições, decisões,
  hipóteses refutadas). Exceto as listadas acima como vigentes, são registro: o
  código pode ter mudado depois delas. Ficam no lugar porque comentários do código
  as citam pelo caminho.
- [design/phase3-screens.md](design/phase3-screens.md),
  [design/phase3-controls-dialogs.md](design/phase3-controls-dialogs.md),
  [design/phase3-feasibility.md](design/phase3-feasibility.md) — propostas e estudo que
  levaram à decisão da Fase 3.
