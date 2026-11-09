# Execução diagnóstica com lacunas explícitas

Esta infraestrutura permite localizar uma primeira lacuna durante a execução
quando um método virtual ainda sem tradução impede a ligação. **Não comprova
boot nem substitui o build normal.** As definições diagnósticas são geradas
somente em `build/`, com ID/motivo e manifesto separados. Os métodos com traps
continuam rejeitados/todo; nenhuma contagem normal inclui esses corpos.

O manifesto contém `diagnostic_only: true`, o hash do recibo Game canônico,
`canonical_files` relativos à raiz do repositório, `generated_files` relativos
ao diretório diagnóstico, `traps` e `producer`. O builder verifica hashes,
contenção em `build/`, igualdade integral com a lista canônica do recibo e
ausência de fontes não inventariadas. O produtor deve coincidir com o canônico,
e seus fontes C#/driver devem conservar os hashes. Mudanças
durante a compilação impedem o lançamento, como no build normal.

Com um diretório produzido pelo tradutor e já validado, o comando é:

```text
python tools/build-pc --apk <APK próprio autenticado> --diagnostic-generated <diretório em build/> --run --metrics
```

Esse caminho usa `build/pc-diagnostic`, um cache CMake separado, e define
`PLS_DIAGNOSTIC_BUILD`. O host exige `PLS_DIAGNOSTIC_SAVE_ROOT`; o builder
aponta para preferências novas e isoladas em cada tentativa. O perfil normal
de armazenamento não recebe os saves do experimento. Logs e executável ficam
privados; `config/phase2-diagnostic-attempts.json` registra somente a tentativa,
hashes e resultado, mantendo boot/título/menu falsos e cobertura sem promoção.

A trap escreve `PLS_TRANSLATION_GAP=<ID>` em stderr, seguido de newline e flush,
antes de lançar o erro. O supervisor lê stdout/stderr continuamente e termina
somente o PID filho que criou ao detectar o marcador. O marcador permanece
fatal mesmo se uma camada de inicialização/worker capturar o erro ou o processo
retornar zero. Sem marcador, aplica-se o limite de 20 segundos. Não se procuram
nem encerram processos pelo nome.

Os testes próprios do supervisor provam marcador fragmentado, logs preservados,
erro capturado que mantém o filho vivo e saída zero com marcador. Os testes do
manifesto rejeitam fonte alterada, fonte não inventariada, recibo canônico
alterado e diretório fora de `build/`. Essa prova de infraestrutura não é uma
execução do jogo e não autoriza considerar um primeiro frame como título/menu.
