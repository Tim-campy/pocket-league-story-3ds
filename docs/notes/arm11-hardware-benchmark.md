# Benchmark sem vídeo em hardware

Este alvo mede o runtime e a API com backend nulo. Não implementa o backend
gráfico do port, não decide telas/controles e não é uma versão jogável. O
executável não contém assets. As entradas, os assets e o autosave são locais.

## Preparação

1. Execute o pipeline de assets com seu próprio APK, cujo SHA-256 está em
   `docs/apk.md`. O catálogo necessário é `assets/converted/catalog.idx`.
2. Gere um snapshot autenticado do diagnóstico e compile o alvo `null_game`
   da configuração ARM11 em Release:

   ```powershell
   python translator/diagnostic_snapshot.py --output build/benchmark-source
   python tools/build_arm11_null.py --apk "CAMINHO_DO_APK_LOCAL" --snapshot build/benchmark-source
   ```

   O fonte canônico deve estar regenerado e aprovado na compilação antes de
   criar o snapshot. O build verifica o APK, o manifest e que os fontes não
   mudaram durante a compilação, registrando `build-proof.json`. Por padrão,
   utiliza `-O2`, remoção de seções não usadas e nenhum contador de métodos,
   alocações ou perfil. Para esta medição mantenha desativados
   `PLS_ALLOCATION_PROBE`, `PLS_REPORT_ALLOCATION_FAILURE` ou
   `PLS_DIAGNOSTIC_BUILD`, além de `PLS_MEMORY_CATEGORIES`. Preserve o hash e o recibo de fontes do build usado.
   Uma variante com rastreamento de falhas serve para diagnóstico, não para
   preencher a tabela de tempos.

   As opções `--optimization Os`, `--lto` e `--keep-unused-sections` permitem
   medir tamanho. Cada build deve ter seu resultado e hash preservados antes
   de reutilizar a pasta. `--memory-categories` é uma execução separada, que
   inventaria intervalos conhecidos de payload; não fornece tempos de CPU.
3. Prepare um diretório novo para cada cenário:

   ```powershell
   python tools/prepare_arm11_sd.py --apk "CAMINHO_DO_APK_LOCAL" --image build/null-arm11/null_game.3dsx --scenario menu --output build/sd-menu
   python tools/prepare_arm11_sd.py --apk "CAMINHO_DO_APK_LOCAL" --image build/null-arm11/null_game.3dsx --scenario match --output build/sd-match
   ```

   O script exige os saves locais dos diagnósticos 25/31 e os recibos das
   execuções 34/35. Eles não vêm no Git. Não substitua esses saves por arquivos
   obtidos de terceiros. Sem eles, é necessário reproduzir o fluxo local que
   os gera antes de comparar com a baseline.

4. Copie o conteúdo de **um** diretório preparado para o SD: `3ds/` e
   `pls-benchmark/`. Guarde uma cópia dos saves e resultados anteriores antes
   de substituir um cenário. O empacotador recusa sobrescrever uma pasta de
   preparação existente.

## Execução e coleta

Abra `pls-benchmark.3dsx` pelo Homebrew Launcher. Não há apresentação gráfica
nem áudio. O programa lê as seis linhas de `pls-benchmark/config.txt`, carrega
o autosave e executa as entradas de `replay.txt`.

O menu mede frames **661–960**; a partida mede **1201–1500**. São 300 frames
por cenário, após aquecimento. O fim esperado contém 300 registros
`PLS_NULL_FRAME` em `stdout.log` e os dois marcadores `PLS_NULL_WINDOW` em
`stderr.log`. Uma exceção, saída incompleta ou ausência desses marcadores
invalida a execução. Não use o tempo de carregamento como tempo de frame.

Copie os dois logs e `private-manifest.json` para uma pasta local de resultados
identificada pelo aparelho e cenário. Preserve também a identificação do
modelo, versão do sistema/Luma e hash do `.3dsx`. Esses dados complementam a
identificação automática quando ela estiver validada no executável.

O executável registra `PLS_NULL_ARM_MODEL` usando `CFGU_GetSystemModel` e
`APT_CheckNew3DS`, incluindo os códigos de resultado. Valor 255 ou retorno
de erro não identifica o aparelho. `speedup_requested=1` registra a solicitação
ao sistema; não comprova clock efetivo de 804 MHz no emulador/hardware.

Os códigos de modelo de `libctru 2.7.1` são: 0 = 3DS, 1 = 3DS XL,
2 = New 3DS, 3 = 2DS, 4 = New 3DS XL e 5 = New 2DS XL.

O orçamento nominal de 50 ms vem de `main.Main.OnUpdate`, que chama
`SetTargetFps(20)` no caminho normal (`reference/src/Assembly-CSharp/main/Main.cs`,
linha 93). O mesmo método contém um caminho condicional de 120 fps; não se
deve usar esse caminho de teste para redefinir o orçamento normal.

No ARM11, `svcGetSystemTick` mede tempo decorrido: o campo histórico `cpu_ns`
não significa CPU agendada como na análise ETW do PC. `PLS_NULL_MEMORY` nessa
plataforma representa payload do alocador, não RSS; os campos detalhados estão
em `PLS_NULL_ARM_MEMORY`. Não misture essas grandezas.

## Estado de validação

O empacotador verifica hashes e possui testes sintéticos para payload alterado,
escape de diretório, binário original e sufixo inválido. Isso não comprova uma
execução no hardware. O primeiro frame do benchmark ARM11 ainda está em
investigação; identificação automática do modelo, atribuição completa de
memória e tempos dos dois perfis permanecem **UNKNOWN** neste ponto da rodada.
Não há medição definitiva de velocidade de hardware a partir do Azahar.
