# Maiores sítios de alocação — medição do runtime

Janelas de 300 frames. Contagens de solicitações `new`, não objetos vivos nem RSS.
Cada sítio agrupa pilhas pelo primeiro chamador do port com arquivo/linha.
Uma solicitação pode reunir objeto do original e control block do runtime;
nesses casos não há separação exata dos bytes. ICF pode compartilhar símbolos de templates.
Os vinte por contagem e os vinte por bytes são apresentados separadamente.
A ordem em empates segue a tabela de pilhas; empates não estabelecem prioridade.

## Gestão

Executável SHA-256: `af3bb4cf4dadfc54756a3f481ea143ffa842c2ce7ea20895153840be12b67716`.
Relatório privado SHA-256: `a4edbe59544c0bfd92473fdefeee504d3394343b2f4ff7b4a18cb277945ea801`.
84000 solicitações / 10612800 bytes; 11100 operações concluídas do fonte instrumentado.
Razão observada: 7.567567568. Razão completa de alocações CLR: **UNKNOWN**; ver runtime-allocation-attribution.md.

### Por contagem

| # | Sítio | Contagem | Bytes | Classificação |
|---:|---|---:|---:|---|
| 1 | pls::cs::register_managed_object (semantic_runtime.cpp:52) | 28800 | 1843200 | Introduzido: registro do coletor |
| 2 | String.Storage + ownership (semantic_runtime.hpp:248) | 14700 | 2234400 | Misto: strings de várias origens e control blocks |
| 3 | pls::assets::Catalog::path (asset_catalog.cpp:39) | 3600 | 537600 | Introduzido: catálogo do port |
| 4 | pls::kairo::MeshManager::BeginPrimitive (mesh.cpp:46) | 3000 | 2438400 | Introduzido: vetor de batches do backend |
| 5 | pls::cs::make_ref<pls::kairo::Font,std::shared_ptr<pls::kairo::Font> &> (semantic_runtime.hpp:248) | 3000 | 456000 | Original: Graphics.GetFont cria Font; control block é introduzido |
| 6 | pls::kairo::Font::raster (font.cpp:37) | 2400 | 192000 | Introduzido: chave/cache de rasterização |
| 7 | pls::assets::Catalog::entries (asset_catalog.cpp:35) | 2400 | 19200 | Introduzido: catálogo do port |
| 8 | pls::kairo::Font::StringWidthF (font.cpp:43) | 2100 | 72000 | Misto: Replace existe no C#; cópia nativa é incondicional |
| 9 | InvocationList void __cdecl(void) (semantic_runtime.hpp:248) | 1800 | 259200 | Introduzido: representação nativa de delegate; origem da criação exige a pilha |
| 10 | pls::cs::make_ref<pls::cs::Array<std::shared_ptr<pls::game::cs_3a3d09f9e75a32d2> >::Storage,int &> (semantic_runtime.hpp:248) | 1200 | 163200 | Misto/UNKNOWN: armazenamento gerenciado, buffer e control block |
| 11 | InvocationList void __cdecl(bool) (semantic_runtime.hpp:248) | 1200 | 172800 | Introduzido: representação nativa de delegate; origem da criação exige a pilha |
| 12 | InvocationList bool __cdecl(void) (semantic_runtime.hpp:248) | 1200 | 172800 | Introduzido: representação nativa de delegate; origem da criação exige a pilha |
| 13 | bootstrap.configure_application (semantic_runtime.hpp:523) | 600 | 81600 | Introduzido: adaptador do bootstrap |
| 14 | pls::cs::make_ref<pls::cs::Array<pls::game::cs_5841296a01607078>::Storage,int &> (semantic_runtime.hpp:248) | 600 | 81600 | Misto/UNKNOWN: armazenamento gerenciado, buffer e control block |
| 15 | bootstrap.configure_application (semantic_runtime.hpp:523) | 600 | 81600 | Introduzido: adaptador do bootstrap |
| 16 | bootstrap.configure_application (bootstrap_generated.cpp:35) | 600 | 28800 | Introduzido: adaptador do bootstrap |
| 17 | bootstrap.configure_application (bootstrap_generated.cpp:33) | 600 | 38400 | Introduzido: adaptador do bootstrap |
| 18 | bootstrap.configure_application (bootstrap_generated.cpp:31) | 600 | 28800 | Introduzido: adaptador do bootstrap |
| 19 | bootstrap.configure_application (bootstrap_generated.cpp:37) | 600 | 28800 | Introduzido: adaptador do bootstrap |
| 20 | bootstrap.configure_application (bootstrap_generated.cpp:32) | 600 | 28800 | Introduzido: adaptador do bootstrap |

### Por bytes

| # | Sítio | Contagem | Bytes | Classificação |
|---:|---|---:|---:|---|
| 1 | pls::kairo::MeshManager::BeginPrimitive (mesh.cpp:46) | 3000 | 2438400 | Introduzido: vetor de batches do backend |
| 2 | String.Storage + ownership (semantic_runtime.hpp:248) | 14700 | 2234400 | Misto: strings de várias origens e control blocks |
| 3 | pls::cs::register_managed_object (semantic_runtime.cpp:52) | 28800 | 1843200 | Introduzido: registro do coletor |
| 4 | pls::assets::Catalog::path (asset_catalog.cpp:39) | 3600 | 537600 | Introduzido: catálogo do port |
| 5 | pls::cs::make_ref<pls::kairo::Font,std::shared_ptr<pls::kairo::Font> &> (semantic_runtime.hpp:248) | 3000 | 456000 | Original: Graphics.GetFont cria Font; control block é introduzido |
| 6 | InvocationList void __cdecl(void) (semantic_runtime.hpp:248) | 1800 | 259200 | Introduzido: representação nativa de delegate; origem da criação exige a pilha |
| 7 | pls::kairo::Font::raster (font.cpp:37) | 2400 | 192000 | Introduzido: chave/cache de rasterização |
| 8 | InvocationList void __cdecl(bool) (semantic_runtime.hpp:248) | 1200 | 172800 | Introduzido: representação nativa de delegate; origem da criação exige a pilha |
| 9 | InvocationList bool __cdecl(void) (semantic_runtime.hpp:248) | 1200 | 172800 | Introduzido: representação nativa de delegate; origem da criação exige a pilha |
| 10 | pls::cs::make_ref<pls::cs::Array<std::shared_ptr<pls::game::cs_3a3d09f9e75a32d2> >::Storage,int &> (semantic_runtime.hpp:248) | 1200 | 163200 | Misto/UNKNOWN: armazenamento gerenciado, buffer e control block |
| 11 | pls::cs::make_ref<pls::kairo::CallbackFormKairo,pls::kairo::KairoCallbacks> (semantic_runtime.hpp:248) | 600 | 158400 | Introduzido: adaptador do bootstrap |
| 12 | pls::cs::make_ref<pls::cs::List<std::shared_ptr<pls::game::cs_3a3d09f9e75a32d2> >::Storage> (semantic_runtime.hpp:248) | 600 | 96000 | Misto/UNKNOWN: armazenamento gerenciado, buffer e control block |
| 13 | InvocationList int __cdecl(void) (semantic_runtime.hpp:248) | 600 | 86400 | Introduzido: representação nativa de delegate; origem da criação exige a pilha |
| 14 | InvocationList void __cdecl(int) (semantic_runtime.hpp:248) | 600 | 86400 | Introduzido: representação nativa de delegate; origem da criação exige a pilha |
| 15 | bootstrap.configure_application (semantic_runtime.hpp:523) | 600 | 81600 | Introduzido: adaptador do bootstrap |
| 16 | pls::cs::make_ref<pls::cs::Array<pls::game::cs_5841296a01607078>::Storage,int &> (semantic_runtime.hpp:248) | 600 | 81600 | Misto/UNKNOWN: armazenamento gerenciado, buffer e control block |
| 17 | bootstrap.configure_application (semantic_runtime.hpp:523) | 600 | 81600 | Introduzido: adaptador do bootstrap |
| 18 | bootstrap.configure_application (semantic_runtime.hpp:523) | 600 | 81600 | Introduzido: adaptador do bootstrap |
| 19 | bootstrap.configure_application (semantic_runtime.hpp:523) | 600 | 81600 | Introduzido: adaptador do bootstrap |
| 20 | bootstrap.configure_application (semantic_runtime.hpp:523) | 600 | 81600 | Introduzido: adaptador do bootstrap |

## Partida

Executável SHA-256: `af3bb4cf4dadfc54756a3f481ea143ffa842c2ce7ea20895153840be12b67716`.
Relatório privado SHA-256: `5ccdf173b68c4effe1959f70a39e9aaf4a2fbea185fca5ca95181c537a478208`.
47563 solicitações / 6580264 bytes; 12062 operações concluídas do fonte instrumentado.
Razão observada: 3.943210081. Razão completa de alocações CLR: **UNKNOWN**; ver runtime-allocation-attribution.md.

### Por contagem

| # | Sítio | Contagem | Bytes | Classificação |
|---:|---|---:|---:|---|
| 1 | pls::cs::register_managed_object (semantic_runtime.cpp:52) | 15695 | 1004480 | Introduzido: registro do coletor |
| 2 | String.Storage + ownership (semantic_runtime.hpp:248) | 3012 | 457824 | Misto: strings de várias origens e control blocks |
| 3 | pls::kairo::MeshManager::BeginPrimitive (mesh.cpp:46) | 2855 | 2048640 | Introduzido: vetor de batches do backend |
| 4 | InvocationList void __cdecl(void) (semantic_runtime.hpp:248) | 1814 | 261216 | Introduzido: representação nativa de delegate; origem da criação exige a pilha |
| 5 | pls::cs::make_ref<pls::cs::Array<std::shared_ptr<pls::game::cs_3a3d09f9e75a32d2> >::Storage,int &> (semantic_runtime.hpp:248) | 1200 | 163200 | Misto/UNKNOWN: armazenamento gerenciado, buffer e control block |
| 6 | pls::cs::make_ref<pls::kairo::Font,std::shared_ptr<pls::kairo::Font> &> (semantic_runtime.hpp:248) | 1200 | 182400 | Original: Graphics.GetFont cria Font; control block é introduzido |
| 7 | InvocationList void __cdecl(bool) (semantic_runtime.hpp:248) | 1200 | 172800 | Introduzido: representação nativa de delegate; origem da criação exige a pilha |
| 8 | InvocationList bool __cdecl(void) (semantic_runtime.hpp:248) | 1200 | 172800 | Introduzido: representação nativa de delegate; origem da criação exige a pilha |
| 9 | bootstrap.configure_application (semantic_runtime.hpp:523) | 600 | 81600 | Introduzido: adaptador do bootstrap |
| 10 | pls::cs::make_ref<pls::cs::Array<pls::game::cs_5841296a01607078>::Storage,int &> (semantic_runtime.hpp:248) | 600 | 81600 | Misto/UNKNOWN: armazenamento gerenciado, buffer e control block |
| 11 | bootstrap.configure_application (semantic_runtime.hpp:523) | 600 | 81600 | Introduzido: adaptador do bootstrap |
| 12 | bootstrap.configure_application (bootstrap_generated.cpp:35) | 600 | 28800 | Introduzido: adaptador do bootstrap |
| 13 | bootstrap.configure_application (bootstrap_generated.cpp:33) | 600 | 38400 | Introduzido: adaptador do bootstrap |
| 14 | bootstrap.configure_application (bootstrap_generated.cpp:31) | 600 | 28800 | Introduzido: adaptador do bootstrap |
| 15 | bootstrap.configure_application (bootstrap_generated.cpp:37) | 600 | 28800 | Introduzido: adaptador do bootstrap |
| 16 | bootstrap.configure_application (bootstrap_generated.cpp:32) | 600 | 28800 | Introduzido: adaptador do bootstrap |
| 17 | pls::kairo::Font::StringWidthF (font.cpp:43) | 600 | 19200 | Misto: Replace existe no C#; cópia nativa é incondicional |
| 18 | bootstrap.configure_application (semantic_runtime.hpp:523) | 600 | 81600 | Introduzido: adaptador do bootstrap |
| 19 | pls::kairo::Font::raster (font.cpp:37) | 600 | 48000 | Introduzido: chave/cache de rasterização |
| 20 | bootstrap.configure_application (bootstrap_generated.cpp:36) | 600 | 28800 | Introduzido: adaptador do bootstrap |

### Por bytes

| # | Sítio | Contagem | Bytes | Classificação |
|---:|---|---:|---:|---|
| 1 | pls::kairo::MeshManager::BeginPrimitive (mesh.cpp:46) | 2855 | 2048640 | Introduzido: vetor de batches do backend |
| 2 | pls::cs::register_managed_object (semantic_runtime.cpp:52) | 15695 | 1004480 | Introduzido: registro do coletor |
| 3 | String.Storage + ownership (semantic_runtime.hpp:248) | 3012 | 457824 | Misto: strings de várias origens e control blocks |
| 4 | InvocationList void __cdecl(void) (semantic_runtime.hpp:248) | 1814 | 261216 | Introduzido: representação nativa de delegate; origem da criação exige a pilha |
| 5 | pls::cs::make_ref<pls::kairo::Font,std::shared_ptr<pls::kairo::Font> &> (semantic_runtime.hpp:248) | 1200 | 182400 | Original: Graphics.GetFont cria Font; control block é introduzido |
| 6 | InvocationList void __cdecl(bool) (semantic_runtime.hpp:248) | 1200 | 172800 | Introduzido: representação nativa de delegate; origem da criação exige a pilha |
| 7 | InvocationList bool __cdecl(void) (semantic_runtime.hpp:248) | 1200 | 172800 | Introduzido: representação nativa de delegate; origem da criação exige a pilha |
| 8 | pls::cs::make_ref<pls::cs::Array<std::shared_ptr<pls::game::cs_3a3d09f9e75a32d2> >::Storage,int &> (semantic_runtime.hpp:248) | 1200 | 163200 | Misto/UNKNOWN: armazenamento gerenciado, buffer e control block |
| 9 | pls::cs::make_ref<pls::kairo::CallbackFormKairo,pls::kairo::KairoCallbacks> (semantic_runtime.hpp:248) | 600 | 158400 | Introduzido: adaptador do bootstrap |
| 10 | pls::cs::make_ref<pls::game::cs_6517d63c01870958> (semantic_runtime.hpp:248) | 300 | 103200 | Original: objeto do jogo; control block é introduzido |
| 11 | pls::cs::make_ref<pls::cs::List<std::shared_ptr<pls::game::cs_3a3d09f9e75a32d2> >::Storage> (semantic_runtime.hpp:248) | 600 | 96000 | Misto/UNKNOWN: armazenamento gerenciado, buffer e control block |
| 12 | InvocationList int __cdecl(void) (semantic_runtime.hpp:248) | 600 | 86400 | Introduzido: representação nativa de delegate; origem da criação exige a pilha |
| 13 | InvocationList void __cdecl(int) (semantic_runtime.hpp:248) | 600 | 86400 | Introduzido: representação nativa de delegate; origem da criação exige a pilha |
| 14 | bootstrap.configure_application (semantic_runtime.hpp:523) | 600 | 81600 | Introduzido: adaptador do bootstrap |
| 15 | pls::cs::make_ref<pls::cs::Array<pls::game::cs_5841296a01607078>::Storage,int &> (semantic_runtime.hpp:248) | 600 | 81600 | Misto/UNKNOWN: armazenamento gerenciado, buffer e control block |
| 16 | bootstrap.configure_application (semantic_runtime.hpp:523) | 600 | 81600 | Introduzido: adaptador do bootstrap |
| 17 | bootstrap.configure_application (semantic_runtime.hpp:523) | 600 | 81600 | Introduzido: adaptador do bootstrap |
| 18 | bootstrap.configure_application (semantic_runtime.hpp:523) | 600 | 81600 | Introduzido: adaptador do bootstrap |
| 19 | bootstrap.configure_application (semantic_runtime.hpp:523) | 600 | 81600 | Introduzido: adaptador do bootstrap |
| 20 | pls::cs::make_ref<pls::cs::Array<pls::game::cs_fbfef5c19ac20749>::Storage,int const &> (semantic_runtime.hpp:248) | 600 | 81600 | Misto/UNKNOWN: armazenamento gerenciado, buffer e control block |

