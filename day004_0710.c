// ============    Uncomment the code (Ctrl+/) which you want to RUN ============

// #include<stdio.h>
// main(){
//     int n, a=4, b=2, c=5;
//     n = ++a - b + c;
//     printf("n=%d a=%d", n, a);
// }

// #include<stdio.h>
// main(){
//     int n, a=4, b=2, c=5;
//     n = a++ - b + c;
//     printf("n=%d a=%d", n, a);
// }

// #include<stdio.h>
// main(){
//     int a=4;
//     printf("a=%d",a++);
//     printf(" a=%d",a++);
// }

// #include<stdio.h>
// main(){
//     int a=4;
//     printf("a=%d",a++);
//     printf(" a=%d",++a);
// }

// #include<stdio.h>
// main(){
//     int a=4;
//     printf("a=%d",++a);
//     printf(" a=%d",a++);
// }

// #include<stdio.h>
// main(){
//     int a=4;
//     printf("a=%d",++a);
//     printf(" a=%d",++a);
// }

// #include<stdio.h>
// main(){
//     int a=4;
//     printf("\n%d %d",++a, ++a);
// }

// #include<stdio.h>
// main(){
//     int a=4;
//     printf("\n%d %d",++a, a++);
// }

// #include<stdio.h>
// main(){
//     int a=4;
//     printf("\n%d %d", a++, ++a);
// }

// #include<stdio.h>
// main(){
//     int a=4;
//     printf("\n%d %d", a++, a++);
// }

// #include<stdio.h>
// main(){
//     int a=4;
//     printf("\n%d %d %d", a++, --a, a--);
// }

/*
6) Bitwise Operator:-
    - Perform operation on bit level.

    &   Bitwise AND
    |   Bitwise OR
    ^   Bitwise XOR
    <<  Shift Left
    >>  Shift Right
    ~   One's Compliment    ...All are Binary accept One's compliment. It is unary

• Each character takes 1 Byte of memory to store.

• How to find binary number of any character?
    A = ASCII value is 65.
    • Divide 65 with 2 each time.
    • Then collect all remainder while dividing and write it in reverse order from bottom to top.
    .            Remainder
    - 65/2 = 32  --> 1
    . 32/2 = 16  --> 0
    . 16/2 = 8   --> 0
    .  8/2 = 4   --> 0
    .  4/2 = 2   --> 0
    .  2/2 = 1   --> 0
    .        1 (This is also remainder)

    • Writing all remainder in reverse order:-  1000001 --> binary of 65

♠ Decimal          Binary          Octal           Hexadecimal
    0               0               0                   0
    1               1               1                   1
    2               10              2                   2
    3               11              3                   3
    4               100             4                   4
    5               101             5                   5
    6               110             6                   6
    7               111             7                   7
    8               1000            10                  8
    9               1001            11                  9
    10              1010            12                  A
    11              1011            13                  B
    12              1100            14                  C
    13              1101            15                  D
    14              1110            16                  E
    15              1111            17                  F
    16              10000           20                  10
    17              10001           21                  11
    18              10010           22                  12
    19              10011           23                  13
    20              10100           24                  14...1A 1B 1C...20 21 22...2A...
*/

// Ex of bitwise AND

// #include<stdio.h>
// main(){
//     int a,b,c;
//     a=5;               //   00000101  <-- binary of 5
//     b=6;               // & 00000110  <-- binary of 6
//     c=a&b;             // = 00000100  <-- after bitwise AND this is binary of 4
//     printf("%d", c);
// }

// Ex of bitwise OR

// #include<stdio.h>
// main(){
//     int a,b,c;
//     a=5;                //  00000101     <-- binary of 5
//     b=6;                //| 00000110     <-- binary of 6
//     c=a | b;            //= 00000111     <-- after bitwise OR this is binary of 7
//     printf("%d",c);
// }

// Ex of bitwise XOR

// #include<stdio.h>
// main(){
//     int a,b,c;
//     a=5;                    //  00000101    <-- binary of 5
//     b=6;                    //^ 00000110    <-- binary of 6
//     c=a^b;                  //= 00000011    <-- after bitwise XOR this is binary of 3
//     printf("%d",c);         // Same asel tar 0 ani vegla asel tar 1 ghya.
// }

// Ex of Left shift

// #include <stdio.h>
// main()
// {
//     int a, b;
//     a = 6;                      //  00000110
//     b = a << 1;                 //<<00001100    <-- shifting 1 space & become binary 12
//     printf("%d", b);
// }

// Ex of >> Right shift

// #include<stdio.h>
// main(){
//     int a, b;
//     a = 6;                      //  00000110
//     b = a >> 1;                 //>>00000110    <-- shifting 1 space & become binary 3
//     printf("%d", b);
// }

// Ex of ~ once compliment

// #include<stdio.h>
// main(){
//     int a, b;
//     a = ~3;                     //  00000101
//     printf("%d", a);            //>>11111010    <-- make 0 as 1 and 1 as 0
// }

/*
7) Conditional Operation :-
        ?: --> ternary operator
    (Condition) ? (Expression 1) : (Expression 2);
    - If condition is true then expression 1 will be evaluated.
    - If condition is false then expression 2 will be evaluated.

    • Expression:-
        - One or more variables on constants & zero or more operatores.
*/

// Ex:- Program to print largest number between 2 numbers.

// #include <stdio.h>
// main()
// {
//     int a, b, c;
//     printf("Enter two numbers = ");
//     scanf("%d %d", &a, &b);
//     c = (a > b) ? a : b;
//     printf("%d",c);
// }

// Write a program to check student is pass or fail.

// #include <stdio.h>
// main()
// {
//     int percent, b;
//     printf("Enter percentage = ");
//     scanf("%d", &percent);
//     b = (percent >= 40) ? printf("Pass") : printf("Fail");
// }

// Ex:- Take the number from user and print whether the number is positive or negative.

// #include<stdio.h>
// main(){
//     int num;
//     printf("Enter any number = ");
//     scanf("%d",&num);
//     num = (num >=0)? printf("Number is Positive.") : printf("Number is Negative.");
// }

/*
8) Special Operator:-

.           , - Comma Operator
.     (type) - Type cast operator
.    sizeof() - size operator
.         ( ) - Function operator
.         [ ] - Subscript Operator
.           & - Address Operator
.           * - Dereference Operator
.           . - Membership Operator
.          .* - Pointer to member
.          -> - Arrow Operator
.         ->* - Pointer to member

1) Comma Operator (,)
    a=4;
    b=5;
    c=a+b;

    We can write this in one line using comma operator -
    c=(a=4, b=5, a+b);

2) Type cast operator (type)
    :- Implicit type conversion (Automatic)
        - In this the small datatype converted into larger datatype automatically.
        - int + float = float
    :- Explicit type conversion
        - one datatype converted into another datatype by force (Explicitly)
        - Use type cast operator.
*/
// Ex :-

// #include<stdio.h>
// main(){
//     int a=5, b=2; float y;
//     y = a/b;
//     printf("%f", y);
// }

// #include <stdio.h>
// main()
// {
//     int a = 5, b = 2;
//     float y;
//     y = a / b;
//     y = (float)a / (float)b;
//     printf("%f", y);
// }

/*
3) sizeof()
    - used to return the size of data types n bytes.
*/

#include<stdio.h>
main(){
    printf("Size of interger = %d", sizeof(int));
}

// for turbe compiler size of int will show as 2.
// for  gcc  compiler size of int will show as 4.

