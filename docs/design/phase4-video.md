# Fase 4 — vídeo: primeira entrega

Decisão do usuário em 2026-11-25. Este bloco termina no título desenhado pela
GPU, com rótulos na inferior e entrada básica. Gestão e partida só depois do
teste no New 3DS XL. O caminho CPU do PC e o backend nulo permanecem disponíveis.
Este documento distingue o projeto abaixo dos resultados medidos ao final.

**Aceite físico reprovado:** no primeiro teste do usuário, o New 3DS XL ficou
com tela preta por cerca de cinco minutos, sem responder ao HOME. Os arquivos
recuperados em `build/phase4-ctr/pls-video/` contêm `PLS_VIDEO_ASSET_ROOT=romfs:/`
e `PLS_VIDEO_MODEL new3ds=1 result=0`, mas não `PLS_VIDEO_SELF_CHECK=PASS`.
Portanto SD, catálogo e construtor GPU foram alcançados; a parada está no
autoteste GPU ou na limpeza de uma falha dele, antes de iniciar o jogo. A hipótese inicial de falha antes
da criação dos logs foi refutada. A chamada exata e a causa permanecem UNKNOWN.

Revisão de diagnóstico: registros `PLS_VIDEO_SELF_CHECK_STAGE` e
`PLS_VIDEO_GPU_BOOT` antes/depois de submissão, espera, upload e readback,
com flush imediato. Desativados ao terminar o autoteste. Nenhuma tentativa
de contornar o teste, mudar o tamanho dos alvos ou trocar os assets sem
evidência. O resultado anterior do Azahar não é aceite do aparelho.
Exceções também são registradas antes da destruição do backend, para não
perder a mensagem se a limpeza ficar esperando a GPU. O citro3d 1.7.1
[aguarda a fila em FrameBegin e em destruição de alvos](https://github.com/devkitPro/citro3d/blob/v1.7.1/source/renderqueue.c);
isso é um caminho possível, não uma causa física já demonstrada.

Validação da revisão de diagnóstico: ARM final 61,4 s; build PC 4,9 s;
check 7,6 s; smoke 10/10, zero alertas, 211,2 s. Azahar completou o autoteste,
chegou ao título e registrou 300 quadros. Uma checagem dos logs confirmou
as dez etapas, transferências com início/fim pareados e nenhum marcador
GPU_BOOT depois de SELF_CHECK=PASS. SHA-256 do novo `.3dsx`:
`40012df14ebfea502412baee6e3207745ae2f7d765173c172e3c947e9ec87ed5`,
48.741.456 bytes. Evidência local em `build/phase4-video/hardware-boot-trace/`.
Esse resultado não confirma correção no hardware: é necessário recuperar o
novo `stderr.log` do aparelho. Nada foi publicado.

Reteste físico após desligamento completo (2026-11-26): os uploads do alvo e
da textura de origem retornaram. A última linha é `boundary.submitted`, na
espera anterior ao primeiro readback; `readback.copy.begin` não foi alcançado.
Essa submissão contém limpeza e desenho juntos, portanto ainda não identifica
qual deles trava. Evidência preservada em
`build/phase4-video/hardware-boot/cold-trace-stderr.log`. Uma tentativa anterior
deixou a pasta vazia; sem confirmação de desligamento completo, ela não basta
para atribuir uma nova causa ao programa.

A próxima revisão separa, no autoteste, limpeza, retângulo sem textura e
retângulo texturizado, primeiro num alvo 64×64 e depois 8×8. Cada operação tem
readback e validação dos pixels antes de avançar. O autoteste original segue
intacto depois dessas sondagens. Nenhuma alteração de shader, desenho do
jogo, regras ou saves foi feita com base numa causa ainda não demonstrada.

Revisão das sondagens: ARM 46,3 s, build PC 3,0 s, check 3,2 s; smoke 10/10,
zero alertas, 180,0 s. Azahar: limpeza/cor/textura verificadas nos dois
tamanhos, descarte concluído, autoteste original PASS e 300 quadros do título.
O rastreamento não aparece depois do autoteste. Pacote privado: 48.742.908
bytes, SHA-256 `dbf681961dd22d1491bd7646dd3ef03b5c742c0d8a2b2b4a51f545f208441724`.
O aceite e a identificação da causa física continuam pendentes do aparelho.

## Contrato de telas implementado

Na API da plataforma, `Screen::top` identifica 400×240 e `Screen::bottom`
identifica 320×240. Coordenadas locais: origem superior esquerda, x para a
direita, y para baixo. Selecionar destino é explícito, independente de
`Graphics::ResetRender`, ordem de desenho e quantidade de superfícies.
O escopo de desenho restaura o destino anterior, inclusive em exceção.
Alvos de imagem/offscreen são independentes das duas telas físicas.

O host associa a identidade da superfície GamePad à inferior; as demais
superfícies continuam na superior. `SurfaceManagerBase::Draw` apenas comunica
a identidade antes de `OnDraw` e restaura o destino. Sem mudar layout, regras,
texto, seleção ou save. Um host sem associação conserva o desenho atual.

Nesta entrega a barra original conserva seu espaço lógico 400×240, composto
na inferior em 320×192 (escala 0,8), como no protótipo. A API de tela inferior
continua sendo 320×240: essa transformação pertence ao adaptador da barra,
não ao contrato. Menus futuros desenharão diretamente em coordenadas locais.
Eventos de toque carregam a tela e coordenadas locais; só o adaptador da barra
converte para o espaço antigo. A tela superior não ganha toque sintetizado.

## Etapas e commits

| Etapa | Conteúdo | Risco e aceite |
|---|---|---|
| Contrato | API de destino, identidade e restauração; encaixe isolado em SurfaceManagerBase::Draw | baixo: neutro sem associação; build/check/smoke |
| PC | substituir contagem de ResetRender pela associação explícita | médio: comparar ambas as telas e toque, build/check/smoke |
| Graphics | encaminhamento opcional ao backend, preservando raster CPU | alto: transformação, clip, alfa e texto; commit próprio |
| Mesh | encaminhar geometria mantendo ordem, profundidade e modos | alto: o caminho atual armazena fragmentos CPU; commit próprio |
| Offscreen | alvos GPU, restauração e dependências entre passes | alto: leitura posterior e orientação; commit próprio |
| Vida de imagens | recursos nativos e descarte diferido na thread de desenho | alto: nunca liberar enquanto GPU usa; commit próprio |
| CTR | inicialização, título/rótulos, apresentação, perfil e build local | alto: memória e diferenças do emulador; commit separado |
| Entrada | botões, toque, zoom e amostra de circle pad | médio: repetição e coordenadas; commit separado |

Cada commit tem build/check; mudanças de comportamento também smoke.
Antes de publicar: check --all, full, conjunto completo de roteiros, arm,
check_repository --staged; depois do push, dev.py ci. Uma etapa pesada por vez.
Não publicar artefato com assets. Não avançar ao mapa para ampliar o aceite.

## Operações de desenho

| Operação atual | Caminho GPU planejado | Verificação |
|---|---|---|
| Imagens e recortes | dois triângulos com UV do recorte e filtro original | cantos, bordas transparentes, recorte parcial |
| Retângulos, linhas e triângulos | geometria colorida, sem textura; mesma regra de cobertura | pixels de borda e formas finas |
| Arcos | tesselação na CPU, preenchimento pela GPU | contorno e ângulos; não substituir por bitmap de tela |
| Alfa e mistura | traduzir os modos existentes em estados de blending e alpha-test | preservar passagens e ordenação, inclusive transparência parcial |
| Clip | interseção em coordenadas do alvo, scissor após transformação para orientação física | clip aninhado e bordas das duas telas |
| Origem, escala, zoom | reutilizar a transformação já calculada; GPU recebe vértices finais | sem duplicar escala, inversão vertical ou rotação |
| Mesh/offscreen | preservar lotes, fila e profundidade; renderizar em textura | passes estáticos/dinâmicos e restauração do destino |
| Texto/fontes | FreeType já autorizado gera glifos; cache de textura, quads tintados | mesmos glifos, métricas, kerning e estilos; sem fonte do sistema |

Não converter uma tela inteira rasterizada na CPU em uma única textura e chamar
isso de desenho GPU. O PC mantém seus algoritmos CPU. Modos não implementados
no título devem ser identificados como pendência, sem aproximação silenciosa.

### Offscreen e leitura de pixels

Hoje `Offscreen::render_frame` usa `MeshManager::Render`; `Image::pixels()`
fornece RGBA linear ao amostrador CPU em `Graphics::DrawScaledImage`.
O backend GPU amostra diretamente a textura do alvo. A auditoria não encontrou
leitura explícita de pixels em `src/game` ou na KairoLibrary traduzida. Os
consumidores estão na implementação de imagens: classificação de alfa,
`SetAlpha`, `SetTransparentEnabled`, amostragem CPU, capturas e teste de toque
da barra. O caminho GPU conserva esses consumidores: `Image::ensure_linear`
sincroniza e transfere o alvo quando sua cópia CPU está desatualizada. Desenho
de uma imagem sobre si mesma conserva a semântica de snapshot, com readback.
Esses caminhos registram espera e leitura no perfil; não se promete custo zero.

No caminho comum, o offscreen é amostrado diretamente pela GPU. O tratamento
de callbacks, tarefas de texto/toque, commit dos comandos e ordenação permanece
na biblioteca existente. A limpeza CPU continua no ramo usado por PC/nulo.

## Texturas e memória

Reutilizar o formato local `.rgba8ctr`: RGBA8 em bytes ABGR, Morton 8×8,
padding para potência de dois, sem mipmaps. O citro3d aceita dimensões de
8 a 1024, potência de dois, e armazenamento em memória linear ou VRAM
([implementação oficial](https://github.com/devkitPro/citro3d/blob/master/source/texture.c)).
O conversor atual recusa dimensões lógicas acima de 1024: a primeira entrega
mantém erro explícito, sem truncar nem reduzir assets. Divisão em mosaicos só
será necessária se surgir imagem/alvo maior; não foi encontrada neste catálogo.

Inventário local de 2026-11-25: 652 arquivos físicos `.rgba8ctr`, dimensões
lógicas máximas por eixo 768×480, dimensões preparadas máximas 1024×512,
maior payload 2.097.152 bytes, soma de payloads 27.513.344 bytes. O recibo
histórico conta 654 entradas de imagem; arquivos físicos não são a mesma métrica.

Não cabe carregar o catálogo inteiro nos 6 MiB de VRAM. Planejamento:
alvos das telas em VRAM, texturas em memória linear, cache de glifos limitado;
contabilizar separadamente memória normal, linear e VRAM. Dois alvos RGBA8
400×240 + 320×240 consomem 691.200 bytes de cor, sem contar profundidade,
framebuffers de apresentação, alinhamento e offscreens. O limite final de cache
depende do pico de boot medido; não será definido por extrapolação do catálogo.

Carga sob demanda pelo carregador existente; envio na primeira utilização,
reutilização nos quadros seguintes. Registrar carga, alocação, envio e pausas
de transição separadamente do estado estável. Nenhuma leitura do SD por sprite.

### Ciclo de vida exigido

1. O carregador autentica/lê o asset; a Image mantém o comportamento existente.
2. A thread de desenho cria a textura nativa e envia o payload quando necessário.
3. Comandos usam um identificador nativo; referências gerenciadas continuam nos
   campos/raízes que o coletor já enxerga, nunca em cache nativo invisível.
4. Expiração/dispose invalida o recurso e enfileira somente seu identificador.
5. A thread de desenho drena a fila num ponto seguro depois da submissão e da
   conclusão dos comandos dependentes. Submeter não prova que a GPU terminou.
6. Uma imagem recarregada recebe nova geração; não reutilizar identificador
   ainda referido por comandos. Encerramento aguarda e libera os pendentes.

## Dependências e entrada

citro3d instalado: 1.7.1-2; citro2d instalado: 1.7.0-1; ambos licença zlib.
Proposta: começar com citro3d, pois os modos de mistura, transformações e lotes
já existem no projeto. Não acrescentar citro2d sem demonstrar redução concreta
de código e preservação desses estados. FreeType existente permanece; sem
dependência nova, som, teclado do sistema ou mudança de idioma neste bloco.

Mapear A/B/X/Y/START e direcional conforme o PC. L/R conservam o caminho de
zoom atual. Circle pad usa `read_circle_pad`, faixa -32767..32767 e zona morta
na plataforma; não gerar arraste na gestão. No título, testar ausência de ação
indevida do analógico/zoom. Toque inferior usa as mesmas áreas dos rótulos.

## Perfil e teste no aparelho

Por quadro, registrar separadamente lógica CPU, preparação/submissão de desenho
CPU, espera por GPU, transferência/apresentação e espera do limitador. Reportar
média, p95, máximo e número de quadros; separar aquecimento/carga do título
estável. Não somar durações sobrepostas como se fossem tempo total de quadro.
Instrumentar no host/backend, sem editar o runtime ou diagnostic_profile.hpp.

Azahar: três execuções do título, mesmas configurações e janela de medição;
registrar versão, modelo emulado e carga do host. Esses números não estabelecem
desempenho no console. New 3DS: orçamento 50 ms, lógica histórica ~10 ms;
desenho e espera reais UNKNOWN até teste. 3DS original: UNKNOWN, não multiplicar
o tempo do emulador por uma razão de clock para afirmar um resultado.

O artefato privado é `build/phase4-ctr/ctr_video.3dsx`, com assets no ROMFS.
Teste pelo Homebrew Launcher já existente do usuário: título na superior sem
cortes/espelhamento, rótulos na inferior, A/B/direcional/toque respondendo;
não iniciar campanha/gestão. Relatar modelo, tempo de boot, legibilidade,
artefatos visuais e logs de três execuções. Instalação de desbloqueio do console
não faz parte deste bloco. Instruções executáveis em
[phase4-video-device-test.md](../notes/phase4-video-device-test.md).

## Estado e dependências

Encaixes adicionais autorizados pelo usuário: somente seleção/restauração em
`src/game/kairo.unity.surface.SurfaceManagerBase.cpp`; encaminhamento GPU nos
arquivos escritos à mão `graphics.cpp`, `mesh.cpp`, `offscreen.cpp` e
`image_lifetime.cpp` de `src/kairo/common/`. Um commit por encaixe. CPU preservada;
descarte diferido obrigatório. Runtime, coletor, generated, regras e saves fora.

Contrato neutro: commit local `cf57458`, build 861 s, check 2,4 s, smoke
10/10 em 175,9 s, 0 alertas/lacunas. A primeira tentativa de build falhou por
colisão entre o nome do destino e o da matriz; corrigida antes do commit.

PC com seleção explícita: build 783,6 s, check 1,7 s; comparação de 160 quadros
por tela com o executável publicado: 320/320 capturas idênticas, 0 pixels
diferentes (`build/phase4-video/title-comparison.json`). Smoke: 10/10 em
158,7 s, 0 alertas/lacunas.

Encaixes comuns concluídos em commits locais separados:

| Commit | Diff resumido | Build | Check | Smoke |
|---|---|---:|---:|---:|
| `f9aeaf6` | Graphics encaminha primitivas/texto; Image permite recurso nativo e readback; CPU preservada | 809,8 s | 1,9 s | 10/10, 183,5 s |
| `6fb8542` | Mesh registra geometria com os mesmos lotes, modos e profundidades; referências de imagens continuam rastreadas | 881,5 s | 2,3 s | 10/10, 207,9 s |
| `82acc30` | Offscreen limpa o alvo pelo backend opcional | 12,0 s | 2,1 s | 10/10, 211,6 s |
| `0d20efa` | Unuse/Dispose soltam o identificador nativo; o backend enfileira a liberação | 13,2 s | 2,0 s | 10/10, 184,5 s |

Todos os smokes acima tiveram zero alertas e zero lacunas. Após os quatro
encaixes, nova comparação com o executável publicado confirmou 160/160 quadros
idênticos por tela, zero pixels diferentes:
`build/phase4-video/title-comparison-gpu-hooks.json`.

Decisão adicional do usuário: remover Site do título, em vez de integrar um
navegador. Commit `313012b`, build 17,9 s, check 4,8 s, smoke 10/10 em 184,2 s,
zero alertas. O rótulo esquerdo fica vazio/desativado; sua moldura existente
permanece. A comparação de neutralidade acima foi feita antes dessa alteração
visual intencional. Nenhuma mudança de save.

Primeira compilação ARM: C++ e link concluídos; empacotamento falhou após
1452,2 s, pois `NOSMDH` com ROMFS não funciona no 3dsxtool instalado.
A reprodução direta confirmou o erro. O código da ferramenta chama
`WriteExtHeader` quando existe ROMFS e tenta abrir SMDH incondicionalmente
([fonte do devkitPro](https://github.com/devkitPro/3dstools/blob/master/src/3dsxtool.cpp)).
Metadados de apresentação foram submetidos à decisão do usuário, conforme
a regra de texto visível; nenhuma alteração no SDK é necessária.

O empacotamento com SMDH vazio passou em 8,6 s, sem novo texto visível.
Depois, o usuário autorizou identificação e ícone originais do port:
“Dual Screen Port”, sem marca ou arte do jogo.
Azahar 2126.2, modelo New 3DS: a primeira execução parou antes do desenho
porque `canonical("romfs:/")` retornou “No such device”. A tentativa de usar
`chdir("romfs:/")` e raiz `/` passou pelo catálogo, mas quebrou a gravação:
`romfs:/sdmc:/pls-video/captures`, “Function not implemented”. Portanto a
hipótese de resolver ambos os dispositivos apenas mudando o diretório do
host foi refutada. O segundo build ARM passou em 24,3 s; execução falhou.

O encaixe foi autorizado e concluído em `baa7eb7`: 18 linhas adicionadas e
uma substituída em `asset_catalog.cpp`, apenas no build de vídeo CTR.
Raiz explícita `romfs:/`, sem `chdir`, com checagem de existência e manutenção
do confinamento e autenticação. PC: build 16,2 s, check 8,7 s, smoke 10/10 em
181,5 s, zero alertas. Capturas: 160/160 idênticas por tela, zero pixels
diferentes contra a versão já sem Site (`build/phase4-video/catalog-captures.json`).

A primeira implementação GPU inverteu linhas da textura e do readback.
A correção foi verificada com recorte assimétrico e amostragem de um alvo.
O teste de sobreposição revelou perda de separação entre profundidades
próximas: o commit `5ce7d5f` remapeia sua ordem para 0..1, conservando
igualdades; limite explícito de 32768 profundidades distintas por passe.
Somente valores nativos no vetor reutilizado, nenhuma referência gerenciada.
PC: build 13,8 s, check 3,3 s, smoke 10/10 em 186,9 s, zero alertas.

O título e a barra foram observados na janela real do Azahar 2126.2,
sem rotação ou inversão indevida. Evidência local:
`build/phase4-video/physical-title-clean/window-direct.png`.
Autoteste GPU aprovado: cores/clip, alfa, cinza, alvo, profundidade e descarte.

Armazenamento na mesma execução (`storage-romfs-sd-auto`): leitura e
verificação de 8216 bytes de asset no ROMFS; carga do autosave do diagnóstico
50; criação de save manual no segundo slot do SD; recarga desse save;
gravação/releitura do nível BGM no registro de configuração. Autosave e novo
save têm 20747 bytes em disco (20739 de payload); o original ficou byte a byte
intacto. A primeira tentativa escolheu o registro manual vazio e falhou com
EOF: seleção errada do teste, corrigida para o autosave. A gestão não foi
desenhada. O diagnóstico exige um marcador explícito e uma cópia privada dos
saves; não roda na inicialização comum do aparelho.

O compilador ARM confirmou
que mover as 300 amostras para uma única alocação inicial reduz a reserva
explícita de pilha de `main` a 940 bytes, mais 68 bytes de registradores.

Backend em `1cdf4a4`: 11 arquivos, 858 adições/7 exclusões. Host e GPU CTR,
shader autoral, build autenticado/ROMFS/SMDH e registro das dependências.
Build PC 3,1 s, check 2,7 s, smoke 10/10 em 184,0 s, zero alertas. Build ARM
52,5 s e repetição autenticada 15,5 s. Check de conteúdo: 1508 entradas, PASS.

Entrada nativa em `f5ffb18`: seis arquivos, 144 adições/6 exclusões, incluindo seu registro
de comportamento. Build PC 18,5 s; check 1,7 s; smoke 10/10 em 158,1 s,
zero alertas/lacunas; build ARM final 47,3 s. A primeira compilação da entrada
falhou por `Array<int>` versus `Array<int32_t>` no ARM; corrigido antes do
build final. Eventos de pinça são preparados uma vez, com raiz explícita.
O receptor copia seus valores sincronamente; não retém posições mutáveis.
Check de conteúdo: 1510 entradas, zero violações, 69,2 s.

Teste interativo no Azahar: direcional muda a seleção; A abre HiScores;
B/Y voltam; START abre a confirmação inferior; B cancela; direcional/A e
toque escolhem No; A em Yes devolve resultado 4. X não abre Site; L/R não
alteram o título; circle pad publica 32767,0 e volta a 0,0. Toque em Quit
abre a confirmação original na superior; Back retorna. Esse caminho foi
preservado, sem mover os formulários do jogo. O artefato final repetiu a
seleção/HiScores/B/START/cancelamento. Zoom e câmera na gestão ainda não
foram exercitados no backend GPU, por limite explícito desta entrega.

Capturas finais do PC: 160/160 idênticas em cada tela, zero pixels diferentes
contra a referência já sem Site (`build/phase4-video/final-pc-captures.json`).
O caminho CPU permanece disponível. O ramo ROMFS do catálogo só é compilado
com `__3DS__ && PLS_CTR_VIDEO`; o benchmark nulo mantém a raiz SD anterior.
Seu novo ciclo ARM completo fica para a validação obrigatória antes do push.

## Medições finais no Azahar

Azahar 2126.2, modelo New 3DS, CPU/limite de velocidade 100%, três execuções
por raiz, alternando ROMFS e SD, com o mesmo binário e os mesmos assets.
Perfis novos sem save para cada repetição; 60 quadros de aquecimento e
300 amostras por execução. A carga externa do PC não foi isolada, conforme
decisão do usuário. Tempo abaixo é o relógio do processo ARM emulado,
não uma previsão do aparelho. Logs/CSV em `build/phase4-video/final-*`;
resumo legível por máquina em `final-measurements.json` nessa pasta.

| Raiz / execução | Até título (ms) | Lógica média (ms) | Desenho CPU médio (ms) | Espera GPU média (ms) | Quadro médio (ms) |
|---|---:|---:|---:|---:|---:|
| ROMFS 1 | 18170,424 | 0,132782 | 3,108179 | 0,005122 | 4,181284 |
| ROMFS 2 | 18070,230 | 0,133192 | 3,193875 | 0,005132 | 4,260454 |
| ROMFS 3 | 18203,944 | 0,132513 | 3,122274 | 0,005131 | 4,189826 |
| SD 1 | 35858,608 | 0,133498 | 3,141523 | 0,005163 | 4,214973 |
| SD 2 | 32783,711 | 0,133465 | 3,149915 | 0,005149 | 4,231036 |
| SD 3 | 36192,950 | 0,132692 | 3,245131 | 0,005165 | 4,322202 |

Nas três execuções ROMFS, p95 do desenho: 3,312614 / 3,455878 / 3,328384 ms;
máximos: 4,222909 / 4,159730 / 4,352758 ms. P95 do quadro: 4,384704 /
4,519278 / 4,397933 ms; máximos: 5,297756 / 5,225841 / 5,423840 ms.
Upload médio: 0,012918 / 0,006353 / 0,012708 ms; readback: zero nas 900
amostras. Capturas são feitas depois da janela medida. Upload é subconjunto
instrumentado, não deve ser somado novamente. O restante do quadro inclui
entrada, coleta e manutenção; a espera deliberada para 20 fps fica fora.

Boot médio: ROMFS 18148,199 ms; SD 34945,090 ms. A comparação seleciona a
raiz SD no mesmo host GPU por marcador de diagnóstico privado; não compara
o desenho com o antigo benchmark nulo. Refuta-se a necessidade de mudar o
diretório global. Não se atribui ao hardware o ganho observado no emulador.

Pacote final: **48.739.932 bytes**; ROMFS **41.334.800 bytes**, a partir do
offset 7.405.132. SHA-256:
`80fb2ef949dd22cdb647d6fef7b94fd8ab7841d96d29b904cf20c6d1e43dceed`.
O ROMFS foi escolhido para empacotar o teste privado com assets autenticados,
não como otimização de desempenho comprovada. Distribuição futura deve
montar esse arquivo localmente a partir do APK do usuário.

Teste de armazenamento repetido no artefato final (`final-storage`): PASS,
na mesma execução, 8216 bytes lidos/verificados no ROMFS, autosave carregado,
novo save manual criado e recarregado, configuração BGM gravada e relida.
Comparação externa confirmou os 20747 bytes do autosave original intactos;
o novo save tem 20747 bytes. Não se desenhou gestão nem partida.

Memória ao fim das amostras ROMFS: heap normal ocupado 33.896.640–34.081.576
bytes; SD 34.077.552–34.113.016. Isso é ocupação observada, não pico global.
Texturas nativas: ROMFS 5.304.576–5.370.112 bytes; SD 5.370.112–5.468.416.
Reserva linear fixa: 25.165.824 bytes; livre no ROMFS 17.134.336–17.199.872.
VRAM usada nos dois casos: 3.443.712 bytes; livre 2.847.744, de 6 MiB.
Os 41,3 MB do pacote não viram uma alocação residente equivalente. Não somar
reservas aos payloads já contidos nelas. O cache de glifos tem teto 1 MiB;
alvos das telas usam 512×256 RGBA8/profundidade e a apresentação usa
400×240 + 320×240 RGBA8. Imagens estáticas ficam na memória linear.

Liberação completa: carregar/autenticar na CPU → enviar na thread de desenho
→ usar o recurso nativo → marcar descarte por Dispose/finalização → aguardar
os comandos e drenar a fila fora do quadro, na thread de desenho. O coletor
não chama a GPU nem perde referências gerenciadas em estruturas nativas.
Uploads/readbacks podem sincronizar a GPU; carga/primeiro uso podem pausar.
Essas pausas ainda precisam ser medidas no aparelho e nas transições futuras.

Aceite final do título e autorização para gestão/partida dependem do usuário.
Desempenho físico New 3DS e 3DS original: **UNKNOWN**. Não há alegação de
cumprimento do orçamento de 50 ms com base no emulador.
Uma sondagem com o modelo antigo do Azahar também completou 300 quadros:
boot 18295,263 ms; desenho CPU médio 3,073093 ms; espera 0,005148 ms;
quadro 4,141056 ms. Ela só prova execução nessa configuração do emulador,
não estima velocidade nem disponibilidade de memória no 3DS original.
Proposta de atualização do AGENTS separada, sem aplicação:
[phase4-agents-proposal.md](phase4-agents-proposal.md).

Graphify atualizado ao fim dos encaixes: 346,1 s, 40.284 nós, 94.049
ligações, 1160 comunidades; análise local com `GRAPHIFY_BACKEND=none`.
Não foi executada rotulagem por LLM. Os avisos sobre nomes de comunidades
não invalidam o grafo de código.

Todos os commits desta entrega são locais. Não houve push nem CI novo.
Fechamento da documentação: build PC 2,5 s e check 1,6 s, ambos PASS.
Antes de qualquer publicação continuam obrigatórios `check --all`, `full`,
conjunto completo de roteiros, `arm` nulo e check de conteúdo. Não se afirma
que esse ciclo completo já tenha sido executado para o bloco de vídeo.
