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
- A pasta preparada no PC: `build/sd-benchmark-v6/` (v6, executável
  `68634525…`; gerada a partir do seu
  APK; é privada, não a compartilhe nem a coloque no Git).

Para regenerar a pasta (opcional; já está pronta nesta máquina):

```powershell
python tools/prepare_arm11_sd.py --apk "CAMINHO_DO_SEU_APK" --image build/benchmark-arm11-6d/null_game.3dsx --scenario suite --output build/sd-benchmark-v6 --asset-root build/ctr-assets-native-v1
```

A preparação confere o SHA-256 do APK, de cada asset e do executável, e
recusa uma pasta de saída existente.

## Passo a passo

1. Desligue o console e coloque o cartão SD no PC.
2. Se existir uma pasta `pls-benchmark` na raiz do cartão de uma execução
   anterior, mova-a para fora do cartão (guarde o `result.txt` antigo).
3. Copie **o conteúdo** de `build/sd-benchmark-v6/` para a **raiz** do cartão.
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
| `PLS_BENCH_COLLECTIONS` | (v6) por janela e tipo — `volume`, `transition` (tela principal), `loading`, `explicit` (`JSystem.Gc` do fonte): quantidade, total, maior pausa |
| `PLS_BENCH_STABLE` | (v6) maior frame fora das coletas toleradas (transição e carregamento); coletas por volume e explícitas contam como jogo estável |
| `PLS_BENCH_GC` | (v6) uma linha por coleta nas janelas: frame, tipo, pausa, tempo do frame e origem (`Init/Finish <formulário>` ou tela) |
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

## Resultado do v5 em hardware (New 3DS XL, 2026-11-13, três execuções)

| Medida | Execução 1 | Execução 2 | Execução 3 |
|---|---|---|---|
| Até o título | 14,23 s | 14,32 s | 14,11 s |
| Menu: média / p95 / máx. | 6,83 / 6,53 / 113,2 ms | 7,02 / 6,74 / 115,2 ms | 6,91 / 6,63 / 113,4 ms |
| Coletas no menu (frame: pausa / frame) | 361: 105,6/113,2; 397: 45,0/52,6; 415: 40,4/63,2 | 361: 107,7/115,2; 397: 47,8/55,4; 415: 41,2/64,0 | 361: 105,9/113,4; 397: 45,6/53,0; 415: 40,2/62,8 |
| Menu: maior frame sem coleta | 10,8 ms | 11,0 ms | 10,9 ms |
| Partida: média / p95 / máx. | 8,87 / 9,57 / 25,9 ms | 12,57 / 13,21 / 15,7 ms | 11,87 / 13,45 / 15,2 ms |
| Coletas na partida | 0 | 0 | 0 |

A previsão a partir do Azahar (~105 ms) se confirmou. Na execução 1 a janela
de partida terminou a partida antes do fim (formulários 2 e 4 na janela),
por isso a média mais baixa; a carga usa relógio real e o estado na âncora
varia.

**Classificação (v6, Azahar):** as três coletas do menu são **explícitas**,
do próprio fonte: `SubForm.Finish()` chama `JSystem.Gc()`
(`SubForm.cs:7428`), isto é, cada sub-janela fechada faz uma coleta completa.
Não são transições de tela principal nem coletas por volume.

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
