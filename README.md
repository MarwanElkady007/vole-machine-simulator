# Vole machine simulator (C++)

OOP course assignment: a simulator for the Vole machine language (the toy CPU from
Brookshear's *Computer Science: An Overview*).

It loads a program from a text file into memory, then runs the fetch-decode-execute
loop over 16 registers and 256 bytes of memory, supporting opcodes 1 to C. After each
run it prints the registers, the memory, the PC and the IR.

```
g++ -std=c++17 *.cpp -o vole
./vole
```

There are sample programs in `examples/`.

Team project with [Seif Wael](https://github.com/Seiffwaell) and [Mohamed Waleed](https://github.com/MrWeza).
