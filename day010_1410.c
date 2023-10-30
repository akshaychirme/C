// ============    Uncomment the code (Ctrl+/) which you want to RUN ============

//Ex :- WAP to print factorial of 5 ;-

// #include<stdio.h>
// main(){
//     int i,box=1;
//     for(i=1; i<=5; i++){
//         box = box * i;
//     }
//     printf("%d",box);
// }


//Ex :- WAP to print a^b:=

// #include<stdio.h>
// main(){
//     int box=1,a,b,i;
//     printf("Enter Number and Power = ");
//     scanf("%d %d", &a,&b);
//     for(i=1;i<=b; i++){
//         box = box * a;
//     }
//     printf("%d",box);
// }


//Ex :- WAP to accept an integer number & print in reverse order :-

// #include<stdio.h>
// main(){
//     int i, num, box=0; 
//     printf("Enter the interger number = ");
//     scanf("%d", &num);
//     do{
//         box=num%10;
//         printf("%d",box);
//         num=num/10;
//     }while(num!=0);
// }


//Ex:- WAP to accept an integer number & print the sum of all it's digits,

// #include<stdio.h>
// main(){
//     int sum=0,num,box;
//     printf("Enter the number = ");
//     scanf("%d", &num);
//     do{
//         box = num%10;
//         sum = sum +box;
//         num = num/10;
//     }while(num!=0);
//     printf("Sum of all digits of the number is = %d", sum);
// }


//Ex :- WAP to accept a number & check whether the number is prime or not.

// #include<stdio.h>
// main(){
//     int i,num,flag;
//     printf("Enter the number = ");
//     scanf("%d",&num);
//     for(i=2; i<num; i++){
//         if((num%i) == 0){
//             flag=1;
//             break;
//         }
//     }
//     if(flag==0){
//         printf("Not Prime.");
//     }else{
//         printf("Prime.");
//     }
// }

//--------------this code is not working if you have solution please msg me. Thank you.-------------
