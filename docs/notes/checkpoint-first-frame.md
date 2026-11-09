# Checkpoint de título e seleção de saves no PC

## 1. PROGRESSO

Comparação com 5b02ef6, de 9/11/2026:

| Inventário | Anterior | Atual |
|---|---:|---:|
| Game: métodos originais com C++ compilado | 1.676/1.958 (85,60%) | 1.720/1.958 (87,84%) |
| Game: corpos pendentes | 282 | 238 |
| Slots virtuais ainda sem definição | 51 | 33 |
| Raízes portáveis compiladas/exercitadas | 172/172 | 172/172 |
| Corpos portáveis compilados/exercitados | 374 | 374 |
| Portáveis com observações qualificadas | 373 | 373 |
| Fronteira, verified / implemented / todo | 252 / 1 / 522 | 252 / 1 / 522 |
| Assets, loads / extracts / inventoried | 3 / 6 / 35 | 3 / 6 / 35 |

Ganhos Game: **44**; perdas: **zero**. A contagem é vinculada às identidades
originais, não só ao número de funções C++. Os estados Game runs/verified
continuam sem recibo individual: observar uma tela não promove todos os métodos.

**Verificação completa: 92/92 checks aprovados e 92 recibos conferidos por hash.**
Os 55 testes de repositório passaram. Há um experimento de arcos não integrado,
explicitamente FAIL, descrito na seção 3; não é uma API aprovada por esses checks.

O título e o menu de seleção de saves foram observados em diagnósticos Release
com o jogo gerado, sem menu substituto. Menu de gestão e partida completa ainda
não foram obtidos. A evidência de execução usa o snapshot privado de 1.707 corpos;
as adições seguintes foram compiladas e testadas nas fixtures, sem alegar que
todos os 1.720 corpos foram executados. Detalhes: [primeiro frame](phase2-first-frame.md).

## 2. O QUE FOI FEITO

- Entrada PC aprovada: SDL_TextInput não bloqueante; 32 asserções abrangem campo
  simples, resultado inicial de ImeOnBlock e painel assíncrono FepPanel.
- Cadeia GamePad.Draw/AddTouch/DrawSoftLabel: antialiasing do backend CPU zero,
  getter original separado de filtro de textura; sem apagar o pad.
- StringBuilder.Insert(int,string), propriedades automáticas estáticas e
  concatenação de quatro strings/array de objetos, incluindo a falha histórica
  de ToString null. Emissão diferencial: **1.323/1.323**, em 189 métodos.
- Math.Abs int/long e Log10: signedMin lança sem overflow indefinido;
  AppData.GetFig(0) conserva o resultado original, sem correção da lógica.
- Orientação: mapeamento do setter e host atual/Auto; 80 observações fonte e
  12 asserções de política, sem fingir rotação física não implementada.
- Matrix4x4/Vector3 scalar: **21/21**; ordem de MultiplyPoint conferida contra
  CIL autenticado, sem executar ou vincular Unity.
- Medição de memória: intervalos conhecidos, sobreposição removida, páginas
  residentes e snapshot cooperativo sem coleta. Dez asserções do sampler,
  32 + seis da agregação e 26 invariantes nativos de GC.
- UCD 3.1 e controle 3.0: candidatos medidos e recusados; componente LGPL mantido.
- Android: substituição do APK de teste pela cópia original autorizada, hash
  conferido, título e seleção de saves capturados apenas localmente.

Tentativas negativas preservadas: seis falhas iniciais da concatenação de objetos;
erro CS0117 do gerador de oráculo ao redirecionar auto-property não emitida,
corrigido e verificado no corpus completo; resumo JSON final intercalado na
tentativa 12, corrigido por serialização do logger e sem repetição nas 13/14.

## 3. HIPÓTESES

- **CONFIRMADA:** a lacuna TitleForm.SetTouchValue era a dependência transitiva
  do setter de orientação; a tentativa 13 processou START e abriu os saves.
- **CONFIRMADA:** os cinco desvios UCD impedem a substituição independente das
  tabelas históricas. Ambos os candidatos passaram 25.699/25.704 observações.
- **REFUTADA:** UCD da versão documentada basta para reproduzir o provider.
  O Mono documenta Unicode 3.1, mas seus dados incluem compatibilidade histórica CLR.
- **CONFIRMADA:** o Mono histórico tem falha específica em Concat(object[])
  quando ToString retorna null; a correção passou no oráculo fonte.
- **INCONCLUSIVA no Android:** trigonometria/arcos. Geometria experimental:
  .NET x64 180/180, Mono Windows 55/180; estrutura/ordem 360/360. Recibo
  **FAIL 235/360**. Não houve relaxamento nem promoção de Graphics.
- **INCONCLUSIVA:** x87 explica todos os 125 casos compostos. A arquitetura
  I386 e diferenças diretas de trig foram medidas; a causa completa não foi provada.

O usuário decidiu **prosseguir com a API e manter essas diferenças UNKNOWN no
Android**, adiando a instrumentação. Plano, testemunhas e decisão:
[probe de matemática](android-math-probe-plan.md). As sete diferenças ref/out
e Sin(−0) continuam registradas, sem alegação de execução no Android.

## 4. PENDENTES POR GRUPO

São 238 corpos Game e 33 slots sem definição; há dependências compartilhadas,
portanto as famílias abaixo não são uma partição de contagens somáveis:

| Frente | Evidência / próxima lacuna |
|---|---|
| Desenho | DrawArc/FillArc ainda sem integração à API Graphics |
| Balões e buffers | Balloon.Draw depende de campos de renderização e tarefas diferidas |
| Offscreen | GameForm/SoccerForm.InitOffscreen precisam do backend CPU e callbacks |
| Diálogos / novo jogo | Tentativa 14 encontrou SubForm.Update; esse corpo agora compila após os bindings FepPanel |
| Serviços | 53 políticas; emissão não equivale a execução dos caminhos de cobrança/rede |
| Tradução restante | 69/123 SyntaxKinds observados na união emitida: 63 portáveis e 69 Game; não é cobertura semântica integral |

A seleção de saves coincide na ordem dos elementos e no estado vazio observado.
O viewport PC compacto corta parte do rodapé. Escala/fontes não foram qualificadas
pixel a pixel. O aparelho exibiu apresentação vertical; não é design de telas 3DS.

## 5. TOOLCHAIN

Sem nova instalação. Roslyn 5.8.0-1.26319.2, C++17/MSVC 19.51.36252,
SDL2 2.32.10, FreeType 2.15, libogg 1.3.6 e libvorbis 1.3.7.
Oráculos SDK Mono 2.6.5 e .NET moderno permanecem separados do executável.
Flags numéricos conservam /fp:strict; não se forçou precisão maior para imitar
o Mono Windows. Hashes/receitas: [toolchain](../toolchain.md).

REA respondeu; ADB existente comunicou com o S22. Frida listou o aparelho, mas
o attach falhou com conexão ao serviço remoto fechada; nenhuma sessão foi criada.
SDK 3DS e Azahar continuam reservados à Fase 4 e não foram instalados.

## 6. COMPONENTES, LICENÇAS E MEDIÇÕES

Colação MIT/X11: SimpleCollator, suporte e sete recursos, 337.358 bytes de
payload. Parte GNU Library GPL v2: quatro tabelas de caixa/bitmap derivados de
mono/metadata/char-conversions.h, 46.832 bytes, mais 80 bytes numéricos separados.
UCD não substituiu a produção. Fonte do port e receitas de regeneração/religação
permanecem públicos; licença/proveniência são separadas em THIRD_PARTY.md.
A licença global do port não foi escolhida automaticamente.

Tentativa 13, após 60 frames no título, em Release:

| Medida | Bytes |
|---|---:|
| RSS total / commit privado | 158.285.824 / 149.008.384 |
| Código EXE + DLLs, páginas executáveis residentes | 27.869.184 |
| Texturas: payload conhecido residente | 7.693.944 |
| Áudio: buffers próprios conhecidos residentes | 98.304 |
| Fontes: TTF/cache conhecidos residentes | 191.669 |
| Corpos/arrays/strings rastreados residentes | 3.550.780 |

Categorias têm cobertura parcial; overhead, bibliotecas opacas e recursos GPU
não foram atribuídos. Não somar payload/RSS/commit. No checkpoint 300, os 240
frames após aquecimento tiveram média total 51,1037858333 ms e p95 51,8657 ms;
desenho médio 11,4408320833 ms. O total inclui pacing e contém título/menu.
Não é medição de partida nem previsão de RAM/desempenho do Nintendo 3DS.

Assets, fontes e capturas seguem em assets/ e build/, ignorados. Nenhum asset,
binário original ou motor Unity foi acrescentado ao repositório/port.

## 7. BLOQUEIOS

Após a decisão sobre arcos, **nenhuma nova autorização impede a continuidade**.
A instrumentação Android está adiada. Não há autorização para instalar um
componente no aparelho, modificar seu APK ou preparar o toolchain 3DS.

Persistem lacunas de implementação e validação; elas não foram substituídas por
resultados fictícios. O link normal ainda depende dos slots faltantes; diagnósticos
privados usam armadilhas fatais declaradas e não promovem cobertura do jogo.

## 8. RECOMENDAÇÃO / CONTINUIDADE

Integrar o núcleo de arcos ao backend CPU com rasterização/estado testados,
mantendo UNKNOWN Android. Em seguida, completar balões e o ciclo offscreen,
repetindo o fluxo de novo jogo até alcançar a gestão e uma partida completa.
Conservar fixtures, zero perdas do conjunto compilado e publicação por checkpoint.
