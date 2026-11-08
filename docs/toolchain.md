# Ferramentas do port — inventário do ambiente

Inventário inicial e atualização da Fase 2. Caminhos refletem esta máquina. `NOT_FOUND_WITHIN_SEARCH` significa não encontrada nos limites consultados, não uma busca universal do disco. SDL2 e as bibliotecas FreeType/Ogg/Vorbis foram preparados localmente após as respectivas autorizações; as demais ferramentas abaixo já existiam ou tiveram autorização na Fase 1.

| Ferramenta | Estado | Versão medida | Papel |
|---|---|---|---|
| Python | PRESENT | Python 3.12.10 | development tool |
| Git | PRESENT | git version 2.55.0.windows.3 | development tool |
| Node | PRESENT | v24.19.0 | development tool |
| REA | PRESENT | 6.5.0 | development tool |
| Roslyn csc | PRESENT | 5.8.0-1.26319.2 (375c93f06396eff88a355bc473d1586bf71befb5) | development tool |
| CMake | PRESENT | cmake version 4.3.1-msvc1; ; CMake suite maintained and supported by Kitware (kitware.com/cmake). | development tool |
| MSVC C++ | PRESENT | 19.51.36252.0 | development tool |
| .NET private VS runtime | PRESENT | Microsoft.AspNetCore.App 10.0.10 [C:\Program Files\Microsoft Visual Studio\18\Community\dotnet\net10.0\runtime\shared\Microsoft.AspNetCore.App]; Microsoft.NETCore.App 10.0.10 [C:\Program Files\Microsoft Visual Studio\18\Community\dotnet\net10.0\runtime\shared\Microsoft.NETCore.App]; Microsoft.WindowsDesktop.App 10.0.10 [C:\Program Files\Microsoft Visual Studio\18\Community\dotnet\net10.0\runtime\shared\Microsoft.WindowsDesktop.App] | development tool |
| .NET PATH runtime | PRESENT | Microsoft.NETCore.App 6.0.36 [C:\Program Files\dotnet\shared\Microsoft.NETCore.App]; Microsoft.WindowsDesktop.App 6.0.36 [C:\Program Files\dotnet\shared\Microsoft.WindowsDesktop.App] | development tool |
| .NET SDK on PATH | NOT_FOUND_WITHIN_SEARCH | UNKNOWN | not needed by inventory; pinned csc + private runtime used |
| SDL2 runtime only | PRESENT | 2.0.14.0 | runtime of another program; not an SDL2 development SDK |
| SDL2 runtime only | PRESENT | 2.26.3.0 | runtime of another program; not an SDL2 development SDK |
| SDL2 development SDK | PRESENT | 2.32.10, VC x64 | build/deps/SDL2-2.32.10; compilação, link e readback testados |
| FreeType development | BUILT_LOCAL | 2.15.0, MSVC x64 estático | build/deps/native-media; TTF local e rasterização testados |
| libogg development | BUILT_LOCAL | 1.3.6, MSVC x64 estático | build/deps/native-media; framing do Vorbis |
| libvorbis / libvorbisfile | BUILT_LOCAL | 1.3.7, MSVC x64 estático | build/deps/native-media; decode incremental e mixer SDL testados |
| FFmpeg / FFprobe | PRESENT | 7.1.1 | conversão PNG→RGBA8 e inspeção de Vorbis; já instalado em C:\ffmpeg\bin |
| devkitPro pacman | NOT_FOUND_WITHIN_SEARCH | UNKNOWN | development tool |
| devkitARM | NOT_FOUND_WITHIN_SEARCH | UNKNOWN | development tool |
| libctru | NOT_FOUND_WITHIN_SEARCH | UNKNOWN | development tool |
| citro2d | NOT_FOUND_WITHIN_SEARCH | UNKNOWN | development tool |
| citro3d | NOT_FOUND_WITHIN_SEARCH | UNKNOWN | development tool |
| tex3ds | NOT_FOUND_WITHIN_SEARCH | UNKNOWN | development tool |
| makerom | NOT_FOUND_WITHIN_SEARCH | UNKNOWN | development tool |
| bannertool | NOT_FOUND_WITHIN_SEARCH | UNKNOWN | development tool |
| AssetRipper | PRESENT | 2.0.0.0 | development tool |
| Azahar | NOT_FOUND_WITHIN_SEARCH | UNKNOWN | development tool |

## Roslyn sem SDK

Os inventários AST/semânticos usam o csc moderno já instalado no Visual Studio e seu runtime privado .NET10. Isso dispensa SDK no PATH e não baixa pacotes. Os binários das ferramentas ficam em build/, ignorados. Referências de API do Android/Unity são lidas do repositório anterior fora do port, apenas para análise semântica; nenhuma DLL do jogo ou Unity é copiada para este repositório ou vinculada ao port.

## Ausências e limites

As SDL2.dll antigas de outros aplicativos não são usadas pelo backend. A Fase 2 usa o SDK 2.32.10 identificado abaixo. devkitARM/libctru/citro2d/citro3d e tex3ds são necessários na etapa 3DS, adiada pelo usuário à Fase 4. makerom/bannertool somente seriam necessários para a rota CIA. Azahar e hardware ainda não foram usados pelo port.

AssetRipper portátil 2.0.0 foi obtido da distribuição oficial após autorização explícita do usuário, somente sob build/tools/assetripper/. SHA-256 do ZIP: `9a7ef0e7c5c3ea5b90b4e6d855e2d98d5f7ec8c3f9e26fccbc194c6a7b01baf7`, igual ao digest publicado no release oficial. Nenhum SDK 3DS ou emulador foi instalado. O leitor próprio tools/unity15_metadata.py mede tabelas e metadata do Unity5.3; os blobs próprios são analisados pelas ferramentas separadas, sempre localmente. O relatório de assets explicita a cobertura.

Identidades e hashes das ferramentas efetivamente encontradas estão em [config/toolchain-inventory.json](../config/toolchain-inventory.json). O alvo principal é New3DS XL; RAM efetivamente disponível depende do modo de execução e ainda precisa ser medida no runtime.

## SDL2 de desenvolvimento e build PC

`tools/setup_sdl2.py` prepara somente `build/deps/SDL2-2.32.10`, sem instalação global. Distribuição oficial [SDL2-devel-2.32.10-VC.zip](https://github.com/libsdl-org/SDL/releases/download/release-2.32.10/SDL2-devel-2.32.10-VC.zip), SHA-256 **af347939395a58b365846aaea27391e69f9ec9d4dd650d6ac40802159b418a6e**, 7.172.966 bytes. Os hashes dos headers, import library, DLL SDK e configuração CMake ficam em [config/sdl2-sdk.json](../config/sdl2-sdk.json). A DLL é da dependência SDL2, nunca do jogo/Unity.

`tools/pc_compiler.py` seleciona MSVC 14.51.36231 (cl 19.51.36252.0), headers/libs Windows SDK instalado 10.0.26100.0, Ninja e CMake existentes no Visual Studio 18 Community. Não modifica configuração global. `VSLANG=1033` estabiliza `/showIncludes` para a análise de dependências do Ninja. C++17, `/permissive- /EHsc /fp:strict /utf-8 /W4`; fixtures semânticas também usam `/WX`. GCC/Clang recebem `-fno-fast-math -ffp-contract=off`, mas ainda não foram usados nesta rodada.

```powershell
python tools/build-pc --fixtures-only
python tools/build-pc --fixtures-only --asset-readback --apk 'CAMINHO_DO_SEU_APK'
```

O primeiro comando compila runtime, streams, fontes portáveis gerados, serviços e primitivas SDL, e executa a fixture SDL própria. O segundo valida o hash do APK, manifest, índice e cada RGBA8 antes de executar o readback de todos os 654 arquivos. Os recibos `config/phase2-sdl-verification.json` e `phase2-image-tests.json` registram **game_boot=false**. Nenhum desses alvos é uma simulação do menu ou do jogo.

## Tradutor e testes diferenciais

Os metadados originais são fornecidos em caminho externo com `--original-managed`; o port não os incorpora. O driver registra a ordem/hashes dos fontes da referência, referências de API e produtor nos recibos. O front-end usa `MetadataImportOptions.All` para vincular também os hooks privados/internos dos serviços.

```powershell
python tools/translate --original-managed 'DIRETORIO_EXTERNO_DAS_APIS_DO_APK' --compile
python translator/test_portable.py
python translator/test_lowering.py
python tests/translator/run_semantic_fixtures.py
python tests/translator/run_semantic_fixtures.py --fixture CollectionFixtures
python tests/translator/run_semantic_fixtures.py --fixture EncodingFixtures
python tests/translator/run_semantic_fixtures.py --fixture ConversionFixtures
python tests/translator/run_semantic_fixtures.py --fixture IntegerParseFixtures
python tests/kairo/run_streams.py
python tools/test_services.py
python tools/progress
```

Para repetir a verificação completa do checkpoint atual (etapas enumeradas pelo script, sem instalar dependências nem iniciar o jogo):

```powershell
python tools/verify_phase2.py --apk 'CAMINHO_DO_SEU_APK' --original-managed 'DIRETORIO_EXTERNO_DAS_APIS_DO_APK'
```

O resultado fica em `config/phase2-verification.json`; logs privados ficam em `build/phase2-verification/`. A conversão local e o inventário AssetRipper devem estar preparados antes. O gerador de progresso recusa recibos obsoletos; não ajuste estados à mão para contornar uma falha.

O runner atual recompila as 14 suítes semânticas, streams/BinaryReader, os métodos portáveis, o subconjunto emitido do jogo e suas provas; executa os testes nativos de desenho/fontes, streaming, armazenamento, entrada, formulários, som e serviços. A compilação parcial de métodos em objeto não equivale ao link de um jogo executável. Tentativas reais de link ficam em `config/phase2-boot-attempts.json`; a partir da tentativa 3, seus logs privados são preservados por número em `build/pc/attempts/`, sem sobrescrita pelas fixtures.

```powershell
python tools/inventory_baked_arrays.py --apk 'CAMINHO_DO_SEU_APK' --original-managed 'DIRETORIO_EXTERNO_DAS_APIS_DO_APK'
python tools/build_asset_catalog.py --apk 'CAMINHO_DO_SEU_APK'
python tools/translate --assembly Assembly-CSharp --bootstrap-main --compile --original-managed 'DIRETORIO_EXTERNO_DAS_APIS_DO_APK'
python tools/build-pc --apk 'CAMINHO_DO_SEU_APK' --run
```

Esses comandos requerem os inventários privados já preparados, descritos em [catálogo](notes/phase2-private-catalog.md). O último só inicia o programa depois de um link bem-sucedido; não conta um processo lançado como título/menu aprovado. As diferenças culturais das strings são medidas por `python tools/probe_string_culture.py`, sem alterar o contrato do jogo; [evidência e dependência pendente](notes/phase2-string-culture.md). `python tools/inspect_android_gc.py --apk 'CAMINHO_DO_SEU_APK'` verifica o export de GC de ambas as bibliotecas Android em memória, sem extrair nem executar o runtime.

Roslyn moderno e .NET10 são ferramentas de desenvolvimento; o programa nativo não incorpora CLR, Mono ou Unity. As sondas sintéticas históricas usam o smcs/Mono da instalação Unity 5.3.4f1 já existente, fora do port, somente como oráculo de testes próprios. [Contrato semântico e limites](translator.md); [streams](notes/managed-streams.md). Compatibilidade observada no Mono Windows não comprova o Mono Android nos casos de borda.

## Conversão local, fontes e áudio

O pipeline autentica o APK esperado, usa o inventário privado e grava somente sob `assets/`. PNG→RGBA8 usa o FFmpeg já instalado, com conferência da extensão de pixels. O TTF é extraído dos objetos Font. FSB→Ogg usa o Fmod5Sharp que acompanha o AssetRipper autorizado: não gera WAV nem PCM completo. O processo AssetRipper é iniciado pelo pipeline em loopback, com acesso externo bloqueado, e terminado pelo seu handle próprio. A tentativa direta de FFprobe sobre FSB foi recusada como formato não implementado; a reconstrução dos pacotes Vorbis pelo AssetRipper funcionou.

```powershell
python tools/extract-assets --apk 'CAMINHO_DO_SEU_APK' --extract
python tools/assetripper_inventory.py --help
python tools/convert-assets --apk 'CAMINHO_DO_SEU_APK'
```

O conversor requer os 27 links de áudio do inventário AssetRipper local. Consulte [auditoria](notes/assetripper-inventory.md) para reproduzi-lo. `--without-audio` serve apenas para diagnosticar a etapa de imagens/fontes e não conta como conversão completa.

A autorização posterior do usuário permitiu preparar FreeType, libogg e libvorbis dos fontes oficiais, somente em `build/deps/`. As três bibliotecas foram compiladas e testadas. Não houve instalação global, package manager ou download implícito por CMake. zlib/libpng/HarfBuzz/Brotli/BZip2 não foram necessários: os formatos usados nesta etapa são TTF e Ogg, e os adaptadores opcionais do FreeType foram desativados. Não se instala automaticamente outra ferramenta.

## FreeType, Ogg e Vorbis locais

`python tools/setup_media_deps.py` baixa somente os três arquivos HTTPS fixados abaixo, verifica seus SHA-256 publicados e verifica cada arquivo da árvore extraída contra o tar original antes de compilar. Uma árvore em cache alterada ou com arquivos extras é recusada. Os fontes ficam em `build/deps/sources/`, builds em `build/deps/media-build/` e o prefixo de desenvolvimento em `build/deps/native-media/`.

| Fonte oficial fixado | SHA-256 do arquivo |
|---|---|
| [FreeType 2.15.0 tar.xz](https://download.savannah.gnu.org/releases/freetype/freetype-2.15.0.tar.xz) | `93cd47eb719c325107f2d3cf087d06299e944c3b48a40b55537302304dea1dd5` |
| [libogg 1.3.6 tar.xz](https://downloads.xiph.org/releases/ogg/libogg-1.3.6.tar.xz) | `5c8253428e181840cd20d41f3ca16557a9cc04bad4a3d04cce84808677fa1061` |
| [libvorbis 1.3.7 tar.xz](https://downloads.xiph.org/releases/vorbis/libvorbis-1.3.7.tar.xz) | `b33cc4934322bcbf6efcbacf49e3ca01aadbea4114ec9589d1b1e9d20f72954b` |

Os checksums foram conferidos nas páginas primárias do [release FreeType](https://sourceforge.net/projects/freetype/files/freetype2/2.15.0/) e [downloads Xiph](https://xiph.org/downloads/). Não se verificou assinatura PGP; a identidade usada é o digest publicado via HTTPS. O Python local recusou o certificado de um mirror Xiph; o download pelo curl existente, com validação TLS do Windows mantida, funcionou e os digests coincidiram. Não se desativou validação de certificado.

O build usa CMake/Ninja/MSVC existentes, Release, `BUILD_SHARED_LIBS=OFF`, runtime MSVC `/MD` (`CMAKE_MSVC_RUNTIME_LIBRARY=MultiThreadedDLL`), `FETCHCONTENT_FULLY_DISCONNECTED=ON`, sem registry de pacotes CMake. FreeType usa `FT_DISABLE_ZLIB/BZIP2/PNG/HARFBUZZ/BROTLI=ON`. O CMake recebe `CMAKE_POLICY_VERSION_MINIMUM=3.5` para aceitar os arquivos da libvorbis 1.3.7 no CMake 4.3.1. Todos os flags, contagens/hashes das árvores de fonte, hashes das bibliotecas/headers/configurações e do compilador/produtor estão em [config/media-sdk.json](../config/media-sdk.json). As licenças FTL/FreeType e BSD de Ogg/Vorbis ficam no prefixo local `share/licenses/`; uma futura distribuição vinculada deve conservá-las.

Targets exportados: `Freetype::Freetype`, `Ogg::ogg`, `Vorbis::vorbis` e `Vorbis::vorbisfile`. Includes no prefixo: `include/` e `include/freetype2/`. O host e seus adaptadores devem usar o mesmo runtime `/MD`; misturar `/MT` com essas bibliotecas causou erro de link e foi corrigido no runner próprio.

```powershell
python tools/setup_media_deps.py
python tools/test_media.py --apk 'CAMINHO_DO_SEU_APK'
```

O segundo comando autentica o APK e cada TTF/Ogg local pelo manifest; compila `font.cpp`, `audio.cpp`, backend e fixture próprios com `/std:c++17 /EHsc /fp:strict /permissive- /W4 /WX /O2 /MD`; rasters/prefixos PCM permanecem em memória limitada ou sob `build/`, ignorados. O teste usa drivers SDL dummy e não inicia o jogo. O recibo [config/phase2-media-tests.json](../config/phase2-media-tests.json) registra fontes/produtor/binário/manifest e as comparações; não promove automaticamente APIs não integradas ao jogo.

Foram carregados os **dois TTF**, rasterizados **126 glifos/estilos/tamanhos** e comparados todos os canais ao readback SDL. O cache de pixels é limitado, com descarte LRU, e sua política não altera o TTF. Os **27 Ogg** foram percorridos em blocos de 2.048 frames, sem buffer alocado pelo comprimento da faixa. Prefixos de 512 frames foram comparados à decodificação independente do FFmpeg: 27/27 passaram com erro absoluto float máximo de `2.086162567138672e-7` (limite do teste `2e-5`). Isso não prova identidade com o decoder Android.

O mixer usa **um dispositivo SDL e quatro vozes**, conforme o default `SoundPlayer.Init`, `reference/src/KairoLibrary/kairo/unity/ui/SoundPlayer.cs:69–74`. Por voz há ring de 8.192 frames estéreo float e bloco de entrada/saída de 2.048 frames; as taxas nativas 24.000/32.000/44.100 Hz passam pelo resampler incremental SDL. As quatro vozes reservaram 262.144 bytes de rings e 131.072 bytes de scratch, e o pico somado observado de saída disponível dos resamplers foi 85.448 bytes. A memória interna dos codebooks/libvorbis/FreeType/SDL não foi contabilizada nesses números. Nenhuma música é decodificada num buffer dimensionado pelo total da faixa.

Loop, término, pausa/retomada, stop, mute, volume zero e consumo simultâneo foram exercitados no callback dummy; medição de memória/frame time do **boot**, fidelidade visual à Unity/Android, resampling equivalente à Unity e reprodução audível em hardware permanecem **UNKNOWN / NOT_RUN**. A integração exige construir o Backend antes do mixer e destruir o mixer antes do Backend, porque o Backend encerra SDL ao sair.
