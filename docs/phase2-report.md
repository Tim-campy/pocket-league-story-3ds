# 1. PROGRESSO

Continuação desde `7982970`. **A Fase 2 permanece parcial; não houve primeiro boot do jogo.** Parada por autorização pendente de uma dependência adicional de colação cultural do Mono.

| Medida | Antes | Agora |
|---|---:|---:|
| Raízes portáveis compiladas e exercitadas | 47/172 | **140/172 (81,395349%)** |
| Métodos portáveis, incluindo dependências | 50 | **223** |
| Diferenciais desses métodos | 350/350 | **1.561/1.561** |
| Assembly-CSharp compilado, identidades IL | 0/1.958 | **316/1.958 (16,138917%)** |
| Assembly-CSharp executado/verificado em jogo | 0 | **0** |
| Fronteira verificada | 47/775 | **209/775** |
| SyntaxKinds observados em corpos emitidos | 42/123 | **53/123** |

As 47 raízes anteriores continuam aceitas: **zero regressões contra a baseline**, ganho de 93 raízes. Os 83 métodos adicionais são dependências. Os 316 corpos do jogo têm vínculo único com a tabela IL, sem IDs UNKNOWN: 315 raízes pedidas pelo emissor e um construtor implícito. Compilar em objeto não prova link ou execução.

| Categoria | Total | verified | todo |
|---|---:|---:|---:|
| Portável | 254 | 140 | 114 |
| Reimplementar | 452 | 69 | 383 |
| Remover | 69 | 0 | 69 |
| Total | 775 | 209 | 566 |

Os 254 portáveis incluem tipos/campos: restam 32 raízes de método. Assets: três grupos `loads`, seis `extracts`, 35 `inventoried`; antes eram um `loads`, um `converts`, sete `extracts` e 35 `inventoried`. Os 53 contratos offline ainda não estão integrados aos chamadores gerados.

# 2. O QUE FOI FEITO NESTA RODADA

- Tradutor: templates genéricos, herança, construtores base/this, dispatch virtual, propriedades/streams, tipos Secure, DateTime/Random/StringBuilder, exceção EOF e rastreamento de campos pelo GC; +93 raízes, zero perdas da baseline.
- Emissor sintético: 24 métodos, 168/168 casos. Split forçado do mesmo corpus: 1.561/1.561, 11 arquivos, máximo 32.762 bytes sob orçamento de 32.768; padrão 900.000 bytes, uma TU preservando definições únicas.
- Fundação semântica: 1.158/1.158 casos em 14 suítes, mais 21 invariantes nativos de GC. Streams: 174/174; BinaryReader: mais 90/90. Esses contadores não são métodos do jogo.
- Desenho/fontes: 550 observações contra corpos C# selecionados, 7.955 assertions nativas, 718 ocorrências PNG carregadas, seis frames sintéticos de texto. Rich text, matrizes/rotações completas e fidelidade raster Android continuam pendentes.
- FreeType/Vorbis: dois TTF, 126 rasters e 27 Ogg em streaming; 9.043.951 frames percorridos em blocos limitados. Os 18.156.964 checks de canais/amostras não são cenários independentes. Os 27 prefixos comparados ao FFmpeg passaram.
- Armazenamento: 80/80 diferenciais e 53 checks; 21 recursos reais, 3.275.098 bytes e 63 aliases conferidos. Não se usaram saves do usuário ou chave real nesses oráculos.
- Entrada: 56/56 diferenciais, 19 checks do adaptador PC. Canvas/FormBase/FormManager: 56/56 diferenciais, 16 checks nativos. Execute/OnDraw exigem pontes ainda ausentes.
- Som Kairo: 64/64 diferenciais, 75 checks de streaming real, quatro vozes e 27 vínculos de áudio; nove DocIDs da fronteira verificados.
- Pipeline privado: 3.006 registros de catálogo, 965 arrays constantes comprovados; valores/chaves/tabelas somente em assets ignorados. Nenhum assembly original escrito em build ou executado.
- Boot: quatro tentativas de construir o executável. A última compilou host e código emitido e falhou no link por quatro callbacks de Main. Não há menu substituto.

**Verificação completa: 36/36 etapas PASS**, incluindo 32 testes de repositório e quatro de inventário sintático. A falha de link continua registrada separadamente. Recibos: `config/phase2-verification.json` e `phase2-boot-attempts.json`. Diário: `docs/notes/phase2-translator-cycles.md`.

# 3. HIPÓTESES

| Estado | Evidência |
|---|---|
| CONFIRMADA | Genéricos/dispatch conservam o comportamento nos casos aceitos: 223 métodos e 1.561 diferenciais; fixture confirma despacho derivado durante construtor base. |
| CONFIRMADA | GC Android anuncia geração máxima zero: o export completo mono_gc_max_generation retorna zero nos libmono x86 e ARM do APK, analisados sem execução. Não prova todo o coletor. |
| REFUTADA | Cultura pode ser substituída por ordinal: 11/120 observações do Mono divergem. O usuário decidiu preservar cultura nesses métodos. |
| REFUTADA | APIs culturais do Windows reproduzem o Mono: 26/120 diferenças, com e sem linguistic casing. Nenhuma alternativa foi adotada. |
| CONFIRMADA | Graphics.GetRenderRect original copia float[] para int[] e lança ArrayTypeMismatchException; os dois oráculos confirmaram a exceção, preservada no nativo. |
| REFUTADA | Arrays baked podem inicializar como globais C++ antes do host: dependem do catálogo e da ordem C#. Quatro globais foram recusadas; nove corpos dependentes continuam sem emissão até existir cctor fiel. |
| INCONCLUSIVA | Equivalência visual/sonora/funcional ao Android: não houve execução do jogo C++ nem comparação de partida. |

Negativos corrigidos: 128 diferenças no formatter inicial de nomes genéricos; 43 por classificação incorreta de op_Addition no runner; um caso de dispatch do BinaryReader entre runtimes; incompatibilidade /MT versus /MD; mirror recusado por TLS, resolvido mantendo validação Windows. Não se editaram estados para ocultar falhas. As nove recusas Game estão nomeadas no diário; não são regressões contra a baseline, que tinha zero Game traduzidos.

# 4. PENDENTES POR GRUPO

| Raízes portáveis recusadas | Quantidade |
|---|---:|
| DataInputStream/BinaryReader: binding | 3 |
| JTool/ByteListOutputStream: arrays/reflexão | 2 |
| Compressor/JarInflater/LoadStringArray: tipos aninhados/Dictionary | 8 |
| StringEx/SecureString/StringUtil/Config: cultura e dependências de strings | 9 |
| Property/SecureProperty: conditional access/serialização | 4 |
| JString/ConnectionException/Log: object e exceções | 4 |
| JCalendar: provedor de timezone | 1 |
| StreamUtil.ReadString: GetString/GetCode | 1 |
| Total | **32** |

São bloqueios atuais, sem promessa de que uma mudança feche todo o grupo. IDs e dependências adicionais: `config/phase2-translation.json`.

Restam 1.642 identidades IL do jogo sem C++ compilado e 70 SyntaxKinds sem observação em corpos emitidos. O inventário de 123 inclui construções estruturais fora dos corpos; parsing não comprova cobertura semântica.

O link exige Main.OnCreate (Language.Get), OnUpdate (BootForm), OnDraw e GetFormManager (FormManager). Também faltam bootstrap Config/Awake/Language, execução de formulários/SurfaceManager, inicialização estática fiel, integração dos serviços e os demais corpos do jogo.

# 5. TOOLCHAIN

Mantidos Roslyn 5.8.0-1.26319.2, .NET10.0.10, MSVC 19.51.36252.0, CMake 4.3.1-msvc1, Windows SDK 10.0.26100.0 e SDL2 SDK 2.32.10. Novos: FreeType 2.15.0, libogg 1.3.6 e libvorbis 1.3.7 oficiais, somente em build/deps, sem instalação global. Hashes/flags em `docs/toolchain.md` e `config/media-sdk.json`; runtime MSVC /MD.

zlib/libpng/stb/miniaudio não foram necessários. Colação Mono é proposta, ainda não preparada. Toolchain 3DS/emulador continuam para a Fase 4. Correspondência exata das tabelas culturais do fork Unity/Android e equivalência de todas as culturas: UNKNOWN.

# 6. COMPONENTES EXTERNOS E METADADOS

Referência limpa: v1.0.0-csharp-reconstruction, commit `c7d097a847ca1f1a8e5fb7141ff11d338f5915c4`. APK 2.0.2, SHA-256 `d557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8`. Metadados de API são externos; nenhum motor/DLL/SO original incorporado. libmono foi lido estaticamente sem extração no port.

Os 654 RGBA8 somam 16.933.248 bytes; o readback sequencial teve pico de payload de textura de 1.179.648 bytes. No mixer padrão de quatro vozes: rings 262.144 bytes, scratch 131.072, pico somado de saída disponível de resampler 85.448. Não incluem todas as alocações de bibliotecas e **não são memória residente do jogo**. A fixture Sound usa buffers menores, registrados separadamente.

**Boot: falhou no link. Título/menu/partida: NOT_RUN. RSS por texturas/áudio/código/heap e frame time: UNKNOWN.** Nenhuma discrepância de gameplay foi medida contra Android. Testes de componentes não são provas de partida.

Assets, dados e manifestos privados ignorados. DEX/Java, marca, binários originais e backend 3DS continuam fora. Nenhum APK novo foi montado, instalado ou executado.

# 7. BLOQUEIOS

**Parada pela condição autorizada de dependência fora da lista.** Ordinal e NLS foram medidos e recusados para a semântica cultural. A autorização pendente é para preparar o componente oficial de colação do Mono em build/deps, com versão, hashes e licença, visando C++ sem runtime Mono. A consulta decorre da instrução do usuário: “Qualquer outra dependência, pergunte antes.” Nenhuma instalação/incorporação desse componente foi feita.

Preservar cultura já foi decidido e registrado em AGENTS.md; autorizar a dependência é uma decisão separada. Não falta APK ou compilador. Aprovar a dependência não resolve automaticamente os demais pendentes. Não houve dez rodadas sem avanço nem decisão sobre telas/controles 3DS.

# 8. SUA RECOMENDAÇÃO

1. Resolver a autorização da colação e validar versão/tabelas contra o oráculo histórico; manter Android UNKNOWN onde não houver prova.
2. Fechar as 32 raízes: BinaryReader já tem 90 testes próprios, mas falta binding; tipos aninhados/Dictionary, arrays e conditional access destravam outras famílias.
3. Integrar API/serviços ao bootstrap e aos chamadores gerados, repetindo o boot após avanços relevantes. Medir RSS/frame time como números do jogo somente quando título/menu executarem.
