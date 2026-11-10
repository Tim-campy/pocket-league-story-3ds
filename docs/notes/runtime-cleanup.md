# Limpeza na consolidação do runtime

Revisão solicitada pelo usuário. A lista de agentes contém somente o agente
principal ativo; não foram encontrados subagents em execução para interromper.

Resultado: 16 arquivos removidos, total de 123.205.283 bytes.
Inventário completo com hashes: [runtime-cleanup-inventory.json](runtime-cleanup-inventory.json).
Uma cópia local também fica em `build/cleanup-runtime/inventory.json`.

| Arquivo removido | Bytes | Motivo / substituto preservado |
|---|---:|---|
| `build/null-pc/menu-events.csv` | 16879650 | Derivado de `menu.etl`; leitor ETW e ETL preservados |
| `build/null-pc/match-events.csv` | 7399026 | Derivado de `match.etl`; leitor ETW e ETL preservados |
| `build/null-draft/null_sound.hpp` | 3217 | Rascunho substituído por `src/kairo/platform/null/sound.hpp` |
| 13 arquivos `build/pc/*.ilk` | 98923390 | Caches de link incremental, removidos depois de concluir o check SDL/assets; objetos, executáveis e símbolos preservados |

Os caminhos foram resolvidos e conferidos dentro de `build/` antes da remoção.
A busca em config/docs/tools/tests não encontrou dependência desses caminhos.
Não foram removidos fontes atuais, assets locais, saves de diagnóstico,
snapshots gerados usados pelos recibos, executáveis/PDBs da baseline, ETLs,
logs de verificação ou ferramentas autenticadas. Os 13 caminhos individuais
dos caches e seus hashes estão no inventário. A próxima linkedição pode
recriá-los; a remoção não reduz a cobertura nem apaga entradas dos testes.
