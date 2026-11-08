# AGENTS.md — Port de Pocket League Story para Nintendo 3DS

## 1. Missão

Você vai portar Pocket League Story (Kairosoft, Android, Unity 5.3.4f1 com Mono) para o Nintendo 3DS, a partir do código-fonte C# reconstruído na fase anterior (tag `v1.0.0-csharp-reconstruction`), que é idêntico ao original em todos os métodos.

O alvo principal é o **New Nintendo 3DS XL**. Funcionar no 3DS original é meta secundária: não sacrifique o alvo principal por ela, mas não a descarte sem medir.

O C# não roda no 3DS: não há runtime .NET utilizável no homebrew, e o suporte do Unity ao 3DS nunca foi público. O jogo será traduzido para C++ e construído com o toolchain homebrew (devkitARM, libctru, citro2d, citro3d). A referência de comportamento é sempre o jogo original rodando no Android; quando houver dúvida sobre como algo deve funcionar, a resposta está no fonte C# reconstruído e no APK, nunca em suposição.

## 2. Regras de conteúdo (invioláveis)

**Decisão posterior do usuário para a Fase 2:** os literais de texto já presentes no C# reconstruído podem permanecer no C++ gerado, como parte do código de engenharia reversa. Essa autorização específica prevalece sobre a restrição de literais dos itens 2/8 e da Fase 1 abaixo. Ela não autoriza copiar textos, tabelas, fontes, imagens ou qualquer conteúdo dos assets para o código ou repositório. `Language._translateText` conserva sua lógica e recebe as tabelas dos assets locais. Demais regras mantidas.

Estas regras definem o que pode existir no repositório e no que é distribuído. Elas prevalecem sobre qualquer conveniência técnica.

1. **O repositório contém apenas código obtido por engenharia reversa e código novo escrito para o port.** Isso inclui: o C# reconstruído, o código C++ traduzido dele, a reimplementação da KairoLibrary, o tradutor, as ferramentas de extração e conversão de assets, scripts de build e documentação.
2. **Nenhum asset do jogo entra no repositório nem em qualquer arquivo distribuído.** Assets são: imagens, sprites, texturas, fontes, áudio, música, dados de jogo (tabelas, textos, scripts de eventos, nomes, parâmetros), cenas, prefabs e qualquer outro arquivo extraído de `assets/` do APK ou dos bundles Unity. Nem em forma original, nem convertida, nem embutida em código (arrays de bytes, strings literais com textos do jogo, imagens codificadas em base64), nem em capturas de tela que sirvam como fonte de asset.
3. **Os assets vêm exclusivamente do APK do próprio usuário, em tempo de build.** O repositório fornece o pipeline: o usuário aponta para o APK que possui, as ferramentas extraem e convertem, e o resultado vai para um diretório ignorado pelo Git. O build falha com uma mensagem clara se o APK não for fornecido.
4. **O pipeline verifica o APK pelo hash** (SHA-256 registrado em `docs/apk.md`, o mesmo da fase anterior) e, se a versão for outra, avisa e continua apenas se o usuário confirmar. O pipeline nunca baixa, procura ou sugere onde obter o APK.
5. **Nenhum binário do jogo original ou do Unity** (`.dll`, `.so`, `classes.dex`, player, motor) entra no repositório nem no build. O port não usa o motor Unity em nenhuma forma.
6. **Nada de marca.** Logos, ícones e artes da Kairosoft não entram no repositório. O ícone e o banner do homebrew (`.smdh`, banner do `.cia`) são originais, criados para o port, e dizem que é um port não oficial.
7. **A saída distribuível é um binário sem assets** (`.3dsx` e/ou `.cia`) que carrega os assets de um diretório do cartão SD gerado pelo pipeline do usuário, ou um pipeline que o usuário roda localmente para produzir o pacote completo para si. Nunca um pacote pronto com assets.
8. **Textos do jogo são assets.** Traduções, nomes de jogadores, times, eventos, mensagens e menus ficam nos arquivos extraídos. O código referencia esses textos por identificador ou índice, nunca pelo conteúdo. Strings necessárias ao código (chaves de arquivo, nomes de campos de formato) são permitidas; frases visíveis ao jogador não.
9. **README e release deixam isso explícito:** o projeto é um port não oficial, não afiliado à Kairosoft; requer que o usuário possua o jogo e forneça o próprio APK; não distribui assets nem binários originais.

Se uma tarefa parecer exigir violar uma dessas regras, pare e pergunte. Não existe exceção "temporária" ou "só para teste": para testar, use o pipeline com o APK local, como qualquer usuário.

## 3. Como o jogo é construído (contexto da fase anterior)

O jogo tem duas camadas bem separadas, e isso define toda a estratégia:

| Assembly | Métodos | O que é | No port |
|---|---:|---|---|
| `Assembly-CSharp` | 1.958 | Lógica do jogo, escrita em C# "estilo Java" contra a API da KairoLibrary | **Traduzida** mecanicamente para C++ |
| `KairoLibrary` | 3.287 | Camada de compatibilidade que imita APIs Java (`Graphics`, `Image`, `Canvas`, `java.util.Vector`, `java.io.*`, formulários, som, armazenamento) sobre o Unity | **Reimplementada**: só a API pública que o jogo usa, sobre SDL2 e depois sobre libctru/citro2d. O interior (que fala com o Unity) é descartado |

O jogo não usa o Unity diretamente, salvo exceções a confirmar na Fase 0. O Unity, portanto, sai da equação. A camada Java do APK (101 classes de integração Android: anúncios, cobrança, notificações, teclado, WebView, licenciamento) não faz parte do port e é substituída pelo equivalente da plataforma ou removida.

O compilador original do `Assembly-CSharp` é o `smcs` do Unity 5.3 (C# 3 na prática, sem LINQ nem recursos modernos), e a KairoLibrary foi compilada com Roslyn 1.1 (C# 6). O código do jogo é um subconjunto pequeno e regular do C#, o que torna um tradutor próprio viável.

## 4. Hardware alvo

| | New 3DS / XL | 3DS original |
|---|---|---|
| CPU | ARM11 quad-core, 804 MHz | ARM11 dual-core, 268 MHz |
| RAM disponível ao app | ~124 MB (modo estendido) | ~64 MB |
| Tela superior | 400×240 (3D estereoscópico, não usar) | idem |
| Tela inferior | 320×240, resistiva, toque | idem |
| Entrada | Toque, botões, circle pad, C-stick (New) | Toque, botões, circle pad |
| GPU | PICA200, via citro3d/citro2d | idem |
| Áudio | DSP via ndsp, mixagem por software para formatos comprimidos | idem |

O jogo é 2D, leve e originalmente para Android de 2016; deve caber com folga no New 3DS. A meta secundária depende de medir CPU e memória cedo no perfil de 3DS antigo do emulador.

O jogo original é landscape, com uma tela sensível ao toque. No 3DS, só a tela inferior tem toque. A distribuição entre as duas telas e o suporte a botões são **decisões de design do usuário** (Fase 3); não as tome sozinho.

## 5. Ferramentas

- **Repositório da fase anterior:** fonte C# reconstruído, verificador, documentação. É a referência de comportamento.
- **REA (Reverse Engineer Anything):** disponível como CLI e MCP para inspecionar o APK, os bundles e, se necessário, os `.so` do Unity. Confirme que responde no início de cada sessão.
- **AssetRipper** (ou equivalente): extração dos assets dos arquivos de dados do Unity. Só roda localmente sobre o APK do usuário.
- **Tradutor C# → C++:** escrito nesta fase, sobre o Roslyn moderno como front-end (AST e semântica).
- **PC:** SDL2 (vídeo, áudio, entrada), CMake, compilador C++17.
- **3DS:** devkitPro (devkitARM, libctru, citro3d, citro2d), `tex3ds` para texturas, `bannertool`/`makerom` para `.cia`, emulador Azahar (sucessor do Citra), hardware com Luma3DS para validação.
- Registre a versão de tudo em `docs/toolchain.md`.

## 6. Estrutura do repositório

```
AGENTS.md
README.md                  # port não oficial; requer APK próprio; não distribui assets
PROGRESS.md                # gerado por tools/progress — não editar à mão
docs/
  toolchain.md
  apk.md                   # versão e SHA-256 do APK esperado; nada sobre onde obtê-lo
  boundary.md              # API da KairoLibrary usada pelo jogo (Fase 0)
  assets.md                # inventário de assets: tipos, formatos, tamanhos (sem os assets)
  design/                  # decisões de telas e controles
  notes/
reference/                 # submódulo ou cópia do C# reconstruído (somente leitura)
translator/                # tradutor C# → C++
src/
  game/                    # C++ traduzido do Assembly-CSharp (gerado; regenerável)
  kairo/                   # reimplementação da API da KairoLibrary
    api/                   # cabeçalhos: a API pública, independente de plataforma
    common/                # implementação compartilhada (coleções, streams, lógica de UI)
    platform/sdl/          # backend PC
    platform/ctr/          # backend 3DS
  main/
tools/
  extract-assets           # APK do usuário → assets/ (ignorado pelo git); verifica hash
  convert-assets           # assets extraídos → formatos do alvo (t3x, áudio, dados)
  translate                # roda o tradutor sobre reference/ e gera src/game/
  build-pc, build-3ds
  progress
tests/
  translator/              # fixtures do tradutor
  kairo/                   # testes da reimplementação contra comportamento conhecido
assets/                    # SAÍDA LOCAL do pipeline — no .gitignore, nunca commitado
build/                     # no .gitignore
```

`.gitignore` inclui `assets/`, `build/`, qualquer `*.apk`, `*.dll`, `*.so`, `*.dex`, e os formatos convertidos (`*.t3x`, áudio, dados). Um teste de CI falha se algum arquivo com esses padrões, ou acima de um tamanho limite, for commitado.

## 7. Registro de progresso

Esta fase tem três inventários, cada um com estado próprio, e `PROGRESS.md` agrega os três.

`config/boundary.csv` — API da KairoLibrary a reimplementar, um membro por linha:
```
id,tipo,membro,chamadores,estado,backend_sdl,backend_ctr,notas
```
Estados: `todo`, `stub` (compila, não faz nada), `implemented`, `verified` (comportamento conferido contra o original ou contra teste).

`config/translation.csv` — métodos do `Assembly-CSharp`, um por linha:
```
id,tipo,metodo,estado,notas
```
Estados: `todo`, `translated` (C++ gerado compila), `runs` (exercitado em jogo no PC sem erro), `verified` (comportamento conferido).

`config/assets.csv` — assets por tipo:
```
tipo,quantidade,formato_origem,formato_alvo,estado,notas
```
Estados: `inventoried`, `extracts`, `converts`, `loads` (carrega no alvo).

Nenhum estado é editado à mão: scripts de build e teste os atualizam.

## 8. Fases

### Fase 0 — Mapear a fronteira

1. Com o Roslyn moderno sobre `reference/`, liste todo membro da KairoLibrary (tipo, método, propriedade, campo, evento) referenciado pelo `Assembly-CSharp`. Isso é `config/boundary.csv` e `docs/boundary.md`. Agrupe por área: desenho, imagens, fontes e texto, som, armazenamento, entrada, formulários/UI, coleções e streams, rede, utilitários.
2. Liste toda referência direta do `Assembly-CSharp` ao `UnityEngine`. Espera-se que sejam poucas; cada uma precisa de uma decisão (reimplementar, remover, substituir).
3. Classifique cada área da fronteira: **portável** (lógica pura, traduz-se como o jogo), **reimplementar** (toca hardware ou SO) ou **remover** (anúncios, cobrança, rede, licenciamento, notificações).
4. Para a área de rede e cobrança: identifique o que o jogo faz quando essas funções falham ou estão desligadas, para que o port as desligue sem quebrar o fluxo.
5. Relate os números: quantos membros em cada categoria. Esse é o tamanho real do trabalho.

### Fase 1 — Inventário de assets

1. Rode AssetRipper sobre o APK local e inventarie tipos, quantidades, formatos, dimensões de textura, duração e formato de áudio, tamanho total. Registre em `docs/assets.md` e `config/assets.csv`, **sem incluir os assets**.
2. Identifique como o jogo carrega cada tipo (pelo fonte: `Resources.Load`, arquivos em `StreamingAssets`, dados embutidos em classes). O carregamento no port precisa fornecer o mesmo conteúdo pelo mesmo identificador.
3. Estime memória: texturas convertidas para formatos do PICA200, áudio decodificado ou em streaming. Compare com os limites dos dois alvos.
4. Textos: localize onde ficam os textos do jogo e confirme que o código os referencia por chave ou índice. Se o fonte C# tiver textos literais visíveis ao jogador, anote-os: no port eles saem para um arquivo de dados gerado pelo pipeline a partir do fonte reconstruído, não ficam no C++ commitado (regra 8).

### Fase 2 — Tradutor e KairoLibrary no PC

1. **Tradutor.** Construa o tradutor C# → C++ sobre o subconjunto que o `Assembly-CSharp` realmente usa (meça esse subconjunto antes: quais construções sintáticas aparecem). Decisões a fixar e documentar: representação de classes e herança, strings (UTF-16 como no .NET, para preservar comportamento), arrays com verificação de limites opcional, coleções, exceções, `switch`, propriedades, eventos, inteiros com overflow definido (C# sem `checked` faz wrap; C++ com signed é indefinido, use tipos e operações que garantam wrap), divisão e módulo de negativos, ponto flutuante (`float` do C# é IEEE single; evite promoções do C++), ordem de avaliação. Teste com fixtures em `tests/translator/`.
2. **KairoLibrary sobre SDL2.** Implemente `src/kairo/api` com backend SDL. Comece por coleções, streams e utilitários (portáveis), depois desenho e imagens, depois fontes e texto, depois som, depois armazenamento e entrada. Formulários e UI são a área maior; deixe por último.
3. **Primeiro boot no PC.** Meta intermediária: título e menu aparecem. Depois: uma partida completa.
4. **Verificação de comportamento.** Onde for possível, compare com o original: mesmos dados de save produzem a mesma tela; mesma sequência de entradas produz o mesmo resultado. Registre discrepâncias como bugs do port, nunca como "melhorias".

O PC é um alvo de desenvolvimento, não de distribuição. Ele existe para separar erros de tradução de particularidades do 3DS.

### Fase 3 — Design para o 3DS (decisão do usuário)

Antes de qualquer código do backend 3DS, apresente ao usuário, em `docs/design/`, opções para:

1. **Divisão das telas:** o que vai para a tela superior (400×240, sem toque) e o que vai para a inferior (320×240, toque). Inclua mockups ou descrições por tela do jogo (campo, menus, diálogos, listas).
2. **Escala e proporção:** a resolução original e como mapeá-la sem distorção.
3. **Controles:** mapeamento de botões e circle pad para as ações de toque, cursor virtual ou navegação direta por menus.
4. **Fonte:** a legibilidade dos textos na resolução do 3DS.

Espere a decisão. Implemente a escolhida.

### Fase 4 — Backend 3DS

1. Implemente `src/kairo/platform/ctr` sobre libctru e citro2d: vídeo nas duas telas, toque, botões, áudio via ndsp, arquivos no SD, save.
2. Converta assets com `tools/convert-assets` para os formatos do alvo (texturas `t3x`, áudio no formato escolhido, dados). Tudo em `assets/`, fora do Git.
3. Rode no Azahar primeiro, no perfil New 3DS. Meça frame time e memória. Depois no perfil 3DS antigo.
4. Valide em hardware real. Problemas de timing, áudio e toque costumam só aparecer no aparelho.
5. Empacote `.3dsx` (para o Homebrew Launcher) e `.cia` (instalável), ambos **sem assets**, com ícone e banner originais do port.

### Fase 5 — 3DS antigo (meta secundária)

Só depois do New 3DS funcionar. Meça onde o tempo vai (perfil), otimize o que for necessário na reimplementação (não na lógica traduzida, que deve permanecer fiel), e decida com o usuário se vale manter o suporte.

## 9. Regras de trabalho

1. **A lógica do jogo não é "melhorada".** Bugs do original são preservados, a menos que o usuário decida o contrário caso a caso. O que muda é a camada de plataforma.
2. **O C++ do jogo é gerado, não editado.** Se o tradutor erra, corrija o tradutor e regenere. Edições manuais em `src/game/` são proibidas; se um caso exigir exceção, ela vive no tradutor como regra explícita e documentada.
3. **Fato ou hipótese.** Afirmações sobre o comportamento do jogo citam o método do fonte reconstruído. O que não foi verificado é `UNKNOWN`.
4. **Estados gerados, não declarados.** `PROGRESS.md` e os CSVs vêm dos scripts.
5. **Pare e pergunte** para decisões de design (Fase 3), para qualquer coisa que toque as regras da seção 2, para instalar ferramentas no sistema e quando uma função da fronteira não puder ser reimplementada fielmente.
6. **Protocolo de sessão:** ao começar, leia `PROGRESS.md` e os últimos commits, confirme o REA e o APK local (hash), rode os testes; ao terminar, regenere `PROGRESS.md`, faça commit do que está pronto e relate em poucas linhas o que avançou, o que bloqueou e o que recomenda.
7. **Relatórios** seguem o formato da fase anterior: progresso por inventário, o que foi feito, hipóteses confirmadas e refutadas, pendências, toolchain, bloqueios e recomendação.
