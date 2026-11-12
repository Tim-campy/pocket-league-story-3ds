# Backlog

Itens registrados para tratamento posterior. Nada aqui está autorizado a
mudar a lógica do jogo antes do congelamento.

## Requisitos do congelamento

### Critério 5 — nomes originais no C++ legível

Registrado em 2026-11-11, por pedido do usuário. Não tratar agora.

O emissor atual gera identificadores em hash para tipos, métodos, campos e
arquivos (`cs_57400ccf89951052`, `game_generated_type_b728593e3dcffe31.cpp`).
O critério 5 do congelamento (`AGENTS.md`, seção 4) exige nomes originais de
tipos, membros e parâmetros. Na geração legível, esses hashes precisam virar
os nomes do C# reconstruído (com tratamento de sobrecargas, tipos aninhados,
genéricos e colisões com palavras reservadas do C++), um arquivo por classe.

Impacto observado: na depuração do boot ARM desta sessão, cada símbolo da
pilha teve de ser mapeado à mão pelas cadeias `src/...:M:<método>` próximas
no `.cpp` gerado.
