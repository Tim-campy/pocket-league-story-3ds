# Rodada limitada de regeneração por UnicodeData

## Resultado

**Não substituir o provider de produção.** A geração independente a partir do
Unicode Character Database falhou em cinco das 25.704 observações históricas,
tanto com UCD 3.1.0 quanto com o controle histórico UCD 3.0.0. Conforme a decisão
do usuário após 5b02ef6, o componente LGPL permanece separado, com sua licença e
proveniência anteriores. Nenhuma tabela de produção foi modificada nesta rodada.

Comando reproduzível: `python -B tools/probe_unicode_regeneration.py`.
Recibo: `config/phase2-unicode-regeneration.json`. Downloads ficam em
`build/deps/unicode-legacy/`; providers, tabelas e logs dos candidatos ficam em
`build/unicode-regeneration/`. Todos ignorados pelo Git. O script não usa o
header LGPL para gerar ou corrigir os candidatos; só o lê na medição separada.

## Qual versão de Unicode o Mono declara?

A documentação do Mono na revisão
`f08f8a27bfe3aafda4e430ee2365dec73c1070d7` declara **Unicode 3.1** em
`mcs/class/corlib/Documentation/en/System.Globalization/UnicodeCategory.xml`,
linhas 19–26, com referência a UnicodeData-3.1.0. O mesmo arquivo na revisão
Unity `b6587926c0f146c8b12985744f33a13b39a22d57` é idêntico por SHA-256:
`7f162c16a1fc82fee3cfdd75f7dc4036d8a9b0823ca6d2dc8fa36093cc49192c`.

Isso **não prova que os arrays sejam uma transcrição pura de UCD 3.1**.
O histórico do código registra em `mono/metadata/ChangeLog`, em 6 de abril de
2005, linhas 21010–21020, a regeneração das tabelas contra a cultura invariant.
`mcs/class/corlib/Test/System/CharCategoryTest.cs`, linhas 9–10, informa que o
dump de comparação foi gerado por um programa executado sob MS.NET. Esses
artefatos têm um contrato histórico de compatibilidade CLR, não só os campos
de mapeamento simples da UnicodeData.

O bitmap OtherNotAssigned coincide com UCD 3.0 no BMP inteiro, mas difere do
UCD 3.1 em U+03F4 e U+03F5. Portanto, a versão documentada é 3.1; a hipótese de
que os dados usados possam ser regenerados diretamente dessa versão foi
**REFUTADA** pelas medições abaixo. Não se atribuiu ao runtime uma versão mais
moderna por suposição e não se tentou outra família de compatibilidade.

Fontes primárias:

- [Documentação Mono fixada](https://github.com/mono/mono/blob/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/Documentation/en/System.Globalization/UnicodeCategory.xml#L19-L26).
- [Changelog Mono fixado](https://github.com/mono/mono/blob/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mono/metadata/ChangeLog#L21010-L21020).
- [Origem MS.NET do teste histórico](https://github.com/mono/mono/blob/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/Test/System/CharCategoryTest.cs#L9-L10).
- [Arquivo oficial UCD 3.1](https://www.unicode.org/Public/3.1-Update/).

## Construção independente e medidas

O parser interpreta os 15 campos de UnicodeData, expande intervalos First/Last,
usa os campos 12/13 para upper/lower simples, Cn para o bitmap de não atribuídos
e Nd para os intervalos decimais. Pontos não enumerados ficam Cn; mapeamento de
caixa ausente conserva o próprio code point. As extensões dos arrays conservam
somente a ABI do provider existente. Não há correção especial extraída da LGPL.

| Medida | UCD 3.1.0 | UCD 3.0.0, controle |
|---|---:|---:|
| ToLowerDataLow: diferenças / 9.424 entradas | 100 | 99 |
| ToLowerDataHigh: diferenças / 223 entradas | 0 | 0 |
| ToUpperDataLow: diferenças / 9.450 entradas | 71 | 70 |
| ToUpperDataHigh: diferenças / 223 entradas | 0 | 0 |
| Bitmap: code points BMP divergentes | 2 | 0 |
| Intervalos Nd: code points divergentes | 0 | 0 |
| Payload de quatro arrays + bitmap | 46.832 bytes | 46.832 bytes |
| Vinte intervalos decimais | 80 bytes | 80 bytes |
| Observações históricas aprovadas | 25.699/25.704 | 25.699/25.704 |

Os cinco casos divergentes, iguais nos dois candidatos, pertencem à cultura
invariant (índice 0); as demais sete culturas do corpus não divergem nessa
amostra. Isso não comprova equivalência fora dos casos amostrados: o censo
integral dos arrays acima mostra diferenças adicionais.

| Caso | Histórico Mono | UCD puro |
|---|---|---|
| c0a7b8equalsCI | False | True |
| c0a8lower | U+0130 | U+0069 |
| c0a8b7equalsCI | False | True |
| c0a8b9equalsCI | False | True |
| c0a9b8equalsCI | False | True |

O candidato mantém os algoritmos MIT de TextInfo/provider e substitui apenas
o include dos dados por suas tabelas independentes. O oráculo é o arquivo
histórico já ancorado por hash no recibo da colação. Nenhum assembly do jogo é
executado, nenhuma captura/asset é usada e nenhum caso é removido para passar.

## Fontes Unicode, licença e hashes

Os downloads oficiais da tentativa são cobertos por **Unicode License V3**,
conforme o aviso Terms of Use do diretório Unicode 3.1 e o texto oficial atual
fixado por hash. Como o candidato não foi adotado, os dados Unicode não entram
no provider de produção nem substituem a atribuição LGPL.

| Arquivo | SHA-256 |
|---|---|
| UnicodeData-3.1.0.txt | 8e57884da0da3a66782b8a6332a601fccbcae9ed0060e12501aca02fa56ffecd |
| UnicodeData-3.0.0.txt | f41d967bc458ee106f0c3948bfad71cd0860d96c49304e3fd02eaf2bbae4b6d9 |
| Unicode License V3 | e7a93b009565cfce55919a381437ac4db883e9da2126fa28b91d12732bc53d96 |
| ReadMe-3.1.0.txt | a20b55ea29adf4cd28633a2e74e1e3d3e348108031c79d7d7ea90549341dba0a |

URLs exatas, hashes dos fontes Mono/Unity, compilador, executáveis privados,
inputs e stdout estão no recibo. A licença é obtida de
[Unicode License V3](https://www.unicode.org/license.txt); o script recusa
mudança de conteúdo no URL em vez de aceitar silenciosamente uma revisão.

## Religação e continuidade

O fallback autorizado conserva os 46.832 bytes da colação/caixa e os 80 bytes
numéricos sob GNU Library GPL v2, separados dos 337.358 bytes MIT/X11. Não é
feita uma escolha de licença para o restante do port.

O fonte completo do port e as receitas públicas de obtenção por hash,
regeneração e compilação permitem reconstruir e religar o componente histórico;
não há objeto fechado do port a impedir a substituição/religação. O fonte
upstream completo permanece disponível na revisão oficial fixada, e o texto
LGPL está em `third_party/mono-lgpl/COPYING.LIB`. Esse é o mecanismo técnico de
religação desta preparação com fonte publicado. Uma distribuição binária futura
deve preservar os avisos e disponibilizar os fontes e instruções correspondentes,
sem alegar que os dados LGPL são MIT ou Unicode por terem sido comparados.

A tentativa foi encerrada nesta rodada. Não foram adicionadas exceções de caixa
para forçar coincidência, nem foi aplicada a tabela parcialmente coincidente.
Equivalência do comportamento no Android permanece UNKNOWN.
