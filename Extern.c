#include<stdio.h>

// External linkage of global variables
// To use a global variable of another file
// Suppose int E is defined globally in another .c file (Ex: source.c) and we want to access variable E in this file then we should write
extern int E; // Now we can use E in this file also (gcc Extern.c source.c -o Extern.exe)
// If E is not defined in any other file , and if we declared extern int E here , it won't give any compilation error until we use E .


int a;   // Declaration and Definition
extern int b;  // Declaration without Definition
extern int c = 0;  // Declaration and Definition
int main()
{
	extern int A;   // Won't compile without this line
	printf("%d\n", A);

}
//##-------------------------------------------------------------##
//We can use extern to replace header file..
//Example:For a simple code
#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	scanf("%d", &a);
	int x = pow(a, 2);
	printf("%d", x);
}

//we can use extern to replace these header file
extern int scanf();
extern int printf();
extern double pow(double, double);
int main()
{
	int a;
	scanf("%d", &a);
	int x = pow(a, 2);
	printf("%d", x);
}
//##------------------------------------------------------------------##


//For more: Visit Variable.c