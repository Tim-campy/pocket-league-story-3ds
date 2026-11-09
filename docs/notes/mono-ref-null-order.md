# Endereço de campo nulo e ordem de exceções do Mono

Esta investigação usa executáveis novos de fixtures e leitura de fonte
oficial. Não executa DLLs/SOs do APK nem incorpora código da VM ao port.

No SDK Mono Unity, um argumento `ref nullHolder.field` não lança uma exceção
somente por criar o endereço. O próximo argumento ainda é avaliado; um callee
que ignora a referência retorna, enquanto ler/escrever por ela lança depois.
O CLR .NET 10 lança antes de avaliar o próximo argumento. A representação
atual do emissor valida o campo antes de criar uma referência C++: evita
comportamento indefinido e coincide com o CLR, mas não verifica esse caso
particular do perfil Mono padrão. A diferença não foi normalizada.

O fork oficial Unity na revisão
`b6587926c0f146c8b12985744f33a13b39a22d57` explica a diferença:

- [method-to-ir.c:8379](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/mini/method-to-ir.c#L8379)
  pede uma verificação antes de calcular o endereço do campo.
- [ir-emit.h:739](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/mini/ir-emit.h#L739)
  emite essa verificação somente quando `cfg->explicit_null_checks` está ativo.
- [mini.c:3394](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/mini/mini.c#L3394)
  copia a opção de debug para a compilação; a opção
  [explicit-null-checks](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/mini/mini.c#L5167)
  pode ser habilitada por `MONO_DEBUG`.

Como controle isolado, o mesmo executável próprio de 140 casos foi executado
novamente no SDK com `MONO_DEBUG=explicit-null-checks`, sem mudar o código do
port ou o juiz de produção. Alteraram-se exatamente as sete observações de
`NullFieldOrder`; **140/140 linhas completas** passaram a coincidir com o
nativo, incluindo os hashes do estado integral. O perfil padrão continuou
com **133/140**, sem ocultar os sete resultados divergentes. A flag não foi
adotada no diferencial canônico para fabricar uma aprovação.

O flag efetivo e a ordem de exceções no Android continuam **UNKNOWN**.
O caminho de emissão consultado é comum; isso não prova qual configuração ou
binário foi usado no aparelho. A revisão consultada também não identifica o
build exato de toda a VM do SDK.

Hashes dos arquivos oficiais lidos, guardados apenas em `build/`:

| Arquivo | SHA-256 |
|---|---|
| method-to-ir.c | ef429a524b59ab25f43f412725e52322dc4d4b83f590c9dfc835cf6d504f3380 |
| ir-emit.h | cd73f533b0f1d26fe0210d11a8a85c9d29624c89df8e1a2bdc348cd21b288b08 |
| mini.c | 81e7edf0e204cd1318676008e7bba3a63e982daa7d621f5ebcf3e6e290df8f86 |

Saídas próprias e comparação bruta ficam em
`build/mono-ref-semantics/explicit-null-checks.*`. Uma futura representação
que preserve endereços potencialmente nulos deve usar um proxy seguro de
referência gerenciada; criar uma referência C++ nula não é uma alternativa.
O censo de usos reais fica no recibo do tradutor, separado desta fixture.
