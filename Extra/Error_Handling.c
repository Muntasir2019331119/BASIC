#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	// FILE* a=fopen("Error.txt","r");

	// if(!a)
	// {
	// 	perror("");
	// }

	long long n;
	scanf("%lld",&n);
	int *P=(int*)malloc(4*n);
	if(!P) 
	{
		int err=errno;
		printf("Error No : %d\n",errno);
		perror("Error1 ");	  // Prints to stdout
		printf("Error2 : %s\n",strerror(errno));		// Prints to stderror
		fprintf(stderr,"Error3 : %s\n",strerror(errno));		// Prints to stderror
	}
	else
	{
		puts("Allocated");
	}

}

// Most of the C or even Unix function calls return -1 or NULL in case of any error and set an error code errno.
//  It is set as a global variable and indicates an error occurred during any function call. 
//  You can find various error codes defined in <error.h> header file.

// So a C programmer can check the returned values and can take appropriate action depending on the return value.
//  It is a good practice, to set errno to 0 at the time of initializing a program.
//   A value of 0 indicates that there is no error in the program.


// The C programming language provides perror() and strerror() functions which can be used to display the text message associated with errno.

// The perror() function displays the string you pass to it, followed by a colon, a space, and then the textual representation of the current errno value.

// The strerror() function, which returns a pointer to the textual representation of the current errno value.




//Exit status:

// It is a common practice to exit with a value of EXIT_SUCCESS in case of program coming out after a successful operation. Here, EXIT_SUCCESS is a macro and it is defined as 0.

// If you have an error condition in your program and you are coming out then you should exit with a status EXIT_FAILURE which is defined as -1.
//So let's write above program as follows −


#include <stdio.h>
#include <stdlib.h>

int main() {

   int dividend = 20;
   int divisor = 5;
   int quotient;
 
   if( divisor == 0) {
      fprintf(stderr, "Division by zero! Exiting...\n");
      exit(EXIT_FAILURE);
   }
	
   quotient = dividend / divisor;
   fprintf(stderr, "Value of quotient : %d\n", quotient );

   exit(EXIT_SUCCESS);
}
//When the above code is compiled and executed, it produces the following result −

Value of quotient : 4