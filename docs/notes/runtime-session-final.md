# Encerramento da sessão de runtime

## 1. PROGRESSO

Último checkpoint publicado: `b2acf47`, após verificação completa 104/104.
As alterações posteriores permanecem locais, sem commit/publicação final:
passaram nos testes específicos abaixo, mas a suíte completa não foi renovada
para esse conjunto. A sessão foi encerrada por solicitação do usuário.

O jogo mantém 1.768 métodos compilados de 1.958; a parte portável mantém
374 corpos compilados, incluindo as 172 raízes. Não houve expansão de
cobertura nesta rodada. Os 751 métodos exercitados registrados anteriormente
não representam uma nova contagem nesta sessão; o benchmark não tem contador
por método. Restam 190 corpos, 22 slots e 26 integrações offline no inventário
da fase. A fronteira publicada conserva 252 verificados, um implementado e
522 pendentes.

CPU agendada por frame, backend nulo Release, mesmas entradas e janelas de
300 frames; nenhum contador por método ou alocação nesse executável:

| Cenário | Média anterior → atual (ms) | p95 anterior → atual (ms) | Máximo anterior → atual (ms) |
|---|---:|---:|---:|
| Gestão | 8,349977 → 7,151805 | 12,2372 → 10,6807 | 13,0480 → 21,0205 |
| Partida | 11,840512 → 9,035819 | 16,4336 → 13,2365 | 19,5489 → 15,6087 |

Zero eventos ETW perdidos. Não foram capturados eventos DPC/ISR para subtrair
interrupções; a métrica é CPU agendada, como na baseline. O máximo da gestão
piorou e sua causa não foi isolada. Não atribuir esse pico ao sistema por
suposição. No ARM, ainda não existe janela válida de 300 frames.

## 2. O QUE FOI FEITO NESTA RODADA

- Consolidação publicada, correções no gerador de PROGRESS e limpeza de
  16 arquivos/123.205.283 bytes, com inventário em runtime-cleanup.md.
- Caminho rápido atômico de inicialização de tipos e poda de registros fracos
  expirados, sem retirar mutex nem coletar objetos vivos.
- Invocation list imutável compartilhada para delegates, evitando cópia dos
  bindings em cada chamada.
- Cache/internação de literais UTF-16 emitidos; strings dinâmicas continuam
  separadas. Array fixo para os dois passes de MeshManager.BeginPrimitive.
- Adaptador de colação passou a compartilhar a string imutável, sem copiar
  seus code units por comparação.
- Contadores de operações do fonte, atribuição de new por pilha/PDB, relatórios
  dos vinte maiores sítios, inventário de threads e medição de seções/link map.
- Build ARM autenticado, preparação do SD, identificação automática do modelo
  e diagnóstico de memória fora das janelas cronometradas.
- Reinício do Azahar solicitado pelo usuário: o sintoma persistiu. Marcadores
  localizaram a parada dentro de host_update, antes do desenho. Uma variante
  com marcadores adicionais de formulários foi compilada, mas não executada.

## 3. HIPÓTESES E VERIFICAÇÕES

CONFIRMADA: havia alocações evitáveis introduzidas pelo runtime. Nas mesmas
janelas, as solicitações C++ caíram conforme a tabela seguinte.

CONFIRMADA: a fixture de espera indefinida perdeu um despertar no conjunto
devkitARM/libctru/Azahar testado. Reavaliação protegida do predicado passou
100/100 rodadas; a fixture integrada de condição/future também passou 100/100.
Isso não identifica qual componente causa a falha nem prova comportamento
no hardware. A proteção não resolveu o primeiro frame completo do jogo.

INCONCLUSIVA: causa exata da parada ARM dentro de host_update. Reiniciar não
removeu o sintoma observado. Também não há prova de que a antiga falha de
alocação esteja resolvida: a execução ainda não alcançou o ponto final de teste.

Testes específicos aprovados: emissor 1.400/1.400; semântica 60/60; GC 26/26;
UI/GC 29 asserts e 17 coletas; inicialização de tipos 24/24; offscreen 38;
colação 615.648/615.648, incluindo 120 históricos e 25.704 de borda.
Delegate: 10.000 invocações sem alocação na fixture. Literais: 20.000 leituras
aquecidas sem alocação, com testes de identidade, UTF-16 e concorrência.

Tentativas negativas: macros aninhadas do primeiro contador causaram C1001
no MSVC; mudar preprocessor/parênteses não resolveu. O observador simples
substituto passou. O primeiro oráculo falhou por MONO_PATH ausente. Uma geração
sem --bootstrap-main reduziu provisoriamente a cobertura; o comando correto
restaurou 1.768 corpos, e a variante reduzida não foi adotada. O diagnóstico
ARM privado excedeu o limite de argumentos do linker; response file com
caminhos Windows resolveu. O build PC foi interrompido deliberadamente e
retomado incrementalmente para reduzir pressão sobre os 8 GB de RAM.

## 4. PENDENTES POR GRUPO

| Cenário, 300 frames | New anterior | New atual | Bytes anteriores | Bytes atuais |
|---|---:|---:|---:|---:|
| Gestão | 4.134.181 | 84.000 | 157.800.168 | 10.612.800 |
| Partida | 3.781.148 | 47.563 | 140.525.988 | 6.580.264 |

Houve zero coletas de ciclos nas duas janelas atuais. Destruição por refcount
continua acontecendo. O runtime combina ownership compartilhado com refcounts
atômicos e coleta cooperativa de ciclos; não é uma arena por frame.

Fonte instrumentado: 11.100 operações concluídas na gestão e 12.062 na partida.
Razões C++ new/operação: 7,567567568 e 3,943210081. **A razão completa de
alocações reais/original é UNKNOWN**: 6.300/10.810 desses eventos são conversões
genéricas que podem não alocar, e os internos da API/BCL nativa não estão
integralmente instrumentados como C#. Não chamar essas razões de equivalência
do heap CLR.

Os vinte maiores por contagem e por bytes, para ambos os cenários, estão em
[runtime-allocation-top20.md](runtime-allocation-top20.md), com símbolos completos
no JSON adjacente. Os principais grupos restantes são registros do coletor,
strings, batches de desenho, adaptadores/callbacks e fontes. Misturas entre
objeto original e control block estão explicitamente marcadas.

Na amostragem da partida, as funções SRW identificadas tinham peso de
496.529 µs na baseline e 919 µs agora. _Decref passou de 86.480 para 89.452 µs.
Esses são pesos amostrados em símbolos, não medidas completas de locks ou de
instruções atômicas inlined. O custo completo de refcount permanece UNKNOWN.

O inventário identifica 24 sítios consumidores de criação de workers: 18 no
jogo e seis na KairoLibrary, descontados construtores intermediários e o
wrapper CurrentThread. Formulários, callbacks e saves atravessam threads.
Não foi aplicada contagem não atômica nem retirada global de locks.
Eliminação generalizada de temporários e empréstimo de parâmetros continuam
pendentes; a microsonda de referências não equivale a integração no emissor.

## 5. TOOLCHAIN E BINÁRIO

MSVC 14.51.36231, Release /O2; devkitARM r68/GCC 16.1.0, libctru 2.7.1;
Azahar 2126.2. ARM: -O2, exceções/RTTI, sem fast-math, remoção de seções não
usadas. O novo .3dsx de diagnóstico tem 23.318.396 bytes; o anterior medido
tinha 22.287.380 bytes. As versões não são uma comparação isolada de flag.

| Região ARM atual | Bytes |
|---|---:|
| .text | 20.643.008 |
| .rodata | 897.676 |
| .ARM.extab | 1.327.656 |
| .ARM.exidx | 167.760 |
| .data | 9.836 |
| .bss, não armazenada como payload | 75.400 |

Na visão por símbolos da .text: jogo/helpers 15.227.468; portáveis 1.350.932;
runtime 1.213.576; templates/biblioteca C++ 837.008; API Kairo 252.328;
plataforma 10.128; sem atribuição nessa visão 1.739.984; aliases ambíguos 8.984;
padding/símbolos sem tamanho 2.600. O link map fornece uma visão complementar
por bibliotecas; não somar as duas classificações.

Efeitos isolados de -Os, LTO e retirada do descarte de seções: **não medidos**.
As opções foram preparadas. O specs do SDK também habilita --gc-sections;
apenas retirar a opção explícita do CMake não basta para testar sua ausência.

## 6. COMPONENTES EXTERNOS E MEMÓRIA

O benchmark identificou model=4/New 3DS XL e new3ds=1, consultas com retorno
zero. Após bootstrap, os intervalos conhecidos somaram 2.849.280 bytes de
texturas e 629.777 de heap gerenciado; áudio/fontes registrados eram zero
nesse ponto. Não são o consumo de uma partida, RSS ou atribuição dos antigos
78 MB. Fragmentação e categorias no ponto da falha anterior continuam UNKNOWN.

O SD local foi preparado com 3.027 registros, 3.028 arquivos de catálogo/payload
e 30.349.102 bytes, a partir do APK verificado. Nada disso foi publicado.
O .3dsx tem SHA-256
`f61d323a0a9a0de02ceb74efc400a6f579bdde0b9055f358ebbe91963755909e`.
Ele é diagnóstico, com medição de categorias; não é um benchmark de hardware
concluído. Procedimento: arm11-hardware-benchmark.md. Velocidade do Azahar não
equivale à do aparelho. Perfis antigo/New e hardware: tempos válidos UNKNOWN.

## 7. BLOQUEIOS E ESTADO DE ENTREGA

Parada solicitada pelo usuário. Nenhum benchmark, emulador ou coletor WPR
permaneceu em execução no encerramento. Código, fontes gerados, logs e recibos
foram preservados. Não houve commit final sem verificação completa; b2acf47
continua sendo o último checkpoint publicado. PROGRESS do checkpoint não é
prova de verificação das mudanças locais posteriores.

Faltam localizar a chamada interna que impede o primeiro frame ARM, concluir
a atribuição completa de alocações/refcount, testar as variantes de tamanho,
medir ambos os perfis e validar o pacote de hardware. Não há autorização ou
arquivo novo exigido do usuário neste momento.

## 8. RECOMENDAÇÃO PARA RETOMADA

1. Executar a variante privada com marcadores de formulários, já compilada,
   para estreitar host_update. Não repetir apenas reinícios do mesmo binário.
2. Atacar os custos introduzidos restantes com provas de vida/ownership;
   manter refcount atômico e bounds checks. Conferir também String.Empty e os
   adaptadores recriados por lookup antes de ampliar caches.
3. Revalidar o conjunto completo antes de publicar, então medir -Os/LTO,
   ambos os perfis ARM e preparar a versão de benchmark para hardware.

A retomada depende de novo prompt do usuário.
