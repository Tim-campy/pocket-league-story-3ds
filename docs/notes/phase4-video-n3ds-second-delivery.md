# Segunda entrega — teste físico recebido em 2026-11-26

O usuário aprovou gestão, menus, partida inteira e salvar/carregar no New 3DS
XL, começando um jogo novo. Evidência privada: `build/phase4-video/n3ds/`.
Há uma sessão, 13.907 registros GPU sem descarte, uma janela completa de 300
quadros e duas capturas do título. A tentativa de janela da gestão foi
cancelada ao trocar de GameForm para SubForm tipo 0. Não existem CSVs completos
de gestão, menu ou partida. Não inferir essas telas pela quantidade de desenhos.

## Medição por tela

Médias em ms; máximo refere-se ao total do quadro. A espera da GPU inclui
as cópias; não somar copy_ns novamente. O total inclui trabalho adicional do host.

| Tela | Quadros identificados | Lógica | Desenho CPU | Espera GPU | Total | Maior quadro | >50 ms |
|---|---:|---:|---:|---:|---:|---:|---:|
| Título | 300 | 0,224249 | 3,979845 | 6,600719 | 12,287800 | 13,288641 | 0 |
| Gestão | 0, janela cancelada | UNKNOWN | UNKNOWN | UNKNOWN | UNKNOWN | UNKNOWN | UNKNOWN |
| Menu | 0 | UNKNOWN | UNKNOWN | UNKNOWN | UNKNOWN | UNKNOWN | UNKNOWN |
| Partida | 0 | UNKNOWN | UNKNOWN | UNKNOWN | UNKNOWN | UNKNOWN | UNKNOWN |

O título usa 6 cópias/quadro, 3.145.728 bytes, média de **1,443838 ms**, máximo
1,767642 ms. Desenhos: média 47,88, máximo 54; trocas de textura: 43,88/50.
As cópias consomem 11,75% do total médio do título. Os 5,156881 ms restantes
da espera GPU não podem ser atribuídos às cópias.

## Sessão inteira e memória

13.847 quadros após o título; **510 estáveis acima de 50 ms**. Maior quadro
estável: **675,072258 ms**; maior transição: **2.975,759744 ms**; maior pausa
de coleta: **435,145225 ms**; 96 eventos de coleta registrados, zero descartados.
O orçamento de 150 ms foi excedido no aparelho. Os registros globais não trazem
a decomposição completa de cada quadro nem identificam a tela de cada linha GPU.
Não é possível afirmar quais telas estáveis excederam 50 ms ou culpar cópias.

“Estável” no agregado significa ausência de transição marcada, não ausência de
coleta automática. A maior coleta ocorreu no quadro 2.667, cujo total foi
480,620178 ms. A transição máxima, no quadro 1.530, incluiu três coletas de
172,487233, 269,014482 e 100,318175 ms; elas não explicam todo o quadro.
Em todos os 13.907 registros GPU, o máximo de cópia foi 4,820213 ms e o máximo
de espera GPU foi 17,907756 ms, em amostras diferentes. A decomposição CPU dos
quadros extremos não foi capturada.

VRAM: 4.361.216 bytes usados, mínimo livre 1.930.240. Memória linear: pico
observado 16.946.432 bytes, mínimo livre 8.219.392, incluindo transições.
Na janela do título, o registro ao final tem 15.561.472 bytes lineares livres;
cache GPU de glifos 8.448 bytes/21 entradas, faixas CPU de fontes 201.528 bytes.
A média de cópias de toda a sessão é 1,502875 ms/quadro GPU, misturando telas,
boot e transições; não substitui médias por cenário.

## Boot

Tempo medido da entrada no programa até título: 17.566,444291 ms. Exclui o
carregamento do Homebrew Launcher anterior a main.

| Etapa | ms |
|---|---:|
| Arquivos/logs | 27,351883 |
| Runtime | 57,928434 |
| Catálogo | 2.416,833219 |
| Serviços | 503,941512 |
| Inicialização GPU | 14,763413 |
| Diagnósticos | 1.720,484095 |
| Inicialização do aplicativo | 1.998,562764 |
| Carregamento até título | 10.826,559964 |

Subconjuntos do carregamento: lógica 7.652,964570 ms, desenho 1.629,774107 ms,
upload 107,188678 ms e espera GPU 509,542266 ms. Há sobreposição entre essas
categorias; não somar às etapas novamente. Uma execução não explica a antiga
variação de 17–28 segundos nem mede o custo ligado/desligado do instrumento.

## Próxima rodada e proposta, não aplicada

Atualização de 2026-11-27: as instruções de SELECT abaixo são históricas.
O novo [perfil automático](phase4-automatic-video-profile.md) registra a sessão
inteira, sem ação do jogador. O [cache dos rótulos](phase4-label-cache.md) foi
autorizado e implementado localmente; sua medição no aparelho está pendente.

Vale uma nova rodada de três execuções: SELECT em menu da gestão, mapa parado,
mapa rolando nos dois zooms e partida em andamento; manter cada cenário até
terminar a janela de 60 quadros de aquecimento + 300 medidos. Diálogo durante
a janela cancela a amostra: fechar o diálogo e pedir novamente. Sair pelo jogo
e preservar cada sessão separadamente, conforme o roteiro de teste do aparelho.

O backend **já** copia ao alternar de destino, não a cada primitiva. O título
alterna os três alvos lógicos durante cada quadro, gerando 6 transferências.
`activate()` já evita salvar alvos sem escrita (`dirty`), e `clear()` já
dispensa restaurar o conteúdo anterior. O ganho proposto exige reconhecer
conteúdo repetido ou cobertura integral além desses casos existentes.
Para reduzir isso, a proposta é conservar o resultado de alvos cujo conteúdo
não mudou, começando pelos rótulos, e dispensar restauração quando houver
sobrescrita integral comprovada. Requer invalidar por texto/estado/toque e
preservar atualização parcial; a animação do título impede presumir que a
tela superior inteira está parada. Não foi aplicado nenhum cache ou redução
de cópias adicional. Medir o ganho após a decisão do usuário.
