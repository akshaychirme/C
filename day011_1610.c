// ============    Uncomment the code which you want to RUN ============

// Ex:- WAP to accept a number & check wheather the number is armstrong number or not.
// armstrong number = 153 --> (1^3) + (5^3) + (3^3) = 153

// #include <stdio.h>
// main()
// {
//     int num, oriNum, OneDigit, cube = 0;
//     printf("Enter the number = ");
//     scanf("%d", &num);
//     oriNum = num;
//     do
//     {
//         OneDigit = num % 10; // 153/10 = 3
//         cube = cube + (OneDigit * OneDigit * OneDigit);
//         num = num / 10;
//     } while (num != 0);
//     printf("The sum of each digits cube is = %d\n", cube);
//     if (oriNum == cube)         //If there is a single statement in if-else then no need to give '{ }'.
//         printf("So the number is Armstrang number.");
//     else
//         printf("So the number is NOT a Armstarng number.");
// }

// ********** Nesting of Loops ***************
//      - One loop inside another loop is called as neasting of loops.
//      - Nesting of loops can be used to work with tables (rows and columns)

// Nesting For Loop  -->

// #include <stdio.h>
// main()
// {
//     printf("Ala wara gela wara udun geli rekshya...\n\n yeeeee......\n\n");  //just doing timepass
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             printf("Akshayaaa  ");

//         }printf("\n");
//     }
// }

// Nesting while Loop  -->

// #include <stdio.h>
// main()
// {
//     int i = 1;
//     while (i <= 5)
//     {
//         int j = 1;
//         while (j <= 5)
//         {
//             printf("Akshay  ");
//             j++;
//         }
//         i++;
//         printf("\n");
//     }
// }

// Nesting do-while Loop  -->

// #include <stdio.h>
// main()
// {
//     int i = 1;
//     do{
//         int j = 1;
//         do{
//             printf("Akshay  ");
//             j++;
//         } while (j <= 5);
//         printf("\n");
//         i++;
//     } while (i <= 5);
// }

//Ex:- WAP to print 1 to 5 in 3 rows.

// #include<stdio.h>
// main(){
//     int i,j;
//     for(i=1;i<=3;i++){
//         for(j=1;j<=5;j++){
//             printf("%d  ",j);
//         }
//         printf("\n");
//     }
// }


//Ex:- WAP to print 11111   22222   33333.

// #include<stdio.h>
// main(){
//     int i,j;
//     for(i=1;i<=3;i++){
//         for(j=1;j<=5;j++){
//             printf("%d  ", i);
//         }
//         printf("\n");
//     }
// }


//Ex:- WAP to print a multiplication table.

//  #include<stdio.h>
//  main(){
//     int i, num1,num2,multi;
//     printf("Enter the two numbers range of which you want multiplication table = ");
//     scanf("%d %d",&num1,&num2);

//     for(i=1;i<=10;i++){
//         int j;
//         for(j=num1; j<=num2;j++){
//             multi = j*i;
//             printf("%d X %d = %d\t",j,i,multi);
//         }
//     printf("\n");
//     }
//  }

/*
Ex:- WAP to print = *
                    **
                    ***
                    ****
                    *****
*/

// #include<stdio.h>
// main(){
//     int i;
//     for(i=1;i<=5;i++){
//         int j;
//         for(j=1;j<=i;j++){
//             printf("*\t");
//         }
//         printf("\n");
//     }
// }

/*
Ex:-    *****
        ****
        ***
        **
        *
*/

// #include<stdio.h>
// main(){
//     int i;
//     for(i=1;i<=5;i++){
//         int j;
//         for(j=1; j<=(6-i);j++){         //j=5;j>=i;j--
//             printf("*   ");
//         }
//         printf("\n");
//     }
// }

/*
Ex:-            *
               **
              ***
             ****
            *****
*/

// #include<stdio.h>
// main(){
//     int i;
//     for(i=1;i<=5;i++){          //row count 1 to 5
//         int j;
//         for(j=1;j<=5-i;j++){    //in 1st row from 1st column to 4th column print black space.
//             printf("    ");
//         }
//         int k;
//         for(k=1;k<=i;k++){      //print * as many time as row count
//             printf("*   ");
//         }
//         printf("\n");
//     }
// }

