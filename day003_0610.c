// ============    Uncomment the code (Ctrl+/) which you want to RUN ============

/*
    
• Structure of C Program :-
    ♣ Documentation Section                --> //Comments
    ♣ Link Section                         --> #include<....>
    ♣ definition Section                   --> $define
    ♣ Global Declaration section           --> Global Variables Declare
    ♣ main() Function Section

    main(){
        Declaration Part                    --> All program variables declaration (name & datatype)
        Executable Part                     --> All the executable functions
    }

    subprogram section
    function 1
    function 2....                          --> You can define number of functions here.
*/

// Getting value from user at run time :-

// #include<stdio.h>
// main(){
//     int a,b,c;
//     printf("Enter first values = ");
//     scanf("%d", &a);
//     printf("Enter second value = ");
//     scanf("%d", &b);
//     c = a + b;
//     printf("Addition of two numbers is = %d", c);
// }

/*
4) Operators :-
    - used to perform operation like addition, substraction...etc.
    1) Unary operators
        - Only one operands     +5, -28, +7
    2) Binary Operators
        - Two operands          2+3, 3-12
    3) Ternary Operators
        - Three Operands        2>4 ? yes : no

• Categories of Operators :-
    1) Arithmatic Operators
    2) Relational Operators
    3) Logical Operators
    4) Assignment Operators
    5) Increment & Decrement Operators
    6) Conditional Operators
    7) Bitwise Operators
    8) Special Operators

1) Arithmatic Operators:-
    + unary Plus        +4
    - Unary Minus       -4
    + Binary Plus       2+4
    + Binary Minus      2-4
    * Multiplecation    3*5     -->15
    / Division          3/5     -->1
    % Modulus Division  3/5     -->2 (gives ramainder)

• Rules of division :-
    ♣ int/int      = int
    ♣ int/float    = float
    ♣ float/int    = float
    ♣ float/float  = float

    ♣ Left operand sign is given to the answer in modulus operator. 
        -5 % 2 = -1
        5 % -2 = 1
        -5 % -2 = -1
    
2) Relational Operators:-
    - It shows relation between two operands in terms of true or false.
    - All relational operators are binary.

    <   less than
    >   more than
    <=  less or equal
    >=  more or equal
    ==  exactly equal
    !=  not equal

3) Logical operators:-
    - When we want some logic between two operands.
.               &&  ||
.       T   T   T   T
.       T   F   F   T           !T  --> F
.       F   T   F   T           !F  --> T
.       F   F   F   F

4) Assignment operators :-
    - It is used to assign value from its right hand side to left hand side variable.
    - Works from right to left.
    - There must be single variable in left hand side of assignment operator.

    • Shorthand operator :-
        +=  -+  *=  /=  %=  <<= <<= ^=  &=  |=
*/

// #include<stdio.h>
// main(){
//     int a =10;
//     a+=20;          //a = a+20      --> a = 10+20
//     printf("%d",a);
// }

/*
5) Increment & Decrement Operator
    Increment   ++
    Decrement   --

    ♣ Increase or decrease by one
*/

// #include<stdio.h>
// main(){
//     int a,n;
//     a=3;                //a=3
//     n=++a;              //a=4   Pre-increment
//     printf("n=%d",n);   //a=4   first increment then use
//     printf("a=%d",a);   //a=4
//
//     n=a++;              //a=4   Post-increment
//     printf("n=%d",n);   //a=4   first use then increment
//     printf("a=%d",a);   //a=5
// }


