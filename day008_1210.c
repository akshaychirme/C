/*
• Nested-if :- When Multiple condition can be true. Like a Check Box.
• else-if   :- When  Single  condition can be true. Like a Radio Button.

5) Switch statement :-
    - It is used to reduce complexity of else-if ladder.
    - One or more variable on constant & zero or more operators.

.    switch(expression)
.    {
.        case value1 : task 1;
.                      break;
.             value2 : task 2;
.                      break;
.             value3 : task 3;
.                      break; .....
.             default : task;
.    }
*/

// Ex :- WAP to accept a number and display following :- If no is 1 --> "RED", 2--> GREEN, 3-->BLUE, other--> WHITE

// #include <stdio.h>
// main()
// {
//     int a;
//     printf("Enter a number = ");
//     scanf("%d", &a);
//     switch (a)
//     {
//     case 1:
//         printf("RED");
//         break;
//     case 2:
//         printf("GREEN");
//         break;
//     case 3:
//         printf("BLUE");
//         break;
//     default:
//         printf("WHITE");
//     }
// }

/*
EX :- WAP to print following conditions :-
        100 - 80    "Honours"
         80 - 60    "First class"
         60 - 50    "Second class"
         50 - 40    "Third class"
         <40        "Fail"
*/

// #include<stdio.h>
// main(){
//     int percent;
//     printf("Enter percentage out of 100 = ");
//     scanf("%d", &percent);

//     switch(percent/10){
//         case 10:
//         case 9:
//         case 8: printf("Honours");
//                 break;
//         case 7:
//         case 6: printf("First class");
//                 break;
//         case 5: printf("Second class");
//                 break;
//         case 4: printf("Third class");
//                 break;
//         default : printf("Fail");
//     }
// }

// Ex :- WAP to accept two numbers from user and one operator and do that calculation.

// #include <stdio.h>
// main()
// {
//     int num1, num2;
//     char opt;
//     printf("Enter two numbers = ");
//     scanf("%d%d", &num1, &num2);
//     printf("Enter operator (+ - * /) = ");
//     opt = getchar();
//     opt = getchar();

//     // getchar() should be used 2 times in gcc compiler because (Enter key) is also taken as input after two numbers are inserted. other wise use clrscr() after first getchar() function. it will clear memory (Enter key) which is stored in 'opt' variable.

//     switch (opt)
//     {
//     case '+':
//         printf("%d + %d = %d", num1, num2, (num1 + num2));
//         break;
//     case '-':
//         printf("%d - %d = ", num1, num2, (num1 - num2));
//         break;
//     case '*':
//         printf("%d * %d = %d", num1, num2, (num1 * num2));
//         break;
//     case '/':
//         printf("%d / %d = %d", num1, num2, (num1 / num2));
//         break;
//     default:
//         printf("Invalid Input.");
//     }
// }

/*
**********************  LOOPING STRUCTURE ***********************

        - Loops in programming are used to repeat a block of code until the specified condition is true.
        - To control looping the following elements are used.

        1) Initialization
        2) Condition
        3) Increment / Decrement


                                   ↓----------------------------------------------------<---|
        start ---> Initialization ---> condition --true--> Task ----> Increment/decrement --↑
                                                --false-> exit

♠ Types of loop :-
        1) Entry Controlled loop
            • while loop
        2) Exit Controlled loop
            • do-while loop
            • for loop
*/

// Ex :- WAP to print 1 to 15 :-

// #include<stdio.h>
// main(){
//     int i=1;
//     while(i<=15){
//         printf("%d\n", i);
//         i++;
//     }
// }

//  Ex :- WAP and flow chart to print sum of 1 to 10.
//                              ↓--------------------------------------<---|
//        start ---> i , sum=0 --->if(i<=10)--true--> sum=sum+i ---> i++ --↑
//                                          --false-> exit

// #include<stdio.h>
// main()
// {
//     int i = 1, sum = 0;
//     while (i <= 10)
//     {
//         sum = sum + i;
//            i++;
//     }
//     printf("Sum of 1 to 10 is = %d", sum);
// }

