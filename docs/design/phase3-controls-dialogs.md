# Fase 3 — propostas 3 e 4: controles, diálogos, teclado e idioma (para escolha do usuário)


> **Substituído** pela decisão do usuário de 2026-11-16: [phase3-decision.md](phase3-decision.md). Mantido como histórico.
Estado: **proposta, não implementada**.

## O que o jogo original já aceita por teclas (fatos do fonte)

O `Canvas` do KairoLibrary tem uma tabela de teclas válidas, `VALID_KEYS`
(`Canvas.cs:245-290`): teclado numérico 0–9, `*`, `#`, setas (bits 16–19 →
`KEY_UP=0x20000`, `KEY_RIGHT=0x40000`, `KEY_DOWN=0x80000`, `KEY_LEFT=0x10000`),
confirmar (`Enter`, `Espaço`, `Z` → `KEY_SELECT=0x100000`), teclas programáveis
esquerda e direita (`KEY_SOFT1=0x200000`, `KEY_SOFT2=0x400000`) e voltar
(`Escape`, com a lógica dos rótulos "戻る"/"Back", `Canvas.cs:1169-1226`).

Navegação por teclas que o jogo já implementa (verificada nas rotas do critério 3):

| Tela | Teclas | Onde |
|---|---|---|
| Menu principal e submenus (`SubForm` tipo 3) | ↑/↓ e confirmar; o cursor persiste e dá a volta | `SubForm.cs` (menus), rotas `actions`/`career` |
| Listas e janelas de `SubForm` | ↑/↓/←/→, confirmar, rótulo esquerdo/direito | `SubForm.Update*` por tipo |
| Mapa de gestão | setas movem o cursor do mapa (3 → 6 → 8 unidades por quadro, a câmera acompanha); confirmar abre a janela do lote, jogador ou técnico | `Camera.cs:743-805`, `GameForm.cs:731-736` |
| Partida | confirmar dá o pontapé; ←/→ e confirmar no intervalo; edição por setas | `SoccerForm`, `UserData` (edição) |
| Título | ↑/↓, confirmar, teclas ocultas `*`/`#`/1 (modo de depuração STAR) | `TitleForm.Update` |
| Política do técnico (`SubForm` 50) | só ←/→ mudam a seleção | `SubForm.cs:9245-9290` |

O que continua exigindo toque (sem equivalente por tecla no fonte):
- **arrastar a câmera** do mapa e da partida (as setas movem o cursor, e a câmera
  segue o cursor; o arraste livre e a pinça de zoom são só por toque);
- **barras de rolagem e de volume** arrastadas (`OnTouchTrackBar`,
  `OnTouchVScrollButton`); as listas também rolam por setas;
- **seta de página** da linha do nome do time na escalação (`OnTouchDlgPage2`;
  a página também muda pelo cursor);
- **retângulo de status** da partida (`SoccerForm.SetTouchValue`, que repassa
  `KeyClick(RIGHT)`; a tecla → já faz o mesmo).

## Proposta 3 — mapeamento de botões do 3DS

| Ação do jogo | Alternativa 1 (padrão Nintendo) | Alternativa 2 (fiel ao celular) |
|---|---|---|
| Confirmar (`KEY_SELECT`) | A | A |
| Voltar / rótulo direito (`KEY_SOFT2`) | B | R |
| Rótulo esquerdo (`KEY_SOFT1`, "Salvar", "Trocar", "Demolir") | Y | L |
| Setas | direcional e circle pad (cursor) | direcional |
| Câmera do mapa e da partida | circle pad move a câmera direto (sem cursor) | circle pad = setas |
| Zoom (pinça) | L/R (alternativa 1 deixa L/R livres) | — (só toque) |
| Menu principal | X (atalho para o rótulo direito no mapa, "Menu") | R |
| Pausa / sair | START → diálogo de término do jogo (já existe: `DoTerminationDialog`) | START |
| Teclas ocultas de depuração (`*`, `#`, 1) | não mapeadas | não mapeadas |

- A alternativa 1 segue a convenção do console (A confirma, B volta) e usa L/R
  para o zoom que o celular fazia com pinça. A alternativa 2 imita os dois
  rótulos de tela do celular nos ombros, perto de onde ficam desenhados.
- Em ambas, os rótulos das teclas programáveis (desenhados pelo jogo nos cantos
  inferiores) continuam tocáveis.

## Proposta 4 — diálogos, teclado do sistema, painel de idioma e rótulos

### Diálogos (`Dialog.Show`, serviço do port já implementado no PC)

| Alternativa | Como | Prós | Contras |
|---|---|---|---|
| 1 | diálogo do port na tela inferior, sobre o jogo escurecido (como no PC) | tocável; mesmo código do PC | cobre o jogo |
| 2 | mensagem na superior, botões na inferior | jogo continua visível | dividir texto e botões |

Teclas: A confirma o botão selecionado, B dispensa (−1, como no PC), ←/→ movem.

### Entrada de texto (nome do time, nome curto)

O jogo usa o painel `kfw.panel.MainPanel` via `FepPanel` (no PC: campo SDL).
No 3DS:

| Alternativa | Como | Prós | Contras |
|---|---|---|---|
| 1 | teclado do sistema (`swkbd` do libctru) | familiar; idiomas e acentos prontos; validação do jogo continua depois do OK (`MainPanel.ComponentAction`: vazio, proibidos, largura) | modal do sistema; limite de caracteres a configurar igual ao `maxLength` |
| 2 | teclado próprio desenhado pela API comum | visual coerente | mais trabalho; acentos e idiomas por nossa conta |

Recomendação para decidir: alternativa 1 (swkbd), com o limite do jogo.

### Painel de idioma

O título tem o ícone de idioma (`LanguageForm`); no port o painel offline lista
os idiomas do APK sem baixar pacotes. No 3DS: abrir a mesma lista (toque ou
X no título). Alternativa: seguir o idioma do sistema do 3DS na primeira
execução e manter o painel para trocar.

### Idioma dos rótulos do port (diálogos)

Hoje "OK", "Yes", "No", "Cancel" fixos em inglês (texto do port, não do jogo).
Alternativas: (1) seguir o idioma escolhido no jogo, com tabela própria pequena
(inglês e japonês, os do APK); (2) seguir o idioma do sistema do 3DS.
