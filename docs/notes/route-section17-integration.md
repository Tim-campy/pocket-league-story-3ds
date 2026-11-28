# Integração dos roteiros da seção 17 — 2026-11-28

Origem: trabalho de outro agente registrado na seção 17 de `agent-work-log.md`. Revisão e medições desta integração feitas novamente, sem alterar jogo, runtime ou coletor.

## Histórico comparado

Referência publicada: `d587023`, rodada de 2026-11-27 (tentativas 2096–2182). Rodada nova: tentativas 2310–2396. Ambas: 86 execuções concluídas de 87, fechamento intencional em `dialogs-exit`, zero alertas. A união de métodos completados é idêntica: 1.573, nenhum perdido nem acrescentado.

O histórico original tem 1.577 métodos canônicos. Os nove que a reexecução não completa e os cinco extras continuam iguais; os cenários complementam a cobertura e o portão considera os 87 canônicos, mesmo quando só 25 são reexecutados.

Os registros privados por execução, com listas de métodos perdidos/ganhos, estão em `build/phase4-video/section17-comparison/details.json` e `per-run.csv`. Não são uma instrumentação de todos os ramos. Alterações de métodos de partida podem decorrer de resultados e tempos diferentes; não atribuí-las automaticamente à resposta de fim de ano.

## Respostas de fim de ano que mudaram o percurso

A regra escolhe a segunda opção nas janelas 72 (recusar dispensa) e 52 (renovar técnico). Foram observados seis RIGHT dentro de dismiss, em três execuções; as outras 84 não acionaram essa exceção. Os ramos antigos de entrar na lista de dispensa/troca e voltar deixam de ser percorridos nesses pontos.

| Execução / roteiro / save | Quadros antes/depois | Coletas sob estresse antes/depois | Métodos ausentes/presentes novos no percurso |
|---|---|---|---|
| 107 / lots.route / 106 | 29292/15856 | 69132/38478 | 24/14 |
| 431 / menu-explore.route / 50 | 11396/9108 | 27680/24061 | 8/32 |
| 205 / demolish.route / 202 | 1299/865 | 9210/8401 | 23/20 |

Métodos ausentes nessa execução (107; permanecem na união global):

- `M:data.PlayerData.GetPhyParamBarW(System.Int32,System.Int32)`
- `M:data.PlayerData.GetPositionRank(System.Int32,data.PlayerData)`
- `M:data.PlayerData.RemoveNew`
- `M:form.SubForm.Draw_categoryIcon(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)`
- `M:form.SubForm.InitDialog(System.String,System.String)`
- `M:form.SubForm.MakeDialog(System.String,System.String)`
- `M:form.SubForm.MakeDialog(System.String,System.String,System.Int32)`
- `M:form.SubForm.SetTouchValue(System.Int32,System.Int32)`
- `M:game.Ball.ChGravity`
- `M:game.GameManager.HitShootPlayer(game.Ball,game.Player)`
- `M:game.Player.AddCommandFlagOn(System.Int32)`
- `M:game.Player.AddCommandSliding`
- `M:game.Player.Proc_sliding(game.Player)`
- `M:game.TPlayer.AddCommandLifting(System.Int32)`
- `M:game.TPlayer.AddCommandLiftingBallChase`
- `M:kairo.unity.surface.SurfaceBase.IsTouch`
- `M:main.AppData.DrawPositionStatus(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)`
- `M:surface.GameView.AddDelayPaintBuffer(kairo.unity.ui.Graphics,System.Int32[])`
- `M:surface.GameView.CheckMarker(System.Int32,System.Int32)`
- `M:surface.GameView.OnTouchDlgSel(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)`
- `M:surface.GameView.OnTouchKeyClick(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)`
- `M:surface.GameView.OnTouchScrollList(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)`
- `M:surface.GameView.OnTouchUnMarker(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)`
- `M:surface.GameView.OnTouchVScrollBar(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)`


Métodos ausentes nessa execução (431; permanecem na união global):

- `M:data.PlayerData.GetPhyParamBarW(System.Int32,System.Int32)`
- `M:data.PlayerData.GetPositionRank(System.Int32,data.PlayerData)`
- `M:data.PlayerData.GetSallay`
- `M:data.PlayerData.RemoveNew`
- `M:form.MyFormBase.En`
- `M:form.SubForm.Draw_categoryIcon(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)`
- `M:form.SubForm.MakeDialog(System.String,System.String,System.Int32)`
- `M:main.AppData.DrawPositionStatus(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)`


Métodos ausentes nessa execução (205; permanecem na união global):

- `M:data.PlayerData.GetPhyParamBarW(System.Int32,System.Int32)`
- `M:data.PlayerData.GetPositionRank(System.Int32,data.PlayerData)`
- `M:data.PlayerData.GetSallay`
- `M:data.PlayerData.IsNew`
- `M:data.PlayerData.RemoveNew`
- `M:form.MyFormBase.En`
- `M:form.SubForm.Draw_categoryIcon(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)`
- `M:form.SubForm.GetTouchValue(System.Int32,System.Int32)`
- `M:kairo.unity.surface.SurfaceBase.CheckFirstTouch(System.Int32,System.Int32)`
- `M:kairo.unity.surface.TouchOption.Create(System.Int32[])`
- `M:kairo.unity.surface.TouchOption.Margin(System.Int32,System.Int32,System.Int32,System.Int32)`
- `M:kairo.unity.util.BitUtil.Split(System.Int32)`
- `M:main.AppData.CommaSeparate_en(System.Int64)`
- `M:main.AppData.DrawMoney(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)`
- `M:main.AppData.DrawMoney(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)`
- `M:main.AppData.DrawPositionStatus(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)`
- `M:main.AppData.DrawVerticalScroll2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)`
- `M:main.AppData.IsLanguageOther`
- `M:surface.GameView.CheckMarker(System.Int32,System.Int32)`
- `M:surface.GameView.DrawVerticalScroll(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32)`
- `M:surface.GameView.Get(System.Int32)`
- `M:surface.GameView.Get(kairo.unity.surface.TouchValueAccessor,System.Int32)`
- `M:surface.GameView.GetTouchValueAccessor`

## O que o conjunto de 25 deixa de exercitar

Projetando a seleção sobre esta mesma rodada histórica: elimina 62 execuções, 166,904 de 275,964 quadros (60.48%) e 729,153 de 1,119,626 coletas sob estresse (65.12%). A rodada própria dos 25 é registrada separadamente; estes números não pressupõem que tempos e caminhos se repitam exatamente.

Sob estresse, a união cai de 1573 para 1562 métodos. Onze deixam de receber esse exercício na seleção:

- `M:PlsPortGeneratedBootstrap.Source.TerminateApplication`
- `M:data.SupervisorData.LvUp`
- `M:form.SubForm.Draw_clearPoint(kairo.unity.ui.Graphics)`
- `M:form.SubForm.Update_clearPoint`
- `M:game.UserData.CustomerNumReset`
- `M:game.UserData.RecordReset`
- `M:game.UserData.RotateTestPlayParam`
- `M:game.UserData.SetClearPoint`
- `M:game.UserData.SetContinueGameData`
- `M:kairo.unity.system.KairoBase.Finish`
- `M:kairo.unity.util.ClockTime.Destroy`

Os cenários não usam o mesmo estresse moderado dos replays. Cobrir métodos de clear-state por cenário não substitui a população, ordem e pontos de coleta do percurso histórico. Também somem as três execuções acima e os caminhos de saída do jogo presentes no histórico. Por isso os 87 continuam obrigatórios nos marcos definidos pelo usuário.

## Regra operacional

Antes de cada push: 25 reexecuções e seis arquivos de cenário, mais a execução de recarga. Antes de tag, após runtime/coletor/desenho da plataforma e uma vez por semana de trabalho: 87 reexecuções e os mesmos cenários. Smoke: dez reexecuções e cinco cenários curtos, mais recarga; clear-state continua no push/histórico.

Correção do registro anterior: “7/7 cenários” são seis arquivos e uma execução extra de recarga. O histórico entre agentes foi transferido integralmente para docs/notes por decisão explícita desta tarefa.

## Validação independente

Histórico: PASS em 3036,7 s (50 min 37 s), 87 execuções, 86 concluídas e um fechamento intencional, zero alertas, nenhuma perda no portão. Seis arquivos de cenário e uma recarga: todos PASS; clear-state levou 321 s. A rodada publicada anterior levou 2668,3 s no total; a fase de reexecuções passou de 2588 s para 2615 s. A soma dos tempos individuais caiu de 10244,1 s para 10031,6 s; trabalho simultâneo, carga e cenários impedem converter essa soma diretamente em tempo de relógio.

Conjunto padrão: PASS em 1447,2 s (24 min 07 s), contra 24 min 49 s registrados pelo outro agente. Reexecuções: 1046 s, 25/25 concluídas, zero alertas; união de 1562 métodos. Seis arquivos e recarga PASS, clear-state em 317 s. Nenhuma perda no portão sobre as 87 execuções canônicas.

Fixture do executor revalidada: 99 asserções PASS. Testes da ferramenta: 17/17 PASS.

O primeiro `full` parou em `offscreen-mesh`: o executor ainda exigia 15 asserções
de mesh, embora os testes de zoom dos commits 2c2ebe2 e c7e2f4b já executassem
633. O teste nativo estava PASS. O executor passou a exigir 633 e a calcular o
total com as 23 de offscreen (656), incluindo `ctr_zoom_check.hpp` nos hashes
dos insumos. A reexecução específica passou; nenhuma operação de desenho mudou.
