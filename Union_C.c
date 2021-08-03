#include<stdio.h>
// union union_name{
// Definition ;	
// ...
// ..
// }[one or more variables];

// Declarations are same as structure .

// Union allows to store different variables in the same memory location .
// Union can have many members . But only one member can contain a value at any given time .
// Size of union is the size of the largest member in the union .

union U1{
	int a;
	float b;
	char c;
}Var1={10};
// Maximum 1 element can be used to initialize a union variable .
// First element will be initialized


union U2{
	int a;
	float b;
	char c;
}Var2={.b=10};
// Any other element other than first one can also be initialized



int main()
{

	printf("var1=%d %f %d\n",Var1.a,Var1.b,Var1.c);
	printf("var2=%d %f %d\n",Var2.a,Var2.b,Var2.c);
	printf("var1.size=%d\n",sizeof(Var1));

	union U3{
		int a;
		int b;
		int c;
	}Var3;

	Var3.a=10;
	printf("var3=%d %d %d\n",Var3.a,Var3.b,Var3.c);
	// Variables of same data type will hold the same value . 
}


//##---------------------Pointers to Union-----------------##

// Pointer operation in union are just like structures..

union test
{
	int x,y;
};

int main()
{
	union test p1;
	p1.x=10;
	union test *p2=&p1;
	printf("%d %d",p2->x,p2->y);

}




//##---------------------------Similarities between Structure and Union--------------------------##




1)Both are user-defined data types used to store data of different types as a single unit.
2)Their members can be objects of any type, including other structures and unions or arrays. A member can also consist of a bit field.
3)Both structures and unions support only assignment = and sizeof operators. The two structures or unions in the assignment must have the same members and member types.
4)A structure or a union can be passed by value to functions and returned by value by functions. The argument must have the same type as the function parameter. A structure or union is passed by value just like a scalar variable as a corresponding parameter.
5)‘.’ operator is used for accessing members. 