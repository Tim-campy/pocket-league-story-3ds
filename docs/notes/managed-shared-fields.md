# Acessos individuais a campos compartilhados

`managed_shared_field.hpp` fornece `pls::cs::SharedField<T>` para o emissor
aplicar somente aos campos comprovadamente compartilhados. O wrapper mantém
um mutex por campo e expõe `T load() const` e `void store(T)`. É inicializável
com um valor, tem default `T{}`, não é copiável e não tem conversão implícita,
referência ao conteúdo nem operadores aritméticos. A integração concreta dos
campos de BootForm pertence ao tradutor e ao inventário de compartilhamento;
esta fundação não promove métodos do jogo.

O lowering esperado de `field++` continua **load, add_i32, store**, em três
passos distintos. Não existe fetch_add, compare_exchange nem bloqueio global
de métodos. Uma chamada que lê vários campos não recebe um snapshot atômico
do objeto. O mutex evita data races de C++ em cada acesso traduzido; não tenta
reproduzir uma sequência de escalonamento do Android nem tornar transações
operações que no C# eram separadas. Os alvos iniciais são Int32, bool, String,
Ref e wrappers de arrays; o emissor não deve aplicar genericamente o wrapper
a tipos com cópias que executem código gerenciado.

`load` devolve uma cópia forte independente. Um store posterior substitui o
campo, mas não altera a String/ref/Array já copiada. Arrays continuam aliases:
o wrapper sincroniza a referência ao array, **não seus elementos**, nem muda
a semântica dos objetos apontados. Ref/out, endereços interiores, propriedades,
campos nativos de formulários e arrays mutáveis requerem análise separada;
não há conversão que silenciosamente escape do lock.

`trace_edges` e `release_edges` integram-se aos traits já usados por
`trace_value`/`release_value`. O emissor deve incluir campos SharedField no
trace da classe, sem carregar uma cópia temporária como substituto de um
edge do objeto. O valor deslocado pelo store/release é liberado depois de
soltar o mutex. Nenhum safepoint ou callback gerenciado ocorre com o lock
preso. A pausa cooperativa do GC continua obrigatória para todos os workers
gerenciados; SharedField não suspende threads nativas nem substitui os hooks
de captura, registro de mutator e backedges.

`python tools/test_shared_fields.py` passou **21 invariantes próprios**, com
threads e barreiras: defaults dos cinco tipos, publicação de ref/String/array,
retenção das cópias após substituição, contagem Int32 com wrap, edges de GC de
String/array/ref, preservação de ciclos enraizados e coleta após retirada do
edge. Duas threads leem zero antes da barreira e gravam um depois dela: o
resultado é **um**, comprovando que o incremento permanece dividido e permite
lost update. O recibo é `config/phase2-shared-field-tests.json`. Não houve
ThreadSanitizer nem prova de equivalência de escalonamento no Android; não
houve execução de binário original ou do jogo gerado nesse teste.
