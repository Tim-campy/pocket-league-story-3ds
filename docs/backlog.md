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

## Melhorias opcionais

### Paridade C++/Mono nos kernels de referência

Registrado em 2026-11-12, por decisão do usuário: deixou de ser exigência do
critério 2 do congelamento. Últimos números (ns/chamada, PC, `runtime-cost-final.md`):
Camera.ConvertScreenToCamera 14,8 contra Mono 6,1; Team.GetSum 138,6 contra 34,9;
Team.Cal_evaCoatMulti9block 132,6 contra 35,4; AppData.InsertGameObject 183,2
contra 83,9; ChRect 7,3 contra 10,0. O New 3DS real roda a partida em 12,05 ms
de média com backend nulo, contra 50 ms de orçamento.

## Runtime depois do congelamento

### Reforma do coletor (adiada pelo usuário em 2026-11-13)

Trabalho de runtime posterior, provável requisito para o 3DS antigo. Pode
entrar depois do congelamento sem alterar o código do jogo, mantendo a
interface usada pelo código gerado (`AGENTS.md`, seção 5, regra 9).

- **Plano:** [`docs/notes/gc-reform-plan.md`](notes/gc-reform-plan.md) — heap
  por classes de tamanho em blocos, marcas em bitmap, tabela de páginas,
  lista de objetos grandes, varredura preguiçosa por bloco, nenhuma estrutura
  externa por objeto. Estimativa: 4–4,5 sessões.
- **Motivo:** pausa ≈ 21 ms fixos + 4,6 µs por objeto morto (Azahar). No New
  3DS XL (v5, três execuções) a coleta de transição no menu custa 105,6–107,7 ms.
- **Gatilho para reavaliar antes:** coletas por volume em jogo estável acima
  de 50 ms no aparelho.
