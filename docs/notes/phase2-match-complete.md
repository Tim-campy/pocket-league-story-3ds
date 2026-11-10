# Partida completa no PC

Base: 0bc12c3. A tentativa Release 35 recompilou os fontes consolidados sem
alterações de código e executou por 310 segundos, com autosave próprio da
tentativa 31 e teclas registradas no recibo de execução.

Capturas locais inspecionadas, todas fora do Git:

- frame 1440: primeiro tempo em andamento;
- frame 4200: placar final 1–1, distribuição de experiência;
- frame 4800: receitas e despesas da partida;
- frame 5280: instrução posterior à partida, sobre a tela de gestão;
- frame 5580: gestão, sem diálogo, com Save e Menu disponíveis.

O processo terminou pelo limite solicitado, sem lacuna de tradução. O recibo
autenticado está em `config/phase2-match-complete.json`. Registrou 717 IDs fonte
do jogo e 197 portáveis com retorno normal nesta execução; a união e o vínculo
às 1.958 identidades IL originais são calculados por `tools/progress`.
Execução não promove equivalência Android nem cobertura de todos os ramos.

Não houve mudança de código entre a verificação completa 104/104 do checkpoint
anterior e esta execução. `verify_phase2.py --refresh-run-receipts` revalida o
snapshot integral de código, todos os logs dos checks e os novos recibos de
execução antes de reutilizar aquela verificação. Os 73 testes do repositório
também foram executados novamente nesta sessão. O gate de conteúdo é executado
novamente antes da publicação.

Esta execução funcional tem contadores e rasterização SDL; não mede o custo
de CPU solicitado para o backend nulo. Benchmark sem instrumentação, amostragem,
alocações, pausas e execução ARM11 são a etapa seguinte desta mesma rodada.
Nenhum asset, save ou captura foi incluído no repositório.
