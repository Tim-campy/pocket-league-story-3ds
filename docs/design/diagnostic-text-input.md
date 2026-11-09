# Decisão pendente: texto de diagnóstico no PC

Não é design de telas nem de controles do 3DS.

O corpus completo tem somente dois chamadores de Canvas.ImeOnBlock:

- main.AppData.SendSaveData(string,int,Exception), AppData.cs:5637: abre o texto
  do relatório ao detectar a tecla 1024, com displayMode=0 e inputMode=0.
- form.SpForm.Update, SpForm.cs:360: abre o texto da exceção com displayMode=0
  e inputMode=1.

Os dois descartam o valor devolvido. A existência da dependência de
SendSaveData impede a emissão estrita de TitleForm.Update mesmo quando esse
ramo de diagnóstico não é executado. O corpo original não será cortado para
contornar essa dependência.

Canvas.ImeOnBlock delega a KairoPlugin.ImeOnBlock, que chama o plugin Java na
thread de UI e espera seu resultado. O ramo do editor usa UnityDialogs.exe;
esse binário não pode entrar no port. A semântica exata das duas flags e o
resultado de cancelamento no Android continuam UNKNOWN. Não há aparelho
conectado para observação e não se ampliou a análise Java nesta continuação.

Proposta restrita aos dois usos existentes: janela modal nativa Windows com
o texto UTF-16 recebido, selecionável e copiável por ação do usuário, e botão
Fechar. Sem edição da mensagem, envio automático, mudança do save ou cópia
automática ao clipboard. A thread de UI apresenta a janela e os workers
podem continuar; o escopo modal deve suspender/restaurar áudio e entrada como
o serviço de diálogo existente. Os valores displayMode/inputMode chegam ao
serviço, mas não são interpretados como flags Android supostamente conhecidas.

O backend ainda não foi escrito. A proposta exige decisão do usuário porque
não é uma equivalência comprovada da API original; não será anunciada como
comportamento Android verificado. Uma implementação futura com outro consumidor
que use o retorno exige definir seu protocolo antes de admiti-lo.

Alternativa: manter a API explicitamente pendente e, por consequência, manter
o slot de TitleForm.Update não emitido. Não haverá retorno fictício de sucesso
nem remoção do ramo no fonte traduzido.

A consulta decorre de [AGENTS.md, seção 9.5](../../AGENTS.md):
"quando uma função da fronteira não puder ser reimplementada fielmente".
A janela proposta resolve os dois usos de diagnóstico medidos, mas sua
equivalência ao diálogo Android não foi comprovada; por isso depende da
decisão do usuário antes da implementação.
