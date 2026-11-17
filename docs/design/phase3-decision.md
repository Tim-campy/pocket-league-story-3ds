# Fase 3 — decisão de design das telas e controles (usuário, 2026-11-16)

Substitui as alternativas A, B e C de `phase3-screens.md` e as propostas 3 e 4 de
`phase3-controls-dialogs.md` (mantidas como histórico). Estudo de viabilidade:
[phase3-feasibility.md](phase3-feasibility.md).

## Visão

1. **Tela superior (400×240): principal, mostra o jogo.**
2. **Tela inferior (320×240, toque): auxiliar.**
   - Na gestão: registro de acontecimentos recentes (caixa de mensagens). Um menu
     chamado aparece na inferior, no lugar do registro.
   - Na partida: dados da partida (formação etc.).
3. **Controles:**
   - circle pad: move só a câmera, sem mover o cursor;
   - direcional: move o cursor no mapa e a seleção nos menus;
   - A confirma; B cancela/volta; Y abre o menu;
   - X executa o comando especial (rótulo esquerdo: salvar, trocar, demolir...);
   - L e R: zoom.
   - Regra: o circle pad desloca a câmera livremente; ao usar o direcional, a câmera
     volta a enquadrar o cursor se ele estiver fora da vista.
4. Adaptar às peculiaridades do 3DS; não imitar o celular.
5. Diálogos do port na inferior; teclado do sistema (`swkbd`) com o limite e a
   validação do jogo; idioma inicial = idioma do console, com painel para trocar;
   rótulos dos diálogos no idioma escolhido no jogo.

## Etapas

| Etapa | Quando | Conteúdo | Muda o código do jogo? |
|---|---|---|---|
| 1 | Fase 4 (antes do congelamento é permitido só protótipo de plataforma) | jogo na superior; controles completos; inferior simples (rótulos tocáveis, informações básicas) | não |
| 2 | Fase 5 (depois do congelamento) | menus na inferior, registro de acontecimentos, painel da partida | sim (código legível editável) |

Regra desta rodada: nada no código do jogo antes do congelamento; o protótipo é
só de plataforma (host do PC).

## Pontos que o estudo devolve ao usuário

Ver a seção "Decisões que dependem do usuário" em `phase3-feasibility.md`:
circle pad × cursor na etapa 1, regra de reenquadramento (o original recentra a
cada passo), B no mapa, câmera da partida, idioma do console.
