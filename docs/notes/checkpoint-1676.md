# Continuidade da Fase 2: 1.676 corpos compilados

## 1. PROGRESSO

Verificação completa final: **89/89 checks PASS**, **88 recibos** conferidos
por hash, sem perdas de métodos compilados nem retiradas de qualificação sob
o mesmo juiz. O recibo é config/phase2-verification.json; PROGRESS.md e os CSVs
foram regenerados somente depois dos testes.

| Medida | cde8988 | af66d13, consolidação inicial | 22453c7 | Atual |
|---|---:|---:|---:|---:|
| Game compilados / 1.958 | 1.110 | 1.220 | 1.284 | 1.676 |
| Percentual compilado | 56,69% | 62,31% | 65,58% | 85,60% |
| Game runs / verified | 0 / 0 | 0 / 0 | 0 / 0 | 0 / 0 |
| Slots sem definição, inventário ampliado | UNKNOWN | 113 | 102 | 51 |
| Raízes portáveis compiladas e exercitadas | 172 | 172 | 172 | 172 |
| Corpos portáveis compilados e exercitados | 374 | 374 | 374 | 374 |
| Corpos portáveis estritamente verificados | 373 | 373 | 373 | 373 |

Os 110 corpos locais foram consolidados em af66d13 e publicados antes do trabalho
novo. Frente a cde8988 são 566 corpos adicionais; frente a af66d13, 456; frente
a 22453c7, 392. As comparações por ID não encontraram perdas. Dos 113 slots de
af66d13, 67 foram definidos, 46 continuam pendentes e cinco novos foram expostos.
O inventário anterior restrito de cde8988 tinha 13 slots e não é comparável
diretamente ao inventário ampliado. Compilação não equivale a execução em jogo.

Portáveis: 2.617/2.618 observações qualificadas; Sin(-0) não foi normalizado.
A fronteira conserva 252 verified, um implemented e 522 todo, de 775 símbolos.
Estados e PROGRESS.md são gerados, não editados.

## 2. O QUE FOI FEITO NESTA RODADA

- Ponte gerada Config/Awake/Language, recursos e identidade do ResourceManager,
  seguindo IApplication.Awake e chamando o Main.OnCreate real.
- Dictionary foreach, covariância de arrays de referências, defaults em this/base,
  delegates/adaptadores tipados e break/continue através de finally/using.
- Matrizes, clip, layout de texto, wrappers DrawString, fontes, imagens, blend,
  ResetOrientation e Fullscreen sobre SDL. Isso não comprova equivalência de
  todos os pixels ou RenderTexture com Android.
- Parser Single histórico e StrictHex; medição do heap nativo para os três
  usos de diagnóstico; correção do rastreamento MSVC/Ninja de headers.
- Auditoria da retirada dos dados LGPL e documentação das oito incertezas Android.
- Diagnósticos Release 5 a 11, com guardas fatais e preferências isoladas,
  sem callback/menu fictício nem promoção de métodos por executar o diagnóstico.

Fixture do emissor: 169 métodos, 1.183/1.183 casos. Coleções: 66/66; StringOps:
526.290/526.290; parser Single histórico: 131.206/131.206; metadados de imagem:
42/42; bootstrap: 12/12 e seis asserções nativas; heap nativo: nove asserções.
Os testes sintéticos básicos somam 1.164/1.164 nos dois perfis.

Resultados negativos: objetos Release obsoletos produziram uma falsa falha no
inicializador de AppData; o rebuild limpo confirmou a causa sem mudar sua lógica.
Duas verificações completas falharam antes da publicação: um trait ausente na
interface da fixture de covariância e um runner que ainda exigia 35 asserções
quando a fixture já tinha 36. As causas foram corrigidas e os logs FAIL privados
preservados. Uma execução anterior fora interrompida para corrigir os headers.
Detalhes: [diário](phase2-boot-integration-20261109.md).

## 3. HIPÓTESES

- CONFIRMADA: os dados LGPL não podem ser simplesmente excluídos. A retirada
  do bitmap muda 124 observações en-US; o provider intacto passa 25.704/25.704.
- CONFIRMADA: o erro AppData das tentativas 6/7 vinha de ABI obsoleta. Ninja
  registrava zero headers; a correção e o rebuild da tentativa 8 o eliminaram.
- CONFIRMADA no SDK histórico Windows: Single.Parse e StrictHex diferem do
  .NET moderno nas bordas medidas; o port conserva o perfil histórico testado.
- INCONCLUSIVA no Android: sete casos ref/out e Sin(-0); os casos e bits
  continuam documentados sem normalização.
- INCONCLUSIVA: equivalência visual e fluxo do título/menu; nenhum frame foi
  apresentado no diagnóstico atual.

## 4. PENDENTES POR GRUPO

282 corpos Game ainda não compilam. Os 51 slots sem definição incluem Game e
dependências Kairo; não são uma contagem adicional a somar aos 282 corpos.
Há ainda quatro guardas de bootstrap declaradas: FormManager.LifecycleWarning,
FormManager.ResumeWarning, Source.UpdateFep e FormManagerBase.DoTerminationDialog.
São lacunas explícitas, não implementações nem novos corpos do jogo.

| Caminho | Dependência conhecida |
|---|---|
| Primeiro desenho de GamePad | AddTouch → DrawSoftLabel → Canvas.IsLinearFilterEnable |
| Atualização de TitleForm | SendSaveData → Canvas.ImeOnBlock, decisão pendente |
| Entrada/layout | IApplication.SetOrientation e GamePad.SetLayoutMode |
| Outras telas | Offscreen, painéis/Fep e dependências de desenho |
| Serviços restantes | BillingManager genérico, KairoBase.Connect e folhas removidas |

São 69 SyntaxKinds observados nos corpos Game e 63 nos portáveis (união: 69).
Isso não prova suporte irrestrito aos 123 kinds medidos. Há 27 políticas offline
emitidas de 53; 25 não foram alcançadas e uma foi recusada. Execução do registro
durante o boot não foi comprovada.

## 5. TOOLCHAIN

Roslyn 5.8.0-1.26319.2; MSVC 19.51.36252, C++17 /fp:strict, Release /O2;
CMake 4.3.1-msvc1/Ninja; SDL2 2.32.10; FreeType 2.15; libogg 1.3.6 e
libvorbis 1.3.7. O core SDK unity do oráculo é idêntico por SHA-256 ao mscorlib
do APK; nenhum desses binários originais é vinculado ao port.

O builder mede o prefixo UTF-8 real de /showIncludes, audita as dependências
de runtime/portáveis/Game e força rebuild quando essa política muda.
VSLANG isoladamente não resolveu a máquina sem MUI inglês. O recibo de tradução
usa internação reversível de localizadores/defaults, sem retirar métodos.
Hashes, versões e reprodução: [toolchain](../toolchain.md).

## 6. COMPONENTES EXTERNOS E METADADOS

MIT/X11: SimpleCollator.cs, MSCompatUnicodeTable.cs, MSCompatUnicodeTableUtil.cs,
CodePointIndexer.cs, Char.cs, String.cs, TextInfo.cs, CompareInfo.cs e sete
collation.*.bin, com 337.358 bytes de tabelas.

GNU Library GPL v2, junho de 1991: dados de mono/metadata/char-conversions.h.
Quatro tabelas de caixa e um bitmap de categoria somam 46.832 bytes, consumidos
por managed_mono_character_data.cpp. Outros 80 bytes numéricos do mesmo header
são consumidos por managed_string_ops.cpp. O texto da licença está em
third_party/mono-lgpl/COPYING.LIB. Nenhuma licença foi escolhida para o projeto
inteiro. Arquivos/revisões/hashes e alternativas:
[auditoria](collation-license-review.md) e [THIRD_PARTY.md](../../THIRD_PARTY.md).

Assets continuam exclusivamente locais, autenticados pelo hash do APK. Nenhum
asset, binário original, player Unity, APK novo ou SDK 3DS foi distribuído ou
instalado nesta continuação.

## 7. BLOQUEIOS

A parada decorre da decisão de plataforma de Canvas.ImeOnBlock prevista em
[AGENTS.md §9.5](../../AGENTS.md): consultar quando uma função da fronteira não puder ser
reimplementada fielmente. Os dois consumidores descartam o retorno, mas as flags
e cancelamento Android continuam UNKNOWN. A proposta limitada de janela Windows
com texto selecionável/copiar/fechar aguarda decisão; nenhum backend foi
implementado antecipadamente. Ver
[diagnostic-text-input.md](../design/diagnostic-text-input.md).

A licença de distribuição também depende do usuário; a autorização de execução
local do componente histórico continua válida. Alternativas: manter os dados
separados com as obrigações correspondentes, ou investigar provider/dados
permissivos e provar equivalência. Nenhum substituto foi adotado.

Último diagnóstico Release, tentativa 11: link aprovado, 1,766 segundos,
exit 1 em GamePad.Draw, zero frames. RSS antes de Main: 49.434.624 bytes;
imagem do executável residente: 20.439.040 bytes, sem isolar a seção de código.
Essas amostras não são a memória do jogo estável. Categorias de texturas/áudio/
heap e frame time: UNKNOWN. Título, menu e comparação visual Android: UNKNOWN;
o ADB não lista dispositivo.

## 8. SUA RECOMENDAÇÃO

1. Decidir o tratamento PC restrito de ImeOnBlock sem remover o ramo do jogo.
2. Completar a cadeia de filtro de imagens/labels do GamePad e repetir o
   diagnóstico Release, preservando a recusa dos casos não suportados.
3. Conectar o Android com o original para comparar layout/textos/ordem.
   Medir o orçamento por categoria somente após obter um frame estável.

Não há estimativa confiável de quantos corpos essas ações fecharão: UNKNOWN.
