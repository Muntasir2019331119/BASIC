#include<stdio.h>
#include<math.h>
//-----------------------------------BIT PATTERN-------------------------------------------------

//if we define it then it Prints the bitpattern of char,int,long,long long ,unsigned..we can print them individually by making a function..

void BitPattern(n)
{
    unsigned long long nbit=8*sizeof(n);//1 byte=8 bit..whole bit number..

    unsigned long long mask=1LL<<(nbit-1),i;  //2^(n-1) diye left shift korey 1 k leftmost digit korey felchi..
    for(i=0; i<nbit; i++)
    {
        printf("%d",(n)&mask?1:0);


        mask>>=1;//shift mask 1 position to the right
        if(i%4==3)printf(" "); //blank spaces after every 4 digits

    }
    puts("");//endl after every full output

}
//-----------------------------------------------------------------------------------------------------------------/

void PrintBit(unsigned n)
{
    int i;
    unsigned nbit=8*sizeof(n);
    unsigned mask=1<<(nbit-1);
    for(i=0; i<nbit; i++)
    {
        printf("%d",n&mask?1:0);
        //printf("%d",n&&mask?1:0); this line will make it 1's compliment;
        //printf("%d",!!(n&mask));
        if(i%4==3)printf(" ");
        n<<=1;
    }
    puts("");
}
void PrintBit2(unsigned n)
{
    int Binary=0;
    unsigned mask=1;
    while(n)
    {
        Binary=Binary*10+!!(n&mask);
        n>>=1;
    }
    printf("%d\n",Binary);
}
void RecursivePrintBit(unsigned n)
{
    unsigned nbits=8*sizeof(n);
    static int i=0;
    if( i++==nbits)
    {
        puts("");
        return;
    }
    unsigned mask=1<<31;
    printf("%d",!!(n&mask));
    RecursivePrintBit(n<<1);
}
void RecursivePrintBit2(unsigned n)
{
    static int Binary=0;
    if(!n)
    {
        printf("%d\n",Binary);
        return;
    }
    unsigned mask=1;
    Binary=Binary*10+!!(n&mask);
    RecursivePrintBit2(n>>1);
}
void ReverseBit(unsigned n)
{
    PrintBit(n);
    unsigned mask1=1,mask2=1<<31;
    while(mask1<mask2)
    {
        if(!!(mask1&n)!=!!(mask2&n))
        {
            n=mask1^n^mask2;
        }
        mask1<<=1;
        mask2>>=1;
    }
    PrintBit(n);
}
//#---------------------------------Swap without temp-------------------------------------------##
void swap2(int *a,int *b)
{
    // *a=*a^*b;
    // *b=*a^*b;
    // *a=*a^*b;

    // *a^=*b;
    // *b^=*a;
    // *a^=*b;
    *a^=*b^=*a^=*b;
}
//#------------------------------------------------------------------------##

int main()
{
    int n,m;
//-----------------------------------------------basic info:---------------------------------------------------//
    
    /*if (n&1)puts("Odd\n");if(n%2)puts("Odd\n")

      //2^n check:
      if (n&(n-1))printf("no");
           else printf("yes");

      //(2^n)-1 check:
      if(n&(n+1))printf("no");
      else printf("Yes");

      // 1<<n =2^n;
      //x<<n=x*(2^n);
       //x>>n=x/(2^n);
       // x&(2^n-1)=x%(2^n);


//---------------------------------------------------------------------------------------------//



    //Left Shift operator:
    /*<< (left shift) Takes two numbers, left shifts the bits of the first operand, the second operand decides the number of places to shift.
    Or in other words left shifting an integer “x” with an integer “y” (x<<y) is equivalent to "multiplying" x with 2^y (2 raise to power y).


    //  x<<n    // n<width of data type(for int 32)
    //  x = 10110100011
    //  x<<5 = 100011----- //the empty space will always(signed/unsigned) fill up by 0
    //       = 1000110000

    */
//Right Shift Operator:
    /*
    >> (right shift) Takes two numbers, right shifts the bits of the first operand, the second operand decides the number of places to shift.
    Similarly right shifting (x>>y) is equivalent to "dividing" x with 2^y.

    // x>>n      // n<width of data type(for int 32)
    //   x = 10110100011
    //x>>5 = -----101101 //the empty space will fill up by 0 when x is unsigned
    // If x is signed -> the empty space will fill up by 0 when the sign bit is 0
    //                -> the empty space will fill up by 1 when the sign bit is 1

    //unsigned x = 10110100011
    //      x>>5 = 00000101101

    //     int x = 00110100011
    //      x>>5 = 00000001101

    //     int x = 10110100011//signed bit=1;
    //      x>>5 = 11111101101
    */
    unsigned a=5,b=9;//a=00000101,b=00001001;
    printf("5<<1=%d\n",a<<1);//=00001010=10;
    printf("9<<1=%d\n",b<<1);
    printf("5>>1=%d\n",a>>1);
    printf("9>>1=%d\n",b>>1);
    printf("1<<30=%d\n",1<<30);
 
    //#-------------------------------------------WARNING------------------------------------------------------------##
    
//1<<31 dile negative ashbe..karon tokhn sign bit change hoye jay...
    /*
    1)The left shift and right shift operators should not be used for negative numbers. The result of is undefined behaviour if any of the operands is a negative number.
    For example results of both -1 << 1 and 1 << -1 is undefined.

    2)If the number is shifted more than the size of integer, the behaviour is undefined. For example, 1 << 33 is undefined if integers are stored using 32 bits.
     For bit shift of larger values 1ULL<<62  ULL is used for Unsigned Long Long which is defined using 64 bits which can store large values.

    3)The left-shift by 1 and right-shift by 1 are equivalent to the product of first term and 2 to the power given element(1<<3 = 1*pow(2,3)) and
     division of first term and second term raised to power 2 (1>>3 = 1/pow(2,3)) respectively.
    As mentioned in point 1, it works only if numbers are positive.
    */
    
    
    
//pow function can be used in bit pattern:like
    int i = 3;
    printf("pow(2, %d) = %d\n", i, 1 << i);
    i = 4;
    printf("pow(2, %d) = %d\n", i, 1 << i);
//
    float f=5.4;
    int* z=(int*)&f;
    int exp=*z&(unsigned char)~0 << 23;
//BitPattern(exp);
    BitPattern('abcd');
    BitPattern(a);
    BitPattern(1<<30);
    BitPattern(1<<31);
    PrintBit(1);
    PrintBit2(4);
    RecursivePrintBit(2);
    RecursivePrintBit2(32);
    ReverseBit(2);
//Masking:
    /*
    Masking is a process in which a given bit pattern is transformed into another bit pattern by means of a logical bitwise operation.
    The original bit pattern is one of the operands in the bitwise operation.
    The second operand, called the mask, is a specially selected bit pattern that brings about the desired transformation*/



}
