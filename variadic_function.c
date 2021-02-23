#include<stdio.h>
#include<stdarg.h>
#define myprint(...) printf("hi!\n")
//A function that accepts a variale number of argument is a variadic_function.
//We typically use variadic function when we don’t know the total number of arguments that will be used for a function.
// Basically one single function could potentially have n number of arguments.


// Macros:
// va_start , va_arg , va_copy , va_end

// //all items coming from stdarg.h have names prefixed by va_.
int sum(int n, ...)
{
	va_list list;
	//to track..this is actually a macro. va_list is a type
	//   typedef __builtin_va_list va_list; / typedef char*va_list;
	//ap is a pointer . //Most probably char*
	int tot = 0;
	va_start(list, n);


	/*

	//va_start():


	va_start is a macro . // #define va_start(ap,n)  ((ap) = ((va_list) __builtin_next_arg(n)))

	va_start() expects two arguments:

	the name of the list that should be associated (declared previously)
	the name of the last (last!) parameter in the fixed part.

	note: va_start() return no value..


	*/


	while (n--)
	{

		int v = va_arg(list, int);

//va_arg:
		/*
		va_arg is a macro . // #define va_arg(ap, t)   (((ap) = (ap) + __va_argsiz(t)),   *((t*) (void*) ((ap) - __va_argsiz(t))))

		va_arg() expects two arguments:
		        1)the name of the list to get the value from (the list should be previously initialized by the va_start() invocation)
			2)the type name of the value being fetched.

		 	** data type can't be short , unsigned short , char , float .
		  	** char , short , unsigned short  is promoted to int .
		        ** float is promoted to double .


				the va_arg() does two things:

				it derefences the pointer hidden under the hood of the va_list argument (this is why it needs to know the type of the value)

				it updates the pointer – it moves it to the next value on the stack (knowing the type of the value is necessary again).


				note:	va_arg()returns a value of type identical to the one specified by the second argument.

			*/
		tot += v;
	}
	va_end(list);
	/*
	va_end():
	va_end() expects one argument – the name of the list being ended. From that moment, the list must not be accessed any more,
	although it’s still possible to initialize it again by invoking va_start() once more.

	Note: va_end() returns no value.

	*/

	return tot;

}

int main()
{
	printf("%d\n", sum(0));//0
	printf("%d\n", sum(5, 23, 24, 5, 6, 78));//136 //5=number of parametre..bakigula parametre..
	printf("%d\n", sum(3, 1, 2, 3));//6
	printf("%d\n", sum(2, 1, 3, 4));//4
	printf("%d\n", sum(4, 1, 2, 3));//12

}
//va_copy( va_list argumentDestination, va_list argumentSource );

//va_list as a parameter:
//finding max:

int max(int  n, va_list val)
{
	int m = va_arg(val, int);
	while (--n > 0)
	{
		int k = va_arg(val, int);
		if (k > m)
			m = k;
	}
	return m;
}

int va_max(int n, ...)
{
	va_list l;
	va_start(l, n);
	int r = max(n, l);
	va_end(l);
	return r;

}
int main()
{
	int x = va_max(3, 1, 2, 3);//3
	printf("%d\n", x);
	myprint();//hi
	return 0;
}
/*
All of these functions are variadic and accept as many arguments as needed to perform their desired actions.
 Let’s devote some time to them:

printf() builds a string according to format and sends it to stdout;
fprintf() does the same as printf() but sends the string to any stream, not only stdout;
dprintf() does the same as fprintf() but sends the string to a file identified by the descriptor

sprintf() does the same as printf() but sends the resulting string to another string;
snprintf() does the same as sprintf() but limits the length of the resulting string to a specific value.
*/

/*
scanf() reads a series of characters from stdin and converts them to values of desired types according to the specifications defined in the format;
fscanf() does the same as scanf() but reads characters from any stream, not only stdin;
sscanf() does the same as scanf() but reads characters from other strings, not stream.
*/

#include <stdio.h>
#define MYPRINT(...)	printf(__VA_ARGS__)
#define PUT(x,...)	fprintf(x,__VA_ARGS__)
#define OUT(...)	puts(#__VA_ARGS__)

int main(void) {
	MYPRINT("Alfa\n");
	MYPRINT("Bravo %s\n", "Charlie");
	PUT(stdout, "Delta\n");
	PUT(stderr, "Echo %s\n", "Foxtrot");
	OUT("Alfa\n");
	OUT("Bravo %s\n", "Charlie");
	return 0;
}
/*output:
Alfa
Bravo Charlie
Delta
Echo Foxtrot(in stderr)
"Alfa\n"
"Bravo %s\n", "Charlie"
*/
