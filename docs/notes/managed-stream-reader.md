# StreamReader da fundação gerenciada

`managed_stream_reader.hpp/.cpp` fornece RuntimeStreamReader para os dois usos
medidos em `Language.cs`: LoadLangPack lê ReadToEnd (linha 1489), enquanto
GetLanguagePackInfo percorre ReadLine (linha 1984). Ambos usam MemoryStream e
Encoding.UTF8. O C# desses consumidores continua traduzido; não foi reescrito no
backend nem foram incorporados textos dos assets ao código.

A API implementada é o construtor `(Stream, RuntimeEncoding)`, ReadLine,
ReadToEnd, Close e Dispose. Há um buffer de bytes de 1024 e estado incremental
do decoder; não se lê todo o arquivo antes do primeiro ReadLine. São detectados
BOM UTF-8, UTF-16 LE/BE e UTF-32 LE/BE. O limite de buffering não é usado para
alterar o texto, a ordem dos comandos nem o tratamento de CR/LF/CRLF.

`python tests/translator/run_stream_reader.py` passou **508/508** observações:
254 contra Mono e 254 contra .NET10. Os casos próprios exercitam linhas vazias,
NUL, BOM completo e fragmentado, leituras de 1/2/3 bytes e completas, caracteres
multibyte atravessando blocos, bytes inválidos/truncados, limites 1024/2048,
disposal e validação dos construtores. Comparam também o número de leituras
e a posição do stream subjacente. Nenhum binário do jogo é carregado.

A primeira execução obteve **487/508**, com estas causas confirmadas:

- O Mono guarda prefixos UTF-8 incompletos mesmo quando já apontam para sequência
  inválida e não faz flush do decoder no EOF. `E0 80` e `ED A0` truncados podem
  desaparecer no StreamReader, ao contrário de GetString sobre o buffer inteiro.
- ReadToEnd do Mono faz uma leitura de EOF adicional depois de um bloco completo,
  devido ao caminho de Read(char[]); os contadores observados foram preservados.
- O .NET10 aceita encoding null no construtor como UTF-8, enquanto Mono lança
  ArgumentNullException. O default não foi generalizado para o perfil histórico.
- O detector moderno mantém a tentativa de BOM após um bloco de dois bytes sem
  decisão. Isso afeta BOM UTF-32BE fragmentado; o Mono segue seu molde anterior.

O fonte de diagnóstico é o [StreamReader.cs do fork Unity fixado](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mcs/class/corlib/System.IO/StreamReader.cs),
em especial Initialize, DoChecks, ReadBuffer e ReadToEnd. O contraste moderno foi
conferido no [fonte oficial .NET10](https://github.com/dotnet/runtime/blob/v10.0.0/src/libraries/System.Private.CoreLib/src/System/IO/StreamReader.cs).
Não se confunde ausência de flush no Mono com erro do fonte recuperado.

O objeto rastreia suas referências de Stream/Encoding/array no GC cooperativo;
Fill visita safepoints. Ele fecha o stream recebido como o overload original.
Não são oferecidos async, métodos de arquivo/path, detecção customizável, um
TextReader completo ou segurança para acesso simultâneo. O recibo
`config/phase2-stream-reader-tests.json` é de fundação e não promove métodos da
fronteira ou métodos do jogo sem o teste do emissor correspondente.
