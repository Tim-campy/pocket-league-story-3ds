# Single.Parse no caminho do título

`JFloat.ParseFloat(string)` chama `Single.Parse(string)`; o parser de tags de
TextLayout precisa desse caminho. A implementação nativa é código próprio em
managed_string_ops.cpp, com std::from_chars, sem incorporar outro componente do
Mono ou instalar dependências. O contrato de entrada admite apenas os formatos
numéricos Invariant/en-US medidos. O wrapper consulta CurrentCulture; outros
formatos são recusados explicitamente. A cultura do host é instalada antes dos
workers, conforme o contrato já documentado.

O [Single.cs histórico](https://github.com/mono/mono/blob/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/System/Single.cs#L169-L176)
mostra a passagem por Double.Parse e o teste de overflow somente na borda
positiva antes do cast. O comportamento foi confirmado, inclusive a assimetria,
executando C# sintético contra o mscorlib do SDK que tem o mesmo hash do APK.
Não foi executada a DLL do jogo.

`python tools/probe_float_parse.py` compara 131.206 observações: 67 entradas de
borda e todos os 65.536 code units BMP nas pontas de um número, em cada uma das
duas culturas. O recibo é config/phase2-float-parse-tests.json. A primeira
execução passou todas as observações. As 74 diferenças diante do .NET moderno
são contexto; o perfil moderno não substitui o Mono histórico.

Casos medidos incluem sinal de zero, arredondamento intermediário por double,
denormais/underflow, overflow assimétrico de Single, overflow de Double,
separadores de milhar, whitespace histórico, NUL e grafias de NaN/Infinity.
Não é prova de todos os decimais possíveis nem execução no Android. Os logs e
o include com os valores próprios ficam exclusivamente em build/.

O parser hexadecimal também distingue AllowHexSpecifier e HexNumber. A sonda
StringOps ampliada compara 526.290 observações nos perfis histórico e moderno,
incluindo o BMP inteiro nos dois modos. Nenhuma tabela nova de terceiros foi
adquirida; os intervalos históricos já autorizados conservam sua proveniência
separada em THIRD_PARTY.md.
