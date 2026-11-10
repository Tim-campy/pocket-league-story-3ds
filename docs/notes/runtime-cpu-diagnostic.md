# Diagnostico de CPU e codigo ? rodada apos 75f0dad

## Amostragem PC

Release, backend nulo, partida, frames 1201?1500; sem contadores por metodo ou alocacao. A analise reutiliza a captura autenticada da baseline consolidada; nao e uma nova medicao de velocidade. 2.397 amostras dentro das 300 janelas; 25 fora excluidas; zero eventos perdidos. DbgHelp resolve a cadeia de inlining do PDB e atribui cada IP uma unica vez, pelo quadro mais interno.

| Categoria exclusiva | Amostras | Percentual |
|---|---:|---:|
| runtime/refcount | 905 | 37.755528% |
| runtime/reference-copy-other | 692 | 28.869420% |
| game-logic | 180 | 7.509387% |
| system | 134 | 5.590321% |
| runtime/array-access-and-bounds | 130 | 5.423446% |
| runtime/type-init | 120 | 5.006258% |
| native-kairo/other | 72 | 3.003755% |
| system/compiler-security | 64 | 2.670004% |
| runtime/conversions-generics-other | 37 | 1.543596% |
| system/interrupt | 19 | 0.792657% |
| unattributed/native | 14 | 0.584063% |
| native-kairo/drawing-batches | 10 | 0.417188% |
| portable-kairo | 10 | 0.417188% |
| runtime/strings | 6 | 0.250313% |
| native-kairo/offscreen | 1 | 0.041719% |
| native-kairo/text-metrics | 1 | 0.041719% |
| native-kairo/input | 1 | 0.041719% |
| runtime/allocation-destruction | 1 | 0.041719% |
| native-kairo/sound | 0 | 0% |
| runtime/exceptions | 0 | 0% |
| **Total** | **2397** | **100%** |

Zero amostras nao prova custo zero. Percentuais arredondados; denominador exato 2.397. `reference-copy-other` separa copias de ponteiros/controle das rotinas de incremento/decremento. A categoria refcount identifica a rotina, nao exclusivamente instrucoes atomicas. `array-access-and-bounds` inclui acesso, teste de nulo e limites: o custo de limites isolado permanece UNKNOWN. `system/compiler-security` inclui o cookie de pilha. Nao atribuido permanece explicito.

A soma refcount + copias de referencias e 66,624948% das amostras; nao e uma promessa de ganho equivalente. Seria necessario eliminar todo esse trabalho sem substituicao para atingir esse teto teorico. A baseline de CPU escalonada permanece 9,035819 ms medios, p95 13,2365 ms, maximo 15,6087 ms; interrupcoes nao foram subtraidas dessa medida.

Hashes:

- EXE: `4a54214603dde6461315adc51279c3d5cf54f692514bb231d9bf8e23dad2a02c`
- PDB: `79f11a6e0e11061bc7459f55720cf8df47b55b57086063b4f70a4adc66cdb304`
- Amostras: `cf729f4419b8b0951b9cebb6d0afec188dcfc3653af1945fdd4160795f36f38b`
- stdout das janelas: `31027bad7c9281eb53e71a90464aca4bee817e26d8dade202dd63b86e48d7fed`

## Instrucoes estaticas dos dois metodos

Categorias por simbolo/linha e informacao de inlining. Nao sao ciclos, nem contagens dinamicas. O grupo `game-and-emission-glue` contem a logica junto com prologos e cola de emissao, nao so o C# original. ARM inclui entrada e auxiliares de propriedade unica; x64 abaixo inclui somente a entrada. Portanto nao comparar diretamente os totais entre arquiteturas.

| Arquitetura / metodo | Categoria | Instrucoes |
|---|---|---:|
| ARM11 / M:game.Camera.ConvertScreenToCamera(System.Int32[],System.Int32[]) | game-and-emission-glue | 31 |
| ARM11 / M:game.Camera.ConvertScreenToCamera(System.Int32[],System.Int32[]) | type-initialization | 5 |
| ARM11 / M:game.Camera.ConvertScreenToCamera(System.Int32[],System.Int32[]) | reference-management | 74 |
| ARM11 / M:game.Camera.ConvertScreenToCamera(System.Int32[],System.Int32[]) | refcount | 72 |
| ARM11 / M:game.Camera.ConvertScreenToCamera(System.Int32[],System.Int32[]) | array-access-and-bounds | 83 |
| ARM11 / M:game.Camera.ConvertScreenToCamera(System.Int32[],System.Int32[]) | runtime-call | 10 |
| ARM11 / M:game.Camera.ConvertScreenToCamera(System.Int32[],System.Int32[]) | runtime-other | 28 |
| ARM11 / M:game.Camera.ConvertScreenToCamera(System.Int32[],System.Int32[]) | exceptions-unwind | 16 |
| ARM11 / M:game.Map.Draw_coat(kairo.unity.ui.Graphics,System.Boolean) | game-and-emission-glue | 2607 |
| ARM11 / M:game.Map.Draw_coat(kairo.unity.ui.Graphics,System.Boolean) | reference-management | 2172 |
| ARM11 / M:game.Map.Draw_coat(kairo.unity.ui.Graphics,System.Boolean) | refcount | 1276 |
| ARM11 / M:game.Map.Draw_coat(kairo.unity.ui.Graphics,System.Boolean) | exceptions-unwind | 312 |
| ARM11 / M:game.Map.Draw_coat(kairo.unity.ui.Graphics,System.Boolean) | runtime-other | 366 |
| ARM11 / M:game.Map.Draw_coat(kairo.unity.ui.Graphics,System.Boolean) | runtime-call | 417 |
| ARM11 / M:game.Map.Draw_coat(kairo.unity.ui.Graphics,System.Boolean) | array-access-and-bounds | 117 |
| ARM11 / M:game.Map.Draw_coat(kairo.unity.ui.Graphics,System.Boolean) | other-or-unknown | 9 |
| ARM11 / M:game.Map.Draw_coat(kairo.unity.ui.Graphics,System.Boolean) | type-initialization | 13 |
| x64 / M:game.Camera.ConvertScreenToCamera(System.Int32[],System.Int32[]) | game-and-emission-glue | 48 |
| x64 / M:game.Camera.ConvertScreenToCamera(System.Int32[],System.Int32[]) | type-initialization | 3 |
| x64 / M:game.Camera.ConvertScreenToCamera(System.Int32[],System.Int32[]) | refcount | 84 |
| x64 / M:game.Camera.ConvertScreenToCamera(System.Int32[],System.Int32[]) | reference-management | 16 |
| x64 / M:game.Camera.ConvertScreenToCamera(System.Int32[],System.Int32[]) | array-access-and-bounds | 30 |
| x64 / M:game.Camera.ConvertScreenToCamera(System.Int32[],System.Int32[]) | runtime-other | 1 |
| x64 / M:game.Camera.ConvertScreenToCamera(System.Int32[],System.Int32[]) | runtime-call | 2 |
| x64 / M:game.Camera.ConvertScreenToCamera(System.Int32[],System.Int32[]) | exceptions-unwind | 2 |
| x64 / M:game.Map.Draw_coat(kairo.unity.ui.Graphics,System.Boolean) | game-and-emission-glue | 806 |
| x64 / M:game.Map.Draw_coat(kairo.unity.ui.Graphics,System.Boolean) | type-initialization | 7 |
| x64 / M:game.Map.Draw_coat(kairo.unity.ui.Graphics,System.Boolean) | refcount | 630 |
| x64 / M:game.Map.Draw_coat(kairo.unity.ui.Graphics,System.Boolean) | reference-management | 143 |
| x64 / M:game.Map.Draw_coat(kairo.unity.ui.Graphics,System.Boolean) | runtime-call | 48 |
| x64 / M:game.Map.Draw_coat(kairo.unity.ui.Graphics,System.Boolean) | other-or-unknown | 1 |
| x64 / M:game.Map.Draw_coat(kairo.unity.ui.Graphics,System.Boolean) | runtime-other | 18 |
| x64 / M:game.Map.Draw_coat(kairo.unity.ui.Graphics,System.Boolean) | array-access-and-bounds | 50 |
| x64 / M:game.Map.Draw_coat(kairo.unity.ui.Graphics,System.Boolean) | exceptions-unwind | 19 |

## Tamanho por metodo ARM

ELF `438eab432a3dcbcf08107577d2f317a050d7932d565e881c46c7b1dce6a4aea2`. 1198 metodos com simbolos vinculados e IL mapeado; 18 identidades ainda sem mapeamento neste analisador. Inclui auxiliares exclusivos; funcoes compartilhadas nao sao cobradas duas vezes. A parcela nao atribuida/compartilhada soma 7922324 bytes. Isso ainda nao mede duplicacao por inlining.

| Faixa de codigo | Metodos | Bytes codigo | Bytes IL |
|---|---:|---:|---:|
| 0?256 | 143 | 22124 | 7099 |
| 257?1024 | 356 | 206260 | 13629 |
| 1025?4096 | 324 | 714284 | 29227 |
| 4097?16384 | 226 | 1854700 | 77031 |
| 16385?1099511627776 | 149 | 9922464 | 371158 |

### Vinte maiores

| Metodo | Codigo ARM (bytes) | IL (bytes) | Razao |
|---|---:|---:|---:|
| `M:form.SubForm.Update2` | 386724 | 12082 | 32.008277 |
| `M:form.DebugForm.Update_gameParam` | 365192 | 13913 | 26.248257 |
| `M:form.SubForm._draw3(kairo.unity.ui.Graphics)` | 363068 | 13116 | 27.681305 |
| `M:form.SubForm._draw6(kairo.unity.ui.Graphics)` | 361712 | 13213 | 27.375464 |
| `M:form.SubForm.Update` | 356144 | 11390 | 31.268130 |
| `M:form.SubForm._draw5(kairo.unity.ui.Graphics)` | 340108 | 12062 | 28.196651 |
| `M:form.SubForm._draw4(kairo.unity.ui.Graphics)` | 324672 | 12484 | 26.007049 |
| `M:form.SubForm._draw2(kairo.unity.ui.Graphics)` | 277720 | 10209 | 27.203448 |
| `M:form.SubForm._draw(kairo.unity.ui.Graphics)` | 236836 | 8704 | 27.210018 |
| `M:game.TPlayer.Script` | 231180 | 9408 | 24.572704 |
| `M:form.DebugForm.Update_param` | 216740 | 8396 | 25.814674 |
| `M:game.UserData.Update_edit(System.Boolean)` | 191012 | 5801 | 32.927426 |
| `M:game.UserData.Draw_edit(kairo.unity.ui.Graphics,System.Boolean)` | 182588 | 7669 | 23.808580 |
| `M:form.SubForm.Init` | 181604 | 5191 | 34.984396 |
| `M:form.SoccerForm._update(System.Int32)` | 159824 | 4742 | 33.703922 |
| `M:form.DebugForm.Draw_gameParam(kairo.unity.ui.Graphics)` | 143684 | 5322 | 26.998121 |
| `M:game.UserData.Draw_edit2(kairo.unity.ui.Graphics,System.Boolean)` | 134020 | 6626 | 20.226381 |
| `M:game.Ball.Update` | 132628 | 4629 | 28.651545 |
| `M:form.DebugForm.Update_window` | 124740 | 4326 | 28.834951 |
| `M:form.BootForm.Load` | 121424 | 3277 | 37.053403 |
