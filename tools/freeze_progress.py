"""Fail-closed summary of the five freeze gates; never infers user approval."""
def policy_text(game):
    rows=game.get('service_policy_emission')
    if not rows:return 'integração das políticas offline ainda não comprovada.'
    states={}
    for row in rows:states[row['status']]=states.get(row['status'],0)+1
    return (f"políticas offline: {states.get('emitted',0)} de {len(rows)} emitidas nos chamadores traduzidos, "
            f"{states.get('not_reached',0)} sem chamador traduzido, {states.get('rejected',0)} rejeitadas.")
def coverage_text(phase2):
    # Criterion 3 (2026-11-14): execution of every method reachable in the port;
    # the rest is justified by the static analysis (config/phase2-reachability.json).
    import json
    from pathlib import Path
    executed=phase2.get('game_executed_methods',0)
    path=Path(__file__).resolve().parents[1]/'config/phase2-reachability.json'
    if not path.is_file():return f'{executed} métodos exercitados; alcançáveis ainda não medidos.'
    totals=json.loads(path.read_text(encoding='utf-8'))['totals']
    reachable=totals['reachable_total']
    return (f"{executed}/{reachable} alcançáveis exercitados ({100*executed/reachable:.1f}%); "
            f"fora do alcance: {totals['unreachable-by-policy']} por política, {totals['debug-only']} só depuração, "
            f"{totals['unreachable-in-original']} inalcançáveis no original (docs/coverage-never-reached.md).")
def criteria(phase2, game, floating=None):
    count=phase2.get('game_translated_methods',0)
    slots=len(game['missing_virtual_definitions']) if 'missing_virtual_definitions' in game else 'UNKNOWN'
    return [
        ('Tradução completa','em andamento' if count else 'pendente',
         f"{count}/1958 métodos compilados"+(f" (+{phase2['game_embedded_methods']} membros gerados pelo compilador dentro de unidades emitidas, {phase2.get('game_no_body_methods',0)} abstratos sem corpo)" if phase2.get('game_embedded_methods') else '')+f'; {slots} slots virtuais pendentes; '+policy_text(game)),
        ('Coletor e desempenho','cumprido',
         'Cumprido em 2026-11-14 (v6 68634525, New 3DS XL, três execuções): jogo estável máx. 11,0 ms no menu e 25,9 ms na partida, sem coletas por volume; coletas de transição (JSystem.Gc em SubForm.Finish) com pausa máx. 111,3 ms e frame máx. 118,8 ms (limite 150 ms); partida com média 10,5–11,8 ms. Ressalva: medição com vídeo e áudio refeita na Fase 4.'),
        ('Percurso completo no PC','em andamento' if phase2.get('game_executed_methods',0) else 'pendente',
         coverage_text(phase2)),
        ('Fidelidade resolvida','em andamento',
         ('Ponto flutuante confirmado em emulador ARM; confirmação em aparelho, diferenças ref/out/trigonometria e comparação integral de telas ainda pendentes.'
          if floating and floating.get('status')=='PASS' and floating.get('emulator_confirmed') and floating.get('matched')==floating.get('cases')==36
          else 'Ponto flutuante Android, diferenças ref/out/trigonometria e comparação integral de telas ainda pendentes.')),
        ('Código legível e aprovado','pendente',
         'Emissão por tipo existente; nomes originais e amostra aprovada pelo usuário ainda não comprovados.'),
    ]

def markdown(phase2,game,floating=None):
    lines=['## Critérios do congelamento','',
           '**Antes do congelamento: fidelidade.** C++ do jogo gerado; nenhuma melhoria de jogo autorizada nesta metade.',
           'Nenhum critério cumprido é inferido de um teste parcial. A tag `v1.0.0-faithful` exige aprovação explícita do usuário.','',
           '| Critério | Estado | Evidência / pendência |','|---|---|---|']
    lines += [f'| {name} | {state} | {proof} |' for name,state,proof in criteria(phase2,game,floating)]
    return lines+['']
