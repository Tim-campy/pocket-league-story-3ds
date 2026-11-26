# Proposta para AGENTS.md — não aplicada

Durante o bloco de vídeo da Fase 4, ampliar temporariamente a seção 2 para
`src/kairo/api/`, `src/kairo/platform/{ctr,sdl}/`, `src/main/`, CMakeLists.txt e
ferramentas ARM necessárias. Acrescentar os encaixes expressamente aprovados em
SurfaceManagerBase::Draw, graphics.cpp, mesh.cpp, offscreen.cpp e
image_lifetime.cpp e asset_catalog.cpp, cada um em commit próprio. Incluir a
condição de compilação de resource_load_trace.hpp para medir o boot de vídeo;
o medidor de assets fica desligado após o título e seu custo é comparado ligado
e desligado. Preservar o caminho CPU e os
limites de runtime/coletor/generated/regras/save.

Na seção 1, registrar a câmera independente publicada e a primeira entrega de
vídeo aprovada no New 3DS XL: título na GPU, barra de rótulos inferior tocável,
entrada CTR, ROMFS privado e autoteste GPU. Atualizar os trechos que dizem que
o 3DS só tem backend nulo ou que câmera independente ainda não existe.
Gestão e partida com vídeo entram como segunda entrega em validação, com alvos
de trabalho na VRAM e resultados lineares autorizados após inventário; som,
teclado do sistema, idioma do console e menus na inferior continuam pendentes.

Na seção 10, explicitar comparação das duas telas no PC, perfil separado de
lógica/desenho CPU/espera GPU, descarte de texturas apenas em ponto seguro da
thread de desenho e conjunto completo de roteiros antes do push. A primeira
entrega foi aprovada; a segunda para antes do push para teste de gestão e partida
no New 3DS XL. Se exceder 50 ms por quadro ou 150 ms por transição, apresentar
a decomposição e opções antes de otimizar fora do escopo autorizado.
Ao terminar o bloco, retirar esta ampliação temporária do papel.

Comando implementado para acrescentar à seção 5 (PowerShell, assets nativos
autenticados já preparados em `build/ctr-assets-native-v1`):

```powershell
$videoLocal = Get-Content build/dev-local.json -Raw | ConvertFrom-Json
python tools/build_arm11_null.py --apk $videoLocal.apk --frozen --video-assets build/ctr-assets-native-v1 --output build/phase4-ctr
```

O resultado privado é `build/phase4-ctr/ctr_video.3dsx`, com ROMFS do APK do
usuário. Abrir esse arquivo pelo menu do Azahar ou copiar para o Homebrew
Launcher conforme `docs/notes/phase4-video-device-test.md`. Nenhum pacote com
assets deve ir ao Git, CI ou distribuição. `dev.py arm` continua construindo
o benchmark nulo; não foi redefinido como build de vídeo.

O autoteste da GPU roda automaticamente ao iniciar esse executável, no Azahar
ou no aparelho. Aceite: `PLS_VIDEO_SELF_CHECK=PASS` em
`/pls-video/stderr.log`; falha impede a entrada no jogo. Os testes cobrem clear,
primitiva sólida, textura, clip, alfa, cinza, profundidade, amostragem de alvo,
leitura de pixels e descarte adiado. Manter essa verificação permanente.
