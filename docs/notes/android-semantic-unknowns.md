# Diferenças semânticas ainda UNKNOWN no Android

Decisão do usuário nesta continuidade: documentar e seguir o boot, sem alterar
o juiz ou normalizar os resultados para ocultar essas diferenças.

## Sinal de JMath.Sin(-0)

Método: M:java.lang.JMath.Sin(System.Double).
Fixture: translator/test_portable.py, entradas double; caso atual 62:1.
Reprodução: python translator/test_portable.py, após gerar o corpus portável.

Entrada IEEE-754 double: 8000000000000000 (zero negativo). O oráculo próprio
no Mono do SDK Unity Windows devolve 0000000000000000; o C++ devolve
8000000000000000. A comparação usa bits exatos e mantém essa observação
divergente. A raiz permanece compilada/exercitada e sem verificação estrita.

O exame estático registrou a importação sin no Mono Android, mas não mede o
resultado da execução no aparelho. O sinal efetivo no Android é UNKNOWN.
Recibos: config/phase2-portable-differential.json e
config/phase2-android-math.json.

## Campo de referência nula passado por ref

Fixture: tests/translator/RefFixtures.cs,
M:SyntheticRefs.Source.NullFieldOrder; sete entradas, casos atuais 10:0 a 10:6.
Reprodução: python translator/test_ref.py.

O teste passa um campo de receptor nulo por ref e mede efeitos dos argumentos
seguintes e dos callees que ignoram/leem/escrevem a referência. No SDK Mono
Windows padrão, criar o endereço não necessariamente lança: argumentos
seguintes podem executar antes de uma falha ao desreferenciar. O C++ atual
valida o receptor antes de formar uma referência C++ e produz a exceção mais
cedo. O caso agregado retorna 2 no oráculo e 0 no nativo, nos sete inputs.

São 133/140 correspondências e 19/20 métodos qualificados nessa fixture; o
método divergente não é promovido. O controle com
MONO_DEBUG=explicit-null-checks faz os 140 casos coincidirem, mas essa opção
não foi adotada no oráculo canônico. O flag efetivo e a ordem de exceções do
Android são UNKNOWN. Não se forma uma referência C++ nula para imitar a VM.

Fonte oficial, hashes e controle completo em docs/notes/mono-ref-null-order.md;
recibo em config/phase2-ref-lowering-fixtures.json. Os números dos casos
identificam a revisão atual do harness; os DocIDs identificam os métodos.
