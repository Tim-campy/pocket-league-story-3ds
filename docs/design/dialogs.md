# Diálogos do jogo (decisão do usuário, 2026-11-16)

## Decisão

O serviço de diálogo é um diálogo próprio do port, desenhado pela API de
desenho comum (mesmo código no PC e no 3DS), modal, com título, mensagem e os
botões pedidos pelo jogo, acionável por toque e por teclas (confirmar e
cancelar). Aparência provisória e neutra; o desenho final e a tela em que
aparece no 3DS ficam para a Fase 3.

## Contrato seguido (original)

- `kairo.unity.ui.Dialog.Show()` (`reference/src/KairoLibrary/kairo/unity/ui/Dialog.cs:80-100`)
  chama `KairoPlugin.ShowDialog(type_, title_, msg_, botões)` e **bloqueia** o
  código do jogo até a resposta; devolve o resultado; se a mensagem trouxe URL
  (`SetText` com `\t`), `1` ou `4` abrem o navegador.
- Tipos e botões (constantes de `Dialog.cs:8-24`), na ordem do original:
  0 informação, 1 aviso, 2 erro → OK (`BUTTON_OK = 1`); 3 → Sim (`4`), Não (`8`);
  4 → Sim (`4`), Não (`8`), Cancelar (`BUTTON_CANCEL = 2`).
- O port monta a requisição em `show_dialog` (`src/kairo/common/dialog_service.cpp`):
  rejeita botões personalizados (mapeamento JNI não verificado) e tipos fora de
  0..4; aceita como resposta um botão declarado ou `-1` (dispensado).
- Dispensar (cancelar sem escolher): o código que o Android devolveria é
  `UNKNOWN`; o port devolve `-1`, a convenção já usada pelo apresentador SDL.

## Implementação

- `src/kairo/common/port_dialog.hpp/.cpp`: estado e lógica (`Handle(left|right|confirm|cancel)`,
  `PointerDown/PointerUp` num botão, `Result()`); `port_dialog_draw.cpp`: desenho
  por `Graphics` sobre a imagem da tela (fundo escurecido, caixa, título, até 5
  linhas de mensagem, botões; o selecionado em destaque).
- PC (`src/main/pc_main.cpp`, `PcDialogPresenter`): laço modal dentro do `Show`:
  lê eventos do host (←/↑ e →/↓ movem; Enter, Espaço, Z confirmam; Esc,
  Backspace, X dispensam; toque escolhe o botão), redesenha sobre o último
  quadro e apresenta, com o mutador em espera nativa entre quadros.
- Rótulos provisórios da plataforma: "OK", "Yes", "No", "Cancel" (o Android usava
  textos do sistema, não do jogo). Idioma e redação finais: Fase 3.
- Builds de diagnóstico: o mesmo `PortDialog` é acionado por comandos (não há
  como teclar dentro de um diálogo bloqueante a partir de um roteiro). Cada
  diálogo distinto (tipo, título, mensagem) percorre os botões a partir do
  último: a 1ª ocorrência responde Não/Cancelar (ou OK), a seguinte Sim, e
  assim por diante; repetir o diálogo no roteiro exercita todos os botões sem
  disparar primeiro a ação destrutiva (ex.: sair do jogo). Cada diálogo gera
  `PLS_PC_DIALOG={type,buttons,answer,index}`.
- Testes: `tools/test_dialog.py` (40 asserções: ordem e resultados, teclas,
  toque dentro/fora do botão, dispensa, requisição sem botões).

## Diálogo de término (Escape / voltar)

`FormManagerBase.DoTerminationDialog` (`FormManagerBase.cs:702-711`) era uma
lacuna declarada do bootstrap (`PLS_BOOTSTRAP_GAP`). Achado da sonda de
diálogos (tentativa 123): Escape na tela de título acionava a lacuna, cuja
exceção era capturada por `Main.OnUpdate` e mostrada como o diálogo genérico
de erro (`Main.cs:134`), seguido do encerramento. Correção: o bootstrap gerado
(`translator/bootstrap_source.py`) emite o corpo original sobre o `Dialog`
traduzido: `new Dialog(3, "確認")`, `SetText("ゲームを終了します")`, `Show() == 4`.
A lacuna deixa de existir quando os três métodos de `Dialog` estão traduzidos.

Achado seguinte (tentativa 125): o Escape do `Canvas` dependia de uma ponte
`on_back` nunca instalada, e a `NotSupportedException` caía no mesmo
tratador genérico. Correção: `src/kairo/common/canvas_back.cpp` reproduz
`Canvas.OnKeyDown` para Escape (`Canvas.cs:1169-1226`): rótulos de volta
registrados "戻る"/"Back" em minúsculas pela cultura corrente; rótulo mostrado
igual → tecla programável correspondente; senão `ProcessBackKey` (que termina
no diálogo de término). Os hosts PC e nulo instalam a ponte.

Terceiro achado (tentativa 131): com Sim, a pilha ficava vazia mas o app não
terminava; faltava `IApplication.TerminateCheck` (`IApplication.cs:511-535`),
chamado antes e depois do `OnUpdate`. Agora `host_update` o executa:
sem formulários → `Terminate()` e o laço do host termina (`Application.Quit`).
O atraso de 3 quadros após `Canvas.OpenBrowser` não é reproduzido.

## Pontos de Dialog.Show do jogo (35) e exercício

Levantamento por leitura (subagente, 2026-11-16) conferido nos trechos citados.
Alcançáveis em jogo normal no PC e exercitados com todos os botões
(`tests/routes/dialogs.route`, tentativa 129; `dialogs-exit.route`):

| Ponto | Tipo | Gatilho | Botões exercitados |
|---|---|---|---|
| TitleForm.cs:336 | 0 | Keypad1 na tela de título (`DEBUG_CMD_DEV`), HTTP offline falha | OK |
| TitleForm.cs:431 | 3 | `#` mantido > 40 quadros (STAR) + `*` | Não; Sim (recarrega pelo BootForm) |
| FormManagerBase.cs:704 | 3 | Escape com só janelas principais | Não; Sim (término) |
| MainPanel.cs:228 | 1 | nome vazio no painel de nome | OK |
| MainPanel.cs:214 | 1 | nome com `/` | OK |
| MainPanel.cs:209 | 1 | nome largo demais | OK |

Não exercitados, com motivo:
- AppData.cs:5745/5768/5782 (`SendSaveData`, STAR + Keypad1): a tela de envio
  lê teclas num laço próprio dentro do `Update` e não devolve o controle ao
  host; o port congela ali (tentativa 127). No Unity a entrada também é lida
  por quadro no thread principal, o que sugere o mesmo congelamento no
  original: `UNKNOWN` sem aparelho. Já justificado (`hidden-keypad`).
- Só em falha: BootForm.cs:163 (recurso inicial ausente ou corrompido),
  Main.cs:116 (`NotPermitException` de armazenamento), Main.cs:134/161
  (exceção não capturada; exercitado por acidente na tentativa 123 pela lacuna
  do término), IApplication.cs:993.
- Impossíveis offline ou com flags de depuração desligadas: BootForm.cs:157
  (só japonês), SpForm.cs:408/517/541/751 (suporte por rede), TitleForm.cs:330
  (HTTP bem-sucedido), AppData.cs:4531/4537 (`DEBUG`), GameView.cs:877
  (`PRINT`), BillingManager.cs:637 e StoreBase.cs:361 (cobrança desligada),
  HttpObject.cs:63 e KairoBase.cs:289/297/302/311/397 (KairoService cortado),
  Canvas.cs:1423 (`APPLI_TYPE` 3), IApplication.cs:1113 (permissão Android),
  Language.cs:1330/1374 (pacote de idioma personalizado).

## Fase 3 (pendente)

Aparência final, tela do 3DS (superior ou inferior), mapeamento de botões do
3DS (A confirma, B dispensa sugeridos), idioma dos rótulos.
