// ============    Uncomment the code (Ctrl+/) which you want to RUN ============

/*
♠ Initialization of Array :-

data_type	array_name[max_size] = {array_elements};
	int			roll_no[5]		 = {10, 11, 12, 13, 14};

float array :- float height[4] = {10.2, 23.4 ,83.2, 84.6};

Points to be remember :-> • If we don't write anything in [ ], then it will automatically create size of an array 
							on the basis of how many values we insert in it.
						  • But it is must to give size of an array at the time of declaration.
						  • That value should be constant. (const int size=10;)
						  • we can use #define also.
*/

//Ex:- WAP to insert in array 10, 20, 30, 40 and print them.

// #include<stdio.h>
// int main(){
// 	int i;
// 	int num[] = {10, 20, 30, 40};
// 	int size = sizeof(num)/sizeof(num[0]);		//we dont have size so calculate it.
// 	printf("Array elements are = ");
// 	for(i=0; i<size; i++){
// 		printf("%d ", num[i]);
// 	}
// 	return 0;
// }

//Ex:- WAP to print array elements in reverse order.

// #include<stdio.h>
// int main(){
// 	int i;
// 	int num[] = {11,22,33,44,55,66};
// 	int size = sizeof(num)/sizeof(num[0]);
// 	printf("Array elements are = ");
// 	for(i=0; i<size; i++){				//Printing in normal order.
// 		printf("%d ", num[i]);
// 	}
// 	printf("\n");						// just for line break.
// 	printf("Array elements in reverse order = ");
// 	for(i=size-1; i>0; i--){			// printing in reverse order.
// 		printf("%d ", num[i]);
// 	}
// 	return 0;
// }

//Ex:- WAP to insert elements of an array from user and print the largest elements in an array.

// #include<stdio.h>
// int main()
// {
// 	int i, size, box=0;
// 	printf("Enter the size of an array = ");
// 	scanf("%d", &size);
// 	int a[size];
// 	printf("Enter the numbers = ");
// 	for(i=0; i<size; i++)
// 	{
// 		scanf("%d", &a[i]);
// 	}
// 	printf("The Maximum element in an array is = ");
// 	for(i=0; i<size; i++)
// 	{
// 		if(a[i]>box)
// 		{
// 			box = a[i];
// 		}
// 	}
// 	printf("%d",box);
// 	return 0;
// }

//WAP to search an element in an array.

// #include <stdio.h>
// int main()
// {
// 	int size, box, i, flag =0, index;
// 	printf("Enter the size of an array = ");
// 	scanf("%d", &size);
// 	int a[size];
// 	printf("Enter elements of an array = ");
// 	for(i=0; i<size; i++){
// 		scanf("%d", &a[i]);
// 	}
// 	printf("Enter the number you want to search = ");
// 	scanf("%d", &box);
// 	for(i=0; i<size; i++){
// 		if(box == a[i]){
// 			flag = 1;
// 			index = i;
// 		}
// 	}
// 	printf("Element %d found at index = %d.",box, index);
// 	return 0;
// }

//WAP to print even numbers from an array, element inserted from user.

// #include<stdio.h>
// int main(){
// 	int i, size;
// 	printf("Enter the size of an array = ");
// 	scanf("%d", &size);
// 	int a[size];
// 	printf("Enter the elemnts of an array = ");
// 	for(i=0; i<size; i++)
// 	{
// 		scanf("%d", &a[i]);
// 	}
// 	printf("Even numbers form an array are = ");
// 	for(i=0; i<size; i++){
// 		if(a[i]%2 == 0)
// 		{
// 			printf("%d\t", a[i]);
// 		}
// 	}
// 	return 0;
// }
