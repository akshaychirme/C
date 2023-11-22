// ============    Uncomment the code (Ctrl+/) which you want to RUN ============

/*
*******************		STRINGS		*********************
	- Set of characters (Array of character)
	- Represented by using -> " " (double quote)

♠ Declaration :-
	char variable[size];		index --> [0]	[1]		[2]		[3]		[4]		[5]		[6]		[7]
	char name[8];		-->	 elements --> 'A'	'K'		'S'		'H'		'A'		'Y'		'\0'	
	
	'\0' --> This is Null Character. Which shows the termination of string.
♠ Initialization :-
	char name[8] = {'A','K','S','H','A','Y','\0'};
	OR
	char name[8] = "AKSHAY";
	[ ] --> We can keep this empty for flexible size. (see below ex.)
Note:- In scanf() of string no need to use & (address).
*/

//WAP to input name, email and print them.

// #include<stdio.h>
// int main(){
// 	char name[] = "Akshay";
// 	char email[] = "akshayboss@gmail.com";
// 	printf("Name = %s\n", name);
// 	printf("Email = %s", email);
// 	return 0;
// }

//WAP to print string in reverse order.

// #include<stdio.h>
// #include<string.h>
// int main(){
// 	int i;
// 	char name[] = {"Jethalal"};
// 	for(i=strlen(name)-1;i>=0;i--){
// 		printf("%c",name[i]);
// 	}
// 	return 0;
// }

//WAP to input string from user and print it.

// #include<stdio.h>
// #include<string.h>
// int main(){
// 	int i;
// 	char city[20];
// 	printf("Enter the name of the city = ");
// 	scanf("%s",city);
// 	printf("Your city is = %s", city);
// 	return 0;
// }

/*
♠ Reading of string gets terminated when 'black space' or 'enter key' comes.
♠ It is used to input only single word.
♠ What if we want to input whole one line including spaces ->
	- We use gets() function to input line including 'spaces' until we press 'enter key'.
♠ Instade of scanf() we use gets();
*/

//WAP to input a line of text and print it.

// #include<stdio.h>
// int main(){
// 	 int i=0;
// 	 char ch;
// 	 char line[50];
// 	 printf("Enter the line = ");
// 	do{
// 		ch = getchar();
// 		line[i] = ch;
// 		i++;
// 	} while (ch != '\n');
// 	line[i-1] = '\0';
// 	printf("Line is = %s", line);
// 	return 0;
// }

// WAP to count the words from sentence . Take sentence from user.

// #include<stdio.h>
// #include<string.h>
// int main(){
// 	 int i=0,count=1;
// 	 char ch;
// 	 char sent[50];
// 	 printf("Enter the line = ");
// 	do{
// 		ch = getchar();
// 		sent[i] = ch;
// 		i++;
// 	} while (ch != '\n');
// 	sent[i-1] = '\0';
// 	printf("Line is = %s\n", sent);

// 	for(i=0; i<strlen(sent); i++){
// 		if(sent[i] == ' ' && sent[i+1] != '\0'){
// 			count++;
// 		}
// 	}
// 	printf("%d",count);
// 	return 0;
// }

//WAP to calculate total numbers of characters in sentence without counting spaces.

// #include<stdio.h>
// #include<string.h>
// int main(){
// 	int i=0, count=0;
// 	char ch;
// 	char name[50];
// 	printf("Enter the sentence = ");
// 	do{
// 		ch = getchar();
// 		name[i] = ch;
// 		i++;
// 	}while(ch != '\n');
// 	name[i-1] = '\0';
// 	printf("%s\n", name);
// 	for(i=0;i<strlen(name); i++){
// 		if(name[i] != ' '){
// 			count++;
// 		}
// 	}
// 	printf("%d",count);
// 	return 0;
// }
