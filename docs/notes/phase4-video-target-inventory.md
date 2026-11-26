# Inventário de vídeo anterior à mudança de memória

Leitura do código e dos assets locais autenticados em 2026-11-26, antes de
alterar a política do backend CTR. Residência medida é distinguida de tamanho
calculado: a falha impede medir um quadro completo de gestão na versão anterior.

## Alvos

Todos os alvos do backend usam RGBA8, sem redução de cor. A apresentação usa
dimensões giradas, sem arredondamento; imagens usam potências de dois de 8 a
1024. `Offscreen` já arredonda suas dimensões antes de chegar ao backend.

| Quem pede | Dimensões pedidas → GPU | Cor, bytes | Profundidade anterior, bytes | Local / duração / leitura |
|---|---|---:|---:|---|
| Gpu::Gpu, apresentação superior | 400×240 → 240×400 | 384.000 | 0 | VRAM; sessão; transferência à tela |
| Gpu::Gpu, apresentação inferior | 320×240 → 240×320 | 307.200 | 0 | VRAM; sessão; transferência à tela |
| Screens::top | 400×240 → 512×256 | 524.288 | 393.216 | VRAM; sessão; amostrado na apresentação e lido na captura |
| Screens::labels | 400×240 → 512×256 | 524.288 | 393.216 | VRAM; sessão; amostrado na composição inferior |
| Screens::bottom | 320×240 → 512×256 | 524.288 | 393.216 | VRAM; sessão; apresentação e captura |
| GameForm::GameScreenLayout / InitOffscreen | 667×401 → 1024×512 | 2.097.152 | 1.572.864 | VRAM; gestão até Finish/EndFrame; amostrado pela GPU |
| SoccerForm::GameScreenLayout / InitOffscreen | 667×401 → 1024×512 | 2.097.152 | 1.572.864 | VRAM; partida até Finish/EndFrame; amostrado pela GPU |
| AppData::Init, teste de mistura | 4×4 → 8×8 | 256 | 192 | VRAM temporária; Dispose ao terminar Init |
| Autoteste GPU do host | 64×64 e 8×8 | 16.384 ou 256 por alvo | 12.288 ou 192 | temporários antes do título; readback para conferir pixels |
| AppData::DrawOutline, duas sobrecargas | retângulo do sprite + duas margens → potência de dois | 4×largura×altura GPU por imagem, duas imagens | 3×largura×altura GPU por alvo | auxiliares RGB24 lógico, RGBA8 GPU; SetTransparentEnabled exige readback |

As duas sobrecargas DrawOutline têm definições, mas **nenhuma chamada encontrada
no código do jogo ou no C# de referência**. São registradas como possibilidade
estática, não como alocação observada. SubForm não cria Offscreen nem Image:
menus/janelas desenham nos alvos existentes. A gestão mantém seu offscreen
enquanto o menu está empilhado. GameForm::Finish e SoccerForm::Finish pedem
Dispose; liberação real fica para EndFrame e o ponto seguro da GPU. Na troca
de tela pode haver sobreposição transitória de alocações até esse ponto.

Nenhum alvo usa estêncil (profundidade DEPTH24, não DEPTH24_STENCIL8).
**Profundidade é necessária**: MeshManager::RecordGpu ativa depth_test e
escrita para primitivas não translúcidas; Render ordena batches por fila e
material e atribui ranks de profundidade. O caminho CPU também compara e
escreve um buffer de profundidade. AppData::DrawZSortObjects chama SetDepth.
Assim, não se pode substituir o resultado simplesmente pela ordem de emissão.
Clear/BeginMesh reinicializam a profundidade; o conteúdo não precisa sobreviver
entre renderizações completas de meshes. Isso permite o buffer compartilhado,
mantendo cada sequência de mesh íntegra, sem intercalar outro mesh.

Não foi encontrada leitura explícita de pixels em src/game. Existem leituras
indiretas na plataforma: GetAlphaType quando não há tipo em cache,
SetTransparentEnabled/SetAlpha, feedback source==target e capturas/autotestes.
Offscreen::resize fixa o tipo alfa, evitando essa leitura na amostragem normal.
Esses caminhos precisam continuar corretos; não são dispensados pelo inventário.

## Texturas de origem e glifos

Lista individual de **654 conteúdos de imagem distintos**, com pacote/nome,
dimensões pedidas/alocadas, formato, bytes, profundidade, estêncil, local,
tempo de vida e leitura: `build/phase4-video/inventory-before/asset-textures.csv`.
Gerada do catálogo autenticado, cruzando os SHA dos membros com as imagens
convertidas. São possibilidades de carga, não 654 texturas simultâneas.
Aliases do mesmo conteúdo estão reunidos na mesma linha; instâncias duplicadas
no jogo ainda podem produzir alocações distintas.

| Pacote / solicitante | Conteúdos distintos no pacote | Soma RGBA8 GPU se todos residentes, bytes |
|---|---:|---:|
| common2 / BootForm, AppData, formulários e menus | 334 | 6.166.016 |
| human2 / BootForm, jogadores | 15 | 1.442.048 |
| human_head / BootForm, retratos | 58 | 1.868.032 |
| imageMain / GameForm::Init | 104 | 1.425.408 |
| image / SoccerForm::Init | 95 | 1.900.544 |
| object / SoccerForm::Init | 2 | 3.072 |
| lineup / formação | 16 | 5.668.864 |
| event / BootForm, eventos | 12 | 835.584 |
| title / título | 6 | 1.019.904 |
| load / carregamento | 4 | 90.112 |
| system / interface de sistema do jogo | 12 | 6.881.280 |
| kairolib / biblioteca de interface | 4 | 409.600 |

A soma única do catálogo é 27.537.920 bytes. **Não é um pico por tela**:
há aliases entre pacotes, carga sob demanda e descarte. Cada textura de origem
fica na memória linear, RGBA8, sem profundidade/estêncil; nasce no primeiro uso
GPU e é aposentada por Unuse/Dispose, liberada no ponto seguro da thread de
desenho. A fonte CPU é retida, então amostrar essas texturas não exige readback.
Máxima dimensão de origem encontrada: 768×384, alocada como 1024×512.

Glifos são outra família, gerada conforme texto/tamanho: RGBA8 linear, dimensões
da rasterização arredondadas para potência de dois, sem profundidade/estêncil,
cache GPU até 1 MiB/4.096 entradas; descarte também adiado. O título medido tem
21 entradas e 8.448 bytes. O conjunto japonês/inglês efetivamente usado nos
menus e partida será enumerado durante a validação, não presumido do título.

## Soma por tela antes da mudança

| Tela | VRAM de alvos, bytes | Folga, bytes | Texturas lineares observadas |
|---|---:|---:|---|
| Título estável, medido | 3.443.712 | 2.847.744 | 5.402.880 bytes; linear livre 17.101.568 |
| Gestão, calculado para um offscreen | 7.113.728 | −822.272 | pico UNKNOWN; falha antes do primeiro quadro; linear livre no erro 16.515.328 |
| Menu sobre gestão, calculado | 7.113.728 | −822.272 | UNKNOWN; sprites/glifos dependem do menu |
| Partida, calculado para um offscreen | 7.113.728 | −822.272 | UNKNOWN; falha anterior impede chegar nela |
| Limite transitório com dois offscreens vivos | 10.783.744 | −4.492.288 | UNKNOWN; sobreposição ainda não medida |

Com profundidade compartilhada de 1024×512×3 e cores preservadas, o cálculo
para gestão/menu/partida com um offscreen cai para **5.934.080 bytes**, deixando
**357.376 bytes**. Portanto a expectativa é que o passo 2 permita abrir a
gestão, mas ainda não cumpra a folga solicitada. O gatilho do passo 3 será
confirmado pela execução, sem apresentar estes cálculos como medição.
Adotado o limiar conservador de 1 MiB (1.048.576 bytes) para o pedido de 1 MB.

## Resultado dos caminhos autorizados

O passo 2 (`1c64e5f`) compartilha DEPTH24 de 1.572.864 bytes no banco B;
cores pequenas ficam em B e apresentações/cores grandes em A. Gestão, menu e
zoom abriram no Azahar, com **5.934.080 bytes usados e 357.376 livres**. Isso
confirmou o gatilho do passo 3. Build/check/smoke: PASS, respectivamente
3,1 s / 2,9 s / 185,2 s, 10/10 execuções e zero alertas.

No passo 3, uma cor de trabalho de 2.097.152 bytes ocupa A junto às duas
apresentações (691.200 bytes). DEPTH24 compartilhado permanece em B. Cada alvo
lógico mantém sua textura RGBA8 linear; nenhuma dimensão ou formato muda.
Vistas citro3d não são donas dos buffers compartilhados. A troca de alvo
conclui os comandos, copia o resultado sujo VRAM→linear e restaura linear→VRAM
quando necessário. Clear completo dispensa a restauração. As transferências
são feitas pela GPU e concluídas antes de reutilizar a memória. Leitura de
pixels conserva snapshot, invalidação do cache CPU e destilagem existentes.

| Tela | VRAM anterior, bytes | Passo 2, bytes | Passo 3, bytes | Folga final, bytes |
|---|---:|---:|---:|---:|
| Título | 3.443.712 medidos | 3.836.928 medidos | 4.361.216 medidos | 1.930.240 |
| Gestão | 7.113.728 calculados, não cabe | 5.934.080 medidos | 4.361.216 medidos | 1.930.240 |
| Menu sobre gestão | 7.113.728 calculados | 5.934.080 medidos | 4.361.216 medidos | 1.930.240 |
| Partida | 7.113.728 calculados | 5.934.080 calculados | 4.361.216 medidos | 1.930.240 |

A reserva fixa aumenta o uso do título, mas limita a VRAM nas telas maiores.
Folga acima do requisito: **881.664 bytes**. Memória linear tem heap de
25.165.824 bytes nesta configuração; não confundir espaço livre nele com
memória normal do runtime. Picos por quadro incluem alocações e temporários
observados pelo backend; não são soma dos tamanhos de todos os assets.

Pico linear anterior por tela: **UNKNOWN**. O título anterior tinha
17.101.568 bytes livres no instante registrado, equivalentes a 8.064.256
usados; não havia contador de mínimo transitório para chamá-lo de pico.
Gestão/menu/partida não chegavam a completar um quadro antes da mudança.
Não há comparação honesta de picos dessas telas contra uma execução anterior
que falhava na alocação; os tamanhos calculados de VRAM estão identificados
como tal na tabela. Os mínimos lineares por quadro do passo 3 são medidos.

| Janela do Azahar, 300 quadros | Pico linear usado, bytes | Linear livre no pico, bytes | Cópias/quadro | Bytes copiados/quadro | Cópia média, ms |
|---|---:|---:|---:|---:|---:|
| Título | 9.571.584 | 15.594.240 | 6 | 3.145.728 | 0,857500 |
| Gestão 100%, parada | 12.209.408 | 12.956.416 | 8 | 7.340.032 | 1,151779 |
| Menu da gestão | 12.566.784 | 12.599.040 | 8 | 7.340.032 | 1,151779 |
| Gestão 75%, parada | 12.599.552 | 12.566.272 | 8 | 7.340.032 | 1,151596 |
| Gestão 75%, rolando (264/300 quadros) | 12.698.368 | 12.467.456 | 8 | 7.340.032 | 1,151201 |
| Partida, repetição curta | 13.047.808 | 12.118.016 | 8 | 7.340.032 | 1,153802 |

O custo da cópia inclui a espera da própria transferência síncrona; a espera
dos comandos anteriores é contada separadamente dentro de gpu_wait_ns. Não
somar copy_ns novamente ao total do quadro. Evidência privada:
`build/phase4-video/work-target-management/joined-profiles.json`.

Incluindo os quadros de carga/transição fora das janelas estáveis, o pico linear
observado foi 12.903.168 bytes na sessão de gestão EN (12.262.656 livres) e
**14.905.088 bytes** ao entrar na partida (10.260.736 livres), ainda com
1.930.240 bytes de VRAM livres. O pico JP foi 12.821.504 bytes usados,
12.344.320 livres. Esses mínimos vêm de `gpu-profile-1.csv`, não apenas do
contador de texturas ao final da carga. Capturas fora das janelas usam um
temporário linear de 524.288 bytes por tela e não entram no perfil por quadro.

Tempos físicos de cópia: **UNKNOWN**. A sessão longa da partida excedeu
16.384 registros: 13.040 descartados. Seus perfis de lógica/desenho continuam
válidos. A repetição curta (`work-target-match-short`) teve 3.208 registros,
zero descartados, e a janela de 300 quadros entrou na tabela acima.

Inventário de instâncias efetivamente observadas na repetição: 239 alocações,
10 alvos (incluindo os temporários do autoteste) e 138 imagens identificadas
pelos hashes dos payloads nativos, cruzados com os membros do catálogo. Lista
individual em `build/phase4-video/work-target-match-short/allocation-inventory.csv`.
As demais entradas sem nome são glifos/auxiliares nativos; o CSV conserva
dimensões, bytes, leitura e liberação observadas, sem inventar nome de asset.

Comparação preliminar passo 2→3: inferior idêntica no título, mapa 100% e 75%;
superior com 1.873 / 4.962 / 961 pixels diferentes, respectivamente. Os estados
animados e datas não estão sincronizados. Isso **não prova igualdade integral**;
o menu tem 4.451 pixels diferentes na superior e 20 na inferior. Capturas e
contagem estão em `build/phase4-video/memory-policy-pixels.json`. Autoteste GPU
passou antes e depois, incluindo profundidade, mistura, recorte e readback.
As sete telas foram inspecionadas contra o PC; dois recortes estáticos de
11.200 pixels cada, nos zooms 100% e 75%, foram idênticos. Detalhes e limites
em `phase4-video-gameplay-measurements.md`. Equivalência integral determinística
e desempenho físico permanecem **UNKNOWN**.
