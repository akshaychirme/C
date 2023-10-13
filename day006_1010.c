/*
******************* DATA TYPES   ********************
    - Type of data that can be stored into the computer memory.

    ♠ Types of data type :-

    1) Basic Data Type
        • char      1 byte
        • int       2 bytes
        • float     4 bytes
        • double    8 bytes
        • void
    ♠♠ Modifiers -
        - short     short int = 1 byte      long int = 4 bytes      long double = 10 bytes

        - long

        - signed    int a = we write normal int which is always signed int.
            [+-| | | | | | | ]   ---> we get 7 spaces in signed datatype. First bit is for + or - sign which is called as MSB bit.

        - unsigned  unsigned int a = we write 'unsigned' keyword in front of datatype
            [ | | | | | | | ]   ---> we get 8 spaces in unsigned datatype. therefor it can store more digits.

    2) Derived Data Type

    3) User Defined Data Type

    ------------------ 2] CONTROL STRUCTURE -------------------

    1) Sequential Structure

    3) Looping Structure

    1) Sequential Structure :-
        - line by line execution by which statements are executed sequentially, in the same order in which they appear in the program.
        - start --> task1 --> task2 --> task3 --> stop
    */
// Ex draw a flowchart for calculating area of circle.
// start --> input R --> A = PI*R*R --> output A --> stop

// Ex draw a flowchart and WAP for simple intrest.
// start --> input p,r,y --> I = (p*r*y)/100 --> output I --> stop

// #include<stdio.h>
// main(){
//     float p,r,y,I;
//     printf("Enter p, r and y = ");
//     scanf("%f%f%f", &p,&r,&y);
//     I = (p*r*y)/100;
//     printf("S.I = %f", I);
// }

// Ex draw a flowchart and WAP for converting fahrenheit to celsius.
// start --> input f --> c = (f-32)/1.8 --> output c --> stop

// #include<stdio.h>
// main(){
//     float c,f;
//     printf("Enter fehrenheit temperature = ");
//     scanf("%f", &f);
//     c = (f-32)/1.8;
//     printf("Celsius = %f",c);
// }

// Ex draw a flowchart and WAP for converting celsius to fahrenheit.
// start --> input c --> f = (c*1.8)+32 --> output f --> stop

// #include<stdio.h>
// main(){
//     float c,f;
//     printf("Enter celsius temperature = ");
//     scanf("%f", &c);
//     f = (c*1.8)+32;
//     printf("Celsius = %f",f);
// }

// Ex WAP to accept time in minutes & print in hours and minutes

// #include<stdio.h>
// main(){
//     int mint, hours;
//     printf("Enter time in minutes = ");
//     scanf("%d",&mint);
//     hours = mint/60;
//     mint = mint%60;
//     printf("Time is %d Hours and %d minutes", hours, mint);
// }

/*
    2) Selection Structure:-
        1) if statement
        2) if-else statement
        3) nested if statement
        4) else-if ladder
        5) switch-case statement


        1) if statement:-
            // start --> condition --true-> task --> exit
.                                  --false---------> exit
        if(condition)
        {
            task
        }
*/
// Ex WAP to say good morning when time is befor 12 otherwise say good day.

#include <stdio.h>
main()
{
    int time;
    printf("Enter time = ");
    scanf("%d", &time);
    if (time < 12)
    {
        printf("\nGood morning.");
    }
    printf("\nGood Day.");
}

// But here good day is printing always wheather condition is true or false.
// What if we want to print something when condition is false only. Let's see...Tomorrow