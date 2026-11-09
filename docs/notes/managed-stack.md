# Stack usado por KairoBase

O censo semântico `tools/inventory_stack.py --original-managed <externo>` liga
os símbolos dos dois assemblies contra as referências originais externas.
`config/stack-usage.json` mede **um campo** e **oito referências a membros**,
todas no KairoLibrary: KairoBase.connects_ usa ctor padrão uma vez, Count três
vezes, Push uma vez, Pop uma vez e Peek duas vezes. Nenhum Stack genérico foi
encontrado no jogo, nem outros membros Stack no corpus; zero erros semânticos.

`managed_collections.hpp` implementa somente esse subconjunto em C++ próprio:
`Stack<T>::make()`, `get_Count()/count()`, `Push(T)`, `Pop()` e `Peek()`.
O construtor C++ default representa null, como os wrappers List/Array existentes;
make cria a instância gerenciada. Cópias do wrapper são aliases. Conversão
as_object/from_object preserva identidade e rejeita tipos genéricos incompatíveis.
Push admite referências null; Pop remove o topo LIFO e limpa seu slot; Peek não
o remove. Instância null gera NullReferenceException; Pop/Peek vazios geram
InvalidOperationException. Não há remoção por identidade nem correção do
comportamento do ConnectObject.Dispose original.

Não foram adicionados Clear, Contains, ToArray, CopyTo, TrimExcess, GetEnumerator
nem outros construtores. Não há contrato de versão/enumeração alegado para um
enumerador que o corpus não usa. O tradutor deve recusar esses membros até uma
necessidade comprovada e testes específicos.

O oráculo antigo revelou que Stack genérico reside no **System.dll** do SDK,
não no mscorlib. Compilar apenas com core falhou; a referência System.dll foi
acrescentada explicitamente ao fixture. A DLL do SDK Unity tem SHA-256 integral
`7e72b92ddcd6b7b791ab24dd5756544f2da81f65e7ba7d1ebe8223123720d0ac`,
igual ao membro System.dll do APK, comparado em memória sem copiá-lo nem
executá-lo. O fixture executa somente código próprio com o framework instalado
do SDK. O arquivo efetivamente resolvido pelo oráculo também é registrado e
validado pelo hash. A identidade do framework não prova o JIT Android.

As sondas próprias de backing observam capacidade inicial zero em ambos os
perfis. No Mono o campo inicial é null e o primeiro Push aloca **16**, depois
dobra; no .NET moderno o campo começa array vazio, o primeiro Push aloca **4**
e depois dobra. A implementação interna distingue os perfis e conserva essa
estratégia. Não expõe capacidade como API CLR nem implementa reflexão privada;
as sondas de backing ficam identificadas como source-only no recibo. O tamanho
real de objetos/ponteiros no C++ é diferente do CLR e não se infere igualdade
de memória residente por igualar a estratégia de capacidade.

`python tools/test_stack.py` passou **32/32 casos diferenciais**, 16 por perfil
SDK Mono/.NET: null/default, underflow, aliases, LIFO, null em elementos,
identidade de referências, retorno Pop independente, conversão object, tipos
genéricos incompatíveis, crescimento/reuso, extremos Int32 e String. Mais
**14 invariantes próprios de GC** provam tracing de elementos vivos, retenção
do resultado Pop, limpeza do slot, duplicatas, aliases e coleta do ciclo
holder→Stack→item→holder, equivalente ao formato de referências necessário
para ConnectObject. O recibo é `config/phase2-stack-fixtures.json`.

O header compartilhado mudou; os recibos dependentes precisam ser renovados
antes do checkpoint. Essas provas são de fundação, sem promoção de métodos
do jogo, execução de DLL do jogo, assets, rede ou concessão de itens pagos.
