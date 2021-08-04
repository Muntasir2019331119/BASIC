#include<stdio.h>

// A bit-field must be a member of a structure or union.

// Bitfield  :  Allocate memory to variables as our wish .


// type_name variable_name: width;
// Type of bitfield can't be floating type.
// Width of bitfield cannot exceed its type . width<=sizeof(type)
struct BitField1{
	unsigned a:4;   // size of a is 4 Bit
}Bit1;


// Variable name is optional . But we cannot access the field without name
// type_name : width;
struct BitField2{
	int:1;
	signed a:4;   // size of a is 4 Bit
}Bit2;

// sizeof() can't be applied to bitfields
// We can't take input to bitfields from user . But We can assign to bitfields .
// Can not take address of Bit-Field


// It is valid to mix normal structure members with bit-fields.


// Bit-fields cannot be arrayed.



//

//normal representation:
/*struct BirthDate{
 unsigned int d,m,y;
};*/
//if we want to optimize the storage using bitfield:

struct Birthdate
{
    // d has value between 1 and 31, so 5 bits are sufficient.
    unsigned int d :5;
// m has value between 1 and 12, so 4 bits are sufficient.
    unsigned int m :4;
    unsigned int y;

};
struct test{
unsigned int  a:1,b:2,c:3;
};

int main()
{
    printf("Size of date is %lu bytes\n", sizeof(struct Birthdate));//which is 8 bytes; but if we use normal representation it will take 12 bytes
	//y=4 byte,d=5bit,m=4 bit..so sum=4byte+(5+4bit)=5 byte 1 bit..so it crossed 4 byte..in structure size is the multiple of highest size..it crossed 4..so size is 8..if it crossed 8..then the size will be 12..
    struct Birthdate Nahid = { 31, 12, 2000};
    printf("Birth Date is %d/%d/%d", Nahid.d, Nahid.m, Nahid.y);

//But it has some problem....
//The output comes out to be negative if the input is 31/12/2000 and we use only int instead of unsigned int(output is = -1/-4/2000).
 //What happened behind is that the value 31 was stored in 5 bit signed integer which is equal to 11111.
 //The MSB is a 1, so it’s a negative number and you need to calculate the 2’s complement of the binary number to get its actual value which is what is done internally.
  //By calculating 2’s complement you will arrive at the value 00001 which is equivalent to decimal number 1 and since it was a negative number you get a -1.
 //A similar thing happens to 12 in which case you get 4-bit representation as 1100 which on calculating 2’s complement you get the value of -4.


struct test x;
int i;

	for(i=0;i<8;i++)
	{
		x.a=x.b=x.c=i;
		printf("%d %d %d\n",x.a,x.b,x.c);//when i=2..tokhn a er joonno output ashbey 0..karon a holo 1 bit er..(2=10)tai 0 ashbe..bakigular khetrew same..
	}
// output:
// 0 0 0
// 1 1 1
// 0 2 2
// 1 3 3
// 0 0 4
// 1 1 5
// 0 2 6
// 1 3 7
	puts("-----");
	for(i=0;i<8;i++)
	{
		x.c=x.b=x.a=i;//in bitfield (x.a=x.b=x.c=i)!=(x.c=x.b=x.a)
		//assignment right theke left e hoy..tai i=5 jokhn x.a=1 x.a=x.b=x.c=1 hoye jay tokhn...
		printf("%d %d %d\n",x.a,x.b,x.c);
	}
// output:
// 0 0 0
// 1 1 1
// 0 0 0
// 1 1 1
// 0 0 0
// 1 1 1
// 0 0 0
// 1 1 1

}
