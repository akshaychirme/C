/*
Program - 
    - Set of instruction is called as program.

1) Low level        - Assembly language
2) Middle level     - C llanguage
3) High level       - C++, Java, PHP, JS

Compiler -
    - It is a program that traslate High level language to Low level language.
    - Source code into Machine code.
    - It compiles whole program at once.

Interpreter -
    - Interpreter dose same work as complier.
    - But it complies program line by line.

Software -
    - It is set of Programs.
    Types -
        - System software
        - Application software
    User -> Appilication -> System -> Hardware

History Of C :-
    1960 - BCPL (B language by Ken Thomson)
    1972 - C language by Denis Richi
    1980 - ANSI (American National Standared Institute)
    1989 - ISO
    1999 - C99 (current update)

Features of C:-
    - Robust language -Gives result in any situation
    - Portable language -Works on Multi platform
    - Structural/Modular language
    - Built in function library

Rules:-
    - It is case sensitive.
    - Statements ends with ';'
    - 'main()' function is compulsary
    - There should be only one main() function.

Program life cycle:-
        file.c               file.obj               file.exe
    [printf(...)]   --->    [ 101010 ]  --->    [printf defination]
    source file             Object file  |       Exicutable file
.                                        |Linking
.                                        |
.                                 [Defining printf]
.                                     stdio.h

*/

//Our first program:-       <--- comments
#include <stdio.h>          // Header file
main(){                     // Main function 
    int a;                  //Declaration
    a=4;                    //assignment operator
    printf("%d",a);
    return 0;               //return function
}