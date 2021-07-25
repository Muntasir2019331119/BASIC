/*
There are certain reserved words, called keywords, that have standard, predefined meanings in C. These
keywords can be used only for their intended purpose; 
they cannot be used as programmer-defined identifiers.


There are a total of 44 keywords in C (C89 – 32, C99 – 5, C11 – 7): 

auto        extern        short        while
break       float         signed        _Alignas
case        for           sizeof        _Alignof
char        goto          static        _Atomic
const       if            struct        _Bool
continue    inline        switch        _Complex
default     int           typedef       _Generic
do          long          union         _Imaginary
double      register      unsigned      _Noreturn
else        restrict      void          _Static_assert
enum        return        volatile      _Thread_local



Some compilers may also include some or all of the following keywords.
ada  	far 	near
asm 	fortran 	pascal
entry	 huge



Let’s implement the keywords which we have discussed above. Take a look at the following code which is a working example to demonstrate these keywords:  


#include <stdio.h>
 
// declaring and initializing an extern variable
extern int x = 9;
 
// declaring and initializing a global variable
// simply int z; would have initialized z with
// the default value of a global variable which is 0
int z=10;
 
// using typedef to give a short name to long long int
// very convenient to use now due to the short name
typedef long long int LL;
 
// function which prints square of a no. and which has void as its
// return data type
void calSquare(int arg)
{
    printf("The square of %d is %d\n",arg,arg*arg);
}
 
// Here void means function main takes no parameters
int main(void)
{
    // declaring a constant variable, its value cannot be modified
    const int a = 32;
 
    // declaring a  char variable
    char b = 'G';
 
    // telling the compiler that the variable z is an extern variable
    // and has been defined elsewhere (above the main function)
    extern int z;
 
    LL c = 1000000;
 
    printf("Hello World!\n");
 
    // printing the above variables
    printf("This is the value of the constant variable 'a': %d\n",a);
    printf("'b' is a char variable. Its value is %c\n",b);
    printf("'c' is a long long int variable. Its value is %lld\n",c);
    printf("These are the values of the extern variables 'x' and 'z'"
    " respectively: %d and %d\n",x,z);
 
    // value of extern variable x modified
    x=2;
 
    // value of extern variable z modified
    z=5;
 
    // printing the modified values of extern variables 'x' and 'z'
    printf("These are the modified values of the extern variables"
    " 'x' and 'z' respectively: %d and %d\n",x,z);
 
    // using a static variable
    printf("The value of static variable 'y' is NOT initialized to 5 after the "
            "first iteration! See for yourself :)\n");
 
    while (x > 0)
    {
        static int y = 5;
        y++;
        // printing value at each iteration
        printf("The value of y is %d\n",y);
        x--;
    }
 
    // print square of 5
    calSquare(5);
 
    printf("Bye! See you soon. :)\n");
 
    return 0;
}
Output: 

Hello World
This is the value of the constant variable 'a': 32
'b' is a char variable. Its value is G
'c' is a long long int variable. Its value is 1000000
These are the values of the extern variables 'x' and 'z' respectively: 9 and 10
These are the modified values of the extern variables 'x' and 'z' respectively: 2 and 5
The value of static variable 'y' is NOT initialized to 5 after the first iteration! See for yourself :)
The value of y is 6
The value of y is 7
The square of 5 is 25
Bye! See you soon. :)




*/
