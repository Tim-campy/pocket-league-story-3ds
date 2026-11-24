# AGENTS.md — Pocket League Story para Nintendo 3DS

Leia este arquivo inteiro antes de qualquer ação. Ele é autossuficiente: tudo o que
você precisa para trabalhar com segurança está aqui ou apontado por caminho exato.
O usuário fala português; escreva relatórios e mensagens em português. Comentários e
nomes no código ficam em inglês, como no resto do código.

## 1. O projeto

Port **não oficial** de Pocket League Story (Kairosoft; Android, Unity 5.3.4 com Mono)
para o Nintendo 3DS (alvo principal: New 3DS XL). O C# do jogo foi reconstruído
byte a byte a partir do APK (submódulo `reference/`) e traduzido para C++17 por um
tradutor próprio, com o comportamento do original: mesma ordem de avaliação, exceções,
aritmética de inteiros e de ponto flutuante do Mono no Android ARM, inicialização de
tipos, textos. A tag **`v1.0.0-faithful`** é a versão fiel ao original. Daqui em diante
o jogo é adaptado ao 3DS, e o código C++ do jogo em `src/game/` é código-fonte
mantido à mão. O tradutor foi aposentado.

Hoje o jogo roda inteiro no PC (SDL2, build de diagnóstico, com as duas telas do 3DS
em janelas) e no 3DS com backend nulo (sem vídeo e sem som; serve de benchmark).
Vídeo, som e controles no 3DS são a próxima fase (`docs/plan-next-phases.md`).

### Design decidido para o 3DS (resumo; completo em `docs/design/phase3-decision.md`)

- **Tela superior (400×240):** o jogo.
- **Tela inferior (320×240, toque):** menus, registro de acontecimentos (gestão) e
  painel da partida; diálogos do port.
- **Controles:** A confirma; B volta; Y abre o menu; X faz o comando especial (rótulo
  esquerdo: salvar, trocar, demolir...); direcional move o cursor e a seleção; circle
  pad move a câmera; L e R dão zoom; START abre o diálogo de sair.
- **Texto:** teclado do sistema (`swkbd`) com o limite e a validação do jogo.
- **Idioma:** o do console ao iniciar (japonês ou inglês; outro idioma → inglês), com
  painel para trocar.

O que já existe — **só no PC**, protótipo de plataforma (`src/main/pc_dual_screen.cpp`,
`docs/design/phase3-prototype.md`): as duas janelas; A, B, X, Y, START e direcional
ligados aos rótulos do jogo; circle pad como arraste de câmera (o cursor acompanha o
centro); L/R como pinça de zoom; a barra de rótulos do jogo (`GamePad`) na tela
inferior; diálogos do port na inferior; texto pelo teclado do PC (SDL).
O que ainda não existe: qualquer coisa disso no 3DS (o backend do console é nulo: sem
vídeo, som nem entrada); menus, registro de acontecimentos e painel da partida na
inferior (exigem mudar o código do jogo; etapa 2); câmera independente do cursor;
`swkbd`; idioma do console. As mudanças já decididas estão em
`docs/changes-from-original.md`.

### Orçamentos no New 3DS

- **50 ms por quadro**: o jogo pede 20 quadros por segundo.
- **Lógica hoje** (New 3DS XL, backend nulo, três execuções): partida com média de
  9,7–10,6 ms por quadro; menu 6,5–6,7 ms; maior quadro sem coleta ≤ 12,2 ms.
- **Transições e coletas explícitas** (fechar janela, `GameManager.ChangeState(0)`):
  até **150 ms** (medido: pausa ≤ 114 ms, quadro ≤ 124 ms).
- **O custo de desenho no 3DS ainda não foi medido** (o backend é nulo). Toda mudança
  que acrescente trabalho por quadro come a margem que o desenho vai precisar.

## 2. Seu papel e seus limites

**Você edita o código do jogo: `src/game/`** (as classes `*.hpp`/`*.cpp` com nomes
como `form.TitleForm`, `game.Team`, `data.SponsorData`).

Sem aprovação explícita do usuário **você não edita**:

- o runtime e o coletor de lixo (`src/runtime/`, `src/kairo/common/`);
- a KairoLibrary traduzida (`src/kairo/common/generated/`);
- a plataforma e os backends (`src/kairo/api/`, `src/kairo/platform/`, `src/main/`);
- a infraestrutura do jogo dentro de `src/game/`: `game_generated_runtime.hpp`,
  `game_generated_forward.hpp`, `bootstrap_*`, `PlsPortGeneratedBootstrap.*`;
- as ferramentas de build e de verificação (`tools/`, `tests/`, `CMakeLists.txt`),
  exceto para corrigir um erro óbvio de uma ferramenta, explicado no relatório.

Se uma tarefa exigir mexer em qualquer um desses lugares, **pare e explique** ao
usuário o que precisa mudar e por quê, antes de mudar.

**Nunca use o tradutor arquivado** (`tools/translator-archived/`): ele regeneraria
`src/game/` e apagaria o trabalho feito à mão. `tools/translate` recusa rodar.

## 3. Regras de conteúdo (invioláveis; prevalecem sobre tudo)

1. O repositório contém só código de engenharia reversa e código novo. **Nenhum asset
   do jogo** entra no Git nem em arquivo distribuído: imagens, sprites, fontes, áudio,
   dados, pacotes de idioma, cenas — nem originais, nem convertidos, nem embutidos em
   código. **Capturas de tela, saves e logs com conteúdo do jogo ficam fora do Git**
   (use `build/`, que é ignorado).
2. Os assets vêm só do **APK do próprio usuário**, em tempo de build, verificado pelo
   SHA-256 de `docs/apk.md`. Nunca baixe, procure ou indique onde obter o APK.
3. Nenhum binário do jogo original ou do Unity entra no repositório ou no build.
4. Nada de marca: o port se declara não oficial; ícones e textos de apresentação são
   originais.
5. Os literais que já estão no C# reconstruído (textos e arrays constantes) fazem
   parte do código e ficam no C++. Textos e dados que estão nos assets continuam vindo
   dos assets.
6. O CI (`.github/workflows/content-policy.yml`) recusa formatos proibidos e arquivos
   acima de 2 MB. `python tools/check_repository.py --staged` faz a mesma conferência
   antes do commit.

## 4. Mapa do repositório

| Caminho | O que é | Você pode editar? |
|---|---|---|
| `src/game/` | o jogo: uma unidade `.hpp`/`.cpp` por classe C# (402 arquivos) | **sim** (exceto a infraestrutura, seção 2) |
| `src/kairo/common/generated/` | KairoLibrary traduzida (biblioteca da Kairosoft usada pelo jogo) | não, sem aprovação |
| `src/kairo/common/` | runtime gerenciado: strings, arrays, delegates, exceções, inicialização de tipos (`semantic_runtime.hpp`), diagnóstico (`diagnostic_profile.hpp`) | não, sem aprovação |
| `src/runtime/` | coletor de lixo (`tracing_gc.*`), tipos numéricos (`numeric_types.hpp`), referências | não, sem aprovação |
| `src/kairo/api/`, `src/kairo/platform/{null,sdl,ctr}/` | interface da plataforma e backends (nulo, PC/SDL, 3DS) | não, sem aprovação |
| `src/main/` | pontos de entrada (PC, nulo) e janelas das duas telas no PC | não, sem aprovação |
| `reference/` | **C# reconstruído** (submódulo, tag `v1.0.0-csharp-reconstruction`): a referência de comportamento | **somente leitura** |
| `tests/routes/` | roteiros que jogam o jogo no PC (`*.route`) | sim, para roteiros novos |
| `tests/repository/`, `tests/kairo/`, `tests/translator/` | testes do repositório, da plataforma e do runtime | não, sem aprovação |
| `tools/` | build, execução e verificação (`tools/dev.py` é a porta de entrada) | não, sem aprovação |
| `tools/translator-archived/` | tradutor aposentado | **somente leitura; nunca executar** |
| `config/` | dados e recibos lidos e escritos pelas ferramentas | não edite à mão |
| `docs/` | documentação; índice em `docs/README.md` (vigente × histórico) | sim, os vigentes |
| `docs/history/` | registro da Fase 2 (antigo AGENTS.md, congelamento, livro-razão) | somente leitura |
| `build/` | tudo o que é local: builds, assets convertidos, saves, logs (fora do Git) | gerado |

## 5. Ambiente e comandos

Windows, MSVC + CMake + Ninja (PC), devkitARM + libctru (3DS), emulador Azahar.
Inventário em `docs/toolchain.md`. Os caminhos locais do APK e da pasta `Managed`
extraída dele ficam em `build/dev-local.json` (fora do Git) ou nas variáveis
`PLS_APK` e `PLS_MANAGED`.

**Um comando para o ciclo de edição: `python tools/dev.py <subcomando>`**

| Subcomando | O que faz | Tempo nesta máquina |
|---|---|---|
| `build` | build do PC (diagnóstico, Release) a partir de `src/game` | 17 s depois de editar um `.cpp`; 2 s sem mudança; 15–17 min do zero |
| `run [--save 31\|50]` | roda no PC com as duas telas do 3DS em janelas (até 600 s); `--save 31` começa antes da 1ª partida, `--save 50` depois | build + jogo |
| `check [--all]` | checks rápidos: mapa do coletor e raízes, código de apoio, literais, formatação dos arquivos alterados (`--all`: todos) | ~5 s, mais ~0,5 s por arquivo alterado (formatação); `--all`: ~4 min |
| `routes` | os roteiros do jogo (87 execuções) com estresse moderado do coletor | ~3 h |
| `full` | verificação completa (`tools/verify_phase2.py --full`) | ~20 min (105 checks) |
| `arm` | build do 3DS (`build/frozen-arm/null_game.3dsx`, backend nulo) | ~30 min do zero |

Recompilar no PC depois de editar um `.cpp` do jogo: ~17 s. Depois de editar um
`.hpp` muito incluído: ~6 min (`main.AppData.hpp`, 52 unidades); veja quantos `.cpp`
incluem um cabeçalho antes de mexer nele: `grep -l '"data.SponsorData.hpp"' src/game/*.cpp`.
Uma pasta de build nova (clone ou worktree novo) compila tudo: ~15–17 min. Detalhes em
`docs/notes/rebuild-times.md`. `dev.py` usa `build/claude-run-utf8.py` quando existe
(arquivo local que fixa a página de código das mensagens do compilador); sem ele
funciona igual.

A máquina tem 8 GB: rode **um trabalho pesado por vez** (build, roteiros, emulador).

### Testar no PC uma mudança de tela ou de controle

- `python tools/dev.py run --save 50` abre **duas janelas**: em cima a tela superior
  (400×240), embaixo a inferior (320×240, toque com o mouse), ampliadas 2× (`--scale`).
  Confirmado por captura em 2026-11-24.
- **Teclado → botões do 3DS:** A = `A`, B = `S`, X = `Z`, Y = `X`, L = `Q`, R = `W`,
  START = `M`, SELECT = `N`; direcional = setas; circle pad = `I`/`J`/`K`/`L`. Um
  controle USB também serve (posições do padrão Nintendo; analógico esquerdo = circle
  pad).
- **Capturar as telas:** `--capture build/captures/<nome>:K` grava `NNNNNN-top.bmp` e
  `NNNNNN-bottom.bmp` a cada K quadros. Capturas ficam em `build/`, **nunca no Git**
  (são imagens do jogo).
- **Roteiro curto** (o jogo se joga sozinho; formato em
  `docs/notes/route-runner-design.md`): um arquivo `tests/routes/<nome>.route`, um
  passo por linha, e `dev.py run --save 50 --route tests/routes/<nome>.route`:

  ```
  # Do título até o mapa com o save 50 e abre o menu (testado: termina no quadro 222).
  anchor timeout=2400
  wait frames=104
  key SELECT
  wait frames=36
  key UP
  wait frames=24
  key SELECT
  wait form=GameForm label_right=* timeout=600
  dismiss until depth=1 timeout=300 optional
  key SOFT2
  wait depth=2 timeout=120 optional
  wait frames=40
  end
  ```

  Os roteiros apertam as teclas do jogo (`SELECT`, `UP`, `DOWN`, `LEFT`, `RIGHT`,
  `SOFT1`, `SOFT2`), não os botões do 3DS. Para L/R há o ambiente
  `PLS_PC_DUAL_HOLD="R:700-760,L:1000-1060"` (quadros em que o botão fica apertado).
  O resultado de cada execução fica em `build/pc-frozen-diagnostic-release/attempts/<n>/`
  (`game-run.stderr`: `PLS_ROUTE_*`, `PLS_UI_STATE`).

## 6. Como ler o código do jogo

Cada classe C# virou uma `struct` em `namespace pls::game::<namespace C#>`. Cada
método traz antes um comentário `// M:<DocID>` (o identificador do método no C#,
ex.: `// M:game.Team.Update`). Para ver o original, procure o mesmo método em
`reference/` (C# reconstruído). As regras completas de manutenção estão em
`docs/maintaining-game-code.md`.

| Elemento | O que é | O que não se pode quebrar |
|---|---|---|
| `pls::cs::Ref<T>` | referência a objeto gerenciado; é um ponteiro comum `T*` (sem contagem). Nulo é `Ref<T>{}` | o objeto só vive enquanto o coletor o alcança (seção 7) |
| `require(x)` | devolve `x` ou lança a `NullReferenceException` do C# | todo acesso a membro de referência passa por `require`; não troque por `x->` |
| `is_null(x)`, `x.is_null()` | teste de nulo (`x == null` do C#); `is_null` vem de `src/game/game_generated_runtime.hpp`, sem prefixo | — |
| `==` / `!=` | `Ref<T>` compara identidade (como `==` entre objetos no C#); `String` compara o texto, ordinal (como `==` entre `string` no C#); `Array` compara identidade; `Delegate` segue a igualdade de delegates do C# | `string.Equals`, comparações com cultura e ignorando maiúsculas: use as funções `string_equals`, `culture_*` como o código já faz |
| `pls::cs::Int32`, `Int64` | inteiros com o comportamento do C#: estouro com volta, `/` e `%` lançam as exceções do C# | não troque por `int`: estouro de `int` é indefinido em C++ |
| `pls::cs::Single`, `Double`, `FloatEval` | `float`/`double` do C#. Aritmética de `float` é avaliada em binary64 (`FloatEval`) e estreitada para `float` ao guardar, ao passar argumento e ao retornar: a regra do Mono no ARM | guarde em `Single`; não acumule em `double`; nada de `-ffast-math`; `/fp:strict` no PC |
| `pls::cs::to_int32(x)`, `cast_integral<T>(x)` | conversões explícitas do C# (`(int)f`, `(short)i`) | use estas, não `static_cast`: o resultado de valores fora da faixa segue o C# |
| `pls::cs::Array<T>` (`IntArray`, `StringArray`...) | array gerenciado. `a[i]` e `a.get_Item(i)` checam limites; `Array::make(n)`, `Array::from({...})` | não remova checagem; em array de referências use `set_Item` (checa covariância) |
| `pls::cs::String`, `literal(u"...")` | string UTF-16 do C#; `literal` cria a constante uma vez | comparação e ordenação de texto pelas funções `culture_*`/`string_*` (colação do Mono) |
| `create(...)` / `create_init(self, ...)` | `new Classe(...)`: `create` aloca (`make_ref`) e chama `create_init`, que inicializa campos, chama a base e roda o corpo do construtor | chame sempre `create`; a ordem campos → base → corpo é a do C# |
| `ensure_initialized()` e estáticos | construtor estático do C#. Cada estático é uma função de acesso (`Classe::campo_()`) que inicializa o tipo antes; o valor mora em `static ... Classe_campo_storage` no `.cpp` | estático novo: função de acesso + armazenamento + raiz (seção 7) |
| `trace_edges(visitor)` | lista, para o coletor, os campos de referência do objeto | todo campo de referência entra aqui (seção 7) |
| `PLS_MANAGED_CLASS("ns.Classe", Classe, Base, interfaces...)` | identidade do tipo para `is`, `as`, casts e `GetType()` | classe nova, base ou interface nova: atualize a linha |
| `PLS_DELEGATE_SLOTS(Base, {"Slot", "M:..."}, ...)` | para cada `override`, qual método C# um delegate criado a partir dele representa | `override` novo: acrescente a entrada |
| `Delegate<R(Args...)>::from_closure(identidade, "M:...:N", lambda, capturados...)` | lambda do C# como delegate | todo valor gerenciado usado pela lambda vai também na lista final `capturados...` (é por ela que o coletor o enxerga) |
| blocos `{ auto cs_target = ...; auto cs_arg0 = ...; ... }` (`cs_target`, `cs_index`, `cs_value`, `cs_arg*`, `cs_left`, `cs_right`, `cs_receiver`) | fixam a ordem de avaliação do C# onde o C++ não a garante (argumentos, lados de um operador, alvo de uma atribuição) | ao editar um trecho desses, mantenha a ordem: avalie em variáveis, na ordem do C#, antes de combinar |
| `PLS_API(expr)` | chamada à plataforma ou à KairoLibrary (`kl_*::...`, `pls::kairo::...`); no build de diagnóstico separa o tempo dela do tempo do jogo; nos outros é a própria chamada | use em toda chamada nova à plataforma; não muda o resultado |
| `PLS_METHOD_SCOPE("Assembly-CSharp", "M:...", game)` | no build de diagnóstico, registra a chamada do método (cobertura, salvaguarda, perfil); some no build normal | método novo do jogo: acrescente com um DocID novo, no formato do C#: `M:<namespace>.<Classe>.<Método>(<tipos completos dos parâmetros>)`, ex.: `M:game.Team.NovoMetodo(System.Int32,data.TeamData)`; sem parâmetros, sem parênteses (`M:game.Team.Update`) |
| `pls::cs::run_finally(corpo, finally)`, `capture_exception(e)` | `try/finally` e `catch` do C# | não troque `finally` por destrutor (RAII) se o bloco puder lançar |
| `pls::cs::box(x)` / `unbox<T>(o)` | boxing do C# (valor → `object`) | `box` aloca; evite em código por quadro (seção 7) |

## 7. Regras ao editar

**Campo de referência novo entra em `trace_edges`.** Referência é `Ref<...>`, `String`,
`Array<...>`, `Delegate<...>`, `List`/`Dictionary`:

```cpp
// .hpp
pls::cs::Ref<Player> captain_{};
// .cpp, em Team::trace_edges
pls::cs::trace_value(captain_, visitor);
```

Esquecer isso faz o coletor liberar um objeto ainda em uso (falha aleatória, longe
da causa). Pego por `dev.py check` (mapa do coletor).

**Estático de referência novo entra nas raízes** (`GcRootProvider` do `.cpp`, dentro
de `cs_init_..._slow`):

```cpp
static StringArray Team_names_storage{};
// em static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) { ... });
pls::cs::trace_value(Team_names_storage, visitor);
```

Pego por `dev.py check` (raízes).

**Nenhuma referência gerenciada fora do que o coletor enxerga.** O coletor vê: campos
listados em `trace_edges`, estáticos nas raízes, variáveis locais na pilha. Ele **não**
vê: `std::vector<Ref<T>>`, `std::map`, membros de `struct` C++ comum (que não deriva
de `pls::cs::Object`), `static` local sem raiz, capturas de lambda que não estão na
lista `capturados...` de `from_closure`. Para guardar várias referências use
`pls::cs::Array`, `List` ou `Dictionary` gerenciados.

**Ordem de avaliação só importa onde há efeito.** `a + b` com dois campos é seguro;
`f() + g()`, `x = h(y++)` ou argumentos que lançam exceção não são: avalie em
variáveis, na ordem do C#:

```cpp
pls::cs::Int32 first = NextId();      // C#: Use(NextId(), NextId());
pls::cs::Int32 second = NextId();
Use(first, second);
```

**Texto novo passa pelo mecanismo de tradução do jogo.** Os textos do jogo são
literais em japonês. Todo texto desenhado ou medido (`Graphics::DrawString`,
`Font::StringWidth`) passa por `Language::TranslateText`, que o troca pelo texto do
pacote de idioma dos assets do APK; quando o texto é composto antes de desenhar, o
jogo chama o mesmo mecanismo com `MyFormBase::LT(texto)`. Texto novo: escreva-o como
literal, desenhe-o pelos mesmos caminhos e, se for composto, passe por `LT(...)`.
**Um texto novo não tem tradução no pacote de idioma do APK** e aparece como escrito;
como resolver isso (tabela própria do port, idioma) é decisão do usuário — pergunte
antes de acrescentar texto visível.

**Nada de alocação por quadro em caminho quente.** O jogo roda a 20 quadros por
segundo (50 ms por quadro). Os métodos chamados a cada quadro (`Update`, `Draw`,
`_draw` das formas, `Team::Update`, `Player::Update`, desenho de campo) não devem
ganhar `create`, `make_ref`, `Array::make`, concatenação de `String`, `box` nem
`std::string`/`std::vector` novos. Cada alocação aproxima a próxima coleta (pausa de
dezenas de ms). Prepare os objetos antes (no `Init`, num campo) e reutilize. As
alocações que o original já fazia ficam como estão.

**Checagens obrigatórias.** Nenhuma verificação de nulo (`require`) ou de limites
(`[]`, `get_Item`, `set_Item`) é removida sem aprovação do usuário.

**Threads.** Não crie threads por fora de `pls::cs::Thread` (nem `std::thread`, nem
`threadCreate` da libctru). O runtime supõe que todas as threads gerenciadas rodam
no mesmo núcleo do 3DS.

**Formatação.** O estilo está em `src/game/.clang-format`. Depois de editar:
`python tools/format_game_code.py src/game/<arquivo>.cpp src/game/<arquivo>.hpp` (só
os arquivos dados, em segundos; sem argumentos formata tudo, ~4 min). Ele só mexe em
espaços — inclusive a linha em branco entre definições — e recusa qualquer outra mudança.

**Método e classe novos.** Comentário `// M:<DocID>` antes da definição;
`PLS_METHOD_SCOPE` no início do corpo (a "salvaguarda" dos roteiros só alerta quando um
método que a Fase 2 classificou como inalcançável é executado; um DocID novo não está
nessa lista e não gera alerta); classe nova com `PLS_MANAGED_CLASS`,
`trace_edges` (se tiver campos de referência), `create`/`create_init`. O build
encontra sozinho todo `src/game/*.cpp` (não mexa no `CMakeLists.txt`). Modelos
completos em `docs/maintaining-game-code.md`.

## 8. O que exige decisão do usuário

Pare e pergunte antes de:

- **mudar o formato de save** (`Serialize`/`Deserialize`, campos gravados, chaves e
  versões do `RecordStore`) — inclusive a compatibilidade com saves do Android;
- **mudar regras e números do jogo**: valores, tabelas, preços, probabilidades,
  fórmulas, tempos, dificuldade;
- **remover uma funcionalidade** do original, mesmo que pareça morta;
- **qualquer mudança fora de `src/game/`** (seção 2);
- remover uma verificação de nulo ou de limites;
- acrescentar texto visível (seção 7) ou mudar telas e controles;
- qualquer coisa que toque as regras de conteúdo (seção 3);
- usar uma dependência nova.

Não pare para confirmar uma hipótese técnica: teste-a e relate.

## 9. Toda mudança de comportamento

Mudança de comportamento é o que o jogador ou o save podem perceber: o que aparece nas
telas, as regras e os números do jogo, o conteúdo do save, os tempos. Código novo que
ainda não é chamado, nomes locais, formatação e comentários não são.

- Em **commit próprio**, separado de arrumação e formatação.
- Registrada em **`docs/changes-from-original.md`**: o que mudou em relação à tag
  `v1.0.0-faithful`, por quê, quem decidiu, e como verificar.
- O que for pedido de passagem e não decidido vai para `docs/backlog.md`.
- O comportamento de referência é o do C# em `reference/` (e da tag
  `v1.0.0-faithful`). Um bug do original só é corrigido por decisão do usuário.

## 10. Antes de cada commit e antes de publicar

Entre commits pequenos: `python tools/dev.py build` e `python tools/dev.py check`.

Antes de publicar (push) — o ciclo do checkpoint:

1. `python tools/dev.py check --all` (mapa do coletor, raízes, código de apoio,
   literais, formatação de tudo);
2. `python tools/dev.py full` (verificação completa);
3. `python tools/dev.py routes` (87 execuções de roteiro; aceito quando o comando diz
   PASS: os 85 que a reexecução do código canônico conclui também concluídos, 0 alertas
   — as 2 restantes, `actions.route` a partir do save 95 e `dialogs-exit.route`, não
   concluem em reexecução nem no canônico);
4. `python tools/dev.py arm` (o 3DS compila);
5. `python tools/check_repository.py --staged`.

Relate o resultado de cada passo com números. Se um passo falhar, não publique: relate.
Uma falha intermitente conhecida de um roteiro (tempo esgotado na parada de threads
do coletor, `tests/routes/saves.route`) se repete uma vez com `dev.py routes --resume`;
se falhar de novo, é falha. A máquina não pode dormir durante os roteiros (uma
suspensão trava o quadro em curso e o roteiro falha): `dev.py routes` e `dev.py full`
pedem ao Windows que não suspenda enquanto rodam.

### Git

- Nunca `push --force`, nunca reescrever histórico publicado.
- **Nunca mover, apagar ou recriar a tag `v1.0.0-faithful`** (nem outra tag).
- Commits pequenos, um assunto por commit; mudança de comportamento sempre sozinha
  (seção 9). Experimentos em ramo descartável, apagado depois.
- Um checkpoint só vale com **CI verde**: depois do push, `python tools/dev.py ci`
  (resultado do CI do commit publicado). Se ficar vermelho, corrija num commit novo.
- Nunca commite `build/`, capturas, saves, o APK ou o que vem dele (seção 3).

## 11. Como relatar

Em português, com números exatos. `UNKNOWN` para o que não foi medido ou verificado;
hipóteses refutadas também entram. Para um trabalho de uma sessão, oito seções:
progresso, o que foi feito, hipóteses (confirmadas, refutadas, inconclusivas, com
evidência), pendências, toolchain, componentes externos, bloqueios, recomendação —
sempre com os resultados negativos e o que depende do usuário.

## 12. Onde procurar mais

- `docs/README.md` — índice: o que é vigente e o que é histórico.
- `docs/maintaining-game-code.md` — receitas de edição (classe, campo, estático,
  literal, chamada à plataforma, delegate), as macros e os erros comuns.
- `docs/changes-from-original.md`, `docs/backlog.md`, `docs/plan-next-phases.md`.
- `docs/design/phase3-decision.md` — decisão de telas e controles do 3DS.
- `docs/benchmark-hardware.md` — como medir no New 3DS.
- Pacote de código para revisão externa: `python tools/make_review_bundle.py ITEM ...`
  (arquivos, `Classe::Método` ou DocID; saída em `build/review/`).

## 13. Pendências herdadas

| Pendência | Dono |
|---|---|
| Teste numérico da regra de ponto flutuante num aparelho Android (`docs/notes/criterion4a-status.md`) | usuário |
| Cobertura de `AppData.DrawMoney2` e `MapMain.UpdateTrainingCoatNum` (só por log textual; exige vídeo) | Fase 4 |
| Fase 4: vídeo (GPU), som, controles e saves no 3DS; comparação de telas com o Android; medição com vídeo e som no New 3DS (`docs/plan-next-phases.md`) | Fase 4, por decisão do usuário |
| Reforma do coletor, grafias de `Graphics` (A.4e), coleções `Vector` (A.4d), declarações antecipadas nos `.hpp` | `docs/backlog.md` |

Nenhuma delas é trabalho seu sem pedido do usuário.
