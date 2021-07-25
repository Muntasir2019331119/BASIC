/*

Operators are the foundation of any programming language.
We can define operators as symbols that help us to perform specific mathematical and logical computations on operands.
 In other words, we can say that an operator operates the operands.

 1)Arithmetic Operators (+, -, *, /, %, post-increment, pre-increment, post-decrement, pre-decrement)

2)Relational Operators (==, !=, >, <, >= & <=) Logical Operators (&&, || and !)

3)Bitwise Operators (&, |, ^, ~, >> and <<)

4)Assignment Operators (=, +=, -=, *=, etc)

5)Other Operators (conditional, comma, sizeof, address, redirection)

1) Arithmetic Operators: These are the operators used to perform arithmetic/mathematical operations on operands. Examples: (+, -, *, /, %,++,–). Arithmetic operator are of two types:
      Unary Operators: Operators that operates or works with a single operand are unary operators. For example: (++ ,--)

      Binary Operators: Operators that operates or works with two operands are binary operators. For example: (+ , – , * , /)

2)Relational Operators: These are used for comparison of the values of two operands. For example, checking if one operand is equal to the other operand or not, an operand is greater than the other operand or not etc. Some of the relational operators are (==, >= , <= ).

3)Logical Operators:  Logical Operators are used to combine two or more conditions/constraints or to complement the evaluation of the original condition in consideration. The result of the operation of a logical operator is a boolean value either true or false. For example, the logical AND represented as ‘&&’ operator in C or C++ returns true when both the conditions under consideration are satisfied. Otherwise it returns false. Therfore, a && b returns true when both a and b are true (i.e. non-zero)

4)Bitwise Operators: The Bitwise operators is used to perform bit-level operations on the operands. The operators are first converted to bit-level and then the calculation is performed on the operands. The mathematical operations such as addition, subtraction, multiplication etc. can be performed at bit-level for faster processing. For example, the bitwise AND represented as & operator in C or C++ takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1.

5)Assignment Operators: Assignment operators are used to assign value to a variable. The left side operand of the assignment operator is a variable and right side operand of the assignment operator is a value. The value on the right side must be of the same data-type of variable on the left side otherwise the compiler will raise an error.
Example: +=,-=,*=,/=,

## Conditional operator:
A conditional expression is written in the form:

expression 7 ? expression 2 : expression 3

When evaluating a conditional expression, expression I is evaluated first. If expression 7 is true
(i.e., if its value is nonzero), then expression 2 is evaluated and this becomes the value of the conditional
expression. However, if expression 7 is false (i.e., if its value is zero), then expression 3is evaluated
and this becomes the value of the conditional expression.


##-------------------Precedence------------------------------------##
Category			Operator							Associativity
--------			--------							-------------
Postfix				() [] -> . ++ --					Left to right
Unary				+ - ! ~ ++ - - (type)* & sizeof		Right to left
Multiplicative		* / %								Left to right
Additive			+ -									Left to right
Shift				<< >>								Left to right
Relational			< <= > >=							Left to right
Equality			== !=								Left to right
Bitwise AND			&									Left to right
Bitwise XOR			^									Left to right
Bitwise OR			|									Left to right
Logical AND			&&									Left to right
Logical OR			||									Left to right
Conditional			?:									Right to left
Assignment			= += -= *= /= %=>>= <<= &= ^= |=	Right to left
Comma				,									Left to right


Example:
#include <stdio.h>

int main() 
{

   int a = 20;
   int b = 10;
   int c = 15;
   int d = 5;
   int e;
 
   e = (a + b) * c / d;      // ( 30 * 15 ) / 5
   printf("Value of (a + b) * c / d is : %d\n",  e );

   e = ((a + b) * c) / d;    // (30 * 15 ) / 5
   printf("Value of ((a + b) * c) / d is  : %d\n" ,  e );

   e = (a + b) * (c / d);   // (30) * (15/5)
   printf("Value of (a + b) * (c / d) is  : %d\n",  e );

   e = a + (b * c) / d;     //  20 + (150/5)
   printf("Value of a + (b * c) / d is  : %d\n" ,  e );
  
   return 0;
}
When you compile and execute the above program, it produces the following result −

Value of (a + b) * c / d is : 90
Value of ((a + b) * c) / d is  : 90
Value of (a + b) * (c / d) is  : 90
Value of a + (b * c) / d is  : 50
*/