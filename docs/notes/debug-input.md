# Snapshot de entrada do ramo DEBUG

O DEBUG original permanece no fonte traduzido; nenhuma flag Config.DEBUG foi
desativada. `SurfaceManagerBase.DoEvents` e `Draw` leem Shift, botões e posição
para criar/editar/desenhar os retângulos de depuração. A nova folha nativa
`DebugInput` fornece somente os membros admitidos abaixo. Não é uma nova
implementação manual desses métodos do jogo.

| Membro admitido | Contrato nativo |
|---|---|
| GetKey | Somente LeftShift=304 e RightShift=303, validados como metadados. Estado held por scancode SDL. |
| GetMouseButton | Somente 0/esquerdo e 1/direito; held persiste até release/foco perdido. |
| GetMouseButtonDown | Mesmos índices; edge mantido durante todo o snapshot. Consultar não consome. |
| mousePosition | Vector3 próprio com x/y/z Single; z=0. Getter devolve cópia de valor. Nenhum método matemático Unity é simulado. |
| Screen.height | Altura lógica do framebuffer do backend; 280 no host atual. |

O SDL usa coordenadas relativas à janela. A folha converte para a origem
inferior esquerda usada no código Unity: **x = SDL.x, y = altura - SDL.y**,
sem subtrair um pixel nem limitar coordenadas externas à janela. As expressões
originais de DoEvents convertem novamente `Screen.height - mousePosition.y`
para o espaço superior esquerdo da superfície. Não se altera a lógica dessas
expressões, o tamanho da janela nem o layout 3DS.

`Backend::events()` é a única fronteira de atualização por frame do host:
limpa os novos edges de trabalho, drena a fila SDL, mantém os held e publica
o snapshot inteiro sob mutex. Durante o pump, outros leitores continuam vendo
o snapshot anterior, nunca metade de um update. DoEvents, Draw e seus substeps
não fazem pump nem resetam edges. Vector3 é copiado sob o mesmo lock, evitando
componentes rasgados em leitores concorrentes. Eventos enviados ao Canvas
continuam na lista original; seu pulse consumível e agregação de mouse são
outro consumidor e não foram reutilizados ou alterados nesta folha.

Um down e up na mesma fila deixa held=false e down=true nesse snapshot; down
duplicado sem release não gera novo edge. Perda de foco limpa os held, mas
preserva edges já vistos até o próximo pump. São políticas explícitas deste
backend de eventos, não observações do Input nativo do Unity/Android. O estado
inicial é sem edges, com o estado SDL disponível na instalação. Ausência ou
destruição do backend gera erro explícito. Só há um backend SDL ativo, como no
ciclo de vida já existente com SDL_Init/SDL_Quit globais.

O inventário semântico `config/debug-input-usage.json`, gerado por
`tools/inventory_debug_input.py --original-managed <diretório externo>`, liga
os símbolos Roslyn dos dois assemblies. São **67 referências**, todas no
KairoLibrary: **36 Input** e **31 Screen.height**, com zero erros semânticos e
zero membros Input não resolvidos. Os 36 Input estão em sete métodos de três
classes (Canvas, SurfaceBase e SurfaceManagerBase):

| API Input | Referências | Situação da folha |
|---|---:|---|
| mousePosition | 13 | Admitida |
| GetKey(KeyCode) | 7 | Seis Shift admitidas; uma chave dinâmica recusada |
| GetMouseButton(Int32) | 4 | Admitidas para 0/1 |
| GetMouseButtonDown(Int32) | 2 | Admitidas para 0/1 |
| touchCount | 6 | REFUSE_UNPROVED |
| GetTouch(Int32) | 2 | REFUSE_UNPROVED |
| multiTouchEnabled | 1 | REFUSE_UNPROVED |
| GetAxis(String) | 1 | REFUSE_UNPROVED |

Com Screen.height, são **56 admissões técnicas e 11 recusas**, sem promoção
automática de métodos. Nenhuma chamada Input direta foi encontrada no jogo.
Outras teclas, botões ou APIs geram NotSupportedException na folha, em vez de
retornar false/zero silenciosamente. O emissor deve recusar bindings além do
subconjunto comprovado. Canvas.DecideKeyState ainda tem seu caminho próprio;
o tratamento DEBUG+Shift que suprime o mouse normal deve ser verificado
separadamente nesse adaptador, sem inferir correção pela nova folha.

`python tools/test_debug_input.py` passou **24/24 casos**, 12 por perfil
SDK Mono unity/.NET, usando snapshots esperados e as **duas expressões originais
exatas de coordenadas** de DoEvents. A política SDL passou **24 invariantes**
com eventos sintéticos headless: held entre frames, repeat, up/down no mesmo
frame, foco, coordenadas externas/extremas, edges não consumidos, recusa de
índices não admitidos, publicação inteira, leitor concorrente e cópia Vector3.
O target CMake `debug_input_test` e o teste SDL anterior passaram no CTest.
O recibo `config/phase2-debug-input-tests.json` não promove IDs da fronteira:
não compara o método DoEvents completo, não roda GameStart, não usa assets,
não observa input físico e não prova título/menu ou Input nativo Android.

Referências primárias: [Unity 5.3 mousePosition](https://docs.unity3d.com/530/Documentation/ScriptReference/Input-mousePosition.html),
[Unity GetMouseButtonDown por frame](https://docs.unity3d.com/530/Documentation/ScriptReference/Input.GetMouseButtonDown.html),
[SDL_MouseButtonEvent](https://wiki.libsdl.org/SDL2/SDL_MouseButtonEvent) e
[SDL_Keysym/scancode físico](https://wiki.libsdl.org/SDL2/SDL_Keysym).
[SDL_PushEvent](https://wiki.libsdl.org/SDL2/SDL_PushEvent) não modifica o estado
interno do dispositivo SDL; por isso a prova injeta eventos na mesma máquina
de transições que o backend usa, em vez de fingir input físico por GetMouseState.
