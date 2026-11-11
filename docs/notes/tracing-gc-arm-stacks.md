# Limites de pilha para o coletor no ARM11

Estado: leitura do SDK concluída; integração e execução do coletor ARM ainda
pendentes. Não é evidência de boot nem de desempenho no hardware.

SDK examinado: libctru 2.7.1. Cópias locais e SHA-256 dos arquivos consultados
estão em `build/libctru-gc-audit/provenance.json`. Nenhum binário do jogo é
necessário para esta análise.

## Thread principal

[`system/allocateHeaps.c`](https://github.com/devkitPro/libctru/blob/v2.7.1/libctru/source/system/allocateHeaps.c)
reserva o heap e inicialmente define `fake_heap_start = __ctru_heap`.
[`system/stack_adjust.s`](https://github.com/devkitPro/libctru/blob/v2.7.1/libctru/source/system/stack_adjust.s)
troca SP antes de executar `__appInit` e os inicializadores C++:

```
SP = align_up(__ctru_heap + __stacksize__, 8)
fake_heap_start = SP
```

Portanto, o limite inferior é `__ctru_heap`, e o superior é essa expressão,
não o SP observado dentro de `main`. O símbolo fraco `__stacksize__` tem valor
padrão de 32 KiB; o coletor precisa ler o valor efetivamente ligado. O limite
superior também não deve ser deduzido de um `fake_heap_start` posteriormente
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

O TLS fica acima de `stacktop`. Ele não deve entrar na varredura conservadora
da pilha; referências gerenciadas em TLS precisam de suas próprias raízes.
[`internal.h`](https://github.com/devkitPro/libctru/blob/v2.7.1/libctru/source/internal.h)
define o layout privado. `threadGetCurrent()` distingue o worker da thread
principal, mas a API pública não fornece seus limites de pilha.

Uma integração que leia esse layout deve fixar a revisão do SDK e validar o
layout durante o build. Não basta assumir 32 KiB para todos os workers nem
varrer toda a região de heap devolvida por uma consulta de memória.

## Validação ainda necessária

- Conferir o layout ligado pelo compilador ARM e os limites de cada worker.
- Auditar o `setjmp` do newlib efetivamente instalado: registradores salvos,
  spills exigidos pela ABI e ponteiros internos.
- Executar a fixture com referência mantida somente em registrador ARM,
  além das fixtures de coleta cooperativa e espera nativa.
- Executar o jogo e o benchmark nos dois perfis do emulador; posteriormente
  no New 3DS real. Velocidade do emulador não comprova o orçamento de 50 ms.

## Despejo de registradores examinado

O objeto `libc_a-setjmp.o` da biblioteca instalada
`devkitARM/arm-none-eabi/lib/armv6k/fpu/libc.a` foi desmontado localmente.
`setjmp` armazena r4–r11, SP, LR e d8–d15; `longjmp` restaura o mesmo conjunto.
Os registradores voláteis precisam ter os valores vivos preservados pelo
chamador segundo a ABI antes da chamada. Evidência e hashes:
`build/libctru-gc-audit/setjmp-evidence.json` e `setjmp-disassembly.txt`.
Isso é inspeção do binário do SDK, não execução da fixture ARM nem prova de
que o jogo já sobrevive à coleta nessa plataforma.
