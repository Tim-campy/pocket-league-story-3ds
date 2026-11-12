# Benchmark no New 3DS — guia de execução

Este benchmark mede, no aparelho real, o que o emulador não reproduz:
velocidade do cartão SD no carregamento e tempo por frame do runtime com
backend nulo (sem vídeo nem áudio). Não é uma versão jogável. O executável não
contém assets; os assets vêm do seu APK, preparados localmente.

## O que o programa faz

1. Inicia o jogo com o **relógio real** e mede o carregamento até a tela de
   título: tempo total, abertura e leitura por recurso no cartão (média,
   máximo, MB/s) e quantas recargas foram servidas pela retenção.
2. Na tela de título, troca para o **relógio virtual** determinístico (início
   fixo, 1 ms por consulta, 50 ms por frame) e executa as entradas gravadas.
3. Mede duas janelas: **menu** (frames 191–420, gestão) e **partida**
   (frames 1201–1500). Para cada uma: tempo por frame (média, p95, máximo),
   coletas e maior pausa.
4. Grava tudo, com o modelo do console, em `sdmc:/pls-benchmark/result.txt`.

O orçamento é 50 ms por frame (`Main.OnUpdate`, `SetTargetFps(20)`).

## Requisitos

- New 3DS ou New 3DS XL com Homebrew Launcher (custom firmware).
- Cartão SD com ~60 MB livres.
- A pasta preparada no PC: `build/sd-benchmark/` (gerada a partir do seu
  APK; é privada, não a compartilhe nem a coloque no Git).

Para regenerar a pasta (opcional; já está pronta nesta máquina):

```powershell
python tools/prepare_arm11_sd.py --apk "CAMINHO_DO_SEU_APK" --image build/benchmark-arm11-1/null_game.3dsx --scenario suite --output build/sd-benchmark --asset-root build/ctr-assets-native-v1
```

A preparação confere o SHA-256 do APK, de cada asset e do executável, e
recusa uma pasta de saída existente.

## Passo a passo

1. Desligue o console e coloque o cartão SD no PC.
2. Se existir uma pasta `pls-benchmark` na raiz do cartão de uma execução
   anterior, mova-a para fora do cartão (guarde o `result.txt` antigo).
3. Copie **o conteúdo** de `build/sd-benchmark/` para a **raiz** do cartão.
   Depois da cópia o cartão deve ter:
   - `3ds/pls-benchmark/pls-benchmark.3dsx`
   - `pls-benchmark/` (com `assets/`, `preferences/`, `config.txt`,
     `replay.txt`, `windows.txt`, `virtual-clock.txt`, `private-manifest.json`)
4. Ejete o cartão com segurança, recoloque no console e ligue.
5. Abra o **Homebrew Launcher** e escolha **pls-benchmark**.
6. As telas ficam pretas ou com conteúdo antigo: não há vídeo. Não toque em
   nada. Aguarde cerca de **2 minutos** (≈15 s de carga + 1.500 frames a
   20 fps). O programa termina sozinho e volta ao Homebrew Launcher.
   - Se após 10 minutos não voltar, desligue o console segurando POWER; o
     arquivo parcial ainda é útil.
7. Desligue o console, coloque o cartão no PC.

## O que me devolver

O arquivo **`pls-benchmark/result.txt`** do cartão (texto, poucos KB).
Se possível, junte também `pls-benchmark/stdout.log` e
`pls-benchmark/stderr.log` (detalhe por frame). Não envie a pasta `assets/`
nem `preferences/`.

Informe também, se souber, a versão do sistema e do Luma.

## Como ler o resultado

```powershell
python tools/benchmark_report.py CAMINHO/result.txt
```

Linhas do arquivo:

| Linha | Conteúdo |
|---|---|
| `PLS_BENCH_MODEL` | `model` (0 3DS, 1 3DS XL, 2 New 3DS, 3 2DS, 4 New 3DS XL, 5 New 2DS XL), `new3ds` |
| `PLS_BENCH_LOAD` | frames e `boot_ns` até o título, `retention_hits` |
| `PLS_BENCH_LOAD_STAGE` | por etapa: contagem, tempo total, máximo, bytes (`catalog-open` = posicionar no pacote; `catalog-read` = leitura; `stream-extent` = consulta de arquivo de áudio/fonte) |
| `PLS_BENCH_CLOCK` | relógio virtual instalado na âncora do título |
| `PLS_BENCH_WINDOW` | por janela: frames, formulário, média/p95/máximo em ms, coletas, maior pausa |
| `PLS_BENCH_MEMORY` | `malloc` usado e livre, região de aplicação, objetos do coletor |
| `PLS_BENCH_STATUS` | `complete`, `incomplete` ou `failed <motivo>` |

## Referência no emulador (não é hardware)

Azahar 2126.2, CPU 100%, mesma imagem
(`9291da1c…` no cartão; ver `private-manifest.json`):

| Medida | New | Old |
|---|---|---|
| Até o título | 13,77 s | 13,81 s |
| Leitura do pacote | 4,75 MB/s | 4,74 MB/s |
| Menu (230 frames): média / p95 / máx. | 7,09 / 6,93 / 95,2 ms | 7,12 / 6,97 / 96,7 ms |
| Partida (300 frames): média / p95 / máx. | 14,88 / 16,55 / 17,3 ms | 14,33 / 16,29 / 17,0 ms |
| `malloc` no fim | 47,5 MB | 47,5 MB |

O Azahar não reproduz a velocidade de CPU nem do cartão do aparelho; só o
resultado do console decide.
