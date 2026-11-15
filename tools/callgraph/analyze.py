"""Static reachability of the original game methods (criterion 3 scope).

Builds a Roslyn call graph of the reconstructed C# (Assembly-CSharp plus the
KairoLibrary sources compiled with it, plus the generated platform bootstrap
adapter for the port model), then classifies every ledger method of
config/translation.csv:

  reachable-not-exercised  reachable in the port model, estado != runs
  unreachable-by-policy    reachable in the original, cut in the port by an
                           offline service policy or a platform binding
  debug-only               reachable only through branches guarded by a
                           runtime-false Config/MyConfig debug flag
  unreachable-in-original  not reachable even in the original model

Writes config/phase2-reachability.json and docs/coverage-never-reached.md.
Reads only: reference/ sources, the local Managed DLLs (verified by hash),
translator request construction (translator/translate.py, without running the
translator) and config ledgers. Never writes src/ or game output.
"""
import argparse
from collections import Counter, defaultdict, deque
import csv
import datetime
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT/'tools'))
sys.path.insert(0, str(ROOT/'tools/csharp_subset'))
sys.path.insert(0, str(ROOT/'translator'))
from inventory import compiler_paths  # noqa: E402
from pc_compiler import utf8_console  # noqa: E402
from report_paths import unpack_source_paths  # noqa: E402
from update_phase2_progress import map_game_identities  # noqa: E402

csv.field_size_limit(2_000_000)
BUILD = ROOT/'build/callgraph'
CLASSES = ['reachable-not-exercised', 'unreachable-by-policy', 'debug-only', 'unreachable-in-original']
RANK = {c: i for i, c in enumerate(CLASSES)}
ESTADOS = ['translated', 'embedded', 'todo', 'no-body', 'verified']
REASONS = {
    'delegate-member-never-used': 'membro de delegado nunca usado',
    'no-body': 'sem corpo',
    'override-receiver-type-never-instantiated': 'sobrescrita; tipo nunca instanciado',
    'override-never-invoked': 'sobrescrita nunca chamada',
    'never-constructed': 'nunca construído',
    'type-never-used': 'tipo nunca usado',
    'no-callers': 'sem chamadores',
    'callers-unreachable': 'chamadores inalcançáveis',
}
PLATFORM_SLOTS = {
    'kairo.unity.form.FormBase': {'Init', 'Draw', 'Update', 'Resume', 'Suspend', 'Finish', 'GetTouchValue', 'SetTouchValue', 'CheckMainWindow', 'ProcessEvent', 'ProcessBackKey'},
    'kairo.unity.form.FormManagerBase': {'PreUpdate', 'Updated', 'PreDraw', 'Drawn', 'Execute', 'OnDraw', 'Resume'},
    'kairo.unity.ui.IApplication': {'OnCreate', 'OnStart', 'OnRestart', 'OnStop', 'OnResume', 'OnSuspend', 'OnUpdate', 'OnDraw', 'OnRender', 'OnDestroy', 'GetFormManager'},
    'kairo.unity.surface.TouchValueAccessor': {'GetTouchValue', 'SetTouchValue'},
}


def sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def rel(path):
    p = Path(path)
    try:
        return p.resolve().relative_to(ROOT).as_posix()
    except ValueError:
        return p.as_posix()


# ----------------------------------------------------------------- inputs
class _Captured(Exception):
    pass


def capture_request(managed):
    """Run translate.py's request construction only (diagnostics-only and
    bootstrap-main, as the game translation uses). prepare() and run() are
    replaced, so the translator is neither built nor executed and nothing is
    written outside build/callgraph/request."""
    import translate
    folder = BUILD/'request'
    folder.mkdir(parents=True, exist_ok=True)
    captured = {}

    def prepare():
        return folder, None, None, {}

    def run(command, log, env=None):
        captured['input'] = Path(str(command[2]))
        raise _Captured()

    translate.prepare, translate.run = prepare, run
    saved = sys.argv
    sys.argv = ['translate.py', '--assembly', 'Assembly-CSharp', '--original-managed', str(managed), '--diagnostics-only', '--bootstrap-main']
    try:
        translate.main()
    except _Captured:
        pass
    finally:
        sys.argv = saved
    if 'input' not in captured:
        raise RuntimeError('translate.py did not reach the translator invocation')
    return json.loads(captured['input'].read_text(encoding='utf-8')), captured['input']


def default_managed():
    path = ROOT/'build/translator/Assembly-CSharp-input.json'
    if path.exists():
        refs = json.loads(path.read_text(encoding='utf-8'))['references']
        return Path(refs[0]).parent
    return None


def build_tool():
    compiler, runtime, framework = compiler_paths()
    BUILD.mkdir(parents=True, exist_ok=True)
    libraries = ['System.Private.CoreLib', 'System.Runtime', 'System.Console', 'System.Linq', 'System.Collections',
                 'System.Text.Json', 'System.Reflection.Metadata', 'System.Collections.Immutable', 'System.Memory',
                 'System.Text.Encoding.Extensions', 'netstandard']
    references = [framework/(n+'.dll') for n in libraries]+[compiler.parent/n for n in ['Microsoft.CodeAnalysis.dll', 'Microsoft.CodeAnalysis.CSharp.dll']]
    target = BUILD/'CallGraph.dll'
    source = ROOT/'tools/callgraph/CallGraph.cs'
    stamp = BUILD/'CallGraph.sha256'
    key = sha(source)+sha(compiler)
    if target.exists() and stamp.exists() and stamp.read_text() == key:
        return runtime, target
    args = ['/nologo', '/nostdlib+', '/nullable:enable', '/target:exe', '/out:'+str(target)]+['/r:'+str(p) for p in references]+[str(source)]
    rsp = BUILD/'compile.rsp'
    rsp.write_text('\n'.join('"'+a+'"' for a in args)+'\n', encoding='utf-8', newline='\n')
    p = subprocess.run([str(compiler), '/noconfig', '@'+str(rsp)], capture_output=True)
    (BUILD/'compiler.log').write_bytes(p.stdout+p.stderr)
    if p.returncode:
        raise RuntimeError('CallGraph.cs failed to compile: see '+str(BUILD/'compiler.log'))
    for r in references[-2:]:
        shutil.copy2(r, BUILD/r.name)
    (BUILD/'CallGraph.runtimeconfig.json').write_text(json.dumps({'runtimeOptions': {'tfm': 'net10.0', 'framework': {'name': 'Microsoft.NETCore.App', 'version': '10.0.10'}}})+'\n', encoding='utf-8', newline='\n')
    stamp.write_text(key)
    return runtime, target


# ------------------------------------------------------------------ graph
class Graph:
    def __init__(self, data):
        self.data = data
        self.nodes = {n['id']: n for n in data['nodes']}
        self.guards = data['guards']
        self.out = defaultdict(list)
        self.inc = defaultdict(list)
        for frm, to, kind, guard in data['edges']:
            self.out[frm].append((to, kind, guard))
            self.inc[to].append((frm, kind, guard))
        self.types = {t['id']: t for t in data['types']}
        self.by_key = defaultdict(list)
        for t in data['types']:
            for key, impl in t['dispatch'].items():
                self.by_key[key].append((t['id'], impl))
        self.cctor = {t['id']: t['cctor'] for t in data['types'] if t['cctor']}


class Reach:
    """Worklist reachability with rapid type analysis: a virtual/interface
    call reaches an override only in a type instantiated by reachable code."""

    def __init__(self, graph, allowed, cut=None, replacements=None, unity=False):
        self.g, self.allowed, self.cut = graph, allowed, cut or {}
        self.replacements, self.unity = replacements or {}, unity
        self.parent, self.inst, self.invoked = {}, {}, {}
        self.queue = deque()

    def node(self, n, frm, kind, guard, via=None):
        if n in self.parent or n not in self.g.nodes:
            return
        self.parent[n] = (frm, kind, guard, via)
        self.queue.append(n)

    def instantiate(self, t, frm, kind, guard):
        if t in self.inst or t not in self.g.types:
            return
        self.inst[t] = (frm, kind, guard)
        info = self.g.types[t]
        for key, impl in info['dispatch'].items():
            if key in self.invoked:
                f, gd = self.invoked[key]
                self.node(impl, f, 'dispatch', gd, t)
        for key in info['metadata_keys']:
            self.node(info['dispatch'][key], frm, 'framework-callback', guard, t)
        if self.unity:
            for m in info['unity_messages']:
                self.node(m, frm, 'unity-message', guard, t)
            for m in info['send_message']:
                self.node(m, frm, 'unity-sendmessage', guard, t)

    def invoke(self, key, frm, guard):
        if key in self.invoked:
            return
        self.invoked[key] = (frm, guard)
        for t, impl in self.g.by_key.get(key, ()):
            if t in self.inst:
                self.node(impl, frm, 'dispatch', guard, t)

    def call_or_invoke(self, target, frm, kind, guard):
        if target in self.g.by_key:
            self.invoke(target, frm, guard)
        node = self.g.nodes.get(target)
        if node is not None and not node['is_abstract'] and target not in self.g.by_key:
            self.node(target, frm, kind, guard)

    def run(self, roots):
        for kind, target, label in roots:
            if kind == 'inst':
                self.instantiate(target, label, 'root', -1)
            elif kind == 'invoke':
                self.call_or_invoke(target, label, 'root', -1)
            else:
                self.node(target, label, 'root', -1)
        g = self.g
        while self.queue:
            n = self.queue.popleft()
            owner = g.nodes[n]['owner']
            if owner in g.cctor and g.cctor[owner] != n:
                self.node(g.cctor[owner], n, 'typeinit', -1)
            if n in self.cut:
                for kind, target in self.replacements.get(n, ()):
                    if kind == 'invoke':
                        self.call_or_invoke(target, n, 'platform-callback', -1)
                    else:
                        self.node(target, n, kind, -1)
                continue
            for to, kind, guard in g.out.get(n, ()):
                if guard >= 0 and g.guards[guard]['kind'] not in self.allowed:
                    continue
                if kind in ('virtual', 'delegate-virtual'):
                    self.invoke(to, n, guard)
                elif kind == 'inst-discarded':
                    continue
                elif kind.startswith('inst'):
                    self.instantiate(to, n, kind, guard)
                elif kind == 'typeinit':
                    if to in g.cctor:
                        self.node(g.cctor[to], n, 'typeinit', guard)
                else:
                    self.node(to, n, kind, guard)
        return self

    def chain(self, n):
        out = [n]
        seen = {n}
        while True:
            frm = self.parent[out[-1]][0]
            if frm not in self.parent or frm in seen:
                out.append(frm)
                break
            out.append(frm)
            seen.add(frm)
        return list(reversed(out))

    def facts_back(self, n):
        """Yield (node, parent record) along the justification DAG: the
        caller chain and, for dispatched/callback methods, the chain that
        instantiated the receiver type."""
        stack, seen = [('n', n)], set()
        while stack:
            kind, x = stack.pop(0)
            if (kind, x) in seen:
                continue
            seen.add((kind, x))
            if kind == 'n':
                if x not in self.parent:
                    continue
                frm, k, guard, via = self.parent[x]
                yield x, guard, k
                stack.append(('n', frm))
                if via:
                    stack.append(('t', via))
            else:
                if x not in self.inst:
                    continue
                frm, k, guard = self.inst[x]
                yield x, guard, k
                stack.append(('n', frm))


def compact(path):
    return path if len(path) <= 7 else path[:3]+['...']+path[-3:]


# ------------------------------------------------------------- the model
def platform_model(graph, request, policies):
    bindings = request['external_methods']
    helpers = set(request.get('source_native_helpers', []))
    platform_types = {t for t, v in request['external_types'].items() if not v.startswith('pls::generated::')}
    service = {r['symbol']: r['lowering']['kind'] for r in policies['overrides']}
    cut, replacements = {}, defaultdict(list)
    for nid, node in graph.nodes.items():
        if node['origin'] == 'bootstrap':
            continue
        if nid in service:
            cut[nid] = dict(kind='service-override', policy=nid, lowering=service[nid])
            continue
        b = bindings.get(nid)
        if b is not None:
            if b.startswith('pls::generated::'):
                continue
            cut[nid] = dict(kind='platform-binding', policy=nid, binding=b)
            if b.startswith(('source-adapter:', 'source-static:')):
                replacements[nid].append(('call', b.split(':', 1)[1]))
            continue
        if nid in helpers:
            continue
        if node['owner'] in platform_types and node['origin'] != 'game':
            cut[nid] = dict(kind='platform-type', policy=nid, binding=request['external_types'][node['owner']])
    # Canvas.SetSurfaceManager is bound to the host surface bridge
    # (Translator.cs CanvasSourceBridge): it installs callbacks into these
    # SurfaceManagerBase/SurfaceBase members.
    surface = []
    for nid, node in graph.nodes.items():
        ct, name = node['containing_type'], node['name']
        if ct == 'kairo.unity.surface.SurfaceManagerBase' and name in ('OnKeyDown', 'OnKeyUp', 'ClearTouchComponent', 'DoEvents', 'AdjustSurfaceLayout', 'BeginTouchRegist', 'Draw', 'EndTouchRegist', 'DrawComponents', 'GetSurfaceList'):
            surface.append(nid)
        elif ct == 'kairo.unity.surface.SurfaceBase' and (name in ('IsGameSurface', 'ClearTouchComponent') or (name == 'OnReceiveTouchEvent' and [p['type'] for p in node['parameters']] == ['kairo.unity.surface.MotionEvent'])):
            if name != 'ClearTouchComponent' or not node['parameters']:
                surface.append(nid)
        elif ct.startswith('java.util.Vector<') and name in ('Size', 'ElementAt'):
            surface.append(nid)
    for nid, b in bindings.items():
        if b == 'canvas-source:set':
            cut.setdefault(nid, dict(kind='platform-binding', policy=nid, binding=b))
            replacements[nid] += [('invoke', s) for s in sorted(surface)]
    roots = [('call', request['bootstrap_method'], 'root:port-bootstrap'), ('inst', 'T:main.Main', 'root:port-bootstrap')]
    roots += [('call', nid, 'root:port-adapter') for nid, n in sorted(graph.nodes.items())
              if n['containing_type'] == 'PlsPortGeneratedBootstrap.Source' and n['kind'] == 'Ordinary' and n['is_static']]
    # Virtual slots the host calls: request['external_slots'] keeps only the
    # members listed in config/boundary.csv, so the full per-base lists of
    # translate.py (FormBase/FormManagerBase) and src/kairo/api/forms.hpp,
    # application.hpp and touch_value_accessor.hpp are added by name.
    slots = set(request.get('external_slots', {}))
    for nid, node in graph.nodes.items():
        names = PLATFORM_SLOTS.get(node['containing_type'])
        if names and node['name'] in names and node['kind'] == 'Ordinary' and not node['is_static']:
            slots.add(nid)
    roots += [('invoke', slot, 'root:port-slot') for slot in sorted(slots)]
    roots += [('inst', t['id'], 'root:value-type') for t in graph.data['types'] if t['kind'] == 'Struct' and t['origin'] != 'bootstrap']
    return cut, dict(replacements), roots, surface


def original_roots(graph):
    roots = []
    for t in graph.data['types']:
        if t['monobehaviour'] and t['concrete'] and t['origin'] != 'bootstrap':
            roots.append(('inst', t['id'], 'root:unity-scene'))
            if t['default_ctor']:
                roots.append(('call', t['default_ctor'], 'root:unity-scene'))
        if t['kind'] == 'Struct' and t['origin'] != 'bootstrap':
            roots.append(('inst', t['id'], 'root:value-type'))
    return roots


# ---------------------------------------------------------------- mapping
def map_ledger(graph, ledger):
    import re
    game = [n for n in graph.nodes.values() if n['origin'] == 'game' and n['kind'] != 'AnonymousFunction']
    mapped, unknown = map_game_identities(game, ledger)
    lambdas = defaultdict(list)
    for n in graph.nodes.values():
        if n['kind'] == 'AnonymousFunction' and n['origin'] == 'game':
            host = graph.nodes[n['host']]
            lambdas[(host['containing_type'], host['name'])].append(n['id'])
    result, special, unmapped = {}, {}, []
    for row in ledger:
        rid = row['id']
        if rid in mapped:
            result[rid] = [mapped[rid]]
            continue
        m = re.fullmatch(r'Assembly-CSharp::(.+)::([^(:]+)\((.*)\)->(.+)', rid)
        owner, name = m.group(1), m.group(2)
        closure = re.search(r'\+<(\w+)>c__AnonStorey\d+$', owner)
        lam = re.fullmatch(r'<(\w+)>m__\w+', name)
        if closure or lam:
            parent_type = (owner[:closure.start()] if closure else owner).replace('+', '.')
            host = closure.group(1) if closure else lam.group(1)
            ids = lambdas.get((parent_type, host))
            if ids:
                result[rid] = ids
                continue
        if name == '.cctor':
            cid = 'M:'+owner.replace('+', '.')+'.#cctor'
            if cid in graph.nodes:
                result[rid] = [cid]
                continue
        if owner == '<PrivateImplementationDetails>':
            special[rid] = 'compiler-generated <PrivateImplementationDetails> helper; never instantiated by source code'
            continue
        unmapped.append(rid)
    return result, special, unmapped


def classify(ids, runs):
    best = None
    for nid in ids:
        if nid in runs['port']:
            c = 'reachable-not-exercised'
        elif nid in runs['orig']:
            c = 'unreachable-by-policy'
        elif nid in runs['debug']:
            c = 'debug-only'
        else:
            c = 'unreachable-in-original'
        if best is None or RANK[c] < RANK[best[0]]:
            best = (c, nid)
    return best


def guard_ref(graph, g):
    item = graph.guards[g]
    return dict(condition=item['text'], at=rel(item['file'])+':'+str(item['line']), kind=item['kind'], flags=item['flags'])


# ------------------------------------------------------------------- doc
def write_doc(path, receipt, rows_by_class, ledger_total, runs_total):
    t = receipt['totals']
    lines = ['# Métodos nunca alcançados', '',
             'Gerado em '+receipt['generated']+' por `python tools/callgraph/analyze.py` a partir de `config/translation.csv` e do grafo de chamadas estático (Roslyn) do C# reconstruído; recibo em `config/phase2-reachability.json`. Só nomes de métodos do C# reconstruído; nenhum conteúdo do jogo. Regenerar após cada rodada de cobertura.', '',
             'Modelo: o grafo cobre Assembly-CSharp, as fontes da KairoLibrary compiladas com ele e o adaptador de plataforma gerado. Chamadas virtuais e de interface vão para as sobrescritas em tipos instanciados por código alcançável (análise rápida de tipos); delegados alcançam o método ou lambda no ponto de criação; construtores estáticos são alcançados pelo primeiro uso do tipo. Ramos guardados por flags de `Config`/`MyConfig` com valor de execução constante falso são cortados; os de depuração (`DEBUG` e flags derivadas) formam a classe "só depuração". O modelo do port corta os corpos substituídos por políticas offline (`config/service-overrides.json`) e por ligações de plataforma (`external_methods`/`external_types` do tradutor) e parte das entradas reais da plataforma (`Main`, adaptador gerado, slots virtuais).', '',
             '| Classe | Métodos |', '|---|---:|',
             '| Executados no diagnóstico (`runs`) | %d |' % t['runs'],
             '| Alcançáveis, ainda não executados | %d |' % t['reachable-not-exercised'],
             '| **Alcançáveis no total** (executados + não executados) | **%d** |' % t['reachable_total'],
             '| Inalcançáveis por política offline / plataforma | %d |' % t['unreachable-by-policy'],
             '| Só depuração | %d |' % t['debug-only'],
             '| Inalcançáveis já no original | %d |' % t['unreachable-in-original'],
             '| Total do livro-razão | %d |' % ledger_total, '',
             'Por estado do livro-razão (`embedded` = construtor estático ou lambda emitidos dentro de outro corpo):', '',
             '| Classe | '+' | '.join(ESTADOS)+' |', '|---|'+'---:|'*len(ESTADOS)]
    for cls in CLASSES:
        lines.append('| '+cls+' | '+' | '.join(str(receipt['totals_by_estado'][cls].get(e, 0)) for e in ESTADOS)+' |')
    lines += ['',
             'Cobertura sobre o alcançável: %d de %d (%.1f%%). Métodos `runs` que a análise não alcançou: %d.' % (t['exercised'], t['reachable_total'], 100.0*t['exercised']/max(1, t['reachable_total']), len(receipt['analysis_errors'])), 'Executados `runs`: %d; creditados pelo dono ou hospedeiro executado (inicializador de tipo, construtor implícito, lambda): %d; justificados individualmente (`config/coverage-justifications.json`): %d; restam sem execução nem justificativa: %d.' % (t['runs_reached'], t['credited'], t['justified'], t['reachable-not-exercised']), '']
    lines += ['', '**Escopo do critério 3 (decisão do usuário, 2026-11-14):** o critério exige a execução dos alcançáveis no port. Os inalcançáveis já no original (entre eles `FriendForm`, `MatchForm`, `LineupForm` e `RestoreForm`), os só de depuração e os cortados por política ficam fora, justificados por esta análise. Salvaguarda: no build de diagnóstico, a execução de qualquer método dessas três classes gera alerta com pilha e o reclassifica como alcançável.', '']
    titles = {'reachable-not-exercised': 'Alcançáveis, ainda não executados',
              'unreachable-by-policy': 'Inalcançáveis por política offline ou plataforma',
              'debug-only': 'Só depuração',
              'unreachable-in-original': 'Inalcançáveis já no original'}
    notes = {'reachable-not-exercised': 'Alvos do roteiro de cobertura. Entre parênteses, o número de métodos do tipo.',
             'unreachable-by-policy': 'Cita a política ou ligação de plataforma mais próxima que corta o caminho (`*` = corte compartilhado: nenhum corte isolado restaura o método).',
             'debug-only': 'Cita a condição de depuração que guarda o caminho.',
             'unreachable-in-original': 'Sem caminho a partir das entradas do original; quando o único caminho passa por ramo de configuração morto, a condição é citada.'}
    for cls in CLASSES:
        rows = rows_by_class[cls]
        lines += ['## '+titles[cls]+' (%d)' % len(rows), '', notes[cls], '']
        groups = defaultdict(list)
        for r in rows:
            groups[r['tipo']].append(r)
        for tipo in sorted(groups):
            items = groups[tipo]
            if cls in ('reachable-not-exercised',):
                names = sorted({r['metodo'] for r in items})
                lines.append('- **%s** (%d): %s' % (tipo, len(items), ', '.join('`'+n+'`' for n in names)))
                continue
            by_reason = defaultdict(set)
            for r in items:
                by_reason[r['reason']].add(r['metodo'])
            parts = []
            for reason in sorted(by_reason):
                names = ', '.join('`'+n+'`' for n in sorted(by_reason[reason]))
                parts.append(names+(' — '+reason if reason else ''))
            lines.append('- **%s** (%d): %s' % (tipo, len(items), '; '.join(parts)))
        lines.append('')
    if receipt.get('justified'):
        reasons = {r['group']: r['reason'] for r in receipt.get('justification_rules', [])}
        groups = defaultdict(list)
        for item in receipt['justified']:
            groups[item['group']].append(item['id'].split('::', 1)[1])
        lines += ['## Alcançáveis justificados individualmente (%d)' % len(receipt['justified']), '',
                  'Regras em `config/coverage-justifications.json`; cada grupo cita o motivo.', '']
        for group in sorted(groups):
            lines += ['### '+group+' (%d)' % len(groups[group]), '', reasons.get(group, ''), '',
                      ', '.join('`'+m.split('(')[0]+'`' for m in sorted(groups[group])), '']
    lines += ['## Limites da análise', '']
    for item in receipt['limits_summary']:
        lines.append('- '+item)
    lines.append('')
    path.write_text('\n'.join(lines), encoding='utf-8', newline='\n')


def short_policy(evidence):
    if not evidence:
        return ''
    items = []
    for e in evidence[:2]:
        if e['kind'] == 'service-override':
            items.append('política `%s` (%s)' % (e['policy'][2:], e.get('lowering', '')))
        elif e['kind'] == 'platform-binding':
            items.append('plataforma `%s`' % e['policy'][2:])
        elif e['kind'] == 'platform-type':
            items.append('tipo de plataforma `%s`' % e['policy'][2:].split('(')[0])
        elif e['kind'] == 'original-engine-entry':
            items.append('entrada só do motor original (%s)' % e['entry'])
    return ' ou '.join(items)


# -------------------------------------------------------------------- main
def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('--original-managed', type=Path, default=None, help='Managed folder extracted from the authenticated APK (default: the one recorded in build/translator/Assembly-CSharp-input.json)')
    parser.add_argument('--output', type=Path, default=ROOT/'config/phase2-reachability.json')
    parser.add_argument('--doc', type=Path, default=ROOT/'docs/coverage-never-reached.md')
    args = parser.parse_args()
    utf8_console()
    managed = args.original_managed or default_managed()
    if managed is None:
        parser.error('--original-managed is required')

    request, request_path = capture_request(managed)
    game_translation = unpack_source_paths(json.loads((ROOT/'config/phase2-game-translation.json').read_text(encoding='utf-8-sig')))
    expected = {r['filename']: r['sha256'] for r in game_translation['reference_metadata']}
    references = []
    for p in request['references']:
        digest = sha(p)
        if expected.get(Path(p).name) != digest:
            raise ValueError('Managed reference differs from the translation receipt: '+Path(p).name)
        references.append(dict(filename=Path(p).name, sha256=digest))
    bootstrap = [s for s in request['sources'] if Path(s).name == 'bootstrap_source.cs' and Path(s).resolve().is_relative_to(BUILD.resolve())]
    sources = [s for s in request['sources'] if s not in bootstrap]
    runtime, tool = build_tool()
    tool_request = dict(sources=sources, bootstrap_source=bootstrap[0] if bootstrap else '', references=request['references'])
    (BUILD/'graph-request.json').write_text(json.dumps(tool_request, indent=1), encoding='utf-8', newline='\n')
    graph_path = BUILD/'graph.json'
    p = subprocess.run([str(runtime), str(tool), str(BUILD/'graph-request.json'), str(graph_path)], capture_output=True)
    (BUILD/'callgraph.log').write_bytes(p.stdout+p.stderr)
    if p.returncode:
        raise RuntimeError('CallGraph failed: see '+str(BUILD/'callgraph.log'))
    print(p.stdout.decode('utf-8', 'replace').strip())
    data = json.loads(graph_path.read_text(encoding='utf-8'))
    if data['compile_errors']:
        raise ValueError('Reference C# did not bind cleanly: '+'\n'.join(data['compile_error_samples']))
    graph = Graph(data)
    policies = json.loads((ROOT/'config/service-overrides.json').read_text(encoding='utf-8'))

    cut, replacements, port_roots, surface = platform_model(graph, request, policies)
    orig_roots = original_roots(graph)
    normal = set()
    with_debug = {'debug'}
    everything = {'debug', 'config', 'platform', 'constant'}
    O = Reach(graph, normal, unity=True).run(orig_roots)
    D = Reach(graph, with_debug, unity=True).run(orig_roots)
    A = Reach(graph, everything, unity=True).run(orig_roots)
    P = Reach(graph, normal, cut, replacements).run(port_roots)
    runs = dict(port=P.parent, orig=O.parent, debug=D.parent)

    with (ROOT/'config/translation.csv').open(encoding='utf-8', newline='') as f:
        ledger = list(csv.DictReader(f))
    mapping, special, unmapped = map_ledger(graph, ledger)

    # Policy attribution: which single cut, if not applied, restores a lost method.
    lost = {n for n in O.parent if n not in P.parent}
    attribution = defaultdict(list)
    candidates = sorted(c for c in cut if c in O.parent)
    for c in candidates:
        trial = dict(cut)
        del trial[c]
        R = Reach(graph, normal, trial, replacements).run(port_roots)
        for n in R.parent:
            if n in lost:
                attribution[n].append(c)

    def policy_evidence(nid):
        if attribution.get(nid):
            return [dict(cut[c], shared=False) for c in attribution[nid][:3]], False
        for x, guard, kind in O.facts_back(nid):
            if x in cut and x != nid:
                return [dict(cut[x], shared=True)], True
        chain = O.chain(nid)
        return [dict(kind='original-engine-entry', entry=chain[0], via=compact(chain[1:]))], True

    def debug_evidence(nid):
        for x, guard, kind in D.facts_back(nid):
            if guard >= 0 and graph.guards[guard]['kind'] == 'debug':
                return guard_ref(graph, guard)
        return None

    dispatch_targets = defaultdict(set)
    for t in graph.data['types']:
        for impl in t['dispatch'].values():
            dispatch_targets[impl].add(t['id'])

    def original_evidence(nid):
        if nid in A.parent:
            for x, guard, kind in A.facts_back(nid):
                if guard >= 0 and graph.guards[guard]['kind'] != 'debug':
                    return dict(dead_branch=guard_ref(graph, guard))
        callers = sorted({f for f, k, g in graph.inc.get(nid, ()) if f in graph.nodes})
        node = graph.nodes.get(nid, {})
        owner = graph.types.get(node.get('owner'), {})
        result = dict(static_callers=len(callers), caller_sample=callers[:3])
        if owner.get('kind') == 'Delegate':
            result['reason'] = 'delegate-member-never-used'
        elif node.get('is_abstract') or node.get('is_extern'):
            result['reason'] = 'no-body'
        elif nid in dispatch_targets and not callers:
            result['reason'] = 'override-receiver-type-never-instantiated' if not any(t in A.inst for t in dispatch_targets[nid]) else 'override-never-invoked'
        elif node.get('kind') == 'StaticConstructor':
            result['reason'] = 'type-never-used'
        elif node.get('is_constructor') and not callers:
            result['reason'] = 'never-constructed'
        else:
            result['reason'] = 'no-callers' if not callers else 'callers-unreachable'
        return result

    methods, analysis_errors, rows_by_class = [], [], {c: [] for c in CLASSES}
    totals = Counter()
    # Credit rule (embedded members have no body of their own to execute): a type
    # initializer or implicit constructor is exercised when a member of its type runs;
    # a lambda/closure member when its host method runs.
    import re as _re
    ran_types = {r['tipo'] for r in ledger if r['estado'] == 'runs'}
    ran_methods = {(r['tipo'], r['metodo']) for r in ledger if r['estado'] == 'runs'}
    def credited_by(row):
        tipo, metodo = row['tipo'], row['metodo']
        closure = _re.search(r'\+<(\w+)>c__AnonStorey\d+$', tipo)
        if closure:
            host = (tipo[:closure.start()], closure.group(1))
            return 'host '+host[0]+'.'+host[1] if host in ran_methods else None
        lam = _re.match(r'<(\w+)>m__', metodo)
        if lam:
            return 'host '+tipo+'.'+lam.group(1) if (tipo, lam.group(1)) in ran_methods else None
        if metodo in ('.cctor', '.ctor') and tipo in ran_types:
            return 'owner '+tipo+' runs'
        return None
    credited = []
    # Individual justifications (config/coverage-justifications.json): reachable
    # methods the offline port cannot execute, each with its reason.
    jpath = ROOT/'config/coverage-justifications.json'
    jrules = [(_re.compile(r['match']), r['group'], r['reason']) for r in json.loads(jpath.read_text(encoding='utf-8'))['rules']] if jpath.is_file() else []
    justified = []
    def justification(row):
        key = row['id'].split('::', 1)[1]
        for rx, group, reason in jrules:
            if rx.search(key):
                return group, reason
        return None
    by_estado = {c: Counter() for c in CLASSES}
    runs_reached = 0
    for row in ledger:
        rid, estado = row['id'], row['estado']
        ids = mapping.get(rid)
        if ids is None:
            cls, evidence, nid = 'unreachable-in-original', dict(reason=special.get(rid, 'UNMAPPED')), None
        else:
            cls, nid = classify(ids, runs)
            evidence = {}
        if estado == 'runs':
            totals['runs'] += 1
            if cls == 'reachable-not-exercised':
                runs_reached += 1
            else:
                analysis_errors.append(dict(id=rid, doc_id=nid, static_class=cls))
            continue
        reason = ''
        if cls == 'reachable-not-exercised' and estado in ('embedded', 'policy') and credited_by(row):
            credited.append(dict(id=rid, by=credited_by(row)))
            continue
        if cls == 'reachable-not-exercised' and justification(row):
            group, why = justification(row)
            justified.append(dict(id=rid, group=group))
            continue
        if ids is not None:
            if cls == 'reachable-not-exercised':
                chain = P.chain(nid)
                evidence = dict(entry=chain[0], path=compact(chain[1:]), hops=len(chain)-1)
            elif cls == 'unreachable-by-policy':
                ev, shared = policy_evidence(nid)
                evidence = dict(cuts=ev)
                reason = short_policy(ev)+(' *' if shared else '')
            elif cls == 'debug-only':
                g = debug_evidence(nid)
                evidence = dict(guard=g)
                reason = ('`%s` (%s)' % (g['condition'], g['at'])) if g else ''
            else:
                evidence = original_evidence(nid)
                if 'dead_branch' in evidence:
                    reason = 'ramo morto `%s` (%s)' % (evidence['dead_branch']['condition'], evidence['dead_branch']['at'])
                else:
                    reason = REASONS[evidence['reason']]
        else:
            reason = evidence['reason'] if evidence['reason'] != 'UNMAPPED' else 'identidade não mapeada'
        totals[cls] += 1
        by_estado[cls][estado] += 1
        entry = dict(id=rid, estado=estado, cls=cls)
        if ids is not None:
            entry['doc_id'] = nid
            if len(ids) > 1:
                entry['lambda_group'] = len(ids)
        entry['evidence'] = evidence
        methods.append(entry)
        rows_by_class[cls].append(dict(tipo=row['tipo'], metodo=row['metodo'], reason=reason))
    totals['credited'] = len(credited)
    totals['justified'] = len(justified)
    totals['reachable_total'] = totals['reachable-not-exercised']+runs_reached+len(credited)+len(justified)
    totals['runs_reached'] = runs_reached
    totals['exercised'] = runs_reached+len(credited)

    limits = data['limits']
    for item in limits:
        item['file'] = rel(item['file'])
    for rnd in data['flag_rounds']:
        for item in rnd['invalidated']:
            path, _, line = item['at'].rpartition(':')
            item['at'] = rel(path)+':'+line
    limit_kinds = Counter(l['kind'] for l in limits)
    limits_summary = [
        'Reflexão e despacho por nome (%d sítios): `Config.Create` copia campos de `MyConfig` por reflexão (modelado: valor final = `MyConfig`, exceto `APPLI_TYPE`); `StreamUtil.ReadObject<T>`/`ReadArray` (`Activator.CreateInstance` de `ISerializable`) instanciam os tipos-elemento dos argumentos (%d sítios no jogo); `JTool.MakeArray` só cria arrays; os demais (editor Unity, `Assembly.GetTypes`, `Dialog`) não chamam métodos do jogo e ficam registrados em `limits`.' % (limit_kinds.get('reflection', 0), limit_kinds.get('reflective-instantiation', 0)),
        'Mensagens Unity (Awake/Start/Update/OnGUI/OnApplication*...) e `UnitySendMessage` (métodos `void(string)` de MonoBehaviour) são entradas conservadoras do original; todo MonoBehaviour concreto é tratado como presente na cena.',
        '`new T()` genérico (%d sítios) resolve para todo tipo concreto que satisfaz as restrições.' % limit_kinds.get('generic-new', 0),
        'Objeto criado e descartado (instrução `new X();` ou local nunca lido, ex.: o aquecimento de tipos em `BootForm`) executa o construtor mas não habilita despacho virtual para `X`; chamadas virtuais sobre `this` dentro desse construtor não são seguidas.',
        'Análise rápida de tipos: instanciar um tipo habilita todas as suas sobrescritas para qualquer chamada virtual alcançável ao método base, sem rastrear para onde o objeto flui.',
        'Chamadas implícitas da BCL (ToString/Equals/GetHashCode/CompareTo/Dispose/GetEnumerator) alcançam as sobrescritas de todo tipo instanciado.',
        'Lambdas do Mono (`<X>m__N`, `c__AnonStoreyN`) são mapeadas para o grupo de lambdas do método hospedeiro, não para uma lambda individual.',
        'Fluxo de dados não é modelado: retornos constantes das políticas offline (ex.: `false`, `null`) não podam ramos dos chamadores; esses chamadores ficam alcançáveis (conservador).',
        'Flags lidas antes de `Config.Create` (no construtor estático de `Config`, com `DEBUG = true`) mantêm o valor inicial; flags escritas por código alcançável com valor diferente (ex.: `SHOW_DEBUG`, `ADMOB_ENABLE`) não são tratadas como constantes.',
        '`Application.platform` é avaliado como Android (o original e o port, `system.hpp: get_platform()=11`).',
    ]

    hashes = {rel(p): sha(p) for p in [ROOT/'tools/callgraph/CallGraph.cs', ROOT/'tools/callgraph/analyze.py', ROOT/'translator/translate.py',
                                        ROOT/'translator/bootstrap_source.py', ROOT/'tools/update_phase2_progress.py', ROOT/'config/service-overrides.json',
                                        ROOT/'config/translation.csv', ROOT/'config/phase2-game-translation.json', ROOT/'config/phase2-translation.json',
                                        ROOT/'config/boundary.csv']}
    source_digest = hashlib.sha256()
    for s in sources:
        source_digest.update(rel(s).encode()+b'\0'+sha(s).encode()+b'\n')
    receipt = dict(
        schema_version=1, operation='game-method-static-reachability',
        generated=datetime.date.today().isoformat(),
        command='python tools/callgraph/analyze.py',
        reference_commit=game_translation.get('reference_commit'),
        inputs=dict(files=hashes, sources=len(sources), sources_sha256=source_digest.hexdigest(),
                    bootstrap_adapter=dict(path=rel(bootstrap[0]), sha256=sha(bootstrap[0])) if bootstrap else None,
                    reference_metadata=references, translator_request_sha256=sha(request_path)),
        graph=dict(nodes=len(graph.nodes), edges=len(data['edges']), guards=len(graph.guards), types=len(graph.types),
                   edge_kinds=dict(Counter(e[2] for e in data['edges'])), guard_kinds=dict(Counter(g['kind'] for g in graph.guards))),
        model=dict(
            classes=CLASSES,
            precedence='reachable in port model > reachable in original (cut in port) > reachable in original only via debug guards > unreachable',
            dispatch='rapid type analysis: virtual/interface calls reach overrides only in types instantiated by reachable code; delegate creation reaches its target; owner static constructor on first member use and on static field access',
            original_entry_points=sorted({label for _, _, label in orig_roots})+['unity-message', 'unity-sendmessage'],
            port_entry_points=[dict(kind=k, target=t, label=l) for k, t, l in port_roots if l != 'root:value-type'],
            port_value_type_roots=sum(1 for _, _, l in port_roots if l == 'root:value-type'),
            surface_bridge_callbacks=sorted(surface),
            cut_policies=dict(Counter(v['kind'] for v in cut.values())),
            service_overrides=sorted(c for c, v in cut.items() if v['kind'] == 'service-override'),
            cuts_reached_in_original=len(candidates),
            flags=[f for f in data['flags']],
            flag_rounds=data['flag_rounds'],
            platform_fact=data['platform_fact'],
            path_format='entry is the root label; path lists DocIDs from the first hop to the method, compacted to first 3 + "..." + last 3 when longer than 7',
        ),
        reachability=dict(original=len(O.parent), original_with_debug=len(D.parent), original_all_branches=len(A.parent), port=len(P.parent),
                          types_instantiated_original=len(O.inst), types_instantiated_port=len(P.inst)),
        totals=dict(totals), totals_by_estado={c: dict(v) for c, v in by_estado.items()}, ledger_methods=len(ledger),
        credited=credited, justified=justified, justification_rules=[dict(group=g, reason=w) for _, g, w in jrules], runs_summary=dict(runs=totals['runs'], reached_in_port_model=runs_reached, not_reached=len(analysis_errors)),
        analysis_errors=analysis_errors,
        unmapped=unmapped,
        limits=limits, limits_summary=limits_summary,
        methods=methods,
    )
    for t in ('runs', 'reachable-not-exercised', 'unreachable-by-policy', 'debug-only', 'unreachable-in-original'):
        receipt['totals'].setdefault(t, 0)
    text = json.dumps(receipt, ensure_ascii=True, separators=(',', ':'))+'\n'
    args.output.write_text(text, encoding='utf-8', newline='\n')
    write_doc(args.doc, receipt, rows_by_class, len(ledger), totals['runs'])
    print(json.dumps(dict(totals=receipt['totals'], analysis_errors=len(analysis_errors), unmapped=len(unmapped),
                          receipt_bytes=len(text), reachability=receipt['reachability'], cut_policies=receipt['model']['cut_policies'])))
    for e in analysis_errors:
        print('ANALYSIS_ERROR', e['id'], e['doc_id'], e['static_class'])
    for u in unmapped:
        print('UNMAPPED', u)
    return 1 if analysis_errors or unmapped else 0


if __name__ == '__main__':
    sys.exit(main())
