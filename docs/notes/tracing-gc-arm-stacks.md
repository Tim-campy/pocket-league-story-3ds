# Limites de pilha para o coletor no ARM11

Estado: integraÃ§Ã£o do coletor ARM validada por 60 assertions nos perfis New
3DS e 3DS antigo do Azahar 2126.2, ambos com clock e limite de velocidade
em 100%. NÃ£o Ã© evidÃªncia de boot do jogo nem de desempenho no hardware.

SDK examinado: libctru 2.7.1. CÃ³pias locais e SHA-256 dos arquivos consultados
estÃ£o em `build/libctru-gc-audit/provenance.json`. Nenhum binÃ¡rio do jogo Ã©
necessÃ¡rio para esta anÃ¡lise.

## Thread principal

[`system/allocateHeaps.c`](https://github.com/devkitPro/libctru/blob/v2.7.1/libctru/source/system/allocateHeaps.c)
reserva o heap e inicialmente define `fake_heap_start = __ctru_heap`.
[`system/stack_adjust.s`](https://github.com/devkitPro/libctru/blob/v2.7.1/libctru/source/system/stack_adjust.s)
troca SP antes de executar `__appInit` e os inicializadores C++:

```
SP = align_up(__ctru_heap + __stacksize__, 8)
fake_heap_start = SP
```

Portanto, o limite inferior Ã© `__ctru_heap`, e o superior Ã© essa expressÃ£o,
nÃ£o o SP observado dentro de `main`. O sÃ­mbolo fraco `__stacksize__` tem valor
padrÃ£o de 32 KiB; o coletor precisa ler o valor efetivamente ligado. O limite
superior tambÃ©m nÃ£o deve ser deduzido de um `fake_heap_start` posteriormente
alterado pelo alocador.

## Workers

[`thread.c::threadCreate`](https://github.com/devkitPro/libctru/blob/v2.7.1/libctru/source/thread.c)
calcula, com `a = max(__tdata_align, 8)`:

```
stackoffset = align_up(sizeof(Thread_tag), a)
allocsize = align_up(stackoffset + stack_size, a)
bottom = address(Thread_tag) + stackoffset
top = Thread_tag.stacktop = address(Thread_tag) + allocsize
```

O TLS fica acima de `stacktop`. Ele nÃ£o deve entrar na varredura conservadora
da pilha; referÃªncias gerenciadas em TLS precisam de suas prÃ³prias raÃ­zes.
[`internal.h`](https://github.com/devkitPro/libctru/blob/v2.7.1/libctru/source/internal.h)
define o layout privado. `threadGetCurrent()` distingue o worker da thread
principal, mas a API pÃºblica nÃ£o fornece seus limites de pilha.

Uma integraÃ§Ã£o que leia esse layout deve fixar a revisÃ£o do SDK e validar o
layout durante o build. NÃ£o basta assumir 32 KiB para todos os workers nem
varrer toda a regiÃ£o de heap devolvida por uma consulta de memÃ³ria.

## ValidaÃ§Ã£o realizada

`src/runtime/ctr_stack_bounds.hpp` descobre os limites da thread principal
e dos workers. `tools/test_ctr_stack_layout.py` fixa libctru 2.7.1 e compila
assertions de tamanho e offsets contra o `internal.h` oficial, SHA-256
`29b73a8532fec06e7eb3b24eae0a4dac7353a72fcde75b21c05b63f1fc4d2a01`.
O build ARM executa essa verificaÃ§Ã£o antes de compilar o jogo.

`tools/build_ctr_gc_fixture.py` e `tools/run_ctr_gc_fixture.py` constroem e
executam as mesmas fixtures usadas no PC, com dois testes adicionais de
referÃªncia mantida somente em r4 ou d8. O assembly limpa os registradores
volÃ¡teis e sobrescreve a Ã¡rea de pilha usada na preparaÃ§Ã£o antes de coletar.
Nos dois perfis foram observadas pilhas de 32.768 bytes tanto na thread
principal quanto no worker. O limite Ã© descoberto, nÃ£o fixado nesse tamanho.

Recibos privados: `build/ctr-gc-fixture/run-new-9/result.json` e
`build/ctr-gc-fixture/run-old-1/result.json`. SHA-256 do `.3dsx` testado:
`e7d1e8cb210fb1e67f1694fa10ba8f812c1e13b0510ed8f51e5f945d507ebee3`.
No PC, as 58 assertions correspondentes tambÃ©m passaram.

## Falhas encontradas e correÃ§Ãµes

1. A thread principal recebe ID zero pelo caminho
   `pthread_self â†’ __syscall_thread_self â†’ threadGetCurrent`. O coletor
   confundia esse ID com o identificador vazio do coletor inativo e recusava
   alocaÃ§Ãµes. A comparaÃ§Ã£o agora sÃ³ vale quando existe coleta solicitada.
2. Uma espera indefinida de worker ficou bloqueada depois de o coletor
   terminar. O snapshot GDB mostrou a principal aguardando join e o worker
   em `Heap::safepoint â†’ condition_variable â†’ CondVar_WaitTimeout`, com
   timeout infinito. No ARM, as esperas do coletor reavaliam o mesmo
   predicado protegido por mutex a cada 1 ms; nenhuma condiÃ§Ã£o de parada
   cooperativa foi removida. EvidÃªncia privada: snapshots
   `workers-thread-states-3.json` sob `build/ctr-gc-fixture/`.
3. Nas fixtures, `std::this_thread::yield` chegava a `sched_yield` sem
   implementaÃ§Ã£o efetiva e impedia outra thread de progredir. O helper de
   teste usa sleep de 1 ms no ARM. Pilhas reutilizadas tambÃ©m conservavam
   endereÃ§os de objetos de testes anteriores: o teste de descarte usa uma
   thread isolada com Ã¡rea de preparaÃ§Ã£o sobrescrita, preservando a
   assertion de zero objetos e zero raÃ­zes. Isso nÃ£o altera o jogo.

As tentativas anteriores que falharam permanecem nos diretÃ³rios privados;
nÃ£o sÃ£o contadas como aprovaÃ§Ã£o. A integraÃ§Ã£o de recursos nativos continua
coberta pelas fixtures `native_lifetime` e `retained_memory_and_growth`.

## ValidaÃ§Ã£o ainda necessÃ¡ria

- Executar o jogo e o benchmark nos dois perfis do emulador; posteriormente
  no New 3DS real. Velocidade do emulador nÃ£o comprova o orÃ§amento de 50 ms.

## Despejo de registradores examinado

O objeto `libc_a-setjmp.o` da biblioteca instalada
`devkitARM/arm-none-eabi/lib/armv6k/fpu/libc.a` foi desmontado localmente.
`setjmp` armazena r4â€“r11, SP, LR e d8â€“d15; `longjmp` restaura o mesmo conjunto.
Os registradores volÃ¡teis precisam ter os valores vivos preservados pelo
chamador segundo a ABI antes da chamada. EvidÃªncia e hashes:
`build/libctru-gc-audit/setjmp-evidence.json` e `setjmp-disassembly.txt`.
Essa inspeÃ§Ã£o Ã© complementada pelas fixtures r4/d8 acima. Nos pontos seguros
opacos, os valores vivos nos registradores de chamador precisam ser
preservados pelo chamador segundo a ABI; o build atual nÃ£o usa LTO. Ainda
nÃ£o Ã© prova de que o jogo completo sobrevive Ã  coleta nessa plataforma.


## Encerramento de threads e registros do coletor

O primeiro boot com rastreamento chegou a `host_update`, mas falhou em
`Managed worker did not reach heap inspection safepoint`. Duas execuções
foram preservadas em `build/arm-tracing-new-menu-1` e
`build/arm-tracing-new-menu-probe-1`. O snapshot de todas as threads mostrou
main, APT e um worker; um registro de thread já encerrada permanecia no GC.

A fixture nativa mínima mediu um objeto TLS construído e zero destruídos
após `join`, tanto no retorno normal quanto com `pthread_exit`.
O `pthread_key_create` do SDK fixado devolve ENOSYS (88); `pthread_getspecific`
devolve nulo. A implementação de `__cxa_thread_atexit` depende desses hooks.
O caminho de saída da libctru não executa a lista de destruidores C++.
Fonte oficial: [libctru v2.7.1, syscalls.c](https://github.com/devkitPro/libctru/blob/v2.7.1/libctru/source/system/syscalls.c).

`src/runtime/ctr_thread_lifecycle.cpp` restaura a lista TLS por thread em
ordem inversa de registro. O link envolve `__cxa_thread_atexit`,
`__syscall_thread_create`, `__syscall_thread_exit` e `exit`. Não interrompe
threads nem altera os predicados de parada do GC. Os executáveis são
estáticos; nenhum módulo pode descarregar antes de seus destruidores TLS.
A fixture `ctr_tls_lifecycle.cpp` passa 14 verificações em cada perfil:
retorno normal, saída explícita, dois workers concorrentes, ordem LIFO e
saída da thread principal antes dos destruidores estáticos.

A mudança de layout revelou uma fragilidade da fixture `runtime_weak_cache`:
a asserção 42 falhou; trocar apenas a thread coletora não resolveu.
Instrumentar a enumeração de raízes fez a falha desaparecer. Portanto,
a origem exata da falsa retenção da versão sem instrumentação permanece
UNKNOWN; não se atribui a ela uma correção de produção. O teste agora usa
armazenamento exclusivo para o nó e uma thread coletora fresca, separando
a semântica de identidade fraca da reutilização de endereços pelo alocador
nativo. Todas as 60 asserções continuam exigidas e passam sem instrumentação
nos perfis New e antigo (`run-new-16`, `run-old-4`). Os testes específicos de
raízes em pilhas, registradores, ponteiros internos e workers continuam
independentes e inalterados.

A primeira verificação completa também expôs retenção conservadora no
descarte exato após `concurrent_collectors` no Windows (asserção 33).
Esse descarte agora usa a mesma thread coletora fresca, com a thread
chamadora fora do conjunto de raízes; a asserção de zero objetos permanece.
58 verificações PC e 60 ARM passaram após esse isolamento.


## Boot do jogo após restaurar TLS

A imagem `97e9707cef80a2962d90d1a4057b91e8a63908b5d3784f62b6da183c52c378a0`
completou o primeiro frame e 960 frames no perfil New, a 100%. A primeira
execução atingiu o timeout de 300 segundos antes de imprimir a janela.
A segunda, com timeout ampliado e snapshots GDB, concluiu os 300 registros
661–960; todos ainda estavam em BootForm (id 0), não no menu (id 4).
O runner marcou `UNQUALIFIED_OUTPUT`. Não existe tempo de menu válido.

Snapshots das três threads vivas: main em `CondVar_WaitTimeout`, thread APT
em `svcWaitSynchronizationN`; worker em `FSFILE_Close`, `FSUSER_OpenFile` e
`_memalign_r` em instantes diferentes. Endereços candidatos na pilha apontam
para `SupervisorData.Load`, `StringUtil.Split`, `String::literal` e
`Heap::adopt`; são candidatos de pilha, não um unwind completo provado.
O worker continua fazendo trabalho; essas amostras não provam deadlock.
A hipótese seguinte é que o carregamento mais lento perde os eventos do
replay (SELECT no frame 120). Um replay privado com atraso uniforme de
2400 frames serve apenas para diagnosticar isso, nunca para substituir a
comparação de CPU da janela original. A primeira preparação desse replay
usou CRLF e foi recusada por `Unknown source Canvas key`; a preparação
seguinte preserva LF, como o produtor original.


O atraso uniforme de 2400 frames não resolveu: os 300 registros 3061–3360
continuaram em BootForm. Execução privada `arm-tracing-new-delayed-menu-2`,
1035,9379999998491 segundos de host, com verificação concorrente; não é uma
medição controlada. Essa hipótese simples de perda das teclas foi refutada
para a execução. O próximo diagnóstico lê estado/contador/exceção do BootForm
em um host privado, sem editar os corpos gerados.

O recibo da primeira sonda `arm-boot-state/new-1` foi descartado: o host foi
recompilado enquanto a execução terminava e o runner registrou o hash novo.
`run_arm11_null.py` agora conserva o hash lançado e termina como
`ARTIFACT_CHANGED` se o arquivo mudar, sem emitir estatística de tempos.
Duas fixtures de runner simulado cobrem arquivo estável e substituição
entre lançamento e leitura dos resultados. A verificação completa foi
interrompida após esse achado e reiniciada com a correção; não foi marcada
como aprovada por reaproveitamento de recibos.

## Contador de recursos e custo da leitura

A sonda autenticada `arm-boot-state/new-2` observou BootForm no estado 1,
com progresso 6/30, 14/30 e finalmente 22/30, sem exceção. A sonda seguinte
localizou `AppData.resCom2_` em 78/279 recursos. O host lê esses contadores
com os workers parados pelo protocolo do coletor; nenhum corpo gerado foi
editado para a observação.

`arm-resource-cost/new-1` usou a imagem
`e530d091624e894df2e784d6a6542af17508f671e4a7ec047a2592a748d0296d`,
inalterada do lançamento ao encerramento. Os 300 frames 661–960 continuaram
em BootForm; resultado `UNQUALIFIED_OUTPUT`, 319,875 segundos de host.
O log mostra a releitura da mesma imagem de 124800 bytes, repetidamente,
com `Catalog::read` consumindo aproximadamente 102–110 ms nos exemplos
finais. Um exemplo exato: caminho 36308536 ns, abertura 16677774 ns,
leitura 23596044 ns, teste de EOF 739191 ns, SHA-256 27228222 ns;
total 104549767 ns. São tempos do relógio emulado, com verificação
concorrente no host; não são medidas de velocidade do aparelho.

O custo inclui a consulta de existência do caminho SD seguida da abertura,
além da leitura e validação integral. O custo restante em `Image.Load`
(cópia gerenciada, hash do PNG, criação da imagem e registro no GC) ainda
não foi isolado. A relação causal exata com o retorno de 150 ms em
`ResourceManager.LoadStart` continua hipótese nesta execução, embora a
repetição do recurso esteja comprovada. O limite e os índices originais
permanecem intactos, conforme a decisão do usuário. Não foi removida
nenhuma validação de caminho, tamanho, nulo, limites ou integridade.

O perfil antigo repetiu o resultado: `arm-resource-cost/old-1`, mesma
imagem, clock e limite 100, 300 frames ainda em BootForm, estado
`UNQUALIFIED_OUTPUT`, 323,5319999998901 segundos de host. As durações de
execução dos dois perfis não são tempos de frame de menu ou partida e não
devem ser comparadas ao orçamento de 50 ms.

## Sonda complementar de Image.Load

`arm-image-cost/new-1` adicionou temporizadores somente à API nativa em uma
cópia privada. Imagem imutável
`7369f4e256b880bd070129cf809e0cacadb2b0d181148531e7b7aea42d8ecc78`;
300 frames ainda em BootForm, `UNQUALIFIED_OUTPUT`. Uma chamada do recurso
repetido mediu cópia do PNG 1857143 ns, hash/busca 8344193 ns,
leitura/criação 125154551 ns, total 135355887 ns. Outra totalizou
119429743 ns. Logo, atribuir o excesso de 150 ms somente a Image.Load
foi refutado nesses exemplos. Faltam os comandos de preparação e pós-carga
em ResourceManager.LoadStart. Nenhuma otimização ou mudança no yield foi
adotada a partir desta sonda. Logs e fonte instrumental permanecem locais.
