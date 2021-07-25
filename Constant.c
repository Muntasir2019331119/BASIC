/*

Primary Constants:

   1)Numeric Constants:
			Integer Constants
			Real Constants
   2)Character Constants
			Single Character Constants
			String Constants
			Backslash Character Constants

Secondary Constants:
		Array
		Pointer
		Structure
		Union
		Enum


###---------------Types-----------------------------##
There are four basic types of constants in C. They are integer constants,floating-pointconstants, character
constants and string constants (there are also enumeration constants
##-----------------------------------------------------##

##-----------------Rules----------------------------------##
Integer and floating-point constants represent numbers. They are often referred to collectively as
numeric-type constants. The following rules apply to all numeric-type constants.

1. Commas and blank spaces cannot be included within the constant.

2. The constant can be preceded by a minus (-) sign if desired. (Actually the minus sign is an operator that
changes the sign of a positive constant, though it can be thought of as a part of the constant itself.)

3. The value of a constant cannot exceed specified minimum and maximum bounds. For each type of
constant, these bounds will vary from one C compiler to another.

##-------------------------------------------------------------##

##-------------------------Example-------------------------------##
Several valid decimal integer constants are shown below.

0 1 743 5280 32767 9999

The following decimal integer constants are written incorrectly for the reasons stated.
12,245	 illegal character (, ).
36.0	 illegal character (.).
10 20 30 	illegal character (blank space).
123-45-6789 	illegal character (-).
0900 	the first digit cannot be a zero.


##----------Unsigned and Long integer constants---------------------##

Several unsigned and long integer constants are shown below:

Constant 			Number System
--------			-------------
50000U				decimal (unsigned)
123456789L 			decimal (long)
123456789UL			decimal (unsigned long)
0123456L 			octal (long)
077777711 			octal (unsigned)
OX50000U 			hexadecimal (unsigned)
OXFFFFFUL			hexadecimal (unsigned long)
##----------------------------------------------------------------------##


##-------------------Floating-Point Constants-----------------------------##
Several valid floating-point constants are shown below.

0. 1 . 0.2 827.602

50000. 0.000743 12.3 31 5.0066
2 E-8 0.006e-3 1.6667E+8 .12121212e12

The following are not valid floating-point constants for the reasons stated.

1 				Either a decimal point or an exponent must be present.
1,000.0   	    Illegal character (, ).
2E+10.2		    The exponent must be an integer quantity (it cannot contain a decimal point).
3E 10 			Illegal character (blank space) in the exponent.

#-----------------------------------------------------------------------------##


The quantity 3 x 105can be represented in C by any of the following floating-point constants.
300000. 	3 3e+5 3E5 3.Oe+
.3e6 0.3E6 30E4 30. E+4 300e3
Similarly, the quantity 5.026 x IO-l7 can be represented by any of the following floating-point constants.
5.026E-17 .5026e-16 50.26e-18 .0005026E-13

##-----------------------------------------------------------------------------##
*/


#include<stdio.h>
#define MAX 1<<31 //defined constant

/*****************changing the value of a defined constant*********************/
#undef MAX
#define MAX 100

//------------------------------------------------------------------//
int main()
{
	// Using const declares a constant
	// A constant's value can be initialized . But it can't be changed further . It will remain the same throughout the program .
	// Declaration :
	// const Data_Type Name_of_Constant = Initial_Value
	// Data_Type const Name_of_Constant = Initial_Value
	
	const int c;//garbage value
	static const int s;//value=0;
	const int a = 10; //value=10
	printf("%d %d %d\n", c, s, a);

	//const should be initialized because its value can't be changed further..



	/************Const and Pointer*************/
	const int Var;
	const int *p1;  // Pointer to an integer constant // Can assign to p1 . But can't assign to *p1 .
	//or int const *p1;
	p1 = &Var; // Valid
	// *p1=Var; // Invalid



	int var;
	int *const p2 = &var; // Constant pointer to an integer // Can assign to *p1 . But can't assign to p1 .
	//p2=&var;//invalid
	*p2 = var; //valid


	const int *const p3 = &Var; // Constant pointer to an integer constant Can assign to *p3 . But can't assign to p3 .
	//or int const *const p3; //
	// p3 = &Var ; // Invalid
	// *p3 = Var ; // Invalid
	/******************************************/

	/************** Changing the value of constant *************/
	int *Ptr = (int *)&a;
	*Ptr = 8;
	printf("%d\n", a);
	/**********************************************************/



}
