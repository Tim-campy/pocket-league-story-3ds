# Isolated tracing-GC kernel prototype

This is a historical experiment, not the production runtime. Its original
Mono-parity gate failed (see `docs/notes/tracing-gc-prototype-round.md`), but the
user explicitly superseded that conversion gate after checkpoint d3420d2.
Production conversion is now authorized and tracked separately in
`docs/notes/tracing-gc-conversion.md`; parity remains a target, not a reason to
abandon conversion. Do not use this single-worker prototype as the product GC.

Prerequisites: the authenticated local 80 captured inputs under
`build/hot-input-capture/inputs`, existing Mono/current-runtime oracle binaries
under `build/hot-methods`, and generated snapshot
`build/game-diagnostic-runtime-consolidated-20261110`. None of those private
inputs is distributed. The native prototype never links an original DLL.
BDWGC sources at `build/deps/bdwgc-8.2.12` must match the archive SHA-256 in
`docs/toolchain.md`. Extract the official archive there locally; no system install.

Commands, from the repository root:

```
python tools/gc-prototype/prepare.py
python tools/gc-prototype/build.py
build/gc-prototype/out/heap_test.exe
python tools/gc-prototype/measure.py
```

Measurement refuses existing per-run directories: preserve/archive the entire
previous experiment before running again; do not overwrite evidence. Stop all
compilers/emulators before timing. Generated bodies are copied mechanically
from the existing translated source, not rewritten or optimized by hand.
Numeric cast helpers and TypeInitState are copied from the current runtime.
Static initializer bodies are excluded (the harness restores captured fields);
only the accessed fields of three object types are projected. These choices
are recorded in projection.json, so this is not a full-game equivalence claim.

Raw T* references and a trivially copyable one-pointer array handle have no
copy hooks/barriers/refcount. Heap pointer maps cover only the projected types
and numeric/jagged arrays. The fixture explicitly roots objects owned by its
native std::function closures. General delegate/closure root discovery is not
implemented. Heap objects are not moved. Stack/CONTEXT scanning is x64 Windows
only. Single mutator; no worker rendezvous, weak references, finalizers or ARM
register-spill implementation. Those are pending, not silently omitted from a
production collector. Metadata and collector worklists use native containers.

Collections occur outside timed kernel calls. Thus the kernel result measures
reference representation and residual emitted code, not collection throughput,
frame pauses, or memory behavior of the whole game. Existing floating-point
mismatches with Mono x86 are retained. No Android equivalence is claimed.

Tests cover exact edges, scalar non-edges, interior pointers, unreachable
cycles, stack retention and heap limit failure. They do not prove register-only
roots or cooperative worker behavior. Do not use this header in the product.
