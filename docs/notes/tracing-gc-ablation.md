# Ablação dos cinco kernels — 2026-11-11

Medição isolada, não tempo de frame nem desempenho ARM. Os dez executáveis
preparados no checkpoint anterior foram executados por
`tools/gc-ablation/measure.py`: auditoria de faixa e três passagens em ordens
alternadas, cinco lotes de 16.000 chamadas por método e passagem. A tabela
usa a mediana dos quinze lotes. O relatório autenticado permanece em
`build/gc-ablation/measurement.json`.

`current` no script significa o executável **histórico com contagem de
referências**, não o runtime de produção desta rodada. `baseline` significa
a projeção isolada do protótipo de rastreamento. Não confundir essas duas
colunas com um replay do jogo integrado.

| Variante (ns/chamada) | Camera.ConvertScreenToCamera | Team.Cal_evaCoatMulti9block | Team.GetSum | GameUtil.ChRectHitRect | AppData.InsertGameObject |
|---|---:|---:|---:|---:|---:|
| Mono x86 Unity | 7,025 | 39,25625 | 40,73125 | 10,04375 | 301,66875 |
| Histórico com refcount | 128,2875 | 1158,325 | 1012,98125 | 6,7125 | 2943,725 |
| Protótipo rastreamento | 47,79375 | 328,13125 | 250,73125 | 5,79375 | 201,4875 |
| Sem inicialização de tipos | 23,84375 | 135,93125 | 110,0125 | 3,66875 | 172,81875 |
| Lambdas com forceinline | 45,775 | 303,0625 | 246,36875 | 5,8125 | 132,35 |
| Conversão sem checagem (só medição) | 38,5875 | 296,80625 | 214,3125 | 5,83125 | 168,3625 |
| Limites constantes da conversão | 45,15 | 275,6125 | 207,3875 | 5,88125 | 182,0125 |
| Sem teste de nulo (só medição) | 41,1875 | 225,23125 | 195,85 | 6,0375 | 125,55625 |
| Sem teste de limites (só medição) | 37,1875 | 228,775 | 180,2125 | 5,8375 | 106,225 |
| fp:precise (só medição) | 43,6625 | 298,25625 | 229,06875 | 5,875 | 171,2375 |
| C++ manual com verificações | 41,9125 | 333,85625 | 236,94375 | 6,03125 | 112,33125 |

As variantes C++ preservaram os 80 resultados capturados. O Mono coincide
em 69/80; os 11 restantes pertencem a Cal_evaCoatMulti9block e são a
divergência de ponto flutuante ainda submetida ao teste Android. Portanto,
a razão contra o Mono nesse método não prova fidelidade numérica.

O piso manual é o piso **desta implementação com os mesmos helpers e
verificações**, não um limite teórico: em Cal ele foi mais lento que a
baseline, e em Rect também não melhorou. A auditoria de conversão aprovou
os valores capturados; isso não permite retirar checagens de valores gerais.

Razão protótipo/Mono, na ordem da tabela: 6,80338078291815;
8,35870084381468; 6,155746509129967; 0,5768512756689484;
0,6679097520044752. A vantagem frente ao refcount é comprovada, mas paridade
com o Mono ainda não foi obtida nos três primeiros kernels.

## Interpretação e limites de adoção

- Inicialização de tipos domina parte relevante do custo nos dois kernels
  Team. A variante suprimiu todas as inicializações e serve como ablação;
  não pode ser adotada literalmente para tipos com inicializadores observáveis.
- Expandir auxiliares imediatos beneficia principalmente InsertGameObject.
  O atributo MSVC da experiência não é uma implementação portátil do emissor.
- Substituir o cálculo de potências de dois por limites constantes preserva
  os testes NaN, overflow e faixa da conversão. É candidata a adoção após
  as fixtures de conversão; ganho no frame integrado deve ser medido separado.
- Nulo, limites e fp:precise permanecem experiências, sem adoção automática.

Variação entre lotes existe (em especial Camera e InsertGameObject). Todos
os lotes e ordens foram preservados; não foi selecionado somente o melhor.
Os binários, PDBs, entradas e resultados privados não entram no Git.

## Tamanho da seção .text

Bytes virtuais dos executáveis isolados, incluindo harness e helpers:

| Variante | .text (bytes) |
|---|---:|
| Baseline rastreamento | 68449 |
| Sem inicialização de tipos | 61489 |
| Lambdas forceinline | 66577 |
| Auditoria de conversão | 68673 |
| Conversão sem checagem | 68257 |
| Limites constantes da conversão | 68417 |
| Sem nulo | 66129 |
| Sem limites | 67441 |
| fp:precise | 68177 |
| Manual | 67233 |

O executável histórico de refcount tem 984353 bytes de .text, mas inclui
uma composição de runtime/harness diferente e não isola só os cinco corpos.
Os 8564 bytes da seção PE do oracle Mono contêm IL/metadados, não o código
nativo produzido pelo JIT; não são comparados como tamanho de código x64.
