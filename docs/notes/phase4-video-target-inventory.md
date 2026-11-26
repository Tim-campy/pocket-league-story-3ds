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
