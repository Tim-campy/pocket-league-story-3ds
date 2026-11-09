# Consolidação dos avanços posteriores a cde8988

Verificação completa em 2026-11-09: **84/84 checks PASS**, com **83 recibos**
conferidos por SHA-256, sem recibos alterados após a execução. O APK local foi
autenticado antes e depois; o submódulo permanece limpo no marco reconstruído.

| Medida | cde8988 | Consolidação |
|---|---:|---:|
| Métodos Game compilados, vinculados por assinatura IL completa | 1.110 | 1.220 |
| Raízes portáveis compiladas/exercitadas | 172 | 172 |
| Corpos portáveis compilados/exercitados | 374 | 374 |
| Corpos portáveis verificados | 373 | 373 |
| Observações diferenciais aprovadas | 2.617/2.618 | 2.617/2.618 |
| Fronteira verified | 249 | 252 |
| Fronteira implemented | 1 | 1 |
| Fronteira todo | 525 | 522 |
| Game runs/verified | 0 | 0 |

A comparação por IDs registra **110 ganhos e zero perdas de compilação Game**,
zero perdas portáveis e zero retiradas de qualificação sob o mesmo perfil de
runtime e hashes de framework. Os três membros adicionais da fronteira têm
provas de propriedades/orientação; não são promovidos pelo diagnóstico do jogo.
Assets continuam com três grupos loads, seis extracts e 35 inventoried.

## Correções necessárias para consolidar

O runner de Vector2 não recebia o argumento obrigatório original-managed;
foi corrigido. A correção de classes abstratas havia retirado sete auxiliares
de SecureNumber da execução direta do harness, apesar de continuarem compilados.
Uma subclasse concreta exclusiva dos testes agora chama os construtores base e
herda seus corpos, sem remover abstract do fonte e sem criar uma factory de
produção para o tipo abstrato. A serialização conserva o tipo real do receptor
de teste e todos os campos. Foram restaurados os 49 casos correspondentes.

Um ensaio foi corretamente descartado pela guarda de hashes porque um header
foi alterado durante sua execução. A verificação final foi feita com os fontes
congelados. O runner completo também passou a renovar o diferencial de divisão
em chunks e o inventário diagnóstico Game. A comparação agora usa cde8988 como
baseline explícita e reprova perda de compilação ou de qualificação sob o mesmo
juiz. Os resultados negativos anteriores não foram tratados como prova válida.

## Limites preservados

Sin(-0) continua sem equivalência estrita no Android. As sete observações de
ref/out continuam divergentes no SDK Windows e UNKNOWN no Android; não foram
normalizadas ou promovidas. Seu runner passou por reconhecer explicitamente
esse conjunto, não porque 140/140 observações fossem iguais.

Há 113 slots concretos sem definição no inventário ampliado. O link normal e
o bootstrap real continuam pendentes. O diagnóstico anterior apresentou zero
frames e parou na ausência da ponte Config/Awake/Language. Seus números de
memória são de Debug e não são orçamento do jogo carregado.

A declaração/chamada incompleta de configure_application foi separada desta
consolidação. O rascunho local translator/bootstrap_source.py permanece fora
do checkpoint até ser integrado e testado com sua definição. Nenhum novo corpo
de boot foi introduzido para antecipar a próxima etapa.

Provas: config/phase2-verification.json, config/phase2-checkpoint-comparison.json,
config/phase2-progress.json e os recibos individuais. PROGRESS.md e CSVs foram
regenerados pelos scripts. A revisão específica da licença da colação e a
continuidade do boot ocorrerão depois deste checkpoint.

A política de conteúdo do index passou. A checagem adicional de whitespace do
Git apontou uma linha vazia extra no fim de um include gerado. Não se alterou
o arquivo gerado à mão nem se desabilitou a checagem; esse aviso de formatação
permanece separado dos 84 checks funcionais aprovados.
