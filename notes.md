c intro ref: https://www.seas.upenn.edu/~ese5320/fall2022/handouts/_downloads/788d972ffe62083c2f1e3f86b7c03f5d/gccintro.pdf

### Shared vs Static Lib Linking (Get The Implemntation): 
|Common Things| code/file|
|-|-|
|Default library| `libc.a`|
|Search library by keyword (e.g. sqrt)| `man -k sqrt`|
|How to Link| `man sqrt` (inside: "Link with `-lm`")|
|gcc Built-in Search Paths|`gcc -print-search-dirs`|
|Find libm.a via gcc |`--print-file-name=libm.a`|
|Force Static<br>- STATICALLY link `libm.a` (& `libc.a`) into your **binary**|`gcc -static -Wall calc.c -o calc -lm`|




Two Options:
- Static Linking: copy code into your binary (`.a`) at **link-time**
- Dynamic Linking: reference shared (load dynamically) math code at runtime (`.so`) at **run-time**


`m` library:
| file|type|desc|what happens at compile/run-time|
| -|-|-|-|
|`libm.so`   |shared library, preferred| Fully linked binary (ELF shared object):<br>- compiled<br>- ready to load|Run-Time:<br>- "this program needs libm.so at runtime"|
|`libm.a`    |static library, fallback| archive of `.o` files:<br>- `libm.a = [sqrt.o, sin.o, cos.o, ...]`|Compile Time:<br>- `gcc -o -lm`<br>- links `libm.a` (aka copies used `.o` files into executable)<br><br>"your_program = your code + sqrt implementation baked in"|

default dirs:
- `/lib`
- `/usr/lib`
- `/lib/x86_64-linux-gnu`
- `/usr/lib/x86_64-linux-gnu`
