# Armazenamento, entrada e núcleo de formulários no PC

As implementações novas vivem em `src/kairo/api/{storage,input,canvas,forms}.hpp`,
`src/kairo/common/{storage,canvas,forms}.cpp` e
`src/kairo/platform/sdl/input.cpp`. Nenhuma classe do jogo foi escrita manualmente.
Os testes compilam fontes C# reconstruídos como novos executáveis de teste;
não carregam as DLLs originais. Os exemplos, saves e chaves dos testes são
sintéticos. Os recibos em `config/phase2-*-tests.json` registram hashes e limites.

## Armazenamento

`configure_storage(preferences_root, &catalog)` substitui a origem de
`IApplication.GetDataPath()`. `Storage` conserva as modalidades usadas pelo jogo:
heap com alias dos arrays, pasta `files/`, recursos somente para leitura e RMS
em `rs/`. `Storage.Setup` não altera a raiz real de I/O: assim também ocorre no
fonte, cujo campo `root_` não é usado pelos métodos de arquivo.

`Storage.HeapFile` usa `String.CompareTo`, portanto nomes no heap seguem a
comparação CurrentCulture histórica do Mono, não igualdade ordinal. O backend
usa `culture_compare` com as tabelas autorizadas; a cultura é fornecida pelo
host, independentemente da língua escolhida no jogo. Os casos sintéticos com
caractere composto e sequência combinante comprovam leitura, substituição sem
nova entrada e remoção equivalentes. O nome da primeira inserção é mantido.
O conjunto Storage/RecordStore agora tem **86/86** casos nos dois perfis. Isso
não altera as chaves ordinais do container PlayerPrefs abaixo.

`AssetReader._getTextAsset` exige prefixo `Data/`, conversão de extensão, `Trim`
e nova tentativa removendo a última extensão. O catálogo do APK contém caminhos
ASCII em minúsculas. A resolução de recursos aplica equivalência ASCII de caixa;
isso não afeta a busca exata de membros dos JARs. Todos os 21 recursos Data do
catálogo local, com 3.275.098 bytes, passaram por leitura e comparação integral,
incluindo 63 variantes de caminho. Nenhum identificador ou conteúdo extraído
entra nesta nota. A semântica Unity para caixa fora do corpus ASCII é UNKNOWN.

O catálogo entrega os TextAssets protegidos já decodificados pelo pipeline
autenticado. `AppData` chama `AssetReader.SetSecurity(..., true)` nas linhas
1894/1904 do fonte reconstruído. Não se deve decodificar o mesmo recurso duas
vezes. A configuração arbitrária `SetSecurity(false)` não foi implementada como
um segundo perfil do catálogo. O carregamento direto não substitui o restante
da API AssetReader, especialmente seleção por língua/DPI e `filelist`.

O formato RMS vem de `RecordStore.WriteRecord/ReadRecord`, `CRC64`, `Encrypter`
e `EncodeUtil`: oito bytes de verificação em big endian, seguidos do payload,
e XOR do envelope. O nome `CRC64` não autoriza substituir o algoritmo por uma
CRC padronizada: a tabela original usa um teste de bit invertido e produz
32 bits dentro de um `long`. Os testes comparam também os bytes do envelope.
O backend não contém chave do jogo. O emissor deve encaminhar os setters
originais `Encrypter.SetEncryptionKey` para
`RecordStore.SetEncryptionKey` com o mesmo array; o setter continua gerado.

São preservados comportamentos observáveis do fonte: `AddRecord(size)` ignora
o tamanho e cria arquivo vazio; `WriteRecord(byte[][])` consome o primeiro array
e zera sua referência no array externo; registros ausentes/vazios devolvem array
vazio; envelope curto ou verificação inválida lança exceção; IDs esparsos contam
pelo maior índice; a peculiaridade de prefixo para rsId >= 10 é mantida.
`RemoveAllRecord` remove todos os arquivos RMS, como no original. Essa operação
não é chamada por uma resposta de inventário vazio de cobrança.

As migrações `PreferencesToFile/FileToPreferences` preservam a condição original
de pelo menos quatro entradas, não quatro caracteres na chave. Arquivos de
save são opacos; importá-los para o diretório não os transforma. O código só
serializa um save se o jogo chamar `WriteRecord`.

O container de preferências `PLSPREF1` é um formato novo da plataforma, não uma
reprodução do SharedPreferences Android. Ele guarda tipo, chave UTF-16 por code
unit e payload; tags desconhecidas são mantidas. Há duas bolsas separadas:
PlayerPrefs tipado e preferências de bytes do KairoPlugin. Chaves com NUL,
surrogates isolados, diferenças de caixa e de normalização foram testadas.
Int32 e float32 conservam os bits, incluindo zero negativo. O importador do
formato Android é UNKNOWN/não implementado. Nenhum save Android real foi usado.

Gravações usam arquivo temporário na mesma pasta, flush e rename; falhas limpam
o temporário e não substituem o destino por conteúdo parcial. Não há alegação
de durabilidade após perda de energia: fsync e recuperação de crash são UNKNOWN.
O conjunto nativo verifica preservação de campos desconhecidos e 32 regravações
de payload opaco de 4.096 bytes. O filesystem não garante ordem de enumeração.

## Entrada

`MotionEvent` e `KeyEvent` conservam arrays por referência, ações e acessos
indexados, inclusive limites e wrap de índices. Os valores de KeyCode foram
medidos nos metadados do SDK original, sem executá-lo. O núcleo `CanvasKeyState`
mantém o histórico de 60 frames, intervalos iniciais 10/4 e a semântica original
de pulse/repeat/double; não foi substituído pelo repeat do SDL.

O adaptador recebe eventos que o backend SDL já coletou, sem esvaziar uma segunda
fila. Agrupa as teclas de `Canvas.VALID_KEYS`, preserva os softkeys de um frame,
e sintetiza mouse down/move/up. O botão direito equivale a Keypad4; o evento de
release conserva `ACTION_DOWN`, peculiaridade de `Canvas.DecideKeyState`.
Não há cancelamento de multitouch, emulação de pinch de debug ou definição de
controles 3DS. Os testes diferenciais cobrem os corpos puros de estado e os
eventos; a coleta física completa do Unity não foi executada.

## Formulários e Canvas

`FormBase` implementa o contrato nativo `TouchValueAccessor` com os dois slots
originais GetTouchValue/SetTouchValue. A interface não adiciona uma segunda base
Object; casts entre interface, formulário e Object conservam a mesma identidade.
O oráculo compila também a interface C# original e compara defaults, despacho
derivado e chamadas base qualificadas. Com esses casos, o conjunto Forms passa
**64/64** nos dois perfis. Isso comprova o contrato de tipo, não uma interação
de toque executada pelo jogo.

`FormBase` conserva os hooks vazios ou com retorno verdadeiro do original,
modo de processo, labels e referências ao manager. `FormManagerBase` contém
stack, Push/Pop/ChangeCurrentForm, reordenação, execução de Init/Finish, eventos
e ordem de Draw. Os testes comparam a classe FormBase original inteira, 25
corpos selecionados do FormManager e seis métodos de labels do Canvas nos
perfis .NET 10 e Mono 2.6.5. SurfaceManager e KairoBase são explicitamente nulos
nessa fixture; callbacks de Init/Finish retornam sucesso. Os erros de bounds
de GetForm refletem `Vector<T>` sobre `List<object>`.

Canvas recebe framebuffer e fonte do host. BeginPaint/EndPaint usam o backend
CPU imediato; os testes verificam dimensão, proporção, identidade do contexto,
pixel e ciclo de vida, não igualdade visual com o Android. `SetDisplayCurrent`
é vazio porque seu corpo original também é vazio. A publicação de labels é
adiada por `SetSoftLabel(string...)` e imediata na sobrecarga por índice.

As partes abaixo estão **bloqueadas por integração**, com exceção explícita em
vez de implementação vazia:

- `FormManagerBase.Execute/OnDraw` agora dispõem de SourceFormExecution e
  adapters tipados, validados em 48/48 cenários do fonte original. Os bindings
  para os objetos gerados reais continuam obrigatórios. Loading, captura e
  handshake entre threads permanecem sem prova. Detalhes no documento
  [bootstrap e scheduler](phase2-bootstrap-scheduler.md).
- `ChangeCurrentForm` exige `host_game_state` dinâmico. `nullptr` aparece apenas
  na fixture sintética: no jogo, o getter original KairoBase.GetInstance cria
  KairoDummy e chama LoadAppList quando a instância ainda não existe. Não se
  pode substituir esse caminho por nulo permanente nem por KairoService.
- Rotas do SurfaceManager exigem `CanvasSurface`; `Touch` representa a entrega
  em ordem inversa aos OnReceiveTouchEvent, e ClearGameTouch é separado de
  ClearTouch. O backend não fornece uma lista vazia fictícia de superfícies.
- Escape exige a ponte de labels/Language/back; captura, thread de loading,
  sincronização entre threads e avisos Android ainda não têm equivalência
  completa. Eles não entram nos IDs verificados pelo recibo.

Referências gerenciadas mantidas por MotionEvent, Storage, Canvas, FormBase e
FormManager participam de `trace_edges/release_edges`. Um ciclo nativo
FormBase↔FormManager foi coletado em teste. Callbacks `std::function` que
capturarem referências gerenciadas precisam de disciplina do host; não têm
inspeção automática da captura pelo coletor.

## Reprodução

```powershell
python tools/test_storage.py --apk '<caminho do próprio APK>'
python tools/test_input.py
python tools/test_forms.py
```

Os contadores atualizados e os IDs exatos estão nos recibos gerados.
`tools/native_api_proof.py` seleciona apenas identidades presentes na fronteira;
não edita os CSVs. Integração no jogo, boot e comportamento Android permanecem
itens separados dos testes unitários de API.
