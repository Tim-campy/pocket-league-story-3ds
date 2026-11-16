# Critério 4: tentativa do APK original no emulador Android (2026-11-16)

Pedido: uma tentativa do APK original no emulador Android, com o resto da
máquina fechado; se não couber, registrar e parar.

## Ambiente

- Máquina: 7,9 GB de RAM; 2,1–2,3 GB livres antes de cada etapa (Chrome e Steam
  fechados; sem outro processo pesado).
- Emulador privado já usado no oráculo numérico: `build/deps/android-arm-emulator`,
  `emulator-arm.exe` 25.2.5-3567187, imagem `android-21-armv7-r4` (armeabi-v7a,
  Cortex-A8), AVD novo em `build/android-emulator-original-N/` (ignorado pelo Git).
- APK local autenticado (SHA-256 `d557af6b…211e8`), verificado pelo script antes
  de qualquer passo. Nada do APK, das capturas ou do logcat entra no Git.

## Resultado: não coube

| Execução | GPU | Resultado |
|---|---|---|
| 1 | `on` no AVD (`hw.gpu.mode=on`) | o emulador recusou a configuração em 12 s (erro do script; o APK não foi instalado) |
| 2 | `host` | o pacote privado não tem `libOpenglRender`: "Could not initialize OpenglES emulation"; o emulador sai em 10 s |
| 3 | `off` (renderização no convidado), 768 MB no convidado | o emulador iniciou e foi encerrado pelo sistema por falta de memória durante o boot, antes da instalação |

O APK original não chegou a ser instalado nem executado. Conforme a instrução,
parei aqui.

## Observações

- Unity 5.3.4 exige OpenGL ES 2.0. Mesmo que o boot coubesse, com `-gpu off` o
  emulador desta versão oferece só a renderização do convidado; se ela atende
  GLES 2.0 para o Unity: `UNKNOWN`.
- O emulador 25.2.5 tenta uma verificação de atualização pela rede ao iniciar
  ("UpdateCheck: failed to get the latest version"); não foi bloqueada nesta
  tentativa nem nas anteriores do oráculo numérico.
- Caminhos para uma próxima tentativa, se o usuário quiser: aparelho Android
  real (já usado em 9/11 com autorização), ou um emulador com GPU do host e mais
  memória livre (por exemplo, sem esta sessão aberta).
