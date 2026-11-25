# Fase 4 — vídeo: primeira entrega

Decisão do usuário em 2026-11-25. Este bloco termina no título desenhado pela
GPU, com rótulos na inferior e entrada básica. Gestão e partida só depois do
teste no New 3DS XL. O caminho CPU do PC e o backend nulo permanecem disponíveis.
Este documento distingue o projeto abaixo dos resultados medidos ao final.

## Contrato de telas proposto

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
O backend GPU deve amostrar diretamente a textura do alvo, com barreira entre
escrita e leitura. A auditoria de todas as leituras de pixels e mutações de
imagens ainda está pendente: não se declara ausência de readback.
Se houver consumidor CPU real, sincronizar, transferir e destilar o formato
em uma operação explícita fora do caminho comum, medindo essa pausa. Não mudar
o resultado nem excluir o consumidor para evitar a transferência.

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

A entrega fornecerá `.3dsx`, árvore SD privada e comandos exatos em `build/`.
Teste pelo Homebrew Launcher já existente do usuário: título na superior sem
cortes/espelhamento, rótulos na inferior, A/B/direcional/toque respondendo;
não iniciar campanha/gestão. Relatar modelo, tempo de boot, legibilidade,
artefatos visuais e logs de três execuções. Instalação de desbloqueio do console
não faz parte deste bloco. Caminhos finais e instruções executáveis dependem
do build: ainda não há artefato de vídeo validado.

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

Pendente: encaixes GPU, build GPU, Azahar e medições.
Aceite final do título e autorização para gestão/partida dependem do usuário.
Proposta de atualização do AGENTS separada, sem aplicação:
[phase4-agents-proposal.md](phase4-agents-proposal.md).
