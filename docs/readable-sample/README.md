# Amostra do modo legível do tradutor (critério 5)

Três classes do jogo, geradas pelo tradutor em **modo legível** a partir do C#
reconstruído (`reference/src/Assembly-CSharp/`), para aprovação do usuário:

| Classe | C# original | Arquivos | Tamanho legível | Lambdas de ordenação (normal → legível) |
|---|---|---|---|---|
| `data.SponsorData` (dados) | 251 linhas | `data.SponsorData.hpp/.cpp` | 88 + 393 linhas | 217 → 9 |
| `game.Team` (regras) | 2.301 linhas | `game.Team.hpp/.cpp` | 242 + 4.144 linhas | 3.372 → 198 |
| `form.TitleForm` (formulário) | 975 linhas | `form.TitleForm.hpp/.cpp` | 146 + 2.036 linhas | 1.403 → 81 |

Nenhum identificador com hash (`cs_<hash>`) aparece nos seis arquivos. São
código gerado: **não editar à mão**. O jogo continua sendo compilado a partir
de `src/game/` (modo normal, inalterado); o modo legível é uma opção do
tradutor, desligada por padrão.

## Como foi gerado

```
python translator/readable.py sample --original-managed "../Pocket League Story/original/extracted/assets/bin/Data/Managed"
```

O comando traduz a KairoLibrary e o Assembly-CSharp com `"readable": true`
(via `translator/translate.py --readable`, mesma requisição do build normal,
inclusive `--bootstrap-main`) para `build/readable-sample/` (fora do Git),
formata com o clang-format 22.1.3 do Visual Studio
(`translator/readable.clang-format`), copia as três classes para cá e compila
cada uma com MSVC. Nada é escrito em `config/` nem em `src/`. Os DLLs do APK são
usados só como referências de metadados do Roslyn; nenhum asset é lido.

Prova semântica (fixtures do tradutor contra o Mono):

```
python translator/readable.py lowering
```

## Regras de nomes

- **Namespaces:** os namespaces do C# viram namespaces C++ sob o namespace do
  assembly, que é o mesmo do build normal: `pls::game` (Assembly-CSharp) e
  `pls::generated` (KairoLibrary). Daí `pls::game::data::SponsorData`,
  `pls::game::game::Team`, `pls::game::form::TitleForm`. Escolhi manter o
  namespace do assembly (e não criar `pls::game_readable`) porque o modo legível
  é uma grafia alternativa do mesmo código: um build legível substituiria
  `src/game/` sem mexer no código de plataforma (`pls::kairo`, `pls::cs`). O
  `game::game` duplicado vem do namespace C# `game`.
- **Tipos:** nome do C#. Tipos aninhados são achatados: `SurfaceBase.TouchPoint`
  → `SurfaceBase_TouchPoint` (C++ não permite declarar adiante um tipo aninhado,
  e a tradução depende de declarações adiante).
- **Métodos:** um tipo com struct gerada guarda seus métodos como **funções
  membro estáticas** com o nome do C#; o receptor de um método de instância é o
  primeiro parâmetro explícito, `self`. Um tipo sem struct (classe estática ou
  usada só estaticamente) vira um namespace C++ com o mesmo nome. Membros de
  tipos genéricos ficam como funções livres `Tipo_Metodo` (o template da struct
  exigiria reescrever o cabeçalho de template de cada método).
- **Nomes sintetizados** (minúsculos, para se distinguirem do C#): `create`
  (aloca e inicializa, o `new`), `create_init` (só inicializa; usado pelos
  construtores derivados), `ensure_initialized` (inicializador de tipo, chamado
  na entrada de cada método, como o CLR faz), `Tipo_campo_storage` (armazenamento
  de campo estático; o acesso é sempre pelo acessor `Tipo::campo()`), `self`.
- **Campos e locais:** nome do C#. Duas variáveis locais do mesmo método com o
  mesmo nome (escopos irmãos) são numeradas na ordem de declaração (`i`, `i_2`).
  Um campo que esconde um campo da base recebe o sufixo `_Tipo`.
- **Colisões (regra determinística):** sobrecargas mantêm o nome quando o número
  de parâmetros C++ difere (o de instância conta `self`); sobrecargas com o mesmo
  número de parâmetros, e membros que colidiriam com um campo, um slot virtual ou
  um membro do runtime (`trace_edges`, `managed_type_name`, ...), são numerados
  na ordem de declaração (`Nome`, `Nome_2`, ...). Assim uma chamada nunca depende
  da resolução de sobrecarga do C++. Um slot virtual usa o nome do método raiz,
  salvo se duas raízes com o mesmo nome e os mesmos parâmetros (ou um campo do
  mesmo nome) se encontrarem numa classe; aí vira `TipoRaiz_Nome`. A implementação
  estática e o slot virtual podem ter o mesmo nome (`Init(self)` e `virtual
  Init()`): diferem pelo parâmetro `self`, e o slot só repassa para a estática.
  Palavras-chave e nomes reservados do C++ (e de macros como `min`, `small`)
  recebem `_` no fim.
- **Qualificação:** cada referência usa o menor sufixo do caminho de namespaces
  que a busca de nomes do C++ resolve para a mesma entidade a partir do ponto de
  uso (o tradutor simula a busca, incluindo escopo de classe e nomes injetados das
  bases). Referências à KairoLibrary saem como `generated::kairo::...`
  (`pls::generated`).
- **Arquivos:** um `.hpp` e um `.cpp` por tipo, com o nome completo do C#
  (`data.SponsorData.hpp`).

## Um método lado a lado: `SponsorData.Load`

C# reconstruído (`reference/src/Assembly-CSharp/data/SponsorData.cs`):

```csharp
public void Load(string src)
{
    int num = 0;
    string[] array = StringUtil.Split(src, "\t");
    id_ = JInteger.ParseInt(array[num++]);
    name_ = array[num++];
    charaIndex_ = JInteger.ParseInt(array[num++]);
    privilegeType_ = JInteger.ParseInt(array[num++]);
    privilegeValue_ = JInteger.ParseInt(array[num++]);
    costType_ = JInteger.ParseInt(array[num++]);
    cost_ = JInteger.ParseInt(array[num++]);
    income_[0] = JInteger.ParseInt(array[num++]);
    income_[1] = JInteger.ParseInt(array[num++]);
    satisfactDifficult_ = JInteger.ParseInt(array[num++]);
    difficult_ = JInteger.ParseInt(array[num++]);
    feelPtInt_ = JInteger.ParseInt(array[num++]);
    explain_ = array[num++];
    execsScript_ = EventData.ReadScript(array[num++]);
    flag_ = JInteger.ParseInt(array[num++]);
    feelPt_ = feelPtInt_;
}
```

C++ legível (`data.SponsorData.cpp`):

```cpp
// M:data.SponsorData.Load(System.String)
void SponsorData::Load(pls::cs::Ref<SponsorData> self, pls::cs::String src) {
    SponsorData::ensure_initialized();

    require(self);

    std::int32_t num = 0;
    pls::cs::Array<pls::cs::String> array =
        generated::kairo::unity::util::StringUtil::Split(src, literal(u"\t"));
    self->id_ = generated::java::lang::JInteger::ParseInt(array.get_Item(post_increment(num)));
    self->name_ = array.get_Item(post_increment(num));
    self->charaIndex_ = generated::java::lang::JInteger::ParseInt(array.get_Item(post_increment(num)));
    ...
    self->cost_ = generated::java::lang::JInteger::ParseInt(array.get_Item(post_increment(num)));
    ([&]() {
        auto cs_target = self->income_;
        auto cs_index = 0;
        auto cs_value = generated::java::lang::JInteger::ParseInt(array.get_Item(post_increment(num)));
        cs_target.set_Item(cs_index, cs_value);
        return cs_value;
    }());
    ... (income_[1] igual)
    self->explain_ = array.get_Item(post_increment(num));
    self->execsScript_ = EventData::ReadScript(array.get_Item(post_increment(num)));
    self->flag_ = generated::java::lang::JInteger::ParseInt(array.get_Item(post_increment(num)));
    self->feelPt_ = self->feelPtInt_;
}
```

Para comparação, a mesma primeira atribuição no modo normal (`src/game/`) é:

```cpp
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_3600; auto cs_index = ([&]() { auto cs_old = v_num_3579; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_3579 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_18df8a841fecdd70 = cs_value; return cs_value; }());
```

As verificações continuam visíveis e curtas: `require(x)` (lança
`NullReferenceException` se nulo), `get_Item`/`set_Item`/`at` (limites e nulo,
dentro do `pls::cs::Array`), `post_increment(num)` (incremento com wrap, sem UB).

## Como a equivalência é garantida

O modo legível **não é outra tradução**. A mesma passada do Roslyn produz as
mesmas operações na mesma ordem; depois:

1. **Renomeação** (pós-passada sobre o texto gerado): cada `cs_<hash>` é
   trocado pelo nome da tabela de símbolos; as declarações de método vão para
   dentro da struct como `static`. A tabela da KairoLibrary é gravada em
   `readable_names.json` e lida pela tradução do jogo.
2. **Ruído de diagnóstico removido:** `PLS_METHOD_SCOPE`,
   `pls::diagnostic::api_call` e `pls::source_allocations::completed` são
   repasses vazios fora dos builds de diagnóstico.
3. **Operandos escritos direto** em vez de dentro de uma lambda `([&]() {...}())`
   **só quando a ordem de avaliação não é observável.** Cada operando é
   classificado: puro (constante, `this`, local não capturado), leitura que só
   pode lançar `NullReferenceException`, leitura que pode lançar outra exceção, ou
   com efeito. A forma direta só é usada se nenhum operando tem efeito e todos só
   podem lançar NRE, ou se exatamente um não é puro e nenhum operando puro lê uma
   local que ele escreve. Fora disso a lambda do modo normal fica (é o caso do
   `income_[0] = ...` acima: a chamada poderia trocar `self->income_` antes do
   armazenamento, e o C# usa o array lido antes).
4. **Formatação** pelo clang-format (só espaços e chaves).

Quando `"readable"` está desligado nenhum desses caminhos é alcançado.

## O que não ficou limpo, e por quê

- **Lambdas de ordenação restantes** (9, 198 e 81 nas três classes): onde dois
  operandos podem ter efeito ou lançar exceções diferentes, a ordem do C#
  (esquerda para a direita) precisa ser imposta, e o C++ não garante ordem entre
  argumentos de função. As temporárias `cs_receiver`, `cs_arg0`, `cs_left`
  mantêm o prefixo `cs_` para não colidir com nomes do C#.
- **Aritmética:** `pls::cs::add_i32`, `mul_i32`, `div_i32`, `cast_integral<T>`
  ficam explícitas: o C# tem wrap em inteiros (o C++ teria UB) e a divisão lança
  `DivideByZeroException`/`OverflowException`.
- **Ponto flutuante (regra Mono ARM):** `static_cast<double>(...)` nos operandos
  `float` e `static_cast<float>(...)` nos armazenamentos, argumentos e retornos
  são a regra adotada (`docs/notes/mono-arm-float-rule.md`); não podem sumir.
- **Literais de texto:** `literal(u"...")` consulta o pool de literais do runtime
  (identidade igual ao `ldstr` do CLR). Caracteres fora do ASCII saem como
  `\uXXXX` com o texto original num comentário. Custo: o modo normal guarda o
  literal por sítio; o legível faz uma consulta ao pool por avaliação.
- **Arrays constantes** do jogo aparecem como
  `pls::assets::baked_array<T>("<sha256>")`: o conteúdo vem do APK do usuário em
  tempo de build (regra de conteúdo), então o código só pode citar o id.
- **Exceções:** `try`/`catch` captura `pls::cs::Exception` e testa o tipo
  gerenciado (`pls::cs::exception_is`, `dynamic_pointer_cast`); `finally` vira
  `pls::cs::run_finally`, e `return` dentro de `finally` usa `ReturnFlow`.
- **Coletor:** cada struct tem `trace_edges` e cada tipo com
  campos estáticos registra raízes (`GcRootProvider`); são necessários ao coletor
  por rastreamento.
- **Delegates e closures:** viram uma struct local `Lambda_<linha>_<coluna>` com
  células para as variáveis capturadas e uma referência fraca no delegate.
- **Slots virtuais:** o slot só repassa para a função estática
  (`TitleForm::Init()` → `TitleForm::Init(self)`); `managed_delegate_method_id`
  e `source_reference_assignable` são metadados do runtime (identidade de
  delegates, `is`/`as`).
- **Inicialização de tipo:** `Tipo::ensure_initialized()` no início de cada
  método e em cada acessor de campo estático (o modo normal lê o armazenamento
  direto dentro do próprio tipo; o legível sempre passa pelo acessor, uma guarda
  redundante e idempotente).
- **Avisos do MSVC (/W4):** os mesmos do modo normal para as mesmas classes
  (parâmetro não usado, variável não usada que já existe no C#, `cs_return` não
  usado em `catch`, código inacessível depois de `return`).

## Evidências (2026-11-15)

| Verificação | Resultado |
|---|---|
| Modo normal inalterado: `translator/test_lowering.py` com o tradutor final | 1715/1715; os 84 arquivos de `build/translator/lowering-generated` idênticos byte a byte (SHA-256) aos gerados antes da mudança |
| Diferencial legível: `python translator/readable.py lowering` (fixtures emitidas com `readable: true`, formatadas, compiladas com MSVC e comparadas com o Mono do Unity 5.3.4f1) | 1715/1715 casos, 0 falhas, 246 métodos, 82 arquivos formatados, nenhum identificador com hash; conjunto de métodos rejeitados idêntico ao do modo normal |
| Tradução legível do jogo | KairoLibrary 374 métodos e Assembly-CSharp 1.860 métodos, os mesmos ids do modo normal (`config/phase2-translation.json`, `config/phase2-game-translation.json`); 0 tokens não resolvidos |
| Compilação das três classes (MSVC `/std:c++17 /permissive- /EHsc /W4 /fp:strict /utf-8`, um processo) | `data.SponsorData.cpp` 0 erros, 0 avisos; `game.Team.cpp` 0 erros, 4 avisos; `form.TitleForm.cpp` 0 erros, 4 avisos (os mesmos 4 de cada uma no modo normal) |

## O que foi e o que não foi provado

- **Provado:** com a opção desligada, a saída do tradutor é a mesma (fixtures,
  byte a byte); com a opção ligada, as fixtures de lowering (que exercitam ordem
  de avaliação, exceções, closures, genéricos, inicialização de tipo, ponto
  flutuante) dão o mesmo resultado que o Mono em todos os 1715 casos; as três
  classes do jogo compilam em contexto real (cabeçalhos legíveis de todas as
  dependências do jogo e da KairoLibrary).
- **Não provado:** o jogo inteiro em modo legível não foi compilado nem
  executado (só as três unidades da amostra); não rodei o percurso do jogo nem o
  diferencial portável da KairoLibrary em modo legível. As regras de ordem são
  conservadoras e cobertas pelas fixtures, mas um caso que as fixtures não
  exercitam só seria pego por esses testes maiores.
- **Depende do usuário:** aprovar ou pedir mudanças no estilo (nomes, `self`,
  qualificação `generated::`, largura de 110 colunas) antes do congelamento.
