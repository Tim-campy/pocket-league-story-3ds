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

## Acréscimos de 2026-11-16 (diálogos)

- `keydown|keyup HASH|STAR|KP1|ESCAPE`: tecla física do host pelo mesmo caminho
  SDL do teclado (`Canvas::host_event`), para as teclas que o original lê por
  estado ou pulso (`#` mantido, `*`, Keypad1, Escape). Registro
  `PLS_PC_SCRIPTED_RAW_KEY=quadro:TECLA:down|up`. Não é reproduzido pelo
  replay nulo/3DS.
- `type ~`: apaga o painel de texto sem digitar nada (nome vazio).
- Diálogos do jogo: o apresentador de diagnóstico responde cada diálogo
  distinto a partir do último botão (docs/design/dialogs.md).
- `PLS_PC_PRINT_EXCEPTIONS=1` (ambiente): registra o local de criação de cada
  exceção gerenciada (`PLS_EXCEPTION_SITE=`), útil quando o jogo captura e só
  mostra o diálogo genérico de erro.

## Exemplo (testado em 2026-11-24)

`python tools/dev.py run --save 50 --route <arquivo>`; termina no quadro 222.

```
# Do título até o mapa com o save 50 e abre o menu (testado: termina no quadro 222).
anchor timeout=2400
wait frames=104
key SELECT
wait frames=36
key UP
wait frames=24
key SELECT
wait form=GameForm label_right=* timeout=600
dismiss until depth=1 timeout=300 optional
key SOFT2
wait depth=2 timeout=120 optional
wait frames=40
end
```

## Roteiros orientados a estado (2026-11-27)

Motivo: a foto acima só mostra a interface, então os roteiros tocavam por
coordenada e esperavam por contagem de quadros. Depois da câmera separada do
cursor, `demolish.route` passou a terminar sem demolir nada e o conjunto deu
PASS (registro completo em `docs/notes/agent-work-log.md`).

**Foto do mapa** (`GameState` em `diagnostic_route.hpp`, preenchida por
`capture_game` em `pc_main.cpp`): só quando há um GameForm com câmera e dados do
usuário; lida de campos e armazenamento estático, sem chamar método gerado e sem
alocar objeto gerenciado. Campos: `map_state` (`GameForm::state_`), `scale`,
cursor e câmera (`Camera::cursor_pos/pos`), endereço do cursor
(`Camera::camera_address`), cursor escondido, instalação selecionada
(`Camera::subTenant_->id_`, -1 nenhuma), dinheiro (`save_->lngs[0]`) e a lista de
instalações `[id, estado, x, y, dado]` (`UserData::tenants_`; estado 0 vazio,
1 pronta, 2 em obra, 3 demolindo). Ela não entra em `PLS_UI_STATE` nem na
assinatura, então os roteiros só de interface registram exatamente o mesmo de
antes. Roteiros que usam a foto registram `PLS_GAME_STATE={"frame":F,"game":{...}}`
a cada mudança, e `PLS_ROUTE_TIMEOUT` passa a trazer `"game"`.

**Condições novas** (em `wait`, `expect`, `when`): `scale=N`, `map_state=N`,
`selected=N|-`, `tenant=N [tenant_state=S]`, `money=less|more|same|changed`
(contra o último `mark`). Sem foto válida, elas são falsas. `wait` com condição
de jogo fecha avisos do jogo enquanto espera (regra do `dismiss`: SubForm sem
rótulo → SELECT, com rótulo → SOFT2, a cada 18 quadros).

**Exceção da regra de dispensa (2026-11-27, `docs/notes/agent-work-log.md` seção 17).** Duas
janelas de fim de ano têm duas opções, e a primeira abre uma lista que o
"voltar" fecha, depois o evento pergunta de novo. A regra antiga ficava presa
nelas até estourar o tempo:
- 72, "選手を解雇しますか": SELECT em Sim abre a lista 31, e SOFT2 a fecha.
- 52, "契約延長しますか": "入替え" abre a lista 51 de técnicos.

Nas duas, o executor agora move o cursor com RIGHT até a opção 1 (Não ou
"延長する") e confirma com SELECT. Isso vale para todo roteiro, inclusive as
reexecuções históricas: o executor sempre lê a foto do jogo (a janela e a opção
`select`), mas só os roteiros com condição de jogo registram
`PLS_GAME_STATE`.

**Verbos novos:**
- `cursor to tenant=N [timeout=F]`: leva o cursor com as setas até o jogo
  selecionar N. A direção vem do endereço do cursor: a instalação ocupa as
  células x..x+1, y-1..y (`Camera::Collision`); medido no mapa, RIGHT aumenta x
  e y do endereço e UP aumenta y e diminui x; nos empates alterna as duas
  teclas. Fecha avisos no caminho. Falha com "cursor did not reach tenant N"
  ou "unknown tenant N".
- `hold L|R frames=N`: segura o botão de zoom do 3DS por N quadros e solta
  (`PLS_PC_SCRIPTED_ZOOM=quadro:R|L|release`; publicado depois do host de duas
  telas, então funciona com e sem `--dual-screen`).
- `mark`: guarda o dinheiro atual para `money=`.
- `watchdog frames=N`: a partir daí, um passo de espera falha se nem a
  interface nem a foto mudarem por N quadros (0 desliga). Escolha N maior que a
  pausa legítima mais longa do roteiro.

**Rodar:** `python tools/dev.py scenarios [--only NOME]` roda
`tests/routes/*-state.route`, cada um no save da sua linha `# save=N`, em duas
telas e sem esperar o relógio (`--fast`); dá PASS só se todos chegarem a `end`.
Esses roteiros também entram em `dev.py routes`, exceto com `--only`. O conjunto
completo soma sua cobertura e reprova métodos canônicos perdidos fora da lista
justificada `NEVER_REPLAYED`.
Primeiros cenários: `demolish-state.route` (save 200, Gift Shop, 15 s) e
`zoom-state.route` (save 50, 12 s). Os dois foram conferidos ao contrário:
trocar a tecla de demolir por voltar, ou esperar um zoom errado, faz o roteiro
falhar.

## Ampliação da revisão: câmera, construção e save

`hold CP x=N y=N frames=F` e `hold CS x=N y=N frames=F` publicam os eixos
normalizados da API (-32767..32767), positivos para direita/baixo. O executor
solta em zero ao terminar. Não simulam o hardware nem testam a zona morta física.
`hold RIGHT|LEFT|UP|DOWN frames=F` mantém a tecla lógica. Condições de jogo no
`hold` são verificadas em cada quadro, inclusive na soltura; `max_pan=N` limita
cada componente do deslocamento da câmera entre quadros, para detectar saltos.

`mark` também guarda câmera, cursor e seleção. `cursor=same|changed`,
`camera=same|changed` e `selected=same|changed` comparam com essa marca;
`hidden=true|false` testa a visibilidade. `window=N` distingue o tipo da SubForm
no topo, sem mudar a linha antiga de UI.

`build-state.route` exige estado vazio, entrada nas janelas 61/62, gasto de
dinheiro e transições da instalação 0 → 2 → 1. `camera-state.route` verifica pan
independente, ocultação, A/direcional, C-Stick e rolagem limitada por quadro.
O cenário de salvar tem `# reload=save-load-check.route`: uma segunda instância
carrega os arquivos gravados pela primeira, por meio do histórico autenticado
do build de diagnóstico. A comparação do estado fica no executor de cenários;
os arquivos privados permanecem em `build/`. A recarga escolhe o save manual;
UP nessa tela escolheria o autosave antigo e invalidaria a comparação.
