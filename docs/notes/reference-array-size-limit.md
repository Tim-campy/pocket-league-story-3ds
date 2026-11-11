# Limite de tamanho dos arrays de referências

O alvo original é Mono de 32 bits. Na revisão Unity
`b6587926c0f146c8b12985744f33a13b39a22d57`,
[`object.c`, linhas 4246–4320](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/metadata/object.c#L4246)
verifica a multiplicação do comprimento pelo tamanho do elemento e a soma do
cabeçalho antes da alocação. Sem `MONO_BIG_ARRAYS`, o limite é `0xffffffff` bytes.
[`object.h`](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/metadata/object.h)
define o cabeçalho: dois ponteiros de `MonoObject`, ponteiro de bounds e
comprimento de 32 bits, totalizando 16 bytes nesse alvo. Cada referência ocupa
4 bytes. Assim, mais de 1.073.741.819 referências excedem o limite, mesmo antes
de considerar a memória disponível. Isso não significa que arrays menores
tenham alocação garantida.

Os casos sintéticos `SecureInt.Array(int.MaxValue)` e
`SecureLong.Array(int.MaxValue)` retornam `System.OutOfMemoryException` no
oráculo Mono. O runtime C++ permitia que o host de 64 bits tentasse alocar
17.179.869.176 bytes para o payload após a conversão para ponteiros simples.
Uma repetição atingiu 3.828.576.256 bytes residentes e excedeu 90 segundos;
outra terminou com erro sem que o runner antigo registrasse o código de saída.
A causa dessa saída específica continua UNKNOWN. A repetição sob depurador
também excedeu seu prazo, sem registrar uma violação de acesso.

`Array<T>::Storage::allocate` agora aplica o limite de bytes do alvo aos
elementos de referência, antes de solicitar memória ao host. Não modifica
verificações de índice nem a lógica dos métodos traduzidos. Comprimentos
negativos continuam produzindo `OverflowException`. Os testes incluem o
primeiro comprimento impossível e `int.MaxValue`; não tentam alocar um array
próximo de 4 GB para testar o último comprimento teoricamente representável.

Validação inicial: nove asserções da fixture de raízes nativas e runtime
passaram, incluindo as três novas asserções de tamanho/exceção. O diferencial
portável completo e a verificação completa ainda precisam ser renovados.
O runner agora registra o código de saída decimal e hexadecimal.

A repetição seguinte compilou em 384,67189770005643 segundos e ultrapassou
os casos extremos; a execução nativa terminou por timeout após
60,94376869988628 segundos, com 2.356 casos completos, até `336:3`.
O oráculo Mono completou em 54,22219379991293 segundos. Esse segundo timeout
não é registrado como repetição da falha de alocação: houve avanço até
`SecureString.ValueOf`, e o último caso impresso não localiza a instrução
que estava executando. O prazo de execução do harness passou a 180 segundos
e cada caso concluído chama o ponto seguro sujeito ao limiar de alocação,
como uma fronteira de frame do host. Não foram removidos casos ou comparações.

Na verificação completa seguinte, o diferencial monolítico terminou com
sucesso: 2.617/2.618 casos iguais em 374 métodos. A diferença restante é a
pendência preexistente de `JMath.Sin(-0)`. Compilação: 339,4105958000291 s;
oráculo Mono: 49,27746680006385 s; execução nativa: 64,3308823001571 s.
Esses são tempos do harness diferencial em Debug, não medições de frame ou
de desempenho Release do jogo. A emissão dividida também passou com os mesmos
2.617/2.618 casos: compilação 332,03987969993614 s, Mono
46,48170939995907 s e nativo 63,723323500016704 s.
