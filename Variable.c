/*
A variable is an identifier that is used to represent some specified type of information within a designated portion of the program.

//char,int,float,double,void

//type variable_list;
int    i, j, k;
char   c, ch;
float  f, salary;
double d;


//type variable_name = value;

Some examples are −

extern int d = 3, f = 5;    // declaration of d and f. 
int d = 3, f = 5;           // definition and initializing d and f. 
byte z = 22;                // definition and initializes z. 
char x = 'x';               // the variable x has the value 'x'.

##=----------------------------extern----------------------##
A variable declaration is useful when you are using multiple files and you define your variable in one of the files which will be available at the time of linking of the program. You will use the keyword extern to declare a variable at any place. Though you can declare a variable multiple times in your C program, it can be defined only once in a file, a function, or a block of code.
##---------------------------------------------------------##


##--------------------Lvalues and Rvalues in C-------------------------##


There are two kinds of expressions in C −

Lvalue − Expressions that refer to a memory location are called "lvalue" expressions. An lvalue may appear as either the left-hand or right-hand side of an assignment.

Rvalue − The term rvalue refers to a data value that is stored at some address in memory. An rvalue is an expression that cannot have a value assigned to it which means an rvalue may appear on the right-hand side but not on the left-hand side of an assignment.

Variables are Lvalues and so they may appear on the left-hand side of an assignment. 

Numeric literals are rvalues and so they may not be assigned and cannot appear on the left-hand side. Take a look at the following valid and invalid statements −

int g = 20; // valid statement

10 = 20; // invalid statement; would generate compile-time error

#----------------------------------------------------------------------##


##-------------------Variable declarations-------------------------------##

Rules for defining variables

1)A variable can have alphabets, digits, and underscore.

2)A variable name can start with the alphabet, and underscore only. It can’t start with a digit.

3)No whitespace is allowed within the variable name.

4)A variable name must not be any reserved word or keyword, e.g. int, goto , etc.


##-------------------------Types of variable----------------------------##
1. Local Variable 
A variable that is declared and used inside the function or block is called local variable. 
It’s scope is limited to function or block. It cannot be used outside the block.Local variables need  to be initialized before use. 

example:
#include <stdio.h>
void function() {
int x = 10; // local variable
}

int main()
{
function();
}


2. Global Variable 
A variable that is declared outside the function or block is called a global variable. 
It is declared at the starting of program. It is available to all the functions. 

Example:
#include <stdio.h>
int x = 20;//global variable
void function1()
{
printf("%d\n" , x);
}
void function2()
{
printf("%d\n" , x);
}
int main() {

function1();
function2();
	return 0;
}


3.Static Variable 
A variable that retains its value between multiple function calls is known as static variable. 
It is declared with the static keyword. 

Static variables have a property of preserving their value even after they are out of their scope! Hence, static variables preserve the value of their last use in their scope. So we can say that they are initialized only once and exist till the termination of the program. Thus, no new memory is allocated because they are not re-declared. Their scope is local to the function to which they were defined. Global static variables can be accessed anywhere within that file as their scope is local to the file. By default, they are assigned the value 0 by the compiler. 

Example- 


#include <stdio.h>
void function(){ 
int x = 20;//local variable 
static int y = 30;//static variable 
x = x + 10; 
y = y + 10; 
printf("\n%d,%d",x,y); 
} 
int main() {
 
  function();
  function();
  function();
  return 0;
}
Output
30,40
30,50
30,60
 
 In the above example , local variable will always print same value whenever function will be called whereas static variable will print the incremented value in each function call.



4.Automatic Variable 
All variables in C that are declared inside the block, are automatic variables by default. We 
can explicitly declare an automatic variable using auto keyword.Automatic variables are similar as 
local variables. 

Example –  


#include <stdio.h>
void function()
{
  int x=10;//local variable (also automatic) 
  auto int y=20;//automatic variable
}
int main() {
 
    function();
    return 0;
}
In the above example both x and y are automatic variables .The only difference is that variable y is explicitly declared with auto keyword.


5.External Variable 
External variable can be shared between multiple C files.We can declare external variable using extern keyword.

Example: 

  myfile.h

  extern int x=10;//external variable (also global)  

   
  program1.c
  #include "myfile.h"  
  #include <stdio.h>  
  void printValue(){  
  printf("Global variable: %d", global_variable);  
  }

In the above example x is an external variable which is used in multiple files.
##-------------------------------------------------------------------------##

##------------------------------------------------------------------------##


*/