# SoundBase, SoundOGG e SoundPlayer no PC

`src/kairo/api/sound.hpp` e `src/kairo/common/sound.cpp` fornecem a camada de
controle Kairo sobre o mixer Vorbis incremental. O host chama
`configure_sound(&catalog, &mixer)` antes de carregar áudio e chama
`SoundPlayer.GetInstance().host_pump()` regularmente. O mixer deve sobreviver
ao driver, e o dispositivo SDL deve sobreviver ao mixer. Não há clips de
substituição nem sons inventados para contornar recursos ausentes.

`SoundOGG.Load` remove a última extensão e procura o identificador Resources
do catálogo privado do APK autenticado. Os identificadores ASCII do corpus
são resolvidos sem distinção de caixa. O arquivo é verificado por hash antes
de ser usado. Recurso ausente ainda produz objeto SoundOGG com dados nulos,
como no fonte; seu estado é zero. O handle de dados contém somente caminho
e identidade; o decoder é aberto quando uma porta recebe o som. Nunca é
alocado um PCM da música inteira.

Os corpos de referência são `SoundBase.cs`, `SoundOGG.cs` e `SoundPlayer.cs`.
As seguintes peculiaridades foram preservadas:

- GetState só retorna 0, 2 ou 3. READY=1 existe como constante, mas o getter
  original não o emite. Som carregado sem porta e som encerrado retornam 3.
- Existem quatro portas iniciais. GetPort retorna -1 quando todas estão
  ocupadas, mesmo encontrando prioridade candidata: a variável original de
  resultado nunca recebe a porta encontrada. Não há preempção corrigida.
- Play considera qualquer loop diferente de zero como infinito. SetLoop só
  ativa `AudioSource.loop` para -1. Reproduzir novamente um som ainda ativo
  redefine seu volume e posição, preservando a flag de loop já aplicada.
- O volume é convertido por divisão float32 por 255; mute entrega zero.
  SetVolume/SetMute globais percorrem apenas a playingList, que contém loops.
  Uma reprodução curta já ativa não recebe automaticamente essa atualização.
- Som de efeito novo, quando mutado, não ocupa porta. BGM mutado pode ocupar
  porta e tocar silenciosamente. Retrigger de efeito já ativo também passa
  pelo ramo original que atualiza volume e reinicia a posição.
- StopAll percorre apenas playingList: não passa a parar todos os efeitos.
  Suspend/Resume alteram a flag original e não pausam o dispositivo.
- SetLoop(0) de um som já listado, seguido de Stop, deixa entrada obsoleta na
  playingList. O StopAll original pode então não terminar. O teste observa
  essa entrada, sem executar deliberadamente o laço infinito; o código não
  introduz uma correção silenciosa do bug.

O mixer ganhou `set_loop(voice, bool)`, sem reiniciar a reprodução. Desativar
loop usa o próximo limite da volta que está sendo reproduzida; usar somente
o EOF do decoder permitiria uma volta extra já decodificada na fila. O limite
é calculado por razão inteira entre taxas de amostragem e aplicado no callback.
Ativar loop reabre o gate de EOF apenas para uma voz ainda ativa, sem reviver
voz parada ou terminada. Isso segue o contrato documentado de
[AudioSource.loop no Unity 5.3](https://docs.unity3d.com/530/Documentation/ScriptReference/AudioSource-loop.html).
O intervalo documentado de volume é 0 a 1; a saturação da folha de saída é
testada como política nativa. O comportamento exato do setter fora desse
intervalo no Android original continua UNKNOWN; não é um teste do motor.
[Referência de AudioSource.volume](https://docs.unity3d.com/530/Documentation/ScriptReference/AudioSource-volume.html).

## Evidência

`python tools/test_sound.py` compila as três classes C# originais integralmente,
com facades sintéticas de Resources/AudioSource, e compara 32 cenários com C++.
São 64 comparações: .NET 10 e execução em Mono 2.6.5. Como o fonte usa C# 6,
o executável do oráculo Mono é produzido pelo Roslyn contra as referências
históricas do Mono; não se pede ao smcs que interprete sintaxe C# 6.

`python tools/test_sound.py --apk '<APK próprio>'` acrescenta leitura do catálogo
real, carregamento/descarte de todos os 27 vínculos de áudio e streaming pelo
SDL dummy. O cenário usa quatro vozes, blocos de 256 frames e filas de 1.024:
32.768 bytes de ring e 16.384 bytes de scratch. Verifica falta de quinta porta,
transições de loop, fim no limite calculado de played_frames e ausência de
reinício ao alterar a flag. O menor áudio medido tem 0,272630... segundos.
São medidas do backend e dos assets locais, não um boot do jogo nem uma
comparação auditiva contra o Android. Buffers internos do codec/SDL e fidelidade
de resampling contra Unity continuam UNKNOWN.

Os recibos são `config/phase2-sound-tests.json` e
`config/phase2-media-tests.json`. O primeiro contém os nove IDs exatos da
fronteira de som, hashes dos fontes, executáveis e oráculos, além das limitações.
O segundo continua verificando decodificação incremental dos 27 Ogg e o mixer
independentemente da API Kairo. Nenhum conteúdo ou identificador privado de
áudio aparece nesses recibos.

## Limites explícitos

Expansão acima de quatro portas não tem backend e lança NotSupported, em vez
de criar vozes fictícias. Não há chamada a SetPortMax no Assembly-CSharp.
Reinicializar SoundPlayer enquanto efeitos da geração anterior ainda tocam
também exige mais vozes/componentes: Init rejeita esse caso antes de alterá-lo.
Não há chamada a Init/Dispose do player no Assembly-CSharp. Recriar instâncias
com AudioSources Unity antigos ainda vivos não é alegado como reproduzido.

O oráculo sintético não prova a implementação Unity de unload de AudioClip,
latência do dispositivo, execução entre threads ou amostras emitidas. No port,
Stop/Dispose liberam o decoder associado; os handles de recursos não retêm PCM.
Callbacks são enviados pela rota RunOnUiThread do IApplication nativo. Execução
no jogo e comportamento em aparelho permanecem pendentes de integração.
