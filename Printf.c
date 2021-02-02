#include<stdio.h>
int main()
{
//The C library function int printf(const char *format, ...) sends formatted output to stdout.

//%[flag][width][.precison][length]specifier

//--------------------------------flag-------------------------------------
// 1)-      =Left-justify within the given field width; Right justification is the default
// 2)+      =Forces to precede the result with a plus or minus sign (+ or -) even for positive numbers. By default, only negative numbers are preceded with a -ve sign.
// 3)(space)=If no sign is going to be written, a blank space is inserted before the value.

// 4)#      =i)Used with o, x or X specifiers the value is preceded with 0, 0x or 0X respectively for values different than zero.
//           ii)Used with e, E and f, it forces the written output to contain a decimal point even if no digits would follow.
//	       By default, if no digits follow, no decimal point is written.
//           iii)Used with g or G the result is the same as with e or E but trailing zeros are not removed.

// 5)0     =Left-pads the number with zeroes (0) instead of spaces, where padding is specified




//----------------------------------width-------------------------------------
//1)number  =Minimum number of characters to be printed. If the value to be printed is shorter than this number, the result is padded with blank spaces.(leading)
//           (if we use negative sign then blank space will be added later the number.)
//           The value is not truncated even if the result is larger.
//2) *      =The width is not specified in the format string, but as an additional integer value argument preceding the argument that has to be formatted.(garbage value dibe)

// ***explanation:
//    printf er shuru tey amra " " diya je string lekhi shetakey boe format string ..normally width koto hobey oita 
//    format string er vitore specify kore dei..like "%10d".
//    the width is not specified in the format string...
//    mane * dile format string er vitore width bola lagey na..
   
//    but as an additional integer value argument ..
//  extra ekta width diye argument ta specify kortey hoy..

// preceding the argument that has to be formatted ..
// j variable ta print korbo ooitar age width ta argument hisebe dirtey hobey..
// like
// printf("%10d",a); etakey likha jay printf("%*d",10,a);

//--------------------------------.precison----------------------------------

//1).number =i)For integer specifiers (d, i, o, u, x, X) − precision specifies the minimum number of digits to be written.
//             If the value to be written is shorter than this number, the result is padded with leading zeros.
//             The value is not truncated even if the result is longer. A precision of 0 means that no character is written for the value 0.
//           ii)For e, E and f specifiers − this is the number of digits to be printed after the decimal point.
//
//           iii)For g and G specifiers − This is the maximum number of significant digits to be printed.
//	         By default all characters are printed until the ending null character is encountered
//           iv) For c type − it has no effect. When no precision is specified, the default is 1. 
//             	If the period is specified without an explicit value for precision, 0 is assumed.

//-------------------------------length----------------------------------------

//1)h     =The argument is interpreted as a short int or unsigned short int (only applies to integer specifiers: i, d, o, u, x and X).
//2)l     =The argument is interpreted as a long int or unsigned long int for integer specifiers (i, d, o, u, x and X),
//	   and as a wide character or wide character string for specifiers c and s.
//3)L     =The argument is interpreted as a long double (only applies to floating point specifiers: e, E, f, g and G).

//-------------------------------------------------------------------------------------
// On success, the total number of characters written is returned.

// If a writing error occurs, the error indicator (ferror) is set and a negative number is returned.

// If a multibyte character encoding error occurs while writing wide characters, errno is set to EILSEQ and a negative number is returned.



	
	int a = 155;
	float b = 158.216755;

	printf("For decimal numbers:\n");
	printf(" %d\n", a);
	printf(" %10d\n", a);
	printf(" %010d\n", a);
	printf(" %-10d\n", a);

	printf("\nFor floating point\n");
	printf(" %f\n", b);
	printf(" %.5f\n", b);
	printf(" %.10f\n", b);
	printf(" %10f\n", b);
	printf(" %10.5f\n", b);//10 ghor mot..r precision hobey 5 ghor..
	printf(" %10.5f\n", 1111111.2);
	printf(" %010.5f\n", b);
	printf(" %-10.5f\n", b);

	printf("\nFor octal\n");
	printf(" %o\n", a);
	printf(" %#o\n", a); //#=base//base of octal is 0
	printf(" %10o\n", a);
	printf(" %010o\n", a);
	printf(" %-10o\n", a);

	printf("\nFor hexadecimal\n");
	printf(" %x\n", a);
	printf(" %#x\n", a); //base of hexaadecimal is 0x
	printf(" %X\n", a);
	printf(" %10x\n", a);
	printf(" %010x\n", a);
	printf(" %-10x\n", a);

	printf("\nFor exponential\n");
	printf(" %e\n", b);
	printf(" %E\n", b);
	printf(" %.5e\n", b);
	printf(" %.10e\n", b);
	printf(" %20.5e\n", b);
	printf(" %020.5e\n", b);
	printf(" %-20.5e\n", b);



	int i = 10;
	printf("%d %d\n", i, i++);//printf always right side theke count korey..
	printf("%d\n", (5, i));

// printf("%Takla");

	printf("%-s\n", "Nahid");
 //sprintf()
// If successful,
// it returns the total number of 
// characters written excluding 
// null-character appended in the string, 
// in case of failure a negative number 
// is returned .
// sprintf stands for “String print”. Instead of printing on console, it store output on char Name which are specified in sprintf.(see below)


	char Name[10];
	sprintf(Name, "%d", 10);
	puts(Name);//nothing


	printf("%d\n", 5.5);
	printf("%d\n", (int)5.5);


	printf("%05d\n", -5);
	printf("%5d\n", -5);






}
