//##---------------------------------1's complement---------------------------------------------------##
/*
The one’s complement operator (~) is a unary operator that causes the bits of its operand to be inverted (i.e.,
reversed), so that 1s become O s and O s become 1s. This operator always precedes its operand. The operand
must be an integer-type quantity (including integer, long, short, unsigned, char, etc.). Generally, the
operand will be an unsigned octal or an unsigned hexadecimal quantity, though this is not a firm requirement.

Example:
35 = 00100011 (In Binary)

Bitwise complement Operation of 35
~ 00100011 
  ________
  11011100  = 220 (In decimal)

 // The result of ~ operator on a small number can be a big number if the result is stored in an unsigned variable. And the result may be a negative number if the result is stored in a signed variable (assuming that the negative numbers are stored in 2’s complement form where the leftmost bit is the sign bit) 
 
 Example:

 unsigned int x=1;
 printf("signed result= %d",~x);//-2
 printf("unsigned result= %ud",~x)//4294967294d


The bitwise complement of 35 (~35) is -36 instead of 220, but why?

//For any integer n, bitwise complement of n will be -(n+1). To understand this, you should have the knowledge of 2's complement.

##------------------------------------2's complement-------------------------------------------------##

Two's complement is an operation on binary numbers. The 2's complement of a number is equal to the complement of that number plus 1.

Decimal         Binary         		  2's complement 
   0            00000000           -(11111111+1) = -00000000 = -0(decimal)
   1            00000001           -(11111110+1) = -11111111 = -256(decimal)
   12           00001100           -(11110011+1) = -11110100 = -244(decimal)
   220          11011100           -(00100011+1) = -00100100 = -36(decimal)

Note: Overflow is ignored while computing 2's complement.

The bitwise complement of 35 is 220 (in decimal). The 2's complement of 220 is -36. Hence, the output is -36 instead of 220.

Bitwise complement of any number N is -(N+1). Here's how:

bitwise complement of N = ~N (represented in 2's complement form)
2'complement of ~N= -(~(~N)+1) = -(N+1)

#include <stdio.h>
int main()
{
    printf("Output = %d\n",~35);
    printf("Output = %d\n",~-12);
    return 0;
}
Output

Output = -36
Output = 11




*/


//--Dihan:

#include<stdio.h>

//Prints the bitpattern of char,int,long,long long ,unsigned
#define BitPattern(n) {\
	unsigned long long mask=1LL<<(sizeof((n))*8-1),i;\
	for(i=0;i<sizeof((n))*8;i++,mask>>=1) printf("%d",(n)&mask?1:0); puts("");\
}

int TwoS(int a)//Binary input dile 2's complement banaye dibey..
{
	int A=a,B=1,C,S,i;

	for(S=0,C=0,i=1;;i*=10)
	{
		S+=i*(!(A%10)^(B%10)^C);
		C=(!(A%10)&(B%10))|(!(A%10)&C)|((B%10)&C);
		A/=10;
		B/=10;
		if(!A&!B) break;
	}
	return S;
}
int main()
{
	int a=-1;
	int b=1<<31;
	BitPattern(b>>1);
	printf("%u",b);

	printf("%d\n",(~1));

}