# Mudanças em relação ao original

Lista do que o port faz de forma diferente do Pocket League Story original
(Android). Cada item tem a decisão do usuário que o autoriza e a etapa em que
entra. Antes do congelamento, a lógica do jogo não muda (`AGENTS.md`); itens
que tocam o código traduzido esperam o congelamento.

| Item | O que muda | Decisão | Etapa / estado |
|---|---|---|---|
| Registro de eventos com custo do fim do mês | O registro de eventos passa a incluir o custo de fim de mês | B.5, 2026-11-17 | Fase 3, etapa 2 (pendente) |
| Idioma padrão | Console em idioma diferente de japonês e inglês inicia em inglês | B.6, 2026-11-17 | Fase 3 (pendente; a escolha atual do idioma está em `docs/design/`) |
| Botões do 3DS | B aciona só o rótulo de voltar e não age no mapa nem na partida; START abre o diálogo de encerramento (`DoTerminationDialog`), inclusive no título | B.2, 2026-11-17 | Protótipo da etapa 1 (`src/main/pc_dual_screen.cpp`, feito) |
| Circle pad | Etapa 1: imita o arrasto original com o cursor seguindo o centro; etapa 2: câmera independente | B.1, 2026-11-17 | Etapa 1 no protótipo; etapa 2 pendente |
| Barra de rótulos (`GamePad`) | Vai para a tela de baixo | B.3, 2026-11-17 | Etapa 1 (pendente) |
| Largura de 400 na tela de cima | O quadro de 240 é decidido no código traduzido (`docs/design/phase3-prototype.md`, investigação B.4) | B.4, 2026-11-17 | Depois do congelamento |
| L/R | Zoom (pinça sintetizada) | B.7, 2026-11-17 | Protótipo (pendente) |
| Serviços Android | Removidos, com políticas offline (registro local; cobrança indisponível sem conceder itens pagos; anúncios removidos) | decisões da Fase 2 | Feito |
