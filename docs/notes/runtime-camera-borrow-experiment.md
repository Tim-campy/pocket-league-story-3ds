# Camera: quatro referencias locais emprestadas (experimento isolado)

Estado: candidato privado, ainda nao adotado no emissor. O controle recompila
Camera a partir do mesmo fonte normalizado dos objetos da baseline. Ambos
ligam os demais objetos Release existentes, sem contadores por metodo.

Apenas no overload ConvertScreenToCamera(int[],int[]), quatro copias locais
(dois cs_array e dois cs_target) passam de auto para const auto&. Prova de
vida: os parametros continuam por valor e mantem os dois arrays vivos ate o
retorno; as quatro lambdas sao executadas imediatamente, nao escapam e nao
reatribuem os parametros. As copias de Camera.pos global nao mudam. Nenhuma
hipotese de confinamento de threads; nenhum teste de nulo/indice removido.

Seis execucoes alternadas control/borrow/borrow/control/control/borrow, cinco
lotes de 16.000 chamadas por metodo em cada execucao. Todos os 80 resultados
capturados de cada execucao coincidiram com a baseline C++ (480 comparacoes).
Isso nao resolve as divergencias numericas ja conhecidas contra Mono x86.

Mediana dos 15 lotes de Camera por variante: controle 122,225 ns/chamada,
candidato 82,80625 ns/chamada. Houve lotes iniciais mais lentos; os valores
individuais e hashes estao no recibo privado. Nao converter esta diferenca
em ganho de frame antes da medicao da partida.

No executavel do microbenchmark, .text diminuiu de 983.937 para 983.153 bytes
virtuais (784 bytes); .rdata de 650.058 para 649.946 (112 bytes). O arquivo
PE diminuiu 512 bytes por causa do alinhamento das secoes. Isso nao e o
binario ARM nem uma medida de tamanho do jogo completo.

Evidencias locais: build/runtime-experiments/camera-borrow/proof.json,
micro-result.json, micro-sections.json e micro-0-control ate micro-5-borrow.
Medicao ETW da janela 1201..1500 da partida em andamento; resultado ainda
UNKNOWN. Inputs: autosave 31, replay da baseline, restaurados por variante.

## Primeira tentativa de frame: rejeitada como comparacao causal

ETW sem perda, mesmos frames 1201..1500, save 31 e replay. Controle:
media 8,088802 ms, p95 12,5343, maximo 18,113; candidato: media 10,163753667,
p95 16,0931, maximo 24,787. Nao ha eventos DPC/ISR para subtrair interrupcoes.

**Nao atribuir esses numeros a elisao:** o controle percorreu forms 2 e 4,
e o candidato somente form 2. Entradas iguais nao bastaram para manter o
mesmo estado nessa janela. Ganho de frame continua UNKNOWN; o candidato nao
foi adotado. Proxima acao: identificar a fonte de variacao e reproduzir o
mesmo estado antes de comparar. Resultados negativos preservados em
frame-result.json e nos traces privados, sem descartar a execucao.

Uma fonte de nao determinismo esta confirmada no fonte: GameUtil inicializa
seu JRandom estatico sem semente explicita (game/GameUtil.cs); o construtor
java/util/JRandom.cs delega para JSystem.CurrentTimeMillis(). Esses valores
nao foram capturados nos dois runs. A causa exata da divergencia de forms
continua INCONCLUSIVA; nao basta a existencia desse caminho para atribui-la
exclusivamente ao RNG. Nao se alterou o relogio nem as sementes de producao.

## Par com sementes reproduzidas (preliminar)

Uma copia privada do construtor JRandom() registrou as tres sementes recebidas
do relogio no controle e reproduziu os mesmos valores no candidato. O relogio
continua sendo consultado; LoadStart nao muda. Os construtores com semente
explicita e o codigo de producao nao foram alterados. Ambos terminaram com
exit code 0 e tres entradas de semente. Esse primeiro recorder ainda nao
gravava timestamps das sementes; a versao com QPC foi preparada depois e
nao foi usada nestes dois binarios.

ETW sem perda, frames 1201..1500, form 2 em todas as 300 amostras de ambos:
controle media 9,738113 ms, p95 15,0329, maximo 22,2627; candidato media
8,933081667 ms, p95 13,5734, maximo 17,829. Diferenca observada de medias:
0,805031333 ms. E um unico par, com sementes, replay e forms iguais; nao e
uma prova de igualdade de todo o estado nem uma estimativa consolidada de
ganho. Faltam repeticao com ordem invertida e auditoria temporal do recorder.
O candidato continua nao adotado. Evidencias: frame-seed-result.json,
frame-seed-control/, frame-seed-borrow/ e frame-seed-profile-1/ em build/.
