# CLAUDE.md

As regras deste repositório estão em **`AGENTS.md`**: leia-o inteiro antes de qualquer
ação. Ele vale para qualquer agente e prevalece sobre este arquivo; a seção 3 dele
(regras de conteúdo) prevalece sobre tudo. O usuário fala português.

Resumo: o código do jogo é `src/game/` (C++ mantido à mão desde a tag
`v1.0.0-faithful`); o ciclo de edição é `python tools/dev.py build|run|check|routes|full|arm`;
fora de `src/game/` nada muda sem aprovação do usuário. O histórico da Fase 2 (as
instruções antigas deste arquivo inclusive) está em `docs/history/`.

## graphify (grafo de conhecimento do código, opcional)

Ferramenta local do usuário (`uv tool install graphifyy`), fora de `build/deps/`.
Integração: hooks em `.claude/settings.json`, skill em `.claude/skills/graphify/`.

- **Só código, local:** `GRAPHIFY_BACKEND=none graphify extract . --code-only` e depois
  `graphify cluster-only . --no-label` (análise sintática local; nada sai da máquina).
  Não use o passe semântico de documentos com API externa sem perguntar ao usuário.
- **Uso:** `graphify query "<pergunta>"`, `graphify path "<A>" "<B>"`,
  `graphify explain "<nome exato>"`; depois leia só as linhas que o grafo apontou.
- **Depois de mudar código:** `graphify update .` (local, sem API).
- `graphify-out/` fica fora do Git. Desde o congelamento `src/game/` entra no grafo
  (`.graphifyignore`).
