# Notificação de condition variable no benchmark ARM11

## Evidência da rodada

O primeiro frame do backend nulo não terminou. A inspeção por RSP do Azahar
observou a thread principal em uma espera de `gc_safepoint`, outra esperando
`IApplication.RunOnUiThread`, e o estado de coleta já desativado. A leitura de
endereços da pilha é diagnóstico, não um perfil de CPU nem prova isolada da
causa.

Um programa independente do jogo foi então compilado com o mesmo devkitARM,
libctru e biblioteca C++. Dois trabalhadores incrementam `ready` sob um mutex,
esperam `go` na mesma condition variable, incrementam `done` e notificam. A
thread principal espera ambos prontos, define `go`, chama `notify_all` e espera
ambos terminarem, com prazo de dois segundos. Não há assets, coletor ou API
Kairo nesse programa.

| Variante | Resultado medido |
|---|---|
| MSVC PC, espera indefinida com predicado | 100/100 rodadas |
| devkitARM r68/libctru 2.7.1/Azahar 2126.2, mesma espera | `DONE_TIMEOUT 0 done=1` |
| Mesmo ARM11/Azahar, predicado reavaliado a cada 1 ms | 100/100 rodadas |

Os executáveis, fontes sintéticos e logs estão localmente em
`build/arm11-condvar-probe/`. Não atribuir ainda a causa exclusivamente ao
emulador ou ao SDK: o resultado em hardware real é **UNKNOWN**.

## Inspeção da implementação

O caminho de `std::condition_variable::notify_all` no ELF passa por
`pthread_cond_broadcast`, `__libc_cond_broadcast`, `__syscall_cond_broadcast` e
`CondVar_WakeUp` com argumento -1. A ponte de libctru encaminha a chamada a
`CondVar_Broadcast`; a implementação ajusta o contador de esperas e sinaliza o
árbitro de endereços. Fontes oficiais consultados:

- [libctru 2.7.1, syscalls.c](https://github.com/devkitPro/libctru/blob/v2.7.1/libctru/source/system/syscalls.c)
- [libctru 2.7.1, synchronization.c](https://github.com/devkitPro/libctru/blob/v2.7.1/libctru/source/synchronization.c)

Esses arquivos foram lidos para diagnóstico; nenhum trecho foi incorporado ao
port nesta investigação.

## Proteção candidata

Reavaliar periodicamente o predicado enquanto mantém a disciplina de mutex
evita depender de uma notificação perdida para sair da espera. A condição
continua obrigatória, notificações continuam podendo acordar imediatamente,
e não se permite uma execução antecipada do código protegido. O custo de
despertar periodicamente pertence às threads bloqueadas e precisa ser medido.

O teste sintético aprova essa variante; integração no runtime, testes do
coletor e boot do jogo são etapas distintas. Nenhum ganho de CPU do jogo é
inferido das 100 rodadas sintéticas.

## Integração nesta rodada

`platform_condition.hpp` centraliza a espera protegida. No ARM, reavalia o
predicado a cada 1 ms; no PC mantém a operação original. Foi aplicado às
esperas indefinidas do coletor e da inicialização de tipos. O despacho de UI
usa a variante de future, que conserva espera até conclusão e a propagação de
exceções por `get`. Não há timeout funcional nem acesso sem mutex.

`tests/kairo/platform_wait.cpp` completou 100/100 rodadas no Azahar New 3DS,
com dois waiters por condição e um packaged task/future por rodada. O recibo
privado está em `build/arm11-condvar-probe/integrated-receipt.json`.
No PC, os 29 asserts de UI/GC e 24 casos de inicialização de tipos passaram.
O boot completo continua sendo uma verificação separada.
