# Perfil automático do vídeo — 2026-11-27

## Escopo e arquivos

O build CTR registra a sessão sem SELECT. O primeiro quadro do loop de
carregamento já é medido. Coletas anteriores ao loop ficam com quadro 0 e
formulário -1 (inicialização; quadro exato UNKNOWN). Eventos entre quadros
também ficam com quadro 0, preservando o formulário observado antes do próximo
quadro. A diferença do contador de coletas antes/depois separa esses eventos;
não se inventa uma origem no quadro seguinte. A identificação usa o
formulário do topo, tipo de SubForm, estado de GameForm/SoccerForm, estado do
GameManager, zoom e movimento efetivo da câmera. São separados boot, quadro
estável, transição e interação com diálogo nativo. Os quadros do diálogo nativo
podem incluir espera pela resposta do usuário e não representam custo estável.

Arquivos em `sdmc:/pls-video/`: `video-N-frames.csv`, `video-N-gc.csv` e
`video-N-meta.txt`. N escolhe um nome livre. SELECT apenas marca um quadro;
não é necessário nem inicia uma janela de medição. As antigas janelas de
300 quadros e o buffer separado de 16.384 amostras de cópias foram substituídos.
Somente com a flag opcional `capture-check.flag`, SELECT também captura os
alvos para comparação visual, fora do quadro medido. Remover essa flag nas
sessões de desempenho.

Os buffers nativos são alocados uma vez: 4.096 quadros, 1.024 eventos de coleta
e 64 eventos temporários. Não guardam referências gerenciadas. A cada 120 s,
antes de encher um buffer e ao sair pelo jogo, os dados vão ao SD fora dos
quadros medidos. Contagens de perdas ficam explícitas. O relatório avisa sobre
perdas, linha truncada, quadro duplicado ou divergência entre CSV e checkpoint.
Uma interrupção pode perder os dados posteriores ao último checkpoint.

## Tempos e interpretação

- Lógica: tempo de `host_update`, descontadas as esperas da GPU.
- Desenho na CPU: preparação/submissão do desenho, descontadas as esperas da GPU.
- Espera da GPU: sincronizações registradas pelo backend.
- Total: trabalho do quadro, incluindo coleta, contabilidade de memória, demais
  operações do host e amostragem; exclui a espera deliberada para manter 20 Hz.
- `accounting_ns`: diferença de um contador que o coletor já mantinha; a leitura
  não modifica o coletor nem acrescenta relógios à rotina de contabilidade.
- Cargas de assets, uploads, criação de texturas/alvos e cópias são detalhes
  dentro desses tempos. Não devem ser somados novamente ao total. Etapas de
  carga de imagem e catálogo também podem se sobrepor.

O medidor agregado de assets existente passa a ficar ativo durante este perfil
contínuo, para atender ao diagnóstico de cargas por quadro. A lista de eventos
continua desligada; os agregados têm capacidade fixa. Os logs por botão e por
diálogo foram removidos para evitar gravação de diagnóstico nesses quadros.

`profile_ns` informa o custo da amostragem e entra no total do quadro.
`flush_data_ns`/`flush_data_max_ns` informam a gravação dos dois CSVs, incluindo
abertura/fechamento, fora do quadro. A escrita pequena do próprio metadata não
está nesse número. O custo adicional dos cronômetros de assets será comparado
no Azahar com `profile-minimal.flag`; o emulador não mede desempenho do aparelho.

## Leitura no PC

```powershell
python tools/report_ctr_video.py build/phase4-video/n3ds
python tools/report_ctr_video.py build/phase4-video/n3ds --json
```

A ferramenta calcula percentis exatos pelo método nearest-rank, sem histograma:
média, p50/p95/p99 e máximo de lógica, desenho, espera e total. Informa quantidade
de quadros acima de 50/150 ms, cópias, memória livre mínima, custo da amostragem
e os 20 piores quadros de cada grupo. Cada coleta traz origem, pausa, bytes e
objetos antes/depois. Esses bytes são do heap gerenciado, não VRAM nem todo o
heap nativo. Imagens gerenciadas continuam no grafo do coletor; os pixels e
handles nativos da GPU não se tornam arestas gerenciadas.

## Sessão do aparelho recebida nesta rodada

A pasta atual foi preservada em `build/phase4-video/n3ds-controls-approved-20261127`.
Ela tem 11.525 quadros, 269 estáveis acima de 50 ms, máximo estável 790,215850 ms,
maior transição 3.015,673048 ms e maior coleta 395,690252 ms. São 50 eventos de
coleta, sem descartes. Boot até o título: 17.914,929118 ms.

| Janela (300 quadros cada) | Lógica média ms | Desenho média ms | Espera média ms | Total médio ms | Total máximo ms | >50 ms | Cópias / ms médios |
|---|---:|---:|---:|---:|---:|---:|---:|
| Título | 0,221 | 4,037 | 6,439 | 12,198 | 12,918 | 0 | 6 / 1,436 |
| Gestão 100%, parada | 3,353 | 13,716 | 14,365 | 34,344 | 369,941 | 2 | 8 / 1,516 |
| Menu da gestão (SubForm 3) | 0,258 | 18,332 | 15,321 | 36,706 | 61,102 | 1 | 8 / 1,509 |
| Gestão 100%, rolando | 4,207 | 13,348 | 14,225 | 35,427 | 383,462 | 2 | 8 / 1,516 |
| Partida (estado não registrado) | 3,464 | 19,814 | 14,660 | 40,698 | 214,051 | 3 | 8 / 1,513 |

Os oito quadros lentos dessas janelas não têm coleta coincidente. Os quatro
picos de gestão têm 336,179–352,729 ms na lógica, sem upload de textura.
As cópias ficam perto de 1,5 ms e não explicam esses picos. Causa: UNKNOWN.
O quadro lento de menu concentra 42,646 ms no desenho na CPU. Não se pode
localizar os outros 261 quadros lentos pelo perfil antigo de janelas.

A folga mínima de VRAM é 1.930.240 bytes. A folga mínima transitória da memória
linear é 8.988.416 bytes; no fim dos quadros, o mínimo observado é 11.063.296.
O alinhamento das janelas com o CSV da GPU coincide exatamente em espera,
comandos e trocas de textura. O deslocamento de 60 quadros entre as numerações
é inferência; os dados privados da análise ficam em `n3ds-controls-analysis.json`.

A sessão anterior com 510 quadros lentos e pausa de 435 ms foi substituída na
pasta recebida. Seu resumo/documentação permanecem, mas os arquivos brutos
não foram encontrados nesta rodada. A atribuição dos 510 quadros por tela e a
causa da pausa são UNKNOWN. Os percursos diferentes não permitem usar a queda
de 510 para 269 como prova de melhora.

## Validação local

PC: build 1,9 s, check 1,6 s, smoke 10/10 e zero alertas em 118,7 s.
Ferramenta: seis testes aprovados (última execução: 0,067 s). CTR: build completo
1.862,0 s, recompilação final 70,9 s. Autoteste da GPU aprovado no Azahar.

Uma sessão atravessou título, carregamento do save, gestão, menu e saída:
1.694 quadros, 17 coletas, zero descartes e nenhum aviso do leitor. Capturas e
CSV privados: `build/phase4-video/auto-profile-validation/`. Buffer fixo:
1.874.432 bytes; amostragem máxima 0,071757 ms. A saída gravou em 333,367 ms.

Três pares no título, Azahar 2126.2, um emulador por vez; últimos 500 quadros
estáveis de cada execução. Não são medições de desempenho do aparelho:

| Par | Total detalhado ms | Total mínimo ms | Amostragem detalhada ms | Amostragem mínima ms |
|---|---:|---:|---:|---:|
| 1 | 6,463919 | 6,190550 | 0,008448 | 0,007030 |
| 2 | 6,225254 | 6,161713 | 0,008382 | 0,007035 |
| 3 | 6,217641 | 6,230008 | 0,008369 | 0,007049 |

O custo direto adicional da amostragem fica em 0,0013–0,0014 ms. A diferença
total muda de sinal e não isola esse custo do ruído do emulador/host. O custo
durante cargas intensas e no aparelho continua UNKNOWN. A primeira execução
também verificou o checkpoint de 120 s e a saída: duas gravações, 2.680 quadros,
12 coletas, zero descartes; maior gravação 429,765 ms, fora dos quadros medidos.
Essa pausa de SD deve ser conferida no aparelho; não é escondida no tempo médio.
Dados: `build/phase4-video/profile-cost-{1,2,3}-{detailed,minimal}/`.

Não há push deste perfil. A medição física requer jogar normalmente e sair pelo
jogo; copiar os três arquivos `video-N-*` do mesmo N para a pasta de análise.
