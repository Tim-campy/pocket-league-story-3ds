# Subconjunto C# e inventário de literais

Inventário de leitura, não tradutor. Nenhum C++, asset, texto do jogo ou valor literal foi gerado/publicado. Fonte fixado em `reference/`, tag `v1.0.0-csharp-reconstruction`.

Roslyn `5.8.0.0` analisou **97 fontes Assembly-CSharp**, **448825 nós AST** e **123 SyntaxKinds presentes**. A contagem completa por SyntaxKind está em [config/csharp-syntax.csv](../config/csharp-syntax.csv); tokens, opções, hashes, evidências por ocorrência e diagnósticos agregados estão no [relatório estruturado](../config/csharp-subset-summary.json).

A tabela de tradução contém **1.958 métodos**, todos `todo`, gerados do cadastro anterior. Isso inclui métodos gerados pelo compilador e declarações sem corpo; os números de declarações AST abaixo não usam esse mesmo denominador.

| Construção | Ocorrências AST |
|---|---:|
| Classes | 96 |
| Structs | 0 |
| Interfaces | 3 |
| Enums | 4 |
| Métodos declarados | 1719 |
| Construtores declarados | 118 |
| Corpos de métodos/construtores/operadores | 1835 |
| Corpos de accessors | 0 |
| Propriedades | 5 |
| Indexadores | 0 |
| Eventos declarados | 0 |
| Declarações delegate | 1 |
| Entradas em listas de herança/interfaces | 60 |
| Tipos genéricos declarados | 0 |
| Métodos genéricos declarados | 3 |
| Declarações locais | 4949 |
| Declarações var | 0 |
| if | 7101 |
| switch statement | 48 |
| for | 1316 |
| foreach | 10 |
| while | 59 |
| do/while | 0 |
| break | 331 |
| continue | 268 |
| goto | 8 |
| return | 1698 |
| yield | 0 |
| try | 203 |
| catch | 148 |
| finally | 88 |
| throw | 25 |
| using statement | 0 |
| lock | 2 |
| Lambdas | 3 |
| Métodos anônimos | 31 |
| Objetos anônimos | 0 |
| Funções anônimas com captura de símbolo (dataflow) | 29 |
| Ocorrências de símbolos capturados | 41 |
| Query LINQ sintática | 0 |
| await | 0 |
| Funções locais | 0 |
| Acesso condicional | 0 |
| Coalescência | 0 |
| Strings interpoladas | 0 |
| Pattern matching | 0 |
| Tuplas expressão/tipo | 0 |
| Arrays new explícitos | 2022 |
| Arrays new implícitos | 0 |
| Acessos por índice | 11408 |
| new de objeto explícito | 861 |
| Atribuições | 8729 |
| Ternários | 120 |
| Casts explícitos | 1633 |
| Argumentos ref | 0 |
| Argumentos out | 6 |
| Argumentos in | 0 |
| Parâmetros params | 5 |
| Locais unsafe/fixed | 0 |
| checked/unchecked explícitos | 0 |

## Literais potencialmente visíveis

Os números medem **ocorrências**, não frases distintas. Não são inferidos por idioma, palavras ou aparência do valor. O analisador resolve símbolos e identifica argumentos string/string[] de APIs de desenho, diálogo, label e softkeys; acompanha composições simples, parâmetros de wrappers e aliases locais sem reassinamento. As APIs/posições e linhas aparecem como evidência, sem conteúdo literal. Um fluxo para UI é um fato estático, não prova de uma tela executada. Formatação, fragmentos de concatenação e strings vazias podem aparecer nesse conjunto.

| Assembly | Literais totais | Vazios (subconjunto) | UI direto | UI via wrapper | UI via local | UI não vazio | Chave de código direta | UNKNOWN |
|---|---:|---:|---:|---:|---:|---:|---:|---:|
| Assembly-CSharp | 2231 | 1 | 341 | 97 | 5 | 443 | 18 | 1770 |
| KairoLibrary | 3008 | 159 | 15 | 1 | 4 | 14 | 151 | 2837 |

**Quantidade por classe:** a lista integral é [config/visible-text-counts.csv](../config/visible-text-counts.csv). As classes com pelo menos um literal de fluxo UI identificado estão abaixo; nenhuma frase é reproduzida.

| Assembly | Classe | Ocorrências UI | UI não vazias |
|---|---|---:|---:|
| Assembly-CSharp | `form.DebugForm` | 25 | 25 |
| Assembly-CSharp | `form.GameForm` | 1 | 1 |
| Assembly-CSharp | `form.RankForm` | 5 | 5 |
| Assembly-CSharp | `form.SoccerForm` | 28 | 28 |
| Assembly-CSharp | `form.SpForm` | 13 | 13 |
| Assembly-CSharp | `form.SubForm` | 325 | 325 |
| Assembly-CSharp | `form.TitleForm` | 13 | 13 |
| Assembly-CSharp | `game.UserData` | 15 | 15 |
| Assembly-CSharp | `main.AppData` | 8 | 8 |
| Assembly-CSharp | `main.Main` | 5 | 5 |
| Assembly-CSharp | `surface.GamePad` | 1 | 1 |
| Assembly-CSharp | `surface.GameView` | 2 | 2 |
| Assembly-CSharp | `system.form.FriendForm` | 2 | 2 |
| KairoLibrary | `kairo.unity.ad.InterstitialAd` | 1 | 1 |
| KairoLibrary | `kairo.unity.form.FormManagerBase` | 3 | 1 |
| KairoLibrary | `kairo.unity.io.HttpObject` | 2 | 2 |
| KairoLibrary | `kairo.unity.system.KairoBase` | 6 | 6 |
| KairoLibrary | `kairo.unity.ui.Canvas` | 2 | 2 |
| KairoLibrary | `kairo.unity.ui.IApplication` | 1 | 1 |
| KairoLibrary | `kairo.unity.util.Language` | 1 | 1 |
| KairoLibrary | `kfw.panel.MainPanel` | 4 | 0 |

## Cobertura e limites

Erros semânticos agregados por código: `{"Assembly-CSharp": {}, "KairoLibrary": {}}`. Fechamento de wrappers: 93 parâmetros, 8 passagens; limite atingido: false.

As compilações semânticas usam `DesktopAssemblyIdentityComparer.Default` para unificar referências retargetable do perfil Unity. Uma primeira sonda sem esse comparer falhou com 17.465 CS0012 e 49 erros derivados no App; não foi usada como resultado final. As mesmas referências, com o comparer apropriado, são reavaliadas antes de publicar. Nenhuma DLL foi modificada para corrigir a análise.

Validação independente: quatro fixtures semânticas sintéticas em `tools/csharp_subset/test_inventory.py` conferem ausência de valores serializados, UI direta/wrapper/local, exclusão de condições/chaves, recusa de local reassinado e limitação explícita de arrays de campo. Nenhum dado do jogo é usado nessas fixtures.

Não há conclusão de que os literais UNKNOWN são todos textos visíveis ou todos chaves de código. Campos mutáveis, tabelas/arrays lidos depois, retornos indiretos, reflection, callbacks e transformações arbitrárias não estão provados por este passe. Essa diferença de cobertura não é escondida por classificar por palavras. Antes de gerar C++ na Fase 2, os textos confirmados e os restantes encontrados na auditoria precisam ser externalizados pelo pipeline local, sem copiar o conteúdo para o repositório.

Sintaxe de query LINQ ausente não prova ausência de chamadas a APIs LINQ; a análise de membros semânticos da fronteira complementa a contagem sintática. Métodos gerados e closures são governados pelos métodos de origem; não foram escritos à mão.
