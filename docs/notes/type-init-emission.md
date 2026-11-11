# Inicialização de tipos: limites das transformações

A primeira transformação adotada elimina os getters de campos estáticos do
próprio tipo quando a entrada do método já executou a guarda desse tipo.
As fixtures e os kernels correspondentes estão em `runtime-cost-round.md`.

O C# exige que o construtor estático explícito rode antes da primeira criação
de instância ou referência a membro estático, no máximo uma vez por tipo
fechado. Uma falha não autoriza repetir seus efeitos. A base normativa é a
[seção de construtores estáticos da especificação](https://learn.microsoft.com/en-us/dotnet/csharp/language-reference/language-specification/classes#1512-static-constructors).

Consequências para a próxima transformação, ainda não adotada:

- Retirar uma guarda de método de instância exige que **todos** os caminhos
  de construção daquele tipo já a garantam. Isso inclui a chamada `_init`
  de uma classe base e a construção feita pela cola nativa; testar apenas a
  factory da classe concreta não basta.
- Içar a inicialização de outro tipo para a entrada do método pode antecipar
  uma exceção ou um efeito que, no fonte, ocorre depois de outro comando,
  ou nem ocorre quando o ramo não é tomado. Portanto a regra não será
  aplicada indiscriminadamente a tipos com construtor estático explícito.
- Inicializadores vazios ou constantes sem efeitos são candidatos separados.
  Alocações, chamadas e acessos a outros tipos não serão classificados como
  puros apenas porque o tipo é `beforefieldinit`.

O caminho rápido atômico de inicialização concluída continua preservando a
sincronização entre threads. Nenhuma contagem não atômica ou suposição de
thread única foi introduzida.
