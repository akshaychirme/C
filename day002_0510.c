//Add two numbers.

// #include<stdio.h>
// main(){
//     int a,b,c;
//     a=2;
//     b=4;
//     c=a+b;
//     printf("%d + %d = %d",a,b,c);
//     return 0;
// }

//To find area of a circle.

    // #include<stdio.h>
    // #define PI 3.14                 //defining constant
    // main(){
    //     float radius, area;
    //     radius = 5;
    //     area = PI * (radius * radius);
    //     printf("Area of circle having Radius %f is - %f", radius, area);
    //     return 0;
    // }

/*
C Tokens :-
    - It is a smallest individual unit of program.

1) Identifiers
2) Constant
3) Keywords
4) Operators
5) Strings

1) identifiers ;-
    - Name of constant, variables, functions, arrays, ect.
    Rules- only letters, digits and underscore allow.
         - You cannot starts with digits.
         - Keywords (32) are not allowed.

2) Constant :-
    - once declare and define values cannot be changed.
    - using #define OR using 'const' keyword.

    1) Defining Constant
*/
        // #include<stdio.h>
        // #define M 5                     //Using #define
        // main(){
        //     const int n = 2;            //Using 'const' keyword
        //     printf("%d , %d", M,n);
        // }

/*
    2) Constant values
        1) Integer Const - Whole number without decimal point.
            - Decimal integer [ %d --- 0 to 9 --- 10num]    0,1,2,3,4,5,6,7,8,9,10,11,12,13,14...
            - Octal integer   [ %o --- 0 to 7 --- 8num]     0,1,2,3,4,5,6,7,10,11,12,13,14,15.16,17,20,21...
            - Hexadecimal integer   [%x OR %X --- 0 to 9 & A to F --- 16num]    0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F, 10,11,12,13,14,15,16,17,18,19,1A,1B,1C...
*/

// #include<stdio.h>
// main(){
//     int a = 12;
//     printf("\n%d", a);
//     printf("\n%o", a);
//     printf("\n%x", a);
//     printf("\n%X", a);
// }

/*
        2) Real Constant :-
            - Constant having decimal point.
            1) Normal Notation      - (%f OR %g)  --> 0.000485            300.0
            2) Scientific Notation  - (%e OR %E)  --> 4.8X10^-4           3.0X10^2
            We will write this in C -->               4.8E-04             3.0E+02

    3) Charactor Constant :-
        - All the character have a fixed value these values are called as ASCII values (0-255)
        - Character Constants are represented using --> ' ' single quote
        - %c is used.
*/

// #include<stdio.h>
// main(){
//     int a = 66;
//     printf("%c", a);
// }

/*
    4) String Constant :-
        - String is a set of characters. "Akshay"
        - Represented in double quote --> " "


3) Keywords :-
    - It is reserved words
    - Keywords are define to perform a specific task.

    int float   char    double  if  while   else    for goto    switch  signed  case    default break   continue    return  auto    extern  static  unsigned    do  register    struct  union   void    short   long

*/




