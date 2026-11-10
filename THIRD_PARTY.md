# Third-party notices

## Mono class-library collation (MIT/X11)

The native cultural string component adapts Mono's `SimpleCollator`,
`MSCompatUnicodeTable`, and `CodePointIndexer`. It uses their official class-library
collation resources; these are open-source dependency data, not tables extracted
from the game or Unity binaries. No Mono VM or Unity DLL is linked or distributed.

Canonical upstream: [mono/mono](https://github.com/mono/mono), revision
`f08f8a27bfe3aafda4e430ee2365dec73c1070d7` (official `mono-2-6` branch). All 17 inspected source/license/resource
files are byte-identical to the Unity official fork revision
`b6587926c0f146c8b12985744f33a13b39a22d57` (Unity 5.3 staging merge dated
2016-03-11). This does not establish the exact source revision used to build the
installed SDK. The seven collation resources additionally match the external SDK
and the user's authenticated APK by SHA-256, without storing original bytes.

License assignment: [`LICENSE`, lines 62–64](https://github.com/mono/mono/blob/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/LICENSE#L62-L64) assigns `mcs/class`
to MIT X11; [`mcs/MIT.X11`](https://github.com/mono/mono/blob/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/MIT.X11) contains the permission text below.
The adapted component source files additionally carry:

> Copyright (C) 2005 Novell, Inc.
> Author: Atsushi Enomoto.

The Char/TextInfo/String wrapper adaptations also preserve these source notices:

> (C) 2001, 2002 Ximian, Inc.
> Copyright (C) 2004–2005 Novell, Inc.

TextInfo authors: Dick Porter, Duncan Mak, Atsushi Enomoto and Sebastien Pouliot.
Char authors: Andreas Nahr, Miguel de Icaza and Jackson Harper. The common MIT
permission text below applies to these class-library algorithms as well.

License file SHA-256: `c493ac4f1910850f33e9115002ce7e7c9bc8dfe43f4bbc708d8938dd1cd76f92`.
Repository licensing map SHA-256:
`4c6abe1c24230a058f13f47c94d1ce106a47fc0177b7a3e13dc5a6fe9541fac5`.
Exact files, hashes, reproduction commands and measured limitations are in
[docs/toolchain.md](docs/toolchain.md) and
[docs/notes/phase2-mono-collation.md](docs/notes/phase2-mono-collation.md).

```text
Copyright (c) 2001, 2002, 2003 Ximian, Inc and the individuals listed
on the ChangeLog entries.

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
```

## Historical auxiliary BMP data (GNU Library GPL version 2)

The user separately authorized these LGPL tables after the initial MIT collator
preparation. `mono/metadata/char-conversions.h` is acquired from the same official
upstream revision `f08f8a27bfe3aafda4e430ee2365dec73c1070d7`. It has no
individual MIT grant; historical root `LICENSE`, lines 25–44, assigns the Mono VM
to LGPL/commercial terms. Its exact SHA-256 is
`b73fbd2efc19dc6e6104448383e3859595264f210e5e0dbdd19e691712477d83`.
The source file contains 302145 bytes and is byte-identical to the official
Unity fork at `b6587926c0f146c8b12985744f33a13b39a22d57`.

The exact license is **GNU Library General Public License version 2, June 1991**,
as stated by upstream [`COPYING.LIB`](https://github.com/mono/mono/blob/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/COPYING.LIB).
A complete unchanged copy is [third_party/mono-lgpl/COPYING.LIB](third_party/mono-lgpl/COPYING.LIB),
25369 bytes, SHA-256
`e0db38a37e8178f2032d4e6964e9108d99242b76bedc7818cb39cd856de96389`.
It is not labeled LGPL 2.1 or MIT.

`tools/generate_mono_collator.py` emits only the four historical BMP case arrays
and a bitmap equivalent to `CategoryData[c] == 29` (`OtherNotAssigned`). The data
occupies 46832 bytes: 38640 case bytes plus an 8192-byte category bitmap. An
additional 80-byte table (20 DecimalDigitNumber ranges) is derived from the
same authorized CategoryData for historical Int32 HexNumber parsing; it is
generated as mono_decimal_digit_ranges.inc, with the same separate LGPL notice.
The combined Unicode payload is 384270 bytes; collation alone is 384190. Numeric
tables are not used or emitted. The generated table include remains under ignored
`build/generated/mono-collation/`; its data remains separately licensed under GNU
Library GPLv2 when linked. `managed_mono_character_data.cpp` installs this real
historical provider. No Unity DLL or extracted Unity table supplies those bytes.

The license and exact corresponding official source/provenance must accompany
redistribution of this component; the acquisition/generation recipe remains in
the repository, with immutable source URL and SHA. The MIT notices above do not
relicense this data. No final 3DS distribution is produced in Phase 2.

The 2016 upstream MIT runtime relicensing was not treated as retroactive permission:
the old header had been removed in 2015 and its replacements changed data/rules.
That investigation is why the historical data has a separate license and explicit
authorization instead of being copied into the MIT attribution.

The later [license dependency review](docs/notes/collation-license-review.md)
records a private behavioral ablation: removing the unassigned bitmap changes
992 of 25,704 synthetic edge observations, including 124 in en-US; disabling
the case-table lookups changes eight uppercase conversions. Production data
was retained under the existing authorization. This is not a license choice
for the rest of the port.

## Tentativa UCD posterior a 5b02ef6, não adotada em produção

As tabelas de caixa/categoria foram regeradas independentemente com UnicodeData
3.1.0 (versão declarada nas fontes Mono/Unity) e 3.0.0 como controle. As duas
variantes falharam em cinco das 25.704 observações históricas. Nenhum dado foi
retocado a partir do provider LGPL para forçar igualdade. Produção conserva
46.832 + 80 bytes GNU Library GPL v2 separados dos 337.358 bytes MIT/X11.

Os downloads oficiais da experiência são cobertos pela Unicode License V3,
fixada por hash no script e recibo; não integram o executável de produção.
Proveniência, hashes, resultados e religação pelo fonte completo publicado:
[unicode-regeneration.md](docs/notes/unicode-regeneration.md).


## Mono default numeric formatter (MIT/X11)

The default-G Single/Double subset in `src/kairo/common/managed_float_format.cpp`
is adapted from the official Unity Mono revision
`b6587926c0f146c8b12985744f33a13b39a22d57`,
`mcs/class/corlib/System/NumberFormatter.cs` and `NumberFormatter.jvm.cs`.
Copyright (C) 2004 Novell, Inc.; (C) 2008 Mainsoft Co.
Authors: Kazuki Oikawa and Eyal Alaluf. Both source headers grant MIT/X11
permission (the MIT permission and warranty text reproduced above applies).
The 24,576-byte mantissa/exponent table payload is generated locally from the
MIT managed JVM source, never from the VM's differently licensed numeric tables.
The pinned source files and generated table stay in ignored `build/`.
Run `tools/setup_number_format.py --apk <your-local-apk>`; the source URLs,
SHA-256 and license-header checks are recorded in
`config/phase2-number-format-sources.json`. No game asset is involved.

## Microsoft TraceEvent (MIT; development tool only)

The official NuGet package Microsoft.Diagnostics.Tracing.TraceEvent 3.2.8 is
used locally to read Windows ETW traces. It is not linked into the port.
`tools/setup_etw_reader.py` pins the package SHA-256, checks its MIT license
declaration and retains the package metadata under ignored
`build/deps/trace-parser`. The upstream source is
https://github.com/microsoft/perfview; its license is
https://github.com/microsoft/perfview/blob/main/LICENSE.TXT.
Package hash and runtime requirements are recorded in `docs/toolchain.md`.
