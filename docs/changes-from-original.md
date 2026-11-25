# Mudanças em relação ao original

Lista do que o port faz de forma diferente do Pocket League Story original
(Android) e da tag `v1.0.0-faithful`, que o reproduz. Cada item tem a decisão do
usuário que o autoriza e a etapa em que entra. Uma mudança de comportamento no
código do jogo entra aqui no mesmo commit que a faz (`AGENTS.md`, seção 9), com o
commit, o que muda, a decisão e como verificar. Mudanças só de forma (formatação,
comentários, nomes locais) não entram: não mudam o código de máquina.

| Item | O que muda | Decisão | Etapa / estado |
|---|---|---|---|
| Registro de eventos com custo do fim do mês | O registro de eventos passa a incluir o custo de fim de mês | B.5, 2026-11-17 | Fase 3, etapa 2 (pendente) |
| Idioma padrão | Console em idioma diferente de japonês e inglês inicia em inglês | B.6, 2026-11-17 | Fase 3 (pendente; a escolha atual do idioma está em `docs/design/`) |
| Botões do 3DS | B aciona só o rótulo de voltar e não age no mapa nem na partida; START abre o diálogo de encerramento (`DoTerminationDialog`), inclusive no título | B.2, 2026-11-17 | Protótipo da etapa 1 (`src/main/pc_dual_screen.cpp`, feito) |
| Circle pad | Etapa 1: imita o arrasto original com o cursor seguindo o centro; etapa 2: câmera independente | B.1, 2026-11-17 | Etapa 1 no protótipo; etapa 2 pendente |
| Barra de rótulos (`GamePad`) | Vai para a tela de baixo | B.3, 2026-11-17 | Feito no protótipo PC em 2026-11-20; confirmado na tentativa 656; CTR pendente |
| Largura de 400 na tela de cima | O mapa ocupa 400×240 no protótipo atual; a limitação observada em B.4 é histórica, não um bloqueio atual da gestão | B.4, 2026-11-17 | Confirmado no PC, tentativa 656 (2026-11-24); partida e CTR não verificados nessa execução |
| L/R | Zoom no mapa (pinça sintetizada) | B.7, 2026-11-17 | Feito no protótipo PC em 2026-11-19; CTR pendente |
| Serviços Android | Removidos, com políticas offline (registro local; cobrança indisponível sem conceder itens pagos; anúncios removidos) | decisões da Fase 2 | Feito |

## Entrada independente do circle pad — 2026-11-24

Autorização explícita do usuário: fornecer dois eixos inteiros por quadro na API,
sem alterar runtime, coletor, formulários ou desenho. `read_circle_pad()` em
`src/kairo/api/circle_pad.hpp` retorna `CirclePadState { x, y }`, na faixa
−32767 a +32767; positivo significa direita/baixo. A zona morta SDL é 12000
por eixo, com reescala linear do restante da faixa. I/J/K/L fornecem inclinação
máxima; teclas opostas se cancelam. Sem produtor (nulo/CTR), o estado é zero.

O PC deixa de sintetizar arraste a partir do circle pad. Este commit prepara a
entrada; o consumo pela câmera do jogo entra no commit seguinte. L/R mantêm o
caminho de pinça existente. Verificação: build, check, smoke e teste local dos
65536 valores SDL (faixa, zona morta, monotonicidade e leitura atômica dos eixos).
Não altera textos do jogo nem o formato de save.
