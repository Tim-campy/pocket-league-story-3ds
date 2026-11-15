# Inventário de raízes do coletor no código escrito à mão

Data: 2026-11-15. Estado: **rascunho de auditoria estática** (leitura de código, nada compilado
nem executado). O que não foi verificado em execução está marcado `UNKNOWN`.

Escopo: `src/runtime/**`, `src/kairo/**` exceto `src/kairo/common/generated/**`, `src/main/**`.
Fora do escopo: `src/game/**` e `src/kairo/common/generated/**` (gerados; já cobertos por
`tests/repository/test_generated_static_roots.py` após o commit `74890cf`).

Números de linha referem-se à árvore de trabalho atual (com as mudanças não publicadas de
`tracing_gc.*`, `managed_gc_bridge.inc`, `semantic_runtime.*`, `pc_main.cpp`).


## Estado dos suspeitos (revisado em 2026-11-15, sessão principal)

Levantamento estático feito por um subagente e revisado; cada suspeito foi conferido no código.
O inventário mecânico está em `config/gc-root-inventory.json` (35 entradas, gerado por
`tools/gc_root_scan.py`) e é verificado por `tests/repository/test_gc_root_inventory.py`.

| Suspeito | Estado |
|---|---|
| S1 (matrizes de `Image` com raiz em outra unidade) | **Justificado**: alocadas só na inicialização estática, antes de qualquer coleta; entrada `provider-other-unit` no inventário, verificada pelo teste. O estresse passou a ser ligado no `main` (`gc_stress_configure`), refletindo o contrato real. |
| S2 (provedor registrado depois do inicializador que aloca) | **Corrigido** em `integer_number_format` (provedor declarado antes da definição). Os demais casos só alocam na inicialização estática (mesma justificativa de S1). |
| S3 (`form_construction_hook`/`on_lifecycle_warning` capturando `Ref<FormRuntime>` sem raiz) | **Corrigido**: `cs::Pinned`/`cs::pin` (`semantic_runtime.hpp`) mantém a captura como raiz enquanto um gancho ou gerenciador a guarda. Testes: forms-execution 50/50, bootstrap 12/12. |
| S4 (`DialogRequest::buttons`) | **Sem defeito**: as mesmas `String` são referenciadas pelo array local `labels`, que fica na pilha da lambda durante `Present`. |
| S5 (identidade fraca de exceções) | Por projeto; não é questão de memória. |
| S6 (ganchos de fuso horário nunca instalados) | Entrada `not-installed`: o teste reprova se alguém instalar sem revisar (usar `cs::pin`). |
| S7 (`SoundOGG::Load` escreve na pilha de worker em espera) | Seguro hoje (o objeto também fica em `sound_list_`, raiz). Mantido como observação. |
| S8 (`thread_local` em `get_CurrentThread` no 3DS) | `UNKNOWN` no aparelho; amostra de estresse no Azahar em andamento. |
| S9 (`RecordStore` na pilha) | Inofensivo. |

## 0. Modelo de raízes usado na auditoria

| Fonte de raiz | Onde | Observação |
|---|---|---|
| Provedores precisos | `semantic_runtime.cpp:42-65` (`RootRegistry`, `GcRootProvider`, `visit_gc_roots`), ligados ao heap por um único `add_roots` em `managed_gc_bridge.inc:57`; executados em `tracing_gc.cpp:804` | Cada `GcRootProvider` vive enquanto seu dono C++ vive. |
| Pilha e registradores, conservador | `tracing_gc.cpp:807-812` (`s.scan` dos registros e da cópia da pilha) | A cópia é tirada em `Heap::safepoint` (`:626`) ou em `Heap::begin_native_wait` (`:645`). **Escritas na pilha de uma thread depois do seu snapshot não são vistas** (ver S7). |
| Objetos em construção | `tracing_gc.cpp:702` (`constructing.push_back`) e `:811` | Alocações aninhadas dentro de um construtor `make_ref` ficam enraizadas até o fim da construção mais externa. |
| Arestas de objetos gerenciados | `Descriptor::trace` → `T::trace_edges` (`semantic_runtime.hpp:330-332`) | `std::function`, buffers de `std::vector` em memória nativa e capturas de lambdas **não** são varridos. |

Quando há coleta (o que define as "janelas" de risco):

- `gc_frame_end` (fim de frame, thread de UI), `gc_loading_safepoint` (após a chamada inline
  mais externa de `RunOnUiThread(...,true)`), `gc_collect` explícito (`JSystem.Gc`/`GC.Collect`),
  e coleta pedida por outra thread que espera um safepoint.
- **Modo stress** (`PLS_GC_STRESS_EVERY`, mudança local ainda não publicada,
  `tracing_gc.cpp:631-636`): coleta completa no `heap.safepoint()` de **qualquer** `make_ref`
  (`tracing_gc.hpp:146`), inclusive durante a inicialização estática. Isso abre janelas que no
  modo normal não existem (S1, S2).

Legenda da coluna "Raiz": **P** = `GcRootProvider` nomeado; **M** = membro de objeto gerenciado
traçado; **S** = só na pilha durante a chamada; **W** = fraco por projeto; **N** = sem raiz;
**I** = enraizado indiretamente (o mesmo objeto é retido por outra raiz).

## 1. Tabela de locais que podem conter referência gerenciada fora de campo traçado

### 1a. Armazenamento estático, global, `inline`, `thread_local` e estático de função

| file:line | Símbolo | Tipo de armazenamento | Tipo gerenciado | Raiz | Vida útil / notas |
|---|---|---|---|---|---|
| `src/kairo/common/semantic_runtime.hpp:766` | `integer_number_format` (`positive_sign`, `negative_sign`, `:762-763`) | global `inline` | `String` ×2 | P `integer_number_format_roots` `:767-769` | Processo inteiro. Duas alocações no inicializador **antes** do provedor existir: janela no modo stress (S2). |
| `src/kairo/common/semantic_runtime.cpp:237` | `literals` em `String::literal` | estático de função | `unordered_map<u16string_view,Ref<Storage>>` | P `roots` `:238` (declarado antes do primeiro uso) | Processo inteiro; o pool nunca encolhe. |
| `src/kairo/common/semantic_runtime.cpp:51` | `root_registry()::registry` | estático de função (heap nativo, nunca destruído) | nenhum (contém os `std::function` provedores) | — | Infraestrutura. |
| `src/runtime/managed_gc_bridge.inc:9-59` | `tracing_heap()::heap` | estático de função | nenhum diretamente | — | `add_roots` único em `:57`. |
| `src/runtime/managed_gc_bridge.inc:66-67` | `ensure_gc_thread()::registration` | `thread_local` | nenhum | — | Registra a thread como mutadora na primeira alocação. |
| `src/runtime/tracing_gc.cpp:54` | `collection_probe` | `thread_local` | nenhum | — | Diagnóstico. |
| `src/kairo/common/managed_reflection.hpp:30` | `runtime_types()::value` (`names`, `elements`, `:26-27`) | estático de função | `map<..., Ref<RuntimeType>>` | P `roots` na mesma linha | Processo inteiro. |
| `src/kairo/common/managed_reflection.hpp:42` | `RuntimeType::get_Assembly()::value` | estático de função | `Ref<RuntimeAssembly>` | P `roots` na mesma linha | Nenhuma alocação entre o valor e o provedor. |
| `src/kairo/common/managed_encoding.cpp:8-11` | `get_UTF8/get_Unicode/get_BigEndianUnicode/get_ASCII()::value` | estático de função ×4 | `Ref<RuntimeEncoding>` | P `roots` na mesma linha | Idem. |
| `src/kairo/common/managed_time.hpp:117` | `TimeZoneInfo::get_Utc()::value` | estático de função | `Ref<TimeZoneInfo>` | P `roots` na mesma linha | Temporários `String(u"UTC")` ficam na pilha durante `CreateCustomTimeZone`. |
| `src/kairo/common/managed_time.hpp:104-105` | `local_timezone_provider`, `timezone_lookup_provider` | global `inline` `std::function` | retorna `Ref<TimeZoneInfo>`; capturas desconhecidas | N (capturas opacas) | **Nunca instalados** no repositório (grep em `src/` inteiro). Ver S6. |
| `src/kairo/common/managed_time.hpp:31,37` | `utc_clock_ticks`, `local_to_utc_ticks` | global `inline` `std::function` | nenhum (inteiros) | — | `virtual_clock.hpp:57,61` instala lambdas sem referências gerenciadas. |
| `src/kairo/common/managed_thread.cpp:10` | `current_thread` | `thread_local` | `Ref<Thread>` | P `thread_local roots` `:38` (só nas threads que chamaram `get_CurrentThread`) ; nas workers também P `launch_roots` `:72` | Na worker, `entry()` grava o slot em `:78` sem o provedor TLS; seguro graças a `launch_roots`. Ver S8. |
| `src/kairo/common/managed_thread.cpp:11` | `priority_backend` | global (anônimo) | nenhum | — | Lambdas sem captura (`sdl/thread_priority.cpp:31-34`). |
| `src/kairo/api/application.hpp:44` | `IApplication::current_` | `inline static` `SharedField` | `Ref<IApplication>` | P `application_roots` `:186` | Até `host_stop` (`:184`). |
| `src/kairo/api/application.hpp:45` | `IApplication::platform_model_` | `inline static` `SharedField` | `String` | P `application_roots` `:186` | Processo. |
| `src/kairo/api/application.hpp:46` | `IApplication::viewport_result_` | `inline static` | `Array<int32_t>` | P `application_roots` `:186` | Alocado no inicializador estático; provedor 140 linhas depois no mesmo cabeçalho (janela stress pequena, S2). |
| `src/kairo/api/canvas.hpp:20-21` | `Canvas::instance_`, `Canvas::graphics_buffer_` | `inline static` | `Ref<Canvas>`, `Ref<Graphics>` | P `canvas_roots` `:97` | Iniciam nulos. |
| `src/kairo/api/graphics.hpp:148` | `Graphics::current_` | `inline static` `SharedField` | `Ref<Graphics>` | P `graphics_roots` `:276` | Inicia nulo. |
| `src/kairo/api/graphics.hpp:177` | `Graphics::anchor_result_` | `inline static` | `Array<int32_t>` | P `graphics_roots` `:276` | Alocado no inicializador; janela stress pequena (S2). |
| `src/kairo/api/graphics.hpp:75` | `Image::getOptimize_result`, `getOptimizeSeb_result`, `getPaletteInfo_result`, `getAreaSize_result` | `inline static` ×4 | `Array<int32_t>` ×4 | P `image_roots` em **outra unidade**: `src/kairo/common/image_lifetime.cpp:9-16` | **Mesma classe do bug corrigido em `74890cf`** (estático inicializado numa unidade, raiz em outra). Quatro alocações seguidas sem raiz; janela real no modo stress (S1). |
| `src/kairo/api/sound.hpp:38` | `SoundPlayer::instance_` | `inline static` | `Ref<SoundPlayer>` | P `sound_roots` `:106` | Inicia nulo. |
| `src/kairo/api/sound.hpp:76` | `SoundBase::sound_list_` | `inline static` `std::vector` | `Ref<SoundBase>` | P `sound_roots` `:106` | Cresce em `register_sound` (`sound.cpp:68`), encolhe em `Dispose` (`sound.cpp:71`). |
| `src/kairo/api/forms.hpp:19` | `form_construction_hook` | global `inline` `std::function` | captura `Ref<FormRuntime>` (`forms_execution.cpp:38`) | I (`installed_form_runtime`, P `form_runtime_roots` `forms_execution.cpp:8`) | A captura em si não é traçada. Ver S3. |
| `src/kairo/common/forms_execution.cpp:7` | `installed_form_runtime` | global (anônimo) | `Ref<FormRuntime>` | P `form_runtime_roots` `:8` | Processo. |
| `src/kairo/common/graphics.cpp:13` | `graphics_runtime` (`GraphicsRuntimeBindings`) | global (anônimo) | 6 × `Delegate<...>` | P `graphics_roots` `:14-18` | Instalado uma vez (`:40`). |
| `src/kairo/common/image_lifetime.cpp:7` | `runtime` (`ImageRuntimeBindings`) | global (anônimo) | 5 × `Delegate<...>` | P `image_roots` `:9-16` | Instalado uma vez (`:27-29`). |
| `src/kairo/common/image_lifetime.cpp:8` | `source_images` | global `std::vector` | `Ref<Image>` | P `image_roots` `:9-16` | Entre frames; cache LRU de imagens. |
| `src/kairo/common/font.cpp:15` | `services` (`TextServices`) | global (anônimo) | 6 × `std::function` com `String`/`Ref` na assinatura | — (capturas vazias hoje: `src/game/bootstrap_generated.cpp:24`) | Se um dia capturar referência, ficará sem raiz. |
| `src/kairo/common/font.cpp:23` | `font_cache_accounting` | global (anônimo) | `Ref<FontCacheAccounting>` | P `font_cache_root` `:24` | Processo. |
| `src/kairo/common/offscreen.cpp:8` | `surfaces` | global `std::vector` | `Ref<Offscreen>` | P `offscreen_roots` `:9` | Entre frames, até `EndFrame` (`:76`). |
| `src/kairo/common/sound.cpp:7` | `sound_output` | global (anônimo) | `Ref<SoundOutput>` | P `output_roots` `:8` | Processo. |
| `src/kairo/common/dialog_service.cpp:4` | `presenter`, `label_provider` | global (anônimo) | `Ref<DialogPresenter>`, `Delegate<Array<String>(int)>` | P `dialog_roots` `:5` | Processo. |
| `src/kairo/common/text_input.cpp:4` | `presenter` | global (anônimo) | `Ref<TextInputPresenter>` | P `presenter_roots` `:5` | Processo. |
| `src/kairo/common/text_input.cpp:35` | `language_presenter` | global (anônimo) | `Ref<LanguagePanelPresenter>` | P `language_roots` `:36` | Criado sob demanda (`:37`). |
| `src/kairo/common/storage.cpp:28` | `state` (`State`, `:17-27`: `heap`, `resources`, `key`, `record_storage`) | global (anônimo) | `vector<pair<u16string,Array<uint8_t>>>`, `Array<String>`, `Array<uint8_t>`, `Ref<Storage>` | P `storage_roots` `:29-32` | `key=Bytes::make(1)` é alocado no inicializador; nenhuma alocação até o provedor (mesma unidade, linha seguinte). |
| `src/kairo/platform/sdl/capture.cpp:15` | `jobs` | global `std::vector` | `Ref<Job>` | P `job_roots` `:16` | Entre `queue_capture` e `finish_captures` (um frame). |
| `src/kairo/platform/sdl/globalization.cpp:15` | `provider` (`GlobalizationProvider`) | global (anônimo) | `std::function` que **retornam** `String`/`Array<String>` | — (funções livres, sem captura: `:104,106`) | Não armazena referência. |
| `src/kairo/common/managed_collation.cpp:16,155` | `character_data`, `collator_cache` | global / `thread_local unique_ptr` | nenhum (o `Collator` só guarda `Str` com `owned`, não `managed`) | — | `Str::managed` (`:28`) só existe em cópias na pilha. |
| `src/kairo/common/managed_regex.cpp:244` (dentro de `compile`) | `cache` | estático de função | nenhum (`u16string` + `wregex`) | — | — |
| `src/kairo/api/system.hpp` (`native_plugin_context`), `diagnostic_profile.hpp:48`, `virtual_clock.hpp:23-27`, `resource_load_trace.hpp:12-21`, `allocation_probe.hpp:8-9`, `src/main/allocation_probe.cpp:30`, `src/runtime/ctr_thread_lifecycle.cpp:16-17` | estado de diagnóstico/plataforma | global/`thread_local` | nenhum | — | Conferidos: só escalares, ponteiros nativos e strings nativas. |

### 1b. Membros nativos dentro de objetos gerenciados que **não** são traçados

Todos os demais membros de tipo gerenciado das classes escritas à mão derivadas de
`cs::Object` foram conferidos contra o respectivo `trace_edges` e estão traçados (lista na seção 4,
regra E). Os que sobram são estes:

| file:line | Símbolo | Tipo de armazenamento | Tipo gerenciado | Raiz | Notas |
|---|---|---|---|---|---|
| `src/kairo/api/application.hpp:53` | `IApplication::ui_tasks_`, `update_tasks_` | `deque<std::function>` (fila para a UI) | captura `shared_ptr<packaged_task>` → `shared_ptr<UiInvocation>` | P `UiInvocation::roots` `:29-32`, `:37-38` | Ver seção 2. |
| `src/kairo/api/application.hpp:54,57-60` | `termination_handler_`, `orientation_reader_/reset_/writer_`, `fullscreen_writer_` | `std::function` | nenhum hoje | — | Capturas nativas: `pc_main.cpp:119-122` (`&backend`), `null_main.cpp:213` (`&orientation`), `host_configure(...,{})`, `host_termination([](){...})` sem captura (`bootstrap_generated.cpp:26`); `:169` captura `this` (o próprio app). |
| `src/kairo/api/application.hpp:61` | `initialization_` (`ApplicationInitializationBridge`, `:18-22`) | 3 × `std::function` | capturam `Weak<BootstrapContext>` (`bootstrap.cpp:37-39`) | W; o dono é M `initialization_owner_` `:62`, traçado em `:143` | Correto por projeto. |
| `src/kairo/api/canvas.hpp:92` | `Canvas::on_back` | `std::function` | desconhecido | — | **Nunca atribuído** no repositório (Esc lança `NotSupportedException`, `canvas.cpp:62`). |
| `src/kairo/api/input.hpp:59` | `CanvasKeyState::on_key_down/on_key_up` | `std::function` | captura `this` de `Canvas` (`canvas.cpp:8-9`) | auto-referência | Inofensivo: o próprio dono. |
| `src/kairo/api/input.hpp:87,90` | `PcInputAdapter::on_touch`, `on_key_down/on_key_up` | `std::function` | captura `this` de `Canvas` (`canvas.cpp:10-12`) | auto-referência | Os `MotionEvent`/`KeyEvent` criados em `input.cpp` (`decide_frame`) são temporários na pilha. |
| `src/kairo/api/input.hpp:84` | `PcInputAdapter::current_debug_` | `std::function` | nenhum | — | Lambda sem captura (`bootstrap_generated.cpp:20`). |
| `src/kairo/api/forms.hpp:120` | `FormManagerBase::on_lifecycle_warning` | `std::function` | captura `Ref<FormRuntime>` (`forms_execution.cpp:41`) | I (o mesmo `runtime` é retido por M `execution_` → `SourceFormExecution::runtime_` e por M `game_state_` → `RuntimeGameState::runtime_`) | Não traçado; frágil. Ver S3. |
| `src/kairo/common/semantic_runtime.hpp:659` | `Delegate::Binding::target` | `Ref<void>` dentro de `InvocationList::bindings` | alvo do delegate | I (cópia de `managed_target`, traçado em `:680`) | Para alvos que não derivam de `Object` e não são polimórficos, `managed_target` é nulo; nenhum caso assim no código manual. |
| `src/kairo/common/semantic_runtime.hpp:659` | `Delegate::Binding::function` | `std::function` | capturas opacas | N por projeto (o comentário em `:647-648` diz que o heap não varre `std::function`) | Seguro no código manual: `image_lifetime.cpp:58,84` capturam `raw` == alvo; `from_native` captura só `DelegateCapture<Closure>` == alvo (`:720`). |
| `src/kairo/common/semantic_runtime.hpp:650` | `NativeDelegateClosure::function` | membro `F` | cópias das mesmas capturas | I (a tupla `captures` `:651` é traçada em `:653-655`) | Seguro se toda captura gerenciada de `F` também for passada como `Captured...` (ver regra D). |
| `src/kairo/common/managed_reflection.hpp:15-16` | `RuntimeType::create_array`, `assign_array_element` | `std::function` | nenhum | — | Lambdas sem captura (`:150-151`). |
| `src/kairo/common/managed_exceptions.hpp:17` | `ExceptionObject::native_` | `std::exception_ptr` | pode conter `ManagedUnwind`/`TypeInitializationException` | P `ManagedUnwind::roots_` (`managed_exceptions.cpp:73`) se houver | Exceções nativas comuns só têm `Weak` (abaixo). |
| `src/kairo/common/managed_exceptions.hpp:18` + `semantic_runtime.hpp:33` | `ExceptionObject::identity_` / `ExceptionIdentity::managed_view` | `shared_ptr` nativo com `Weak<Object>` | `ExceptionObject` | W | Fraco por projeto (S5). |
| `src/kairo/common/managed_thread.cpp:15-27` | `Thread::State` (`start` `:19`, `worker` `:20`) via `shared_ptr` | objeto nativo dono de um `std::thread` | `Delegate<void()>` | M `Thread::trace_edges` `:133` | A lambda da worker captura `self` e `launch_roots` (seção 2). |
| `src/kairo/common/offscreen.cpp:12-17` | `Offscreen::State` via `unique_ptr` | objeto nativo | 3 × `Delegate`, `Ref<Image>`, 2 × `Ref<Graphics>` | M `Offscreen::trace_edges` `:80` | Todos os campos traçados. |

### 1c. Agregados nativos (não derivam de `Object`) com membros gerenciados

| file:line | Tipo | Membros gerenciados | Onde vivem hoje | Raiz |
|---|---|---|---|---|
| `src/kairo/api/application.hpp:26-40` | `UiInvocation<R>` | `Delegate<R()> method`, `R result` | `shared_ptr` capturado por `packaged_task`/fila | P próprio (`roots` `:29`, `:37`); não copiável (bom) |
| `src/kairo/api/graphics.hpp:12-19` | `GraphicsRuntimeBindings` | 6 × `Delegate` | global `graphics.cpp:13`; parâmetro na pilha | P `graphics_roots` |
| `src/kairo/api/graphics.hpp:24-30` | `ImageRuntimeBindings` | 5 × `Delegate` | global `image_lifetime.cpp:7` | P `image_roots` |
| `src/kairo/api/font.hpp:7-14` | `TextServices` | `std::function` com `String`/`Ref` na assinatura | global `font.cpp:15` | sem capturas hoje |
| `src/kairo/api/input.hpp:49-75` | `CanvasKeyState` | `Array<int32_t> history_` (`:50`) | membro `Canvas::keys_` (`canvas.hpp:33`) | M `Canvas::trace_edges` → `keys_.trace_edges` (`canvas.cpp:67`) |
| `src/kairo/api/sound.hpp:37` | `SoundPlayer::Port` | `Ref<SoundBase>` | `SoundPlayer::ports_` | M `sound.cpp:65` |
| `src/kairo/common/sound.cpp:14` | `StreamingOutput::Port` | `Ref<SoundData>` | `std::array` membro | M `sound.cpp:28` |
| `src/kairo/platform/null/sound.hpp:27` | `Sound::Port` | `Ref<SoundData>` | `std::array` membro | M `:40` |
| `src/kairo/api/mesh.hpp:15-21` | `MeshManager::Batch` | `Ref<Image> image` (`:18`) | `MeshManager::batches_`; movido para fora por `take_commands` (`:46`) | M `mesh.cpp:76`; fora do gerenciador, P `previous_roots` (`offscreen.cpp:58`) |
| `src/kairo/api/dialog_service.hpp:4-5` | `DialogButton`, `DialogRequest` | `String label`; `String title,message`; `std::vector<DialogButton> buttons` | local na pilha da UI (`dialog_service.cpp:17`) | S para `title/message`; **`buttons` em buffer nativo: N** (S4) |
| `src/kairo/api/text_input.hpp:4` | `TextPanelRequest` | 4 × `String` | temporário na pilha (`text_input.cpp:20,32`); membro `SimpleTextInput::panel_request_` | S / M `sdl/text_input.hpp:29` |
| `src/kairo/api/text_input.hpp:24` | `LanguagePanelRequest` | `Array<String>`, `String` | temporário na pilha (`text_input.cpp:39`) | S |
| `src/kairo/api/forms_callbacks.hpp:7-15,31-43,69-77` | `KairoCallbacks`, `FormCallbacks`, `SurfaceCallbacks` | `Delegate` ×9 / ×13 / ×12 | membros de `CallbackFormKairo/Runtime/Surface` | M (`:29`, `:60`, `:91`) |
| `src/kairo/api/bootstrap.hpp:9-18` | `BootstrapBindings` | 4 × `Delegate`, `Ref<FormRuntime>` | membro `BootstrapContext::bindings_` | M `bootstrap.cpp:32` |
| `src/kairo/common/storage.cpp:17-27` | `State` | ver 1a | global | P `storage_roots` |
| `src/kairo/common/semantic_runtime.hpp:761-764` | `IntegerNumberFormat` | 2 × `String` | global | P (S2) |
| `src/kairo/common/managed_reflection.hpp:24-29` | `RuntimeTypeRegistry` | 2 × `map<..., Ref<RuntimeType>>` | estático de função | P |
| `src/kairo/common/managed_collation.cpp:26-40` | `Str` | `Ref<Object> managed` (`:28`) | cópias na pilha durante a comparação; `Escape` (`:106`) também só como local | S; nenhuma alocação gerenciada durante a comparação |
| `src/kairo/common/managed_dictionary.hpp:15-22,63-74` | `KeyValuePair`, `Dictionary::Enumerator` | `K`, `V`, `Ref<Storage>` | dentro de `Dictionary::Storage::entries` (M `:30`), na pilha, ou em `DictionaryEnumeratorObject` (M `:97`) | M/S |
| `src/kairo/common/managed_collections.hpp:148-159` | `List::Enumerator` | `Ref<Storage>`, `T value` | pilha ou `EnumeratorObject` (M `:165`) | M/S |
| `src/kairo/common/semantic_runtime.hpp:620-630` | `ReturnFlow<T>` | `T value` | objeto de exceção C++ em voo | P próprio (`roots` `:623`); cópia e movimento re-registram |
| `src/kairo/common/managed_exceptions.cpp:70-88` | `ManagedUnwind<Native>` | `ExceptionRef object_` | objeto de exceção C++ em voo, `exception_ptr` | P próprio (`roots_` `:73`); construtor de cópia re-registra (`:84-85`) |
| `src/kairo/common/semantic_runtime.hpp:309-316` | `MonitorScope` | `Ref<Object> target_` | só como local RAII | S (atribuído antes do `GcNativeBlockingScope`, então está no snapshot) |
| `src/main/pc_main.cpp:44-47` | `TextInputCleanup` | `Ref<SimpleTextInput>` | local de `main` | S (também P `presenter_roots`) |
| `src/main/pc_main.cpp:48-57` | `FinalMetrics::payload` | `std::function` capturando `[&]` locais de `main` (`display`) | local de `main` | S (`display` também é M `Canvas::display_`) |

### 1d. Contêineres locais com referências gerenciadas em memória nativa (durante a chamada)

| file:line | Símbolo | Tipo gerenciado | Raiz | Notas |
|---|---|---|---|---|
| `src/kairo/common/managed_regex.cpp:38` | `g` em `empty_match` | `vector<Ref<RegexGroup>>` | P `roots` na mesma linha | Movido para o construtor após o safepoint de `make_ref`; sem janela. |
| `src/kairo/common/managed_regex.cpp:46-47` | `groups` em `find` | `vector<Ref<RegexGroup>>` | P `group_roots` | — |
| `src/kairo/common/managed_regex.cpp:39` | `result` (parâmetro por referência) | `vector<Ref<RegexMatch>>` | P do chamador (`:71`, `:72`) | — |
| `src/kairo/common/managed_regex.cpp:71,72` | `values` | `vector<Ref<RegexMatch>>` | P `roots` | — |
| `src/kairo/common/managed_string_ops.cpp:176-177` | `parts` em `string_split` | `vector<String>` | P `roots` | — |
| `src/kairo/common/storage.cpp:264-265` | `names` em `Storage::GetFiles` | `vector<String>` | P `roots` | — |
| `src/kairo/common/offscreen.cpp:57-58` | `previous_commands` | `MeshManager::Commands` (`vector<Batch>`) | P `previous_roots` | Nenhuma alocação entre `take_commands` e o provedor. |
| `src/kairo/common/offscreen.cpp:70-71` | `pending` em `RenderAll` | `vector<Ref<Offscreen>>` | P `pending_roots` | Cópia de `surfaces`. |
| `src/kairo/platform/sdl/capture.cpp:35-36` | `pending` em `finish_captures` | `vector<Ref<Job>>` | P `pending_roots` | `jobs` movido; provedor na linha seguinte, sem alocação entre eles. |
| `src/kairo/common/dialog_service.cpp:17` | `request.buttons` | `vector<DialogButton>` (`String label`) | **N** | S4. |
| `src/kairo/common/semantic_runtime.cpp:119,179` | `objects` (coletor legado) | `vector<Ref<Object>>` | — | Só com `PLS_TRACING_GC=0` (comparação histórica); fora do caminho de produção. |

### 1e. Capturas de lambdas usadas como delegates ou tarefas de UI (escritas à mão)

| file:line | Lambda | Capturas gerenciadas | Raiz | Notas |
|---|---|---|---|---|
| `src/kairo/common/image_lifetime.cpp:58,84` | `Delegate::bind(self,...,[raw]{...})` | `raw` == alvo | M `InvocationList::trace_edges` (alvo) | — |
| `src/kairo/common/offscreen.cpp:23-30` | `from_native("CPU.Offscreen.Create",[dynamic,statics,layout,order]...,dynamic,statics,layout)` | 3 × `Delegate` | P via tupla da `NativeDelegateClosure` | Capturas = argumentos extras. |
| `src/kairo/common/dialog_service.cpp:14-21` | `from_native(...,[&]{...},current,title,message)` | por referência; raízes explícitas `current,title,message` | tupla + pilha do chamador que espera | `labels` e `request` são locais da própria lambda. |
| `src/kairo/common/text_input.cpp:12-15,20,24,28,32` | `from_native` ×5 | `current`, `initial`, `title`, `text`, `positive`, `negative` | tupla (todas as capturas gerenciadas repetidas como argumentos) | Conferido um a um. |
| `src/kairo/common/sound.cpp:9` | helper `ui(F action, Roots... roots)` | conforme o chamador | tupla | — |
| `src/kairo/common/sound.cpp:69,71,79-81,82,83` | `ui([&]{...}, player / shared_from_this())` | por referência + raízes explícitas | tupla + pilha do chamador | — |
| `src/kairo/common/sound.cpp:75-76` | `ui([&]{... result=make_ref<SoundOGG>(...); register_sound(result);})` | **sem raízes explícitas**; escreve `result` no quadro do chamador | I (`sound_list_`) | S7 (escrita depois do snapshot). |
| `src/kairo/common/forms_execution.cpp:38-42` | `form_construction_hook=[runtime]...`, `on_lifecycle_warning=[runtime]...` | `Ref<FormRuntime>` | I | S3. |
| `src/kairo/common/bootstrap.cpp:37-39` | ponte de inicialização `[weak]` | `Weak<BootstrapContext>` | W + M `initialization_owner_` | Correto. |
| `src/kairo/common/managed_thread.cpp:73` | `std::thread([self,launch_roots]{self->entry();})` | `Ref<Thread>` | P `launch_roots` `:72` | Seção 2. |
| `src/kairo/api/application.hpp:156,163,164,168` | `packaged_task([invocation]...)`, `ui_tasks_.push_back([task]...)`, `update_tasks_.push_back([invocation]...)` | `shared_ptr<UiInvocation>` | P `UiInvocation::roots` | Seção 2. |

## 2. Estruturas nativas pendentes ou de longa duração

| Estrutura | Onde | Referências gerenciadas retidas | Enraizadas enquanto pendentes? |
|---|---|---|---|
| Fila de tarefas da UI (`RunOnUiThread`, espera ou não) | `application.hpp:153-167`; fila `ui_tasks_` `:53`; execução em `drain` `:65-67` | `UiInvocation::method` (delegate e seu alvo) e `UiInvocation::result` | **Sim.** `UiInvocation` registra o próprio provedor (`:29-32`, `:37-38`) e vive enquanto existir o `shared_ptr` (fila, `packaged_task`, ou o `task` local do chamador). No caso com resultado e espera, o chamador mantém `task` → `invocation` até retornar, então `result` continua enraizado depois que a UI tira a tarefa da fila; o valor no estado compartilhado do `std::future` é uma cópia nativa, coberta por essa mesma raiz. |
| Fila `update_tasks_` (`RunOnUpdate`) | `application.hpp:168` | idem | **Sim** (`UiInvocation`). |
| Thread gerenciada (`cs::Thread`) | `managed_thread.cpp:64-86` | `Ref<Thread> self` (e, por ele, `State::start`) | **Sim.** `launch_roots` (`:72`) é capturado pela lambda do `std::thread` e só morre quando a lambda termina, depois de `entry()`. A pilha da worker é registrada por `GcMutatorScope` (`:80`). |
| `current_thread` por thread | `managed_thread.cpp:10,38` | `Ref<Thread>` | Sim nas threads que chamaram `get_CurrentThread`; nas workers, coberto por `launch_roots`. No 3DS depende de `ctr_thread_lifecycle.cpp` executar o destrutor TLS que remove o provedor (S8). |
| Callback de áudio SDL | `sdl/audio.cpp:131,137-165` | nenhuma (só anéis nativos; o `mixer_` recebe caminhos copiados de `SoundData::path()`) | Não se aplica. A thread de áudio não é mutadora e não toca objetos gerenciados. |
| Saída de som (`StreamingOutput`, `null_backend::Sound`) | `sound.cpp:12-30`, `null/sound.hpp:26-42` | `Ref<SoundData>` por porta | Sim (M, objeto raiz `sound_output`). |
| Lista de sons, portas, tocando | `sound.hpp:42-43,76` | `Ref<SoundBase>` | Sim (P `sound_roots`, M `SoundPlayer::trace_edges`). |
| Apresentador de diálogo SDL (`MessageBoxPresenter`) | `sdl/dialog.cpp:10-35` | `modal_` (delegate) | `modal_` sim (M `:36`). A requisição chega por referência de um local da UI; os textos são copiados para `std::string` (`:12`, `:17`) antes de `modal_(true)` e do `GcNativeBlockingScope` (`:28`). Os `String` dentro de `request.buttons` ficam num buffer nativo **sem raiz** durante a espera (S4); hoje não são lidos depois. |
| Entrada de texto (`SimpleTextInput`) e painel de idioma | `text_input.cpp:4-5,35-36`; `sdl/text_input.hpp:7-31` | `text_`, `panel_request_` | Sim (P `presenter_roots`/`language_roots` + M `:29`). Todas as chamadas são síncronas na UI. |
| Fila de capturas de tela | `sdl/capture.cpp:15-16,29-36` | `Job` (gerenciador, tabelas, delegate `completed`) | Sim (P `job_roots`; durante o processamento, P `pending_roots`). |
| Superfícies offscreen | `offscreen.cpp:8-9,23-30,57-58,70-71` | `Offscreen` e seu `State` | Sim (P `offscreen_roots`, M `Offscreen::trace_edges`). |
| Cache de imagens de origem e carregadores | `image_lifetime.cpp:7-16`; `Image::source_loader_` `graphics.hpp:49` | `Ref<Image>`, delegates | Sim (P `image_roots`, M `Image::trace_edges` `image_lifetime.cpp:107`). |
| Catálogo de assets e cache de rasterização de fontes | `asset_catalog.*`, `font.cpp:15` (`rasters`) | nenhuma (dados nativos) | Não se aplica. `FontCacheAccounting` só expõe bytes ao limiar (`font.cpp:19-22`). |
| Temporizadores | — | — | Não há temporizadores com callback. `IApplication::Sleep` (`application.hpp:146`) e `UnityApplication::pace` (`system.hpp`, `pace`) são `sleep` síncronos. |
| Ganchos de host (`termination_handler_`, orientação, tela cheia, `TextServices`, `GlobalizationProvider`, `ThreadPriorityBackend`, `CollationCharacterData`, relógio virtual) | ver 1a/1b | nenhuma hoje | Não se aplica enquanto as capturas continuarem nativas ou vazias (regra B). |
| `form_construction_hook`, `on_lifecycle_warning` | `forms.hpp:19,120`; `forms_execution.cpp:38-41` | `Ref<FormRuntime>` | Só indiretamente (S3). |
| Exceções C++ em voo e `exception_ptr` guardados (`run_finally::pending`, `TypeInitState::failure_` `managed_type_init.hpp:59`, `TypeInitializationException::inner_` `:22`) | — | `ManagedUnwind::object_`, `ReturnFlow::value` | Sim (provedores próprios). Exceções nativas comuns só guardam `Weak` (S5). |
| Inicialização (`ApplicationInitializationBridge`) | `application.hpp:18-22,61-62`; `bootstrap.cpp:35-40` | `BootstrapContext` | Sim: as lambdas usam `Weak`, o dono é M `initialization_owner_`; antes de `Init(app)` o app está na pilha de `main` (`pc_main.cpp:115`, `null_main.cpp:211`). |

## 3. SUSPEITOS

Ordem: do mais provável de falhar para o menos. Nenhum foi reproduzido em execução (`UNKNOWN`).

### S1. Estáticos de `Image` inicializados numa unidade e enraizados em outra (modo stress)

Mesma classe do bug corrigido em `74890cf`, agora no código manual.

```cpp
// src/kairo/api/graphics.hpp:75
inline static cs::Array<std::int32_t> getOptimize_result=cs::Array<std::int32_t>::make(7),getOptimizeSeb_result=cs::Array<std::int32_t>::make(4),getPaletteInfo_result=cs::Array<std::int32_t>::make(2),getAreaSize_result=cs::Array<std::int32_t>::make(2);
// src/kairo/common/image_lifetime.cpp:9,14-15
cs::GcRootProvider image_roots([](const cs::EdgeVisitor&visitor){ ...
    cs::trace_value(Image::getOptimize_result,visitor);cs::trace_value(Image::getOptimizeSeb_result,visitor);
    cs::trace_value(Image::getPaletteInfo_result,visitor);cs::trace_value(Image::getAreaSize_result,visitor);
```

Raciocínio: as quatro variáveis `inline` são inicializadas pela primeira unidade que inclui
`graphics.hpp` e executa sua inicialização dinâmica; `image_roots` só é registrado quando a
unidade `image_lifetime.cpp` roda a dela. Entre os dois há pelo menos as alocações das próprias
quatro matrizes, de `Graphics::anchor_result_` e de `IApplication::viewport_result_` (incluídos em
`image_lifetime.cpp` antes de `:9`), além do que outras unidades inicializarem nesse intervalo.
Armazenamento estático não é varrido. No modo normal não há coleta durante a inicialização
estática (só em frame, carga ou chamada explícita), então hoje é seguro; com
`PLS_GC_STRESS_EVERY` pequeno, o safepoint de `make` da segunda matriz pode liberar a primeira, e
quem ler `Image::getOptimize_result` depois usaria memória liberada (ou envenenada, com `PLS_GC_STRESS_POISON`).
Correção sugerida: registrar o provedor no mesmo cabeçalho, **antes** dos inicializadores (o
armazenamento estático já está zerado antes da inicialização dinâmica, então um provedor
registrado antes enxerga nulos com segurança), ou trocar por estáticos de função com provedor
na mesma linha, como em `managed_encoding.cpp:8`.

### S2. Provedor registrado depois de inicializador que aloca (modo stress)

```cpp
// src/kairo/common/semantic_runtime.hpp:761-769
struct IntegerNumberFormat {
    String positive_sign=String(u"+");
    String negative_sign=String(u"-");
};
inline IntegerNumberFormat integer_number_format;
inline GcRootProvider integer_number_format_roots([](const EdgeVisitor&visitor){ ... });
```

Raciocínio: a alocação de `negative_sign` passa pelo safepoint de `make_described` com
`positive_sign` já gravado em armazenamento estático e sem provedor. No modo stress com
`PLS_GC_STRESS_EVERY=1` (ou quando o contador coincidir), `positive_sign` pode ser coletado. É
provável que este seja um dos primeiros objetos do processo, então o contador de stress pode
ainda não ter chegado ao limite: `UNKNOWN`. Os mesmos casos com uma única alocação antes do
provedor, de risco menor porque precisam de outra alocação no intervalo:
`IApplication::viewport_result_` (`application.hpp:46` → `:186`), `Graphics::anchor_result_`
(`graphics.hpp:177` → `:276`), `State::key` (`storage.cpp:25` → `:29`, sem alocação no
intervalo). Correção: declarar o provedor antes da variável.

### S3. Capturas de `Ref<FormRuntime>` em `std::function` não traçadas (frágil, hoje enraizado indiretamente)

```cpp
// src/kairo/common/forms_execution.cpp:38-41
form_construction_hook=[runtime](FormManagerBase& manager){
    manager.host_execution(cs::make_ref<SourceFormExecution>(runtime));
    manager.host_game_state(cs::make_ref<RuntimeGameState>(runtime));
    manager.on_lifecycle_warning=[runtime](auto form,bool init){runtime->LifecycleWarning(std::move(form),init);};
};
```

Raciocínio: `form_construction_hook` (global, `forms.hpp:19`) e `on_lifecycle_warning` (membro de
`FormManagerBase`, `forms.hpp:120`, fora de `trace_edges` em `forms.cpp:72`) guardam o ponteiro em
capturas opacas. Hoje o mesmo objeto é retido por `installed_form_runtime` (P) e por
`execution_`/`game_state_` do gerenciador (M), então nada é perdido. Quebra se
`install_form_runtime` for chamado de novo com outro runtime enquanto um gerenciador antigo existir
e `host_execution`/`host_game_state` forem trocados, ou se alguém remover essas duas arestas.
Correção: guardar `runtime` num campo traçado de `FormManagerBase` (ou usar um `Delegate` ligado
ao runtime) e fazer o gancho ler `installed_form_runtime` em vez de capturar.

### S4. `DialogRequest::buttons` guarda `String` num buffer nativo durante a espera nativa

```cpp
// src/kairo/common/dialog_service.cpp:15-19
const auto labels=label_provider(type);const auto count=...;
DialogRequest request{type,title,message,{}};...
for(...){const auto label=labels.at(i);...;request.buttons.push_back({type<=2?1:results[i],label});}
answer=current->Present(request);
// src/kairo/platform/sdl/dialog.cpp:12,20,28
labels.push_back(button.label.utf8()); ... modal_(true); ... cs::GcNativeBlockingScope blocked;
```

Raciocínio: os `label` só têm duas raízes, o buffer de `request.buttons` (memória nativa, não
varrida) e o local `labels` (pilha). Depois do laço, `labels` não é mais usado e o otimizador pode
descartá-lo. Durante `Present`, `modal_(true)` executa um delegate gerenciado (pode alocar, ou seja,
safepoint em stress) e o `GcNativeBlockingScope` deixa outra thread coletar. Hoje não há leitura
depois da espera (o SDL copiou tudo para `std::string` antes), então não há uso de memória liberada;
um apresentador de 3DS que leia `button.label` depois de alocar ou esperar falharia. Correção:
`GcRootProvider` sobre `request` em `show_dialog` ou manter `labels` vivo explicitamente.

### S5. Identidade de exceção fraca (por projeto, comportamento observável)

```cpp
// src/kairo/common/semantic_runtime.hpp:33
struct ExceptionIdentity {mutable std::mutex mutex;mutable Weak<Object> managed_view;};
// src/kairo/common/managed_exceptions.cpp:116
object->identity_=exception.identity_token();object->native_=std::move(native);exception.identity_token()->managed_view=object;
```

Raciocínio: uma exceção nativa comum (não `ManagedUnwind`) relançada com `throw;` só aponta para seu
`ExceptionObject` por `Weak`. Se o objeto ficar inalcançável durante a propagação (por exemplo, numa
coleta dentro de um `finally`), um `catch` posterior recria outro `ExceptionObject` (nova identidade,
mensagem refeita do texto nativo). Não há uso de memória liberada (`Weak` confere a identidade no
heap). Fica registrado para não ser confundido com falta de raiz. Impacto no jogo: `UNKNOWN`.

### S6. Ganchos que retornam referência gerenciada, com capturas opacas

```cpp
// src/kairo/common/managed_time.hpp:104-105
inline std::function<Ref<TimeZoneInfo>()>local_timezone_provider;
inline std::function<Ref<TimeZoneInfo>(const String&)>timezone_lookup_provider;
// src/kairo/api/canvas.hpp:92
std::function<void()> on_back;
```

Raciocínio: não estão instalados hoje. Um host futuro que guarde em cache um `Ref<TimeZoneInfo>`
na captura teria um objeto sem raiz. O mesmo vale para `TextServices` (`font.cpp:15`) e para os
`std::function` de `IApplication`, que hoje só têm capturas nativas ou vazias. A regra B da seção 4
existe para travar isso.

### S7. Escrita de referência gerenciada no quadro de uma thread em espera nativa

```cpp
// src/kairo/common/sound.cpp:75-76
cs::Ref<SoundOGG> result{};ui([&]{ ... result=cs::make_ref<SoundOGG>(std::move(data));register_sound(result);});return result;
```

Raciocínio: chamada de uma worker, `RunOnUiThread(...,true)` (`application.hpp:158`) coloca a
worker em `GcNativeBlockingScope`, e o snapshot da pilha dela é tirado nesse momento
(`tracing_gc.cpp:645-653`). A UI então grava `result` nesse quadro. Uma coleta entre essa escrita
e a saída da espera usa o snapshot antigo, que não contém `result`. Hoje é seguro porque
`register_sound` também guarda o objeto em `sound_list_`. Padrão a proibir: capturar `[&]` uma
referência gerenciada do chamador e atribuí-la na UI sem outra raiz. O resultado de
`RunOnUiThread` com retorno já passa por `UiInvocation::result`, que é enraizado.

### S8. Provedor `thread_local` que captura o endereço do slot TLS

```cpp
// src/kairo/common/managed_thread.cpp:38
thread_local GcRootProvider roots([slot=&current_thread](const EdgeVisitor&visitor){trace_value(*slot,visitor);});
```

Raciocínio: o coletor, em outra thread, desreferencia o slot TLS desta thread. Isso é correto
enquanto o destrutor TLS de `roots` rodar antes de o TLS ser liberado. No 3DS isso depende do
invólucro `__wrap___cxa_thread_atexit`/`finish_thread` (`ctr_thread_lifecycle.cpp:19-80`). Uma
thread que termine por um caminho que não passe por `start_thread`, `__wrap___syscall_thread_exit`
ou `__wrap_exit` deixaria um provedor pendurado. Também: `Thread::entry` (`:78`) grava
`current_thread` sem criar o provedor; hoje isso é coberto por `launch_roots`. `UNKNOWN` no
hardware.

### S9 (menor). Objeto derivado de `Object` construído fora do heap

```cpp
// src/kairo/common/storage.cpp:312 e :316
RecordStore record(cs::div_i32(id,1000));if(!record.ExistRecord(cs::mod_i32(id,1000))&&...)
```

Raciocínio: `RecordStore` deriva de `cs::Object` e é construído na pilha, sem descritor. É
inofensivo hoje (só tem `int`), mas `shared_from_this()` devolveria um ponteiro que não está no
heap, e um campo gerenciado acrescentado no futuro não seria traçado. Uma regra mecânica
(regra F) pegaria esse caso.

### Observação fora do escopo (rendezvous, não raiz)

`IApplication::Sleep` (`application.hpp:146`) e `UnityApplication::pace` dormem sem
`GcNativeBlockingScope`. Uma coleta pedida por outra thread espera até o fim do sono, e falha
depois de 5 s (`tracing_gc.cpp:771`). Não é falta de raiz; fica anotado para a auditoria de
pausas.

## 4. Como a busca foi feita e regras automatizáveis

### 4.1 Padrões usados

1. Listagem de todos os arquivos do escopo (`find src/runtime src/kairo src/main -not -path '*/generated/*'`), 136 arquivos não vazios, cerca de 14 mil linhas. Leitura integral dos que contêm tipos gerenciados.
2. `GcRootProvider|add_roots|gc::Roots`: todos os provedores (39 sítios de `GcRootProvider` mais o `add_roots` único do heap).
3. `thread_local`, `static `, `inline static`, `^inline `, variáveis em `namespace {`: armazenamento estático.
4. `std::function<`: 47 declarações; cada atribuição e instalador rastreado (`host_*`, `install_*`, `on_*=`, `form_construction_hook`), incluindo os instaladores gerados em `src/game/bootstrap_generated.cpp:20-26`, só para saber o que cada armazenamento manual recebe.
5. `(vector|deque|list|map|set|optional|pair|tuple|array)<[^;]*(Ref<|String\b|Array<|List<|Delegate<|Dictionary<|ExceptionRef)`: contêineres nativos com referências gerenciadas.
6. `::bind(|::bind_identity(|::from_static(|::from_native(`: comparação das capturas de cada lambda com os argumentos extras.
7. Todos os `trace_edges` escritos à mão, comparados campo a campo com as declarações de membro da classe.
8. `GcNativeBlockingScope|RunOnUiThread|std::thread|SDL_CreateThread|callback|userdata`: estruturas pendentes e threads.

### 4.2 Regras para um teste de regressão (ao lado de `tests/repository/test_generated_static_roots.py`)

Um grep simples não basta: é preciso saber o contexto de cada declaração (namespace, classe ou
função). Proposta: um script Python que tokeniza cada arquivo, acompanha a profundidade de chaves
e o tipo de bloco (`namespace`, `class/struct` com a lista de bases, corpo de função) e aplica
estes padrões:

```python
MANAGED = re.compile(r'\b(?:cs::)?(?:Ref|Array|List|Stack|Dictionary|Delegate|SharedField|ExceptionRef)\b<?|\b(?:cs::)?String\b(?!_)')
AGGREGATES = {'GraphicsRuntimeBindings','ImageRuntimeBindings','TextServices','KairoCallbacks','FormCallbacks',
              'SurfaceCallbacks','BootstrapBindings','IntegerNumberFormat','RuntimeTypeRegistry','State',
              'DialogRequest','DialogButton','TextPanelRequest','LanguagePanelRequest','Commands','Batch','Port'}
```

**Regra A, armazenamento estático.** Toda declaração em escopo de namespace, ou com `static`,
`inline static` ou `thread_local` (inclusive estática de função), cujo tipo case com `MANAGED`,
com `AGGREGATES` ou com `std::function<...MANAGED...>` precisa (1) aparecer pelo nome no corpo de
um `GcRootProvider(...)`, ou de um `trace_static_roots` chamado por um, **na mesma unidade** (para
`inline static` em cabeçalho, no mesmo cabeçalho), e (2) se o inicializador aloca (`make_ref`,
`::make(`, `::from(`, `String(u`), o provedor tem de ser declarado **antes** da variável ou na
mesma instrução de estático de função. Escalares e tipos sem referência ficam isentos, como no teste
gerado. Hoje a regra A marcaria:

- violação de (1), raiz em outra unidade: `graphics.hpp:75` (as quatro matrizes de `Image`) [S1];
- violação de (2), provedor depois do inicializador que aloca: `semantic_runtime.hpp:766`, `application.hpp:46`, `graphics.hpp:177`, `storage.cpp:28` (`key`) [S2];
- `std::function` com tipo gerenciado na assinatura, sem raiz possível: `forms.hpp:19`, `managed_time.hpp:104`, `managed_time.hpp:105`, `font.cpp:15` (via `TextServices`), `globalization.cpp:15` (via `GlobalizationProvider`). Esses vão para uma lista de exceções com justificativa ("captura vazia ou nativa, conferida em <arquivo:linha>"), e a regra B cobre as capturas;
- aprovados sem exceção: `semantic_runtime.cpp:237`, `managed_reflection.hpp:30,42`, `managed_encoding.cpp:8-11`, `managed_time.hpp:117`, `managed_thread.cpp:10` (provedor `thread_local` em `:38`; a regra deve aceitar `slot=&nome`), `application.hpp:44-45`, `canvas.hpp:20-21`, `graphics.hpp:148`, `sound.hpp:38,76`, `forms_execution.cpp:7`, `graphics.cpp:13`, `image_lifetime.cpp:7-8`, `font.cpp:23`, `offscreen.cpp:8`, `sound.cpp:7`, `dialog_service.cpp:4`, `text_input.cpp:4,35`, `capture.cpp:15`.

**Regra B, capturas de `std::function` não locais.** Toda atribuição a um `std::function` que não é
variável local (membro, global ou campo de agregado) e toda lambda passada a `host_*`/`install_*`
precisa ter lista de captura vazia, só nativa, `this` dentro do próprio objeto dono, ou `Weak`.
Captura de um nome cujo tipo case com `MANAGED` reprova, salvo exceção listada. Hoje reprovaria
`forms_execution.cpp:38` e `:41` (`[runtime]`) [S3]. Aceitaria `canvas.cpp:8-12` (`[this]`),
`application.hpp:169` (`[this]`), `bootstrap.cpp:37-39` (`[weak]`), `pc_main.cpp:119-122`,
`null_main.cpp:213`, `virtual_clock.hpp:57,61` e `managed_reflection.hpp:150-151`. Lista atual de
declarações não locais de `std::function` que a regra precisa acompanhar (47 linhas na busca
4.1-4): `application.hpp:19-21,53,54,57-60`, `canvas.hpp:92`, `font.hpp:8-13`, `forms.hpp:19,120`,
`globalization.hpp:6-8`, `input.hpp:59,84,87,90`, `managed_collation.hpp:22-24`,
`managed_reflection.hpp:15-16`, `managed_thread.hpp:21-24`, `managed_time.hpp:31,37,104,105`,
`semantic_runtime.hpp:659` (`Binding::function`), `pc_main.cpp:50`, `tracing_gc.cpp:249`.

**Regra C, contêineres locais.** Num corpo de função, uma variável local de tipo `std::vector`,
`deque` ou `map` com elemento que case com `MANAGED`/`AGGREGATES`, ou `auto x=` inicializada por
`take_commands()`, `std::move(<global rooted vector>)` ou cópia de um global enraizado, precisa de
um `GcRootProvider` que cite o nome nas linhas seguintes da mesma função, antes da próxima chamada
que possa alocar. Hoje aprova `managed_regex.cpp:38,46,71,72`, `managed_string_ops.cpp:176`,
`storage.cpp:264`, `offscreen.cpp:57,70` e `capture.cpp:35`, e **reprova `dialog_service.cpp:17`**
(`DialogRequest request` com `buttons`) [S4]. O legado `semantic_runtime.cpp:119,179` fica isento
dentro de `#if !PLS_TRACING_GC`.

**Regra D, coerência de `from_native`.** Em `Delegate<...>::from_native(nome, [capturas]{...},
args...)`, todo identificador capturado por valor cujo tipo case com `MANAGED` precisa aparecer
em `args`. Captura `[&]` só é aceita se a chamada que a envolve é `RunOnUiThread(...,true)` ou
`ui(...)`, e a lambda não pode atribuir a um nome externo de tipo gerenciado sem que esse nome
esteja em `args` (detecção: `\b<nome>\s*=` dentro do corpo). Hoje: as cinco de `text_input.cpp`,
`offscreen.cpp:23` e `dialog_service.cpp:14` passam; `sound.cpp:75` reprova (atribui `result`) e
entra como exceção justificada ("também em `sound_list_` via `register_sound`") [S7].

**Regra E, cobertura de `trace_edges`.** Para cada classe que deriva (direta ou indiretamente) de
`cs::Object` no código manual, todo membro de tipo `MANAGED`/`AGGREGATES` ou contêiner deles
precisa ter o nome citado no corpo de `trace_edges` (inline ou `Classe::trace_edges` no `.cpp`).
Membros `std::function` precisam de exceção explícita. Hoje passam todas as classes conferidas:
`IApplication`, `Canvas`, `Graphics`, `Image`, `Image::BalloonTasks`, `Offscreen` (via `State`),
`MeshManager`, `SoundPlayer`, `SoundBase`, `StreamingOutput`, `null_backend::Sound`, `MotionEvent`,
`AppEvent`, `FormBase`, `FormManagerBase`, `CallbackFormKairo`, `CallbackFormRuntime`,
`CallbackFormFep`, `CallbackFormSurface`, `SourceFormExecution`, `RuntimeGameState`,
`BootstrapContext`, `Storage`, `NativeTextAsset`, `Job`, `MessageBoxPresenter`, `SimpleTextInput`,
`TimeZoneInfo`, `MemoryStream`, `BinaryReader`, `RuntimeStreamReader`, `RegexGroup`,
`RegexGroupCollection`, `RegexMatch`, `RegexMatchCollection`, `RuntimeType`, `ExceptionObject`,
`Thread`, `Box`, `Cell`, `NativeDelegateClosure`, `Delegate::InvocationList`, `List/Stack/Dictionary::Storage`,
`List::EnumeratorObject`, `DictionaryEnumeratorObject`, `String::Storage`, `Array::Storage`. As
exceções de `std::function` a listar: `IApplication` (`application.hpp:53-61`), `Canvas::on_back`
(`canvas.hpp:92`), `CanvasKeyState`/`PcInputAdapter` dentro de `Canvas` (`input.hpp:59,84,87,90`),
`FormManagerBase::on_lifecycle_warning` (`forms.hpp:120`, sem justificativa válida hoje: S3),
`RuntimeType` (`managed_reflection.hpp:15-16`), `Delegate::Binding` (`semantic_runtime.hpp:659`).

**Regra F, objetos gerenciados fora do heap.** Proibir a construção de um tipo derivado de
`cs::Object` como variável local ou membro por valor (`Tipo nome(` ou `Tipo nome{`), fora de
`make_ref<Tipo>`. Hoje marcaria `storage.cpp:312` e `:316` (`RecordStore record(...)`) [S9].

**Regra G (dinâmica, complementar).** Executar os testes de componente e um roteiro curto com
`PLS_GC_STRESS_EVERY=1 PLS_GC_STRESS_POISON=1` num build de diagnóstico, já começando na
inicialização estática. É o modo que expõe S1 e S2, e é o único modo em que a ordem de
inicialização estática importa.

## 5. Contagem

- 1a: 41 linhas da tabela (cerca de 60 símbolos). A maioria tem provedor dedicado correto; 1
  linha (4 símbolos) tem raiz em outra unidade (S1), 4 têm janela de inicialização (S2), 1 só é
  enraizada indiretamente (S3), 2 não têm raiz possível mas não estão em uso hoje (S6); as demais
  não guardam referência gerenciada.
- 1b: 16 membros nativos não traçados dentro de objetos gerenciados. 1 frágil (S3), 1 nunca
  atribuído (`on_back`), 1 fraco por projeto (S5); os demais seguros (auto-referência, capturas
  vazias/nativas, ou cópias de arestas traçadas).
- 1c: 25 agregados nativos; 1 com buffer sem raiz (S4).
- 1d: 11 contêineres locais; 1 sem raiz (S4).
- 1e: 11 sítios de captura; 1 escrita após snapshot (S7), 2 indiretas (S3).
- Seção 2: 18 estruturas pendentes ou longas; todas enraizadas enquanto pendentes, exceto os
  rótulos de `DialogRequest` durante a espera do diálogo (S4).
- SUSPEITOS: 9 (S1-S9). Nenhum causa falha no modo normal pelo que se lê do código; S1 e S2 são
  falhas esperadas no modo stress; S3, S4 e S7 são armadilhas para mudanças futuras (3DS, novos
  apresentadores).
