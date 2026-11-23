# Plano das próximas fases (proposta de 2026-11-23, não executada)

Ponto de partida: tag `v1.0.0-faithful`. O jogo traduzido roda inteiro no PC
(SDL2) e roda no New 3DS com backend nulo (sem imagem nem som), dentro do orçamento
de 50 ms por quadro (partida 9,7–10,6 ms de média). O código do jogo passa a ser
fonte mantida à mão (`src/game/`).

Uma "sessão" é uma rodada de trabalho como as anteriores (algumas horas de trabalho
efetivo, com verificação e checkpoint). As estimativas incluem medição e validação;
o risco maior está nas primeiras de cada bloco.

## Fase 4 — backend 3DS jogável (etapa 1 do design, sem mudar o código do jogo)

Design já decidido (`docs/design/phase3-decision.md`, etapa 1): jogo na tela
superior em 400×240; controles A confirma, B volta, Y menu, X comando especial,
direcional na seleção e no cursor, circle pad na câmera, L e R no zoom, START para
sair; barra de rótulos tocável na tela inferior.

| Bloco | Entrega jogável | Sessões | Riscos | Depende do usuário |
|---|---|---|---|---|
| 4.1 Vídeo na GPU (citro3d), tela superior | o jogo aparece no 3DS, sem som, com os controles mínimos (A/B/direcional) | 3–4 | desempenho do desenho (o jogo desenha muitos sprites pequenos por quadro; lotes por textura e atlas); limites de memória de textura (VRAM 6 MB, texturas pré-convertidas); escala 480→400 com legibilidade do texto | testar no New 3DS a cada entrega (imagem e tempo por quadro) |
| 4.2 Entrada completa e tela inferior | todos os controles do design; barra de rótulos tocável na inferior; toque mapeado | 2 | mapeamento do toque da inferior para os "botões" que o jogo espera; repetição de tecla e duplo toque no ritmo do original | aprovar a sensação dos controles no aparelho |
| 4.3 Som (ndsp) | música e efeitos em streaming do Vorbis do APK | 2 | custo de decodificação Vorbis no ARM11 (thread no núcleo do sistema ou decodificação antecipada); latência dos efeitos | ouvir no aparelho |
| 4.4 Saves e ciclo de vida | salvar e carregar no cartão; suspensão (HOME, tampa fechada) sem perder estado; START sai salvando | 1–2 | escrita atômica no SD (queda de energia); APT/suspensão com threads do jogo | testar suspender e retomar no aparelho |
| 4.5 Empacotamento | `.3dsx` e preparo dos assets do APK do usuário no cartão, com instruções; opcional `.cia` | 1 | tamanho dos assets convertidos no cartão; nada do APK no pacote distribuído (regra de conteúdo) | testar a instalação do zero com um cartão limpo |
| 4.6 Validação da Fase 4 | critério 4b (comparação de telas com o Android) e medição com vídeo e som, três execuções | 1–2 | o desenho real pode passar do orçamento onde o backend nulo não passava (coletas de transição + desenho) | rodar as medições no aparelho; aprovar a comparação de telas |

Total estimado: **10–13 sessões**. Ao fim, o jogo é jogável no New 3DS do título
ao fim da temporada, com a interface do celular adaptada aos botões.

## Fase 5 — etapa 2 do design (código do jogo editável)

Cada mudança de comportamento em relação à tag é intencional, em commit próprio,
registrada em `docs/changes-from-original.md`, com os roteiros atualizados.

| Bloco | Entrega jogável | Sessões | Riscos | Depende do usuário |
|---|---|---|---|---|
| 5.1 Menus na tela inferior | os menus e sub-janelas aparecem na inferior; a superior mostra o mapa sem cobrir | 3–4 | o jogo desenha menus e mapa no mesmo canvas; separar exige mudar o código de desenho dos formulários (`SubForm`, `MyFormBase`) | aprovar o layout de cada tipo de menu |
| 5.2 Registro de acontecimentos | caixa de mensagens recentes na inferior durante a gestão | 1–2 | as mensagens hoje são popups transitórios; guardar histórico muda a lógica de `AddPopupMessage` | decidir quais mensagens entram e por quanto tempo |
| 5.3 Painel da partida | formação e dados da partida na inferior durante o jogo | 2 | espaço de 320×240 para os dados; leitura de estado da partida sem alterar a simulação | aprovar o conteúdo do painel |
| 5.4 Câmera independente do cursor | circle pad move a câmera sem mover o cursor; direcional reenquadra | 1–2 | o original recentra a câmera a cada passo do cursor; a regra nova muda o comportamento do mapa | decidir a regra de reenquadramento |
| 5.5 Validação | roteiros novos para os comportamentos mudados; medição no aparelho | 1 | — | aprovar |

Total estimado: **8–11 sessões**.

## Em paralelo, sem bloquear

- Repetir o teste numérico (critério 4a) num aparelho Android (usuário).
- `AppData.DrawMoney2` e `MapMain.UpdateTrainingCoatNum`: cobertura por log
  textual quando o vídeo existir (Fase 4).
- Reforma do coletor (`docs/notes/gc-reform-plan.md`), provável requisito para o
  3DS antigo; gatilho: pausas de transição perto de 150 ms com vídeo.
- Grafias de `Graphics` e coleções `Vector` (A.4d/A.4e, `docs/backlog.md`).
