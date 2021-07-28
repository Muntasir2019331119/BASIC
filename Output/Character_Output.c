/*
 putc(),putchar(),puts()


#-------------------------------putc()----------------------------------##
putc() function is C library function, and it's used to write a character to the file.
This function is used for writing a single character in a stream along with that 
it moves forward the indicator's position.The putc() function can be defined as a macro
 so the argument can be evaluated multiple times.


 The putc() return the character written. A return value of EOF indicates an error.

Syntax:
int putc( int c, FILE * stream );

example:

int main (void)
{
  FILE * fileName;
  char ch;
  fileName = fopen("anything.txt","wt");
  for (ch = 'D' ; ch <= 'S' ; ch++) {
    putc (ch , fileName);
    }
  fclose (fileName);
  return 0;
}

##---------------------------------putchar()-----------------------------------##

The putchar(int char) method in C is used to write a character, of "unsigned char" type, 
to stdout. This character is passed as the parameter to this method.

Syntax:

int putchar(int char)

Parameters: This method accepts a mandatory parameter char which is the character to be written to stdout.

Return Value: This function returns the character written on the stdout as an unsigned char. 
It also returns EOF when some error occurs.

Example:

#include <stdio.h>
  
int main()
{
  
    // Get the character to be written
    char ch = 'G';
  
    // Write the Character to stdout
    putchar(ch);
  
    return (0);
}
Output: G

or

#include <stdio.h>
  
int main()
{
  
    // Get the character to be written
    char ch = '-1';
  
    // Write the Character to stdout
    putchar(ch);
  
    return (0);
}
Output: 1//without sign

//char ch='254' then output =4 ...that means it takes the rightmost character


//returns 255 on end of file(gives something output till 254)
// char c = 255 ; // c -> -1 ; // EOF = -1


*/





