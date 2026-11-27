# Sessão automática no New 3DS XL — 2026-11-27

## Evidência e limites

Analisados `video-1` e `video-2` de `build/phase4-video/n3ds`: 9.060 quadros,
116 coletas, zero eventos descartados. São duas sessões livres, não três
repetições controladas. Os CSV, as tabelas por formulário/estado/zoom, os vinte
piores quadros e todas as coletas ficam fora do Git em
`build/phase4-video/state-route-review/hardware-tables.md` e nos JSON ao lado.
Reproduzir a leitura: `python tools/report_ctr_video.py build/phase4-video/n3ds`.
Percentis por nearest-rank; tempos em ms. Não confundir estes dados físicos
com medições no Azahar.

Limitação descoberta na comparação do zoom: esta versão do perfil lia
`Camera::camera_spos`, armazenamento intermediário que também é usado por
operações do cursor. Portanto, os campos antigos `camera_x/y` e `moving`
não distinguem com segurança mapa parado/rolando. Os tempos, formulários,
transições, coletas e totais abaixo não dependem dessa distinção e continuam
válidos. A nova versão lê `Camera::pos` e identifica a correção por
`camera_position_version=2` nos metadados. A separação físico parado/rolando
precisa de nova sessão; não é recuperável exatamente dos CSV antigos.

## Quadros estáveis

“Estável” significa ausência de troca de formulário/estado ou diálogo modal;
não exclui coleta, carga tardia ou gravação. Tempos de lógica/desenho/GPU são
médias; o total inclui também o trabalho restante do quadro.

| Tela | Quadros | Lógica | Desenho CPU | Espera GPU | Total médio | p50 | p95 | p99 | Máximo | >50 ms |
|---|---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|
| Título | 295 | 0,222 | 5,241 | 4,186 | 11,174 | 9,002 | 16,781 | 17,396 | 233,528 | 1 |
| Gestão | 2.071 | 3,360 | 13,163 | 11,885 | 31,370 | 28,704 | 37,542 | 47,412 | 626,615 | 13 |
| Menu principal | 168 | 0,356 | 17,739 | 12,905 | 33,894 | 33,747 | 34,466 | 39,790 | 43,232 | 0 |
| Outras janelas | 3.434 | 1,168 | 18,124 | 12,654 | 34,851 | 34,493 | 41,741 | 43,555 | 370,889 | 6 |
| Partida | 2.850 | 2,240 | 19,227 | 12,278 | 36,861 | 36,615 | 38,506 | 46,321 | 47,144 | 0 |

No conjunto, incluindo boot/transições/interações: 213 quadros >50 ms e 80
>150 ms. Maior quadro: 3.533,859 ms ao entrar na gestão; contém 3 coletas
(663,76 ms somadas), 105 leituras de assets (604,14 ms) e 44 envios de textura
(56,18 ms). Esses tempos são evidências internas, não parcelas independentes
que possam ser somadas para reconstruir o quadro. Retorno da partida:
1.995,52 ms; entrada na partida: 1.811,42 ms. A janela tipo 54 teve até
444,23 ms de desenho CPU na abertura: preparação de texto é hipótese, não
causa isolada pelo perfil atual.

Classificação exclusiva dos 213 quadros lentos:

| Classe | Quadros | Ocorrência durante jogo estável |
|---|---:|---|
| Boot, transição ou carga/envio/criação de recurso | 198 | 6 com recursos tardios |
| Coleta explicitamente pedida pelo jogo | 2 | gestão, `GameForm.ProgressTime` |
| Coleta automática durante jogo interativo | 0 | todas as 11 por volume ocorreram no boot |
| Interação modal | 1 | 1.475,731 ms; separado do jogo andando |
| Sem causa identificada | 12 | 8 gestão, 4 janelas |

Vários desses 12 têm lógica de aproximadamente 330–344 ms sem coleta ou carga.
Hipótese: salvamento periódico/manual. `GameForm.ProgressTime` chama
`SaveGame(true)` na passagem de semana; falta tempo de escrita por quadro para
confirmar. Não atribuir esses quadros ao coletor sem evento correspondente.

## Coletas e memória

| Origem do gatilho | Eventos | Pausa média | Maior pausa |
|---|---:|---:|---:|
| explícita | 4 | 109,096 | 252,965 |
| carregamento | 8 | 205,202 | 294,293 |
| transição | 93 | 80,290 | 283,421 |
| volume | 11 | 211,147 | 308,906 |

A maior pausa ocorreu no boot: heap 11.327.524 → 7.369.488 bytes, objetos
70.661 → 15.028. Pausa e quantidade anterior de objetos têm correlação
0,961 nesta amostra: até 29.999 objetos, média 46,540 ms; a partir de 60.000,
269,932 ms. Isso não prova causalmente a diferença para os 114 ms do benchmark
nulo: não são as mesmas cargas, objetos e execução. A pausa de 435 ms citada
anteriormente não reapareceu nesta sessão; explicar exatamente esse evento
antigo permanece UNKNOWN.

O coletor percorre wrappers gerenciados de imagens, arrays e tarefas. Não
percorre pixels dos vetores nativos, texturas lineares nem VRAM. O perfil não
mudou o algoritmo de coleta. A origem textual é limitada a 47 caracteres;
algumas assinaturas são truncadas, mas o método ainda é identificável.

Pico de texturas lineares: 11.895.040 bytes; menor folga linear: 8.596.224.
VRAM ocupada: 4.361.216; folga: 1.930.240 bytes. As tabelas privadas separam
esses números por tela. Não houve falha de alocação.

## Perfil e cache

O trabalho contabilizado pelo próprio perfil foi 0,015839 ms/quadro em média,
máximo 0,064652 ms. Falta par físico com perfil mínimo/desligado para medir
todo o efeito do observador. Os 2,763 ms médios de `accounting_ns` pertencem
à contabilização já executada por `gc_frame_end`, não ao perfil novo.

Seis gravações de perfil somaram 88,102 s fora dos quadros medidos; a maior
levou 26,936 s. O cronômetro mistura formatação e escrita: não isola espera
do SD. Logo os CSV por quadro não representam toda a experiência de pausas.

Cache: 8.948 acertos e 112 invalidações. Nos 293 quadros do título com acerto,
3 cópias/quadro; nos 2 sem acerto, 6. São 1.572.864 bytes a menos copiados
por quadro do título. Tempo médio das cópias nos acertos: 0,100 ms; nas
invalidações: 0,811 ms. Não há A/B controlado para atribuir a diferença de
tempo total somente ao cache. Gestão/menu/partida têm aproximadamente
5 cópias e 2,56 ms em cópias por quadro. O tempo das cópias já está incluído
na espera GPU; não somar duas vezes.

## Propostas, sem aplicação

1. Separar formatação/escrita do perfil e testar escrita em blocos: até 26,94 s
   de pausa observada; baixo risco para o jogo, alteração no host diagnóstico.
2. Medir escrita de saves e detalhar as transições com 105 leituras de assets:
   potencial de centenas de ms/segundos; instrumentação primeiro, sem mudar
   regras de salvamento ou carregamento.
3. Medir invalidação por alvo antes de estender o cache: teto observado de
   aproximadamente 2,56 ms em cópias por quadro nessas telas; risco de exibir
   conteúdo antigo se a invalidação for incompleta.
4. Detalhar preparação de texto na janela 54 e comandos de desenho: separar
   custo frio de custo recorrente antes de propor batching.
5. Investigar custo por objeto da coleta e da contabilização: maior risco,
   depende de autorização específica para runtime/coletor. Diminuir frequência
   não demonstra redução da maior pausa e pode aumentar memória.

Vale nova rodada controlada após decidir a escrita do perfil: três repetições
das mesmas telas, perfil normal/mínimo e cache ligado/desligado. A sessão
atual já basta para localizar os maiores problemas; não exige refazer o teste
de jogabilidade aprovado.
