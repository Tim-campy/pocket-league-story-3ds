# Ferramentas do port — inventário do ambiente

Medição local; nenhuma ferramenta foi instalada pelo inventário. Caminhos refletem esta máquina. `NOT_FOUND_WITHIN_SEARCH` significa não encontrada nos limites consultados, não uma busca universal do disco.

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
| SDL2 development headers | NOT_FOUND_WITHIN_SEARCH | UNKNOWN | header detection only; linkage/build still unverified |
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

SDL2.dll encontrada em outros aplicativos não comprova headers, bibliotecas de link nem um backend SDL2 utilizável. devkitARM/libctru/citro2d/citro3d e tex3ds são necessários na etapa 3DS, mas não para estes inventários. makerom/bannertool somente seriam necessários para a rota CIA. Azahar e hardware ainda não foram usados.

AssetRipper portátil 2.0.0 foi obtido da distribuição oficial após autorização explícita do usuário, somente sob build/tools/assetripper/. SHA-256 do ZIP: `9a7ef0e7c5c3ea5b90b4e6d855e2d98d5f7ec8c3f9e26fccbc194c6a7b01baf7`, igual ao digest publicado no release oficial. Nenhum SDK 3DS/SDL2 ou emulador foi instalado. O leitor próprio tools/unity15_metadata.py mede tabelas e metadata do Unity5.3 sem exportar conteúdo ou executar o jogo; não equivale à decodificação completa de blobs customizados. O relatório de assets explicita o que ficou UNKNOWN.

Identidades e hashes das ferramentas efetivamente encontradas estão em [config/toolchain-inventory.json](../config/toolchain-inventory.json). O alvo principal é New3DS XL; RAM efetivamente disponível depende do modo de execução e ainda precisa ser medida no runtime.
