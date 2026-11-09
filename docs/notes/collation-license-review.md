# Revisão da licença e necessidade dos dados da colação

Base técnica: checkpoint af66d13. A licença do port não foi escolhida ou
alterada. As licenças abaixo descrevem a proveniência dos componentes usados,
não uma licença automaticamente aplicada ao projeto inteiro.

## Arquivos MIT/X11

Na revisão oficial Mono f08f8a27bfe3aafda4e430ee2365dec73c1070d7,
[LICENSE](https://github.com/mono/mono/blob/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/LICENSE#L62-L64)
atribui mcs/class a MIT/X11; o texto está em
[mcs/MIT.X11](https://github.com/mono/mono/blob/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/MIT.X11).

Fontes sob mcs/class/corlib usados/adaptados:

- Mono.Globalization.Unicode/SimpleCollator.cs
- Mono.Globalization.Unicode/MSCompatUnicodeTable.cs
- Mono.Globalization.Unicode/MSCompatUnicodeTableUtil.cs
- Mono.Globalization.Unicode/CodePointIndexer.cs
- System.Globalization/TextInfo.cs e CompareInfo.cs
- System/Char.cs e String.cs

Recursos sob mcs/class/corlib/resources, total **337.358 bytes**:
collation.core.bin, collation.tailoring.bin, collation.cjkJA.bin,
collation.cjkCHS.bin, collation.cjkCHT.bin, collation.cjkKO.bin e
collation.cjkKOlv2.bin.

No port, o núcleo adaptado está em src/kairo/common/managed_collation.cpp,
mono_collator_methods.inc e mono_unicode_methods.inc. Os recursos oficiais
geram build/generated/mono-collation/mono_collation_tables.inc. O glue de
Char/TextInfo conserva sua atribuição MIT; seus dados auxiliares abaixo têm
outra proveniência. Os arquivos upstream e hashes estão em
tools/setup_mono_collation.py e THIRD_PARTY.md.

## Arquivos GNU Library GPL versão 2

Origem dos dados: **mono/metadata/char-conversions.h**, na mesma revisão.
O mapa histórico de licenças atribui a VM a LGPL/comercial; não há concessão
MIT individual nesse header. O texto efetivamente usado é
[COPYING.LIB](https://github.com/mono/mono/blob/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/COPYING.LIB),
GNU Library General Public License versão 2, junho de 1991, preservado em
third_party/mono-lgpl/COPYING.LIB. Não é LGPL 2.1.

| Dado emitido a partir do header | Bytes | Função |
|---|---:|---|
| ToLowerDataLow | 18.848 | Caixa minúscula BMP histórica |
| ToLowerDataHigh | 446 | Caixa minúscula na faixa alta |
| ToUpperDataLow | 18.900 | Caixa maiúscula BMP histórica |
| ToUpperDataHigh | 446 | Caixa maiúscula na faixa alta |
| Bitmap OtherNotAssignedBits derivado de CategoryData | 8.192 | Identificar code units não atribuídos no perfil histórico |
| Total para colação/caixa | **46.832** | |
| DecimalDigitRanges derivado de CategoryData | **80** | HexNumber histórico; fora da colação |

As quatro tabelas e o bitmap geram
build/generated/mono-collation/mono_character_tables.inc, consumido por
src/kairo/common/managed_mono_character_data.cpp. Os intervalos numéricos geram
mono_decimal_digit_ranges.inc, consumido por managed_string_ops.cpp. Nenhuma
tabela foi retirada dos binários do jogo para alimentar o port; a origem é
o arquivo oficial aberto e fixado por hash.

## A parte LGPL é dispensável no subconjunto atual?

**Não pode ser simplesmente retirada sem mudar comportamento.** Não foi
demonstrado um substituto permissivo equivalente. Isso não significa que
somente uma implementação LGPL poderia reproduzir esses resultados.

O grafo ligado do fonte mede 104 chamadas culturais em 61 métodos: 65 buscas/
prefixos/sufixos, 29 conversões de caixa e dez comparações. Não há uso medido
de SortKey público ou coleções ordenadas. Nomes, entrada do usuário e textos
dos pacotes passam pelos utilitários; não existe prova de domínio ASCII.
Detalhes por método em docs/culture-usage.md e config/culture-usage.csv.

Dependências concretas:

- SimpleCollator.FilterOptions chama TextInfo.ToLower em IgnoreCase;
  StringEx.EqualsIgnoreCase solicita essa semântica.
- Uni.IsIgnorable usa OtherNotAssigned antes das tabelas de pesos MIT.
  Isso muda Compare, igualdade cultural, IndexOf com início, LastIndexOf,
  StartsWith e EndsWith, inclusive sem IgnoreCase.
- culture_to_upper/lower atende as transformações de caixa do corpus.
- Os 80 bytes de dígitos pertencem a outro contrato, HexNumber; remover apenas
  a dependência de colação não eliminaria essa proveniência numérica.

## Teste de retirada

Comando: python tools/audit_collation_license.py.
Recibo: config/collation-license-audit.json. O runner cria cópias privadas do
provider em build/collation-license-audit; não altera produção, não instala
dependência e não promove métodos. Usa o mesmo oráculo Mono histórico e os
25.704 casos sintéticos do corpus de bordas já validado.

| Provider de teste | Diferenças em oito culturas | Diferenças em en-US |
|---|---:|---:|
| Produção intacta | 0 | 0 |
| Acessos às quatro tabelas de caixa substituídos por identidade | 8 | 1 |
| Bitmap substituído por false | 992 | 124 |
| Ambas as substituições | 1.000 | 125 |

A retirada de caixa produziu diferenças em upper nesse corpus; não se
observou diferença de comparação nessa amostra específica. Isso não prova
dispensabilidade para todos os pares Unicode. O bitmap produziu diferenças
de comparação e busca em todas as oito culturas. Logo, restringir a en-US
também não elimina a necessidade do comportamento histórico de categoria.

Exemplos sintéticos em en-US: comparar vazio com U+0378 passa de 0 a -1 sem
o bitmap; EndsWith sobre o caso c1a2b11 passa de true a false; converter
U+00E9 para maiúscula deixa de produzir U+00C9 sem os mapeamentos. Não são
textos dos assets. O teste mede comportamento, não uma economia física de
bytes no executável. Frequência durante uma partida continua UNKNOWN.

## Alternativas para decisão do usuário

1. **Manter o componente com proveniência/licença separadas.** Conserva a
   implementação já validada e exige planejar a distribuição conforme a
   licença desse componente, incluindo seus fontes, avisos e condições de
   reconstrução/relink. Isso não escolhe a licença do código próprio do port.
2. **Construir um substituto independente com dados permissivos.** Exigiria
   identificar e autorizar a fonte de dados e demonstrar equivalência ao
   perfil histórico, incluindo os 120 casos iniciais, as bordas e o BMP.
   Não foi instalado ou adotado um novo banco Unicode nesta revisão.
3. **Investigar uma versão posterior MIT do provider.** O header histórico
   foi removido antes da relicença de 2016; a revisão anterior não encontrou
   cópia idêntica MIT. Regras e dados posteriores não são substitutos
   comprovados. ICU/NLS modernos também não estão demonstrados como
   equivalentes; mudar resultados exige decisão semântica explícita.

Nenhuma alternativa nova foi adotada e nenhum arquivo LICENSE do port foi
criado. A execução local continua sob a autorização já existente para o
componente histórico; a decisão de licença/distribuição permanece do usuário.
