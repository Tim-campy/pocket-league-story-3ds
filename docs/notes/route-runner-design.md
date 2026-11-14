# Roteiro com estado: gancho de UI e executor por condições (projeto)

Levantamento só por leitura em 2026-11-14 (subagente), base da implementação
pedida pelo usuário (gancho somente leitura, só no build de diagnóstico).

## Regras

- Só no build de diagnóstico (`PLS_DIAGNOSTIC_BUILD`, definido por CMake com
  `PLS_DIAGNOSTIC_GAME_DIR`). Não existe no build normal.
- **Não chamar nenhum método gerado** (`CheckMainWindow`, `ToString`,
  `IsMenu`, `Fep()`): no diagnóstico todo método gerado tem
  `PLS_METHOD_SCOPE`, e chamá-lo mudaria cobertura e perfil.
- Não alocar objetos gerenciados (muda o momento das coletas); só
  `std::string` via `String::utf8()`. Não ler o relógio (virtual clock).
- Capturar no fim do frame, fora de `host_update`/`host_draw`
  (`pc_main.cpp`, depois de `end_frame`, antes de `pace`).

## Estado exposto

`frame`; pilha de formulários (tipo gerenciado, `GetId`, `GetProcessMode`
0..4, rótulos esquerdo/direito do formulário); janela principal (primeira da
base para o topo que não é sub-janela por tipo: SubForm, BillingForm,
HttpForm, LanguageForm, LineupForm); rótulos mostrados
(`Canvas::GetSoftLabelL/R`); `loading` = topo é BootForm (id 0) ou há
formulário em modo 0/4; `dialog` = topo é SubForm (id 4) (diálogos do jogo
são SubForms; o diálogo nativo é síncrono e nunca fica aberto entre frames);
`text_panel` = `SimpleTextInput::Active()`.

Ids: BootForm 0, TitleForm 1, SoccerForm 2, RankForm/SpForm 3, SubForm 4,
DebugForm 5, GameForm 9.

## Arquivo de roteiro

Um passo por linha, `#` comentário: `anchor`; `key TECLA [repeat=N gap=F]`;
`wait form=<sufixo de tipo>|id=<n> [mode=<n>] [label_right=<texto>|*|-]
[timeout=F]`; `wait not loading [stable=F] [timeout=F]`; `wait not dialog
[timeout=F]`; `wait frames=F`; `expect ...`; `dismiss until ...`; `end`.
Teclas emitidas como hoje (`Canvas::KeyClick`) e registradas na mesma linha
`PLS_PC_SCRIPTED_KEY_FRAME=f:TECLA` (o replay nulo/3DS depende dela).
Tempo esgotado: `PLS_ROUTE_TIMEOUT`, encerramento normal com dumps finais.

`tools/build_pc.py --diagnostic-route ARQ` (exclusivo com as flags de frame;
compatível com `--virtual-clock` e `--diagnostic-save-from-attempt`), grava
`route.txt` na tentativa e `route={name,sha256,steps}` + `route_result` na
linha da tentativa; `--ui-trace` registra `PLS_UI_STATE=` a cada mudança.
