# Pocket League Story — port para Nintendo 3DS

**Port não oficial, sem afiliação com a Kairosoft. Para usar, é preciso possuir o
jogo e fornecer o próprio APK. Este repositório não distribui assets, binários
originais do jogo ou do Unity, saves nem capturas de tela.**

Alvo principal: **New Nintendo 3DS XL**. O 3DS original é uma meta secundária.

## Estado atual

A **versão fiel** foi congelada em 2026-11-23 (tag `v1.0.0-faithful`; nota da
versão em [docs/release-notes/v1.0.0-faithful.md](docs/release-notes/v1.0.0-faithful.md)).
Desde então `src/game/` é código-fonte mantido à mão e o tradutor está arquivado.
Próximo passo proposto: backend 3DS com vídeo e som (Fase 4,
[docs/plan-next-phases.md](docs/plan-next-phases.md)).

- **PC:** o jogo inteiro roda em build de diagnóstico. Os roteiros
  de `tests/routes/` cobrem título, saves, gestão, instalações, partida completa,
  temporada, carreira, novo jogo, toque e diálogos. Esse build serve ao desenvolvimento, não à distribuição.
- **3DS:** o build para o console usa um **backend nulo** (sem vídeo nem áudio).
  Ele serve de benchmark do runtime e do coletor no aparelho real, medido no
  New 3DS XL dentro do orçamento de 50 ms por frame. Ainda não é jogável no console.
- **Duas telas e controles (Fase 3):** existe um protótipo no PC
  ([docs/design/phase3-prototype.md](docs/design/phase3-prototype.md)). Vídeo e
  áudio no 3DS ficam para a Fase 4.

O estado de cada critério do congelamento, com números e pendências, ficou registrado
em [PROGRESS.md](PROGRESS.md) (livro-razão da Fase 2, congelado). A auditoria do
congelamento está em [docs/notes/freeze-audit.md](docs/notes/freeze-audit.md).

## Como funciona

1. **Referência:** `reference/` é um submódulo somente leitura de
   [pocket-league-story-reconstruction](https://github.com/Tim-campy/pocket-league-story-reconstruction),
   tag **v1.0.0-csharp-reconstruction**, commit
   **c7d097a847ca1f1a8e5fb7141ff11d338f5915c4**. Ele contém o C# reconstruído
   e verificado do jogo original (Unity 5.3.4f1, Mono).
2. **Tradutor** (`tools/translator-archived/`, Roslyn; arquivado no congelamento): converte esse C# em C++17, preservando
   a semântica do C# e do Mono: inteiros com estouro definido, ordem de avaliação,
   exceções, verificações de nulo e de limites, e ponto flutuante igual ao do
   Android ARM. Há dois modos de saída:
   - o **canônico**, usado até aqui;
   - o **legível**, com nomes e tipos do C#, que vira o código mantido depois
     do congelamento.

   A amostra do modo legível fica em [docs/readable-sample/](docs/readable-sample/).
3. **Código do jogo** (`src/game/`): a última saída do tradutor, em modo legível, é
   desde o congelamento o código-fonte do jogo, mantido à mão
   ([docs/maintaining-game-code.md](docs/maintaining-game-code.md)).
4. **Plataforma** (`src/kairo/`): reimplementação da KairoLibrary e da parte usada
   do Unity, com três backends: nulo (medição), SDL2 (PC) e CTR (3DS).
5. **Runtime** (`src/runtime/`, `src/kairo/common/`): strings UTF-16, arrays,
   exceções, tipos numéricos do C#, um coletor de lixo próprio por rastreamento,
   e a colação e a formatação numérica do Mono.
6. **Serviços Android removidos** com políticas offline: registro local, cobrança
   indisponível (sem conceder itens pagos e sem remover estado do save), anúncios
   removidos. Detalhes em [docs/design/services.md](docs/design/services.md) e
   [docs/changes-from-original.md](docs/changes-from-original.md).

## Requisitos

- O **APK do jogo**, de sua própria cópia. A identidade esperada (SHA-256) está em
  [docs/apk.md](docs/apk.md). As ferramentas nunca baixam, procuram ou indicam onde
  obter o jogo; elas recusam um APK com outro hash.
- Windows com MSVC, CMake e Ninja (PC); devkitARM e libctru (3DS); Python 3.
  As dependências de terceiros ficam em `build/deps/`, com versão, hash e licença.
  O passo a passo está em [docs/toolchain.md](docs/toolchain.md).

```powershell
git clone --recurse-submodules https://github.com/Tim-campy/pocket-league-story-3ds.git
Set-Location pocket-league-story-3ds
python tools/check_reference.py
```

Os assets são extraídos e convertidos localmente a partir do APK (imagens sem
perda, fontes rasterizadas do TTF do APK, áudio em streaming):

```powershell
python tools/extract-assets --apk 'CAMINHO_DO_SEU_APK' --extract
python tools/convert-assets --apk 'CAMINHO_DO_SEU_APK'
```

As saídas ficam em `assets/` e `build/`, ignorados pelo Git.

## Benchmark no New 3DS

O guia completo, do build à leitura do resultado em `sdmc:/pls-benchmark/`, está
em [docs/benchmark-hardware.md](docs/benchmark-hardware.md). O `.3dsx` não contém
assets; a pasta do cartão é preparada a partir do seu APK.

## Regras de conteúdo

`assets/`, `build/`, `data/`, formatos originais ou convertidos, saves, capturas e
binários são ignorados e recusados pelo CI, assim como arquivos acima de
2.000.000 bytes. Os textos literais e as tabelas constantes do C# reconstruído
ficam no C++ gerado, por decisão registrada; os textos e dados dos assets vêm só
do pipeline local. Antes de um commit:

```powershell
python tools/check_repository.py --staged
```

As regras completas do projeto estão em [AGENTS.md](AGENTS.md).

## Documentação

- [Contrato do tradutor](docs/translator.md) e [subconjunto de C#](docs/csharp-subset.md)
- [Manutenção do código do jogo](docs/maintaining-game-code.md)
- [Fronteira da KairoLibrary](docs/boundary.md) e [assets](docs/assets.md)
- [Cobertura](docs/coverage-plan.md) e [métodos nunca alcançados](docs/coverage-never-reached.md)
- [Mudanças em relação ao original](docs/changes-from-original.md) e [backlog](docs/backlog.md)
- Relatórios técnicos em [docs/notes/](docs/notes/)

## Licenças

O código do port é original ou fruto de engenharia reversa. A parte LGPL v2 da
colação do Mono (tabelas auxiliares) fica separada, e os componentes de terceiros
e suas licenças estão em [THIRD_PARTY.md](THIRD_PARTY.md).
