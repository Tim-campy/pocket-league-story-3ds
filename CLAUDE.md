# CLAUDE.md

As regras deste repositório estão em **`AGENTS.md`**: leia-o inteiro antes de qualquer
ação. Ele vale para qualquer agente e prevalece sobre este arquivo; a seção 3 dele
(regras de conteúdo) prevalece sobre tudo. O usuário fala português.

Resumo: o código do jogo é `src/game/` (C++ mantido à mão desde a tag
`v1.0.0-faithful`); o ciclo de edição é `python tools/dev.py build|run|check|routes|full|arm`;
fora de `src/game/` nada muda sem aprovação do usuário. O histórico da Fase 2 (as
instruções antigas deste arquivo inclusive) está em `docs/history/`.

## graphify (grafo de conhecimento do código)

Como e quando usar: `AGENTS.md`, seção 6 (comandos testados, o que o grafo responde bem e o
que fica para a busca direta). Ferramenta local do usuário (`uv tool install graphifyy`,
0.9.111), fora de `build/deps/`; hooks em `.claude/settings.json`, skill em
`.claude/skills/graphify/`. Só análise local (`GRAPHIFY_BACKEND=none`): não use o passe
semântico com API externa sem perguntar ao usuário. Gerar do zero:
`GRAPHIFY_BACKEND=none graphify extract . --code-only` e `graphify cluster-only . --no-label`
(~14 min); atualizar: `GRAPHIFY_BACKEND=none graphify update .` (~7 min). `graphify-out/`
fica fora do Git; `.graphifyignore` diz o que entra.
