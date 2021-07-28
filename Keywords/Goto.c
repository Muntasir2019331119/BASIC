/*
The goto statement is a jump statement which is sometimes also referred to as unconditional jump statement.
 The goto statement can be used to jump from anywhere to anywhere within a function.

 example:

#include <stdio.h>


void checkEvenOrNot(int num)
{
	if (num % 2 == 0)
		// jump to even
		goto even;
	else
		// jump to odd
		goto odd;

even:
	printf("%d is even", num);

odd:
	printf("%d is odd", num);
}

int main() {
	int num = 26;
	checkEvenOrNot(num);
	return 0;
}

##----------------------------------------------------------------------##
// C program to print numbers
// from 1 to 10 using goto statement

 void printNumbers()
 {
	int n=1;
	label:
	printf("%d",n);
	if(n<=10)
	goto label;
 }


int main()
{
printNumbers(10);
	return 0;
}

##------------------------Disadvantages--------------------------------------##
The use of goto statement is highly discouraged as it makes the program logic very complex.

use of goto makes the task of analyzing and verifying the correctness of programs (particularly those involving loops) very difficult.

Use of goto can be simply avoided using break and continue statements.


*/
