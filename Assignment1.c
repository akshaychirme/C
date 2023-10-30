// ============    Uncomment the code (Ctrl+/) which you want to RUN ============

//***********************************   ASSIGNMENT 1   ********************************

//Pascal triangle - Pattern Programs :-

/*
1) WAP to print this pattern :-     1
                                    1   2
                                    1   2   3
                                    1   2   3   4
                                    1   2   3   4   5
*/

// #include<stdio.h>
// int main(){
//     int i;
//     for(i=1;i<=5;i++){
//       int j;
//       for(j=1;j<=i;j++){
//         printf("%d  ",j);
//       }
//       printf("\n");
//     }
// return 0;
// }

/*
2) WAP to print this pattern :-     1
                                    2   2
                                    3   3   3
                                    4   4   4   4
                                    5   5   5   5   5
*/

// #include<stdio.h>
// int main(){
//     int i;
//     for(i=1;i<=5;i++){
//       int j;
//       for(j=1;j<=i;j++){
//         printf("%d  ",i);
//       }
//       printf("\n");
//     }
//   return 0;
// }

/*
3) WAP to print this pattern :-     1
                                    2   3
                                    4   5   6
                                    7   8   9   10
                                    11  12  13  14  15
*/

// #include<stdio.h>
// int main(){
//     int i,num=1;
//     for(i=1;i<=5;i++){
//       int j;
//       for(j=1;j<=i;j++){
//         printf("%d\t",num);
//         num++;
//       }
//       printf("\n");
//     }
//   return 0;
// }

/*
4) WAP to print this pattern :-     A
                                    B   C
                                    D   E   F
                                    G   H   I   J
                                    K   L   M   N   O
*/

// #include<stdio.h>
// int main(){
//     int i;char box = 'A';
//     for(i=1;i<=5;i++){
//       int j;
//       for(j=1;j<=i;j++){
//         printf("%c\t",box);
//         box++;
//       }
//       printf("\n");
//     }
//   return 0;
// }

/*
5) WAP to print this pattern :-     5   5   5   5   5
                                    4   4   4   4
                                    3   3   3
                                    2   2
                                    1
*/

// #include<stdio.h>
// int main(){
//     int i;
//     for(i=5;i>=1;i--){
//       int j;
//       for(j=1; j<=i; j++){
//           printf("%d\t",i);
//       }
//       printf("\n");
//     }
//   return 0;
// }

/*
6) WAP to print this pattern :-     5   4   3   2   1
                                    5   4   3   2
                                    5   4   3
                                    5   4
                                    5
*/

// #include<stdio.h>
// int main(){
//     int i;
//     for(i=1;i<=5;i++){
//       int j;
//       for(j=5;j>=i;j--){
//         printf("%d\t",j);
//       }
//       printf("\n");
//     }
//   return 0;
// }

/*
7) WAP to print this pattern :-                     1
                                                1   2
                                            1   2   3
                                        1   2   3   4
                                    1   2   3   4   5
*/

// #include<stdio.h>
// int main(){
//     int i;
//     for(i=1;i<=5;i++){
//       int j;
//       for(j=1;j<=(5-i);j++){
//         printf("\t");
//       }
//       int k;
//       for(k=1;k<=i;k++){
//         printf("%d\t",k);
//       }
//       printf("\n");
//     }
//   return 0;
// }

/*
8) WAP to print this pattern :-     5
                                    5   4
                                    5   4   3
                                    5   4   3   2
                                    5   4   3   2   1
*/

// #include<stdio.h>
// int main(){
//     int i;
//     for(i=5;i>=1;i--){
//       int j;
//       for(j=5;j>=i;j--){
//         printf("%d\t",j);
//       }
//       printf("\n");
//     }
//   return 0;
// }

/*
9) WAP to print this pattern :-     1
                                    2   1
                                    3   2   1
                                    4   3   2   1
                                    5   4   3   2   1
*/

// #include<stdio.h>
// int main(){
//     int i;
//     for(i=1;i<=5;i++){
//       int j;
//       for(j=i;j>=1;j--){
//         printf("%d\t",j);
//       }
//       printf("\n");
//     }
//   return 0;
// }


/*
10) WAP to print this pattern :-    5
                                    4   5
                                    3   4   5
                                    2   3   4   5
                                    1   2   3   4   5
*/
//-----------------------------------------------------------------------------------------------------------
// #include<stdio.h>
// int main(){
//     int i;
//     for(i=5;i>=1;i--){
//       int j;
//       for(j=5;j>=i;j--){
//         printf("%d\t",j);
//       }
//       printf("\n");
//     }
//   return 0;
// }

/*
11) WAP to print this pattern :-    5   4   3   2   1
                                    4   3   2   1
                                    3   2   1
                                    2   1
                                    1
*/

// #include<stdio.h>
// int main(){
//     int i;
//     for(i=1;i<=5;i++){
//       int j;
//       for(j=(6-i);j>=1;j--){
//         printf("%d\t",j);
//       }
//       printf("\n");
//     }
//   return 0;
// }

/*
12) WAP to print this pattern :-            *
                                          *   *
                                        *   *   *
                                      *   *   *   *
                                    *   *   *   *   *
*/

// #include<stdio.h>
// int main(){
//     int i;
//     for(i=1;i<=5;i++){
//       int j;
//       for(j=1;j<=(5-i);j++){
//         printf("   ");
//       }
//       int k;
//       for(k=1;k<=i;k++){
//         printf("   *  ");
//       }
//       printf("\n");
//     }
//   return 0;
// }

/*
13) WAP to print this pattern :-    *   *   *   *   *
                                      *   *   *   *
                                        *   *   *
                                          *   *
                                            *                              
*/

// #include<stdio.h>
// int main(){
//   for(int i=5; i>=1; i--){
//     for(int j=i; j<5; j++){
//       printf("   ");
//     }
//     for(int k=1; k<=i; k++){
//         printf("   *  ");
//       }
//       printf("\n");
//   }
// }

/*
14) WAP to print this pattern :-            *
                                          *   *
                                        *   *   *
                                      *   *   *   *
                                    *   *   *   *   *
                                      *   *   *   *
                                        *   *   *
                                          *   *
                                            * 
*/

// #include<stdio.h>
// int main(){
//   for(int i=1; i<=9; i++){
//     if(i<=5){
//     for(int j=1; j<=(5-i); j++){
//       printf("   ");
//     }
//     for(int k=1; k<=i; k++){
//       printf("   *  ");
//     }
//     }else{
//     for(int m=1; m<=(i-5); m++){
//       printf("   ");
//     }
//     for(int n=1; n<=(10-i); n++){
//       printf("   *  ");
//     }}
//     printf("\n");
//   }
// }

/*
15) WAP to print this pattern :-                        1
                                                    1   2   1
                                                1   2   3   2   1
                                            1   2   3   4   3   2   1
                                        1   2   3   4   5   4   3   2   1
*/

// #include<stdio.h>
// int main(){
//   for(int i=1; i<=5; i++){
//     for(int j=1; j<=(5-i); j++){
//       printf("\t");
//     }
//     for(int k=1; k<=i; k++){
//       printf("%d\t",k);
//     }
//     for(int m=i; m>1; m--){
//       printf("%d\t",(m-1));
//     }
//     printf("\n");
//   }
// }

/*
16) WAP to print this pattern :-    *   *   *   *   *
                                        *   *   *   *
                                            *   *   *
                                                *   *
                                                    *
*/

// #include<stdio.h>
// int main(){
//   for(int i=5; i>=1; i--){
//     for(int j=i; j<5; j++){
//       printf("\t");
//     }
//     for(int k=1; k<=i; k++){
//       printf("*\t");
//     }
//     printf("\n");
//   }
// }

/*
17) WAP to print this pattern :-                        *
                                                    *   *
                                                *   *   *
                                            *   *   *   *
                                        *   *   *   *   *
                                            *   *   *   *
                                                *   *   *
                                                    *   *
                                                        *
*/

// #include<stdio.h>
// int main(){
//   for(int i=1; i<=9; i++){
//     if(i<6){
//     for(int j=1; j<=(5-i); j++){
//       printf("\t");
//     }
//     for(int k=1; k<=i; k++){
//       printf("*\t");
//     }
//     }
//     else{
//       for(int m=5; m<=(i-1); m++){
//         printf("\t");
//       }
//       for(int n=1; n<=(10-i); n++){
//         printf("*\t");
//       }
//     }
//     printf("\n");
//   }
// }

/*
18) WAP to print this pattern :-    *
                                    *   *
                                    *   *   *
                                    *   *   *   *
                                    *   *   *   *   *
                                    *   *   *   *
                                    *   *   *
                                    *   *
                                    *
*/

// #include<stdio.h>
// int main(){
//     for(int i=1; i<=9; i++){
//       if(i<6)
//       for(int j=1; j<=i; j++){
//           printf("*\t");
//       }else{
//         for(int k=1; k<=(10-i); k++){
//           printf("*\t");
//         }
//       }
//       printf("\n");
//     }
//   return 0;
// }

//--------------------------------------------------------------------------------------------
// 1) Ex:- WAP to print factors of a number.

// #include <stdio.h>
// int main()
// {
//   int num, count = 0;
//   printf("Enter the number = ");
//   scanf("%d", &num);
//   if (count == 1)
//   {
//     printf("The factors of %d are = 1 ", num);
//     for (int i = 2; i < num; i++)
//     {
//       if (num % i == 0)
//       {
//         printf(" %d ", i);
//         count = 1;
//       }
//     }
//     printf("and %d.", num);
//   }
//   else
//   {
//     printf("The number %d is a prime number so factors are = 1 and %d only.", num, num);
//   }
//   return 0;
// }

// 2) Ex:- WAP to print prime numbers between the given range.

//------------NOT WORKING-------------

// #include <stdio.h>
// int main()
// {
//   int num1, num2, count = 0, i, j;
//   printf("Enter the range from = ");
//   scanf("%d", &num1);
//   printf(" to = ");
//   scanf("%d", &num2);
//   printf("Prime numbers between %d to %d are = ", num1, num2);
//   for (i = num1; i <= num2; i++)
//   {
//     count = 0;
//     for (j = 1; j <= i; j++)
//     {
//       if ((i % j) == 0)
//       {
//         count++;
//       }
//     }
//     if (count <= 2)
//     {
//       if (i == 1)
//       {
//         continue;
//       }
//       printf("%d ", i);
//     }
//   }
//   return 0;
// }

// 3) Ex:- WAP to check the number is palindrom or not.

// #include<stdio.h>
// int main(){
//     int num, size, modulo, reverse=0;
//     printf("Enter the number = ");
//     scanf("%d", &num);
//     int ori = num;
//     while(num>0){
//         modulo=num%10;
//         reverse = reverse * 10 + modulo;
//         num = num/10;
//     }
//     if(ori == reverse){
//       printf("%d is a palindrome.",ori);
//     }else{
//       printf("%d is not a palindrome.", ori);
//     }
//   return 0;
// }


// 4) Ex:- WAP to evaluate the roots of the quadratic equation. The program request the user to print the value of a, b and c and output √1 and √2.

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a,b,c,root1,root2, sqrtt;
//     printf("Enter the values of a, b and c = ");
//     scanf("%d %d %d", &a,&b,&c);

//     sqrtt = sqrt((b*b)-4*a*c);

//     root1 = (-b + sqrtt)/2*a;
//     printf("Root 1 is = %d\n", root1);

//     root2 = (-b - sqrtt)/2*a;
//     printf("Root 2 is = %d", root2);

//   return 0;
// }


// 5) Ex:- WAP to compute and display the sum of all integers that are divisible by 6 but not divisible by 4 and lie between 0 and 100. The program should count and display the number of such values.

// #include<stdio.h>
// int main(){
//     int sum =0, count=0;
//     printf("Numbers which are divisible by 6 and not divisible by 4 are = ");
//     for(int i=2; i<=100; i++){
//       if((i%6 == 0) && (i%4 !=0)){
//         sum = sum + i;
//         printf("%d  ",i);
//         count++;
//       }
//     }
//     printf("\n");
//     printf("Total numbers are = %d\n",count);
//     printf("Sum of all numbers is = %d",sum);
//   return 0;
// }

// 6) Ex:- WAP that will read a positive integer and determine and print its binary equivalent.

// #include<stdio.h>
// int main(){
//     int num,remi,binary=0, box=1;
//     printf("Enter the number = ");
//     scanf("%d",&num);                         //7
//     int origi = num;
//     while(num!=0){
//       remi = num%2;                           //1 = 7 % 2       1 = 3 % 2         1 = 1 % 2
//       num = num/2;                            //3 = 7 / 2       1 = 3 / 2         0 = 1 / 2
//       binary = binary + remi * box;           //1 = 0 + 1 * 1   11 = 1 + 1 * 10   111 = 11 + 1 * 100
//       box = box * 10;                         //10 = 1 * 10     100 = 10 * 10     1000 = 100 * 10
//     }
//     printf("Binary of %d is = %d",origi,binary);
//   return 0;         
// }




