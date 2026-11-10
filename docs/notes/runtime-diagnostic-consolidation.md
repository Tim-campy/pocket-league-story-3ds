# Consolidação antes do diagnóstico de CPU

Em 2026-11-10, as alterações locais posteriores a `b2acf47` passaram na
verificação completa: **108/108 checks**, com recibos renovados e PROGRESS.md
regenerado. Comando:

```powershell
python tools/verify_phase2.py --apk '../Pocket League Story/original/app.apk' --original-managed '../Pocket League Story/original/extracted/assets/bin/Data/Managed'
```

O conjunto consolida listas imutáveis de delegates, cache de literais,
compartilhamento de strings no adaptador de colação, armazenamento fixo dos
passes de desenho, diagnóstico de alocações e as esperas ARM descritas em
arm11-condition-wakeup.md. Não amplia a lógica traduzida nem remove bounds
checks ou atomicidade de referências. O diferencial portável conserva a
diferença de plataforma conhecida: 2.617/2.618 observações, 374 métodos.

runtime-session-final.md é o registro histórico da sessão anterior, quando
essas alterações ainda não tinham verificação completa. Seus tempos e
alocações são a baseline desta rodada, não medições novas. O primeiro frame
ARM permanece não concluído. A contabilidade exclusiva de CPU com inlining,
os cinco microbenchmarks e os experimentos isolados ainda não foram medidos
neste marco de consolidação.
