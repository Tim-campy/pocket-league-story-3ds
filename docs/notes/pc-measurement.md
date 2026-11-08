# Medição de memória e frame time no primeiro boot

O pedido da Fase 2 exige memória residente por categoria (texturas, áudio,
código e heap) e frame time no primeiro boot. **Ainda não há medição de boot
neste documento.** As leituras abaixo são infraestrutura e um teste sintético.
Não promovem métodos do jogo a runs/verified e não demonstram título, menu ou
partida. A integração no host espera o Main gerado compilar e ligar.

`src/main/pc_memory.hpp/.cpp` fornece `pls::pc::sample_process_memory()`.
Usa somente o Windows SDK já instalado, sem nova dependência. O link precisa
de `Psapi.lib`. Em outra plataforma os campos são ausentes, com diagnóstico
explícito, em vez de apresentar zero como uma medição válida. O host ainda
não foi alterado para consumir esse sampler.

| Leitura | Significado e limite |
|---|---|
| resident_bytes | WorkingSetSize do processo: páginas residentes, incluindo compartilhadas de EXE/DLLs. Não é memória privada nem tamanho de assets. |
| peak_resident_bytes | PeakWorkingSetSize desde o início do processo; não é pico exclusivo da fase medida. |
| private_commit_bytes | PrivateUsage: commit privado, que pode incluir páginas fora de RAM. Não pode ser somado ao RSS. |
| executable_image_committed_bytes | Páginas MEM_IMAGE comprometidas com proteção executável, de todos os módulos carregados, incluindo padding de página. Não é comprimento exato do código gerado. |
| executable_image_resident_bytes | Dessas páginas executáveis, as válidas no working set via QueryWorkingSetEx. É subconjunto do RSS, não uma parcela a somar a ele. |

Os dois primeiros grupos são amostrados sequencialmente, sem suspender o
processo; o retrato não é atômico. QueryWorkingSetEx não força a página de
código a entrar em memória. A inspeção de páginas executáveis ocorre por
VirtualQuery e QueryWorkingSetEx, sem ler conteúdo de assets ou de módulos.
`python tools/test_pc_memory.py` passou **8 invariantes próprios**: presença
dos contadores, consistência/alinhamento das páginas, alocação de 64 MiB,
aumento do commit e do working set após tocar as páginas, pico consistente e
liberação. Os valores no recibo `config/phase2-pc-memory-tests.json` pertencem
somente ao executável sintético.

As APIs de payload existentes foram inventariadas no fonte:

| Componente | API e campos atuais | O que falta para atribuição residente |
|---|---|---|
| SDL texturas | `Backend::memory().texture_payload_bytes`: soma dos payloads das texturas registradas no mapa do backend. | Alocação real do driver, padding e duplicação GPU/CPU não são expostos pelo SDL2. Não chamar esse valor de RSS de texturas. |
| Imagens CPU | `Image::pixels()` expõe o vetor RGBA de uma instância; `native_cache_size()` conta somente o cache de imagens com fonte. | Não existe agregador de todas as instâncias/capacidades, source_bytes, buffers temporários e imagens criadas. Contar aliases uma única vez por objeto/storage; estimativa global atual UNKNOWN. |
| Fontes | `RasterFont::memory()`: source_bytes, cached_rgba8_bytes, cached_glyphs, cache_limit_bytes. | Contadores medem tamanho útil dos vetores. Capacidade de vetores, estruturas/mapas, FreeType e texturas temporárias SDL não são incluídos. |
| Áudio | `AudioMixer::memory()`: ring_bytes, scratch_bytes, sdl_resampler_available_bytes, peak_resampler_available_bytes e device_callback_bytes. | Filas disponíveis não representam toda a capacidade interna do resampler. Estado/alocações de Vorbis/Ogg/SDL e buffers do sistema não estão contabilizados. O callback e os valores de pico não são somados como alocações atuais. |
| Heap gerenciado | `gc_last_collection()` retorna tracked/roots/unreachable/collected da última coleta. | São contagens de objetos, não bytes nem inventário vivo atual. Não há tamanho alocado completo de objetos, shared_ptr, strings, arrays, List/Dictionary e respectivas capacidades. Bytes de heap gerenciado atuais UNKNOWN. |
| Dados Unicode | Payload readonly oficial: 337.358 bytes de colação +46.832 bytes BMP +80 bytes de intervalos para HexNumber. | **384.270 bytes lógicos**, que não equivalem a RSS adicional. Já pertencem ao módulo e às páginas do processo; não somar novamente ao RSS/código. ABI/padding final 3DS não medido. |
| Catálogo/assets | Assets permanecem nos diretórios locais ignorados. | Catálogo, dados descomprimidos e caches também ocupam heap; não presumir que tudo que sobra do RSS seja lógica do jogo. |

No relatório de boot, publicar duas tabelas separadas: **métricas de processo
e páginas**, e **payloads controlados por componente**. Para uma categoria
cujo residente exato não é observável, marcar residente UNKNOWN e apresentar
o payload conhecido em coluna distinta. Não derivar heap como RSS menos
texturas/áudio/código: os conjuntos e tipos de medida se sobrepõem. Não somar
source do TTF duas vezes se o mesmo objeto de fonte tiver vários consumidores;
memória de imagens CPU e texturas SDL pode corresponder a duas cópias reais,
mas precisa ser rotulada como tal, sem somá-la novamente ao RSS total.

Quando houver boot real, amostrar antes da criação do Main, no título, no
menu e após uma partida, anotando PID, build/hash, backend, resolução,
frame/tempo, saves e quantidade de recursos carregados. Amostrar memória em
pontos definidos, não a cada frame, pois a varredura de páginas interfere no
frame time. Não forçar GC para tornar os números menores; se uma coleta for
avaliada, registrar antes/depois em experimento separado.

Para frame time, medir por `SDL_GetPerformanceCounter/Frequency` os intervalos
de atualização, desenho, present e total. Publicar número de frames, mediana,
p95 e máximo em milissegundos, resolução e estado de VSync/limite de FPS.
Excluir carga inicial apenas em uma série explicitamente denominada aquecida;
preservar separadamente os frames iniciais. Present pode bloquear por VSync e
não deve ser interpretado automaticamente como custo de desenho da CPU. Medição
residente por categoria exata e o frame time do jogo seguem UNKNOWN até a
execução real; esse sampler não representa o primeiro boot.
