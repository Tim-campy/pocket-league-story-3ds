# Roteiros canônicos versionados

Cópias exatas dos roteiros que `python tools/dev.py routes` reexecuta: `<n>.route` é o
roteiro da execução canônica `n` de `config/phase2-diagnostic-attempts.json`, com o
SHA-256 registrado lá (conferido por `tests/repository/test_dev_routes.py`).
O atributo Git `-text` preserva os bytes históricos, inclusive CRLF em 42
roteiros. Não normalize os fins de linha dessas cópias.
`canonical-coverage.json` guarda, por execução, os métodos que o código canônico
completou (índices em `methods`) e, em `replay_done`, os pares (roteiro, save) que a
reexecução do código canônico conclui.

Não edite: são a referência do conjunto. Roteiros novos vão em `tests/routes/`
(os orientados a estado, `*-state.route`, rodam com `dev.py scenarios`). Regenerar a
partir das cópias privadas de `build/` (só se elas existirem):
`python tools/run_readable_routes.py --apk X --frozen --export-replays`.

Os saves de que esses roteiros partem são dados do jogo e não entram no Git:
`python tools/dev.py backup PASTA` (fora do repositório) e `--restore`.
Motivo e histórico: `changes.md`.
