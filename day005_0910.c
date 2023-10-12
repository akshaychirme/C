/*
8) Special Symbols:-
    - It is a special \ (back slash) characters.

    • \b - Blank space      - make a single blank space
    • \n - New Line         - make new line
    • \t - Tab              - Tab space
    • \v - Vertical Tab     - put vertical spaces
    • \r - Carriage Return  - Cursor will shifted to the first character of that word.
    • \f - Form feed        - Cursor will shifted to the first character of the paragraph.
    
    Following are called as escape sequence:-
    • \? - Question Mark    - To print Question mark.
    • \\ - Back slash       - To print Back slash...
    • \' - Single Quote
    • \" - Double Quote


3) Basic Input / Output Operations:-

    Input program - scanf()
    Output program - printf()

    scanf("%d", &a);        --> %d = formated string        &a = Argument list

• List of format Specifiers:-
    %b      - Binary I/O
    %c      - Character
    %d      - Decimal Integer
    %e & %E - Real number
    %f      - Real number
    %g      - Real number
    %i      - Short Integer
    %o      - Octal integer
    %s      - String
    %u      - Unsigned Integer
    %x & %X - Hexadecimal Integer

• Character I/O:-

    1)getchar()
    2)getche()
    3)getch()
    4)putchar()

    1) getchar()
        -It is used to input a single character from keyboard.
*/

// Ex:-

// #include<stdio.h>
// main(){
//     int a;
//     a = getchar();      //Akshay
//     printf("%c", a);    //A
// }

/*
    2) getche()
        - Syntax and Defination is same as getchar() 
        - But working is diffrent, after input we don;t need to press Enter key.
        - It will automatically takes character as input.
        - Output will display to same line after input.


    3) getch()
        - Syntax and Defination is same as getchar()
        - After pressing character as input we have to press Enter key.
        - But character will not display as input value.
        - Directly output will sdisplay on output screen.
*/


// #include<stdio.h>
// main(){
//     char a;
//     a = getch();
//     printf("%c",a);
// }


//     4) putchar()
//         - It is used to display a single character to screen.


// #include<stdio.h>
// main(){
//     char a;
//     a = getch();
//     putchar(a);
// }

/*
♠ Formatted I/O :-
    1) scanf()
    2) printf()
        :- f stands for formatting.

    1) Input :-
        • scanf()
        - scanf("%3d", &a);
        - We can specify the numbers of digits to be input.
        - %3d means only 3 digits will get input.
        - If we have 2 scanf function first one have limit of 3 digits and second dose not have any limits then,
            if we input 5 digits from console then first scanf takes only 3 digits and remaining will taken by second scanf function.
*/

// #include<stdio.h>
// main(){
//     int a,b;                    //12345
//     scanf("%3d", &a);           //123
//     scanf("%d", &b);            //45
//     printf("%d -- %d",a,b);     //123 -- 45
// }

/*
        • fflush(stdin);
        - To remove data from buffer memory we use fflush(stdin) function.

.       (Display)
.        [ 123 ] <----- [ | | | ] <-----    [a=[123]]
.        [12345] -----> [ | |4|5] ----->    [b=[   ]]
.       (Keyboard)     (Buffer Memory)      (Program)

        • To skip specific input from user we use * between format specifier (%d).
        - In the following example we if we want to skip second input from user then we put * between second format specifier.
        - If 3 input from user is input is 11 22 33,
        - Then 'a' will store 11, and 'b' will store 33 after skipping 2nd input (22) from user.
        - Now 'c' will store some garbage value.
*/

// #include<stdio.h>
// main(){
//     int a,b,c;
//     printf("Enter 3 values = ");
//     scanf("%d%*d%d", &a,&b,&c);
//     printf("a=%d, b = %d, c=%d", a,b,c);
// }

/*
    2) Output :-
        1) For Integer ---> %wd ---> w = specify width
            - In following example 5 spaces are allowed in this variable.
            - It will start storing data from right side.
            - If we input more values then specify width then formatting will ignore and print whole value.
*/
// #include<stdio.h>
// main(){
//     int a,b;
//     a=12;
//     b=345;
//     printf("%5d\n%5d", a,b);
// }

/*
        2) For Float ---> %w.pf OR %w.pg OR %w.pe ---> w = width    p = no. of digits to be printed after decimal point (Pricision).
*/

// #include<stdio.h>
// main(){
//     float a = 12.345;
//     printf("\n%f", a);          //[1|2|.|3|4|5|0|0|0]
//     printf("\n%7.2f", a);       //[ | |1|2|.|3|5]
//     printf("\n%5.1f", a);       //[0|1|2|.|3]
//     printf("\n%10.3f", a);      //[ | | | |1|2|.|3|4|5]
// }

/*
        ♠ %-wd = Left Justify
        ♠ %wd  = Right Justify

        3) For characters   ---> %wc    ---> w = Width
*/

// #include<stdio.h>
// main(){
// char x='A';
// printf("\n%c", x);        //A
// printf("\n%3c", x);       //[ | |A]
// printf("\n%6c", x);       //[ | | | | |A]
// }

        //4) For String ---> %w.ps   ---> w = Width  P = no. of character to print
    
// #include<stdio.h>
// main(){
//     char a[] = "Akshay";
//     printf("\n%s", a);          //[A|k|s|h|a|y]
//     printf("\n%8.3s", a);       //[ | | | | |A|k|s]
//     printf("\n%-8.4s", a);      //[A|k|s|h| | | | ]
// }