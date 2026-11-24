# Amostra do código legível (encerrada)

A amostra aprovada em 2026-11-23 era uma cópia de três classes do código do jogo.
Desde o congelamento (`v1.0.0-faithful`) o código do jogo **é** o código legível, e
esta pasta não guarda mais cópias, para não haver duas versões do mesmo código.

- O código: [`src/game/`](../../src/game/) (jogo) e
  [`src/kairo/common/generated/`](../../src/kairo/common/generated/) (KairoLibrary traduzida).
- Para revisão externa, gere um pacote com o código copiado sem edição, com caminho,
  linhas e commit de cada trecho:

  ```
  python tools/make_review_bundle.py data.SponsorData form.TitleForm.hpp Team::Update M:game.Team.SetPosFPos(game.Player,kairo.unity.m3d4.util3d.Vector3D)
  ```

  A saída vai para `build/review/` (fora do Git); limite padrão de 150 KB (`--max-kb`).
- Como ler e editar esse código: [`docs/maintaining-game-code.md`](../maintaining-game-code.md).
- A amostra como foi aprovada continua no histórico do Git (commit `c8cd1ed`).
