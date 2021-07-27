/*
The Function prototype serves the following purposes –

1) It tells the return type of the data that the function will return.
2) It tells the number of arguments passed to the function.
3) It tells the data types of the each of the passed arguments.
4) Also it tells the order in which the arguments are passed to the function.

*/
#include <stdio.h>

void Dihan();	// An empty parameter list simply says that no parameter information is given. Any number of arguments can be passed to the function .
void Takla(void);  // Takes no argument

void Nahid(a,b,c)
int a,b,c;
{
	
}
int main()
{
	Dihan(5,6,7);   // Any number of argument can be provided
}

void Dihan(int a,int b)
{
	printf("%d %d\n",a,b);
}