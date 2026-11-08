# Concorrência do código traduzido

Os 71 casos de `Thread` comprovam a fundação (start, join, interrupção,
prioridade histórica e cultura). Não comprovam a segurança de todos os acessos
a campos gerados do jogo. `GcMutatorScope` coordena o coletor; não é um mutex
de execução do C#.

Há um problema confirmado por leitura do fonte e da representação C++:

- `BootForm.Init` cria `new JThread(this)` e inicia o worker.
- `BootForm.Update` lê `state_` nas linhas 139/174/179, enquanto `Run` também
  o lê nas linhas 377/412/433.
- `ChangeState`, linha 342, escreve esse campo; é chamado tanto no fluxo UI
  quanto no worker. Os contadores de progresso também cruzam esses fluxos.
- O emissor representa esses campos como valores C++ comuns. Acesso simultâneo
  sem sincronização constitui data race em C++; o fato de leituras alinhadas
  de Int32 serem atômicas no CLR não torna essa representação correta.

Isso é uma lacuna do port, não uma divergência já medida na tela Android.
Nenhuma falha de execução específica é atribuída a ela sem evidência.
Não se deve promover esses métodos a `verified` por compilarem em objeto.

A correção deve preservar operações individuais: ler e depois escrever em um
`++` comum C# não equivale a trocar o comando por um `fetch_add` atômico.
Referências, strings, publicação de dados e aliases precisam ser examinados,
além dos contadores. Barreira de conclusão de thread não protege leituras de
progresso que acontecem antes da conclusão. Não se adotou uma sincronização
global que mudasse arbitrariamente o escalonamento do programa.

Bloqueio nativo tem tratamento separado: `GcNativeBlockingScope` só pode
abranger código sem acesso gerenciado. O diálogo SDL converte textos e botões
antes de entrar nele, permite coleta durante o bloqueio do sistema e espera o
coletor antes de voltar ao código gerenciado. Fixtures de GC cobrem aninhamento
e reentrada; nenhum popup real foi contado como teste do jogo.

O [inventário vinculado dos campos do boot](phase2-boot-fields.md) registra os
18 campos próprios, os 73 campos acessados diretamente, publicação de payload,
labels, consumo de keyPulse e as condições de confinamento de ResourceManager.
O JSON reproduzível é `config/phase2-boot-concurrency.json`; não representa uma
correção aplicada ao emissor ou às APIs.
