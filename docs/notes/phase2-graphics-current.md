# Graphics.GetCurrent e ciclo de paint

`Graphics.GetCurrent` (`Graphics.cs:4426`) devolve o campo estático `current_`.
No corpus reconstruído há apenas dois stores desse campo:
`Canvas.BeginPaint:472` e `Canvas.BeginAlterStaticRender:502`. Eles ocorrem
depois de preparar o contexto, executar `ResetRender` e definir a fonte.

O campo começa nulo. **EndPaint não o limpa**: também não há limpeza ou
restauração em `EndAlterStaticRender`, `Graphics.Dispose` ou nos construtores.
Portanto o último contexto continua acessível depois do paint, mesmo quando
o Canvas já limpou seu campo de paint ativo. Um paint aninhado substitui o
current global; terminar o paint interno ou externo não restaura o anterior.
Essa regra foi confirmada pelo verificador diferencial, não inferida de uma
convenção de escopo gráfico.

## Implementação do backend CPU

`Graphics.current_` usa `SharedField<Ref<Graphics>>`: cada getter carrega uma
referência forte independente, cada um dos dois caminhos do Canvas faz um
store forte. Criar `Graphics` nunca publica o objeto. A referência mantém o
contexto e seu alvo vivos até um novo store; um snapshot carregado continua
vivo depois da substituição. Nenhum reset foi acrescentado ao término do host
ou do paint.

`Canvas.graphics_` e `Graphics.current_` têm papéis diferentes. O primeiro é
o buffer pertencente ao Canvas; um contexto explícito pode ser o current sem
substituí-lo. `EndPaint(g)` limpa o campo do Canvas somente quando `g` é o
mesmo objeto. A sobrecarga sem argumento usa esse campo e lança
NullReferenceException se ele já estiver nulo, como o corpo original.

O `graphicsBuffer_` estático é reutilizado após cada `EndPaint`, conservando
sua identidade. No PC seu alvo é o framebuffer do host. O buffer é GUI;
contextos obtidos de `Image.GetGraphics` são não GUI. Esse atributo é definido
na construção, sem stores repetidos concorrentes. Isso importa ao getter
`SurfaceBase.registTouch`, que testa `current_ != null && !current_.IsGUI()`.

`ResetRender` limpa os estados existentes no backend CPU: pilhas de fonte,
origem, clip e modo; escala, cor, transformação e retângulo; estado de
localização da fonte e defaults de fonte. Ele não publica current. Estados de
mesh/GL não existentes no backend CPU não foram simulados com callbacks vazios.
Múltiplos mesh managers não são suportados; a API recusa IDs fora de -1/0 em
contextos não GUI. Cache de meshes estáticos e batches GL continuam fora da
prova desta implementação.

`BeginAlterStaticRender` também publica current e marca o campo original
`isAlterStaticRendering_`. O `EndAlterStaticRender` original deixa esse campo
como estava; somente `EndPaint` o grava falso. A ponte de leitura
`source_IsAlterStaticRendering` permite que o teste consulte o campo real.

## Provas e limites

`python tools/test_graphics_current.py` passa 44/44 observações, contra o
.NET moderno e o Mono do Unity 5.3.4f1. Os corpos completos de Begin/EndPaint,
Begin/EndAlterStaticRender, construtores, GetCurrent, IsGUI,
IsRenderGUIMode, ResetRender, Dispose e EndGLRender são extraídos do fonte.
Os colaboradores de mesh, GUI, fontes e `Graphics.Init` são próprios da
fixture; não se executa Unity. A prova exercita identidade do buffer,
aninhamento, explicit-null, contextos GUI/imagem, reset, throw/finally e
retenção após Dispose/End.

Nove invariantes nativos comprovam retenção do alvo pelo current, sobrevivência
de um snapshot ao overwrite, coleta do contexto/alvo antigo depois de soltar
o snapshot e 2.000 cargas em worker com stores/coletas na UI. Uma barreira da
fixture garante ao menos uma coleta com o worker registrado. A contagem de
coletas depende do escalonamento e está no recibo.

A proteção do campo current não torna todo Graphics ou Canvas thread safe.
O buffer e os estados de desenho continuam pertencendo à UI. A fixture do
worker lê somente a referência e o atributo GUI imutável. Não foram medidos
acessos simultâneos às listas de desenho, troca de framebuffer durante paint,
GL ou cache estático. Nenhuma dessas provas é execução do jogo.

Regressões verificadas após a alteração: Forms 68/68; scheduler 50/50;
bootstrap 12/12; Surface bridge 24/24; gráficos 550 observações diferenciais,
7.955 invariantes nativos e 718 ocorrências PNG carregadas do pipeline local
autenticado. Os recibos e seus hashes são gerados pelos respectivos scripts.
