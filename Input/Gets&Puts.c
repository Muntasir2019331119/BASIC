#include<stdio.h.>
#include<string.h>
int main()
{
//------------------------------------gets--------------------------------------
//The gets() function enables the user to enter some characters followed by the enter key. 
// All the characters entered by the user get stored in a character array. 
// The null character is added to the array to make it a string.
// The gets() allows the user to enter the space-separated strings. 
// It returns the string entered by the user.
// char line[30];
// gets(line);
//but gets have some problem:
// The gets() function is risky to use since it doesn't perform any array bound checking and keep reading the characters
//  until the new line (enter) is encountered.
//  It suffers from buffer overflow, which can be avoided by using fgets(). 
//  The fgets() makes sure that not more than the maximum limit of characters are read.
//fgets(nahid,10,stdin);

//	for more:see Line_input.c
//-----------------------------------puts---------------------------------------
//The puts() function is used to print the string on the console which is previously read by using gets() or scanf() function.
 // The puts() function returns an integer value representing the number of characters being printed on the console. 
 // Since, it prints an additional newline character with the string, which moves the cursor to the new line on the console,
 //  the integer value returned by puts() will always be equal to the number of characters present in the string plus 1.


//puts automatically appends a newline character to the output.
	//three way to use puts:
	//1)with the name of the character array   : puts(str);
	 // 2)with the name of the pointer type char*  : puts(hero);//hero was declared previously using char * hero;
  //    3)with the string literal   :puts("Bangladesh");
char line[10];
char c='A';
putchar(c);//A
gets(line);//muntasir mumun nahid
puts(line);
putchar(c);//u (11th char)
int res=puts(line);
printf("%d\n",res);

//-----------------------------------getch()-------------------------------------------------
// getch() is a nonstandard function and is present in conio.h header file which is mostly used by MS-DOS compilers like Turbo C. It is not part of the C standard library or ISO C, nor is it defined by POSIX.
// getch()  reads a single character from the keyboard. But it does not use any buffer, so the entered character is immediately returned without waiting for the enter key.

// Important Points regarding getch() method:

// getch() method pauses the Output Console untill a key is pressed.
// It does not use any buffer to store the input character.
// The entered character is immediately returned without waiting for the enter key.
// The entered character does not show up on the console.
// The getch() method can be used to accept hidden inputs like password, ATM pin numbers, etc

//for more:
//https://www.geeksforgeeks.org/getch-function-in-c-with-examples/#:~:text=getch()%20method%20pauses%20the,show%20up%20on%20the%20console.




//-------------------------------------getchar()/getc()----------------------
//The C library function int getchar(void) gets a character (an unsigned char) from stdin. 
//This is equivalent to getc with stdin as its argument.
//char c=getchar(c);
//getc()
//The C library function int getc(FILE *stream) gets the next character (an unsigned char) 
//from the specified stream and advances the position indicator for the stream.
//char c=getc(stdin);
//putc(c,stdout);

//---------------------------------putchar()-----------------------------------
// /The putchar(int char) method in C is used to write a character, of unsigned char type, to stdout.
char c=getchar();
putchar(c);
//doesn't appends newline automatically










}
