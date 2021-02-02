#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// void Stdin_Buffer()			// Prints the characters left in current buffer
// {
// 		printf("Characters left in stdin : |");
// 		char STDIN[10];
// 		int Length=0;
// 		while(1)
// 		{
// 			char f=getc(stdin);
// 			if(f=='\n')
// 			{
// 				printf("\\n|%c",f);
// 				STDIN[Length++]=f;
// 				break;
// 			}
// 			printf("%c",f);
// 			STDIN[Length++]=f;
// 		}

// 		int i;
// 		for(i=Length-1;i>-1;i--)
// 			ungetc(STDIN[i],stdin);
// }
int main()
{
//The C library function int scanf(const char *format, ...) reads formatted input from stdin.

//format − This is the C string that contains one or more of the following items −
//   Whitespace character, Non-whitespace character and Format specifiers. A format specifier will be like       [=%[*][width][modifiers]type=]

//1) *  --->This is an optional starting asterisk indicates that the data is to be read from the stream but ignored,i.e. it is not stored in the corresponding argument.
//2) width --->This specifies the maximum number of characters to be read in the current reading operation.

//  One white-space character in format-string matches any combination of white-space characters in the input.

// f the function successfully reads the data, the number of items read is returned

	int c = 5, a = 10;
	char b = 'a', e[10];
//%n
// printf("Muntasir Mamun %n Nahid",&d);
// printf("%d\n",d);//it will print Muntasir Mamaun Nahid15 ..because
//before %n there are 15 characters..

	//scanf("%d %d %n", &a, &c, &d);
	//printf("%d %d %d", a, c, d); //it will give garbage value for d..

//printf("Values before scanf : a=%d b='%c' c=%d\n",a,b,c);

	int d = scanf("%d%c%d", &a, &b, &c); // Input - 12 x 13 --> a=12 b=' ' c= Unchanged
	// 12 will be stored in a . As we have entered a space after first integer , the space will be stored in b . Then scanf will look for a integer .
	//But it will find 'x' . 'x' will confilct with %d . So scanf() will end . 'x 13' is not read . So it is left in stdin
	printf("Values after scanf : a=%d b='%c' c=%d\n", a, b, c); //a=12 b=' ' c=5

	printf("Numbers of items read = %d\n", d);
//to see what left in stdin
//Stdin_Buffer();
// gets(e);		// flushes the '\n' entered after the string  // Can't limit the input size

//To Take the whole line as input:
//scanf("\n%9[^\n]",e);scanf("%*[^\n]"),getcahr();
// Can limit input string size .
// ignores '\n' at the start of input buffer
// flushes everything left in the stdin after taking limited input .

// char e[100];
// 	scanf("\n%9[^\n]",e);//Muntasi Mmaun Nahid
// 	printf("%s",e);//Muntasi M  ....means first 9 character will be counted..

//scanf("%[^' ']",e)

//Takes input untill whitespaces

//scanf("%[^' ','\n']",e);
//Takes input untill whitespaces,newline
// Doesn't ignore '\n' at the start of input buffer

// scanf("\n%[^' ','\n']",e);
// Same as %s

// scanf("%s",e);
// takes input until whitespace , new line,EOF
// ignores '\n' at the start of input buffer



//	Stdin_Buffer();
	// If a character in stdin conflicts with format-string, scanf() ends.
	// The conflicting character is left in stdin as if it had not been read.


	int x, y, z;
	char s[10], m, n, o;
	float l;
// scanf("%3d %3d",&x,&y);//input =123456789
// printf("%d %d\n",x,y);//123 456

// scanf("%3d %3d %3d",&x,&y,&z);//1234 567 890
// printf("%d %d %d",x,y,z);//123 4 567

// scanf("%s %*d %d",s,&x,&y);//nahid 10 15
// printf("%s=%d %d",s,x,y);//nahid=15 garbage ..skips the * value..
// scanf("%c%c%c",&m,&n,&o);//a b c
// printf("%c %c %c",m,n,o);//a space b

// scanf("%c%1s%1s",&m,&n,&o);//a b c
// printf("%c %c %c",m,n,o);//a b c ..prob ei line a.

// scanf("%d a %d",&x,&y);//1 2
// printf("%d %d",x,y);//1 garbage

// scanf("%d a %f",&x,&l);//1 2.43
// printf("%d %f",x,l);//1 garbage

// scanf("%d a %f",&x,&l);//1 a 2.0
// printf("%d %f",x,l);//1 2.000000 //a er jaygay onno kichu dile 1 garbage 2.000000 garbage..






}