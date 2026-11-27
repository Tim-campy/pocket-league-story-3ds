# Zoom inteiro e encaixe — 2026-11-27

O mapa continua desenhado no alvo existente e ampliado sem filtro. Em 100% e
200%, o tamanho do destino agora é exatamente o tamanho inteiro do recorte
vezes 1 ou 2. Em 200%, são 400×216 pixels; a linha inferior que não cabe em um
par usa o fundo existente (RGB 50,205,255). As notificações e demais elementos
desenhados depois do mapa continuam em tamanho próprio.

`management_zoom_snap_margin = 6` pontos percentuais, ao lado da velocidade
`management_zoom_percent_per_frame = 3`. Soltar L/R dentro da margem aproxima
o zoom de 100%/200% em no máximo dois quadros. Fora dela, conserva a escala.
Nova pressão ou pinça cancela o encaixe. Dois botões seguros são neutros sem
simular soltura. Os dois campos de controle são primitivos, não serializados;
não acrescentam alocação por quadro nem referências ao coletor.

## Evidência local

Capturas em `build/phase4-video/exact-zoom-before/` e `exact-zoom-after/`:
118 pares por execução, roteiros concluídos sem timeout em 66,41/68,34 s.
Quadro 500: 100%; quadro 650: 200%. Na região x=0..399, y=83..216 do mapa,
13.400 blocos de 2×2 foram comparados. Antes: 6.640 blocos desiguais; depois:
zero. A faixa de notificações fica fora dessa comparação porque não é parte
do mapa ampliado. A verificação inicial que incluía essa faixa falhou por esse
motivo; não era defeito do recorte.

Solturas em 197% e 194% voltaram a blocos exatos de 200% (quadros 820 e 920,
zero diferenças). Em 191%, fora da margem, a captura mantém 8.946 blocos
desiguais, igual à revisão anterior. A tentativa tardia de voltar a 100% foi
bloqueada por um diálogo do jogo; não conta como teste do encaixe inferior.

Repetição específica antecipou a soltura em 98% para antes do diálogo:
`build/phase4-video/exact-zoom-snap100/`, 118 pares, concluída em 66,38 s.
Depois do encaixe, duas regiões estáticas (4.000 e 16.000 pixels) coincidiram
exatamente com a captura inicial em 100%. No CTR, o perfil confirmou
197% no quadro 754 e 200% no 755. A pressão temporizada destinada a chegar
a 100% no Azahar terminou em 155%; não é usada como prova desse encaixe.

O primeiro build falhou por faltar `screen_layout.hpp`; inclusão corrigida.
Build corrigido: 146,4 s; check: 2,6 s; smoke: 10/10, zero alertas, 129,8 s.
O teste CTR será registrado na entrega. Nada desta revisão foi publicado.

## Alternativa não implementada

Ampliar primeiro por fator inteiro e ajustar linearmente exigiria uma etapa
extra e uma textura intermediária. Para um recorte próximo de 200×108, 2×
cabe em 512×256 RGBA8: 524.288 bytes. Em escalas como 130%/150%, ampliar o
recorte atual por 2 pede 1024×512: 2.097.152 bytes. Um alvo menor exigiria mudar
o recorte ou dividir a passagem, não apenas trocar o filtro. Com o alvo de
trabalho compartilhado, esses resultados podem ficar na memória linear;
um alvo residente adicional consumiria o mesmo tamanho na VRAM. Haveria
outra passagem/cópia, com custo temporal UNKNOWN até implementação e medição.
Nenhuma dessas alternativas foi aplicada.

Teste PC: `python tools/dev.py run --save 50`, Q/W para diminuir/aumentar;
soltar perto de 100%/200%, conferir encaixe e cursor nas bordas. No aparelho,
usar L/R. Escalas fracionárias continuam com pixels de larguras alternadas e
variação visual ao rolar; esta mudança corrige apenas os valores inteiros.
