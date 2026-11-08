# Ferramentas do port — inventário do ambiente

Inventário inicial e atualização da Fase 2. Caminhos refletem esta máquina. `NOT_FOUND_WITHIN_SEARCH` significa não encontrada nos limites consultados, não uma busca universal do disco. O SDL2 SDK foi preparado localmente após autorização; as demais ferramentas abaixo já existiam ou tiveram autorização na Fase 1.

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

Para repetir a verificação completa deste checkpoint (18 etapas, sem instalar dependências nem iniciar o jogo):

```powershell
python tools/verify_phase2.py --apk 'CAMINHO_DO_SEU_APK' --original-managed 'DIRETORIO_EXTERNO_DAS_APIS_DO_APK'
```

O resultado fica em `config/phase2-verification.json`; logs privados ficam em `build/phase2-verification/`. A conversão local e o inventário AssetRipper devem estar preparados antes. O gerador de progresso recusa recibos obsoletos; não ajuste estados à mão para contornar uma falha.

Roslyn moderno e .NET10 são ferramentas de desenvolvimento; o programa nativo não incorpora CLR, Mono ou Unity. As sondas sintéticas históricas usam o smcs/Mono da instalação Unity 5.3.4f1 já existente, fora do port, somente como oráculo de testes próprios. [Contrato semântico e limites](translator.md); [streams](notes/managed-streams.md). Compatibilidade observada no Mono Windows não comprova o Mono Android nos casos de borda.

## Conversão local, fontes e áudio

O pipeline autentica o APK esperado, usa o inventário privado e grava somente sob `assets/`. PNG→RGBA8 usa o FFmpeg já instalado, com conferência da extensão de pixels. O TTF é extraído dos objetos Font. FSB→Ogg usa o Fmod5Sharp que acompanha o AssetRipper autorizado: não gera WAV nem PCM completo. O processo AssetRipper é iniciado pelo pipeline em loopback, com acesso externo bloqueado, e terminado pelo seu handle próprio. A tentativa direta de FFprobe sobre FSB foi recusada como formato não implementado; a reconstrução dos pacotes Vorbis pelo AssetRipper funcionou.

```powershell
python tools/extract-assets --apk 'CAMINHO_DO_SEU_APK' --extract
python tools/assetripper_inventory.py --help
python tools/convert-assets --apk 'CAMINHO_DO_SEU_APK'
```

O conversor requer os 27 links de áudio do inventário AssetRipper local. Consulte [auditoria](notes/assetripper-inventory.md) para reproduzi-lo. `--without-audio` serve apenas para diagnosticar a etapa de imagens/fontes e não conta como conversão completa.

FreeType, libogg e libvorbis de desenvolvimento não foram preparados. A autorização específica para prepará-los localmente em `build/deps/` foi solicitada e está pendente; nenhuma instalação dessas dependências foi executada. São a rota proposta para rasterizar o TTF próprio e decodificar Vorbis durante a reprodução em buffers limitados. Enquanto isso, rasterização, reprodução, memória/frame time do boot permanecem **UNKNOWN / NOT_RUN**. Não há instalação automática de outras ferramentas.
