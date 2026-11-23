# Save do roteiro de menu: canônico × legível (item 4a, 2026-11-23)

O roteiro `menu-explore` (save 50, relógio virtual, `--fast`) grava o autosave
`rs/0003` (`AppData.cs:2402`, `save_.ToByteArray()`, registro 3). O do legível
difere do canônico desde rodadas anteriores (tentativas 110, 201, 216, 224, 320).

## Decodificação

`rs/0003` = CRC (8 bytes, tabela de `src/kairo/common/storage.cpp`) + `Property`
(tipos 1–4: ints, longs, strings, bins). A chave de `RecordStore` do port fica em
um byte zero (o `Encrypter.SetEncryptionKey` do jogo não a altera): o arquivo não é
cifrado. O CRC confere nos dois. Ferramenta: `tools/saves/diff_record.py`.

Campos que diferem (canônico 431 × legível 320):

| Bloco | Conteúdo (`AppData.cs`, `saveGame`) | Diferença |
|---|---|---|
| ints, longs, strings | — | iguais |
| `bins[0]` | `PlayerData.Serialize` dos 113 jogadores (67 B cada) | jogadores 23, 25, 27, 28, 32, 33: `exp_`/`expStock_` repartidos de outro modo; a soma `exp_+expStock_` é igual em todos (221, 221, 77, 112, 221, 209) |
| `bins[1]` | `qmData_` | 3 bytes |
| `bins[14]` | `UserData.Serialize` | a partir do deslocamento 37, `TrainingData.TRA_PLAYER` (distribuição dos jogadores pelas áreas de treino) e o que dela decorre |
| demais `bins` | — | iguais |

Onde são gravados: `expStock_ += ...` em `PlayerData.StockExp`, chamado por
`TGroupArea.cs:219` (treino); `UpdateStockExp` (`PlayerData.cs:949–955`) aplica o
acumulado, chamado por `TPlayer.cs:1253`. `TRA_PLAYER` é a distribuição do treino
(`UserData.cs:4876–4924`, sorteio `Random(2)` entre áreas).

## Causa: ordem das threads no relógio virtual

`GameUtil.Random` usa `JRandom()` estático, semeado com `JSystem.CurrentTimeMillis()`
(`JRandom.cs:10–13`). No diagnóstico o relógio é virtual: cada leitura avança um passo
fixo, **de qualquer thread** (`src/kairo/common/virtual_clock.hpp`). A thread de
carregamento lê o relógio (fatias de 150 ms do `ResourceManager.LoadStart`) enquanto o
laço principal roda; quantas leituras ela faz antes de cada quadro depende do
escalonamento. Leituras acumuladas no quadro 2:

| Execução | Quadro 2 | Fim |
|---|---:|---:|
| canônico 431 / 230 | 74 / 74 | 107.114 / 107.114 |
| legível 320 | 354 | 107.094 |
| legível 317 (mesmo código, com estresse do coletor) | 74 (diverge no quadro ~20) | 107.589 |

A semente e, com ela, os sorteios do treino dependem desse intercalamento. Prova:
o **mesmo código legível**, só mais lento (estresse do coletor, tentativa 317), grava
um save diferente do legível normal **nos mesmos três blocos**, a partir dos mesmos
deslocamentos. As execuções de cada lado repetem o próprio save porque o
escalonamento é estável na mesma máquina e no mesmo binário (canônico 228, 229, 230
e 431 idênticos; legível 110, 201, 216, 224 e 320 idênticos).

**Conclusão:** só campos que dependem da ordem das threads (via relógio virtual e
semente de `JRandom`). Nenhum campo de estado do jogo difere por emissão: os passos,
os 330 estados de interface e todos os demais campos do save são iguais. A partida de
referência, sem essa corrida de threads no trecho medido, tem save idêntico.
