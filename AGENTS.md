# AGENTS.md — Port de Pocket League Story para Nintendo 3DS

## 1. Missão

Portar Pocket League Story (Kairosoft, Android, Unity 5.3.4f1 com Mono) para o Nintendo 3DS, a partir do código C# reconstruído na fase anterior (tag `v1.0.0-csharp-reconstruction`), idêntico ao original em todos os métodos.

O alvo principal é o **New Nintendo 3DS XL**. O 3DS original é bônus: não sacrifique o alvo principal por ele.

O projeto tem duas metades, separadas por um marco chamado **congelamento** (seção 4):

- **Antes do congelamento — fidelidade.** O C# é traduzido mecanicamente para C++ por um tradutor próprio. O C++ do jogo é gerado, nunca editado à mão, e a lógica do jogo não é alterada. A referência de comportamento é o jogo original no Android ARM.
- **Depois do congelamento — evolução.** O C++ gerado pela última vez passa a ser o código-fonte do projeto. O tradutor é aposentado. A partir daí entram a adaptação ao 3DS e as melhorias de jogo decididas pelo usuário.

## 2. Regras de conteúdo (invioláveis, valem nas duas metades)

1. **O repositório contém apenas código obtido por engenharia reversa e código novo escrito para o port:** o C# reconstruído (como submódulo), o C++ traduzido, a reimplementação da KairoLibrary, o runtime, o tradutor, ferramentas, scripts e documentação.
2. **Nenhum asset do jogo entra no repositório nem em arquivo distribuído:** imagens, sprites, fontes, áudio, dados de jogo, pacotes de idioma, cenas, nem em forma original, convertida ou embutida em código. Capturas de tela e saves ficam fora do Git.
3. **Os assets vêm exclusivamente do APK do próprio usuário, em tempo de build**, verificado pelo SHA-256 registrado em `docs/apk.md`. O pipeline nunca baixa, procura ou indica onde obter o APK, e o build falha com mensagem clara sem ele.
4. **Nenhum binário do jogo original ou do Unity** entra no repositório ou no build. DLLs usadas como oráculo de teste ficam locais e não são incorporadas.
5. **Nada de marca.** Ícone e banner do homebrew são originais e dizem que o port é não oficial.
6. **O distribuível é um binário sem assets** (`.3dsx`/`.cia`) que lê os assets de um diretório do SD gerado pelo pipeline do usuário.
7. **Textos:** os literais presentes no C# reconstruído fazem parte do código de engenharia reversa e permanecem no C++. Os textos que estão nos assets (pacotes de idioma, dados) continuam vindo dos assets.
8. **README e releases** declaram: port não oficial, não afiliado à Kairosoft, requer que o usuário possua o jogo e forneça o próprio APK, não distribui assets nem binários originais.
9. O CI recusa formatos proibidos e arquivos acima de 2 MB. Não existe exceção "só para teste".

Se uma tarefa parecer exigir violar uma dessas regras, pare e pergunte.

## 3. Arquitetura

| Camada | Origem | Tratamento |
|---|---|---|
| Jogo (`Assembly-CSharp`, 1.958 métodos) | C# reconstruído | Traduzido para C++ |
| KairoLibrary portável (coleções, streams, utilitários) | C# reconstruído | Traduzida pelo mesmo tradutor |
| API Kairo de plataforma (desenho, imagens, texto, som, armazenamento, entrada, formulários) | Reimplementação | Código novo em `src/kairo/`, com backends: nulo (medição), SDL (PC), CTR (3DS) |
| Runtime (strings UTF-16, arrays, exceções, coletor, colação e formatação numérica do Mono) | Código novo e componentes do Mono sob licença registrada | `src/runtime/` |
| Serviços Android (anúncios, cobrança, rede, licenciamento, notificações) | Removidos | Políticas offline documentadas em `docs/design/services.md` |

O PC é alvo de desenvolvimento, não de distribuição.

### Decisões de runtime já tomadas

- **Memória:** coletor de lixo próprio por rastreamento. Marcar e varrer, sem mover objetos; preciso no heap (mapas de ponteiros por tipo gerados pelo tradutor); conservador em pilhas e registradores, com ponteiros internos reconhecidos; referências emitidas como ponteiros comuns, sem contagem e sem barreira de escrita; coleta só em pontos seguros (fim de frame acima de um limite, transições de tela, carregamentos, chamadas a `GC.Collect` do fonte); threads de trabalho cooperativas. O bdwgc serve apenas de referência de desempenho no PC.
- **Recursos nativos:** onde o original libera explicitamente, a liberação é imediata; o restante é liberado na coleta, com coleta garantida nas transições de tela.
- **Semântica:** strings UTF-16 com colação do Mono; inteiros com wrap; ordem de avaliação do C#; formatação numérica do Mono; verificações de nulo e de limites preservadas.
- **Ponto flutuante:** a referência é o Android ARM (armeabi-v7a). A regra de emissão é definida pela leitura do JIT do Mono e só é adotada após confirmação em aparelho.
- **Áudio** em streaming; **texturas** sem perda até medição que exija outra coisa; **fontes** rasterizadas a partir do TTF do APK.
- **Serviços offline:** registro local, cobrança indisponível sem conceder itens pagos e sem remover estado do save, anúncios removidos.

### Orçamento

O jogo pede 20 quadros por segundo (`Main.OnUpdate`, `SetTargetFps(20)`): **50 ms por frame**. Lógica mais API precisam caber nisso no New 3DS, com folga para a GPU. A medição que decide é no aparelho real; o emulador não reproduz a velocidade do hardware.

## 4. Marcos

### Fase 2 — Tradução fiel (em andamento)

Termina no congelamento, que exige os cinco critérios abaixo, todos comprovados por script ou medição:

1. **Tradução completa:** 1.958 de 1.958 métodos do jogo compilando, nenhum slot virtual pendente, as 53 políticas offline integradas aos chamadores.
2. **Coletor aplicado e desempenho confirmado:** no **New 3DS real**, com backend nulo, nenhum frame acima de 50 ms nas janelas de menu e de partida, incluindo coletas, em três execuções; e partida com média abaixo de 20 ms. (Alterado pelo usuário em 2026-11-12; a antiga exigência de razão C++/Mono ≤ 1 nos kernels virou melhoria opcional em `docs/backlog.md`.) A medição com vídeo real é refeita na Fase 4.
3. **Jogo percorrido de ponta a ponta no PC:** roteiro de cobertura em `docs/coverage-plan.md` (todas as telas, uma temporada completa, saves, todos os tipos de evento) executado sem erro, com a cobertura de execução por método registrada. Métodos nunca alcançados são listados e justificados.
4. **Fidelidade resolvida:** regra de ponto flutuante confirmada em aparelho Android; divergências de `ref`/`out` e trigonometria resolvidas ou documentadas com decisão do usuário; telas comparadas com o original.
5. **Código legível:** o tradutor emite C++ adequado a manutenção manual: um arquivo por classe, nomes originais de tipos, membros e parâmetros, sem ruído de runtime visível além do necessário, formatação consistente. O usuário aprova uma amostra antes da geração final.

### Congelamento

Cumpridos os cinco critérios e com aprovação explícita do usuário:

1. Gere o C++ pela última vez e rode a verificação completa.
2. Marque a tag `v1.0.0-faithful`. Ela é a versão fiel: comportamento do original, sem melhorias.
3. Mova o tradutor para `tools/translator-archived/`, somente leitura, com nota explicando que não deve mais ser executado sobre `src/game/`.
4. A partir daqui `src/game/` é código-fonte editável.

O congelamento é sem volta na prática. Na dúvida, atrase-o. Nunca o execute sem a aprovação do usuário.

### Fase 3 — Design para o 3DS (decisão do usuário)

Propostas em `docs/design/` para divisão das duas telas (400×240 sem toque, 320×240 com toque), escala, controles por botões e circle pad, teclado do sistema e legibilidade das fontes. Pode ser prototipada no PC com duas janelas nas resoluções do 3DS. Nada é implementado sem a escolha do usuário.

### Fase 4 — Backend 3DS

Vídeo pela GPU (citro2d/citro3d), som (ndsp), toque e botões, arquivos e saves no SD, empacotamento `.3dsx` e `.cia` sem assets. Validação em hardware. Inclui refazer no New 3DS real a medição de desempenho do critério 2 com vídeo e áudio reais.

### Fase 5 — Melhorias e 3DS antigo

Melhorias de jogo pedidas pelo usuário, feitas no C++ após o congelamento, cada uma em commits próprios e descrita em `docs/changes-from-original.md`. Suporte ao 3DS antigo conforme medição.

## 5. Regras de trabalho

### Antes do congelamento

1. **A lógica do jogo não é alterada.** Bugs do original são preservados.
2. **`src/game/` é gerado.** Se o tradutor erra, corrija o tradutor e regenere. Nenhuma edição manual.
3. **Nenhuma melhoria de jogo** é implementada, mesmo que pedida de passagem; registre-a em `docs/backlog.md` para a Fase 5.
4. **Nenhuma verificação de nulo ou de limites é removida** sem aprovação do usuário.
5. **Meça antes de otimizar.** Otimizações entram no runtime, na API ou no emissor, nunca na lógica, e cada uma tem medição antes e depois.

### Depois do congelamento

6. `src/game/` é editado diretamente. Toda mudança de comportamento em relação à tag `v1.0.0-faithful` é intencional, isolada em commit próprio e registrada em `docs/changes-from-original.md`.
7. Correções de fidelidade descobertas depois são feitas à mão e registradas como tais.
8. Mudanças no formato de save exigem decisão do usuário sobre compatibilidade com os saves do Android.

### Sempre

9. **Fato ou hipótese.** Afirmações sobre o comportamento citam o método do C# reconstruído ou a medição. O que não foi verificado é `UNKNOWN`.
10. **Estados gerados, não declarados.** `PROGRESS.md` e os CSVs vêm dos scripts.
11. **Cadência de verificação:** entre checkpoints, só os testes do componente alterado. A verificação completa roda antes de publicar um checkpoint. Publique a cada marco e sempre antes de encerrar a sessão; não deixe trabalho local sem verificação de uma sessão para outra.
12. **Dependências:** bibliotecas de código aberto com licença permissiva (MIT, BSD, zlib, Apache 2, Unicode) estão pré-autorizadas em `build/deps/`, a partir da fonte oficial, com versão e hash em `docs/toolchain.md` e licença em `THIRD_PARTY.md`. Licenças copyleft e instalações no sistema exigem pergunta. Componentes já autorizados: SDL2, FreeType, libogg, libvorbis, colação e formatação numérica do Mono (incluindo as tabelas sob LGPL v2, mantidas separadas), devkitPro e Azahar.
13. **Pare e pergunte** para: decisões de design, qualquer coisa que toque a seção 2, dependência fora da regra 12, remoção de verificações, mudança que dependa de suposição sobre threads, e o congelamento.
14. **Não pare** para confirmar hipóteses técnicas: teste-as. Hipóteses refutadas ficam registradas e não se repetem.
15. **Protocolo de sessão:** ao começar, leia `PROGRESS.md` e os últimos commits, confirme o APK local pelo hash e rode os testes do componente em que vai trabalhar. Ao terminar, regenere `PROGRESS.md`, publique o checkpoint verificado e relate.

## 6. Registro de progresso

`PROGRESS.md` é gerado e mostra, nesta ordem:

1. **Os cinco critérios do congelamento**, cada um com estado (`pendente`, `em andamento`, `cumprido`) e a evidência.
2. Tradução: métodos `todo`, `translated`, `runs`, `verified`.
3. Fronteira da KairoLibrary: `todo`, `stub`, `implemented`, `verified`.
4. Desempenho: CPU por frame no PC (backend nulo) e no ARM, razão contra o Mono nos kernels, coletas e duração, tamanho do binário.
5. Assets por tipo e estado do pipeline.

## 7. Relatórios

Oito seções, como nas fases anteriores: progresso, o que foi feito, hipóteses (confirmadas, refutadas, inconclusivas, com evidência), pendências, toolchain, componentes externos, bloqueios, recomendação. Inclua sempre a tabela dos cinco critérios do congelamento, resultados negativos, e o que depende do usuário. Números exatos; `UNKNOWN` para o que não foi medido.
