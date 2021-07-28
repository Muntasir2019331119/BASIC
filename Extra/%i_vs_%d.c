/*A format specifier is a sequence formed by an initial percentage sign (%) indicates a format specifier,
 which is used to specify the type and format of the data to be retrieved from the stream and stored into the locations pointed by the additional arguments.
 In short it tell us which type of data to store and which type of data to print
 */
//%d specifies signed decimal integer but %i specifies integer
//%d and %i behave similar with the printf.

//%d and %i behaviour is different in scanf
//%d assumes base as 10 but %i auto detects the base..

//%d takes integer value as signed decimal integer i.e.
//it takes negative values along with positive values but values should be in decimal otherwise it will print garbage value.


//%i takes integer value as integer value with decimal, hexadecimal or octal type.
//To enter a value in hexadecimal format – value should be provided by preceding “0x” and value in octal format – value should be provided by preceding “0”.

#include<stdio.h>
int main()
{

    int a=12,b,c,d;
    printf("%d\n",a);
    printf("%i\n",a);//both will give the output 12
    //but if we take the input using scanf
    scanf("%i",&b);//15
    scanf("%d",&c);//012
    scanf("%i",&d);//0x13
    printf("b=%d,c=%d,d=%d\n",b,c,d);//15 8 13
    printf("b=%i,c=%i,d=%i\n",b,c,d);//15 8 13
    int e;
    scanf("%i",&e);// 010 will treat as a octal number .Decimal Value = 8
    printf("%d\n",e);//8
    scanf("%d",&e);// 010 will treat as a decimal number .Decimal Value = 10
    printf("%d",e);//10 
}

