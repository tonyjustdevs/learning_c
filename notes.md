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

# fully manual pipeline
### main.c → (preprocess) → (compile) → (assemble) → (link) → a.out:

|step|code|output|
|-|-|-|
| preprocess only<br>- via `cpp` (preprocessor)| `gcc -E main.c > main.i`| - `main.i`|
| compile only (to assembly)<br>- via `cc1` (compiler)| `gcc -S main.c`| - preprocesses<br>- compiles<br>- writes `main.s`|
| assemble only<br>- via `as` (assembler)| `gcc -c main.c` | - preprocesses<br>- compiles<br>- assembles<br>- writes `main.o`|
| link<br>- via `ld` (linker) | `gcc -o main.c -lm` | linking<br> = combining + resolving<br> -> executable<br><br>that is:<br>- combining object files<br>- resolving symbols (like sqrt)<br>- producing final executable|



# tp compilation process notes: 
### 1. Pre-processing  
#### 1.1 `main.c`:  
- ***copies*** contents `hello.h` (directive) to `main.c`
- usually **function signatures**, **structs** etc

### 2. Compilation (to object files `.o`)
#### 2.1 `main.c` -> `main.o`:
- sees a call to `hello_method()`
- generates machine code to call `hello_method()`
- no compilation error because `hello_method()` already declared
    - trusts implementation will be provided in the future
- creates **placeholder** `hello_method()`:
    - or **symbol reference**
    - or **undefined reference** 
    - or **external symbol**

#### 2.2 `hello.c` -> `hello.o`:
- create actual machine code for `hello_method()`

### 3. Linking (linker `ld`)
Takes all object files + libraries & combines into one executable

#### 3.1 `main.o`:
- Linker sees undefined refernece in `main.o`
    - Linker looks through all `.o` files & finds declaration/implementation