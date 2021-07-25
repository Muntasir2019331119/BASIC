/*
 //1 Byte=8 Bit


Integer Types:
--------------
The following table provides the details of standard integer types with their storage sizes and value ranges −

Type				Storage size	Value range

char				1 byte			-128 to 127 or 0 to 255

unsigned char		1 byte			0 to 255

signed char			1 byte			-128 to 127

int					2 or 4 bytes	-32,768 to 32,767 or -2,147,483,648 to 2,147,483,647

unsigned int		2 or 4 bytes	0 to 65,535 or 0 to 4,294,967,295

short				2 bytes			-32,768 to 32,767

unsigned short		2 bytes			0 to 65,535

long				8 bytes or (4bytes for 32 bit OS)	-9223372036854775808 to 9223372036854775807

unsigned long		8 bytes			0 to 18446744073709551615



Floating-Point Types:
---------------------
The following table provide the details of standard floating-point types with storage sizes and value ranges and their precision −

Type				Storage size		Value range				Precision

float				4 byte(1 word)		1.2E-38 to 3.4E+38		6 decimal places

double				8 byte(1 word)		2.3E-308 to 1.7E+308	15 decimal places

long double			10 byte				3.4E-4932 to 1.1E+4932	19 decimal places

//“extra-large” double-precision data type requiring more than two words of memory.

However, the meaning of these data types will vary from one C compiler to another.

//There are two extra data type known as "void ","enum"..These will be discussed in another commit..


*/
int main()
{
	char a;

	unsigned char b;
	char unsigned c;

	short d;
	short int e;
	int short f;

	unsigned short g;
	short unsigned h;
	unsigned short int i;
	short unsigned int j;
	int short unsigned k;
	short int unsigned l;
	unsigned int short m;
	int unsigned short n;

	int o;
	signed p;

	unsigned int q;
	int unsigned r;

	long s;
	long int t;
	int long u;

	unsigned long v;
	long unsigned w;
	unsigned long int x;
	long unsigned int y;
	int long unsigned z;
	long int unsigned A;
	unsigned int long B;
	int unsigned long C;

	long long D;//8
	long long int E;//8
	long int long F;//8 byte
	int long long G;//8

	unsigned long long H;
	long unsigned long I;
	unsigned long long J;
	unsigned long long int K;
	long unsigned long int L;
	long long unsigned int M;//8
	long long int unsigned N;
	unsigned long int long O;
	unsigned int long long P;
	int unsigned long long Q;
	long unsigned int long R;
	long int unsigned long S;
	int long unsigned long T;
	int long long unsigned U;	
	long int long unsigned V;

	float W;

	double X;
	
	long double Y;
	double long Z;

	unsigned char AB=-1;
	printf("%d",AB);
}
