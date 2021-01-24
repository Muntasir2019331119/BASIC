#include<stdio.h>
//The format specifier is used during input and output.
//It is a way to tell the compiler what type of data is in a variable during taking input using scanf() or printing using printf().
//Some examples are %c, %d, %f, etc.
//Format specifiers have no meaning in a string unless the string is passed to variadic function .
//Variadic Function searches for % in the string and on the basis of the characters after % it can understand what type of data it needs to work with .

//printf(char *format, arg1, arg2, …)
/*This function prints the character on standard output and returns the number of character printed the format is a string starting with % and ends with conversion character (like c, i, f, d, etc.).
Between both, there can be elements governing the printing format. Below is its description

1)A minus(-) sign tells left alignment.
2)A number after % specifies the minimum field width to be printed if the characters are less than the size of width the remaining space is filled with space and if it is greater than it printed as it is without truncation.
3)A period( . ) symbol separate field width with the precision.
Precision tells the maximum number of digits in integer, characters in string and number of digits after decimal part in floating value.
*/

//%[flag][width][.precision][length]specifier;
/*
// Specifiers :
// c -> Character
// i -> Integer
// u -> Unsigned
// d -> Decimal
// f -> Floating (Lowercase)
// F -> FLoating (Uppercase)
// e -> Scientific Notation (Lowercase)
// E -> Scientific Notation (Uppercase)
// g -> Shortest representation between %e and %f
// G -> Shortest representation between %E and %F
// o -> Octal
// x -> Hexadecimal (Lowercase)
// X -> Hexadecimal (Uppercase)
// p -> Pointer Address
// s -> Array of characters
*/


//Format specification can have maximum 3 characters

//l,L,h are prefix

//i , d , f , c , o , x , e , g , u , s are postfix
int main()
{
   //Floating point format specifier:
   float a=12.67,b=1345.89,c=1345.89e3;
   printf("In f=%f,%f\n",a,b);//12.670000.1345.890000
   printf("In e= %e,%e\n",a,b);//1.267000e+001,1.345890e+003
   printf("%g\n",c);
   printf("%G\n",c);

    char str[] = "MuntasirNahid";
    printf("%20s\n", str);//minimun 20 word print..kom holey leading space
    printf("%-20s\n", str);//left allignment..min 20 ..na thakle space ..
    printf("%20.5s\n", str);//5 precision
    printf("%-20.5s\n", str);
    /*
           MuntasirNahid
MuntasirNahid
               Munta
Munta
    */

}

