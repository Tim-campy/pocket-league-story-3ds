# Consolidação da ponte de bootstrap: 1.284 corpos

Verificação completa: **85/85 checks PASS**, **84 recibos** vinculados por hash,
comparação contra af66d13. O recibo config/phase2-verification.json inclui agora
o teste de retirada dos dados auxiliares da colação. Referência e APK conservam
seus hashes autenticados; nenhum binário/asset original é publicado.

| Medida | af66d13 | Este checkpoint |
|---|---:|---:|
| Game compilados | 1.220 | 1.284 |
| Game runs/verified | 0 | 0 |
| Slots virtuais sem definição | 113 | 102 |
| Raízes portáveis compiladas/exercitadas | 172 | 172 |
| Corpos portáveis compilados/exercitados | 374 | 374 |
| Corpos portáveis estritamente verificados | 373 | 373 |
| Observações portáveis aprovadas | 2.617/2.618 | 2.617/2.618 |
| Métodos da fixture do emissor | 71 | 116 |
| Casos dessa fixture aprovados | 497/497 | 812/812 |
| Fronteira verified / implemented / todo | 252 / 1 / 522 | 252 / 1 / 522 |

São **64 ganhos e zero perdas Game**, sem perdas portáveis ou retiradas de
qualificação sob o mesmo juiz. Helpers novos de plataforma são excluídos do
denominador do jogo. Os estados continuam gerados pelos scripts; compilar uma
chamada de API não a promove automaticamente a verified.

## O que mudou

- Adaptador gerado Config/Awake/Language, 27 cópias autenticadas e inicialização
  na ordem do original; singletons consultados de forma preguiçosa pelo scheduler.
- Emissão de params, delegates explícitos, propriedades automáticas de instância
  sem inicializador, using, retornos protegidos e string switch. Escrita em struct,
  passagem de arrays por System.Array e Dictionary.Keys.ToArray completam rotas
  adicionais. Recursos/strings continuam vindo do pipeline e do fonte autorizado.
- Lock sobre os objetos observados, com monitor recursivo, retenção do receptor e
  espera cooperativa com GC; não foi acrescentada uma tabela externa de monitores.
- Folhas limitadas Guid/URI, Concat(object), Insert, IsNullOrEmpty e TryParse simples;
  bindings internos de PlayerPrefs/WWW/diálogos e proteção da API de licença removida.
- Snapshot SDL acrescenta dedos ativos, DPI e fullscreen. C# recuperado permanece
  somente leitura; src/game continua saída integral do tradutor.
- Relatórios Game usam caminhos relativos à raiz. O recibo de tradução fica em
  1.916.806 bytes, abaixo dos 2.000.000 permitidos, sem retirar métodos/diagnósticos.

## Resultados negativos e correções de integração

A compilação ampliada chegou a C1128; /bigobj foi acrescentado ao driver isolado.
Seis retornos protegidos provocavam C4715 por queda que o compilador C++ não
conseguia provar impossível; há agora uma guarda explícita e /we4715 nos builds.
Não foram substituídos por valores default.

A inclusão indiscriminada de IDisposable no oráculo parcial fazia InputStream e
OutputStream exigirem Dispose não emitido; a interface só é incluída quando sua
implementação faz parte desse oráculo. O controle negativo de goto que escapa do
finally continuou recusado; seu teste foi ajustado à mensagem mais precisa. O
comando isolado da fixture de mídia recebeu o include comum exigido pelo backend.
Os ensaios interrompidos não contam como a verificação completa acima.

## Licença e boot

A revisão de licença distingue núcleo/tabelas MIT/X11 de 337.358 bytes, auxiliares
LGPL v2 de 46.832 bytes e 80 bytes numéricos fora da colação. A retirada simples
do bitmap muda 124 observações en-US; o baseline passa 25.704/25.704 observações
nessa auditoria. Não foi escolhida uma licença para o port nem um provider novo.
Arquivos, evidências e opções: [revisão](collation-license-review.md).

A tentativa 4 em Release completou configuração/plataforma e parou no carregador
de recursos, com **zero frames**. Título, menu e comparação visual Android não
foram demonstrados. Memória por categoria e frame time estável permanecem UNKNOWN.
Medições e hashes históricos: [ponte](phase2-bootstrap-bridge.md).

As sete divergências ref/out e Sin(-0) continuam UNKNOWN no Android e documentadas
em [android-semantic-unknowns.md](android-semantic-unknowns.md), sem normalização.
Este checkpoint consolida avanços; não encerra a Fase 2 ou autoriza alegar boot.
