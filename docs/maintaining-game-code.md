# Manter o código do jogo (`src/game/`)

Vale para o código como está na tag `v1.0.0-faithful` e depois dela: C++17 formatado
por `src/game/.clang-format`, mantido à mão. As regras gerais e os limites do agente
estão em `AGENTS.md`; aqui estão as receitas e o porquê de cada convenção.

Cada arquivo abre com a linha de origem:

```cpp
// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
```

Cada método traz antes o comentário `// M:<DocID>`, que o liga ao método do C# em
`reference/` (ex.: `// M:game.Team.Update` ↔ `reference/src/Assembly-CSharp/game/Team.cs`,
método `Update`). Mantenha o comentário; num método novo, invente um DocID no mesmo
formato (`M:game.Team.NovoMetodo(System.Int32)`).

## 1. Receitas

### Classe gerenciada nova

`src/game/game.MinhaClasse.hpp`:

```cpp
// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace game {

struct MinhaClasse : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("game.MinhaClasse", MinhaClasse, pls::cs::Object)
    pls::cs::String nome_{};
    pls::cs::Int32 valor_{};
    static void create_init(pls::cs::Ref<MinhaClasse> self);
    static pls::cs::Ref<MinhaClasse> create();
    pls::cs::Int32 Dobro();
};
} // namespace game
}
```

`src/game/game.MinhaClasse.cpp`:

```cpp
// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "game.MinhaClasse.hpp"

namespace pls::game {
namespace game {

void MinhaClasse::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);          // numa classe derivada: Base::trace_edges
    pls::cs::trace_value(nome_, visitor);
}

void MinhaClasse::create_init(pls::cs::Ref<MinhaClasse> self) {
    // 1) inicializadores de campo, 2) construtor da base, 3) corpo (ordem do C#)
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.MinhaClasse.#ctor", game);
    { self->nome_ = literal(u"..."); }
}

// M:game.MinhaClasse.#ctor
pls::cs::Ref<MinhaClasse> MinhaClasse::create() {
    auto self = pls::cs::make_ref<MinhaClasse>();
    MinhaClasse::create_init(self);
    return self;
}

// M:game.MinhaClasse.Dobro
pls::cs::Int32 MinhaClasse::Dobro() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.MinhaClasse.Dobro", game);
    { return valor_ * 2; }
}
} // namespace game
}
```

O build encontra o `.cpp` sozinho (`CMakeLists.txt` usa `GLOB` em `src/game/*.cpp`).
Para um modelo real e curto, veja `src/game/data.SponsorData.*`. Classe que herda de
outra do jogo: `PLS_MANAGED_CLASS("ns.Classe", Classe, Base, Interface1, ...)`,
`Base::trace_edges(visitor)` no começo de `trace_edges` e
`Base::create_init(pls::cs::static_pointer_cast<Base>(self))` em `create_init`.

### Campo

- **Valor** (`Int32`, `Single`, `bool`, `Int64`...): declare com `{}`; nada mais.
- **Referência** (`Ref<...>`, `String`, `Array<...>`, `Delegate<...>`, `List`,
  `Dictionary`...): declare com `{}` **e** acrescente
  `pls::cs::trace_value(campo_, visitor);` no `trace_edges` da classe.

### Estático

O valor mora num armazenamento do `.cpp`; o acesso passa por uma função que garante a
inicialização do tipo; referências entram nas raízes:

```cpp
// .hpp
static pls::cs::Array<pls::cs::String>& nomes();
// .cpp
static StringArray MinhaClasse_nomes_storage{};
static PLS_NOINLINE void cs_init_<hash>_slow(pls::cs::TypeInitFlag& flag) {   // já existe na classe
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(MinhaClasse_nomes_storage, visitor);             // + esta linha
    });
    static pls::cs::TypeInitState state;
    state.run("game.MinhaClasse", flag, []() { /* inicializadores estáticos, na ordem do C# */ });
}
StringArray& MinhaClasse::nomes() {
    MinhaClasse::ensure_initialized();
    return MinhaClasse_nomes_storage;
}
```

Classe sem estáticos ainda não tem `ensure_initialized`/`cs_init_*`: copie o padrão de
`data.SponsorData.cpp` (o nome `cs_init_<hash>_slow` é só um identificador único do
arquivo; um nome legível serve). Constantes (`const` do C#) são
`static constexpr pls::cs::Int32 NOME = 1;` e não precisam de nada disso.

### Literal

- Texto: `literal(u"...")` (UTF-16; cria a string uma vez). Texto visível novo passa
  pelo mecanismo de idioma (`AGENTS.md`, seção 7) e precisa de decisão do usuário.
  O check de literais aceita só textos do C# reconstruído e os listados em
  `config/added-literals.json` (cada um com a entrada correspondente em
  `docs/changes-from-original.md`).
- Array constante: `IntArray::from({4, 2})`; de referências, `StringArray::from({...})`.

### Chamada à plataforma ou à KairoLibrary

Embrulhe em `api_call` (mede o tempo no diagnóstico; não muda o resultado):

```cpp
pls::cs::Int32 n = pls::diagnostic::api_call(
    [&]() -> decltype(auto) { return kl_lang::JInteger::ParseInt(texto); });
```

Os apelidos `kl_*` são `namespace` declarados no topo de cada `.cpp`
(ex.: `namespace kl_lang = pls::generated::java::lang;`). A API disponível está nos
cabeçalhos de `src/kairo/common/generated/` (KairoLibrary) e `src/kairo/api/`
(plataforma); você chama, não muda.

### Delegate

- Método estático:
  `pls::cs::Delegate<void()>::from_static("M:ns.Classe.Metodo", []() { Classe::Metodo(); })`.
- Lambda (`() => ...` do C#):

  ```cpp
  pls::cs::Delegate<void()>::from_closure(
      pls::cs::raw(this), std::string("M:ns.Classe.Metodo:<id único>"),
      [self = this]() -> void { require(self->alvo_)->Fazer(); },
      this);        // <- todo valor gerenciado usado pela lambda, de novo aqui
  ```

  O identificador (`raw(this)` + texto) reproduz a igualdade de delegates do C#
  (`+=`/`-=`). **A lista final é o que o coletor enxerga**: uma `Ref` capturada só na
  lambda C++ não é rastreada.
- Método de instância (`new Delegate(obj.Metodo)`): use `Delegate<...>::bind(alvo,
  "M:...", [cs_weak = pls::cs::DelegateCapture<T>(alvo)](args...) { ... })`, como em
  `form.GameForm.cpp` (`RenderGameScreen`).

## 2. O que cada macro e cada bloco faz

| Macro ou forma | Efeito | Definição |
|---|---|---|
| `PLS_MANAGED_CLASS(nome C#, Classe, Base, interfaces...)` | identidade do tipo: `GetType()`, `is`/`as`, casts, mensagens | `src/kairo/common/semantic_runtime.hpp` |
| `PLS_DELEGATE_SLOTS(Base, {slot, "M:..."}, ...)` | para cada `override`, o método C# que um delegate criado a partir dele representa (igualdade e remoção de delegates). Slots não redefinidos vão para a base; classe sem `override` não tem a linha | idem |
| `PLS_METHOD_SCOPE(assembly, DocID, área)` | build de diagnóstico: conta a chamada, mede o tempo, alimenta a cobertura dos roteiros e a salvaguarda de métodos inalcançáveis. No build normal some | `src/kairo/common/diagnostic_profile.hpp` |
| `pls::diagnostic::api_call(lambda)` | build de diagnóstico: mede o tempo da chamada à plataforma; senão só chama | idem |
| `pls::cs::GcCallSite gc_site("M:...")` | marca a origem de uma coleta explícita (`GC.Collect` do jogo) para a classificação do benchmark | `semantic_runtime.hpp` |
| `PLS_NOINLINE` | mantém fora de linha o caminho lento da inicialização de tipos | `managed_type_init.hpp` |
| blocos `{ auto cs_target = ...; auto cs_index = ...; auto cs_value = ...; ... }` | atribuição a elemento/campo na ordem do C#: alvo, índice, valor, e só então a escrita | — |
| `cs_arg0`, `cs_arg1`... | argumentos avaliados em ordem antes da chamada (o C++ não garante a ordem dos argumentos) | — |
| `cs_left`, `cs_right`, `cs_receiver` | lados de um operador e receptor de uma chamada, avaliados na ordem do C# | — |
| `[&]() -> T { ... }()` (lambda imediata) | expressão do C# que precisa de comandos (ordem, exceção, `?.`) | — |
| `pls::cs::run_finally(corpo, finally)` | `try/finally` do C#, inclusive quando o `finally` lança | `semantic_runtime.hpp` |

## 3. O que o código pressupõe

- **Coletor:** marcar e varrer, sem mover; vê campos em `trace_edges`, estáticos nas
  raízes (`GcRootProvider`) e a pilha. Não vê contêineres C++ nem objetos C++ comuns.
  Liberações explícitas de recursos (`Image.Unuse/Dispose`, `Offscreen.Dispose`,
  `SoundBase.Dispose`) são imediatas e independem da coleta.
- **Verificações:** `require(x)` e `nonnull(x)` lançam `NullReferenceException`;
  `a[i]`, `get_Item`, `set_Item` checam limites; `set_Item` em array de referências
  checa covariância. Nenhuma é removida sem aprovação.
- **Números:** `Int32` com volta e exceções do C# em `/` e `%`; `float` avaliado em
  binary64 e estreitado em armazenamentos, argumentos, retornos e conversões (regra
  do Mono ARM, `docs/notes/mono-arm-float-rule.md`). `/fp:strict` no PC, sem
  `-ffast-math` no 3DS.
- **Inicialização de tipos:** `ensure_initialized()` reproduz o construtor estático na
  ordem do original; o caminho rápido supõe um núcleo só no 3DS (todas as threads por
  `pls::cs::Thread`; verificado em tempo de execução, `PLS_FATAL managed thread`).
- **Nomes:** sobrecargas de mesma aridade levam sufixo (`RateConvert_3`) porque o C++
  as resolveria de outro jeito; chamadas não virtuais à base são qualificadas
  (`MyFormBase::Update()`).

## 4. Erros comuns e qual check pega

| Erro | Sintoma | Quem pega |
|---|---|---|
| campo de referência fora de `trace_edges` | objeto liberado em uso, falha aleatória longe da causa | `dev.py check` (mapa do coletor); `dev.py routes` (estresse e envenenamento) |
| estático de referência fora das raízes | idem | `dev.py check` (raízes) |
| referência guardada em `std::vector`, `std::map` ou objeto C++ comum | idem | só `dev.py routes` (estresse com envenenamento); revise à mão |
| `Ref` capturada numa lambda e não na lista de `from_closure` | idem, dentro de um delegate | só `dev.py routes`; revise à mão |
| classe sem `PLS_MANAGED_CLASS` ou com o nome errado | `is`/`as`/cast e `GetType()` errados | `dev.py check` (código de apoio) |
| `override` sem entrada em `PLS_DELEGATE_SLOTS` | delegate do método aponta para o da base | `dev.py check` (código de apoio) |
| texto alterado ou novo sem registro | texto diferente do original sem decisão | `dev.py check` (literais) |
| arquivo fora do estilo | diff ruidoso | `dev.py check` (formatação dos alterados) |
| `int`/`float` puros, acumular em `double`, `static_cast` no lugar de `to_int32` | resultado diferente do original (estouro, arredondamento) | nenhum automático; `dev.py routes` compara o percurso; revise à mão |
| ordem de avaliação mudada num trecho com efeito | resultado ou exceção diferente | nenhum automático; `dev.py routes`; revise à mão |
| alocação nova por quadro | pausas do coletor mais frequentes | nenhum automático; benchmark (`docs/benchmark-hardware.md`) |
| `require` removido | crash em vez de `NullReferenceException` | nenhum automático; não remova |
| mudança de comportamento sem registro | — | revisão; `docs/changes-from-original.md` |

O que nenhum check pega precisa de cuidado na edição e de menção no relatório.

## 5. Verificação

`python tools/dev.py check` depois de cada edição; antes de publicar, o ciclo completo
do `AGENTS.md` (seção 10). Os checks do código do jogo também estão na verificação
completa (`game-gc-map-and-roots`, `game-support-code`, `game-literals`).
