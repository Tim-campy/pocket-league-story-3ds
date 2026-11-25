# Proposta para AGENTS.md — não aplicada

Durante o bloco de vídeo da Fase 4, ampliar temporariamente a seção 2 para
`src/kairo/api/`, `src/kairo/platform/{ctr,sdl}/`, `src/main/`, CMakeLists.txt e
ferramentas ARM necessárias. Acrescentar os encaixes expressamente aprovados em
SurfaceManagerBase::Draw, graphics.cpp, mesh.cpp, offscreen.cpp e
image_lifetime.cpp e asset_catalog.cpp, cada um em commit próprio. Preservar o caminho CPU e os
limites de runtime/coletor/generated/regras/save.

Na seção 1, registrar a câmera independente já publicada e o bloco de vídeo em
andamento. Não declarar GPU, entrada CTR ou equivalência PC concluídos antes
dos respectivos testes. Na seção 5, acrescentar os comandos reais do build de
vídeo, preparo do SD e execução no Azahar somente depois de implementados e
testados; não apresentar nomes propostos como comandos disponíveis.

Na seção 10, explicitar comparação das duas telas no PC, perfil separado de
lógica/desenho CPU/espera GPU, descarte de texturas apenas em ponto seguro da
thread de desenho e conjunto completo de roteiros antes do push. A primeira
entrega termina no título; gestão/partida dependem do teste no New 3DS XL.
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
