"""Fail-closed summary of the five freeze gates; never infers user approval."""
def criteria(phase2, game, floating=None):
    count=phase2.get('game_translated_methods',0)
    slots=len(game['missing_virtual_definitions']) if 'missing_virtual_definitions' in game else 'UNKNOWN'
    return [
        ('Tradução completa','em andamento' if count else 'pendente',
         f"{count}/1958 métodos compilados"+(f" (+{phase2['game_embedded_methods']} membros gerados pelo compilador dentro de unidades emitidas, {phase2.get('game_no_body_methods',0)} abstratos sem corpo)" if phase2.get('game_embedded_methods') else '')+f'; {slots} slots virtuais pendentes; integração das 53 políticas ainda não comprovada.'),
        ('Coletor e desempenho','em andamento',
         'Critério (2026-11-13): New 3DS real, backend nulo, três execuções; nenhum frame >50 ms em jogo estável (partida e tela parada, coletas por volume incluídas); pausas em trocas de tela principal, em Finish de janela (JSystem.Gc do fonte) e carregamentos até 150 ms; partida com média <20 ms. v5 em três execuções: menu com maior coleta 105,6–107,7 ms, de SubForm.Finish (transição pela regra nova); partida média 8,9–12,6 ms sem coletas. Confirmação pendente: três execuções do v6.'),
        ('Percurso completo no PC','em andamento' if phase2.get('game_executed_methods',0) else 'pendente',
         f"{phase2.get('game_executed_methods',0)} métodos exercitados; temporada, todas as telas e tipos de evento ainda não comprovados."),
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
