#include<stdio.h> 
#include<stdlib.h>
// Functions are the building blocks of C and the place where all program activity occurs.


//// A function argument is an expression that is used within the parentheses of a function call. 
//A function parameter is an object declared within the parentheses of a function declaration or definition. 

// return-type function-name (parameters list) {
// definitions and statements//body of the function
// }



// int Function(int a,int b)
// {
		// return a+b;
// }

// int Function(a,b)int a;int b;
// {
		// return a+b;
// }



//Standard Library Function - Built in functions in c programming which are defined in header files. Only the prototypes are there in the header files. Not the source code.

//User-Defined Function - Creater by user


//Function name is a pointer
// Default return type of a function is int .
// A function may return any type of data except an array.(in c language)//see bottom part

// An empty parameter list can be explicitly specified as such by placing the keyword void inside the parentheses.

//Global Variables can be accessed and changed from any function
//Local Variables can be accessed and changed from the same function only.Variable declared within a function can only be used by that function.
//Function Parameters are Local Variable


//main() Function is must for a c program
//main() Function cannot be called from another funtion [Infinity Loop]


// Type Conversions of Arguments :
// Arguments that are arrays or functions are converted to pointers before being passed as function arguments.
// Arguments passed to non prototyped(variadic function) C functions undergo conversions: type  char parameters are converted to int, 
//and float parameters to double. These are called default argument promotions



//##---------------------Call by Reference---------------------------------##
//Call by refference - Passing the address of a variable --- [ Array always call by refference ] 
void CallRef(int *b)
{
	//b -> Address of b
	//*b -> Value of b
	*b=5; // a will also be 5
}
void Callr()
{
	int a;
	CallRef(&a);
	int b[5];
	CallRef(b);
}

//##--------------------------Call By value-------------------------------##

//Call by value - Passing the value of a variable
void CallVal(int b)
{
	//b is a local variable of function PassVal
	//b -> Value of a
	//&b -> Address of b (not a)
	b=5; // value of a will not change
}
void Callv()
{
	int a;
	CallVal(a);
}

//##------------------------------------------------------------------------##


//Function and variable name can be same unless you use both in the same function
void Dihan()
{
	int Dihan;
}//Correct

// void Nahid()
// {
// 	int Dihan;
// 	Dihan();
// }//Incorrect




//Can not return the address of local variable of a function unless it is Static Variable or allocated by malloc.
 // Because the allocated memory is automatically free at the end of function execution. But in malloc the memory needs to be free manually.
int* LocalAddress()
{
	int *a=(int*)malloc(sizeof(int));
	return a;
}//Correct
int* StaticAddress()
{
	static int a;
	return &a;
}//Correct
// int* LocalAddress()
// {
// 	int a;
// 	return &a;
// }//Incorrect


void Print2D(int n,int m,int x[][m])  // Works in C compiler not in C++//must have to give column 
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",x[i][j]);
		}
		puts("");
	}
}

void Print2Das1D(int n,int m,int *x)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",x[i*m+j]);
		}
		puts("");
	}
}
//Passing 2D array to  function
void Array2D()
{
	int a[4]={1,2,3,4};
	int x[2][4]={1,2,3,4,5,6,7,8};
	int **y=(int**)x;  // incorrect
	// Because 2D array is also is also a 1D array.
	int *z=(int*)x;  //correct
	int (*w)[4]=x;   //Pointer to First 1D array of 2d array 

	//Access elements
	//2D array - 2nd row 3rd coloumn
	// printf("%d\n",*(x[0]+1*4+2));
	// printf("%d\n",z[1*4+2]);
	//1D array - 3rd coloumn
	// printf("%d\n",a[2]);


	// Print2D(sizeof(x)/sizeof(x[0]),sizeof(x[0])/sizeof(x[0][0]),x);
	// Print2Das1D(sizeof(x)/sizeof(x[0]),sizeof(x[0])/sizeof(x[0][0]),(int*)x);
}


//Function can not return more than one variable
void F1(){}  // No parameter & No return value
void F2(int a){}  // With parameter & No return value
int F3(){} // No parameter & with return value
int F4(int a){} // With parameter & with return value



void Function(int a,int b); //Function prototype or declaration // int a,int b are parameters 

void FunctionPointer(void (*Function)(int,int)) //Function Pointer as Parameter
{

}


//main() can return void/int in c program. But it must return int in c++ program.
int main(int n,char *Argc[]) //Arguments in main function is Command-line argument //We can pass values to main function using command-line
{
	Function(5,4);  
	//Calling Function //5,4 are arguments
	FunctionPointer(Function);  //Function Pointer as Argument
	Array2D();
}

void Function(int a,int b) //Function definition = Function Declaration + Statements
{
	a=a+b;
}

-----------------------------####################------------------------------------
----->Muntasir Mamun Nahid

//passing structure to a function...

//pass by value..
struct nahid
{
	int a;
	char b;
};
void ok(struct nahid ans)
{
	ans.a=1;
	ans.b=go;
}
int main()
{
   struct nahid done={2,cd};
   ok(done);
   printf("%d %c",done.a,done.b);//it will print 2 ,cd ..
   //because it was passed by value...
}

//pass by reference...

struct nahid
{
	int a;
	char b;
};
void ok(struct nahid *ans)
{
	ans->a=1;
	ans->b=go;
}
int main()
{
   struct nahid done={2,cd};
   ok(&done);
   printf("%d %c",done.a,done.b);//it will print 1 ,go.
   //because it was passed by reference...
}


//passing array to a function...
//1st way..
void passingArray(int *arrptr)
{
	for(int i=0;i<n;i++)
		arrptr[i]+=2;
	//blah blah....
}
//2nd way...
void passingArray(int arr[])
{
	for (int i = 0; i < n; ++i)
	{
		arr[i]+=2;
	}
}
int main()
{
	int arra[5]={1,2,3,4,5};
	passingArray(arr);
	//if arra have no given size..we have to pass the size too..
}

//passing an 2D array to a function:
//Invalid way:
// void printArray(int t[][]);
// void printArray(int **t);


//Valid way:

void printArray(int t[3][3]);
void printArray(int t[][3]);
//which means we must have to send column number
//but sending row number is not compulsory..
//example:

void printArray(int t[][3])
{
	for(int i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",t[i][j]);
		}printf("\n");
	}
}

int main()
{
	int arr[3][3]={1,2,3,,4,5,6,7,8,9};
	printArray(arr);
}


//sending 2D array as a pointer:

void printarrptr(int **t) {
    int i,j;
    for(i = 0; i<3; i++) {
        for(j = 0; j<3; j++) 
            printf("%d\t",t[i][j]);
        printf("\n");
    }
}
int main(void)
{
    int *arrptr[3];
    int i,j;

    for(i = 0; i < 3; i++) {
        arrptr[i] = (int *) malloc(3 * sizeof(int));
        for(j = 0; j < 3; j++)
            arrptr[i][j] = (3 * i) + j + 1;
    }
    printarrptr(arrptr);
    for(i = 0; i < 3; i++)
        free(arrptr[i]);
    return 0;
}

//##------------------------Function Returning Array---------------------##

//wrong Way->sometimes gives garbage value
// #include <stdio.h>

// int* fun()
// {
// 	int arr[100];

// 	/* Some operations on arr[] */
// 	arr[0] = 10;
// 	arr[1] = 20;

// 	return arr;
// }

// int main()
// {
// 	int* ptr = fun();
// 	printf("%d %d", ptr[0], ptr[1]);
// 	return 0;
// }



//Right way:

// 1)Using Dynamically Allocated Array : 
#include <stdio.h>

int* fun(int *arr)
{
	/* Some operations on arr[] */
	arr[0] = 10;
	arr[1] = 20;

	return arr;
}

int main()
{
	int arr[100];
	int* ptr = fun(arr);
	printf("%d %d", ptr[0], ptr[1]);
	return 0;
}


//2)Using static array:
#include <stdio.h>

int* fun()
{
	static int arr[100];

	/* Some operations on arr[] */
	arr[0] = 10;
	arr[1] = 20;

	return arr;
}

int main()
{
	int* ptr = fun();
	printf("%d %d", ptr[0], ptr[1]);
	return 0;
}



//##---------------------variadic function:-------------------------------------##

// //the below function will give proper output..

int f()//it means that we can pass as many parameter as we want..including zero number of argument..
{
	printf("congratulations!\n");
}

int main(void)
{
	f();
	f(1);
	f(1,2);
	return 0;
}
output:
congratulations!
congratulations!
congratulations!


//three dot(ellipsis):

int f(int a, ...)
//it means that we can pass as many parameter as we want..excluding zero number of argument..
//we must have to give three dot. 
//but
//int f(int a , ... ,int b)is not allowed
//int f(...) is not allowed. 
//int f(...,...)is not allowed
{
	printf("congratulations!\n");
}

int main(void)
{
	//f();
	f(1);
	f(1,2);
	return 0;
}
// output:
// congratulations!
// congratulations!


int sum(int a, ...)
{

}
int main()
{
	sum(4,1,2,3);//4=number of elemnts;1,2,3=elemnts passed to the function..
}

//these type of function is known as variadic function..to know more visit gfg or  click [here]{https://github.com/MuntasirNahid/BASIC_in_C_Language/blob/main/variadic_function.c}
//##---------------------------------------------------------------------------##

