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

Na consolidação de 2026-11-09, REA 6.5.0 respondeu ao doctor, mas a auditoria
ampla registrou skill/registrations desatualizados e provedores opcionais
ausentes. Não houve instalação ou alteração de configurações dos clientes.
Esses provedores não são dependência das provas de fonte/build desta etapa.
A verificação do port passou em 84 checks; detalhes em
[checkpoint-1220](notes/checkpoint-1220.md).

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

## Componente cultural Mono autorizado após 0b9d3e7

Aquisição canônica: `mono/mono`, revisão `f08f8a27bfe3aafda4e430ee2365dec73c1070d7` (`mono-2-6`,
2011-07-25). Comparação com o fork oficial Unity
`b6587926c0f146c8b12985744f33a13b39a22d57`, merge de staging 5.3 em
2016-03-11: os 17 arquivos MIT/mapa abaixo e os dois arquivos LGPL separados coincidem
integralmente com esse fork. A revisão exata de
fabricação do SDK continua **UNKNOWN**. Esta escolha fixa o componente histórico
por identidade, sem confundir a versão do compilador smcs com a do JIT.

`python tools/setup_mono_collation.py --apk <APK_LOCAL>` verifica o SHA esperado,
obtém os arquivos das URLs abaixo em `build/deps/mono-collation/` e executa apenas
um helper PEReader próprio. Ele lê o mscorlib externo do SDK e o mscorlib dentro
do ZIP em memória, grava nomes/tamanhos/hashes e nunca salva ou executa as DLLs
inspecionadas. Foram **21/21 recursos** idênticos: sete no SDK perfil 2.0, sete no
SDK perfil Unity e sete no APK. Os 94 corpos IL inspecionados de SimpleCollator e
MSCompatUnicodeTable no perfil Unity também têm os mesmos hashes brutos do APK;
no perfil 2.0, somente 17/94 hashes IL brutos são iguais (tokens diferentes não
foram normalizados). Isso não é teste de execução no Android.

Licença confirmada do componente de biblioteca de classes: MIT/X11, atribuição
em [`LICENSE` linhas 62–64](https://github.com/mono/mono/blob/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/LICENSE#L62-L64), texto em
[`mcs/MIT.X11`](https://github.com/mono/mono/blob/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/MIT.X11) e cabeçalhos individuais Novell 2005.
Avisos completos em [THIRD_PARTY.md](../THIRD_PARTY.md). A licença geral desse
commit **não** é MIT para toda a VM. O usuário autorizou depois, explicitamente,
as tabelas auxiliares LGPL de casing/category, com licença e proveniência separadas.
O provider real usa esse fonte oficial; nenhum provider limitado às fixtures
substitui o dado de produção.

| Arquivo oficial | Bytes | SHA-256 |
|---|---:|---|
| [`LICENSE`](https://raw.githubusercontent.com/mono/mono/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/LICENSE) | 3727 | `4c6abe1c24230a058f13f47c94d1ce106a47fc0177b7a3e13dc5a6fe9541fac5` |
| [`mcs/MIT.X11`](https://raw.githubusercontent.com/mono/mono/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/MIT.X11) | 1120 | `c493ac4f1910850f33e9115002ce7e7c9bc8dfe43f4bbc708d8938dd1cd76f92` |
| [`mcs/class/corlib/Mono.Globalization.Unicode/SimpleCollator.cs`](https://raw.githubusercontent.com/mono/mono/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/Mono.Globalization.Unicode/SimpleCollator.cs) | 63559 | `182227d686f9a9c8e54cbc813f7054ede1788e19c1c4c18c0127759e3e22ffb5` |
| [`mcs/class/corlib/Mono.Globalization.Unicode/MSCompatUnicodeTable.cs`](https://raw.githubusercontent.com/mono/mono/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/Mono.Globalization.Unicode/MSCompatUnicodeTable.cs) | 23302 | `210e804915cd8bad3822edae323f4336b4dd106de17547957aa6777f3cf140de` |
| [`mcs/class/corlib/Mono.Globalization.Unicode/MSCompatUnicodeTableUtil.cs`](https://raw.githubusercontent.com/mono/mono/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/Mono.Globalization.Unicode/MSCompatUnicodeTableUtil.cs) | 3680 | `1ffd47cba10d72fd1d4283bc5b84de446e90c4e99c9f80a55eed57d03921e153` |
| [`mcs/class/corlib/Mono.Globalization.Unicode/CodePointIndexer.cs`](https://raw.githubusercontent.com/mono/mono/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/Mono.Globalization.Unicode/CodePointIndexer.cs) | 4306 | `bc2baee883a8a7db7e24da06942ecab13503fe1656d703b3f6772885eff6e75c` |
| [`mcs/class/corlib/System/String.cs`](https://raw.githubusercontent.com/mono/mono/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/System/String.cs) | 84138 | `011015d86d73fe057f8eefbb8f84f600f112fe324b5d290fdc8cd14dfda26547` |
| [`mcs/class/corlib/System/Char.cs`](https://raw.githubusercontent.com/mono/mono/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/System/Char.cs) | 15962 | `c8943b0e1e1b06cb0d56a8005725f6d59818dd5c419bcec29966431e7486a3f9` |
| [`mcs/class/corlib/System.Globalization/TextInfo.cs`](https://raw.githubusercontent.com/mono/mono/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/System.Globalization/TextInfo.cs) | 12670 | `3b498c1f9d7b9e56d6ce7f58dcc6e971d6a21609d8891e7698df5619c7c698ee` |
| [`mcs/class/corlib/System.Globalization/CompareInfo.cs`](https://raw.githubusercontent.com/mono/mono/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/System.Globalization/CompareInfo.cs) | 26421 | `5c7d2edf043dc8294e870dbdb7c6e0dbe0e87a16a76feda203c980b91c1173f2` |
| [`mcs/class/corlib/resources/collation.core.bin`](https://raw.githubusercontent.com/mono/mono/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/resources/collation.core.bin) | 118901 | `418209a0f7e0380c6c96279fdcc7f293103a759f8da72715b41a7dfff97d7d12` |
| [`mcs/class/corlib/resources/collation.tailoring.bin`](https://raw.githubusercontent.com/mono/mono/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/resources/collation.tailoring.bin) | 6724 | `959690bf532d5156d8d8530615c735fe288c01f8f878573840978de499d78d07` |
| [`mcs/class/corlib/resources/collation.cjkJA.bin`](https://raw.githubusercontent.com/mono/mono/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/resources/collation.cjkJA.bin) | 44549 | `6394132f0fcdc80c6e8960a65ec032d42b9734aed8463b28d81c86ea30cd26c9` |
| [`mcs/class/corlib/resources/collation.cjkCHS.bin`](https://raw.githubusercontent.com/mono/mono/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/resources/collation.cjkCHS.bin) | 55813 | `ba23e608d99505649001591fb134f85591e0b201b29b0406864eea6e5802350c` |
| [`mcs/class/corlib/resources/collation.cjkCHT.bin`](https://raw.githubusercontent.com/mono/mono/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/resources/collation.cjkCHT.bin) | 44549 | `b3a7ee51b79123da5175f1c3c8903f6252b86093f5f17be3b2960126253de616` |
| [`mcs/class/corlib/resources/collation.cjkKO.bin`](https://raw.githubusercontent.com/mono/mono/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/resources/collation.cjkKO.bin) | 44549 | `d84e0ce625f046824f38c3436bab9324990e2c8cbbaa5cd10bb368ebba741f5a` |
| [`mcs/class/corlib/resources/collation.cjkKOlv2.bin`](https://raw.githubusercontent.com/mono/mono/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/resources/collation.cjkKOlv2.bin) | 22273 | `22d987df85d3c492121ff0653530cc080205c3257885256f1d060b92d93aabbc` |

Arquivos **GNU Library GPLv2, June 1991**, separados do grant MIT acima:

| Arquivo oficial | Bytes | SHA-256 |
|---|---:|---|
| [`mono/metadata/char-conversions.h`](https://raw.githubusercontent.com/mono/mono/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mono/metadata/char-conversions.h) | 302145 | `b73fbd2efc19dc6e6104448383e3859595264f210e5e0dbdd19e691712477d83` |
| [`COPYING.LIB`](https://raw.githubusercontent.com/mono/mono/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/COPYING.LIB) | 25369 | `e0db38a37e8178f2032d4e6964e9108d99242b76bedc7818cb39cd856de96389` |

A licença completa está também em `third_party/mono-lgpl/COPYING.LIB`.
`mono_character_tables.inc` é gerado sob `build/generated/mono-collation/`: as quatro
tabelas de caixa ocupam 38.640 bytes e o predicado OtherNotAssigned ocupa 8.192
bytes em bitmap (equivalente aos 65.536 bytes de categorias originais). Total
adicional **46.832 bytes**; NumericData/NumericDataValues não são emitidos.
O arquivo `managed_mono_character_data.cpp` deve ser linkado com
`managed_collation.cpp`; chamar `install_mono_collation_character_data()` antes dos
workers e fornecer CurrentCulture explicitamente por thread. O código de caixa
segue Char/TextInfo do mesmo pin; não utiliza NLS/ICU para o algoritmo.

Geração: `python tools/generate_mono_collator.py`; adaptação C++ em
`src/kairo/common/mono_collator_methods.inc` e `mono_unicode_methods.inc`, arrays
oficiais exclusivamente em `build/generated/mono-collation/mono_collation_tables.inc`.
A geração recusa qualquer SHA diferente. `managed_collation.cpp` requer esse
último diretório no include path e é compilado C++17, `/fp:strict /W4 /WX`.

Regressão: `python tests/translator/run_mono_collation.py` recompila os 120 casos
próprios por perfil já existentes e compara o núcleo nativo com o perfil Mono.
**120/120** resultados nativos passaram; mais **25.704/25.704** observações próprias
em oito culturas também passaram. Após autorização LGPL, ambos foram repetidos
com o provider real completo; nenhum mapa TEST_ONLY é usado. As fixtures de
fundação não promovem raízes por conta própria.
A tentativa inicial obteve **114/120**: ela revelou o contrato histórico distinto
entre `IndexOf(string)` ordinal e os overloads `IndexOf(string,start[,count])`
culturais. O código preserva essa diferença, confirmada no fonte e no oráculo.

Os sete arrays oficiais somam **337.358 bytes** de payload readonly lógico.
A parcela core é 118.901 bytes e a tailoring é 6.724; os CJK somam 211.733.
Com os dados BMP, o payload readonly da colação é **384.190 bytes**.
O parser histórico `Int32.Parse(HexNumber)` acrescenta **80 bytes** em 20
intervalos DecimalDigitNumber derivados da mesma CategoryData LGPL autorizada,
em `mono_decimal_digit_ranges.inc`; o payload Unicode total é **384.270 bytes**.
Nenhuma cultura única/ASCII-only foi presumida. A medição real do executável e
padding/ABI no 3DS fica **NOT_MEASURED**, pois o SDK da Fase 4 não foi instalado.
Nenhum SortKey público, normalização geral ou runtime Mono é incluído.

Além das buscas, `MonoBmpFixtures` percorre todos os code units para oito vetores
de lower/upper e um de OtherNotAssigned: **589.824/589.824** aprovados. Total da
suíte: **615.648/615.648**, sempre com dados de produção. O probe estático
`python tools/inspect_android_unicode.py --apk <APK_LOCAL>` confirma os cinco
arrays oficiais completos em `.rodata` nas duas arquiteturas do APK: **10/10**
matches únicos. O recibo publica só identidades/offsets/hashes.

O default CLR do perfil PC histórico é explicitamente en-US, LCID 1033, pai 9.
Ele vem do stub oficial Unity `eglib/src/gmisc-win32.c:83–89`, que retorna en_US,
SHA `cec1abe3c686d424f61b0d72cca8477c103b6a6df03eaf8abc7931895322b342`;
não é o locale Windows pt-BR nem Language.Get. `set_default_collation_culture`
instala esse perfil antes dos workers; overrides continuam por thread. A cultura
efetiva do Android permanece UNKNOWN. Teste de herança e demais detalhes em
[managed-thread.md](notes/managed-thread.md).

## Thread da fundação gerenciada

`managed_thread.cpp` implementa workers C++17 com GcMutatorScope, waits
interrompíveis e safepoints cooperativos; o backend Windows de prioridade do
perfil moderno fica em `platform/sdl/thread_priority.cpp`. O perfil Mono preserva
o getter Lowest/setter vazio comprovado no SDK, sem mudar prioridade no SO.
Nenhuma biblioteca adicional foi instalada. Para reproduzir:
`python tests/translator/run_thread_fixtures.py`. Resultado **71/71** observações
nativas e **20 invariantes de GC**; a diferença de cultura dos filhos é tratada
explicitamente. Abort/Suspend/ThreadPool/ExecutionContext completo não são
implementados. Não se infere sucesso de boot a partir desse teste.

## Folhas de locale e timezone do PC

`platform/sdl/globalization.cpp` usa somente APIs do Windows SDK já instalado;
ligar `Advapi32.lib` para EnumDynamicTimeZoneInformation. Instalar o provider
nativo antes dos cctors/workers. Locale OS e timezone raw não substituem a
configuração independente de CLR CurrentCulture. Detalhes e limites em
[native-globalization.md](notes/native-globalization.md).

Oráculo próprio: JDK Microsoft **21.0.12.1+1-LTS**, já instalado em
`C:/Program Files/Microsoft/jdk-21.0.12.101-hotspot`, sem nova instalação:

| Executável usado | SHA-256 |
|---|---|
| `bin/java.exe` | `1f41cc782de7ddd8824376568f9011413d710cf225047906106d2a01a0e3f7a9` |
| `bin/javac.exe` | `00ff52b49ba8cb2de4718fade93f411549d704eb869641eaa69986608a452a26` |

`python tools/test_globalization.py` recompila a fixture Java própria e C++17,
compara **39/39** observações e **12 invariantes nativos**. Java fica restrito ao
oráculo/ferramentas; não é dependência do executável do port. A namespace Windows
do ID de timezone é documentada separadamente da IANA usada pelo Java. Nenhum
asset, classes.dex ou binário original participa desses testes.

## StreamReader do carregador de Language

`managed_stream_reader.cpp` integra a biblioteca pls_semantics. O accessor interno
`RuntimeEncoding::kind()` identifica o codec sem baixar biblioteca adicional.
Reprodução: `python tests/translator/run_stream_reader.py`; **508/508** observações,
254 por perfil, incluem BOM, estado do decoder, linhas e disposal, além das
leituras/posição subjacentes. Há buffering incremental de 1024 bytes e suporte a
ReadLine/ReadToEnd. Detalhes e diferenças históricas em
[managed-stream-reader.md](notes/managed-stream-reader.md). A suíte de Encoding
deve ser reexecutada após a mudança do header para renovar seu hash de entrada.

## Codificacoes, excecoes e inicializacao da fase 2

As implementacoes C++17 e os comandos de reproducao, incluindo limites e
diferencas Mono/CLR, estao em [phase2-managed-foundation.md](notes/phase2-managed-foundation.md).
Usam os compiladores ja registrados acima; nao introduzem dependencias.
O subconjunto Regex utiliza apenas a biblioteca padrao C++17.
O alvo CMake `pc_game` usa `/bigobj` no MSVC: a tentativa 8, com 1.120
corpos Game, excedeu o limite de seções COFF padrão em Debug (`C1128`).
Essa opção amplia o formato do objeto; mantém C++17, `/fp:strict` e as
opções semânticas. O host instrumentado compilou nessa tentativa, mas o
processo do jogo não chegou a ser iniciado. A opção não é uma dependência
nova nem uma alteração posterior do binário.
Census cultural reproduzivel: [culture-usage.md](culture-usage.md), com 104
chamadas em 61 metodos e 24 overloads historicos ordinais separados.

## Continuidade posterior a af66d13

O driver de compilação isolada do tradutor também usa `/bigobj`: a ampliação
para 1.282 corpos ultrapassou o formato COFF padrão (C1128), mesmo antes do link.
`/we4715` recusa funções C++ com caminho sem retorno; o emissor preserva retornos
de regiões finally/using com tokens próprios e uma guarda de queda impossível.
Isso não muda o compilador nem introduz uma dependência. CMake e o harness
diferencial aplicam as mesmas duas verificações de objeto/retorno.

`tools/build-pc --configuration Release` usa build/pc-release; com
`--diagnostic-generated <pasta privada>` usa build/pc-diagnostic-release.
Debug continua disponível explicitamente. A tentativa 4 Release alcançou a fase
de recursos depois de completar a configuração/plataforma, mas apresentou zero
frames. Reprodução e limites: [ponte do bootstrap](notes/phase2-bootstrap-bridge.md).
Nenhum build Debug é usado para alegar medições de um primeiro frame estável.

A divisão de licenças e o teste de retirada dos dados auxiliares estão em
[collation-license-review.md](notes/collation-license-review.md), com arquivos,
bytes e alternativas. `python tools/audit_collation_license.py` recompila quatro
providers privados e compara 25.704 observações sintéticas por variante; não
altera a produção. A retirada do bitmap muda 124 observações en-US. Os dados
continuam sob a autorização anterior; a licença do port não foi escolhida.

## Dependências de cabeçalhos no build PC

tools/pc_compiler.py mede o prefixo real de /showIncludes com um header próprio.
VSLANG=1033 é solicitado, mas não se presume que existam recursos de mensagens
ingleses no MSVC instalado. tools/build_pc.py passa PLS_MSVC_SHOWINCLUDES_PREFIX
ao CMake; CMakeLists.txt o aplica depois de project(), evitando a detecção OEM
corrompida observada neste ambiente com mensagens UTF-8 em português.

O primeiro build com essa política ou um prefixo/compilador diferente usa
--clean-first. Antes de executar o jogo, o builder consulta ninja -t deps e exige
semantic_runtime.hpp nos objetos do runtime, da biblioteca portátil e do Game.
Um objeto sem dependências é rejeitado. Logs/política ficam em build/; a tentativa
de execução registra a auditoria. python tools/test_cmake_dependencies.py prova
que editar apenas um header recompila um executável próprio. Nenhum arquivo do
Ninja ou objeto é corrigido à mão, e nenhuma ferramenta adicional é instalada.

Os recibos Game usam source-file-table-v1: source/node_source numéricos indexam
source_files, relativos à raiz; node_source ausente herda source. A função
unpack_source_paths de translator/report_paths.py recupera os localizadores.
O produtor desse formato também é vinculado por SHA-256 no recibo.

Os registros emitted_methods/emitted_kairo_dependencies também admitem
method_record_encoding=defaults-v1. O mapa method_record_defaults explicita os
valores comuns de seis campos de metadados; apenas ocorrências exatamente iguais
são deduplicadas. IDs, parâmetros, flags não padrão e todos os registros são
conservados. unpack_source_paths também expande esses defaults. Os consumidores
do progresso, comparação e snapshots usam essa expansão. A sonda sobre o recibo
de 1.669 corpos conservou os 2.170 registros: 2.020.448 para 1.667.073 bytes,
com igualdade integral após a expansão. Não houve alteração do limite do CI.

## ADB existente para comparação Android

Localizado sem download em
`C:/Users/l_abn/Documents/Projetos/Kairosoft/external/android-45f4d63113e8/platform-tools/adb.exe`.
Versão medida: Android Debug Bridge 1.0.41, Platform-Tools
37.0.1-15733141; SHA-256
`b4a6b455702684652cccf7b46258b29e653538904359a58fd4931cf3ef286b3f`.
Essa ferramenta externa não entra no build nem no repositório. A consulta
inicial `adb devices -l` retornou lista vazia. O estado posterior, com o aparelho
conectado e a substituição expressamente autorizada pelo usuário, está registrado
na seção seguinte e na nota do primeiro frame; a ausência inicial é histórica.

## Continuidade após 5b02ef6: Unicode, texto SDL e referência Android

A rodada UCD está em [unicode-regeneration.md](notes/unicode-regeneration.md).
Mono/Unity documenta Unicode 3.1, mas UCD 3.1.0 puro e o controle 3.0.0 falham
em cinco das 25.704 observações. As tabelas GNU Library GPL v2 são mantidas
separadas, sem correções extraídas delas para os candidatos. Downloads,
revisões, hashes e licença Unicode dos experimentos constam do recibo
config/phase2-unicode-regeneration.json. O script reproduz os candidatos
privados; não altera o provider de produção.

A decisão PC de ImeOnBlock usa SDL_TextInput, sem espera pela edição ou janela
modal, com 32 asserções próprias em tools/test_text_input.py (20 de campo simples
e 12 de painel assíncrono). A assinatura
string conserva o texto inicial como retorno; o estado Blocking é false.
O getter Canvas.IsLinearFilterEnable consulta QualitySettings.antiAliasing;
o setter original é vazio. O backend CPU reporta zero amostras adicionais,
sem confundir esse valor com Image.Filter. A fixture de sistema tem agora
17 asserções. Esses contratos PC não são prova de IME ou rasterização Android.

Para a comparação visual, em 9/11/2026 o S22 Ultra SM-S908E conectado recebeu,
com autorização explícita, o APK original autenticado por SHA-256
d557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8.
O APK anterior era a baseline de teste 8a832f276fa7b29c4e0d35121b563098543206c3119aff4a3f21325896b5f333,
não um oracle original. As duas DLLs instaladas diferiam das originais.
run-as negou acesso para backup dos saves privados; a desinstalação foi
autorizada pelo usuário. Nenhuma proteção global do Android foi desligada.
O usuário concluiu a tela de permissões no aparelho.

A atividade net.kairosoft.android.soccer_en/main.Main abriu o título e, após
uma entrada de toque de teste, a seleção de saves. Capturas 1080×2316 e seus
recibos permanecem em build/android-original-comparison/, ignorado. São
evidência visual, nunca fonte de assets e nunca arquivos distribuídos.
O layout observado nesse aparelho é vertical; isso é observação do original,
não escolha de distribuição das telas do Nintendo 3DS.
