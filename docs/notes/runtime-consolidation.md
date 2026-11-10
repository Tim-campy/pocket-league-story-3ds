# Consolidação anterior à nova medição do runtime

Base publicada: `07e50fb`. Foram consolidados backend nulo, preparação ARM11,
leitor de amostragem ETW, sondas de alocação, publicação atômica da inicialização
de tipos e manutenção de registros fracos expirados do coletor. A lógica gerada
do jogo não foi alterada.

Verificação completa: **104/104 checks PASS**, incluindo 76 testes de repositório.
Recibo gerado: `config/phase2-verification.json`. Fora dessa suíte, o executável
recém-compilado `build/null-pc/null_backend_test.exe assets` passou 111 checks,
com uma fonte e 27 arquivos de áudio. Isso não promove a fronteira inteira.

A primeira tentativa da suíte terminou por timeout de compilação do diferencial
portável após 180 segundos, sem resultado de comparação. O limite dessa
compilação foi ampliado para 600 segundos; nenhuma opção do compilador nem
comparador foi relaxada. Na nova tentativa, a compilação levou 87,790052 s e a
execução nativa 26,589302 s. O diferencial manteve 2617/2618 observações e a
diferença de plataforma já registrada. A suíte completa foi reiniciada.

O gerador de PROGRESS.md foi corrigido para não declarar ausência do SDK,
ausência do marco de partida completa ou zero métodos executados. Estados e
contagens continuam provenientes dos recibos: 1768/1958 métodos compilados,
751 em runs, 374 métodos portáveis compilados/exercitados, 252 símbolos da
fronteira verificados.

[Limpeza e inventário](runtime-cleanup.md): 16 arquivos, 123205283 bytes.
Executáveis e símbolos da baseline, ETLs, saves e provas de execução preservados.

As medições anteriores ao caminho rápido de inicialização e à manutenção do
registro estão em [phase2-null-benchmark.md](phase2-null-benchmark.md). O ganho
no jogo completo e a execução do novo binário ARM11 continuam pendentes neste
checkpoint; não inferir desempenho ARM11 a partir do PC. O levantamento inicial
de compartilhamento entre threads está em [runtime-thread-inventory.md](runtime-thread-inventory.md).
