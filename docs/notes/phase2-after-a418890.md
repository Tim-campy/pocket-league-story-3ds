# Continuidade local após a418890

Registro da rodada iniciada em a418890. O marco do menu de gestão passou na
verificação completa: 99/99 checks, 101 recibos autenticados. `PROGRESS.md` foi
regenerado pelos scripts a partir desse conjunto coerente.

## Build e emissor

- Emissão por tipo implementada em `translator/EmissionUnits.cs`. Corpus congelado
  de a418890: 171 tipos Game + 54 portáveis, com dois anchors de compatibilidade.
- Medição `/O2 /fp:strict /MD`, dois jobs, objetos gerados sem backend/link:
  completo 316,855456900 → 337,590406300 s; invalidação de `main.AppData`
  326,424002400 → 11,084364700 s. A invalidação grande altera só timestamp.
- A fixture própria altera efetivamente um método C#: dez tipos, um CPP/objeto
  alterado, nenhum header/timestamp de arquivo inalterado modificado, resultado
  executado `15,27` igual ao oracle C#. Inclusões reais auditadas por Ninja.
- Portáveis compilados: 374/374, 172/172 raízes. Diferencial 2.617/2.618 conserva
  o único caso conhecido `JMath.Sin(-0)`; não foi relaxado o comparador.
- Lowering: 196 métodos / 1.372 observações aprovadas após acrescentar propriedade
  float com atribuição composta, ordem getter→RHS→setter e `Math.Min(Single)`.
- Os primeiros dois ensaios do corpus completo falharam por dependências omitidas
  de receptores concretos/campos herdados. Tipos das expressões ligados pelo
  Roslyn passaram a orientar os includes; o terceiro ensaio compilou o corpus.

## API no caminho exercitado

Arcos: 34 cenários / 1.568 invariantes próprios de cobertura CPU e 16 invariantes
da API aprovados. Esses testes não reclassificam o FAIL geométrico histórico
235/360, nem qualificam rasterização/trigonometria Android. A autorização do
usuário permite continuar mantendo essa validação como UNKNOWN.

Balões: a lista retida por Image guarda tarefas geradas do C# original, incluindo
clone de Balloon e referência Offscreen. A apresentação usa adapter do trecho
`Graphics._drawBitmap` (Graphics.cs:1998–2026), depois dos pixels da imagem e
antes de EndRenderMatrix. A lista persiste entre blits. No início desta rodada,
Offscreen era somente um handle de transformação; sua implementação posterior
é descrita abaixo. Ainda falta qualificação Android específica da fila.

Foi necessário emitir `Single *= Single` em propriedade e o overload Single de
System.Math.Min. Um ensaio inicial do Min passou 164/200 casos: o Mono histórico
canoniza os NaNs onde o .NET moderno preserva payload. A implementação por perfil
foi corrigida e passou 200/200 (100 por host). O comparador continua em bits
exatos; o resultado negativo e o header testado foram preservados localmente.
Esse ensaio também não qualifica o runtime Android.

## Fluxo e tentativas

O último marco observado continua sendo título e seleção de saves, na baseline
anterior. O novo conjunto tem 1.736 candidatos originais Game emitidos, sem nova
promoção a compilados/executados. `SubForm.Draw` e `Balloon.Draw` deixaram de ser
rejeitados no lowering.

A tentativa 15 não executou: faltava ao bootstrap incluir o header do
inicializador Config na biblioteca portátil. O bootstrap passou então numa
compilação isolada, com includes dos símbolos e tipos de retorno efetivamente
usados. A tentativa 16 compilou/executou até 20 segundos sem marcador de lacuna:
o frame 300 mostrou o cadastro da equipe, depois do menu de seleção de saves.
Captura privada: `build/pc-diagnostic-release/attempts/16/frames/frame-300.bmp`,
SHA-256 `32f09488cf35a12496219981db1ed694c569be7cd6b08525ed851dc16dd49b94`.

Na tentativa 17, DOWN nos frames 240/252/264 e SELECT no 276 confirmaram esse
cadastro pelo código original (`SubForm.Update2`, ramo `type_ == 71`). Build/link
incremental: 5,434463400 segundos, apenas `pc_main.cpp` e link. Aos 16,828 segundos
o supervisor parou em `M:form.GameForm.Init`. A cadeia é Init → InitOffscreen →
delegate GameScreenLayout com quatro parâmetros out. Além do ABI, a rota exige
criação/renderização de Offscreen e MeshManager.SetDepth, hoje sem binding.

O ABI de delegates nomeados ref/out foi implementado para grupos estáticos e de
instância e invocação normal/Invoke. Fixture: 27 métodos / 189 observações,
182 iguais e as mesmas sete diferenças históricas de NullFieldOrder (UNKNOWN
Android). Há novos casos de alias, multicast, escrita antes de exceção, avaliação
de argumentos antes de delegado nulo e layout de quatro out (int/int/int/float).
A fixture ainda não qualifica os enums nativos do layout de Offscreen nem sua
renderização. Lambdas com assinatura ref/out continuam recusadas.

Snapshots de diagnóstico permanecem imutáveis como evidência. O compilador usa
agora um espelho estável em `build/game-diagnostic-current/`, com cópia somente
quando os bytes mudam, para reutilizar objetos entre snapshots. Antes/depois do
build são verificados tanto o snapshot quanto o espelho. Dois jobs limitam a
pressão de memória. As novas guardas de genéricos ficam nos headers dos tipos,
sem modificar os fontes canônicos nem fornecer corpos silenciosos.

## Continuidade do caminho do campo (ainda sem checkpoint)

O bloqueio de `GameForm.Init` foi localizado no caminho
`InitOffscreen` → delegates `RenderGameScreen`, `StaticRender` e
`GameScreenLayout`. O layout usa quatro parâmetros `out`, incluindo os enums
de formato/filtro da imagem. O lowering atual aceita esse caminho; uma nova
geração emitiu 1.760 corpos originais candidatos, ainda sem recibo de compilação
canônica atualizado. Não somar essa emissão aos 1.720 compilados do checkpoint.

A implementação CPU de `Offscreen` conserva criação na UI, dimensões potência
de dois (mínimo 32), cache estático, transação das três filas de tarefas,
descarte do desenho dinâmico quando o callback retorna falso e descarte ao fim
do frame. O backend de material/profundidade mantém comandos separados dos
pixels finais. Fixtures próprias: 15 invariantes de profundidade/material e
23 de ciclo de vida, aprovadas; isso não qualifica rasterização Android nem
comportamento visual do jogo. O domínio exercitado é profundidade de 24 bits e
transformação identidade, usados pelo caminho atual. Não é suporte declarado
à variante de 16 bits ou a transformações arbitrárias do Offscreen.

Texto, balões e toque permanecem filas da imagem. Adaptadores gerados seguem
`Graphics._drawBitmap`, `Graphics.DrawString` e `Offscreen.OnPostRender` para
encaminhá-las. Nenhum retorno silencioso substitui callback ausente: o
diagnóstico interrompe também uma exceção capturada dentro de Offscreen.

`SurfaceBase.ExistTouchComponent` exigiu percorrer `java.util.Vector<T>`.
O tradutor reconhece estritamente a forma do iterador reconstruído
(`foreach (T item in list_) yield return item`) e usa seu getter `List` e o
enumerador de List, com teste de versão, conversão e Dispose. Não usa um laço
por índices para contornar a semântica do enumerador. Essa especialização não
declara suporte geral a `IEnumerable`/`yield`.

A tentativa Release 18 compilou e executou por 20,062 segundos, sem marcador
de lacuna. O frame 300 foi inspecionado e mostra o campo e o diálogo inicial
do assistente após a confirmação do cadastro; ainda não é o menu de gestão
estável. Captura privada: `build/pc-diagnostic-release/attempts/18/frames/frame-300.bmp`,
SHA-256 `838d5f087cc1fdec75d5f55a94f929aead123c5db6c91267446dfd646be849b4`.
Executável SHA-256 `c86ca0875b8b595f6182dd5fbcc86b86dede42312720c8e8b24dd13f81af3125`.

## Marco: menu de gestão no PC

As tentativas 19/20 avançaram o tutorial usando somente pulsos Canvas e os
comandos originais. Na tentativa 21, o pulso SOFT2 no frame 600 abriu o menu
lateral (`GameForm._update` → `Push(menu_)`, criado por `GameForm` com SubForm
tipo 3). Capturas privadas dos frames 780 e 900 foram inspecionadas: menu de
gestão aberto, campo ao fundo, sem diálogo de abertura. O diagnóstico rodou
60,062 segundos, sem marcador de lacuna ou exceção Offscreen. Executável
SHA-256 `b9e3af3534c16463f1a5c7dd08d0156dd36b29c067a11f42e0ce569aedf378db`.
Os hashes das capturas e entradas de build estão em
`config/phase2-diagnostic-attempts.json`; os arquivos continuam ignorados.

`tools/summarize_pc_window.py --attempt 21 --first 661 --last 900` produz
`config/phase2-pc-window.json`. Janela Release de 240 frames, posterior à última
entrada e separada de carregamento/tutorial:

| Medida | Média (ms) | Mediana (ms) | P95 (ms) |
|---|---:|---:|---:|
| Frame com espera de ritmo | 51,1439725 | 51,08355 | 51,8974 |
| Trabalho antes da espera | 24,230823333333333 | 23,1213 | 30,374 |
| Atualização, incluindo Offscreen | 12,648705416666667 | 11,7462 | 17,6533 |
| Desenho da tela | 10,075241666666667 | 9,66415 | 11,6101 |

Memória no frame 900, em bytes:

| Categoria | Medição residente |
|---|---:|
| Processo inteiro | 165.060.608 |
| Imagens carregadas do executável e bibliotecas, cobertura Windows | 29.872.128 |
| Payload conhecido de texturas CPU | 9.144.072 |
| Payload conhecido de áudio | 98.304 |
| Payload conhecido de fontes/cache | 260.448 |
| Payload conhecido do heap gerenciado, incluindo comandos gráficos | 9.464.174 |

As categorias têm cobertura parcial e não são aditivas. Overhead dos alocadores,
allocações opacas de bibliotecas e residência GPU são UNKNOWN. O número de código
acima é a imagem carregada completa, não uma atribuição exclusiva às instruções
do jogo. O pico residente observado do processo foi 170.864.640 bytes. Estes
valores medem o backend de desenvolvimento Windows; não comprovam consumo ou
desempenho no Nintendo 3DS. O registro numérico ocorre após o intervalo medido.

A fixture da especialização Vector aprovou 70/70 observações em dez métodos,
incluindo cast antes de conversão para object, mutação, troca de lista,
referência nula e saída antecipada. O corpo genérico yield continua recusado;
não houve promoção de suporte geral a iteradores.

Na verificação do marco, a primeira execução parou na fixture de manifesto:
ela não criava `EmissionUnits.cs`, agora obrigatório na cadeia de produtores.
A fixture passou a declarar e autenticar esse arquivo. A segunda parou na
compilação do oráculo portátil: a declaração de `IApplication.UIMethod` passou
a ser emitida do fonte, mas o colaborador sintético antigo ainda a duplicava.
Esse colaborador virou uma classe parcial e deixou de redeclarar o delegate.
Foram falhas da infraestrutura de prova; nenhuma delas foi ocultada ou
classificada como aprovação do jogo. A verificação completa foi reiniciada.

## Referência Android (continuação)

ADB sem aparelho; o usuário escolheu continuar sem ele por enquanto. Capturas
privadas anteriores servem para título e seleção de saves. Comparação de novas
telas, partida e validação Android da trigonometria permanecem pendentes.
Memória e frame time do menu PC foram medidos acima, com cobertura parcial.
Nenhuma ferramenta/aplicativo foi instalado
no Android nesta continuidade, e nenhuma nova dependência foi preparada.
