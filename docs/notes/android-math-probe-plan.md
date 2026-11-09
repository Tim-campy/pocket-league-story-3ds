# Trigonometria: medição pendente no Mono Android

## Resultado atual, sem integração de arcos

O núcleo experimental de arcos não está ligado a Graphics e não promove
qualquer símbolo da fronteira. `python -B tools/test_arc_geometry.py` conserva
o resultado **FAIL, 235/360**: .NET x64 180/180 exatos, Mono histórico x86
55/180 exatos. Estrutura e ordem: 360/360. Os dois métodos completos do fonte,
DrawArc e FillArc, são os oráculos, com colaboradores GL/Mesh próprios.
Não há execução nem vínculo de uma DLL Unity nesses testes.

Os 11.524 comandos de cada perfil têm a mesma estrutura. Na comparação Mono,
2.563 coordenadas diferem, 1.735 por uma ULP. Erro absoluto máximo observado:
0,00001049041748046875. As duas tentativas, fontes, executáveis e traces ficam
em build/arc-geometry-tests/failed-attempt-1 e failed-attempt-2, ignorados.
O recibo público retém as diferenças e hashes, sem chamar a medição de PASS.

| Entrada de FastMath | Radianos idênticos, bits double | Mono, bits float | Nativo, bits float |
|---|---|---|---|
| Cos(90°) | 3ff921fb54442d18 | 248d3000 | 248d3132 |
| Sin(180°) | 400921fb54442d18 | 250d3000 | 250d3132 |
| Sin(−0°) | 8000000000000000 | 00000000 | 80000000 |

Os radianos coincidiram em 32/32 observações. O controle .NET coincidiu em
208/208 sondas de precisão. As sondas de produtos (32/32) e passos (8/8)
não demonstraram diferenças na amostra. O Mono executável é PE I386 e o
nativo é x64, mas **atribuir todos os 125 casos compostos a x87 continua hipótese**.
Há evidência direta de diferenças de trigonometria; sua propagação completa
nos comandos ainda não foi explicada.

O corpus portátil anterior usava 0, −0, 1, −1, 7,25, −17,5 e 0,125, sem π/2
ou π. Seus resultados medidos não são substituídos por estes novos casos, mas
não se deve generalizar equivalência de libm para entradas não exercitadas.
O contrato float32/double64 não foi alterado para imitar o Mono Windows.
As sete diferenças ref/out, Sin(−0) e estas novas entradas continuam UNKNOWN
no Android. Inspeção visual de uma tela não qualifica bits de uma função.

## Acesso ao aparelho consultado

Em 9/11/2026, ADB confirmou o processo original em execução. O APK instalado
foi autenticado pelo SHA-256 esperado, conforme a nota do primeiro frame.
O Frida já disponível no host listou o S22 e processos, mas a tentativa de
attach via REA retornou `capability_unavailable`, reason
`Unable to connect to remote frida-server: closed`. Não houve sessão criada,
script injetado ou invocação de método nessa tentativa.

`command -v su` e `command -v frida-server` não retornaram caminhos no shell
ADB. É uma busca limitada ao PATH, não prova de ausência no sistema ou do
estado de root. A causa da conexão fechada e a preparação necessária no
aparelho continuam UNKNOWN. Não foi instalado serviço, não se alterou o APK,
não se habilitou root e não se mudou uma proteção global do Android.

## Procedimento proposto, ainda não executado

1. Dispor de instrumentação compatível já autorizada no aparelho. Qualquer
   preparação/instalação além das dependências aprovadas exige nova autorização.
2. Conferir novamente APK, pacote, PID e módulos; selecionar apenas o processo
   original. Fazer attach, conservando o aplicativo e seus saves.
3. Localizar as exports Mono no processo e os métodos existentes JMath.Sin,
   JMath.Cos, JMath.ToRadians e FastMath.Sin/Cos pelos nomes e assinaturas.
   Confirmar o assembly e os tipos antes de qualquer chamada.
4. Anexar somente a thread do probe ao domínio Mono, invocar os métodos puros
   com os mesmos valores sintéticos e registrar bits, tipos e exceções. Não
   invocar Unity, rede, cobrança, armazenamento, callbacks de jogo ou métodos
   que recebam objetos do save. Não carregar código/bytes originais em um
   executável novo nem reconstruir o APK para esta finalidade.
5. Desanexar a thread e a sessão de instrumentação, mantendo o original aberto.
   Publicar só script próprio, metadados e hashes; traces locais em build/.
6. Comparar os resultados ARM com ambos os controles PC e decidir a regra de
   emissão numérica a partir da evidência. Repetir a geometria antes da adoção.

Se esse acesso não puder ser fornecido sem alteração de escopo, a alternativa
é uma decisão explícita de prosseguir com arcos ainda não qualificados contra
o Android. Não se concede equivalência nem se reduz a tolerância do teste
automaticamente. O bloqueio e o núcleo experimental ficam separados do título
e do menu já observados em Release.

## Decisão posterior do usuário

O usuário escolheu **prosseguir com a API mantendo essas diferenças como UNKNOWN
e adiar a validação Android**. Portanto, a instrumentação não bloqueia a
continuidade da Fase 2. O experimento continua FAIL no perfil histórico; qualquer
integração é implementação parcial, sem equivalência Android presumida. Não há
autorização implícita para instalar um serviço no aparelho ou substituir o APK.
