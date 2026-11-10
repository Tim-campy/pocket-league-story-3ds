> Decisao do usuario: preservar o comportamento original e investigar o custo da carga. A proposta de incrementar antes do retorno foi rejeitada; nao aplicar. A rodada continua.

# ResourceManager.LoadStart: retorno antes do incremento

Estado: diagnostico confirmado no perfil New 3DS do Azahar; proposta abaixo
NAO aplicada ao tradutor, ao jogo ou a API. Nao e uma medicao em hardware.

O C# reconstruido, `reference/src/KairoLibrary/kairo/unity/ui/ResourceManager.cs`,
metodo `LoadStart(JarInflater,int)`, inicializa `loadTask[k][1]` com zero.
O incremento fica na clausula final do `for`. Quando a carga ultrapassa
`YieldTime` (150 ms), o callback retorna antes dessa clausula. A proxima
invocacao retoma o mesmo indice. Isso tambem repete o ultimo item de uma
fatia de carga quando a fatia, mas nao um item individual, excede o limite.

Uma primeira sonda com logs por metodo revelou milhares de cargas. Como os
logs poderiam perturbar o tempo, ela foi substituida por uma sonda minima:
recebe os dois operandos ja avaliados da comparacao e devolve exatamente
`elapsed >= budget`. Registra somente os primeiros 16 retornos e depois um
a cada 1.000. Nao muda o relogio, o limite, os indices ou o retorno.
Essa segunda execucao tambem repetiu `group=0,item=0`; entre as observacoes
7 e 16 o intervalo acumulado do callback ate concluir o primeiro item foi de 2.291 a 2.710 ms, sempre contra 150 ms. O primeiro frame nao
terminou. Esta evidencia refuta uma espera permanente de mutex como causa
desse trecho especifico; nao certifica todas as primitivas/threads do port.

Proposta apresentada e rejeitada pelo usuario, exclusivamente na camada Kairo (nao aplicar):

```diff
 if (num19 > 0 && JSystem.CurrentTimeMillis() - num17 >= YieldTime)
 {
+    loadTask[k][1]++;
+    loadCnt_++;
     return;
 }
```

O indice local `l` nao precisa ser incrementado ao sair do callback. O caminho
que nao retorna continua usando os incrementos originais. A proposta evita
recarregar o item concluido, mas muda um comportamento do original e por isso
nao esta autorizada pela regra de fidelidade so por melhorar desempenho.
Alternativa sem alterar esse controle: investigar/reduzir o custo da carga
na API ate cada item terminar abaixo do limite; nao ha ainda medicao que
prove ser suficiente no ARM11.

`tests/kairo/resource_yield_model.py` demonstra com duracoes sinteticas o
retorno sem progresso, a repeticao no limite, a proposta e o caminho rapido.
E uma fixture do controle, nao um teste de desempenho nem a execucao do jogo.
