# Revisão de ordem de travas versus o coletor 

Data: 2026-11-15. Auditoria somente leitura (nada compilado nem executado). Escopo: código
escrito à mão em `src/runtime/**`, `src/kairo/**` (exceto `src/kairo/common/generated/**`) e
`src/main/**`; o C++ gerado (`src/game/`) só foi consultado para saber como ele chama o runtime.
Números de linha referem-se à árvore de trabalho atual (`564dbc6` + alterações locais não
relacionadas).

Motivação: a tentativa 78 (`docs/notes/gc-stress.md:33,50`), com estresse N=1, terminou o boot
com `GC cooperative rendezvous timed out; no objects swept` (`tracing_gc.cpp:777`). Não se
repetiu em 6 execuções.


## Estado das correções (2026-11-15, sessão principal)

Levantamento feito por um subagente; os achados C1 e B1 foram conferidos no fonte
antes de corrigir. Todos os nove receberam correção.

| Achado | Correção | Teste |
|---|---|---|
| C1 pool de `String::literal` | aloca fora do mutex e publica depois (`semantic_runtime.cpp`) | diferencial portável 2.617/2.618 |
| C2 estáticos locais que alocam | tradutor: cada literal usa `static std::atomic<void*> cs_site{}` (inicialização constante, sem guarda) + `String::literal_at`; à mão: `cs::RootedOnce<T>` (raiz registrada antes de alocar, publicação atômica) em codificações, `RuntimeAssembly` e fuso UTC | inventário de raízes (`self-rooted`) |
| B1 coordenador de inicialização de tipos | solta `guard` antes de sair da espera nativa (`managed_type_init.hpp`) | **T2** em `tests/translator/thread_gc_fixtures.cpp`: com o código antigo falha ("Type-initializer waiter held the coordinator across the rendezvous"), com a correção passa |
| C3 `gate` do armazenamento (26 aquisições) | `cs::ManagedLockGuard` (espera ocupada dentro de espera nativa) | **T1** (coleta conclui com um `ManagedLockGuard` disputado) |
| C4 registro de tipos (4) | `ManagedLockGuard` | T1 |
| C5 `debug_log_mutex` no `pc_main` | `host_focus` fora da trava | — |
| C6 identidade de exceção | `ManagedLockGuard` | T1 |
| C7 painel de idioma | `ManagedLockGuard` | T1 |
| B3 espera de 60 s no `null_main` | dentro de `GcNativeBlockingScope` | — |

B1 era alcançável com os gatilhos reais (três threads), sem o modo de estresse.
O diagnóstico de pilhas no estouro do encontro (`PLS_GC_RENDEZVOUS_THREAD`) continua
ligado nos builds de diagnóstico.

## 0. Modelo usado

- Uma thread conta como parada para a rendezvous só se `parked` (dentro de `Heap::safepoint`,
  `tracing_gc.cpp:639-643`, ou de um segundo `collect_body`, `:756-763`) ou se `native>0`
  (`begin_native_wait`, `:645-653`). Qualquer outro bloqueio (mutex, condição, future, sleep,
  E/S) deixa a thread "rodando" e a coletora espera até `s.timeout` = 5 s (`:264`, `:766-777`).
- `ensure_gc_thread` (`managed_gc_bridge.inc:41-45`) registra a thread de forma permanente
  (`thread_local Registration`) na primeira alocação, `gc_safepoint` ou `GcNativeBlockingScope`.
- Pontos onde uma thread pode estacionar ou coletar: todo `make_ref`/`make_described`
  (`semantic_runtime.hpp:329` → `tracing_gc.hpp:153` → `safepoint`), todo construtor de
  `String` a partir de texto (`semantic_runtime.hpp:380-385`), `Array<T>::make`,
  `String::from_utf8`, `gc_safepoint()`, e no modo de estresse **dentro** do `safepoint`
  (`tracing_gc.cpp:631-636`: a própria thread vira coletora).
- Gatilhos reais de rendezvous (todos fora do estresse):
  1. `gc_frame_end` (`managed_gc_bridge.inc:185-192`) faz **a cada frame** um
     `refresh_memory_accounting` → `Heap::inspect` (`tracing_gc.cpp:942-966,974-982`), que é
     uma rendezvous completa (mensagem própria "Managed worker did not reach heap inspection
     safepoint", `:958`); e depois coleta se houver pedido/volume.
  2. `gc_loading_safepoint` (`:181-184`), via `RunOnUiThread(...,true)` inline na UI
     (`application.hpp:154,161`).
  3. `gc_collect` explícito (`:121-128`), inclusive **na thread de trabalho do boot**:
     `BootForm.Run` chama `JSystem.Gc()` (`reference/src/Assembly-CSharp/form/BootForm.cs:379`),
     e `AppData.Gc` também (`AppData.cs:4179`).
  4. `pc_main` diagnóstico: `visit_managed_memory` (`pc_main.cpp:108`) → `inspect`.
- Threads gerenciadas no boot: a UI e o worker de `BootForm` (`BootForm.cs:120`). O
  inventário (`docs/notes/runtime-thread-inventory.md`) lista 24 sítios de criação; três ou
  mais mutadores simultâneos são possíveis em outros trechos (por exemplo `SaveRecorder`,
  `FormManagerBase.StartLoading`, `Handler`), mas não foi verificado que ocorram juntos
  (`UNKNOWN`).

Regra que decorre do modelo (usada nas seções 2 e 4):

- Com **duas** threads, um mutex nativo L mantido durante uma alocação só trava se a dona de
  L for a **coletora** (estresse, ou coleta explícita dentro de L). Se a dona só estacionar,
  a coletora é a outra thread, que não está esperando L.
- Com **três ou mais** threads basta a dona estacionar (pedido de uma terceira, por exemplo
  o `inspect` de todo frame da UI) enquanto uma quarta/terceira espera L sem escopo nativo.

## 1. Inventário de travas nativas

Legenda da última coluna: **A** = alocação/ponto seguro possível com a trava mantida;
**B** = espera bloqueante com a trava mantida; "—" = nenhum dos dois.

### 1.1 Runtime e coletor

| Trava | Local | Protege | Threads | Com a trava mantida |
|---|---|---|---|---|
| `Heap::Impl::mutex` + `changed` | `tracing_gc.cpp:218-219` | todo o estado do heap | todas as registradas, coletora | B por desenho (esperas em condição, que liberam o mutex: `:602,642,660,760,766,955`). Coletora o mantém durante marcação e varredura e o **solta** na destruição (`:881-894`). Chama `Thread::trace_edges` (trava de `Thread::State`), `memory_ranges` (trava do dispositivo SDL), provedores de raiz (trava do registro) e o gancho de diagnóstico (trava `thread_states_mutex`) |
| registro de raízes `RootRegistry::mutex` | `semantic_runtime.cpp:43`; ctor `:55-58`, dtor `:59-61`, visita `:62-65` | mapa de provedores | qualquer thread (ctor/dtor), coletora (visita, com `s.mutex` mantido, `tracing_gc.cpp:811` via `managed_gc_bridge.inc:33`) | — (inserção/remoção de `std::function`; provedores não alocam) |
| `tracing_stats_mutex` | `managed_gc_bridge.inc:69-70,151` | última estatística | coletora, leitores | — |
| `gc_event_mutex` | `managed_gc_bridge.inc:117,123,130,135,152,177,189` | anel de eventos e textos de contexto | UI e coletora | — (`gc_events_after` cria `std::vector` nativo) |
| `static` de `tracing_heap()` | `managed_gc_bridge.inc:9-35` | criação única do heap | primeira chamada | — (nativo; `add_roots` toma `s.mutex`) |
| `thread_local Registration` | `managed_gc_bridge.inc:42-43` | registro da thread | cada thread | B: `enter` espera `!requested` (`tracing_gc.cpp:602`), mas a thread ainda não está registrada: seguro |
| monitor C# `Object::monitor` (`recursive_mutex`) | `semantic_runtime.hpp:231`; `MonitorScope` `semantic_runtime.cpp:66-70` | `lock(obj)` do C# | threads gerenciadas (10 usos em `src/game`) | A e B por desenho (corpo do `lock` é código do jogo). Aquisição sempre dentro de `GcNativeBlockingScope`; o destrutor do escopo espera o fim da coleta **com o monitor já adquirido** |
| `String::literal` pool `mutex` | `semantic_runtime.cpp:237-245` | mapa de literais | todas | **A**: `make_ref<Storage>` em `:244` com a trava mantida |
| `static` da função `String::literal` (mapa e `GcRootProvider`) | `semantic_runtime.cpp:238-239` | inicialização única | primeira chamada | — |
| `ExceptionIdentity::mutex` | `semantic_runtime.hpp:33`; uso `managed_exceptions.cpp:113-121` | visão gerenciada única de uma exceção | quem captura | **A**: `make_exception` (`make_ref`, `String::from_utf8`) e `capture_exception` recursiva da interna, com a trava mantida |
| `last_capture_mutex` | `semantic_runtime.cpp:213-215` | texto da última exceção | todas | — (`std::string`) |
| coordenador de inicialização de tipos `Coordinator::mutex` (`guard`) + `changed` | `managed_type_init.hpp:35-40`; `run` `:64-98` | estado de todos os `TypeInitState`, mapa de esperas | todas | **B**: entra em `GcNativeBlockingScope` com `guard` mantido (`:80`), espera a condição (libera `guard`), e o **destrutor do escopo** (`end_native_wait`, `tracing_gc.cpp:660`) espera o fim da coleta **com `guard` readquirido**. Aquisições sem escopo: `:69` e `:94`. Sem alocação com `guard` mantido (o inicializador roda com `guard` solto, `:87-88`) |
| `static TypeInitState`/`GcRootProvider` por tipo (gerado) | `src/game/*: cs_init_*` | inicialização única | todas | — (nativo) |
| `static const auto cs_literal=String::literal(...)` (gerado) | 2.864 ocorrências em `src/game` | guarda de estático local do compilador | todas | **A** (o inicializador aloca) e espera de guarda sem escopo para quem chega ao mesmo sítio |
| estáticos locais com alocação (escritos à mão) | `managed_encoding.cpp:8-11`, `managed_reflection.hpp:42`, `managed_time.hpp:117` | valor único | todas | **A** dentro da guarda do compilador |
| `RuntimeTypeRegistry::mutex` (`recursive_mutex`) | `managed_reflection.hpp:25`; `for_name` `:31`, `GetType` `:36`, `runtime_type_of` `:46-53`, `runtime_array_set_value` `:57-59` | mapas de tipos | todas | **A**: `make_ref<RuntimeType>` e `String::from_utf8` em `:31` e `:48`, recursão `:51` |
| cache de regex `static std::mutex` | `managed_regex.cpp:31-36` | 32 expressões compiladas | todas | — (compilação fora da trava; `code_units()` é nativo) |
| `SharedField<T>::mutex_` | `managed_shared_field.hpp:9,16-23` | um campo estático compartilhado | todas; coletora via `trace_edges` (`:22`) dentro de provedores (`application.hpp:77`, `graphics.hpp:186`) | — (troca de `Ref`; liberação fora da trava) |
| `Thread::State::mutex` + `changed` | `managed_thread.cpp:16-17` | estado/prioridade/interrupção de uma `Thread` | dona, quem chama `Join`/`Sleep`/`Start`; **coletora** em `Thread::trace_edges` (`:133`) | B só em `wait_until` de 1 ms (`:106,126`), que libera a trava. `Start` (`:67-75`) mantém a trava durante `make_shared<GcRootProvider>` (trava do registro) e criação de `std::thread`; sem alocação gerenciada |
| `Thread::State::join_mutex` | `managed_thread.cpp:18,130` | `std::thread::join` | quem faz `Join` | **B**: `worker.join()` sem escopo nativo |
| `thread_local GcRootProvider` de `get_CurrentThread` | `managed_thread.cpp:38` | raiz do slot TLS | cada thread | — |

### 1.2 Plataforma comum (`src/kairo/common`, `src/kairo/api`)

| Trava | Local | Protege | Threads | Com a trava mantida |
|---|---|---|---|---|
| `IApplication::tasks_mutex_` | `application.hpp:52`; `drain` `:65-67`; `RunOnUiThread` `:157,164`; `RunOnUpdate` `:168` | filas `ui_tasks_`/`update_tasks_` | workers (enfileiram), UI (drena) | — (só `push_back`/`pop_front`; a tarefa roda fora da trava, `:66`) |
| `std::future` de `RunOnUiThread(...,true)` | `application.hpp:158,166`; `platform_future_wait` `platform_condition.hpp:18-24` | resultado da tarefa na UI | worker espera, UI cumpre | B dentro de `GcNativeBlockingScope` |
| `IApplication::Sleep` | `application.hpp:146` | — | (nenhum chamador em `src/game`; o original `IApplication.Sleep` é traduzido para `source_app_sleep`, `forms_execution.cpp:18-33`, que usa `JThread.Sleep`) | B: `sleep_for` sem escopo |
| `UnityApplication::pace` | `system.hpp:38-44`; `pc_main.cpp:255`, `null_main.cpp:253,312` | ritmo de 20 fps | UI | B: `sleep_until` até 50 ms sem escopo |
| `debug_log_mutex` | `diagnostic_output.hpp:5`; `system.hpp:15`, `offscreen.cpp:65`, `capture.cpp:49-50`, `pc_main.cpp:58,176,185-198,205-210,246,250,260,274`, `pc_metrics.cpp:62` | linhas inteiras no stderr | todas | escrita em `std::cerr` (E/S limitada). **A** em `pc_main.cpp:185-198`: `canvas->KeyClick`, `canvas->host_event`, `app->host_focus` (→ `OnResume`/`OnSuspend`, código do jogo) com a trava mantida |
| `native_plugin_mutex` | `system.hpp:71-83` | contexto do plugin | quem chama | — |
| `diagnostic::registry_mutex` | `diagnostic_profile.hpp:41-48,92` | registro de métodos | todas (estático por método) | — (E/S de `reachability_watch()` só na 1ª vez; `dump` com `debug_log_mutex` → `registry_mutex`, ordem única) |
| `diagnostic::thread_states_mutex` | `diagnostic_profile.hpp:52-57,60-64` | lista de pilhas por thread | cada thread (TLS), coletora no gancho de timeout (com `s.mutex` mantido) | — (escreve `std::cerr` sem `debug_log_mutex`; lê `methods` de outras threads sem sincronização, ver 4.3) |
| `Scope` de perfil | `diagnostic_profile.hpp:66-80` | — | todas | sem trava; `std::cerr` em `:76` sem `debug_log_mutex` (só intercalação) |
| `resource_event_mutex`, `consumer_mutex` | `resource_load_trace.hpp:17,24,49-55`; `null_main.cpp:260` | eventos de recurso | todas | — (E/S do consumidor fora da trava de eventos) |
| `Catalog::retain_mutex_` | `asset_catalog.hpp:34`; `asset_catalog.cpp:136,140,160,165,169,172,179` | último payload/fluxo retido | quem lê ativos | — (cópia de `std::vector`, até alguns MB) |
| `Catalog::pack_mutex_` | `asset_catalog.hpp:25`; `asset_catalog.cpp:198-203` | posição do arquivo de pacote | quem lê ativos | E/S (`fseek`+`fread`, ~50 ms/recurso no ARM) sem escopo; sem alocação gerenciada |
| `read_delay_` | `asset_catalog.cpp:145,184` | atraso de diagnóstico | quem lê | B: `sleep_for` sem escopo (só diagnóstico) |
| `storage.cpp` `gate` (`recursive_mutex`) | `storage.cpp:33`; usos `:192-307` | todo o estado de `Storage`/`RecordStore`/`PlayerPrefs`/`BytePreferences` | UI e workers (o worker do boot grava `RecordStore`/`SaveSystem`) | **A**: `from()`→`Bytes::make` (`:39`) em `:219,236-237`; `Array::make` `:222`, `:269`; `make_ref<Storage>` `:227-228`; `String::from_utf8` `:172`; `Bytes::make` `:280,285,292,294`; mais E/S de arquivo com a trava |
| `text_input.cpp` `presenter_mutex` | `text_input.cpp:4,6,7,9` | apresentador de texto | todas | — |
| `text_input.cpp` `language_mutex` | `text_input.cpp:35,37,38` | apresentador de idioma | quem chama | **A**: `make_ref<LanguagePanelPresenter>` em `:37` (só na 1ª vez) |
| `OfflineServices::identity_mutex_` + `DirectoryLock` | `services.hpp:55`; `services.cpp:54-75,85-90` | identificador offline (entre processos) | quem chama `device_id` (host, no início) | B: até 100×2 ms de `sleep_for` mais E/S; sem alocação gerenciada |
| `UiInvocation` com `GcRootProvider` | `application.hpp:26-40` | raízes da tarefa enfileirada | worker/UI | — |

### 1.3 Plataforma SDL e hosts (`src/kairo/platform/sdl`, `src/main`)

| Trava | Local | Protege | Threads | Com a trava mantida |
|---|---|---|---|---|
| `SDL_LockAudioDevice` (`DeviceLock`) | `audio.cpp:94-99`; usos `:183-283`; `memory_ranges` `:278-281`, chamado pela coletora via `sound.cpp:27` | vozes do mixer | UI, thread de callback do SDL (não registrada), **coletora** (`descriptor.ranges` com `s.mutex` mantido) | — (nenhuma chamada gerenciada; o callback nunca toca o GC) |
| `debug_input.cpp` `published_mutex` | `debug_input.cpp:17,23,61,62` | quadro publicado de entrada | UI | — (exceção C++ é nativa) |
| `HeapLock` do Windows | `runtime_memory.cpp:8-14` | caminhada do heap do processo | UI (métricas) | dentro de `GcNativeBlockingScope`; `HeapUnlock` **antes** do fim do escopo |
| `SDL_ShowMessageBox`, `SDL_OpenURL` | `dialog.cpp:28-31`, `backend.cpp:11` | — | UI | B dentro de `GcNativeBlockingScope` |
| `allocation_probe` `table_lock`, `gate` (`atomic_flag`) | `allocation_probe.cpp:28,44,52,72,...` | tabelas de sítios | todas, inclusive a coletora (ganchos de `operator new`) | espera ativa curta; nenhum ponto seguro |
| espera do perfilador externo | `null_main.cpp:286-288` | sincronização com amostrador (diagnóstico `PLS_NULL_PROFILE_SYNC`) | UI | B: até 60 s em `sleep_for(20 ms)` sem escopo |
| `SDL_RenderPresent`, upload | `pc_main.cpp:237-241` | — | UI | B limitado sem escopo |

Não há `LightLock`/`RecursiveLock`/`LightEvent`/`svcWaitSynchronization` no código escrito à
mão: `src/kairo/platform/ctr/` está vazio e o ARM usa o backend nulo. No ARM, as esperas em
condição usam sondagem de 1 ms (`platform_condition.hpp:10-24`, `tracing_gc.cpp:84-109`), o
que não muda a análise de travas.

## 2. Caminhos perigosos

### 2.(a) A coletora precisa de uma trava que uma thread parada pode segurar

Travas tomadas pela coletora: `s.mutex`; `RootRegistry::mutex` (visita); `SharedField::mutex_`
(provedores); `Thread::State::mutex` (marcação); `SDL_LockAudioDevice` (intervalos);
`thread_states_mutex` (só no timeout); `gc_event_mutex`/`tracing_stats_mutex` (depois da
coleta); na fase de destruição (`s.mutex` solto), `RootRegistry::mutex` via `~GcRootProvider` de
objetos mortos, `s.mutex` via `remove_range`, e o trava do dispositivo de áudio se um destrutor
libera uma voz; alocador nativo (`malloc`/`HeapAlloc`) em toda a coleta.

Nenhuma dessas é mantida através de um ponto seguro ou de uma espera em escopo nativo por uma
thread gerenciada:

- `RootRegistry::mutex`, `SharedField::mutex_`, `gc_event_mutex`, `tracing_stats_mutex`:
  seções críticas sem alocação gerenciada.
- `Thread::State::mutex`: em `Sleep`/`Join` a espera é `wait_until`, que solta a trava, e o
  ponto seguro vem depois de `lock.unlock()` (`managed_thread.cpp:106-107,126`). `Start`
  (`:67-75`) segura a trava sem ponto seguro. `entry` (`:87`) segura a trava depois de sair do
  `GcMutatorScope`, mas ainda registrada e não parada, então a coletora nem chegou à marcação.
- Dispositivo de áudio: só o callback do SDL (não registrado, nunca espera o GC) e chamadas
  curtas da UI sem ponto seguro.
- `HeapLock` (`runtime_memory.cpp:9-13`): a UI segura o heap do processo **dentro** do escopo
  nativo, então a coletora (outra thread) pode avançar e bloquear no `malloc` até a UI terminar
  a caminhada. A caminhada não depende do GC e `HeapUnlock` vem antes de `end_native_wait`. O
  efeito é só latência.

**Resultado (a): nenhum defeito encontrado.** Invariante a manter: provedores de raiz,
`trace_edges`, `memory_ranges` e destrutores só podem tomar travas cujas donas nunca alocam
nem esperam o GC com a trava mantida.

### 2.(b) Mutador bloqueia sem escopo nativo enquanto a dona da trava é a coletora ou espera o fim da coleta

**B1. Coordenador de inicialização de tipos** (`managed_type_init.hpp:69-94`):

```cpp
std::unique_lock<std::mutex> guard(engine.mutex);          // :69  sem escopo nativo
...
            engine.waits[thread]=owner_;
#if PLS_TRACING_GC
            {GcNativeBlockingScope parked;                  // :80  begin_native_wait com guard mantido
            platform_condition_wait(engine.changed,guard,[&]{return status_!=Status::running;});}
            //  ^ ao sair: guard READQUIRIDO, e ~GcNativeBlockingScope -> end_native_wait
            //    espera !requested (tracing_gc.cpp:660) AINDA COM guard
#endif
            engine.waits.erase(thread);
...
guard.lock();owner_={};failure_=failed;...                  // :94  sem escopo nativo
```

Sequência (três threads, gatilhos reais):

1. O (dona) inicializa o tipo T; W chama `T.run`, vê `running`, entra em escopo nativo e espera.
2. C (por exemplo a UI em `gc_frame_end` → `inspect`, ou um `JSystem.Gc`) põe `requested=true`.
   W conta como parada (nativa).
3. O termina, `guard.lock()` (`:94`), marca `done`, solta, notifica.
4. W acorda com `guard` mantido, destrói o escopo: `end_native_wait` bloqueia até a coleta
   acabar, **segurando `guard`**.
5. X (qualquer outra thread gerenciada, não parada) entra em `TypeInitState::run` para
   **qualquer** tipo ainda não concluído (o coordenador é global, `:40`): bloqueia em `:69`
   sem escopo. X não está parada nem nativa; C espera X; X espera W; W espera C. Timeout de 5 s.

Duas threads não bastam (no passo 5, X teria de ser C). Com estresse também são necessárias
três (a dona de `guard` nunca aloca com ele mantido). Alcançável com gatilhos reais quando três
mutadores rodam e há disputa de inicialização de tipo entre dois deles. Não provado no boot
(lá há duas threads gerenciadas).

Correção: nunca terminar o escopo nativo segurando `guard`:

```cpp
{GcNativeBlockingScope parked;
 platform_condition_wait(engine.changed,guard,[&]{return status_!=Status::running;});
 guard.unlock();}            // end_native_wait sem guard
guard.lock();                // seção curta, sem ponto seguro
engine.waits.erase(thread);  // o laço for(;;) já reavalia status_
```

Depois disso `:69` e `:94` só esperam seções curtas sem ponto seguro (o
`begin_native_wait` de `:80` toma `s.mutex` de passagem, sem esperar).

**B2. Guarda de estático local do compilador** (detalhe em 2.(c), C2): quem chega a um sítio
`static` cuja inicialização está em andamento em outra thread espera dentro do runtime C++
(MSVC `_Init_thread_header`/`_Init_thread_wait`; libstdc++ `__cxa_guard_acquire` com
mutex e condição globais no newlib), sem escopo nativo. Se a dona estiver coletando (estresse)
ou estacionada (pedido de uma terceira), há timeout.

**B3. Demais esperas sem escopo, todas limitadas** (latência, não trava): `Thread::Sleep`/
`Join` (fatias de 1 ms seguidas de `gc_safepoint`, `managed_thread.cpp:106-107,126`);
`worker.join()` em `Join` (`:130`): a thread alvo já está em `Stopped` e só executa a
desmontagem (TLS: `~GcRootProvider`, `Registration` → `Heap::leave`, que não espera o GC);
`pace` (≤50 ms); E/S de ativos e de `Storage`; `DirectoryLock` (≤200 ms, só no início);
`SDL_RenderPresent`. A exceção é `null_main.cpp:286-288` (até 60 s, só com
`PLS_NULL_PROFILE_SYNC`, antes da janela medida): se um worker coletar nesse intervalo, timeout.

### 2.(c) Uma thread aloca ou chega a um ponto seguro segurando uma trava que outro mutador espera sem escopo

Todos os casos abaixo têm o mesmo esquema. H segura L e aloca. No estresse, H coleta dentro de
`make_described` (`tracing_gc.cpp:631-636`); com gatilhos reais, H estaciona porque uma
terceira thread pediu a coleta. X chama `L.lock()` sem escopo nativo e bloqueia, a rendezvous
não fecha e o timeout de 5 s dispara.

**C1. Pool de literais** (`semantic_runtime.cpp:237-245`):

```cpp
static std::mutex mutex;
...
std::lock_guard<std::mutex> lock(mutex);
const std::u16string_view key(text,length);auto found=literals.find(key);
String result;
if(found!=literals.end()){result.data_=found->second;return result;}
result.data_=make_ref<Storage>(std::u16string(text,length));   // ponto seguro com a trava global
literals.emplace(std::u16string_view(result.data_->value),result.data_);return result;
```

- H (por exemplo o worker do boot) executa pela primeira vez um sítio de literal →
  `String::literal` → trava → `make_ref` → coleta de estresse → rendezvous espera a UI.
- X (a UI) executa pela primeira vez **qualquer outro** sítio de literal (a trava é global) →
  bloqueia em `:240` → timeout.
- Com duas threads só ocorre no estresse; com gatilhos reais, a partir de três threads.
- Frequência: cada um dos 2.864 sítios do código gerado passa uma vez por aqui; no boot as duas
  threads executam muito código novo ao mesmo tempo. **É a explicação mais provável da
  tentativa 78** (hipótese, `UNKNOWN`: a falha não deixou pilha; o gancho
  `PLS_GC_RENDEZVOUS_THREAD` só foi instalado depois).
- Correção: alocar fora da trava, com dupla verificação:

  ```cpp
  {std::lock_guard l(mutex);if(auto f=literals.find(key);f!=literals.end()){...return;}}
  auto storage=make_ref<Storage>(std::u16string(text,length));   // sem trava; 'storage' fica na pilha (raiz conservadora)
  std::lock_guard l(mutex);
  auto [it,inserted]=literals.emplace(std::u16string_view(storage->value),storage);
  result.data_=it->second;   // se outra thread venceu, usa a dela
  ```

  O provedor de raiz (`:239`) lê o mapa sem trava, o que só é correto com todos parados. Isso
  continua valendo, porque `emplace` não tem ponto seguro.

**C2. Estáticos locais cuja inicialização aloca.** O código gerado usa
`([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"...",n);return cs_literal;}())`
(2.864 ocorrências em `src/game`); à mão: `managed_encoding.cpp:8-11`,
`managed_reflection.hpp:42`, `managed_time.hpp:117`. A guarda do compilador fica "em andamento"
durante toda a inicialização, inclusive durante a coleta de estresse da dona. Quem chega ao
**mesmo** sítio espera a guarda sem escopo (B2). Só há disputa no mesmo sítio (MSVC e libstdc++
não bloqueiam guardas diferentes entre si), então é menos provável que C1, mas ainda é real no
estresse e, com três threads, também com gatilhos reais. A correção de C1 não remove C2, porque
a guarda continua cobrindo a alocação. Correção no **tradutor** (não à mão em `src/game/`):

- opção 1: emitir um slot trivial (`constinit`/atômico) e resolver o literal fora de qualquer
  guarda, por exemplo `static constinit LiteralSlot slot; return slot.get(u"...",n);` com
  `get` = carga atômica + `String::literal` (já corrigido) + CAS;
- opção 2: internar todos os literais numa tabela gerada durante o bootstrap, ainda com uma
  só thread, e emitir só um índice.

Os quatro estáticos escritos à mão podem passar a ser inicializados no bootstrap, ou usar o
mesmo slot atômico.

**C3. `storage.cpp` `gate`** (`recursive_mutex`, `:33`). Exemplos:

```cpp
cs::Ref<Storage> Storage::Open(std::int32_t media,bool) {
    std::lock_guard<std::recursive_mutex> lock(gate);configured();      // :225
    if(media==2||media==3)return cs::make_ref<Storage>(cs::String{},media);   // :227
...
Bytes Storage::Read(cs::String filename) {
    std::lock_guard<std::recursive_mutex> lock(gate);filename=converted(filename);   // :234
    if(media_==3){const auto* entry=resource_file(filename);return entry?from(state.catalog->read(*entry)):Bytes{};}  // :236 E/S + Bytes::make
```

Também `:219,222,269,280,284-285,290-294`. H (o worker do boot gravando `RecordStore`/
`SaveSystem`) aloca dentro de `gate`; X (a UI lendo `Storage.Read`/`RecordStore` ou salvando)
bloqueia em `gate` sem escopo. Só estresse com duas threads; com três, também com gatilhos
reais. Que a UI use `Storage` no mesmo intervalo do boot é plausível, mas não verificado
(`UNKNOWN`). O provedor `storage_roots` (`:29-32`) não toma `gate`, então a coletora não
precisa dela (por isso não é caso (a)).
Correção: adquirir `gate` como o `MonitorScope` adquire o monitor:
`{GcNativeBlockingScope s; gate.lock();}` num `lock_guard` próprio (`ManagedLock`), em
**todos** os sítios de `gate` (a recursão na mesma thread continua imediata). Alternativa:
copiar os dados nativos sob `gate` e criar os arrays gerenciados depois de soltá-la. Mas `Open`,
`GetFiles` e `RecordStore` misturam estado e alocação, e a primeira opção é mais simples.

**C4. `RuntimeTypeRegistry::mutex`** (`managed_reflection.hpp:31,46-53`):

```cpp
inline Ref<RuntimeType>RuntimeType::for_name(const std::string&name){...std::lock_guard<std::recursive_mutex>lock(registry.mutex);
    auto&value=registry.names[name];if(!value)value=make_ref<RuntimeType>(String::from_utf8(name));return value;}
```

Mesmo esquema que C1 (trava global, alocação na primeira vez de cada tipo, via `typeof`/
`GetType`/`Array.CreateInstance`). Correção: dupla verificação com alocação fora da trava, ou
`ManagedLock`. Observação: em `:31`, `registry.names[name]` insere um `Ref` nulo **antes** da
alocação. Se a alocação lançar exceção, o nulo fica no mapa. Não é problema de ordem de travas,
mas vale corrigir junto.

**C5. `debug_log_mutex` em `pc_main.cpp:185-198`** (só no diagnóstico com `--diagnostic-route`):

```cpp
auto action=route->step(ui_state);
std::lock_guard<std::mutex> lock(pls::kairo::debug_log_mutex);
...
    canvas->KeyClick(code);std::cerr<<...;
...
    canvas->host_event(event);std::cerr<<...;
...
if(action.focus>=0){app->host_focus(action.focus==1);std::cerr<<...;}   // OnResume/OnSuspend: código do jogo
```

H = UI dentro de `host_focus` (alocação → coleta de estresse); X = worker chamando `debug_log`
(`system.hpp:15`, `Log.Info` do jogo) → bloqueia sem escopo → timeout. `KeyClick`/`host_event`
hoje são nativos (`canvas.hpp:48,87`), mas `host_focus` não. Só estresse com duas threads.
Correção: fazer as ações primeiro e travar só para imprimir (montar as linhas num
`std::ostringstream` e escrever no fim).

**C6. `ExceptionIdentity::mutex`** (`managed_exceptions.cpp:113-121`): `make_exception` e a
captura recursiva da interna com a trava mantida. A identidade é compartilhada entre cópias da
mesma exceção. Uma `TypeInitializationException` guardada em `failure_`
(`managed_type_init.hpp:94`) é relançada para toda thread que tocar o tipo, e duas threads que a
capturem ao mesmo tempo disputam a mesma trava. Raro: exige falha de inicializador de tipo.
Correção: criar o objeto fora da trava e publicar com dupla verificação, ou `ManagedLock`.

**C7. `language_mutex`** (`text_input.cpp:37`): `make_ref<LanguagePanelPresenter>` na primeira
chamada com a trava mantida; na prática só a UI chama. Correção trivial: alocar fora.

## 3. Verificações pedidas

1. **`IApplication::RunOnUiThread` e sua fila.** `tasks_mutex_` só cobre `push_back`/
   `pop_front` de `std::function` (`application.hpp:66,157,164,168`). A tarefa roda fora da
   trava. O worker espera o `future` dentro de `GcNativeBlockingScope` (`:158,166`) e conta
   como parado. `done.get()` vem depois do escopo, com o resultado já pronto. O
   `UiInvocation` (com `GcRootProvider`) é criado antes do escopo. **Sem defeito.**
2. **`gc_frame_end` na UI versus workers em `RunOnUiThread(...,true)`.** O worker está nativo,
   então a UI faz `inspect` e coleta sem esperá-lo. A UI só cumpre a tarefa no próximo
   `host_update` (`drain`, `:179-180`); o worker acorda, `end_native_wait` vê `!requested` e
   segue. Não há ciclo, porque a UI nunca espera o worker dentro de `gc_frame_end`. **Sem
   defeito.** (Fora do GC: se a UI esperar um worker que espera a UI, por exemplo em `Join` ou
   na inicialização de tipo, há trava de aplicação; é a mesma semântica do original.)
3. **`managed_type_init.hpp`.** Sim: `end_native_wait` bloqueia até o fim da coleta com o
   coordenador mantido (B1). A coletora **não** precisa de `guard` (nenhum provedor, rastreador
   ou destrutor inicializa tipos), então não há caso (a). O defeito é o caso (b), com três
   threads. Correção em B1.
4. **`Thread::Sleep`/`Join`.** Espera em fatias de 1 ms seguida de `gc_safepoint`: latência
   ≤1 ms. `Join` termina com `worker.join()` sem escopo (`managed_thread.cpp:130`), limitado
   pela desmontagem da thread alvo. Sugestão de baixo custo: `{GcNativeBlockingScope s;
   worker.join();}`. **Sem defeito de trava.**
5. **Workers de carga do catálogo/`ResourceManager`.** Não há worker de E/S no runtime: a
   leitura é síncrona na thread que chama (`asset_catalog.cpp:170-207`). `pack_mutex_` e
   `retain_mutex_` cobrem só trabalho nativo. Quem espera `pack_mutex_` espera no máximo uma
   leitura (~50 ms no ARM). Efeito: latência da rendezvous igual à E/S de outra thread, o que se
   soma ao problema aberto 2. `LoadStart` roda na UI em fatias (`application.hpp:147-154`), e
   o ponto seguro de carga só ocorre fora de chamada inline aninhada. **Sem defeito de trava.**
6. **Som/streaming.** O mixer SDL usa só o trava do dispositivo. O callback de áudio
   (`audio.cpp:137-176`) não é mutador e nunca toca o GC. A coletora toma o trava do dispositivo
   em `memory_ranges` (`sound.cpp:27` → `audio.cpp:278-281`) com `s.mutex` mantido. A ordem
   `s.mutex` → dispositivo é única: nenhuma seção com o dispositivo travado chama o GC. O
   backend nulo do ARM (`null/sound.hpp`) não tem travas. **Sem defeito.**
7. **`diagnostic_profile` `Scope`.** O `Scope` imprime `PLS_REACHABILITY_ALERT` com
   `std::cerr` sem trava (`diagnostic_profile.hpp:74-76`). Isso causa só intercalação de linhas:
   não há alocação gerenciada nem espera. `register_method` (estático por método, com
   `registry_mutex` e E/S na primeira vez) é nativo. **Sem defeito de trava.** Ressalva no
   gancho (4.3).
8. **Usuários de `debug_log_mutex`.** `debug_log` converte para UTF-8 **antes** de travar
   (`system.hpp:14-15`). `offscreen.cpp:65`, `capture.cpp:49-50`, `pc_metrics.cpp:62` e as
   linhas do `pc_main` só escrevem, com uma exceção: `pc_main.cpp:185-198` chama código do jogo
   com a trava mantida (C5). A escrita em si pode bloquear se o leitor do pipe de stderr parar,
   o que é um risco do host e não do GC.
9. **Pool de `String::literal`.** Defeito C1 (e C2 para a guarda do estático gerado).
10. **Mutex do registro de raízes durante a destruição.** A coletora solta `s.mutex` na fase
    de destruição (`tracing_gc.cpp:881-894`). Destrutores de objetos mortos podem destruir
    `GcRootProvider` membros (`managed_exceptions.cpp:73`, `semantic_runtime.hpp:625,780`), que
    tomam `RootRegistry::mutex`. Nenhuma thread parada o segura: as seções do registro não têm
    ponto seguro, e nenhuma thread em escopo nativo cria ou destrói provedores dentro do escopo.
    Uma thread não registrada (áudio) não usa provedores. Nenhum destrutor escrito à mão toma
    outra trava de usuário (lista em `src/kairo`: `~State` só faz `detach`; `~Voice`/`~Impl`
    de áudio são nativos). **Sem defeito.**
11. **`IApplication::Sleep` e ritmo de frames sem escopo.** `IApplication::Sleep` não tem
    chamadores (o original é traduzido para `source_app_sleep` → `JThread.Sleep` →
    `Thread::Sleep`, que coopera: `forms_execution.cpp:31,56,68,71,92`; confirmado em
    `cs_94fed40668eb39b8` → `cs_26244a61d0d2e16c` → `pls::cs::Thread::Sleep`). `pace` dorme até
    50 ms sem escopo, só na UI: latência. Os laços `while(lock_update_)`/`while(request_sync_)`
    da UI (`forms_execution.cpp:71,92`) usam o mesmo `Thread::Sleep` e cooperam. **Sem
    defeito.** Melhoria barata: envolver `pace` e `IApplication::Sleep` em
    `GcNativeBlockingScope`, o que tira até 50 ms das pausas pedidas por workers. Isso ainda
    deve ser medido.

## 4. Conclusão

### 4.1 ACHADOS (defeitos reais, por gravidade)

1. **C1, pool de `String::literal`** (`semantic_runtime.cpp:237-245`): trava global mantida em
   `make_ref`. Estresse com 2 threads → timeout (mais provável causa da tentativa 78,
   `UNKNOWN`); gatilhos reais com ≥3 threads. Correção: alocar fora da trava.
2. **C2, guardas de estáticos locais que alocam** (2.864 `cs_literal` gerados; 
   `managed_encoding.cpp:8-11`, `managed_reflection.hpp:42`, `managed_time.hpp:117`): espera
   de guarda do compilador sem escopo. Mesmo sítio apenas. Correção no tradutor (slot atômico
   ou internação no bootstrap).
3. **B1, coordenador de inicialização de tipos** (`managed_type_init.hpp:69,80-81,94`):
   `end_native_wait` com `guard` mantido; outro mutador bloqueia em `guard` sem escopo. Só
   gatilhos reais com ≥3 threads (não depende do estresse). Correção: soltar `guard` antes de
   sair do escopo nativo.
4. **C3, `storage.cpp` `gate`** (`:33`; alocação em `:219-294`): estresse com 2 threads;
   gatilhos reais com ≥3. Correção: `ManagedLock` (aquisição dentro de `GcNativeBlockingScope`)
   em todos os sítios.
5. **C4, `RuntimeTypeRegistry::mutex`** (`managed_reflection.hpp:31,46-53`): mesmo esquema.
   Correção: dupla verificação ou `ManagedLock`.
6. **C5, `debug_log_mutex` em `pc_main.cpp:185-198`** (diagnóstico de roteiro): código do jogo
   (`host_focus`) com a trava mantida. Correção: travar só para imprimir.
7. **C6, `ExceptionIdentity::mutex`** (`managed_exceptions.cpp:113-121`): raro (exceção de
   inicializador compartilhada entre threads).
8. **C7, `language_mutex`** (`text_input.cpp:37`): alocação na primeira chamada; hoje só a UI.
9. **B3, espera de diagnóstico de 60 s sem escopo** (`null_main.cpp:286-288`): pode passar de
   5 s se um worker coletar nesse intervalo (só `PLS_NULL_PROFILE_SYNC`). Correção: escopo
   nativo no laço.

### 4.2 SEM DEFEITO (revisado e seguro)

- `Heap` (`s.mutex`/`changed`): esperas em condição soltam o mutex; segunda coletora estaciona;
  `enter` de thread nova espera sem estar registrada.
- `RootRegistry::mutex`, `SharedField::mutex_`, `gc_event_mutex`, `tracing_stats_mutex`,
  `last_capture_mutex`, `native_plugin_mutex`, `presenter_mutex`, `published_mutex`,
  `resource_event_mutex`/`consumer_mutex`, cache de regex: seções curtas, sem alocação
  gerenciada nem espera.
- `MonitorScope`: segura o monitor através de código gerenciado por desenho, mas **toda**
  aquisição passa por `GcNativeBlockingScope`, e a coletora nunca toma monitores. O
  `end_native_wait` com o monitor mantido só atrasa outros que já estão nativos. Manter a
  invariante "monitor só por `MonitorScope`".
- `Thread::State::mutex`: tomado pela coletora em `trace_edges`, mas nunca mantido através de
  ponto seguro. `Start`/`entry` limitados.
- `IApplication::tasks_mutex_` e `future` de `RunOnUiThread`: ver 3.1-3.2.
- Catálogo (`retain_mutex_`, `pack_mutex_`) e `DirectoryLock`: só trabalho nativo, com
  latência limitada.
- Áudio SDL (`SDL_LockAudioDevice`): ordem única `s.mutex` → dispositivo; o callback não é
  mutador.
- `HeapLock` em escopo nativo (`runtime_memory.cpp:8-14`): liberado antes do fim do escopo.
- `allocation_probe` (`atomic_flag`): espera ativa curta, sem ponto seguro.
- `Thread::Sleep`/`Join`, `source_app_sleep`, laços de sincronização de formulários: cooperam
  a cada 1 ms.
- `pace`, `SDL_RenderPresent`, E/S: só latência.
- `registry_mutex`/`thread_states_mutex` do perfil: nativos; ordem `debug_log_mutex` →
  `registry_mutex` sem inverso.

### 4.3 Observações menores (não são travamentos)

- O gancho de timeout (`diagnostic_profile.hpp:60-64`) lê `ThreadState::methods` de threads que
  podem estar rodando. É uma corrida de dados, só no diagnóstico e só depois da falha. Também
  escreve `std::cerr` sem `debug_log_mutex`, enquanto segura `s.mutex`.
- `ensure_gc_thread` registra para sempre qualquer thread que aloque ou crie
  `GcNativeBlockingScope`. Hoje só a UI e `cs::Thread` fazem isso (o único `std::thread`
  escrito à mão está em `managed_thread.cpp:73`; o callback do SDL é nativo). Uma thread
  nativa nova que tocasse o runtime viraria mutadora e travaria a próxima rendezvous enquanto
  bloqueada. Vale uma asserção no diagnóstico.
- `inspect` a cada frame (`gc_frame_end`) é uma rendezvous por frame. Todos os casos de três
  threads acima podem disparar por ele (mensagem "heap inspection safepoint"), não só por
  coletas.

## 5. Testes determinísticos propostos

**T1. Motor, trava mantida durante alocação** (estende `tests/translator/tracing_gc_fixtures.cpp`,
executado por `python tools/test_tracing_gc.py`; padrão de `timeout_and_limit`, `:261-267`, e
`workers`, `:210-230`). Modela C1/C3/C4 sem o runtime:

```cpp
void lock_held_across_allocation() {
    for (bool scoped : {false, true}) {
        Heap heap; Mutator mutator(heap); heap.stop_timeout(std::chrono::milliseconds(200));
        std::mutex m; std::atomic<int> phase{0}; std::atomic<bool> timed_out{false};
        std::thread holder([&]{ Mutator s(heap);
            std::lock_guard<std::mutex> l(m); phase = 1;
            while (phase.load() < 2) fixture_yield();            // espera o rival anunciar
            std::this_thread::sleep_for(std::chrono::milliseconds(20)); // rival já em m.lock()
            try { heap.collect(); }                               // = coleta de estresse dentro da trava
            catch (const std::runtime_error&) { timed_out = true; } });
        while (phase.load() < 1) fixture_yield();
        phase = 2;
        if (scoped) { NativeWait w(heap); m.lock(); } else m.lock();   // o rival (thread principal)
        m.unlock();
        { NativeWait w(heap); holder.join(); }
        check(timed_out.load() == !scoped);   // sem escopo: timeout; com escopo: coleta conclui
    }
}
```

Variante de três threads (gatilhos reais): a dona estaciona em `safepoint` com a trava, uma
terceira chama `collect()`, o rival bloqueia sem escopo, e o resultado esperado é o mesmo. O
`sleep_for(20 ms)` é a única dependência de tempo; com um wrapper de trava que publica "vou
bloquear" logo antes de `lock()`, o caso sem escopo fica determinístico até o limite de 200 ms.

**T2. Runtime, coordenador de inicialização de tipos (B1)** (estende
`tests/translator/thread_gc_fixtures.cpp`, executado por `tests/translator/run_thread_fixtures.py`).
Usa `TypeInitState` real e `tracing_heap().stop_timeout(300 ms)`:

1. O: `std::thread` **não registrada** executa `T.run("T", [&]{ wait(latch_O); })`, para que a
   dona termine sem depender do GC.
2. W (`GcMutatorScope`): `T.run(...)` entra no escopo nativo e espera.
3. X (`GcMutatorScope`): fica em laço ativo **sem** `gc_safepoint` até `go`, simulando trabalho
   nativo; depois chama `T2.run("T2", [&]{ gc_safepoint(); })` (tipo novo).
4. C (thread principal, registrada): em outra thread registrada, chama `gc_collect()`; a
   rendezvous espera X.
5. Solta `latch_O`. O conclui T, W acorda e fica em `end_native_wait` com `guard`. Depois de
   ~20 ms, solta `go`. X bloqueia em `guard`.
6. Resultado esperado hoje: `NotSupportedException("GC cooperative rendezvous timed out...")`
   em C. Depois da correção de B1: X obtém `guard`, estaciona no `gc_safepoint` de `T2` e a
   coleta conclui. O teste afirma o comportamento corrigido e fica vermelho no código atual.

**T3 (opcional, estresse do pool).** Em `thread_gc_fixtures.cpp`: `tracing_heap().stress(1,false,0)`,
`stop_timeout(500 ms)`, duas threads registradas chamando `String::literal` com textos novos
(`u"a<i>"`/`u"b<i>"`, 10.000 cada). Hoje é probabilístico, e a falha esperada é o timeout;
depois de C1, nunca falha. Serve como regressão de C1 e C4 (com `runtime_type_of` de tipos
distintos no lugar dos literais), não como prova.

## 6. O que fica em aberto

- Qual trava causou a tentativa 78 é `UNKNOWN`: sem pilha registrada. Para confirmar, rodar o
  estresse de boot outra vez com o gancho `PLS_GC_RENDEZVOUS_THREAD` (já instalado) até
  reproduzir. Se a pilha não parada terminar em `String::literal`, `Storage::*`/
  `RecordStore::*` ou `RuntimeType::*`, C1/C3/C4 se confirmam.
- Não foi verificado se três ou mais mutadores rodam juntos em algum trecho do jogo (necessário
  para B1 e para C1/C3/C4 com gatilhos reais).
- Esta revisão não mediu nada. As sugestões de escopo nativo em `pace`/`Join` são para reduzir
  latência e precisam de medição antes e depois.
