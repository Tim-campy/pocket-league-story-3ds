# Integração de recursos, superfícies e fluxo protegido

Continuação de 22453c7. Este diário distingue evidência histórica de recibos
atuais: hashes e contagens publicáveis são recalculados pela verificação completa.
Nenhum resultado abaixo comprova título, menu ou partida.

## Rastreamento de headers e tentativas 6/7

As tentativas 6 e 7 também apresentaram zero frames. A primeira expôs somente
TypeInitializationException de main.AppData; a segunda passou a registrar a cadeia
completa, cuja causa interna era ArrayTypeMismatchException. Não se concluiu que
o fonte do inicializador estivesse errado. Uma sonda independente de arrays
reflexivos 2x0 passou sem reproduzir a falha.

O objeto portátil da configuração Release era de 03:38:08, enquanto
semantic_runtime.hpp havia sido alterado às 03:59:49. ninja -t deps registrava
zero dependências para esse objeto. A saída real de /showIncludes era UTF-8
português; CMake havia gravado o prefixo com caracteres corrompidos pela página
de código OEM. VSLANG=1033 já era requisitado, mas o compilador instalado manteve
as mensagens em português. Portanto, simplesmente definir VSLANG não resolvia.

O builder agora mede os bytes do prefixo com um header próprio, passa o resultado
ao CMake e audita as dependências efetivamente registradas dos objetos de runtime,
portáveis e Game. Um prefixo/política novo força rebuild limpo. A fixture real
MSVC/Ninja altera apenas um header, sem tocar no .cpp: o executável passa de 1
para 2 e o header consta da base de dependências. São quatro verificações,
nenhuma usando assets. O rebuild limpo da tentativa 8 confirmou a causa:
o inicializador de AppData passou sem mudar sua lógica, e a execução parou na
guarda de tradução de BootForm.Init. Foram auditadas 2, 30 e 60 dependências nos
objetos de runtime, biblioteca portátil e Game. O executável Release tem hash
09ed5a691d99c4fe77d9293fb55ffc2485ecc885a10bbe31dcb1e55a49818847;
essa execução durou 2,437 segundos e apresentou zero frames. Portanto, os erros
das tentativas 6/7 não são evidência de erro no fonte de AppData.

A verificação completa foi interrompida deliberadamente após 21 checks aprovados
para corrigir esse problema de infraestrutura. Essa execução incompleta não é
um checkpoint PASS. Os testes completos serão renovados antes de publicar.

## Diagnósticos executados

A tentativa 5 usou um snapshot privado de 1.526 corpos compilados, com 72 slots
virtuais e quatro colaboradores de bootstrap protegidos por guardas fatais. O
executável Release teve SHA-256
5816372baa8ffbdef5fab6c283eaee343c00c98350ec6f2f9254f4043ca048ed.
Executou por 2,110 segundos e encerrou com código 1, zero frames apresentados e
NotSupportedException por ausência de nome gerenciado de um tipo. Não houve
marcador de guarda de tradução. A reprodução e os logs permanecem em build/;
config/phase2-diagnostic-attempts.json conserva os hashes. Os snapshots novos
também conservam seu canonical_report.json privado, além do hash desse recibo.

O RSS antes de Main era 49.475.584 bytes; antes do teardown, 54.403.072 bytes.
Esses valores são do processo que falhou, não um orçamento de memória do jogo
em funcionamento. Residência de texturas, áudio, fontes e heap permanece UNKNOWN;
não houve amostra de frame time. Assets e screenshots não foram publicados.

## Correções e testes

- Graphics.BeginGLRender/EndGLRender/IsRenderGUIMode e pilha de habilitação de
  clip conservam aninhamento, encerramento forçado e o ResetRender que não zera
  a profundidade GL. O CPU submete pixels imediatamente; não simula meshes do
  Unity. Canvas.EndPaint/EndAlterStaticRender encerram o lote, na posição do
  original. O oráculo extrai os corpos completos: 92 observações nos dois
  perfis e teste de GC/thread do contexto current. Não prova equivalência dos
  pixels com o Android nem implementa meshes estáticos retidos.
- Font.SetScale muda a escala requisitada, aplicada posteriormente pela lógica
  de ajuste de Font. Os overloads internos já implementados passam a ter bindings
  explícitos; a fronteira não é promovida apenas por uma chamada compilar.
- Dictionary foreach usa o enumerador e sua versão; KeyValuePair conserva chave
  e valor. Os testes incluem remoção/reinserção e invalidação durante iteração.
- Os métodos Image.GetFileFormat/GetAreaSize/GetPaletteInfo/OverwritePaletteData
  e os leitores de otimização permanecem C# traduzido. Os campos nativos têm
  aliases explícitos, inclusive em escrita. Seis cenários/42 observações com
  cabeçalhos PNG/GIF e paletas sintéticas verificam parser, resultado compartilhado
  e helper de instância. Não contêm imagens dos assets.
- A ponte gerada ReadImageData reproduz Image.Use: Storage.Read para recursos
  soltos, OpenJarCache/GetData para RMS e aplicação da paleta depois da leitura.
  MeasureImage chama o parser original. Construtores conservam placeholders de
  240x240 ou a dimensão do cabeçalho e carregam pixels só em Use. O catálogo local
  autenticado fornece RGBA8. O ciclo de uso/expiração passou 56 observações.
- Atlas de GPU fica desabilitado no CPU: SetImageAtlasId segue a primeira guarda
  do original; packing não é emulado nem altera os arquivos de imagem.
- MotionEvent ganhou bindings exatos de overloads já existentes. O backend SDL
  aceita múltiplas identidades reais (dispositivo,dedo); mouse não vira dedo.
  Isso não decide o desenho de entrada do 3DS.
- URLEncoder.Encode revelou Byte.ToString("X2") e String.Remove. Foram emitidos
  os overloads medidos, sem corrigir as peculiaridades do URLEncoder original.
  O teste de hexadecimal percorre os 256 bytes. Remove(startIndex) conserva a
  validação startIndex >= Length do Mono histórico (String.cs:1477); não foi
  substituído pelo comportamento de outra geração do .NET.
- Argumentos temporários têm o tipo declarado do parâmetro. Isso resolve a
  dedução ambígua de Vector<Base>.AddElement(derived = value) em C++, mantendo
  a avaliação de receptor e argumentos da esquerda para a direita.
- Uma classe genérica com argumento de referência reproduziu a falha de nome
  gerenciado em sete casos novos. Nomes estáticos gerados e traits de referência
  resolveram esses sete; não se instancia um objeto para descobrir o nome.
- A covariância de arrays descoberta em BootForm.Load preserva armazenamento,
  identidade, tipo real e verificação de escrita. Uma visão Base[] de Derived[]
  não copia seus elementos. Os testes cobrem alias, foreach, escrita inválida,
  endereço ref incompatível, clone, cópia e cast inválido. Array.Clone volta como
  object, conforme a assinatura gerenciada. Strings e arrays aninhados covariantes
  não são declarados cobertos por essa extensão.
- Break/continue que atravessam finally/using usam BranchFlow fora da hierarquia
  de exceções gerenciadas. O alvo lexical recebe o token depois da limpeza.
  JarInflater(string) contém esse break após _load. Fixtures cobrem for, while,
  do, foreach, switch, catch, limpezas aninhadas e exceção que substitui a saída.
  Goto entre regiões protegidas continua recusado.
- Tipos fonte usados apenas em catch agora fazem parte da dependência de layout;
  Main.OnUpdate captura NotPermitException sem precisar construí-la nesse corpo.
- A ponte de Terminate segue IApplication.Terminate: o receptor marca termination_,
  depois o adaptador gerado chama ProcessEvent(Exit), KairoBase.Finish e
  ClockTime.Destroy. O host não substitui essa sequência por uma flag de sucesso.

Após essas extensões, a fixture principal mediu 169 métodos e 1.183/1.183
observações. São métodos sintéticos, não corpos do jogo executados.

ResetOrientation restaura no SDL a dimensão da janela capturada na criação;
não inventa política de autorrotação nem de telas do 3DS. O diferencial passou
54 observações e 10 verificações próprias; um teste adicional com janela SDL
real, usando o driver dummy, redimensiona e restaura a janela duas vezes.

Graphics mantém a pilha de matrizes local/cumulativa e sua concatenação com a
matriz do mundo conforme SetMatrix/PushMatrix/UpdateScreenMatrix. Matrix
continua traduzida do C#, e adaptadores gerados copiam seus nove floats para
o rasterizador. A fixture principal ganhou três cenários para chamadas por
adaptador, argumentos opcionais, ordem de avaliação com receptor nulo e
delegate, inclusive redirecionamento estático e parâmetro ref. Construtores
encadeados passam os defaults de parâmetros opcionais nos inicializadores this/base.
O oráculo de desenho compara estados de matriz, coordenadas e layout de texto;
os testes nativos também exercitam rotação e espelhamento com pixels próprios.
Equivalência de rasterização com o Android continua UNKNOWN.

As tentativas Release 9 e 10 também apresentaram zero frames. A 9 parou em
SurfaceManager.AdjustSurfaceLayout; a 10, em GameView.Draw. Na fotografia da
tentativa 10, 1.669 corpos compilados e 54 slots virtuais pendentes. Hash do
executável b0018699b6b6fb97b8bf863187a23a4fadadd48340b930b71f629069256ee89c;
duração de execução 2,359 segundos. O RSS de 49.754.112 bytes e os 20.541.440
bytes de páginas executáveis residentes são somente a amostra anterior a Main,
não medição de um jogo estável. O recibo guarda 58 armadilhas, incluindo quatro
colaboradores de bootstrap, e os hashes dos logs privados.

Os diagnósticos posteriores acrescentaram GetResource com a identidade do
ResourceManager retido no bootstrap. O teste confere null antes do carregamento
e o mesmo objeto depois; seis verificações nativas e 12 observações diferenciais.
InitializePlatform também conserva Fullscreen(false) antes de DisplayMetrics,
na posição de Awake. O backend de janela passou as seis verificações de reset
e alternância real de fullscreen com o driver SDL dummy.

O tratamento de ShowToast no PC conserva o ramo não Android de KairoPlugin:
Debug.Log na thread de UI, com espera. Não é remoção de mensagens de gameplay.
Os textos vêm dos mesmos argumentos gerados ou assets locais; logs com conteúdo
ficam em build/. A API de texto diagnóstico que precisa de decisão está em
[diagnostic-text-input.md](../design/diagnostic-text-input.md).

## Publicação de evidência

A primeira verificação completa posterior encontrou uma regressão no check 25,
runtime-CollectionFixtures, após 24 checks aprovados. Array<Ref<IMarker>>
assumia source_reference_assignable em toda interface C++, inclusive a fachada
polimórfica própria da fixture. MSVC recusou a instanciação. A tentativa FAIL
e seu log foram conservados em build/audit-20261109 antes da repetição.

A correção admite os vínculos exatos tipo/Object sem inventar outras relações
de ancestralidade; os tipos gerados continuam usando seus metadados completos.
A conversão de arrays valida o tipo de elemento real do armazenamento, sem
inferir covariância pelos objetos atualmente contidos. A nova fixture compara
identidade, leitura por object[] e escrita incompatível: 66 observações de
coleções, aprovadas nos dois perfis. O diferencial principal do tradutor também
foi repetido, 1.183/1.183. A repetição completa é necessária antes da publicação.

O recibo Game conserva os localizadores relativos à raiz. node_source ausente
herda source quando os dois eram idênticos; node_source_default registra essa
regra. Não são removidos métodos, diagnósticos nem linhas. Essa deduplicação
é complementada por source-file-table-v1: source/node_source inteiros indexam
source_files. translator/report_paths.py expande os localizadores sem perda;
o teste sobre o recibo real passou de 2.024.317 para 1.908.810 bytes, conservando
o mesmo objeto depois da expansão. A política de 2.000.000 bytes não é afrouxada.

Licença/distribuição permanece uma decisão do usuário, conforme
[a auditoria](collation-license-review.md). As tabelas históricas já autorizadas
continuam separadas por licença. As oito diferenças de semântica Android estão em
[android-semantic-unknowns.md](android-semantic-unknowns.md), sem normalização.


A segunda verificação completa encontrou em debug-input-snapshot uma contagem
antiga no runner: a nova asserção de multitoque elevou os invariantes nativos
de 35 para 36. O executável já passava os 36; o runner ainda exigia 35.
O runner foi corrigido e repetiu 24/24 observações diferenciais e 36 asserções.
A tentativa FAIL e o log foram conservados em build/audit-20261109.
A fixture não foi reduzida para fazer a verificação passar.

O recibo público atual usa também method_record_encoding=defaults-v1.
Somente campos presentes e iguais em todos os registros admitidos têm seu
valor internado em method_record_defaults. O expansor reconstitui o objeto
integral, com testes de round-trip. Não são omitidos IDs ou diagnósticos.
Na fotografia de 1.676 corpos, o recibo tem 1.671.583 bytes; a política de
2.000.000 bytes continua intacta. Os números anteriores de compressão nesta
nota descrevem etapas anteriores, não o tamanho atual.

## Último diagnóstico Release: tentativa 11

Fotografia privada h: 1.676 corpos Game compilados, 51 slots virtuais pendentes
e quatro guardas de bootstrap, total de 55 armadilhas declaradas. Configuração,
compilação e link concluíram; o supervisor encerrou no marcador
M:surface.GamePad.Draw(kairo.unity.ui.Graphics). Esse corpo depende de
GamePad.AddTouch e GamePad.DrawSoftLabel, cujo diagnóstico alcança
Canvas.IsLinearFilterEnable. Não foi removida a chamada nem desligado o pad.

O executável Release tem SHA-256
a6e4125f1b1338a86815d997460db76146f678ddd5424e27f8360f22b0c75941.
Duração 1,766 segundos, código de processo 1, zero frames apresentados.
RSS antes de Main: 49.434.624 bytes; imagem do executável residente:
20.439.040 bytes, sem isolar a seção de código. Framebuffer: 268.800 bytes;
callback de áudio: 8.192 bytes. São amostras anteriores ao jogo estável,
não um orçamento de gameplay. Residência por categoria de texturas/áudio/
fontes/heap e frame time estável continuam UNKNOWN. Os hashes dos logs
privados e a auditoria das 2/30/65 dependências de headers estão no recibo.

O ADB já existente foi consultado novamente e não retornou dispositivos.
Nenhum pacote foi instalado, substituído ou executado em aparelho. Comparação
visual de layout, textos e ordem dos elementos com o original Android: UNKNOWN.
A pendência ImeOnBlock é independente desse primeiro ponto de parada e continua
bloqueando a emissão estrita de TitleForm.Update. Nenhum backend modal proposto
foi adotado antes da decisão do usuário.

## Verificação final desta continuidade

A execução final passou **89/89 checks**, incluindo recompilação integral,
coleções, entrada de depuração, mídia, serviços, bootstrap e geração dos
inventários. Os **88 recibos** vinculados conservam seus hashes; a comparação
contra af66d13 registra 456 ganhos Game, zero perdas e zero retiradas de
qualificação portável. O checkpoint tem 1.676/1.958 métodos Game compilados,
51 slots virtuais pendentes e zero estados runs/verified em jogo.
Isso substitui o estado FAIL das duas tentativas anteriores, cujos logs
privados foram preservados; não muda seus resultados históricos.
