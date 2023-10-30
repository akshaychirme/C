// ============    Uncomment the code (Ctrl+/) which you want to RUN ============

/*
♠ Jump Statement:-
	- Jump Statement are use to jump program control from one point to another point.
		• break;
		• continue;
		• goto;

1) break;
	- To come out of the block.
	- for(...){
		if(condition){
			break;			--> when the condition is true the loop breaks.
		}
	}
*/

//Ex:- WAP to use of break; statement after 3 in loop.

// #include<stdio.h>
// int main(){
// 		int i;
// 		for(i=1; i<=10; i++){
// 			if(i == 4){		//we want to break loop after 3 so taking i == 4.
// 				break;
// 			}
// 			printf("%d ", i);
// 		}
// 	return 0;
// }


//Ex:- WAP to print sum of given numbers.

// #include<stdio.h>
// int main(){
// 	int i,num,sum=0;
// 	printf("****** Enter the numbers and enter 000 to stop. **********\n\n");
// 	for(i=1; i<=1000; i++){
// 		printf("Enter the number = ");
// 		scanf("%d",&num);
// 		if(num == 000){
// 			break;
// 		}
// 		sum = sum + num;
// 	}
// 	printf("Total sum of all numbers is = %d", sum);
// 	return 0;
// }

/*
-------------------- TO MAKE LOOP TO BE EXICUTE INFINITE TIME ----------------

1) For loop :-
	for(;;){		--> just give two semicolon and keep values empty. 
		.....
	};

2) while loop
	while(1){		--> give condition 1 meanse it will be always true.
		.....
	};

3) do-while loop
	do{
		.....
	}while(1);		--> give condition 1 meanse it will be always true.

*/

// We can do this also in loop:-

// #include<stdio.h>
// int main(){
// 	int i,j;
// 	for(i=1,j=1; i<=5; i++,j++){
// 		printf("%d %d ", i,j);
// 	}
// 	return 0;
// }

// #include <stdio.h>
// int main()
// {
// 	int i;
// 	for (i = 1;; i++)
// 	{
// 		if (i <= 3)
// 		{
// 			printf("%d ", i);
// 		}
// 		else
// 		{
// 			break;
// 		}
// 	}
// 	return 0;
// }

/*
2) continue;
	- To continue the loop.
	- for(....){
		if(condition){		--> If condition is true then the loop will continue.And skip the following program.
			continue;
		}
		....
		....		-->This program will skip when condition is true.
	}
*/


//Ex:- WAP to print only even numbers from given num.

// #include<stdio.h>
// int main(){
// 	int i,num;
// 	printf("Enter the numbers and enter 000 to stop.\n");
// 	while(1){
// 		printf("Enter the number = ");
// 		scanf("%d",&num);
// 		if(num == 000){
// 			break;
// 		}
// 		if(num%2 != 0){
// 			continue;
// 		}
// 		printf("%d is even number.\n", num);
// 	}
// 	return 0;
// }



/*
3) goto;
	- You can move from one point to another point in a program either in forward direction or in backward direction.
	- 1) Forward Jump :-
		...
		...
		if(condition)
		{
			goto box;		--> if this condition is true then goto will move cursor to box: section.
		}
		...					--> and this will skip.
		...
		box:
		...
		...
	
	- 2) Backward Jump :-
		box:
		...
		...
		if(condition)
		{
			goto box;		--> this will jump to box: which is before if.
		}
		...
		...
*/

//Ex :- WAP to print 1 to 5.

// #include<stdio.h>
// int main(){
// 	int i=1;
// 	box:
// 	printf("%d\t", i);
// 	i++;
// 	if(i<=5){
// 		goto box;
// 	}
// 	return 0;
// }

/*
4) exit()
	- To terminate the program.
	- for(...)
	{
		...
		...
		if(condition)
		{
			exit(0);		--> zero indicated successfully termination of program.
		}
		...
		...
	}

♠ Using Nested Loop :-
1)	for(...)
	{
		for(...){
			...
			...
			if(condition)
			{
				break;		-->goto box;
			}
			...
			...
		}
		...
		...
	}						--> box:

2) for(...)
{
	for(...)				--> box:
	{
		...
		...
		if(condition)
		{
			continue;s
		}
		...
		...					--> goto box;
	}
	...
	...
}


==============================	ARRAY	===============================
	- Array is a homogeneous(same type) set of data.
	- Collection of same type of data.
		- set of roll numbers.
		- set of salary.
		- collection of names.

♠ Declaration of array :-
	data_type	array_name	[maximum_size];
		int		  roll_no		[10];
	• [ ] --> this is known as sunscript operation.
*/

//Ex:- WAP to print array.

// #include<stdio.h>
// int main(){
// 	int a[5];
// 	int i;
// 	a[0] = 11;
// 	a[1] = 12;
// 	a[2] = 13;
// 	a[3] = 14;
// 	a[4] = 15;
// 	for(i=0; i<5; i++){
// 		printf("%d  ", a[i]);
// 	}
// }

//Ex:- WAP to take array element form user and print.

// #include <stdio.h>
// int main()
// {
// 	int i, j;
// 	int a[5];
// 	printf("Enter 5 numbers = ");
// 	for (i = 0; i < 5; i++)
// 	{
// 		scanf("%d", &a[i]);
// 	}
// 	printf("Array elements are = ");
// 	for (j = 0; j < 5; j++)
// 	{
// 		printf("%d ", a[j]);
// 	}
// 	return 0;
// }

