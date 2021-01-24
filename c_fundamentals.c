#include<stdio.h>
int main()
{
	//ldentifiers are names that are given to various program elements, such as variables, functions and arrays.
/*The following names are not valid identifiers for the reasons stated.
4th The first character must be a letter.
x I' Illegal characters ('I).
order-no Illegal character (-).
error f l a g Illegal character (blank space).
*/

//decimal-->no leading zero
//octal-->starts with "0"
//hexa-Decimal-->starts with "Ox/OX"
   //-->lower case or upper case a-f represents 10-15 in hexa decimal


// -----------------------Floating Point Number--------------------------------
// float a= 176E+10.2//incorrect.exponent cant be a float number.it must contain integer quantity
// 1.2* 10^-3=1.2e-3=1.2E-3=.12e-2=12e-4
//Deafult value for float number after dot is =6 digits;
printf("%f\n",-0);//0.000000(no zero)
printf("%f\n",-0.0);//-0.000000
printf("%.3f\n",0.00);//0.000

//escape sequences:
/*Character     Escape Seauence     ASCII Value
bell (alert)  		 \a            007
backspace            \b   		   008
horizontal tab       \t   		   009
vertical tab         \v   		   011
newline (line feed)  \n 		   010
form feed            \f    		   012
carriage return      \r   		   013
quotation mark (")   \ " 	       034
apostrophe (')       \'    		   039
question mark (?)    \?   		   063
backslash 0)         \\       	   092
null                 \O   		   000
*/
//puts("\"Return\"");\\"Return"




}
