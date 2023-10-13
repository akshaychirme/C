/*
        2) if-else statement
        - start ---> condition --true--> task1 ---> exit
.                              --false-> task2 ---> exit
        if(condition){
            task1
        }else{
            task2
        }
*/

// WAP to accept a number & print wheather the number is even or odd.

// #include <stdio.h>
// main()
// {
//     int num;
//     printf("Enter the number = ");
//     scanf("%d", &num);

//     if (num % 2 == 0)
//     {
//         printf("The Number is Even.");
//     }
//     else
//     {
//         printf("The number is Odd.");
//     }
// }

// WAP to accept a number & print wheather the number is positive or negative.

// #include<stdio.h>
// main(){
//     int num;
//     printf("Enter the number = ");
//     scanf("%d", &num);

//     if(num>=0){
//         printf("The Number is Positive.");
//     }else{
//         printf("The number is Negative.");
//     }
// }

// WAP to accept a number & print wheather the number is divsible by 5 but not divisible by 4.

// #include<stdio.h>
// main(){
//     int num;
//     printf("Enter the number = ");
//     scanf("%d", &num);

//     if((num%5 == 0) && (num%4 != 0)){
//         printf("Condition Satisfy.");
//     }else{
//         printf("Ooops...Condition dose not satisfy.");
//     }
// }

// WAP to accept two numbers and print the largest number among them.

// #include<stdio.h.>
// main(){
//     int num1,num2;
//     printf("Enter two numbers = ");
//     scanf("%d%d", &num1, &num2);

//     if(num1>num2){
//         printf("The number %d is the largest.", num1);
//     }else{
//         printf("The number %d is the largest.", num2);
//     }
// }

/*
    3) Neasted if statement :-
    - start ---> condition1 --true--> condition2 --true--> condition3 --true--> task1 ---> exit
.                           |                    |                    --false-> task2 ---> exit
.                           |                    --false-> task3 ------------------------> exit
.                           --false-> task4 ---------------------------------------------> exit

    if(condition1){
        if(condition2){
            if(condition3){
                task1
            }else{
                task2
            }
        }else{
            task3
        }
    }else{
        task4
    }



Ex :- In an university following is the criteria for addmission :- physics > 60    chemistry > 65  maths > 50.
     - start ---> p>60 --true--> c>65 --true--> m>50 --true--> elligible -------> exit
.                      |              |              --false-> not elligible ---> exit
.                      |              --false-> not elligible ------------------> exit
.                       --false-> not elligible --------------------------------> exit
*/

// #include<stdio.h>
// main(){
//     int p,c,m;
//     printf("Enter the marks of Physics  out of 100 = ");
//     scanf("%d",&p);
//     printf("Enter the marks of Chemistry out of 100 = ");
//     scanf("%d", &c);
//     printf("Enter the marks of Maths out of 100 = ");
//     scanf("%d", &m);

//     if(p>60){
//         if(c>65){
//             if(m>50){
//                 printf("Congratulation...You are Eligible for Admission.");
//             }else{
//                 printf("Your are Not Eligible for Admission because your Maths marks are less then 50.");
//             }
//         }else{
//             printf("Your are Not Eligible for Admission because your Chemistry marks are less then 65.");
//         }
//     }else{
//         printf("Your are Not Eligible for Admission because your Physics marks are less then 60.");
//     }
// }

// Ex :- WAP to accept three numbers & print the largest.

// #include<stdio.h>
// main(){
//     int a,b,c;
//     printf("Enter the three numbers = ");
//     scanf("%d%d%d",&a,&b,&c );

//     if(a>b){
//         if(a>c){
//             printf("%d is the largest number.", a);
//         }else{
//             printf("%d is the largest number.", c);
//         }
//     }else{
//         if(b>c){
//             printf("%d is the largest number.", b);
//         }else{
//             printf("%d is the largest number.", c);
//         }
//     }
// }

/*
Ex :- WAP for following conditions ;-
        100 - 80    "Honours"
         80 - 60    "First class"
         60 - 50    "Second class"
         50 - 40    "Third class"
         <40        "Fail"
*/

// #include <stdio.h>
// main()
// {
//     int percent;
//     printf("Enter your Percentage = ");
//     scanf("%d", &percent);

//     if (percent >= 80)
//     {
//         printf("Honours.");
//     }
//     else
//     {
//         if (percent >= 60)
//         {
//             printf("First class.");
//         }
//         else
//         {
//             if (percent >= 50)
//             {
//                 printf("Second class.");
//             }
//             else
//             {
//                 if (percent >= 40)
//                 {
//                     printf("Third Class.");
//                 }else{
//                     printf("Fail.");
//                 }
//             }
//         }
//     }
// }

/*
Ex :- WAP for the following conditions of electrical distribution company:-
        units 0 to 100      = 2.00 rs/unit
        for next 200 units  = 3.50 rs/unit
        for units >=200     = 5.00 rs/unit
        Find Total Amount.
*/

// #include <stdio.h>
// main()
// {
//     int unit;
//     float amount;
//     printf("Enter the Units = ");
//     scanf("%d", &unit);

//     if (unit <= 100)
//     {
//         amount = unit * 2.00;
//     }
//     else
//     {
//         if (unit <= 300)
//         {
//             amount = 200 + (unit - 100) * 3.50;
//         }
//         else
//         {
//             amount = 200 + 700 + (unit - 300) * 5.00;
//         }
//     }
//     printf("Total Amount is = %8.2f", amount);
// }
