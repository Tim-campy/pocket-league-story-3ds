# Ablação isolada dos cinco kernels

Experimento local, sem ligação ao jogo. Usa a projeção histórica autenticada
em `build/gc-prototype/` e as mesmas 80 entradas privadas. O código escrito à
mão é apenas o piso experimental solicitado; nunca substitui código gerado.
Não há assets nem entradas capturadas neste diretório.

Sequência: `python tools/gc-ablation/prepare.py`, `build.py`, `measure.py`,
usando o caminho completo do diretório para cada script. A preparação exige
diretório de saída novo. A medição recusa compilador/emulador em execução,
faz três execuções em ordens diferentes e compara os 80 resultados exatos.

Matriz: baseline, inicializadores omitidos, lambdas com forceinline,
conversão numérica simples, nulo omitido, limites omitidos, `/fp:precise`,
piso escrito à mão. Uma variante adicional troca somente o cálculo de
constantes `ldexp` por limites `constexpr`, preservando as verificações.
A conversão simples só roda depois de uma variante de auditoria provar
que todos os argumentos executados são finitos e representáveis.

Não inferir fidelidade geral de igualdade nessas entradas. Nulo, limites e
ponto flutuante alterados não são candidatos à adoção automática. O resultado
é custo dos kernels nessa projeção, não custo por frame do runtime convertido.
