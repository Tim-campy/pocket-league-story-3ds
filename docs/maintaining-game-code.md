# Manter o C++ legível do jogo (depois do congelamento)

Estado: **preparação (critério 5, itens C5b e C5c).** Antes do congelamento,
`src/game/` é saída do tradutor e não se edita à mão. No congelamento, o modo
legível passa a gerar `src/game/` uma última vez (C6b). A partir daí, este código
é mantido à mão, e as regras abaixo valem para cada mudança.

## Cabeçalho dos arquivos

Hoje cada unidade legível abre com:

```
// GENERATED (readable mode) by translator/Translator.cs from the reconstructed C#. Do not edit.
```

No congelamento, a geração final troca esse cabeçalho por:

```
// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on <data do congelamento>; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
```

O comentário `// M:<DocID>` antes de cada método continua: liga o C++ ao método
C# de origem e serve para comparar com a referência.

## O que o código pressupõe (não quebrar)

### Coletor de lixo

- **Campos de referência.** Todo campo que guarda uma referência gerenciada
  (`pls::cs::Ref<...>`, `String`, `Array<...>`, `Delegate<...>`) precisa aparecer
  em `trace_edges` da classe. Um campo esquecido em `trace_edges` deixa o
  coletor liberar um objeto ainda em uso.
- **Estáticos de referência.** Toda variável estática que guarda uma referência
  entra no `GcRootProvider` da classe.
- **Conferência automática:**
  `python tests/repository/test_gc_field_tracing.py src/game` (obrigatória
  depois do congelamento; faz parte da verificação completa).
- **Só `trace_edges` (A6, 2026-11-18).** O coletor (`src/runtime/tracing_gc.cpp`)
  marca a partir das raízes e libera o que não alcança; não há outro gancho por
  classe. `release_edges` e o build histórico com `shared_ptr`
  (`PLS_TRACING_GC=0`) foram removidos por decisão do usuário (2026-11-17, A6),
  depois de a verificação completa confirmar que nada dependia deles.
  `pls::cs::release_value` continua existindo só para liberações explícitas e
  imediatas (ex.: `Offscreen::cleanup`), que não dependem da coleta.
- **Ponteiros fora do heap gerenciado.** Uma referência guardada num objeto C++
  comum (não `pls::cs::Object`) não é vista pelo coletor, a não ser que esteja na
  pilha. Use um objeto gerenciado com `trace_edges` ou uma raiz.

### Verificações (obrigatórias)

- **Nulo:** `require(x)->campo` e `nonnull(...)` lançam a
  `NullReferenceException` do C#. Uma chamada `objeto->Método(...)` faz a
  checagem do receptor **depois** de avaliar os argumentos, como o C#.
- **Limites:** `a[i]`, `get_Item` e `set_Item` checam o índice. `set_Item`
  continua para arrays de referência porque também checa a covariância
  (`ArrayTypeMismatchException`).
- Nenhuma verificação é removida sem aprovação do usuário (regra do projeto).

### Números

- `pls::cs::Int32` tem estouro com volta (`unchecked` do C#), e `/` e `%` lançam
  as exceções do C#. Não troque por `int` puro: o estouro de `int` é indefinido
  em C++.
- `pls::cs::Single` guarda um `float`. A aritmética de `float` é avaliada em
  binary64 (`FloatEval`) e estreitada ao guardar, ao passar como argumento e ao
  retornar (regra Mono ARM, `docs/notes/mono-arm-float-rule.md`). Mantenha o
  tipo `Single` ou `float` nos armazenamentos; não acumule em `double`.
- Compile sempre com `/fp:strict` (PC) e sem `-ffast-math` (3DS).
- Teste: `python tools/test_readable_numeric.py` e
  `python tools/test_arm_float_model.py`.

### Ordem de avaliação

- O C++ não garante a ordem de avaliação dos argumentos nem dos dois lados de
  `+`, `<` etc. Onde a ordem importa (chamadas, exceções), o código usa
  temporários nomeados (`cs_receiver`, `cs_arg0`, ...) ou lambdas imediatos.
  Ao editar, mantenha a ordem do C#: avalie em variáveis antes de combinar.

### Exceções e `finally`

- `pls::cs::run_finally(corpo, finally)` reproduz o `finally` do C#, inclusive
  quando o `finally` lança durante outra exceção. Não troque por destrutor (RAII)
  sem garantir que o bloco nunca lança: um destrutor que lança durante outra
  exceção encerra o programa.
- `catch (const pls::cs::Exception& e)` pega toda exceção gerenciada;
  `pls::cs::capture_exception(e)` dá o objeto do C# (`Exception`) e registra a
  exceção no diagnóstico.

### Inicialização de tipos

- `Classe::ensure_initialized()` reproduz o construtor estático do C# na ordem
  do original. Não remova nem reordene sem rodar as fixtures de inicialização
  (`python tools/test_type_init.py`).

### Nomes

- Sobrecargas de mesma aridade levam sufixo (`RateConvert_3`) de propósito: o
  C++ resolveria sobrecargas de outro jeito que o C#.
- Métodos virtuais: o corpo está no próprio membro (`override`); chamadas não
  virtuais (`base.M()`) são qualificadas (`MyFormBase::Update()`).

## Antes de cada commit em `src/game/`

1. Compilar PC (`python tools/build_pc.py --apk APK ...`) e 3DS
   (`python tools/build_arm11_null.py ...`).
2. `python tests/repository/test_gc_field_tracing.py src/game`.
3. Rotas do critério 3 no PC (`tests/routes/*.route`) e a verificação completa
   (`python tools/verify_phase2.py --apk APK --original-managed MANAGED --jobs 1`).
4. Mudança de lógica: só depois do congelamento, registrada em `docs/backlog.md`
   com o motivo.
