"""Generate port progress and asset documentation from measured inventories."""
from collections import Counter
import csv
import json
from pathlib import Path
from update_phase2_progress import refresh

ROOT=Path(__file__).resolve().parents[1]
csv.field_size_limit(2_000_000)


def load(name):return json.loads((ROOT/name).read_text(encoding='utf-8-sig'))


def rows(name):
    with (ROOT/name).open(encoding='utf-8-sig',newline='') as file:return list(csv.DictReader(file))


def mib(value):return f'{value/1048576:.6f}'


def assets_document(asset,phase2=None):
    custom=load('config/custom-asset-formats.json')
    ripper=load('config/assetripper-summary.json')
    text=load('config/csharp-subset-summary.json')['string_summary']
    memory=asset['memory']
    lines=['# Inventário de assets e estimativa de memória','',
        '**Somente metadados e contagens. Nenhum asset, texto, nome de jogador/time, chave ou binário original está neste documento ou nos CSVs publicados.** '
        'O APK próprio foi autenticado pelo SHA-256 de docs/apk.md e permaneceu inalterado. A análise/decodificação local foi autorizada pelo usuário. '
        'Conteúdo e logs completos ficam exclusivamente em assets/ e build/, ignorados pelo Git.','',
        '## Cobertura e níveis de contagem','',
        f"Foram classificados **{asset['zip_asset_entries']} arquivos de dados sob assets/**: "
        f"{asset['serialized_files']} serializados Unity, {asset['resource_sidecars']} sidecars de áudio, "
        f"{len(asset['standalone_pngs'])} PNG avulso e {asset['loose_xml_files']} XML. "
        f"Total: **{asset['zip_asset_bytes']} bytes descomprimidos**, {asset['zip_asset_compressed_bytes']} bytes de payload ZIP. "
        'DLLs, símbolos e executáveis não são assets desta contagem e não foram copiados para o port.','',
        f"Os serializados contêm **{asset['serialized_objects']} objetos originais**. O leitor independente consumiu integralmente as tabelas de metadados. "
        f"AssetRipper {ripper['version']} reconciliou todos os objetos, com **{ripper['missing_original_count']} ausentes**, "
        f"**{ripper['texture_metadata_matches']}/99 texturas** e **{ripper['audio_metadata_matches']}/27 áudios** iguais em seus campos medidos. "
        f"Seus {ripper['assetripper_objects']} objetos incluem {ripper['synthesized_or_unmapped_objects']} auxiliares gerados pela ferramenta, excluídos do inventário original. "
        'No inventário da Fase 1 não houve exportação de projeto, assemblies ou mídia pelo AssetRipper. A conversão local de áudio da Fase 2 é relatada adiante. [Auditoria](notes/assetripper-inventory.md).','',
        'Há 1.159 serializados com versão 5.3.4f1 e um com 5.3.2p3; isso não altera a versão Unity identificada do jogo. '
        '[Auditoria independente de formato](notes/unity-metadata-audit.md). Os níveis ZIP, objeto Unity e membro de container se sobrepõem: **não somar suas contagens ou bytes**.','',
        '## Tipos Unity principais','',
        '| Tipo | Objetos | Bytes dos objetos serializados |','|---|---:|---:|']
    for name in ('Texture2D','Sprite','AudioClip','Font','TextAsset','Shader','MonoScript','MonoBehaviour','GameObject','Camera','Material','Mesh'):
        value=asset['unity_types'][name]
        lines.append(f"| {name} | {value['count']} | {value['object_bytes']} |")
    lines += ['', 'A lista integral de tipos/IDs está em [config/assets.csv](../config/assets.csv) e '
        '[config/asset-summary.json](../config/asset-summary.json); o cruzamento com nomes completos Unity está em '
        '[config/assetripper-summary.json](../config/assetripper-summary.json). Shaders, MonoScripts, settings, câmeras e prefabs do motor '
        'não significam que haverá Unity no port; o backend terá implementação própria. Sprites podem compartilhar texturas e não geram outra cópia de pixels nesta estimativa.','',
        '## Contêineres e conteúdo do jogo','',
        f"**{asset['text_assets']} TextAssets**: {asset['custom_containers']} contêineres próprios JarInflater "
        f"({asset['encrypted_containers']} transformados por XOR, com round trip conferido) e cinco arquivos auxiliares. "
        f"Os contêineres têm **{asset['container_member_count']} membros**, **{asset['container_member_bytes']} bytes**. "
        'Extents, nomes de arquivo seguros e diretórios foram verificados; os PNGs tiveram CRC de todos os chunks conferido. Nenhuma chave foi duplicada no código do port.','',
        '| Tipo interno | Quantidade | Bytes | Formato medido |','|---|---:|---:|---|',
        f"| PNG | {asset['game_png_occurrences']} | {asset['png_stored_bytes']} | PNG 8 bits; RGB/RGBA/paleta |"]
    labels={'.seb':'SEB v0; árvore de sprites/animação, sem pixels', '.txt':'UTF-8; tabelas, mensagens e scripts',
            '.inf':'UTF-8; listas/opções ResourceManager', '.gmap':'Binário Map/MapMain, big-endian',
            '.map':'LE versão 102; projeção GMAP comprovada; ferramenta autoral UNKNOWN', '.csv':'UTF-8 BOM; pacotes Language.LoadLanguagePack'}
    for extension in ('.seb','.txt','.inf','.gmap','.map','.csv'):
        value=custom['data_formats'][extension]
        lines.append(f"| {extension} | {value['count']} | {value['stored_bytes']} | {labels[extension]} |")
    lines += ['', f"Os {asset['game_png_occurrences']} PNGs têm **{asset['game_png_unique']} hashes distintos**, "
        f"**{asset['game_png_alpha_occurrences']} ocorrências com alpha**, largura entre {asset['png_dimension_range']['min_width']} e "
        f"{asset['png_dimension_range']['max_width']} e altura entre {asset['png_dimension_range']['min_height']} e {asset['png_dimension_range']['max_height']}. "
        'Esses máximos são por eixo, não uma afirmação de que um único arquivo tem ambos. Nenhum PNG interno excede 1024 em qualquer eixo. '
        '[Distribuição exata por dimensão/alpha](../config/texture-dimensions.csv). Hash distinto não equivale a imagem distinta por pixels. Na Fase 2 houve conversão sem perda para RGBA8 e readback nativo de todos os hashes distintos, medidos abaixo.','',
        'Os cinco auxiliares são: lista de 27 áudios (548 bytes), índice de 48 recursos (1.050 bytes), '
        'tabela de formato de idioma de 25 linhas (395 bytes), e dois manifestos de posições/textos com 2.507 linhas cada '
        '(113.754 e 148.028 bytes). Total **263.775 bytes / 5.114 linhas físicas**. Não são cinco listas equivalentes.','',
        'Todos os 532 SEB foram consumidos até o fim: 532 layers, 1.559 frames e 1.575 registros; referenciam Image[] e não contêm PNG embutido. '
        'Três GMAP seguem Map.LoadMap e um segue MapMain.LoadMap. Os quatro MAP versão 102 foram interpretados até o fim e suas projeções coincidem integralmente com os quatro GMAP; o consumidor autoral permanece UNKNOWN. '
        'Os três CSV são pacotes de idioma de Language.Init/SetLanguagePack/LoadLanguagePack. '
        '[Formatos e limitações](notes/custom-asset-formats.md), [prova MAP/CSV](notes/phase2-legacy-assets.md).','',
        '## Como o jogo carrega','',
        '| Conteúdo | Caminho do código |','|---|---|',
        '| PNG | ResourceManager.Load/LoadReady/LoadStart → JarInflater.GetInputStream → Image.Load/DecodeByteArray → Texture2D.LoadImage no original |',
        '| SEB/INF | ResourceManager e Seb._load; listas de imagens/frames e comandos, não texturas adicionais |',
        '| Tabelas/textos | Main.OnCreate instala tabelas dos registros; StreamUtil/RecordStore/JarInflater fornecem bytes; Language converte/pesquisa textos |',
        '| GMAP | game.Map.LoadMap e game.MapMain.LoadMap, com formatos distintos confirmados |',
        '| Áudio | SoundOGG.Load(string) → Resources.Load<AudioClip>, pelo identificador sem extensão |',
        '| Fontes | Font._getDefaultGUIFont seleciona recursos por idioma; duas fontes TrueType embutidas |',
        '| Prefab/render target | Offscreen carrega prefab pelo Resources; o comportamento exigirá backend próprio, não o arquivo Unity como motor |',
        '| MAP | Projeção runtime igual à dos GMAP; ferramenta autoral que lê/escreve MAP permanece UNKNOWN |',
        '| CSV | Language.Init/SetLanguagePack/LoadLanguagePack; ConvertLanguagePack aplica registros às entradas TXT |','',
        'Métodos, caminhos e linhas de cada caminho: [carregadores](notes/asset-loading.md) e '
        '[formatos próprios](notes/custom-asset-formats.md). Não foi encontrada a rota de sprites baseada em Resources.Load<Texture2D>; '
        'inventariar só Texture2D omitiria as imagens internas. StreamingAssets/AssetBundle/SceneManager não apareceram no corpus examinado.','',
        '## Áudio e fontes','',
        '**27 AudioClip Vorbis**, todos estéreo: 25 a 44.100 Hz, um a 24.000 Hz e um a 32.000 Hz. '
        f"Soma das durações declaradas nos campos float: **{memory['audio_duration_seconds']!r} s**. "
        f"Estimativa PCM16: **{memory['audio_pcm16_bytes']} bytes** = {mib(memory['audio_pcm16_bytes'])} MiB, "
        'calculada por ceil(duração × frequência) × canais × 2; isso não é uma medição do número de samples efetivamente decodificados. '
        'Os 27 extents de sidecar foram verificados dentro do ZIP. Na Fase 2 foram remontados como 27 arquivos Ogg Vorbis comprimidos; nenhuma música foi inteiramente decodificada para PCM em memória. O backend de streaming continua pendente.','',
        '**Duas fontes TrueType**: 1.920.344 e 50.788 bytes, total **1.971.132 bytes**, com 15.563 e 346 glifos, respectivamente. '
        'Seus PPtr apontam exatamente às duas Texture2D 0×0: são placeholders de atlas de fonte, não custo de texto nulo. '
        'Na Fase 2 os dois TTF foram extraídos localmente. A decisão do usuário é rasterizar a partir do TTF do APK, no pipeline ou runtime; a rasterização, o atlas residente e o custo por glifo continuam pendentes/UNKNOWN. Nenhuma fonte é distribuída.','',
        '## Estimativa de memória nos alvos','',
        'Estimativa da Fase 1 para PICA200, preservada: para cada textura, padding para potência de dois com mínimo 8; '
        'dimensões acima de 1024 são particionadas antes do padding. Cenários sem mipmaps; overhead de allocator, staging, '
        'buffers, render targets, código, dados/saves e atlas de texto não está incluído. Fórmulas conferidas no '
        '[código primário citro3d](https://github.com/devkitPro/citro3d/blob/master/source/texture.c). '
        'PICA200 é a GPU: áudio é estimado separadamente para DSP/ndsp.','',
        '| Corpus e formato hipotético | Bytes | MiB |','|---|---:|---:|']
    for corpus,label in [('game_png_unique','654 PNGs por SHA'),('game_png_occurrences','718 ocorrências PNG'),('unity_texture_objects','99 Texture2D Unity')]:
        for fmt in ('RGBA8','RGBA4','ETC1A4','ETC1'):
            value=memory[corpus][fmt];lines.append(f'| {label}, {fmt} | {value} | {mib(value)} |')
    lines += ['', 'O PNG avulso do APK é 1024×2048 RGB e tem 34.074 bytes de arquivo; em RGBA8 dividido em duas texturas '
        '1024×1024 exigiria mais 8.388.608 bytes. Seu uso pelo port não foi provado. Não somar indiscriminadamente todas as texturas Unity '
        'ou tratar o corpus inteiro como simultaneamente residente. O código do jogo usa a rota PNG própria.','',
        '**RGBA4 e ETC1/A4 são apenas cenários de tamanho**, não opções de fidelidade aprovadas. ETC1 não preserva alpha, '
        'e 631 PNGs têm alpha; ETC1A4/RGBA4 também não equivalem automaticamente aos pixels originais. O usuário escolheu RGBA8 sem perda até medição exigir outra opção, e áudio obrigatoriamente em streaming. A conversão RGBA8 para SDL já foi medida; a conversão PICA200 permanece pendente.','',
        '| Cenário de planejamento | Bytes antes dos demais custos | MiB |','|---|---:|---:|']
    total=memory['game_png_unique']['RGBA8']+memory['audio_pcm16_bytes']
    face=asset['font_data_bytes']
    lines += [f'| PNGs únicos RGBA8 + todo áudio PCM16 estimado | {total} | {mib(total)} |',
              f'| Mesmo cenário + arquivos TTF residentes | {total+face} | {mib(total+face)} |',
              f"| PNGs únicos RGBA8 + exemplo de um stream de áudio | {memory['game_png_unique']['RGBA8']+memory['audio_stream_example_bytes']} | {mib(memory['game_png_unique']['RGBA8']+memory['audio_stream_example_bytes'])} |",'',
        'Para comparar com a missão, considerar **64 MiB (67.108.864 bytes)** no 3DS antigo e **124 MiB (130.023.424 bytes)** '
        'no New 3DS como **orçamentos de planejamento**, não RAM livre medida. O cenário de todos os PNGs/PCM/TTF já ocupa '
        f"{mib(total+face)} MiB antes do jogo, font atlas e buffers, portanto não demonstra viabilidade no antigo. "
        'O cenário com streaming reduz o corpus de áudio residente, mas seu peak depende da implementação e das vozes. '
        'O exemplo reserva quatro buffers de 16.384 frames estéreo PCM16: 262.144 bytes por stream; não é uma escolha de implementação.','',
        'Também há limites distintos de heap linear e VRAM: libctru documenta 6 MiB de VRAM e alocação linear separada; '
        'citro3d pode usar memória linear. Não presumir que tudo cabe na VRAM nem que a soma de RAM física é disponível ao processo. '
        '[Fonte primária libctru](https://github.com/devkitPro/libctru/blob/master/libctru/include/3ds/os.h) '
        'e [histórico do heap](https://github.com/devkitPro/libctru/blob/master/Changelog.md). Medir osGetMemRegionSize/Used/Free '
        'nos dois perfis de execução na etapa apropriada. CPU, frame time e memória de pico continuam UNKNOWN. O 3DS antigo não foi descartado.','',
        '## Textos e literais do C#','',
        'Textos existem nas tabelas/arquivos dos contêineres, manifestos de idioma e também no fonte de referência. '
        'Main.OnCreate/Language.SetSoftLabelTable/SetTextTable instalam tabelas, mas **Language._translateText também usa '
        'o conteúdo original como chave**, e KairoText.LT pode devolver esse texto. A hipótese “somente chaves ou índices numéricos” foi refutada.','',
        '| Assembly | Literais string | UI estática não vazia | Chaves API diretas | UNKNOWN |','|---|---:|---:|---:|---:|']
    for name,value in text.items():
        lines.append(f"| {name} | {value['total']} | {value['ui_nonempty']} | {value['code_key_direct']} | {value['unknown']} |")
    lines += ['', 'São ocorrências, não frases distintas nem prova de exibição em aparelho. A análise estática de UI inclui debug e '
        'é limite inferior: arrays/campos mutáveis, retornos indiretos e fluxo arbitrário continuam UNKNOWN. '
        '**A lista completa por classe, sem reproduzir os valores, está em '
        '[config/visible-text-counts.csv](../config/visible-text-counts.csv)**. '
        '[Metodologia e fixtures](csharp-subset.md). A decisão posterior do usuário permite os literais já presentes no C# reconstruído no C++ gerado. Textos, tabelas e fontes provenientes dos assets continuam exclusivamente no pipeline do APK próprio. '
        'Language._translateText conserva sua lógica e recebe a tabela dos assets. O tradutor existe e sua cobertura comprovada é relatada em PROGRESS.md; tradução completa e boot ainda não foram alcançados.','',
        '## Reprodução e provas','',
        '```powershell',"python tools/extract-assets --apk 'CAMINHO_DO_SEU_APK' --extract",
        "python tools/inventory_custom_formats.py --apk 'CAMINHO_DO_SEU_APK'",
        "python tools/inventory_legacy_assets.py --apk 'CAMINHO_DO_SEU_APK'",
        "python tools/convert-assets --apk 'CAMINHO_DO_SEU_APK'",
        "python tools/build-pc --fixtures-only --asset-readback --apk 'CAMINHO_DO_SEU_APK'",
        'python tools/progress','```','',
        'Dados públicos: config/assets.csv, asset-summary.json, texture-dimensions.csv, custom-asset-formats.json, '
        'assetripper-summary.json e unity-metadata-audit.json. Arquivos/identificadores/payloads e chave não são publicados. '
        'Cada leitura é conferida contra o APK do usuário; o pipeline não procura nem baixa o jogo.']
    if phase2:
        lines += ['', '## Estado medido da Fase 2','',
            f"Os {phase2['rgba8_files']} arquivos RGBA8 únicos ocupam **{phase2['rgba8_bytes']} bytes** sem padding de textura. Todos foram carregados no backend SDL e cada canal/pixel foi comparado ao payload convertido: **{phase2['rgba8_files']}/{phase2['rgba8_files']} passam**. Isso corresponde às 718 ocorrências PNG dos containers, sem duplicar hashes.",
            f"O teste sequencial teve pico de payload de textura de **{phase2['texture_readback_peak_payload_bytes']} bytes**, com uma textura por vez. Não é memória residente do jogo nem orçamento do 3DS.", '',
            f"Assets atuais por estado: **{phase2['asset_states']}**. Fontes: {phase2['ttf_files']} TTF extraídos, rasterização pendente. Áudio: {phase2['ogg_files']} Ogg convertidos, streaming de runtime pendente. Demais dados de containers foram extraídos com SHA-256 conferido e aguardam seus consumidores traduzidos.", '',
            'A geração dos estados exige hashes atuais dos fontes/produtores/gerados/recibos, manifest local, outputs e readback. Nenhum método do jogo foi executado por essa comparação de imagens. APK e conteúdos permanecem exclusivamente locais.']
    (ROOT/'docs/assets.md').write_text('\n'.join(lines)+'\n',encoding='utf-8',newline='\n')


def main():
    phase2=refresh()
    boundary=rows('config/boundary.csv');translation=rows('config/translation.csv');assets=rows('config/assets.csv')
    b=load('config/boundary-summary.json');a=load('config/asset-summary.json')
    if len(boundary)!=b['kairo']['unique_symbols']:raise ValueError('Boundary summary differs from ledger')
    if len(translation)!=1958 or len({r['id'] for r in translation})!=1958:raise ValueError('Translation identities differ')
    allowed=[(boundary,{'todo','stub','implemented','verified'}),(translation,{'todo','translated','runs','verified'}),
             (assets,{'inventoried','extracts','converts','loads'})]
    for inventory,states in allowed:
        if any(row['estado'] not in states for row in inventory):raise ValueError('Invalid generated state')
    lines=['# Progresso do port Nintendo 3DS','',
        'Gerado por python tools/progress a partir dos inventários. Não editar estados à mão.', '',
        'Referência: v1.0.0-csharp-reconstruction, c7d097a847ca1f1a8e5fb7141ff11d338f5915c4, somente leitura. '
        'Os 5.245 métodos reconstruídos na fase anterior não são progresso de tradução para C++.','',
        '## Inventários','', '| Inventário | Total | Estado medido |','|---|---:|---|',
        f"| Fronteira KairoLibrary | {len(boundary)} símbolos / {b['kairo']['types']} tipos | {dict(Counter(r['estado'] for r in boundary))} |",
        f"| Métodos a traduzir | {len(translation)} | {dict(Counter(r['estado'] for r in translation))} |",
        f"| Grupos de assets | {len(assets)} | {dict(Counter(r['estado'] for r in assets))} |",'',
        ('**Fase 2 parcial:** '+str(len(phase2['verified_boundary_ids']))+' membros reais da fronteira verificados por diferencial de fonte; '
         +str(phase2['compiled_methods'])+' métodos portáveis gerados/compilados, '+str(phase2['emitted_root_methods'])+' raízes entre '
         +str(phase2['requested_root_methods'])+' métodos requisitados e '+str(phase2['emitted_dependency_methods'])+' dependências. '
         'Os 254 símbolos portáveis incluem campos/tipos/outros membros e não são 254 métodos. **Assembly-CSharp: 0/1958 traduzidos/compilados/executados.**'
         if phase2 else '**Preparação: zero membros verificados e zero métodos traduzidos.** Ainda sem recibos de implementação.'),'',
        '## Preparação e medições','',
        '- Repositório separado e submódulo fixado; política de conteúdo no CI (formatos proibidos e limite 2.000.000 bytes).',
        '- Fronteira: 254 portáveis, 452 a reimplementar, 69 a remover; 18 símbolos Unity diretos com proposta.',
        '- C#: 97 fontes, 448.825 nós AST, 123 SyntaxKinds, sem erros semânticos.',
        f"- Assets: {a['serialized_files']} serializados / {a['serialized_objects']} objetos; 16 containers / 1.337 membros; 718 PNGs (654 SHA distintos); 27 Vorbis e 2 TrueType.",
        '- AssetRipper e leitor independente reconciliados; 62 auxiliares gerados pela ferramenta não contam como assets originais.',
        '- Nenhum jogo, APK, emulador ou port foi executado; ferramentas de inventário próprias e AssetRipper headless foram executados.', '',
        '## Pendências antes da implementação','',
        '- Política offline para registro, cobrança/saves, ofertas e notificações; não usar sucesso/null universal.',
        '- Consumidores de 4 MAP e 3 CSV ainda UNKNOWN; não apagar assets por suposição.',
        '- Classificação de visibilidade de 1.770 literais App e 2.837 Kairo ainda UNKNOWN; nenhum valor foi publicado.',
        '- Memória de pico, atlas de fontes e tempo de CPU ainda não medidos; o 3DS antigo não foi descartado.',
        '- SDL2 SDK, devkitPro/devkitARM/libctru/citro2d/citro3d/tex3ds e Azahar não encontrados; instalação depende de autorização futura.',
        '', 'Documentos: [fronteira](docs/boundary.md), [C#](docs/csharp-subset.md), [assets](docs/assets.md), '
        '[toolchain](docs/toolchain.md), [serviços offline](docs/notes/offline-behavior.md).','']
    if phase2:
        replace={
            '## Preparação e medições':'## Preparação e medições da Fase 1 preservadas',
            '- Nenhum jogo, APK, emulador ou port foi executado; ferramentas de inventário próprias e AssetRipper headless foram executados.':'- A Fase 1 executou inventários próprios e AssetRipper headless; seu marco inicial não incluía jogo, tradutor ou backend.',
            '## Pendências antes da implementação':'## Pendências atuais da Fase 2',
            '- Política offline para registro, cobrança/saves, ofertas e notificações; não usar sucesso/null universal.':'- Contratos offline escritos e testados nativamente; integração dos hooks no jogo gerado permanece PENDING. Nenhum UID de conta é fabricado.',
            '- Consumidores de 4 MAP e 3 CSV ainda UNKNOWN; não apagar assets por suposição.':'- MAP: quatro projeções runtime GMAP comprovadas; ferramenta autoral UNKNOWN. Três CSV vinculados a Language; dados preservados localmente.',
            '- Classificação de visibilidade de 1.770 literais App e 2.837 Kairo ainda UNKNOWN; nenhum valor foi publicado.':'- Classificação estática dos literais da Fase 1 preservada; a decisão posterior do usuário permite literais do C# em C++ gerado. Assets/textos extraídos continuam locais.',
            '- SDL2 SDK, devkitPro/devkitARM/libctru/citro2d/citro3d/tex3ds e Azahar não encontrados; instalação depende de autorização futura.':'- SDL2 SDK 2.32.10 preparado com autorização; toolchain 3DS/Azahar continuam ausentes e reservados à Fase 4. Não foram instalados.',
        }
        lines=[replace.get(line,line) for line in lines]
        lines += ['## Evidência atual da Fase 2','',
            f"- Portáveis: {phase2['requested_portable_symbols']} símbolos requisitados correspondem a {phase2['requested_root_methods']} raízes de método. {phase2['emitted_root_methods']} raízes + {phase2['emitted_dependency_methods']} dependências emitidas/compiladas; {phase2['executed_methods']} métodos exercitados em {phase2['differential_cases']} casos diferenciais de fonte, todos aprovados.",
            f"- Fronteira: {len(phase2['verified_boundary_ids'])}/{len(boundary)} símbolos verificados; não contar dependências fora da fronteira como novas raízes nem promover os 254 em bloco. Backend CTR ainda não compilado.",
            f"- Sintaxe: {phase2['syntax_kinds_observed_in_emitted_bodies']}/{phase2['measured_syntax_kinds']} SyntaxKinds observados em corpos emitidos; observação não comprova cobertura semântica integral de cada construção.",
            f"- Serviços: {phase2['service_contracts']} contratos explícitos e {phase2['service_native_assertions']} assertions nativas; hooks não integrados, nenhum símbolo da fronteira promovido por essas fixtures.",
            f"- Assets: {phase2['rgba8_files']} RGBA8 únicos ({phase2['rgba8_bytes']} bytes) com readback integral; {phase2['ttf_files']} TTF extraídos; {phase2['ogg_files']} Ogg convertidos. Rasterizador e streaming de runtime pendentes.",
            '- Backend SDL e fixtures C++/C# foram executados. Título, menu, partida, frame time e memória residente por categoria do jogo permanecem UNKNOWN; não houve primeiro boot do jogo.',
            '- Próxima integração: ampliar tradução das classes/coleções/streams e sua fronteira, fontes TTF e áudio streaming antes de armazenamento/entrada/UI. Nenhuma decisão de telas 3DS foi tomada.',
            '', 'Recibos e hashes conferidos pelo gerador: [resumo](config/phase2-progress.json), [portáveis](config/phase2-translation.json), [diferencial](config/phase2-portable-differential.json), [imagens](config/phase2-image-tests.json).', '']
    assets_document(a,phase2)
    (ROOT/'PROGRESS.md').write_text('\n'.join(lines),encoding='utf-8',newline='\n')
    print(json.dumps(dict(boundary_symbols=len(boundary),translation_methods=len(translation),asset_groups=len(assets),
                          boundary_states=dict(Counter(r['estado'] for r in boundary)),translation_states=dict(Counter(r['estado'] for r in translation)))))


if __name__=='__main__':main()
