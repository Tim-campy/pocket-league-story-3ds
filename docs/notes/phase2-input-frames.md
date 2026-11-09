# Polling do Canvas e eventos agregados no PC

`tools/probe_input_frames.py` executa o corpo inteiro original de
`Canvas.DecideKeyState`, o corpo inteiro de `GetKeyID` e o if/else de `Init`
que escolhe `VALID_KEYS`. O oráculo usa colaboradores próprios para um frame
Windows, sem Unity, assets ou execução do binário original. A comparação é
contra o `PcInputAdapter` de produção, alimentado com eventos SDL sintéticos.

## Hipótese refutada: perder um clique entre polls seria divergência

`Canvas.DecideKeyState`, linhas 867–1001, usa `Input.GetKey` e
`Input.GetMouseButton(0/1)`. Não chama `GetMouseButtonDown` nem
`GetMouseButtonUp`. O estado anterior é `onValidKeys_`, `onMouseButton_` e
`onMouseRight_`. A facade de teste fornece ambas as edges verdadeiras em cinco
frames; os dois oráculos (.NET e Mono do Unity) registram zero consultas às
edges.

| Sequência antes de um poll | Resultado do fonte e do adaptador |
|---|---|
| DOWN + UP do botão esquerdo, começando solto | Nenhum evento de toque |
| UP + DOWN com esquerdo já segurado e posição diferente | MOVE, sem UP/DOWN intermediário |
| UP + DOWN + UP com esquerdo já segurado | Somente UP na posição final |
| DOWN + UP do direito, começando solto | Nenhum evento de tecla |
| UP + DOWN do direito já segurado | Nenhum evento intermediário |
| DOWN + UP da seta, começando solta | Nenhum evento de tecla |

Portanto, acrescentar a entrega de todos os cliques curtos a esse consumidor
mudaria o comportamento original de polling do Canvas no PC. Isso não decide
o contrato de outros consumidores: a seleção de retângulos de debug de
`SurfaceManagerBase` usa `GetMouseButtonDown` e precisa de um snapshot de edge
próprio. Não se deve trocar held por edge indiscriminadamente.

## Diagnóstico anterior: DEBUG + Shift

O mesmo corpo testa `Config.DEBUG` e Shift antes de entrar no trecho do mouse.
Enquanto a condição é verdadeira, ele não atualiza o estado anterior do mouse.
O adaptador anterior não recebia essa flag e processava o toque mesmo assim.

No cenário medido, `Canvas.Init` ocorre com DEBUG falso; depois a fixture liga
DEBUG, segura Shift e pressiona o botão esquerdo:

| Frame | Original | Adaptador anterior |
|---|---|---|
| DEBUG + Shift + mouse pressionado | Evento da tecla; nenhum toque | Evento da tecla e DOWN de toque |
| Soltar Shift, mouse ainda segurado | UP da tecla e DOWN de toque | UP da tecla; nenhum novo toque |

O diagnóstico anterior mediu 32 observações: 28 iguais e quatro divergentes
(dois cenários em cada perfil). Seu estado era DIAGNOSED e exit code zero
indicava o controle negativo esperado, sem afirmar correção. A medição permanece
no histórico do repositório e no bloco previous_diagnostic do recibo atual;
ela não foi apagada nem reinterpretada como resultado correto.

`Init` também escolhe a matriz de teclas uma vez: na matriz DEBUG, Control
participa do grupo Keypad4 e Shift do grupo Keypad6; na normal, Shift participa
dos grupos A/S. O adaptador anterior tinha a matriz normal fixa. O diagnóstico
inicial ainda não tinha cenário diferencial com inicialização em DEBUG.

## Correção e regressão atuais

`PcInputAdapter.initialize_config(initialDebug, currentDebug)` captura a seleção
de VALID_KEYS uma única vez, antes do primeiro polling. Provider vazio, segunda
inicialização e inicialização depois de um poll são recusados explicitamente.
O default false conserva os fixtures normais anteriores. O Canvas pré-criado
pelo host para possuir o framebuffer é preparação de plataforma; a inicialização
semântica ocorre no bootstrap **após Config.Create**, por
`Canvas.host_input_config(reader)`. Essa chamada lê o DEBUG inicial uma vez e
retém um leitor de Config.DEBUG para os frames. O binder gerado deve fazer essa
chamada uma vez, com accessor estático/captura somente nativa, sem Ref gerenciado
oculto. Nenhuma flag Config global é modificada pelo adaptador.

A cada Decide, o leitor atual é consultado depois dos callbacks de teclado,
na posição da guarda original. Quando DEBUG e qualquer Shift estão ativos, o
bloco inteiro do mouse é omitido e os estados anteriores de posição, botão
esquerdo e direito ficam congelados. Ao sair da guarda, down/up pendentes são
observados pelo estado held, conforme o fonte. Não se trocam grupos a cada
mudança de DEBUG, nem se converte esse consumidor em uma fila de edges.

O recibo atual `config/phase2-input-frame-probe.json` exige **32/32** no corpus
original, com zero diferenças. Acrescenta **34/34** observações da matriz
inicial DEBUG (17 por perfil): Control/Shift, aliases simultâneos, mudanças do
DEBUG atual sem troca da matriz, mouse esquerdo/direito e entregas adiadas
ao sair da guarda. Mais **oito invariantes** cobrem setup e a ordem da leitura
de DEBUG depois de um callback de teclado que o altera.

A regressão existente é pré-requisito e está ancorada por hash: **56/56** casos
normais, **19** assertivas do adaptador e **4/4** casos do pulse/cache/lost-update.
Execute `python tools/test_input.py` antes de `python tools/probe_input_frames.py`.
O probe recusa um recibo de regressão desatualizado. Nenhum método do jogo ou
ID adicional da fronteira é promovido automaticamente por esse teste.

## Limites

A sequência de eventos do Android original não foi observada neste teste. O
oráculo mede a lógica PC que o próprio fonte contém. As folhas próprias de
`OnKeyDown/Up` instrumentam a chamada e a mutação do bit físico, sem caminhos
Escape/diálogo/surface. `GetAxis=0` e `touchCount=0`: wheel/pinch e o caminho de
toques móveis foram lidos, mas não exercitados. Houve a correção de produção
descrita acima, sem pacote novo, recuperação artificial de cliques curtos ou
promoção automática de estado do jogo. A instalação real do reader no bootstrap
e o fluxo de título/menu continuam provas de integração separadas.
