# Backlog

Itens registrados para tratamento posterior. Nada aqui está autorizado a
mudar a lógica do jogo antes do congelamento.

## Verificação — recibos rastreados e duração dos roteiros

Registrado em 2026-11-25 por pedido do usuário. A verificação completa reescreve
51 recibos rastreados e deixa a árvore suja. Investigar como separar evidências
locais geradas dos recibos de referência, sem perder rastreabilidade. Nenhuma
alteração nas ferramentas está autorizada por este registro.

Os roteiros longos passaram de cerca de 1.100 s para 1.900 s entre rodadas.
Na última rodada publicada: actions/save 95 = 1.830,8 s; lots/save 106 =
1.904,2 s. O limite paralelo foi ampliado para 1.950 s com autorização, mas
a causa do aumento continua UNKNOWN; investigar carga, esperas e progresso
por quadro, sem atribuir a diferença à câmera sem evidência.

## Diálogo compartilhado — coordenadas de toque no PC com duas telas

Inspeção de código em 2026-11-25: `PortDialog::Draw` usa as dimensões do alvo,
mas `PortDialog::hit` usa os campos fixos 240×280. O host PC desenha esse diálogo
na inferior 320×240 e encaminha o toque local diretamente. A reprodução
interativa desse desvio no PC ainda não foi feita. O bloco CTR trata os botões
pelos retângulos de `ButtonBox(320, 240)` no próprio adaptador; não modifica
`port_dialog.cpp` nem amplia o escopo autorizado. Corrigir o componente
compartilhado e verificar seu comportamento no PC depende de decisão futura.

## Câmera — suporte no executor de roteiros (decisão pendente)

Registrado em 2026-11-25 por pedido do usuário. O executor não injeta os eixos
do circle pad nem observa câmera, cursor e lote selecionado. Assim, a câmera
tem roteiro de preparo e teste manual, sem asserções dessas invariantes na
suíte. Para decisão: acrescentar essa entrada e essas observações ao diagnóstico,
com testes de rolagem nas margens, salto do cursor para o centro, zoom, construção
e menus. Não implementado; exige autorização para alterar a infraestrutura.

## Fase 3, etapa 2 — primeira alteração: largura de 400 na tela de cima

Registrado em 2026-11-18 (decisão do usuário, item 3: só leitura, aplicar
depois do congelamento). Medido com sondas privadas num snapshot de diagnóstico
em `build/` (`SurfaceBase.SetSize/SetHeight`, fim de
`SurfaceManager.AdjustSurfaceLayout`, `GameForm.Draw`), roteiro dos menus,
protótipo de duas telas.

**O que fixa a área do jogo em 240×192 (em x = 80) quando a plataforma
informa 400×240.** Não é uma largura fixa no jogo; é a orientação.

1. Ao entrar no mapa, `GameForm` (Init) chama
   `app_.SetOrientation(apdat_.sysSave_.ints[13])`
   (`reference/src/Assembly-CSharp/form/GameForm.cs:308-316`). O valor salvo
   corresponde à rotação automática (`WindowOrientation::auto_rotation`).
2. O host guarda esse modo e o devolve na leitura:
   `src/kairo/platform/sdl/backend.cpp:59` (`Backend::orientation()` devolve o
   modo guardado tal como está); o host nulo/ARM faz o mesmo
   (`src/main/null_main.cpp:210-211`). Daí `IApplication::IsSide()`
   (`src/kairo/api/application.hpp:117-121`) passa a dizer falso, embora a tela
   continue deitada. No Unity, ler `Screen.orientation` com rotação automática
   devolve a orientação real do aparelho, nunca `AutoRotation`
   (`reference/src/KairoLibrary/kairo/unity/ui/IApplication.cs:637-641` lê
   `Screen.orientation`).
3. `SurfaceManager.AdjustSurfaceLayout`
   (`reference/src/Assembly-CSharp/surface/SurfaceManager.cs:103-111`), com
   `wide_` falso (calculado no boot com `IsSide()` verdadeiro, linhas 44-51),
   troca largura e altura como se o aparelho tivesse girado para retrato:
   largura 240, altura 400. Com 400 − 240 = 160 ≥ `SIZE_FULL`×0,75 = 120 de
   altura livre, o modo da `GamePad` deixa de ser 2 (linhas 133-135) e passa a
   ser o salvo (`ints[15]`, modo 1): barra de 48 px.
4. Depois de `Fullscreen`, o leiaute relê o `Canvas` sem a troca
   (`width=400`, `num3=240`, linhas 162-164): a vista fica com
   `SetSize(240, 240)` (linha 128), `SetHeight(240 − 48 = 192)` (linha 183) e
   `SetLocation((400 − 240)/2 = 80, 0)` (linha 187). É o quadro observado.

Sequência medida por quadro, no mapa: vista `SetSize 240x240` →
`GamePad SetSize 240x400` → `GamePad SetHeight 48` → vista `SetHeight 192` →
`GamePad SetSize 400x240`. Antes do mapa (título), a mesma função deixa a vista
em 400×240, modo 2, colunas laterais de 61 px.

**Mudança mínima que liberaria a largura.** Na plataforma (KairoLibrary
reimplementada, não no código traduzido): o leitor de orientação do host
devolver a orientação física quando o modo guardado for `auto_rotation`, como
o Unity (`backend.cpp:59` e o equivalente do host do 3DS). Com isso `IsSide()`
continua verdadeiro no mapa, não há troca, o `SurfaceManager` escolhe o modo 2
e a vista fica com 400×240; o `GameForm` já trata vistas com mais de 240
(`GameForm.cs:431-455`, `GetTopBarOffT/M/MBack`). Segunda parte, se a barra
`GamePad` for para a tela de baixo (B.3): no modo 2 a `GamePad` reserva colunas
laterais de 61 px para os rótulos (`GamePad.GetSideSize`, `GamePad.cs:1010-1019`;
`GameView.GetSideSoftWidth`, `GameView.cs:372-381`), que o mapa e as telas
descontam (`GameForm.cs:1142`, `AppData.cs:5368`); retirá-las exige mudar
código traduzido.

Nota para a decisão: a primeira parte é correção de fidelidade da plataforma
(o original no Android, deitado, nunca vê `IsSide()` falso), não alteração do
jogo. Por pedido do usuário, nada foi alterado agora.

## Requisitos do congelamento

### Critério 5 — nomes originais no C++ legível

Registrado em 2026-11-11, por pedido do usuário. Não tratar agora.

O emissor atual gera identificadores em hash para tipos, métodos, campos e
arquivos (`cs_57400ccf89951052`, `game_generated_type_b728593e3dcffe31.cpp`).
O critério 5 do congelamento (`docs/history/AGENTS-phase2.md`, seção 4) exigia nomes originais de
tipos, membros e parâmetros. Na geração legível, esses hashes precisam virar
os nomes do C# reconstruído (com tratamento de sobrecargas, tipos aninhados,
genéricos e colisões com palavras reservadas do C++), um arquivo por classe.

Impacto observado: na depuração do boot ARM desta sessão, cada símbolo da
pilha teve de ser mapeado à mão pelas cadeias `src/...:M:<método>` próximas
no `.cpp` gerado.

## Melhorias opcionais

### Paridade C++/Mono nos kernels de referência

Registrado em 2026-11-12, por decisão do usuário: deixou de ser exigência do
critério 2 do congelamento. Últimos números (ns/chamada, PC, `runtime-cost-final.md`):
Camera.ConvertScreenToCamera 14,8 contra Mono 6,1; Team.GetSum 138,6 contra 34,9;
Team.Cal_evaCoatMulti9block 132,6 contra 35,4; AppData.InsertGameObject 183,2
contra 83,9; ChRect 7,3 contra 10,0. O New 3DS real roda a partida em 12,05 ms
de média com backend nulo, contra 50 ms de orçamento.

## Runtime depois do congelamento

### Reforma do coletor (adiada pelo usuário em 2026-11-13)

Trabalho de runtime posterior, provável requisito para o 3DS antigo. Pode
entrar depois do congelamento sem alterar o código do jogo, mantendo a
interface usada pelo código do jogo (decisão de 2026-11-13; hoje toda mudança no runtime precisa de aprovação, `AGENTS.md`, seção 2).

- **Plano:** [`docs/notes/gc-reform-plan.md`](notes/gc-reform-plan.md) — heap
  por classes de tamanho em blocos, marcas em bitmap, tabela de páginas,
  lista de objetos grandes, varredura preguiçosa por bloco, nenhuma estrutura
  externa por objeto. Estimativa: 4–4,5 sessões.
- **Motivo:** pausa ≈ 21 ms fixos + 4,6 µs por objeto morto (Azahar). No New
  3DS XL (v5, três execuções) a coleta de transição no menu custa 105,6–107,7 ms.
- **Gatilho para reavaliar antes:** coletas por volume em jogo estável acima
  de 50 ms no aparelho.

## Código do jogo depois do congelamento (forma, sem mudança de comportamento)

### Uma grafia por tipo: `Graphics` (A.4e, adiado pelo usuário em 2026-11-23)

O tipo C# `kairo.unity.ui.Graphics` aparece no C++ em duas grafias: a classe da
plataforma `pls::kairo::Graphics` (escrita à mão; é o tipo dos objetos, `g`) e o
namespace traduzido `kairo::unity::ui::Graphics`, com as constantes (`AQUA`, ...) e os
métodos estáticos definidos em C# (`DrawString2`, `GetLineSpace`). O mesmo vale, em
menor escala, para `Canvas`, `Font`, `Image` e `IApplication`. Uma só grafia exige
que a classe da plataforma declare esses membros (ou os receba por um cabeçalho
mantido junto com ela). Depois do congelamento o código deixa de ser gerado, e a
unificação vira uma refatoração manual: mover os estáticos para a classe da
plataforma e trocar as chamadas. Sem efeito em comportamento; verificação com os
roteiros e os checks do código do jogo.

### Coleções `Vector` como chamadas de membro (A.4d, parcial)

As coleções genéricas da KairoLibrary têm membros que encaminham para as funções
livres (`x->Size()` chama `Vector_2_Size(x)`); 120 chamadas do jogo já usam o membro.
As 1.215 restantes têm receptor do tipo não genérico `java.util.Vector`
(`Vector : Vector<object>`) e continuam como `Vector_2_Size(require(x))`: a forma de
membro exige que a unidade inclua `java.util.Vector.hpp` (o tipo derivado completo),
o que o empacotador do tradutor não sabia decidir. Depois do congelamento: incluir o
cabeçalho onde falta e trocar as chamadas; o sufixo `_2` some se `Vector<T>` e
`Vector` forem fundidos (o C# usa `Vector` só como apelido de `Vector<object>`).

### Remover o embrulho `PLS_API` (proposta de 2026-11-24, não aplicada)

`PLS_API(X)` (aplicada em 2026-11-24, `docs/notes/pls-api-2026-11-24.md`) só serve ao
perfil do build de diagnóstico no PC: separa o tempo das chamadas à plataforma do tempo
do jogo (`PLS_FRAME_PROFILE`, áreas `translated_game` × `independent_kairo_api`) e o tira
do tempo exclusivo de cada método (`tools/diagnostic_execution.py`). Não é usado pelo
benchmark do 3DS (o build ARM não define `PLS_DIAGNOSTIC_BUILD`: lá é a própria
chamada), nem pela cobertura e pela salvaguarda dos roteiros (`PLS_METHOD_SCOPE`).
Sem ele, o tempo da plataforma conta como tempo do método do jogo que a chamou.

Proposta: trocar `PLS_API(X)` por `X` (entre parênteses só onde a precedência exigir).
Não é mudança só de forma: a lambda some, e com ela um ponto de sequência entre `X` e o
resto da expressão (o C++17 não intercala a avaliação de uma chamada de função com a de
outros operandos; sem a lambda, subexpressões de `X` podem se intercalar com operandos
não sequenciados vizinhos). Prova necessária:
1. **ARM** (onde `api_call` já é só a chamada e a lambda é expandida em linha com `-O2`):
   objetos idênticos em código e dados (`tools/compare_objects.py`); qualquer diferença
   explicada caso a caso.
2. **PC, build normal** (sem diagnóstico): idem.
3. **PC diagnóstico**: os objetos mudam por definição (some o `Scope`); comportamento
   pelos 87 roteiros (mesmos métodos executados, mesmos estados de interface e saves que
   antes) e pela verificação completa.
4. Revisão dos pontos onde `X` aparece junto de outro operando com efeito, no mesmo
   comando, sem bloco de ordem (`cs_arg`, `cs_left`): listar por ferramenta e conferir
   que a ordem não é observável.
Custo: perde-se a separação de tempo jogo × plataforma no perfil do PC.

### Declarações antecipadas nos `.hpp` do jogo (decisão de 2026-11-24: backlog)

Trocar `#include` de cabeçalhos grandes do jogo por declarações antecipadas onde o
cabeçalho só usa `Ref<T>` (ponteiro), para que editar um `.hpp` muito incluído recompile
menos unidades (hoje `main.AppData.hpp` → 52 unidades, ~6 min;
`docs/notes/rebuild-times.md`). Só forma; prova pelos objetos idênticos
(`tools/compare_objects.py`). O cabeçalho pré-compilado foi medido (−55 % no build
completo) e não entrou: objetos diferentes e auditoria de dependências quebrada.

### Roteiros determinísticos: carga de assets em tempo virtual (decisão do usuário)

Com `--fast`, os quadros correm na velocidade da CPU enquanto a carga de assets acontece em
threads que esperam em tempo real; por isso duas execuções do mesmo roteiro diferem no quadro
de cada passo (até 5 quadros em série, até 34 em paralelo) e o save do menu varia nos campos
do sorteio de treino (`docs/notes/route-speed-2026-11-24.md`). Fazer a carga avançar em tempo
virtual (ou sincronizar o quadro com o fim da carga no modo de diagnóstico) tornaria os
roteiros determinísticos e a comparação byte a byte possível. É mudança de runtime ou de
plataforma: exige decisão do usuário.

### `dev.py routes --affected` mais fino para `.hpp`

Hoje qualquer `.hpp` alterado leva ao conjunto completo (~65 min). Se pesar, a seleção pode
seguir as unidades que incluem o cabeçalho (o mesmo `grep` do `AGENTS.md`, seção 5) e os
métodos dessas unidades; cuidado com mudanças de layout (campo novo muda todos os usuários
da classe) e com funções em linha.
