# Foco, suspensão e retomada (decisão do usuário, 2026-11-16)

## Decisão

- PC: o host repassa perda e ganho de foco da janela pelo caminho do
  `host_focus` (SDL `SDL_WINDOWEVENT_FOCUS_LOST/GAINED` → `Input::Kind::focus_lost/gained`
  → `IApplication::host_focus`). Nos builds de diagnóstico o foco do sistema é
  ignorado e só os roteiros (`focus on|off`) o acionam, para manter as execuções
  determinísticas.
- 3DS (Fase 4): menu HOME, modo de espera e tampa fechada acionam o mesmo
  caminho pelos eventos do APT (`aptHook`: `APTHOOK_ONSUSPEND/ONSLEEP` →
  `host_focus(false)`, `APTHOOK_ONRESTORE/ONWAKEUP` → `host_focus(true)`).

## Sequência (fiel ao original)

`IApplication::host_focus` (`src/kairo/common/forms.cpp`) segue
`kairo.unity.ui.IApplication.OnApplicationPause` (`IApplication.cs:435-477`):
1. evento do app `Hidden` (pausa) ou `Resume` (retomada) pelo `FormManagerBase.ProcessEvent`;
2. `Suspend()` ou `Resume()` de cada formulário da pilha, do topo para a base,
   com exceções engolidas como no original;
3. `OnSuspend()` ou `OnResume()` do aplicativo.

## Serviços removidos na sequência (política)

Confirmado no fonte que não alteram o estado do jogo:
- `NotifyManager.DoNotify/DoCancel` (`NotifyManager.cs:101-128`): só chamam
  `KairoPlugin.CancelNotifications` (política offline sem efeito,
  `config/service-overrides.json`) e `MyNotify.OnNotify` (vazio, `MyNotify.cs:21-23`).
- `KairoPlugin.SetNotificationBackground` (política sem efeito).
- `kairo.unity.analytics.AnalyticsTracker.DispatchPageView` (`AnalyticsTracker.cs:93-105`):
  só envia o buffer de analytics por uma thread de rede.
O `AnalyticsTracker.DispatchPageView` do jogo continua sendo chamado pelo
próprio jogo em `Main.OnSuspend`.

## Testes

Oráculo do teste de formulários estendido com a ordem de eventos do
`host_focus` (caso `host-focus`).
