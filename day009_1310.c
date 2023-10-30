// ============    Uncomment the code (Ctrl+/) which you want to RUN ============

/*
2) do-while loop
    initialization;
    do
    {
        task;
        increment / decrement;
    }
    while(condition);
*/

//Ex ;- WAP to print from 1 to 5:-

// #include<stdio.h>
// main(){
//     int i=0;
//     do{
//         printf("%d\n",i);
//         i++;
//     }while(i<=5);
// }

//  3) for loop :-
//      for(initilization; condition; increment/decrement)
//          {task}

//Ex:- WAP to print from 1 to 5 :-

// #include<stdio.h>
// main(){
//     int i;
//     for(i=1; i<=5; i++){
//         printf("%d\n", i);
//     }
// }

//Ex:- WAP to print even number from 1 to 20 :-

// #include<stdio.h>
// main(){
//     int i;
//     for(i=2; i<=20; i+=2){
//         printf("%d\n", i);
//     }
// }


//Ex:- WAP to print odd number from 1 to 21 :-


// #include<stdio.h>
// main(){
//     int i;
//      for(i=0; i<=21; i++){
//         if(i%2 != 0){
//             printf("%d \t",i);
//         }
//      }
// }

//Ex:- WAP to print 1, 4, 9, 16, 25,....100 :-

// #include<stdio.h>
// main(){
//     int i;
//     for(i=1; i<=10; i++){
//         printf("%d\t", i*i);
//     }
// }


//Ex :- WAP to print 1+2+3+4...10 = :=

// #include<stdio.h>
// main(){
//     int i, sum=0;
//     for(i=1; i<=10; i++){
//         sum+=i;      //sum = sum + i
//     }
//     printf("%d",sum);
// }

//Ex:- WAP to print fibinacci series upto to term:-

// #include<stdio.h>
// main(){
//     int i, a=0, b=1, c=0;
//     printf("%d\t%d\t", a,b);
//     for(i=2; i<10; i++){
//         c = a + b;
//         printf("%d\t", c);
//         a=b;
//         b=c;
//     }
// }

//Ex :- WAP to accept a number & print the multiplication table of that number.

// #include<stdio.h>
// main(){
//     int i, num;
//     printf("Enter the number = ");
//     scanf("%d", &num );

//     for(i=1; i<=10; i++){
//         printf("%d\n", num*i);
//     }
// }


// Ex :- WAP tp input a range of number and print all the even & odd numbers between the range.

// #include<stdio.h>
// main(){
//     int a, b, i;
//     printf("Enter the starting number of the range = ");
//     scanf("%d", &a);
//     printf("Enter the ending number of the range = ");
//     scanf("%d", &b);
//     printf("Even Numbers :- ");         //just a message for even numbers
//     for(i=a; i<=b; i++){
//         if(i%2 == 0){
//             printf("%d\t", i);
//         }
//     }
//     printf("\n");       //for printing odd numbers on next line
//     printf("Odd numbers :- ");
//     for(i=a; i<=b; i++){        //using 2 time for loops because I want to print 'even and odd numbers' message.
//         if(i%2 != 0){
//             printf("%d\t", i);
//         }
//     }
// }


//Ex :- WAP to print sum of all even numbers between 1 to 50 :

// #include<stdio.h>
// main(){
//     int i, sum=0;
//     for(i=1; i<=50; i++){
//         if(i%2==0){
//             sum +=i;
//        }
//     }
//     printf("Sum of all even numbers between 1 to 50 is = %d", sum);
// }

//Ex:- WAP to count number of even numbers and odd numbers between 1 to 100 :-

// #include<stdio.h>
// main(){
//     int i, count1 = 0, count2 = 0;
//     for(i=1; i<=100; i++){
//         if(i%2 == 0){
//             count1++;
//         }else{
//             count2++;
//         }
//     }
//     printf("Tatal number of Even numbers between 1 to 100 is = %d\n", count1);
//     printf("Tatal number of Odd numbers between 1 to 100 is = %d", count2);
// }


//Ex :- WAP to print from A to Z:-

// #include<stdio.h>
// main(){
//     int i;
//     char box;
//     for(i=65; i<=89; i++){       //from Z to A -> (i=89;i>=65;i--)
//         box = (char) i;
//         printf("%c ", box);
//     }
// }

//From a to z;

// #include<stdio.h>
// main(){
//     int i;
//     char box;
//     for(i=97;i<=122; i++){
//         box = (char) i;
//         printf("%c ", box);
//     }
// }

//From 20 18 16 14....2

// #include<stdio.h>
// main(){
//     int i;
//     for(i=20; i>=2; i=i-2){          //Incre/ Decre should be a complete statement (i-2 NOT allow)(i=i-2 Allow)
//         printf("%d ", i);
//     }
// }
