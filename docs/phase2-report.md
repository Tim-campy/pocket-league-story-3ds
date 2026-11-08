# 1. PROGRESSO

Marco intermediário após `0b9d3e7`: **as 172 raízes portáveis compilam e foram
exercitadas**. A Fase 2 continua; título, menu e partida ainda não executaram.
Não há decisão pendente do usuário neste marco. A autorização adicional LGPL
foi registrada e aplicada com licença/proveniência separadas.

| Medida | Anterior | Atual |
|---|---:|---:|
| Raízes portáveis compiladas/exercitadas | 140/172 | 172/172 |
| Raízes estritamente verificadas | 140/172 | 171/172 |
| Corpos portáveis incluindo dependências | 223 | 374 |
| Métodos portáveis sem divergência | 223 no juiz anterior | 373/374 |
| Observações diferenciais | 1.561/1.561 | 2.617/2.618 |
| Game associado à assinatura IL e compilado | 316/1.958 | 1.110/1.958 |
| Game executado/verificado | 0 | 0 |
| Fronteira verificada | 209/775 | 249/775 |
| Fronteira implementada, não verificada | 0 | 1 |

**Zero perdas de compilação** nas 140 raízes/223 corpos anteriores: +32 raízes
e +151 corpos. Houve uma retirada de qualificação: `JMath.Sin(-0)` retorna +0
no juiz Mono Windows e −0 no C++; o resultado Android continua UNKNOWN.
Os juízes anterior e atual diferem, portanto não se afirma comparação homogênea
de verificações. A implementação não foi normalizada para esconder a diferença.
Prova por IDs: `config/phase2-checkpoint-comparison.json`.

| Classificação | Total | verified | implemented | todo |
|---|---:|---:|---:|---:|
| Portável | 254 | 171 | 1 | 82 |
| Reimplementar | 452 | 78 | 0 | 374 |
| Remover | 69 | 0 | 0 | 69 |
| Total | 775 | 249 | 1 | 525 |

Os 254 símbolos incluem campos/tipos. Game: 1.107 declarações solicitadas e
três construtores implícitos compilados; 76 helpers Kairo separados. Existem
13 slots virtuais declarados sem definição. Assets: três grupos `loads`, seis
`extracts`, 35 `inventoried`, sem mudança. Sintaxe observada: 64/123 Kairo,
61/123 Game, **66/123 na união**; observação não comprova todos os casos de cada
construção e não significa que os 123 estejam implementados.

# 2. O QUE FOI FEITO NESTE MARCO

| Frente | Resultado medido | Negativo ou limite |
|---|---|---|
| Censo cultural vinculado | 104 chamadas em 61 métodos; 24 buscas ordinais históricas separadas; zero erros de binding | Idioma dos assets não determina cultura CLR. |
| Colação oficial reduzida | 615.648/615.648, incluindo os 120 casos originais | NLS moderno deixou 26/120 diferenças e não foi adotado. |
| Core correto | Perfil SDK `unity` integralmente idêntico ao mscorlib do APK | Perfil `2.0` tem helpers/tabelas de Trim diferentes e foi descartado. |
| Inicialização por tipo | 24/24: ordem, reentrada, falha cacheada e concorrência | Restaurar inicializadores reais retirou temporariamente 187 corpos Game antes aceitos sem a cadeia completa. |
| Exceções, Encoding, StreamReader | 74/74, 134/134 e 508/508 | Stack trace completo e codecs legados não demonstrados continuam lacunas. |
| Regex e Path | 752/752 e 378/378 | Subconjuntos medidos; Path distingue Unix/Windows. |
| Trim/hex/HexNumber/Replace/Split | 395.166/395.166; 219 diferenças históricas preservadas | Preservada inclusive aritmética peculiar de HexNumber sobre dígitos não ASCII. |
| Threads/GC/UI dispatch | 71/71; 20 invariantes de GC; UI dispatch com 24 invariantes e 16 coletas | Não resolve campos compartilhados do Game. |
| Closures/interfaces/method groups | 48 métodos sintéticos, 336/336 casos do emissor | Captura com goto continua recusada; zero capturas foreach no Game. |
| Arrays calculados/constantes | 6/6; ordem de avaliação e recusa de constante sem prova | 965 payloads constantes continuam privados; o guard anterior recusava indevidamente arrays dinâmicos. |
| Catálogo raw e AssetReader | 21 recursos brutos e 21 decodificados; 15 pares diferentes; 3.027 registros verificados | Evita Decode duplicado; nenhum conteúdo publicado. |
| Imagens/formulários/bootstrap | Lifetime 56/56, Forms 64/64, scheduler 48/48, bootstrap 12/12 | Colaboradores de teste não são callbacks Game executados. |
| Storage/serviços | Storage 86/86; registro com 12 assertions; HTTP com 24 observações; analytics com dez | Fila/preferências preservadas; transporte nunca executado. |
| Memória PC | Sampler com oito invariantes | Não integrado ao jogo; valores sintéticos não são métricas de boot. |

**Verificação completa: 68/68 checks aprovados**, inclusive publicação fresca
dos inventários. O verificador reprova `PENDING` do gerador de progresso em vez
de aceitar uma publicação antiga como checkpoint válido.

# 3. HIPÓTESES

- **CONFIRMADA:** não basta comparar a entrada de Trim: helpers/dados diferem
  no perfil `2.0`; o core `unity` coincide integralmente com o APK por SHA-256.
- **CONFIRMADA:** ordinal/NLS moderno não substitui a colação histórica;
  `StringEx`, `StringUtil` e `Language` tornam a diferença observável.
- **REFUTADA:** limitar a uma cultura ou ASCII: nomes/textos dos assets passam
  pelos utilitários, e a cultura Android efetiva não foi medida.
- **CONFIRMADA:** arrays calculados são comandos da lógica; o controle de
  constantes sem proveniência continua recusado, comprovado pela fixture.
- **CONFIRMADA:** o bloqueio Shader do construtor implícito vem da varredura
  de locais/gotos em métodos não chamados da classe. Fixture privada isolou
  o gatilho; a correção será feita após este checkpoint.
- **INCONCLUSIVA no Android:** sinal de Math.Sin(-0); imports nativos medidos,
  mas não houve execução do jogo no aparelho nesta continuidade.
- **CONFIRMADA:** campos de estado/progresso, labels e entrada têm data races
  na representação C++ atual. Publicar estado 4 não equivale ao fim do worker.

# 4. PENDENTES POR GRUPO

| Grupo | Estado |
|---|---|
| Raízes portáveis | Zero sem compilação; Sin sem verificação estrita. |
| Game | 848 identidades IL sem `translated`; 1.110 compiladas. |
| Main | OnCreate/OnUpdate ainda sem corpo; OnDraw/GetFormManager/OnDestroy possuem corpos. |
| Ligação | 13 slots sem definição no recibo; última tentativa registrou oito símbolos não resolvidos. |
| Sintaxe | 57/123 não observados na união; cobertura semântica mais restrita que observação. |
| Bootstrap/serviços | Provas nativas prontas; bindings e execução gerada integrados ainda pendentes. |
| Concorrência | 73 campos/439 acessos/323 chamadas inventariados; 18 campos próprios de BootForm e 25 transitivos detalhados. SharedField tem 21 invariantes, ainda sem aplicação ao Game. |
| Validação funcional | Nenhum título/menu/partida PC; comparação visual/sonora Android pendente. |

Tentativas de boot: tipos de layout ausentes; depois factory não emitida;
depois oito callbacks/slots ausentes. Nenhum stub foi usado. Não há frame time
ou RSS do jogo: o executável ainda não iniciou.

# 5. TOOLCHAIN

Sem nova instalação no sistema. Roslyn, MSVC/CMake/Ninja, Mono SDK Unity,
SDL2, FreeType, libogg/libvorbis e JDK foram usados conforme autorizações.
SDK 3DS/Azahar permanecem para a Fase 4. Versões/flags/hashes:
`docs/toolchain.md`.

O oráculo histórico carrega `lib/mono/unity/mscorlib.dll`, SHA-256
`7f16171cf5f87ca1e4c229727526d2fbc786079fc0c960f36197013ea0d986e1`,
idêntico ao do APK. O perfil `2.0`, hash
`9380de48b4f19ee5d125f84ac1ce2644175e2490ad265ef12c444eba6916e047`,
foi descartado. Executar programas próprios no SDK Windows não prova todos
os comportamentos do JIT Android.

# 6. COMPONENTES EXTERNOS E METADADOS

Mono oficial `f08f8a27bfe3aafda4e430ee2365dec73c1070d7`, confrontado com o
fork Unity `b6587926c0f146c8b12985744f33a13b39a22d57`. Revisão exata de
fabricação do SDK inteiro UNKNOWN; os componentes usados têm identidade por
hash comprovada. MIT/X11 e GNU Library GPLv2 ficam separados em `THIRD_PARTY.md`,
com o `COPYING.LIB` histórico.

Colação readonly lógica: **337.358 bytes MIT +46.832 bytes BMP LGPL =384.190**.
HexNumber acrescenta **80 bytes**: **384.270 bytes** dessas tabelas oficiais.
Não são RSS nem incluem padding/estruturas ou outras tabelas do fonte
traduzido. Tailoring adiciona 6.284 bytes UTF-16 no heap, além dos índices.

Sete recursos e cinco arrays BMP confrontados com o APK sem salvar/executar
DLLs/SOs originais. Assets ficam nos diretórios ignorados. A referência mantém
tag/commit/bytes. Métodos Game são vinculados por tipo/nome/parâmetros/retorno;
a reconstrução byte a byte anterior não conta como progresso C++.
Não se montou nem instalou APK nesta continuidade.

# 7. BLOQUEIOS

**Nenhuma decisão ou autorização pendente do usuário.** Este marco será salvo
e a Fase 2 continuará. As tabelas LGPL já estão autorizadas.

Impedem o boot: lowering do construtor implícito, Concat de objetos, demais
slots e bootstrap/serviços reais. Impedem afirmar equivalência do jogo:
campos compartilhados sem correção, ausência de execução/comparação Android.
RSS por categoria e frame time continuam UNKNOWN; payload/commit/RSS não são
somados nem tratados como medidas intercambiáveis.

# 8. RECOMENDAÇÃO E CONTINUIDADE

1. Corrigir a varredura do construtor implícito com a fixture isolada e depois
   Concat(Object,Object,Object). Ganho exato de métodos antes do juiz: UNKNOWN.
2. Ligar bootstrap/políticas aos chamadores, tentar executar e tratar a próxima
   falha concreta, sem menu sintético.
3. Aplicar acessos sincronizados inventariados, inclusive nativos, mantendo
   `++` como carga/operação/store separados; promover Game somente com prova.

Diário e negativos em `docs/notes/phase2-translator-cycles.md`. Nenhuma condição
de parada foi acionada neste marco; o trabalho prossegue após salvá-lo.
