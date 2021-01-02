credit:- MAHIR LABIB DIHAN https://github.com/mahirlabibdihan

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
