# Inicialização de tipos: limites da otimização

Estado: regra consultada; ablação preparada; nenhuma nova elisão adotada.

A especificação C# §15.12 liga o construtor estático explícito à primeira
criação de instância ou referência a membro estático do tipo. A inicialização
é por tipo fechado, admite dependências circulares e observação de campos
ainda zerados. §15.5.6.2 distingue os tipos sem construtor estático explícito:
seus inicializadores podem executar antes do primeiro uso de campo estático.
Fonte: [especificação C#, classes](https://learn.microsoft.com/en-us/dotnet/csharp/language-reference/language-specification/classes#1512-static-constructors).

Consequências para o emissor, a testar:

- Elidir uma checagem redundante do próprio tipo exige que a construção ou
  entrada aplicável já tenha realizado a inicialização. Recursão durante o
  inicializador precisa continuar vendo o estado parcial permitido.
- Antecipar a inicialização de outro tipo para a entrada de um método não é
  válido em geral: um ramo não tomado não pode provocar seu construtor
  explícito, exceção ou efeito observável. Uma checagem anterior que domina
  o acesso pode permitir eliminar a repetição sem antecipar o primeiro uso.
- Inicialização antecipada de `beforefieldinit` exige demonstrar ausência de
  efeitos observáveis e respeitar dependências; o atributo isolado não prova
  essa ausência. Uma ordem topológica não resolve ciclos por si só.

A variante `no-type-init` da ablação remove checagens apenas para medir o
custo nos kernels com estáticos previamente preparados. Não é implementação
de uma dessas provas e não autoriza remover checagens no jogo.
