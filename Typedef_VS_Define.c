typedef: The typedef is used to give data type a new name. For example,


// C program to demonstrate typedef
#include <stdio.h>
  
// After this line BYTE can be used
// in place of unsigned char
typedef unsigned char BYTE;
  
int main()
{
    BYTE b1, b2;
    b1 = 'c';
    printf("%c ", b1);
    return 0;
}
Output:

c



#define in C is a directive which is used to #define alias.


// C program to demonstrate #define
#include <stdio.h>
  
// After this line BD is replaced by
// "Bangladesh"
#define BD "Bangladesh"
  
int main()
{
    printf("%s ", BD);
    return 0;
}
Output:

Bangladesh


//##------------------------Difference between typedef and #define:-------------------##




1)typedef is limited to giving symbolic names to types only, whereas #define can be used to define an alias for values as well, e.g., you can define 1 as ONE, 3.14 as PI, etc.
2)typedef interpretation is performed by the compiler where #define statements are performed by preprocessor.
3)#define should not be terminated with a semicolon, but typedef should be terminated with semicolon.
4)#define will just copy-paste the definition values at the point of use, while typedef is the actual definition of a new type.
5)typedef follows the scope rule which means if a new type is defined in a scope (inside a function), then the new type name will only be visible till the scope is there. In case of #define, when preprocessor encounters #define, it replaces all the occurrences, after that (No scope rule is followed).