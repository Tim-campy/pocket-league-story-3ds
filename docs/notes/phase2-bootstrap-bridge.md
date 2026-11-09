# Ponte gerada de inicialização e diagnóstico Release

Continuidade posterior ao checkpoint af66d13. Os números das tentativas abaixo
são históricos; a cobertura vigente vem dos recibos e de PROGRESS.md gerados.

## Ordem e procedência

`translator/bootstrap_source.py` gera um adaptador C# local, ligado pelo mesmo
Roslyn usado no jogo. Os helpers são excluídos do denominador de 1.958 métodos
do Assembly-CSharp. O C++ correspondente em src/game/ também é gerado; não há
edição manual dos callbacks Main nem seleção artificial de título/menu.

A ordem vem de `kairo.unity.ui.IApplication.Awake`: Config.Create, plataforma,
tentativa de ResourceManager.Load de kairolib.dat, Main.OnCreate e Language.Init.
O inventário autenticado em config/phase2-bootstrap-plan.json permite substituir
a reflexão de Config.Create por exatamente 27 cópias de campos de MyConfig.
APPLI_TYPE continua excluído. O inicializador de Config executa antes da primeira
leitura de MyConfig, para conservar os efeitos da herança estática.

`BootstrapContext.BeforeCreate/AfterCreate` envolve o Main real. Colaboradores
de FormManagerBase.Execute/OnDraw consultam os singletons de KairoBase/FepPanel
somente quando o fonte os consulta. Os delegates conservam o receptor correto
e expõem suas referências ao GC. SaveRecorder permanece nulo pela prova de
corpus completo: nenhuma subclasse concreta/chamada de construtor, e nenhuma
outra escrita no singleton. Isso não substitui KairoBase por outro serviço.

AnalyticsTracker.Setup/TrackPageView/Save/Run conservam os corpos recuperados,
PlayerPrefs e fila. Só WWW é transporte indisponível, e GetInstallReferrer
segue o ramo não Android. A referência transitiva à API de licença removida
tem uma guarda que lança, sem retornar um status de licença. Registro,
cobrança, anúncios e notificações seguem docs/design/services.md.

O host fornece pasta de preferências, framebuffer, relógio e plataforma SDL.
KairoPlugin._getPackageName devolve string vazia fora de Android/UnityEditor;
_getClockTime usa JSystem.CurrentTimeMillis; status bar tem altura/posição zero.
Nenhum identificador de conta é fabricado por essas adaptações.

## Diagnósticos executados

| Tentativa | Build | Ponto de parada | Frames apresentados |
|---|---|---|---:|
| 3 | Release | Source.InitializePlatform | 0 |
| 4 | Release | Source.LoadLibraryResources | 0 |

Na tentativa 4, Config e InitializePlatform completaram: o marcador da lacuna
ocorreu ao entrar na fase seguinte. Executável SHA-256:
`d639b59d26dfccc4c8c870082a588cd14ca26a7be440577b01fd826f4cd9d8cd`.
São 1.283 corpos Game compilados nessa fotografia e 104 slots virtuais ainda
sem definição, contra 1.220 e 113 em af66d13. As 110 armadilhas da fotografia
incluem os slots e seis colaboradores do bootstrap. Não são implementações.

RSS na tentativa 4: 49.336.320 bytes antes de Main e 50.581.504 antes do teardown.
Payload conhecido: framebuffer RGBA de 268.800 bytes e callback de áudio de
8.192 bytes. Texturas/áudio/heap residentes por categoria, frame time estável,
título e menu continuam UNKNOWN. Esses valores não são orçamento de gameplay
nem podem ser somados como categorias de RSS.

Os logs ficam somente em build/pc-diagnostic-release/attempts/4. O recibo público
config/phase2-diagnostic-attempts.json registra hashes, configuração, processo,
parada e zero promoção de cobertura. A supervisão interrompe o processo criado
quando aparece PLS_TRANSLATION_GAP. Falta de implementação não é absorvida pelo
catch opcional do carregador como se um recurso tivesse carregado com sucesso.

## Emissões acrescentadas e limites

As fixtures próprias passaram por 812 observações antes da consolidação desta
ponte. Incluem params vazio/expandido/array explícito/nulo, ordem de argumentos,
snapshot de Dictionary.Keys.ToArray, campos de structs, string switch, using,
retornos protegidos, delegates explícitos e propriedades automáticas de instância
sem inicializador. As fixtures medem descarte de recursos de using na ordem
inversa e substituição de exceções durante o descarte. Retornos protegidos usam um token fora
da hierarquia de exceções gerenciadas; uma exceção do finally substitui o retorno.
Saltos que escapam da região protegida continuam recusados. Break interno a um
laço/switch da região não é confundido com um salto que escapa dela.

O lock usa o monitor recursivo já existente no objeto, retém o receptor e estaciona
o mutator durante a espera. Foram exercitados aninhamento, null, saída por return,
exceção e duas threads com coleta durante o lock. Timed Monitor/Wait/Pulse e
interrupção de espera não são declarados implementados.

Guid.NewGuid/ToString limita-se ao formato padrão, versão/variante e identidade
aleatória. Uri.EscapeDataString segue as marcas RFC 2396 do Mono histórico,
UTF-8 e o limite de 32.766 code units; não é uma implementação geral de System.Uri.
String.Insert, Concat(object), IsNullOrEmpty, TryParse simples e a passagem de
arrays concretos por System.Array têm fixtures diferenciais próprias.

O SDL publica touchCount, DPI e fullscreen junto ao snapshot de entrada. Mouse
não aumenta o número de dedos. A identidade do dedo inclui o dispositivo.
Sem DPI determinável, o valor é zero, como permite a
[API Unity 5.3](https://docs.unity3d.com/ru/530/ScriptReference/Screen-dpi.html).
Os testes de snapshot cobrem 24 observações de coordenadas e 35 asserções nativas;
não são medições de toque físico no Android. Isso não decide telas/controles 3DS.

As sete diferenças ref/out e Sin(-0) permanecem em
[android-semantic-unknowns.md](android-semantic-unknowns.md), sem normalização.
Os números atuais e a verificação completa devem ser consultados nos recibos;
sucesso dessas fixtures não constitui boot ou comparação visual com Android.
