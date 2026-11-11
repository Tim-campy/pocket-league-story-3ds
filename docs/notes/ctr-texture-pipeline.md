# Texturas preparadas para o benchmark ARM

`tools/prepare_ctr_assets.py` autentica o APK e o catálogo local, verifica
todos os arquivos e produz outro catálogo somente em diretório ignorado.
As entradas não visuais são copiadas sem alteração; as imagens são
convertidas sem perda, com verificação de ida e volta para RGBA linear.
Não há payload, identificador interno nem imagem no repositório.

O formato usa RGBA8, bytes ABGR, blocos Morton 8×8 e padding para potência
de dois, mínimo 8, sem mipmaps. O endereçamento foi comparado com o
[conversor oficial tex3ds](https://github.com/devkitPro/tex3ds/blob/master/source/swizzle.cpp).
O [carregamento de textura do citro3d](https://github.com/devkitPro/citro3d/blob/master/source/texture.c)
recebe o payload já preparado. O envio à GPU não foi implementado nesta
etapa do backend nulo.

O teste independente usa pixels sintéticos próprios. Duas tentativas
falharam antes da caracterização completa: `-z none` conserva um cabeçalho
de quatro bytes, e tex3ds/ImageMagick zera o RGB em certos pixels de alpha
zero. A comparação de endereçamento passou para quatro dimensões, mas não
se declara igualdade integral com essa normalização. O encoder do projeto
**preserva** o RGB transparente e não chama tex3ds para converter assets.
Recibo: `build/ctr-texture-layout-v3/receipt.json`.

O tex3ds já instalado com o devkitPro autorizado é versão 2.3.0, GPL-3.0-or-later,
SHA-256 `47a0a6674177cab68c48104f8cefdaf41575f10f7173600586fffae1b7b74334`.
Foi usado como ferramenta/oráculo local, sem incorporar seu código ou
executável ao port. O encoder novo implementa o formato, não copia seu fonte.

Resultado do pipeline `build/ctr-assets-native-v1/pipeline-receipt.json`:

| Medida | Resultado |
|---|---:|
| Entradas do catálogo | 3.027 |
| Imagens convertidas e verificadas sem perda | 654 |
| RGBA linear original | 16.933.248 bytes |
| Formato nativo com padding e cabeçalhos | 27.553.616 bytes |

Esse tamanho não representa o conjunto simultaneamente residente. A medição
do pico deve acompanhar o boot real. O catálogo resultante tem SHA-256
`eb1020e2ec935b910ba4bb6b59b16903086eb12f3e9df37782bd49e22f3deb64`.

`prepare_arm11_sd.py --asset-root build/ctr-assets-native-v1` verifica
novamente todos os arquivos e o recibo antes de preparar o SD. O marcador
`prevalidated.sha256` vincula APK e catálogo. O carregador do benchmark ARM
confere essa identidade uma vez; `converted/verify-on-read.flag` mantém a
opção de diagnóstico de hashes por leitura. Tamanho, fim do arquivo e
estrutura da textura continuam verificados. No PC o modo padrão continua
verificando o hash por leitura. `Catalog::verify` verifica o hash mesmo
quando o catálogo está no modo preparado.

`Image.Load` e `Image.Use` agora mantêm o payload nativo sem conversão.
`GetAlphaType` percorre apenas pixels lógicos, ignorando o padding. Uma
operação que realmente exige pixels lineares faz a conversão sob demanda;
essa memória entra na contabilidade, e Unuse/Dispose a liberam imediatamente.
O backend nulo não envia dados à GPU. O futuro backend gráfico ainda deve
alocar memória apropriada para o upload; este trabalho prepara os bytes.

Passaram 5.385 asserções próprias do leitor/catálogo, 56 casos diferenciais
de ciclo de vida e 50 verificações de pixels em cada layout. Os testes
incluem alteração de payload no modo preparado, rejeição no modo estrito,
`verify` explícito, truncamento e marcador de catálogo divergente. Nenhum
asset do jogo foi usado nessas novas fixtures.

`run_arm11_null.py --profile-resources` ativa a sonda por etapa. Os eventos
usam buffer fixo e são escritos após update/desenho, fora da decisão de
tempo de `ResourceManager.LoadStart`. O modo está desligado por padrão;
as medições finais de frames devem omitir essa opção. Eventos descartados
são contados e invalidam a alegação de perfil completo. O boot ARM com
esse catálogo continua pendente de execução.

A primeira imagem ARM compilada (`917dabb97b94b0b469bbb477097409965442f326e701db226e33f462c956a6ef`)
parou antes do boot: o marcador escrito no Windows tinha CRLF, que
`ifstream` em modo texto remove no Windows, mas não no newlib do ARM.
O leitor agora abre esse arquivo em modo binário em todos os alvos e
aceita explicitamente LF e CRLF, mantendo a validação das três linhas e
do hash. As fixtures passaram **5.387 asserções**, incluindo ambos os
finais de linha. A tentativa falha ficou registrada em
`build/arm-native-textures-new-profile`; o emulador privado foi encerrado
após a exceção, sem alterar o jogo para contorná-la.

## Diagnóstico após CRLF

A imagem `6280261318e05ddfee21234c59779180c0d47cf0c8c5068ddaf8124389656a98`
passou da leitura do catálogo, mas a primeira janela no perfil New ainda
ficou em BootForm (form_id 0), portanto **não qualificou o menu**.
O registro `build/arm-native-textures-new-profile-crlf/result.json` contém
365 operações `image-load-total` observadas, com máximo de 197,01928 ms.
O detalhamento descartou 2.638 eventos; esses dados não constituem perfil
completo nem medição final sem instrumentação.

A inspeção seguinte, sem essa sonda, leu registradores/pilhas pelo stub
GDB do Azahar. A thread principal foi encontrada em `FSFILE_Read` por
`Catalog::verify`, em `Sha256::compress` e na chamada nativa de
`SoundOGG.Load`; o worker aguardava `RunOnUiThread` com condition variable.
A thread APT aguardava `svcWaitSynchronizationN`, normalmente. Leituras
de palavras de pilha são indícios de chamadas, não um unwind completo.
Recibos e símbolos: `build/arm-native-no-profile-debug/threads.json` e
`thread-symbols.txt`. Não foi demonstrado deadlock nessa observação.

`Catalog::prepare_stream` agora aplica a mesma política preparada aos
caminhos de áudio e fontes, mantendo a verificação de tamanho. O modo
estrito continua verificando os hashes; `Catalog::verify` continua
forçando o hash mesmo sobre um catálogo preparado. Passaram **5.392
asserções** do leitor, incluindo payload alterado e truncamento. A
execução ARM dessa correção permanece uma etapa separada.

A sonda também foi corrigida: retira uma cópia fixa dos eventos sob mutex
e libera o mutex antes da escrita no SD. Produtores não aguardam a escrita
do log. Totais por etapa são mantidos mesmo quando o detalhe excede 512
eventos. Uma fixture concorrente verificou **2.600 eventos**, sem perda
nos totais. `resource_aggregate_profile_complete` distingue a completude
desses totais da lista de eventos individuais; perdas de agregados ainda
invalidam o perfil. Nenhum tempo dessa fixture é evidência de latência ARM.
# Resultado da imagem com streams preparados

Imagem `2d2a73eae3a301eb5d5263a82b4ed882c65aef5f2cc65722bd160fbb81f420ff`,
ELF `9e5a25e3cce6b4e247d3e327293d5a3ef95e28f389beaad24efc9b60ff9995b6`.
O perfil New 3DS/100% terminou com **std::bad_alloc antes do título**, sem
janela de frames válida. Uma repetição sem perfil também falhou antes do
título: malloc usado 96.315.688 bytes, livre 4.294.360 bytes. Com perfil:
95.779.272 usados, 4.589.112 livres. O heap normal reservado era 100.663.296
bytes. A capacidade total não identifica a maior faixa livre contígua.
Não se atribui a falha a fragmentação ou a uma categoria sem medição.

Recibos privados: `build/arm-prepared-streams-new-profile/result.json` e
`build/arm-prepared-streams-new/result.json`. Os agregados de carga estão
completos (zero perdas); 2.636 eventos individuais excederam o buffer e
não permitem reconstruir todas as cargas individualmente.

| Etapa | Chamadas | Média, ms | Máximo, ms |
|---|---:|---:|---:|
| Abertura do arquivo do catálogo | 1511 | 19,798571042356055 | 229,980942 |
| Leitura do catálogo | 1511 | 2,9878272720052945 | 387,759906 |
| Image.Load: leitura | 387 | 49,618981989664086 | 439,935849 |
| Image.Load: adotar layout pronto | 387 | 0,02355925064599483 | 0,02581 |
| Image.Load: total | 387 | 50,3832881498708 | 497,869169 |
| Preparar stream: verificar tamanho | 36 | 38,239194777777776 | 52,683344 |
| Preparar stream: total | 36 | 38,35685383333334 | 52,801593 |

Não houve hash completo de streams na carga preparada. Não há decodificação
de imagem nem conversão de pixels nessa rota; upload à GPU é zero no backend
nulo. Etapas inclusivas não são somadas como parcelas independentes. São
tempos do emulador, com instrumentação, não do hardware. A leitura/abertura
ainda pode exceder o limite de 150 ms do original, que permanece intacto.
Menu, partida e benchmark final de hardware desta imagem continuam UNKNOWN.

