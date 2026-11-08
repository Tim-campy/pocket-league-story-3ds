# Fundação gerenciada de streams em memória

`src/kairo/common/managed_streams.hpp/.cpp` implementa somente a fundação `System.IO.Stream` e `System.IO.MemoryStream` em C++17, namespace `pls::cs`. Ela usa `Object`, `Ref<T>`, `Array<uint8_t>` e a hierarquia de exceções do runtime semântico. Não usa CLR, Unity, filesystem, armazenamento de plataforma, SDL ou assets. As classes `java.io.*` continuam sendo entrada do tradutor, não implementações manuais desta tarefa.

O contrato exposto inclui Read/Write com offset e count, ReadByte/WriteByte, Seek/SeekOrigin, Length, Position, Capacity, SetLength, ToArray, GetBuffer, Flush, Close e Dispose. As propriedades têm métodos `get_`/`set_`; `MemoryStream::make(...)` devolve `Ref<MemoryStream>` e admite os overloads de construtor vazio, capacidade e array/slice com writable/publiclyVisible. Streams construídos sobre arrays preservam alias; ToArray copia somente a região lógica e GetBuffer devolve o array original apenas quando exposto. Stream fornece implementações virtuais de byte único que despacham Read/Write de uma subclasse.

`python tests/kairo/run_streams.py` compila **fonte sintético próprio**, uma vez sobre .NET 10.0.10 e outra com smcs/Mono 2.6.5 do Unity 5.3.4f1 já instalado externamente. Compila também a fixture C++ com MSVC existente, `/std:c++17 /EHsc /fp:strict /permissive- /W4 /WX`, e compara os traces completos, inclusive tipo das exceções e estado posterior. Não copia nem executa DLL de jogo ou binário original; o Mono é invocado no local em que já estava instalado. Recibo: `config/phase2-streams-fixtures.json`.

Resultado: **174/174 casos passam**, 87 em cada perfil. O perfil padrão continua **UnityMono265**. As 18 diferenças observadas abaixo são preservadas por `RuntimeProfile`, sem supor que o runtime moderno reproduz o histórico.

| Caso sintético | .NET 10 | Mono 2.6.5 |
|---|---|---|
| Read: offset + count ultrapassa array | ArgumentOutOfRangeException | ArgumentException |
| Write: offset + count ultrapassa array | ArgumentOutOfRangeException | ArgumentException |
| Seek Begin em slice de origem 2 | Devolve posição lógica 0 | Devolve posição física 2 |
| Seek Current no mesmo slice | Devolve 1 | Devolve 3 |
| Seek End no mesmo slice | Devolve 2 | Devolve 4 |
| Atribuir a mesma Capacity em slice não expansível | Aceita | NotSupportedException |
| Reduzir e reexpandir Length no slice | Zera a região reexpandida | Também apaga os bytes da região reduzida no backing array |
| Position = Int32.MaxValue em slice de origem 2 | ArgumentOutOfRangeException | Faz wrap no índice físico e conserva a posição lógica |
| Seek Int64.MinValue a partir da posição 20 | IOException | Trunca offset para Int32, permanece em 20 |
| WriteByte falha na posição Int32.MaxValue | Conserva Position | Incrementa com wrap antes de lançar IndexOutOfRangeException |
| Write(null) em readonly | ArgumentNullException | NotSupportedException |
| SetLength negativo em readonly | ArgumentOutOfRangeException | NotSupportedException |
| Read(null) após Close | ArgumentNullException | ObjectDisposedException |
| Read com offset negativo após Close | ArgumentOutOfRangeException | ObjectDisposedException |
| Write(null) após Close | ArgumentNullException | ObjectDisposedException |
| Position negativa após Close | ArgumentOutOfRangeException | ObjectDisposedException |
| SetLength negativo após Close | ArgumentOutOfRangeException | ObjectDisposedException |
| SetLength zero após Close | NotSupportedException | ObjectDisposedException |

Também passam os casos de EOF em posição além do fim e da capacidade, escrita de tamanho zero, expansão com zeros, retenção do buffer antigo após expansão, leitura/escrita com ranges sobrepostos no mesmo array, slice com offset, leitura e escrita readonly, buffers privados, construtores inválidos, propriedades depois de Close, ToArray/GetBuffer depois de Close, Flush e Dispose repetidos e despacho dos métodos padrão de Stream. Não se alocam buffers próximos de 2 GB nos testes; os limites numéricos são exercitados por posições e exceções, não por alocações gigantes.

**Limites da prova:** o teste é da fundação da biblioteca padrão e não comprova emissão de `java.io.*`, tradução do jogo, título/menu ou partida. Comportamento do Mono no Android permanece **UNKNOWN**; o oráculo histórico medido é o runtime Windows já instalado. Nenhum estado dos inventários foi promovido por edição manual e nenhuma ferramenta foi instalada.
