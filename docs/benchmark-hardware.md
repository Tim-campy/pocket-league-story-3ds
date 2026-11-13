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
- A pasta preparada no PC: `build/sd-benchmark-v5/` (v5, executável
  `72b3a5f5…`; gerada a partir do seu
  APK; é privada, não a compartilhe nem a coloque no Git).

Para regenerar a pasta (opcional; já está pronta nesta máquina):

```powershell
python tools/prepare_arm11_sd.py --apk "CAMINHO_DO_SEU_APK" --image build/benchmark-arm11-5/null_game.3dsx --scenario suite --output build/sd-benchmark-v5 --asset-root build/ctr-assets-native-v1
```

A preparação confere o SHA-256 do APK, de cada asset e do executável, e
recusa uma pasta de saída existente.

## Passo a passo

1. Desligue o console e coloque o cartão SD no PC.
2. Se existir uma pasta `pls-benchmark` na raiz do cartão de uma execução
   anterior, mova-a para fora do cartão (guarde o `result.txt` antigo).
3. Copie **o conteúdo** de `build/sd-benchmark-v5/` para a **raiz** do cartão.
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

## Resultado em hardware (New 3DS XL, 2026-11-12)

Executável `a1175e80…` (v4), console modelo 4 (`new3ds=1`), data do sistema
corrigida para o dia da medição. Uma execução completa.

| Medida | Valor | Orçamento |
|---|---|---|
| Até o título | 14,23 s (104 frames) | — |
| Leitura do cartão | 3,53 MB/s; posicionamento médio 1,79 ms (máx. 27,5 ms) | — |
| Maior carga de imagem | 246 ms (retenção: 116 acertos) | fatia de 150 ms |
| Preparo de stream | média 11,5 ms | — |
| Menu (230 frames): média / p95 / máx. | 7,05 / 6,52 / 143,4 ms | 50 ms |
| Coletas no menu (maior pausa) | 6 (102,4 ms) | — |
| Partida (300 frames): média / p95 / máx. | 12,05 / 12,70 / 13,03 ms | 50 ms |
| Coletas na partida | 0 | — |
| `malloc` no fim | 47,5 MB | — |

Backend nulo: sem vídeo nem áudio. Execuções anteriores no console
falharam por falhas de plataforma corrigidas depois (gravação do save no SD,
que recusa renomear sobre um arquivo existente).

## v5 (2026-11-13): o que mudou e previsão no Azahar

Executável `72b3a5f5…`. Duas mudanças de plataforma, sem tocar na lógica do
jogo:

- A coleta solicitada por mudança de formulário passa a ocorrer só quando o
  formulário é janela principal (`CheckMainWindow()`, a mesma regra que o
  `FormManager` original usa para desenhar). Sub-janelas e diálogos
  (`SubForm`, `BillingForm`, `HttpForm`, `LanguageForm`) ficam para a coleta
  por volume. `JSystem.Gc` explícito e os pontos de carregamento seguem iguais.
- Limiar por volume no 3DS: 2 → 4 MiB (heap estável medido após o título:
  ~16,5 MB retidos; folga de `malloc` ~15 MB).

| Azahar, New, suíte | v4 (rastreio) | v5 |
|---|---|---|
| Coletas na janela de menu | 6 | 3 |
| Tempo total de coleta no menu | 185 ms | 127 ms |
| Maior pausa no menu | 68,9 ms | 71,4 ms |
| Menu: máx. por frame | 98,7 ms | 78,1 ms |
| Partida: média / máx. | 12,6 / 15,4 ms | 14,1 / 16,1 ms |
| Até o título | 13,34 s | 13,38 s |

A maior pausa restante é a primeira coleta da janela de menu: uma transição
de tela real, com ~10 mil objetos mortos para varrer e ~25 mil vivos para
marcar. No v4 a razão hardware/Azahar dessa pausa foi ~1,5 (102,4 / 68,9 ms);
a previsão para o v5 no console é ~105 ms, **acima de 50 ms**. A redução de
frequência não basta sozinha; a correção é o custo por coleta (reforma do
coletor, `docs/notes/gc-reform-plan.md`). O v5 serve para confirmar isso no
aparelho e medir a razão com mais uma amostra.

## Referência no emulador (não é hardware)

Azahar 2126.2, CPU 100%, mesma imagem (`ed1729a1…`; ver
`private-manifest.json` no cartão):

| Medida | New | Old |
|---|---|---|
| Até o título | 13,46 s | 13,37 s |
| Acertos da retenção | 113 | 112 |
| Leitura do pacote | 4,75 MB/s | 4,75 MB/s |
| Menu (230 frames): média / p95 / máx. | 7,08 / 6,90 / 95,6 ms | 7,10 / 6,93 / 97,5 ms |
| Partida (300 frames): média / p95 / máx. | 14,70 / 16,41 / 17,0 ms | 14,07 / 16,67 / 84,9 ms |
| Coletas na partida (maior pausa) | 0 | 1 (72,6 ms) |
| `malloc` no fim | 47,5 MB | 46,8 MB |

A fase de carga usa o relógio real; o estado do heap na âncora pode variar
entre execuções e deslocar o momento das coletas nas janelas.

Teste de E/S lenta (diagnóstico, 500 ms artificiais por leitura): título em
451 s, 379 acertos da retenção, menu completo, `malloc` máximo 44 MB.

O Azahar não reproduz a velocidade de CPU nem do cartão do aparelho; só o
resultado do console decide.
