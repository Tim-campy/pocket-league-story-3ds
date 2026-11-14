"""Dependency groups for verify_phase2 receipts (docs/notes/verification-groups.md).

A check's receipt is keyed by the digest of the files in its groups, not the
whole tree. Unmapped checks, checks that read other checks' receipts or
artifacts outside the key, and checks whose inputs could not be traced are
keyed by every group (conservative).
"""
import hashlib
import json

ALL = frozenset({'runtime', 'kairo', 'portable', 'game', 'translator', 'fixtures', 'reference', 'config', 'tools'})


def classify(path):
    """Group of one snapshot path (repository-relative, POSIX)."""
    if path.startswith('src/runtime/'):
        return 'runtime'
    if path.startswith('src/kairo/common/generated/'):
        return 'portable'
    # Headers anywhere in src/kairo are included by the runtime translation
    # units and fixtures; they belong to runtime so no include is missed.
    if path.startswith('src/kairo/') and path.endswith(('.hpp', '.h', '.inc')):
        return 'runtime'
    name = path.rsplit('/', 1)[-1]
    if path.startswith('src/kairo/common/') and (name.startswith('semantic_runtime') or name.startswith('managed_')):
        return 'runtime'
    if path.startswith(('src/kairo/', 'src/main/')):
        return 'kairo'
    if path.startswith('src/game/'):
        return 'game'
    if path.startswith('tests/translator/'):
        return 'fixtures'  # own synthetic fixtures and their runners
    if path.startswith('translator/'):
        return 'translator'
    if path.startswith('reference/'):
        return 'reference'
    if path.startswith('config/'):
        return 'config'
    return 'tools'  # tools/**, tests/** (non-translator), CMakeLists.txt, AGENTS.md, .gitignore


R, K, P, G, T, F, C, O, X = 'runtime', 'kairo', 'portable', 'game', 'translator', 'reference', 'config', 'tools', 'fixtures'
# Measured mappings (CONFIRMED in the survey); everything else is ALL.
CHECK_GROUPS = {
    'gc-source-contract': {F, O}, 'prepared-native-textures': {R, K, T, O}, 'resource-trace-events': {R, K, T, O},
    'direct-kairo-adapter': {R, K, T, O}, 'tracing-gc-engine': {R, T, O}, 'tracing-gc-allocation-visibility': {R, T, O},
    'ctr-gc-layout': {R, O}, 'tracing-measurements': {O}, 'tracing-native-roots': {R, T, O},
    'float-discriminants-x86': {O}, 'float-cal-models': {O}, 'tracing-ui-dispatch': {R, K, T, O},
    'resource-yield-control-model': {O}, 'syntax-inventory-tests': {O}, 'reference': {F, O},
    'cmake-header-dependencies': {O}, 'culture-bound-inventory': {F, O}, 'mono-collation-source': {O},
    'mono-collation-generation': {O}, 'mono-number-format-source': {O},
    'portable-compile': {T, O, F, C, K, R, P},
    'lowering-differential': {T, O, R, K}, 'value-type-lowering': {T, O, R, K}, 'matrix-point-lowering': {T, O, R, K},
    'shared-field-lowering': {T, O, R, K}, 'surface-adapter-lowering': {T, O, R, K}, 'image-metadata-lowering': {T, O, R, K, F},
    'ref-out-lowering': {T, O, R, K}, 'goto-case-lowering': {T, O, R, K}, 'service-policy-lowering': {T, O, R, K},
    'game-diagnostic-inventory': {T, O, F, C, K, R, P},
    'streams': {R, O}, 'stack-collection': {R, T, O}, 'binary-reader': {R, O}, 'stream-reader': {R, T, O},
    'runtime-type-init': {R, T, O}, 'runtime-allocation-sites': {R, K, T, O}, 'runtime-delegate-invocation': {R, K, T, O},
    'runtime-literal-interning': {R, K, T, O}, 'source-allocation-attribution': {T, O, R, K},
    'runtime-exception-objects': {R, T, O}, 'runtime-encoding': {R, T, O}, 'string-ops': {R, T, O},
    'historical-float-parse': {R, T, O}, 'runtime-regex': {R, T, O}, 'runtime-path': {R, T, O},
    'unicode-regeneration-audit': {R, T, O}, 'managed-threads': {R, K, T, O}, 'managed-shared-fields': {R, K, T, O},
    'native-globalization': {R, K, T, O}, 'pc-memory-sampler': {R, K, T, O}, 'native-allocator-heap': {R, K, O},
    'pc-metrics-aggregation': {R, K, T, O}, 'diagnostic-key-parser': {R, K, O}, 'diagnostic-route-runner': {R, K, O},
    'ui-dispatch-GC': {R, K, T, O}, 'service-policy': {O}, 'services': {R, K, F, C, O}, 'legacy-assets': {F, O},
    'private-resource-catalog': {F, C, O}, 'nonblocking-text-input': {R, K, O}, 'graphics-and-font': {R, K, O, F},
    'graphics-current': {R, K, O, F, T}, 'arc-raster-invariants': {R, K, O}, 'graphics-arcs': {R, K, O},
    'mono-floating-format': {R, O}, 'diagnostic-instrumentation': {R, K, O}, 'diagnostic-profile-overhead': {R, K, O},
    'offscreen-mesh': {R, K, O}, 'vector-iterator': {T, O, R, K}, 'image-lifetime': {R, K, O, F, T},
    'streaming-media': {R, K, O, C}, 'storage': {R, K, O, F}, 'raw-asset-reader': {R, K, O, F},
    'input': {R, K, O, F, C}, 'debug-input-snapshot': {R, K, O, F},
    'forms': {R, K, O, F, T, C}, 'forms-execution': {R, K, O, F, T, C}, 'surface-source-adapter': {R, K, O, F, T},
    'managed-service-bindings': {R, K, O, C}, 'offline-http-contract': {R, K, O, F}, 'offline-analytics-contract': {F, O},
    'bootstrap-order': {R, K, O, F, T}, 'dialog-service': {R, K, O, F}, 'sound-API': {R, K, O, F, C},
    'native-system-leaves': {R, K, O}, 'application-properties': {R, K, O, F, C},
    'application-orientation': {R, K, O, F, C}, 'android-GC-static': {O}, 'android-Unicode-static': {O},
    'android-math-static': {O}, 'culture-characterization': {T, O},
}
# A check that uses the translator group reads both translator code and fixtures,
# except the runtime fixture runners below, which only read tests/translator.
FIXTURE_ONLY = {'tracing-gc-engine', 'tracing-gc-allocation-visibility', 'tracing-native-roots', 'stack-collection',
                'stream-reader', 'runtime-type-init', 'runtime-exception-objects', 'runtime-encoding', 'string-ops',
                'historical-float-parse', 'runtime-regex', 'runtime-path'}
for _name, _groups in list(CHECK_GROUPS.items()):
    if T in _groups:
        CHECK_GROUPS[_name] = (set(_groups) - {T}) | {X} if _name in FIXTURE_ONLY else set(_groups) | {X}
for _fixture in ('SemanticFixtures', 'CollectionFixtures', 'EncodingFixtures', 'ConversionFixtures', 'IntegerParseFixtures',
                 'ArrayBridgeFixtures', 'RandomFixtures', 'StringBuilderFixtures', 'DictionaryFixtures',
                 'FloatingCastFixtures', 'TimeFixtures', 'ObjectDispatchFixtures', 'TimeZoneFixtures', 'GcFixtures'):
    CHECK_GROUPS['runtime-' + _fixture] = {R, X, O}
# Kept conservative (ALL): progress, repository-tests, sdl-and-assets, content-lowering,
# incremental-emission, float-arm-emission-regression, scalar-min and
# diagnostic-leaf-guards (prebuilt pls_semantics.lib), portable-differential and
# portable-split-differential, mono-collation-differential, collation-license-audit,
# effective-core-profile, boot-concurrency-inventory, input-frame-source-probe and
# checkpoint-comparison (read other checks' receipts), game-partial-compile.


def groups_for(name):
    return frozenset(CHECK_GROUPS.get(name, ALL))


def group_digest(snapshot, groups):
    selected = {path: value for path, value in snapshot.items() if classify(path) in groups}
    return hashlib.sha256(json.dumps(selected, sort_keys=True).encode('utf8')).hexdigest()


def invalidated(before, after):
    """Checks whose key changes between two snapshots (mechanism test helper)."""
    names = set(CHECK_GROUPS) | {'progress'}
    return sorted(n for n in names if group_digest(before, groups_for(n)) != group_digest(after, groups_for(n)))
