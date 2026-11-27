# Zoom fracionário — entrega local

O commit 2c2ebe2 implementa o pedido do usuário: entre 100% e 200%, recorte
ampliado 2× sem filtro e depois reduzido linearmente; abaixo de 100%, redução
linear. Em 100% e 200%, o caminho anterior permanece. A cena é desenhada pelo
jogo no tamanho anterior; interface, barra inferior, partida e saves não mudam.

## Memória e custo

O intermediário RGBA8 1024×512 ocupa 2.097.152 bytes na memória linear. Sua
vista reutiliza o buffer de cor de VRAM, sem profundidade. É criado no boot,
não por quadro, e liberado na thread de desenho pelo mecanismo de liberação
adiada existente. Não guarda referências gerenciadas.

VRAM livre medida no Azahar: 1.930.240 bytes nos dois modos. A menor folga
linear foi 12.390.400 sem o intermediário e 10.260.480 com ele, em execuções
não idênticas. O pico anterior do aparelho deixava 8.596.224 bytes lineares;
descontar apenas o intermediário resulta em 6.499.072 bytes **estimados**,
não numa nova medição física. A VRAM usa os mesmos buffers fixos em todas as
telas; não se reduziu formato ou resolução de outro alvo para abrir espaço.

No Azahar, as escalas fracionárias acima de 100% passam de 5 para 8 cópias
por quadro: 3 MiB adicionais (salvar destino, guardar intermediário, restaurar
destino). O tempo dessas cópias cresceu 0,438–0,443 ms; a espera GPU total,
0,459–0,464 ms. Em 130%, desenho CPU 12,772 → 13,615 ms e total 15,165 →
16,477 ms. Abaixo de 100% e nos inteiros não há passo nem cópia adicional.

Tabela completa: `build/phase4-video/fractional-comparison.md`. Uma rodada
por modo, até 40 quadros anteriores a cada captura, sem carga/coleta/transição.
Os acontecimentos e o tempo de jogo não foram sincronizados: diferenças de
comandos e pausas sem causa isolada impedem atribuir toda diferença de média
ao filtro. Esses números **não** estimam o desempenho do New 3DS. O perfil
automático está pronto para a medição física com os dois modos.

## Capturas e verificações

Em `build/phase4-video/fractional-{before,after}-{pc,ctr}/selected/`:
75%, 85%, 100%, 115%, 130%, 150%, 170%, 185%, 200% e sequências de rolagem
em 130%/170%. No PC, 100% e 200% são idênticos byte a byte ao executável
anterior; também são idênticos os rótulos inferiores nos nove níveis e as
23 linhas superiores da interface. O autoteste permanente GPU compara os
resultados do filtro com o amostrador CPU, com tolerância de 2 unidades por
canal, além dos testes existentes de alfa, clip, profundidade e cache.

A inspeção PC/Azahar confirma escala, geometria do filtro e cores sem
corrupção do alvo. Não é igualdade pixel a pixel de sessões inteiras: atores,
calendário e posições após a rolagem diferem entre essas execuções. Em
fracionários os contornos ficam menos irregulares e mais suaves. O filtro
não cria uma grade de pixels inteiros e não elimina a discretização do
movimento anterior à ampliação; a avaliação de cintilação no painel físico
continua pendente. Nenhum filtro novo é aplicado às fontes da interface.

Validação local do zoom: build PASS; check PASS; fixture com 588 asserções
PASS; smoke PASS em 191,5 s (10/10 roteiros, zero alertas e cinco cenários,
incluindo zoom). Política de conteúdo PASS em 48,2 s. Build CTR inicial
PASS em 888,9 s; build final PASS em 23,1 s. Autoteste final GPU e perfil
de movimento PASS no Azahar: 29/29 quadros com circle pad pleno identificados
como movimento. O perfil agora usa `Camera::pos`, não `camera_spos`, e grava
`camera_position_version=2`. O analisador avisa da limitação nos perfis antigos.

Tentativas descartadas: o primeiro build PC compilou, mas recusou atestar
porque arquivos de diagnóstico mudaram durante a execução; repetido com a
árvore estável, passou. Na correção do perfil, faltou incluir a definição de
Vector3D no host CTR; a compilação apontou o erro, o include foi acrescentado
e o build final passou. Nenhuma tentativa falha conta como aprovação.

## Teste no aparelho e no PC

Pacote privado: `build/phase4-video/fractional-zoom-test.3dsx`. Copiar para
`SD:/3ds/pls-video/`, preservando `SD:/pls-video/preferences/`. Contém assets
do APK do usuário; não publicar, anexar ou enviar ao CI.

Sem `SD:/pls-video/map-nearest.flag`, vale o novo filtro. Criar esse arquivo
vazio e reiniciar volta ao modo anterior; apagar somente a flag e reiniciar
reativa o filtro. Remover `capture-check.flag` para jogar normalmente, pois
as capturas de diagnóstico perturbam a duração da sessão.

Testar mapa parado e rolando entre os inteiros, redução abaixo de 100%,
encaixe em 100%/200%, cursor oculto, um menu e uma partida. Observar nitidez,
cintilação, resposta dos controles e pausas. Salvar e sair pelo jogo; esperar
a saída terminar antes de retirar o SD. A gravação do perfil pode demorar:
a sessão anterior mostrou até 26,94 s. Copiar `video-N-frames.csv`,
`video-N-gc.csv` e `video-N-meta.txt` de `/pls-video/`. Reiniciar o FTP se a
listagem estiver antiga. SELECT não é necessário.

No PC: `python tools/dev.py run --save 50`. Q/W dão zoom, I/J/K/L movem a
câmera e as setas movem o cursor. Para comparar o modo anterior em PowerShell:

```powershell
$env:PLS_PC_MAP_NEAREST='1'
python tools/dev.py run --save 50
Remove-Item Env:\PLS_PC_MAP_NEAREST
```

O pacote novo ainda não foi testado fisicamente. O zoom e a correção do
diagnóstico permanecem em commits locais, sem push.

## Retorno do aparelho: calibração do autoteste

O pacote de diagnóstico executado no New 3DS XL mediu erro máximo 1 na
redução a 75%. No caso sintético 2× seguido de redução a 150%, os quatro
cantos e todos os alfas coincidiram exatamente; seis canais RGB interpolados
ultrapassaram 2, chegando a 5 em 255. Por exemplo, o esperado (128,128,0,255)
resultou em (131,123,0,255). No Azahar o erro foi zero.

O autoteste foi calibrado somente para os canais RGB de valor esperado 128
desse caso sintético de 150%: limite 5. Cantos, alfa, valores não interpolados
e o caso de 75% conservam o limite 2. A fixture testa os valores físicos e
rejeita erro 6, ausência de filtro, troca de cantos e corrupção de alfa.
Não é um limite garantido para todos os pixels do jogo. Precisão de
interpolação é uma hipótese compatível; o estágio exato da GPU ainda não
foi isolado.

Nenhum pixel produzido pelo renderer foi alterado. A diferença medida entre
PC/Azahar e aparelho permanece e passa a ser explícita no critério desse
autoteste; a alteração evita encerrar o programa por essa diferença conhecida.
Pacote local para novo teste: `build/phase4-video/zoom-calibrated-test.3dsx`.
Testar sem `map-nearest.flag`, exigir `PLS_VIDEO_SELF_CHECK=PASS`, conferir
título e mapa em escalas fracionárias. A validação física desse pacote continua
pendente; sem push.
