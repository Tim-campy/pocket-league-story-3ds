# Relat?rio de encerramento ? rodada ap?s bbc270a

## 1. PROGRESSO

Rodada interrompida a pedido do usu?rio. Checkpoint funcional publicado:
`d6b11a4`, com 122 checks completos aprovados. Nenhum teste, compila??o ou
emulador da rodada ficou em execu??o. N?o houve congelamento.

| Crit?rio do congelamento | Estado | Evid?ncia / pend?ncia |
|---|---|---|
| Tradu??o completa | Em andamento | 1.768/1.958 m?todos compilam; 190 restantes; 22 slots pendentes; 53 pol?ticas ainda n?o integralmente comprovadas. |
| Coletor e desempenho | Em andamento | Coletor integrado; CPU PC reduzida; meta de pausa <2 ms n?o atingida; sem benchmark New 3DS f?sico. |
| Percurso completo no PC | Em andamento | 776 m?todos do jogo em runs acumulados; partida completa e retorno executados; temporada e cobertura integral pendentes. |
| Fidelidade resolvida | Em andamento | Regra num?rica confirmada no emulador ARM e adotada; aparelho, ref/out, trigonometria e compara??o integral de telas pendentes. |
| C?digo leg?vel e aprovado | Pendente | Emiss?o por tipo; aprova??o da amostra ainda pendente. |

Fronteira: 775 s?mbolos em 98 tipos; 252 verified, 1 implemented, 522 todo.
A cobertura de execu??o Release 41 foi de 725 m?todos do jogo e 197 port?veis
nessa execu??o, n?o adicional ? cobertura acumulada. Foram 5.772 frames,
partida terminada em 0?1 e retorno ? gest?o. O encerramento por timeout ocorreu
depois do retorno. Esse replay antecede os ?ltimos ajustes de auxiliares e do
limite de arrays grandes; n?o se declara um novo replay integral destes ?ltimos.

### CPU sem eleva??o

Tr?s repeti??es v?lidas de 300 frames por cen?rio, 900 frames por cen?rio,
sem compila??o ou emulador concorrente. Valores abaixo arredondados a seis
casas; os recibos preservam os valores completos.

| Medida (ms/frame) | Menu | Partida |
|---|---:|---:|
| Baseline hist?rica solicitada, outro m?todo | 7,15 | 9,04 |
| Baseline bbc270a, mesmo m?todo desta rodada: m?dia CPU | 8,420139 | 9,010417 |
| Atual: m?dia CPU da thread principal | 1,684028 | 1,631944 |
| Atual: p95 / m?ximo CPU | 15,625 / 15,625 | 15,625 / 15,625 |
| Atual: m?dia monot?nica | 2,663107 | 2,335066 |
| Atual: p95 / m?ximo monot?nico | 3,4623 / 4,6951 | 3,0414 / 4,1528 |

GetThreadTimes teve 803/900 amostras zero no menu e 806/900 na partida:
seus percentis n?o resolvem frames curtos. QueryThreadCycleTime e rel?gio
monot?nico foram registrados separadamente; ciclos n?o foram divididos por
GHz nominal. Zero coletas nas seis janelas. Uma tentativa de partida foi
rejeitada por conter 218 frames de partida e 82 de menu; a repeti??o v?lida
foi preservada junto ? rejeitada. CPU principal n?o equivale ? soma ETW das
threads da baseline hist?rica.

Imagem medida: `895dae63092771f746d9400446e6681627cbcf1350a9b06ed3b6e0faa0b4b402`.
A corre??o posterior do limite de arrays grandes passou nos testes, mas n?o
recebeu outra s?rie completa de desempenho.

## 2. O QUE FOI FEITO

- Rel?gios de CPU/ciclos/tempo monot?nico e runner sem eleva??o, tr?s repeti??es.
- Coletor: ?ndice de p?ginas de 4 KiB, registros densos, faixas imut?veis
  registradas uma vez e contabilidade restrita aos buffers mut?veis. Pilha de
  marca??o expl?cita mantida; buffers sem ponteiros n?o s?o varridos como ra?zes.
- Arrays: cabe?alho e dados cont?guos, wrapper compacto para casos sem
  covari?ncia, checagem embutida e falha fora de linha. Corrigido o limite de
  arrays de refer?ncias para arrays aninhados, strings e delegates.
- Emissor/runtime: acesso est?tico pr?prio sem guarda duplicada apenas onde
  a entrada j? garante inicializa??o; limites num?ricos constantes; falha de
  nulo fora de linha. A generaliza??o completa das regras de inicializa??o
  de tipos n?o foi aplicada.
- API: adaptador direto preservando raiz e identidade, sem nove delegates
  tempor?rios; removidas c?pias de chave e de texto na medi??o de fontes.
- Aloca??es do menu: 31.800 solicita??es e 5.493.600 bytes em 300 frames,
  isto ?, 106 new e 18.312 bytes/frame, contra 648 new/frame no ponto inicial.
- Pipeline CTR: 654 imagens pr?-convertidas sem perda; 3.027 entradas;
  27.553.616 bytes de texturas com padding/cabe?alhos, 40.944.998 bytes de
  arquivos no conjunto preparado. Hash fora da carga no modo SD preparado.
- Emulador Android ARM: 36 discriminantes e 144 observa??es de kernels,
  incluindo 80 entradas distintas do Cal; regra adotada ap?s correspond?ncia.

### Kernels, ns/chamada

| M?todo | Antes dos ajustes desta rodada | ?ltimo C++ medido | Mono da mesma compara??o | Piso direto, primeira de tr?s repeti??es |
|---|---:|---:|---:|---:|
| Camera.ConvertScreenToCamera | 61,2375 | 14,83125 | 6,1375 | 10,3875 |
| Team.Cal_evaCoatMulti9block | 607,29375 | 132,55 | 35,375 | 84,75625 |
| Team.GetSum | 447,21875 | 138,575 | 34,925 | 48,6 |
| ChRect | 6,26875 | 7,2625 | 10,01875 | 4,05625 |
| AppData.InsertGameObject | 377,85625 | 183,175 | 83,89375 | 77,4875 |

A tabela n?o oculta a piora de ChRect contra a base inicial. S?o etapas
medidas em momentos distintos. O piso usa proje??o pr?pria dos dados e
checagens diretas, n?o ? o layout de produ??o. As tr?s repeti??es e todas as
etapas intermedi?rias constam em runtime-cost-round.md. O ?ltimo experimento
de caminho frio n?o demonstrou melhora uniforme; a varia??o de Insert tem
causa UNKNOWN. Paridade geral com Mono n?o foi alcan?ada.

## 3. HIP?TESES

- **CONFIRMADA no corpus:** avalia??o float em binary64, com estreitamento
  em locais, campos, arrays, convers?es expl?citas, argumentos e retornos float;
  int?float estreita antes do alargamento. Modelo: 36/36 discriminantes,
  80/80 Cal; emissor real: 36/36 e 144/144 observa??es de kernels.
- **REFUTADA no corpus:** avalia??o sempre binary32: 34/36 discriminantes e
  27/80 Cal. Dez dumps mostram JIT ARM com VFP; n?o ? JIT x86 nem aritm?tica
  por software do Mono. QEMU emula o hardware convidado no host.
- **CONFIRMADA:** contabilidade/reconstru??o de ?ndices e tempor?rios da API
  contribu?am para o custo de runtime; as variantes e recibos est?o registrados.
- **REFUTADA como solu??o suficiente:** somente tornar arrays cont?guos;
  o ganho veio tamb?m da redu??o do wrapper e do acesso embutido.
- **REFUTADA como solu??o suficiente:** reduzir capacidade de metadados
  elimina a falha ARM. A variante libera mem?ria, mas tamb?m falha antes do t?tulo.
- **INCONCLUSIVA:** consumidor do salto final de mem?ria ARM; sonda de pilha
  da aloca??o compilada, ainda n?o executada no momento da parada.
- **INCONCLUSIVA:** mudan?a de placar causada pela regra num?rica; o replay
  n?o fixa a semente e placares j? variavam entre execu??es com mesmo c?digo.

### Coletor

A refer?ncia anterior relatada era 330 ms. Na ?ltima sonda de pausas sem
cron?metros por lookup: 17 coletas, m?dia 11,233429411764705 ms, m?ximo
35,8161 ms, 13 pausas >=2 ms. A maior terminou com 12.883.858 bytes e 25.070
objetos retidos. N?o ? um heap bit a bit id?ntico ao da medi??o hist?rica.

No perfil separado por fases, maior coleta com soma de 36,2978 ms:

| Fase | ms |
|---|---:|
| Despejo de registradores | 0,0001 |
| C?pia de pilha | 0,0005 |
| Varredura conservadora | 0,038 |
| Prepara??o de faixas | 0,0121 |
| Limpeza de marcas | 0,9344 |
| Ra?zes expl?citas | 0,1443 |
| Marca??o | 2,2058 |
| Remo??o de mortos | 27,3642 |
| Destrui??o | 5,3978 |
| Demais fases | 0,2006 |

Busca por endere?o est? inclu?da nas fases; seu custo isolado sem perturba??o
permanece UNKNOWN. N?o somar tempos inclusivos duas vezes. Meta <2 ms N?O
ATINGIDA. Limpeza incremental/pregui?osa n?o implementada. Limiares atuais:
PC 8 MiB, CTR 2 MiB, configur?veis. Aus?ncia de coleta nas janelas est?veis
n?o prova aus?ncia de pausas em outras transi??es.

## 4. PEND?NCIAS

Arrays atuais: x64 comprimento +0x58, payload +0x60; ARM +20 e +24, mesma
linha de aloca??o alinhada a 64 bytes. Nulo e limites preservados.
Mono x86 Camera: 184 bytes/55 instru??es; GetSum: 337 bytes/104 instru??es.
C++ x64: de 158/251 para 91/177 instru??es na etapa inspecionada; sem chamadas
Array.at. ARM: Camera 548 bytes/126 instru??es/9 chamadas; GetSum 624 bytes/
146 instru??es/11 chamadas. Arquiteturas diferentes: n?o converter contagem
em raz?o de velocidade. Restam inicializa??o e convers?es, al?m de uma
sele??o redundante de payload observada no MSVC e eliminada pelo GCC.

ARM New a 100%: imagem de produ??o e variantes privadas falham por mem?ria
antes do t?tulo, zero frames qualificados. A sonda por etapa registrou
28.893.376 bytes no frame de boot 480 e 93.999.856 ao falhar. Nesse frame,
12.400.984 bytes de texturas, 65.536 de fontes, zero ?udio e 2.411.816 de
heap gerenciado foram enumerados; o restante inclui overhead n?o totalmente
atribu?do. Redu??o privada de capacidade n?o foi adotada. ?ltima imagem n?o
foi qualificada no perfil Old; timings de menu/partida ARM s?o UNKNOWN.

Perfil de carga New instrumentado: 387 cargas de imagem, m?dia total
50,3832881498708 ms, m?ximo 497,869169; leitura m?dia 49,618981989664086 ms,
identifica??o 0,6041080775193798 ms, c?pia 0,10482802842377262 ms, ado??o do
layout 0,02355925064599483 ms. Decodifica??o/convers?o no runtime ausentes
para essas imagens pr?-convertidas; envio GPU zero no backend nulo. Etapas
inclusivas n?o se somam. Hash de 36 prepara??es de stream j? validado fora
da carga; custo de checar esse estado m?dio 0,003442027777777778 ms.
S?o tempos instrumentados do emulador, n?o hardware. ResourceManager.LoadStart
n?o foi modificado. O .3dsx final de benchmark ainda n?o est? qualificado.

Ficaram compiladas e n?o executadas: sonda ARM de pilha de falha e sonda PC
refinada de remo??o de mortos. A vers?o anterior desta segunda sonda imprimia
no trecho cronometrado; seus tempos n?o substituem o perfil acima.

## 5. TOOLCHAIN

PC MSVC Release /O2 /fp:strict, CMake/Ninja; Mono/smcs oficial Unity 5.3.4f1
como or?culo. ARM devkitARM GCC 16.1.0, O2, sem LTO, se??es n?o usadas
removidas. Azahar 2126.2, CPU/limite a 100%. SDK Tools/emulador 25.2.5,
Android API21 armeabi-v7a revis?o4, Cortex-A8. NDK r27c local.
Vers?es, proveni?ncia, hashes e licen?as: docs/toolchain.md e THIRD_PARTY.md.
.text PC da ?ltima imagem medida: 6.544.289 bytes. Repeti??o completa do
comparativo de tamanho ARM ap?s todos os ajustes finais: UNKNOWN.

## 6. COMPONENTES EXTERNOS

Assets e bin?rios dos or?culos continuam locais e ignorados. APK conferido:
d557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8.
Refer?ncia C# n?o alterada; C++ do jogo regenerado pelo emissor.
O teste Android usa libmono do suporte Android oficial do editor, n?o do APK
do jogo. Pipeline cont?m c?digo e invent?rios, n?o imagens/fontes/?udio.
403 asser??es da fixture do coletor passaram em cada perfil New e Old;
isso valida a fixture, n?o o boot completo do jogo.

## 7. BLOQUEIOS

Parada por solicita??o do usu?rio. Sem processos de trabalho ativos.
Falha de aloca??o ARM e pausa GC acima de 2 ms s?o pend?ncias t?cnicas,
n?o pedidos de autoriza??o. Confirma??o f?sica de ponto flutuante depende do
Android; desempenho definitivo depende do New 3DS. Emuladores n?o encerram
os crit?rios f?sicos. Nada foi congelado; n?o h? nova decis?o exigida agora.

## 8. RECOMENDA??O

Na pr?xima rodada, executar primeiro a sonda de pilha de aloca??o ARM j?
compilada, atribuir o salto de mem?ria e corrigir somente ap?s essa evid?ncia.
Depois, executar o perfil diferido de sweep e atacar a remo??o de mortos,
que domina a pausa medida. Renovar os benchmarks apenas das variantes
aprovadas e revalidar a imagem final antes de qualific?-la para hardware.
Aguardar novo prompt; n?o iniciar essas a??es nesta sess?o.
