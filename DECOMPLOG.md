

## Rodada tracing: fixture de identidade fraca no ARM

Circuit breaker: abordagem alterada ap?s repeti??o da asser??o 42.
Retorno TLS corrigido exp?s sensibilidade ao layout na fixture; coletor em
thread fresca n?o resolveu; instrumenta??o de ra?zes mudou o resultado.
N?o foi inferida corre??o do GC a partir dessa instrumenta??o. Fixture de
identidade usa armazenamento exclusivo para n?o misturar reutiliza??o de
endere?os nativos com o teste do cache fraco. 60 asser??es preservadas,
PASS nos perfis New/old Azahar. Origem exata da falsa reten??o anterior:
UNKNOWN. Evid?ncias e limita??es em docs/notes/tracing-gc-arm-stacks.md.


## Identidade da execu??o ARM

Sonda privada recompilada antes de terminar o run anterior: recibo new-1
invalidado e preservado. Runner corrigido para fixar o SHA do lan?amento e
recusar altera??o posterior. Duas fixtures end-to-end com processo simulado
passam. Verifica??o completa anterior interrompida; nova execu??o integral
obrigat?ria antes do commit. Nenhum estado de execu??o promovido por essa sonda.
