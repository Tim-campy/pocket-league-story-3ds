# Pendências de design: entrada de texto e painel de idioma

Registro da decisão do usuário em 2026-11-13. As duas são decisões da
**Fase 3** (telas e controles do 3DS) e não estão tomadas.

## 1. Entrada de texto (`FepPanel`, `MainPanel`, `InputPanel`)

- **Origem no fonte:** `KairoPlugin.ShowFepPanel` (`KairoPlugin.cs:636–641`)
  → `kairo.unity.panel.FepPanel.Show` → `kfw.panel.MainPanel.Show` →
  `panel.MainPanel.Show`, `system.panel.InputPanel.Show`. São o painel de
  digitação do Android (nome de time e jogador, apelido, ID de amigo).
- **PC (decidido):** texto pelo SDL (`SDL_TextInput`, campo simples, sem IME
  próprio), como em [`diagnostic-text-input.md`](diagnostic-text-input.md).
  Vale para o alvo de desenvolvimento e para o diagnóstico.
- **3DS (pendente, Fase 3):** teclado do sistema (swkbd) ou outro meio;
  formato, limites e retorno ao jogo a decidir pelo usuário.
- **Estado da tradução:** cadeia de 5 métodos rejeitada na causa primeira
  `ShowFepPanel` (`docs/notes/translation-pending.md`). Ligar o painel ao
  serviço de texto do PC é trabalho da Fase 2; a tela do 3DS não.

## 2. Painel de idioma (`StartLanguagePanel`)

- **Origem no fonte:** `KairoPlugin.StartLanguagePanel(string[], int, string, int)`
  (`KairoPlugin.cs:1106–1112`), chamado por `LanguageForm.Update`.
- **PC (decidido):** seleção mínima **só no diagnóstico**: escolher um dos
  idiomas da lista recebida, pelo índice, sem interface própria. Não é a tela
  do produto.
- **3DS (pendente, Fase 3):** tela de escolha de idioma.
- **Estado da tradução:** 2 métodos rejeitados (slot `LanguageForm.Update`).
