# Valores, referências e campos compartilhados no emissor

Após `cde8988`, o construtor implícito passou a analisar somente seu próprio
corpo executável. Um método não chamado com `goto` e local de tipo não suportado
não pode acrescentar variáveis ao construtor. A fixture negativa conserva esse
método recusado e confirma que o construtor continua emitido.

`String.Concat(object,object,object)` captura os três argumentos antes de chamar
qualquer `ToString`, depois converte os objetos da esquerda para a direita.
As fixtures incluem argumentos nulos, `ToString` que retorna null e exceção na
primeira conversão. Essas mudanças, com os casos de inicialização estática abaixo,
passaram em 59 métodos e 413 casos no perfil Unity.

O valor nativo Vector2 tem somente dois campos float32, construtor e Set. A
assinatura e as duas gravações de campos foram verificadas estaticamente na DLL
autenticada do APK. Os originais não foram executados nem incorporados ao port.
O emissor preserva endereço de elemento de array e de campo de objeto durante os
argumentos; variáveis foreach são cópias e campos readonly usam cópia defensiva.
São 21 métodos e 147 casos próprios diferenciais. Normalize, operadores, boxing
e formatação de Vector2 continuam sem binding.

Os nove campos aprovados de BootForm usam SharedField com load/store explícitos:
state_, loadCnt_, loadMax_, bowWait_, frame_wait, e_, error_, regist_ e th_. Cada
compound assignment lê antes do RHS e escreve depois; não existe fetch_add nem
operação composta indivisível. Os inicializadores, trace e release também usam
esse armazenamento. A fixture do emissor passou em 12 métodos e 84 casos,
incluindo referências e arrays cacheados depois de outra gravação e de GC.
Isso remove o comportamento indefinido desses acessos C++, mas não prova que
todo payload transitivo do jogo esteja livre de races. A perda da referência
th_ de uma execução nova pelo finally antigo foi preservada; reentrada continua
UNKNOWN, sem Join ou cancelamento acrescentado.

O bridge gerado de Canvas mantém o SurfaceManagerBase original e instala um
CallbackFormSurface separado. Os delegates possuem alvo visível ao GC e captura
fraca; não escondem uma segunda referência forte na função nativa. A lista é
consultada no momento do evento, inclusive quando foi populada depois do setter.
O toque percorre a lista de trás para frente; a limpeza de superfícies do jogo
percorre para frente e filtra IsGameSurface, como ExecuteInitAndFinish. Quatro
cenários próprios do emissor passaram em 28 casos; os helpers compilados não são
contados como entradas individualmente exercitadas. A prova independente de
fragmentos originais permanece em phase2-surface-bridge-tests.json.

Ref/out de métodos fonte aceita locais, parâmetros, campos mutáveis e elementos
de arrays. Captura receptor e índices uma vez e conserva o objeto/array que
contém o endereço durante os argumentos. O protocolo continua recusando endereço
de SharedField, escape readonly e delegates por referência. Foram executados
20 métodos e 140 casos: 133 correspondências, 19 métodos qualificados e uma
diferença de plataforma conhecida, sem promover o método divergente.

Essa diferença é um campo de referência nula passado por ref. Unity Mono no
Windows adia a falha até a primeira leitura ou escrita pelo callee; se ele ignora
o parâmetro, pode nem lançar. .NET 10 falha antes dos argumentos seguintes. As
sondas próprias Ignore/Read/Write mediram ambos os comportamentos, sem executar
binário original. O C++ conserva validação antecipada definida, sem formar uma
referência C++ nula. O comportamento Android é UNKNOWN e exige investigação
separada; não foi declarado equivalente ao Mono Windows. Null e bounds de array,
aliases, alterações antes de exceção e troca do array durante outro argumento
passaram nas fixtures próprias. O report inclui o censo bound de todos os sites
ref/out, com categorias de armazenamento e IDs de campos para essa investigação.

O inicializador de tipo materializa todos os inicializadores explícitos,
inclusive null, e todo campo efetivamente usado ou refletido. Um campo estático
sem inicializador e nunca referenciado não exige layout de um tipo de plataforma
inacessível. A fixture inclui um campo WeakReference não usado e uma cadeia
A.Init que grava um campo B sem inicializador, verificando a ordem de B e seu
valor default. A primeira compilação Game expôs três dependências de storage
omitidas quando um campo inicializado já estava no conjunto do caller; a regra
foi corrigida para requerer sempre todos os inicializadores explícitos do tipo.

Nenhuma dessas provas significa boot, menu ou partida. Os recibos de Game
continuam separados de execução e verificação funcional.
