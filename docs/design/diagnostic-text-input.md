# Entrada de texto no alvo PC de desenvolvimento

Decisão do usuário após o checkpoint 5b02ef6: backend SDL não bloqueado,
entrada por SDL_TextInput em campo simples, sem janela própria de IME.
Isso substitui a proposta anterior de janela modal Windows, que não foi adotada.
Não é decisão de telas/controles do 3DS. Teclado swkbd e comportamento de retorno
no 3DS serão definidos na Fase 3.

## Assinatura e consumidores

Canvas.ImeOnBlock(string,int,int) retorna string, não bool. Delega originalmente
a KairoPlugin.ImeOnBlock na thread UI. Os únicos consumidores medidos são:

- main.AppData.SendSaveData(string,int,Exception), AppData.cs:5637, modos 0/0.
- form.SpForm.Update, SpForm.cs:360, modos 0/1.

Os dois descartam o retorno. No PC, o serviço inicia o campo na thread de UI e
retorna o texto inicial sem esperar a edição; Blocking() é sempre false. A espera
curta pelo despacho da tarefa de UI não é uma espera pela resposta do usuário.
Os inteiros displayMode/inputMode são preservados, sem inventar semântica JNI.
Nenhum branch do jogo é apagado para eliminar a dependência.

## Backend

SDL_StartTextInput inicia a entrada; eventos SDL_TEXTINPUT fornecem UTF-8,
convertido para a representação UTF-16 do runtime. O campo permite acrescentar
texto e apagar o último caractere, conservando pares surrogate. Enter/Escape
fecha o campo e SDL_StopTextInput encerra a entrada. O valor editado permanece
no campo até nova abertura; os consumidores atuais não solicitam uma resposta
posterior. Usos futuros que consumam o resultado precisam de contrato próprio.

O campo é desenhado sobre o framebuffer PC com a fonte do APK local. Não cria
janela modal, clipboard automático, envio de mensagens, alteração de save ou
texto de asset embutido. Update/Draw e streaming de áudio continuam executando.
O código em src/game continua gerado; a ponte é API de plataforma.

## Painel assíncrono FepPanel no PC

O caminho de novo jogo alcança SubForm.Update → Update2 → panel.MainPanel.Show →
kfw.panel.MainPanel.Show → FepPanel.Start → KairoPlugin.StartFepPanel.
Ele usa o mesmo campo SDL, com título e rótulos fornecidos em runtime, e conserva
o protocolo separado de término: StartFepPanel inicia, IsFepPanelFinish consulta,
GetFepPanelResult só entrega o par resultado/texto depois da conclusão.
Enter confirma (primeira posição não nula); Escape cancela (posição nula).
FepPanel.Update conserva o próprio corpo, limpa Current, atribui o texto e
despacha ComponentAction ao botão correspondente. Nenhum resultado é concedido
antes da edição e não se salta a validação do fonte.

kfw.panel.MainPanel.ComponentAction conserva trim, largura de texto, comprimento
japonês, proibições e callback. maxLength e mode são guardados na requisição;
o campo PC não presume o significado dos flags JNI nem copia um filtro Android
desconhecido. A filtragem durante a digitação no Android continua UNKNOWN; a
validação após confirmar permanece a do jogo. O método síncrono obsoleto
ShowFepPanel continua sem implementação; não devolve confirmação fictícia.

A fixture ampliada tem 32 asserções, incluindo consulta durante edição, recusa
de resultado prematuro, confirmação com texto editado, cancelamento e reabertura.
São testes do contrato PC; não promovem a fronteira a verified por comparação
com um teclado Android. Swkbd e seus controles ficam para a Fase 3.

## Evidência e limites

tools/test_text_input.py exercita 20 asserções: abertura, retorno imediato,
estado não bloqueado, eventos SDL reais sintéticos, Unicode/surrogates,
Backspace, Enter, Escape, modos preservados e desligamento da entrada.
Não promove a API a equivalência Android verificada. A decisão permite esta
adaptação PC; protocolo das flags, cancelamento e UI de IME Android são UNKNOWN.
