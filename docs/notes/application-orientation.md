# Getters de orientação e política da janela PC

`IApplication.IsSide` e `GetOrientation` usam um leitor explícito de
`WindowOrientation`, sem dependência Unity. Os valores numéricos foram lidos
como metadados da API externa original, sem carregá-la/executá-la: Unknown=0,
Portrait=1, PortraitUpsideDown=2, LandscapeLeft=3, LandscapeRight=4,
AutoRotation=5; Landscape é alias de 3. Os accessors de `Screen.orientation`
e `Screen.autorotateToPortrait` são InternalCall, RVA zero. Metadados não
provam o comportamento do player Unity nativo do Windows.

`host_configure` instala o leitor padrão somente quando ainda não há um
leitor explícito: largura maior que altura dá landscape_left; os demais casos
dão portrait. A janela/framebuffer PC corrente, **240×280**, portanto usa
portrait. Isso é uma política declarada da janela do port, não uma leitura do
monitor, sensor Android ou escolha de layout de telas do Nintendo 3DS. Não se
usam SDL_GetDisplayOrientation nem alterações de flags globais Android.
Dimensões e provider são configurados antes dos workers. O leitor default
captura apenas o ponteiro nativo ao próprio IApplication; não cria ciclo de Ref.

`host_orientation_reader(std::function<WindowOrientation()>)` permite um
provider próprio de observação. Ele deve ser instalado no setup, antes de
host_start/workers. Provider vazio gera ArgumentException; getters sem provider
geram InvalidOperationException; alteração com aplicação já criada também é
recusada. Capturas devem conter somente estado nativo, sem referências gerenciadas
escondidas. Se o provider observar estado mutável compartilhado, a sincronização
de cada leitura é responsabilidade desse provider.

O corpo reconstruído de `IsSide`, em IApplication.cs:637, testa LandscapeLeft
duas vezes e depois LandscapeRight. Isso foi preservado, com **uma, duas ou três
leituras distintas**. Não se reduz o método a uma observação armazenada. Exemplos
do fixture: Portrait→LandscapeLeft retorna true em duas leituras;
Portrait→Portrait→LandscapeRight retorna true em três; LandscapeRight→Portrait→
Portrait retorna false; Portrait→Portrait→LandscapeLeft também retorna false.
`GetOrientation` faz uma única leitura e retorna Portrait=0, Right=1,
UpsideDown=2, Left=3, outros=0, como no fonte original IApplication.cs:666.

`python tools/test_application_orientation.py` passou **40/40 diferenciais**,
20 em cada perfil SDK Mono unity/.NET, mais **oito invariantes de política
nativa**. O oráculo compila os spans originais exatos, com Screen colaborador
próprio para registrar reads e scripts de mudança entre leituras. O recibo
`config/phase2-application-orientation-tests.json` promove somente os dois
getters. A prova inclui getters sem provider, provider null, janela portrait,
landscape e quadrada, preservação do provider explícito e setup-only.

As **41 observações adicionais por perfil** de SetOrientation, ResetOrientation
e IsAutoOrientation ficam como contexto de fonte, sem comparação/prova nativa.
Essas três APIs **não foram implementadas**. Em particular, armazenar uma
solicitação landscape não demonstraria rotação de uma janela ainda portrait.
IsAutoOrientation lê a permissão autorotateToPortrait, não a igualdade do enum
com AutoRotation; Reset usa o default capturado no Awake, não recaptura o atual.
Nenhum desses efeitos é simulado silenciosamente pelos getters.

A [documentação oficial Unity 5.3 de Screen.orientation](https://docs.unity3d.com/530/Documentation/ScriptReference/Screen-orientation.html)
descreve orientação lógica com efeito nas coordenadas de toque, relevante nas
plataformas móveis. A [permissão autorotateToPortrait](https://docs.unity3d.com/530/Documentation/ScriptReference/Screen-autorotateToPortrait.html)
é considerada na rotação automática. O comportamento desktop exato e o sensor
Android continuam UNKNOWN; não se executou um player original para verificá-los.
Esses fixtures não provam boot, título, menu ou layout 3DS.
