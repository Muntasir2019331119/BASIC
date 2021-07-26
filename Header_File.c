/*
In C language, header files contain the set of predefined standard library functions.
The “#include” preprocessing directive is used to include the header files with “.h” extension in the program.

There are of 2 types of header file: 
 

1)Pre-existing header files: Files which are already available in C/C++ compiler we just need to import them.

2)User-defined header files: These files are defined by the user and can be imported using “#include”.


##-----------------------Syntax:----------------------------------------##

#include <filename.h>
or
#include "filename.h"

##----------------------------------------------------------------------##


##--------------------Creating own header file---------------------------##

int sumoftwonumber(int a,int b)
{
	return(a+b);
}

then save this code in .h extension...like sum.h

#include"iostream"
#include"sum.h"
using namespace std;
int main()
{
	int x=10,y=20;
	cout<<"sum = "<<sumoftwonumber(x,y)<<endl;
}
output: sum=30

##-----------------------------------------------------------------------##

##----------------Multiple Header file------------------------------------##

Sometimes it’s essential to include several diverse header files based on the requirements of the program. For this, multiple conditionals are used.

Syntax: 

#if SYSTEM_ONE
        #include "system1.h"
#elif SYSTEM_TWO
        #include "system2.h"
#elif SYSTEM_THREE
   ....
#endif

##--------------------------------------------------------------------------##



Here is the table that displays some of the header files in C language,

Header Files 					 Description
------------					 -----------
stdio.h     					 Input/Output functions

conio.h							 Console Input/Output functions

stdlib.h						 General utility functions

math.h							 Mathematics functions

string.h						 String functions

ctype.h							 Character handling functions

time.h							 Date and time functions

float.h							 Limits of float types

limits.h						 Size of basic types

wctype.h						 Functions to determine the type contained in wide 
								 character data.


##-----------------------Explanation(C,C++)Header---------------------------##
Standard Header Files And Their Uses: 
 

#include<stdio.h>: It is used to perform input and output operations using functions scanf() and printf().

#include<iostream>: It is used as a stream of Input and Output using cin and cout.

#include<string.h>: It is used to perform various functionalities related to string manipulation like strlen(), strcmp(), strcpy(), size(), etc.

#include<math.h>: It is used to perform mathematical operations like sqrt(), log2(), pow(), etc.

#include<iomanip.h>: It is used to access set() and setprecision() function to limit the decimal places in variables.

#include<signal.h>: It is used to perform signal handling functions like signal() and raise().


#include<stdarg.h>:It is used to perform standard argument functions like va_start() and va_arg().
It is also used to indicate start of the variable-length argument list and to fetch the arguments from the variable-length argument list in the program respectively.

#include<errno.h>: It is used to perform error handling operations like errno(), strerror(), perror(), etc.

#include<fstream.h>: It is used to control the data to read from a file as an input and data to write into the file as an output.

#include<time.h>: It is used to perform functions related to date() and time() like setdate() and getdate(). 
It is also used to modify the system date and get the CPU time respectively.

#include<float.h>: It contains a set of various platform-dependent constants related to floating point values.
These constants are proposed by ANSI C. They allow making programs more portable. Some examples of constants included in this header file are- e(exponent), b(base/radix), etc.

#include<limits.h>: It determines various properties of the various variable types. The macros defined in this header, 
limits the values of various variable types like char, int, and long. These limits specify that a variable cannot store any value beyond these limits, 
for example an unsigned character can store up to a maximum value of 255.

##----------------------------------------------------------------------------##

*/
