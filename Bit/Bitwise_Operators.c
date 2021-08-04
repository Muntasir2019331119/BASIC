/*
1)The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1. 
 
2)The | (bitwise OR) in C or C++ takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1. 
 
3)The ^ (bitwise XOR) in C or C++ takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different. 
 
4)The << (left shift) in C or C++ takes two numbers, left shifts the bits of the first operand, the second operand decides the number of places to shift. 
 
5)The >> (right shift) in C or C++ takes two numbers, right shifts the bits of the first operand, the second operand decides the number of places to shift. 
 
6)The ~ (bitwise NOT) in C or C++ takes one number and inverts all bits of it 


// C Program to demonstrate use of bitwise operators
#include <stdio.h>
int main()
{
	// a = 5(00000101), b = 9(00001001)
	unsigned char a = 5, b = 9;

	// The result is 00000001
	printf("a = %d, b = %d\n", a, b);
	printf("a&b = %d\n", a & b);

	// The result is 00001101
	printf("a|b = %d\n", a | b);

	// The result is 00001100
	printf("a^b = %d\n", a ^ b);

	// The result is 11111010
	printf("~a = %d\n", a = ~a);

	// The result is 00010010
	printf("b<<1 = %d\n", b << 1);

	// The result is 00000100
	printf("b>>1 = %d\n", b >> 1);

	return 0;
}
OUTPUT:

a = 5, b = 9
a&b = 1
a|b = 13
a^b = 12
~a = 250
b<<1 = 18
b>>1 = 4



##----------------------Interesting Fact---------------------------------##
1)The left shift and right shift operators should not be used for negative numbers. If the second operand(which decides the number of shifts) is a negative number, it results in undefined behaviour in C. For example results of both 1 <<- 1 and 1 >> -1 is undefined. Also, if the number is shifted more than the size of the integer, the behaviour is undefined. For example, 1 << 33 is undefined if integers are stored using 32 bits. Another thing is, NO shift operation is performed if additive-expression(operand that decides no of shits) is 0. 
Note: In C++, this behavior is well-defined.

2)The bitwise XOR operator is the most useful operator from a technical interview perspective. It is used in many problems. A simple example could be “Given a set of numbers where all elements occur even a number of times except one number, find the odd occurring number” This problem can be efficiently solved by just doing XOR of all numbers. 
 

#include <stdio.h>
 
// Function to return the only odd
// occurring element
int findOdd(int arr[], int n)
{
    int res = 0, i;
    for (i = 0; i < n; i++)
        res ^= arr[i];
    return res;
}
 
// Driver Method
int main(void)
{
    int arr[] = { 12, 12, 14, 90, 14, 14, 14 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The odd occurring element is %d ",
           findOdd(arr, n));
    return 0;
}

3)The left-shift and right-shift operators are equivalent to multiplication and division by 2 respectively. As mentioned in point 1, it works only if numbers are positive. 
 

#include <stdio.h>
 
int main()
{
    int x = 19;
    printf("x << 1 = %d\n", x << 1);//38(19*2)
    printf("x >> 1 = %d\n", x >> 1);9(19/2)
    return 0;
}


4)The & operator can be used to quickly check if a number is odd or even. The value of expression (x & 1) would be non-zero only if x is odd, otherwise the value would be zero. 
 

#include <stdio.h>
 
int main()
{
    int x = 19;
    (x & 1) ? printf("Odd") : printf("Even");
    return 0;
}


##--------------------------Shift operators---------------------------------------##


There are two shift operators in C programming:

Right shift operator
Left shift operator.

Right Shift Operator:
Right shift operator shifts all bits towards right by certain number of specified bits. It is denoted by >>.

212 = 11010100 (In binary)
212>>2 = 00110101 (In binary) [Right shift by two bits]
212>>7 = 00000001 (In binary)
212>>8 = 00000000 
212>>0 = 11010100 (No Shift)
Left Shift Operator
Left shift operator shifts all bits towards left by a certain number of specified bits. The bit positions that have been vacated by the left shift operator are filled with 0. The symbol of the left shift operator is <<.

212 = 11010100 (In binary)
212<<1 = 110101000 (In binary) [Left shift by one bit]
212<<0 = 11010100 (Shift by 0)
212<<4 = 110101000000 (In binary) =3392(In decimal)

Example : Shift Operators
#include <stdio.h>
int main()
{
    int num=212, i;
    for (i=0; i<=2; ++i)
        printf("Right shift by %d: %d\n", i, num>>i);

     printf("\n");

     for (i=0; i<=2; ++i) 
        printf("Left shift by %d: %d\n", i, num<<i);    
    
     return 0;
}

Right Shift by 0: 212
Right Shift by 1: 106
Right Shift by 2: 53

Left Shift by 0: 212
Left Shift by 1: 424
Left Shift by 2: 848


##-------------------------------Example:--------------------------------##
AND:

12 = 00001100 (In Binary)
25 = 00011001 (In Binary)

Bit Operation of 12 and 25
  00001100
& 00011001
  ________
  00001000  = 8 (In decimal)
Example #1: Bitwise AND
#include <stdio.h>
int main()
{
    int a = 12, b = 25;
    printf("Output = %d", a&b);
    return 0;
}
Output

Output = 8




OR:



//12 = 00001100 (In Binary)
25 = 00011001 (In Binary)

Bitwise OR Operation of 12 and 25
  00001100
| 00011001
  ________
  00011101  = 29 (In decimal)
Example #2: Bitwise OR
#include <stdio.h>
int main()
{
    int a = 12, b = 25;
    printf("Output = %d", a|b);
    return 0;
}
Output

Output = 29


X-OR:

12 = 00001100 (In Binary)
25 = 00011001 (In Binary)

Bitwise XOR Operation of 12 and 25
  00001100
^ 00011001
  ________
  00010101  = 21 (In decimal)
Example #3: Bitwise XOR
#include <stdio.h>
int main()
{
    int a = 12, b = 25;
    printf("Output = %d", a^b);
    return 0;
}
Output

Output = 21




*/

