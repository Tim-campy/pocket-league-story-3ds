# Estáticos sem raiz entre unidades de tradução (2026-11-15)

## Sintoma

Rota `tests/routes/touch-title.route` (toque no ícone de idioma do título),
mesmo save (tentativa 68), mesmo executável lógico:

| Tentativa | Resultado |
|---|---|
| 69, 71 | `Main.OnUpdate` captura `NullReferenceException` vinda de `LanguageForm.Update`; diálogo de erro "An error has occurred." |
| 72 | idem, com `IndexOutOfRangeException` (pilha de criação: `LanguageForm.Update <- Main.OnUpdate`) |
| 73 | sem falha; `LanguageForm.Update` completa duas vezes |

Resultado diferente para a mesma entrada: memória liberada ainda em uso.

## Causa

Tipos da KairoLibrary cujos membros são traduzidos em duas unidades: a
unidade portável (`src/kairo/common/generated`) e a do jogo (`src/game`), que
emite os membros que só o jogo usa. O armazenamento dos estáticos usados só por
esses membros (`static T cs_<hash>_value{};`) fica na unidade do jogo, mas o
`GcRootProvider` do tipo é criado no inicializador de tipo
(`cs_init_<hash>`), que pertence à unidade portável e só rastreia os campos de
lá. Esses estáticos não eram raízes do coletor.

Afetados (estáticos de referência sem raiz): `kairo.unity.util.Language` (5,
inclusive `systemLangPackFiles_`), `kairo.unity.util.Log` (1),
`kairo.unity.io.AssetReader` (1). Depois de uma coleta, `languages_` era
construído a partir de um `string[][]` já liberado.

## Correção (tradutor)

`translator/Translator.cs`: estáticos declarados numa unidade que não inicializa
o próprio tipo recebem, na mesma unidade, um provedor
`static pls::cs::GcRootProvider cs_init_<hash>_unit_roots=...` (forma de
inicialização por cópia, com `->void` na lambda, para o separador de blocos de
`EmissionUnits.cs` tratar a declaração como um bloco só). O registro do coletor
é preguiçoso, então a ordem de inicialização estática não importa. `src/game/`
regenerado: quatro unidades ganharam o provedor (uma só com estáticos escalares).

Teste de regressão: `tests/repository/test_generated_static_roots.py` falha se
algum estático não escalar do código gerado (jogo e portável) não aparecer num
`trace_value` da mesma unidade.

## Diagnóstico acrescentado (só builds de diagnóstico)

- `pls::cs::exception_site_hook` (`semantic_runtime.hpp`): instalado por
  `pc_main.cpp` no build de diagnóstico; a exceção guarda a pilha de métodos
  gerenciados do momento da criação, mostrada em `last_caught` (`[site: ...]`).
  No build normal o gancho é nulo.
- `throw_array_bounds(index,length)`: com o gancho instalado, acrescenta índice
  e tamanho ao local; a exceção gerenciada não muda (mensagem padrão).
- `tools/build_pc.py --trace-method <DocID>`: imprime a pilha na primeira
  chamada do método, separado dos alertas de alcançabilidade.

## Pendente

- A tentativa 70 (com `--trace-method` em `Dialog.Show`) travou no mesmo
  ponto, em vez de lançar exceção. Causa `UNKNOWN`; reavaliar com a correção.
