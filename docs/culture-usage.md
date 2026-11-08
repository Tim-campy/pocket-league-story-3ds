# Medição da colação histórica

Produção: `tools/inventory_culture.py --original-managed <diretório externo>`.
Resultados completos, por símbolo/overload e proveniência sem valores:
`config/culture-usage.json` e `config/culture-usage.csv`. O Roslyn vincula as
260 unidades C# contra os metadados históricos: 25.436 invocações, zero erros
semânticos e zero invocações sem símbolo. O classificador tem 16 casos próprios.

| Assembly | Chamadas culturais | Métodos com chamadas diretas |
|---|---:|---:|
| Assembly-CSharp | 15 | 12 |
| KairoLibrary | 89 | 49 |
| Total | 104 | 61 |

São 65 buscas/prefixos/sufixos, 29 conversões de caixa e 10 comparações.
96 chamadas usam `CurrentCulture` implicitamente, sete pedem
`CurrentCultureIgnoreCase` e uma escolhe entre essas duas formas. Não há
atribuição a `CurrentCulture`, `CurrentUICulture` ou seus defaults no fonte.
A linguagem escolhida em `Language` não determina a cultura CLR.

Outras 24 chamadas (17 na KairoLibrary, sete no jogo) usam
`String.IndexOf(string)` sem início/contagem: esse overload é **ordinal no
Mono histórico**, embora o overload com início seja cultural. São listadas
separadamente e não entram nas 104. `Contains(string)`, buscas por `char`,
igualdade comum e comparação ordinal também não entram. Evidência:
[String.cs histórico](https://github.com/mono/mono/blob/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/System/String.cs#L1182),
hash registrado no JSON. A primeira implementação que confundia os overloads
falhou em seis dos 120 casos; a distinção corrigida passa no corpus ampliado.

## Dados e caminhos observáveis

| Família de dados | Consumidor e evidência no fonte reconstruído |
|---|---|
| Nomes de jogadores e técnicos | `PlayerData.Load(string)` separa as colunas e preenche `name_`/`name2_`; `FanBonusData` combina esses nomes com mensagens por `StringUtil.Replace`, que alcança a busca cultural com início no separador. Desenho de nomes passa também por `Graphics.DrawString` e `Language.TranslateText`. |
| Nomes de times e entrada do usuário | `TeamData.Load(string)` preenche nomes; `SubForm.Update`/fluxo de edição cria `MainPanel`; `MainPanel.ComponentAction` testa sufixo com o overload cultural. Não é um domínio limitado a ASCII. |
| Pacotes de idioma e marcação de texto | `Language.MakeTextTable`, `LoadLanguagePack`, `TranslateText`, `_translateText`, `GetTitle` e `TextLayout._makeTextBlocks`: prefixos, tags, identificadores de idioma, nomes de arquivos e texto proveniente dos assets. |
| Ajuda, mensagens e resposta de rede | `AppData.Draw_helpMessage` usa `IndexOf(string,start)`; `BootForm.UpdateScoreFromNetwork` testa prefixo/sufixo. A remoção da rede não muda a semântica dos utilitários compartilhados. |
| Nomes de arquivo | `Storage._SearchHeapFile` compara strings com `CompareTo`. |
| Argumentos genéricos | `StringEx.EqualsIgnoreCase`, `SecureString.CompareTo`, `StringUtil.Split` e substituições recebem strings arbitrárias; a análise não presume conteúdo ASCII. |

A origem de cada argumento no CSV preserva nomes de parâmetros/campos/retornos,
nunca o conteúdo dos assets. O grafo estático encontra 1.366 métodos que podem
alcançar uma chamada cultural. Isso é alcance potencial, não cobertura de
execução; dispatch virtual, callbacks e reflexão podem adicionar caminhos.

## Redução adotada

Não foi encontrado uso de `SortKey`, `StringComparer`, coleções ordenadas,
`Array.Sort` ou `List.Sort` no corpus. O port conserva comparação, busca,
prefixo/sufixo e conversão de caixa. Não emite a tabela Unicode numérica nem a
API pública de chaves de ordenação. Não reduz para uma cultura: as culturas
efetivas do Android e do futuro 3DS são `UNKNOWN`, e os pacotes/nomeações são
multilíngues. A cultura pode ser fornecida pelo host, independentemente dos
assets; os tailorings CJK continuam presentes.

Payload somente leitura: sete recursos MIT/X11, **337.358 bytes**, mais
**46.832 bytes** de dados auxiliares LGPL (bitmap de categoria 8.192 e caixa
38.640), total **384.190 bytes**. A cópia de tailoring usa adicionalmente
6.284 bytes UTF-16 no heap, além das estruturas de índice. Não são medições de
RSS, padding do executável nem memória do 3DS. Fontes, licenças e hashes em
`THIRD_PARTY.md`, `docs/toolchain.md` e `docs/notes/phase2-mono-collation.md`.

Os 120 casos originais continuam como regressão; o total de produção é
615.648 observações diferenciais aprovadas, incluindo oito culturas e os
65.536 code units do BMP. O oráculo é código próprio executado no Mono SDK;
nenhuma DLL de jogo/Unity é carregada. Recursos e dados foram confrontados
estaticamente com o APK autenticado, sem executar suas bibliotecas.

No PC, o Mono da Unity retorna `en-US` por um stub Win32 comprovado no fonte,
mesmo com locale Java/Windows `pt-BR`; threads novas voltam ao default em vez
de herdarem a sobrescrita do pai. O backend conserva essa distinção.
A cultura efetiva do Android ainda não foi medida em execução.

Este inventário abrange comparação, ordenação, busca e caixa. Formatação e
parsing numéricos/datas são contratos separados do runtime e não estão
contabilizados nas 104 chamadas; não se afirma cobrir todo o BCL cultural.
