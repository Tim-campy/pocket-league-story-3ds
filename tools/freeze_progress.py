"""Fail-closed summary of the five freeze gates; never infers user approval."""
def criteria(phase2, game):
    count=phase2.get('game_translated_methods',0)
    slots=len(game['missing_virtual_definitions']) if 'missing_virtual_definitions' in game else 'UNKNOWN'
    return [
        ('Tradução completa','em andamento' if count else 'pendente',
         f'{count}/1958 métodos compilados; {slots} slots virtuais pendentes; integração das 53 políticas ainda não comprovada.'),
        ('Coletor e desempenho','em andamento',
         'Conversão para rastreamento autorizada; paridade dos kernels e benchmark <=50 ms no New 3DS real ainda não comprovados.'),
        ('Percurso completo no PC','em andamento' if phase2.get('game_executed_methods',0) else 'pendente',
         f"{phase2.get('game_executed_methods',0)} métodos exercitados; temporada, todas as telas e tipos de evento ainda não comprovados."),
        ('Fidelidade resolvida','em andamento',
         'Ponto flutuante Android, diferenças ref/out/trigonometria e comparação integral de telas ainda pendentes.'),
        ('Código legível e aprovado','pendente',
         'Emissão por tipo existente; nomes originais e amostra aprovada pelo usuário ainda não comprovados.'),
    ]

def markdown(phase2,game):
    lines=['## Critérios do congelamento','',
           '**Antes do congelamento: fidelidade.** C++ do jogo gerado; nenhuma melhoria de jogo autorizada nesta metade.',
           'Nenhum critério cumprido é inferido de um teste parcial. A tag `v1.0.0-faithful` exige aprovação explícita do usuário.','',
           '| Critério | Estado | Evidência / pendência |','|---|---|---|']
    lines += [f'| {name} | {state} | {proof} |' for name,state,proof in criteria(phase2,game)]
    return lines+['']
