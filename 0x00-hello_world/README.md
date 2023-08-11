# Compilation Process
## Note: name of the c file is stored in the variable $CFILE

0-preprocessor: runs a C file through the preprocessor and save the result into another file
1-compiler: compiles a c file but doesn't link.
2-assembler: generates the assembly code of a C file and saves it in an output file.
3-name: compiles a c file and creates an executable file named "cisfun".
4-puts.c: prints "\"Programming is like building a multilingual puzzle".
5-printf.c: prints "with proper grammar, but the outcome is a piece of art,".
6-size.c: prints the size of various C types on the computer is compiled and run on.
100-intel: generates the assembly code (intel syntax) of a C code and saves it in an output file.
101-quote.c: prints "and that piece of art is useful\" - Dora Korpar, 2015-10-19", folowed by a newline to the standard error. Note: use "2>" for redirection to standard error
