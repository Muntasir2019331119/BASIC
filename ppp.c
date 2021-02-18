#include<stdio.h>
#include<math.h>
int main()
{
// 	int a,b,c='k';
// 	scanf("%c%*c%c",&a,&b,&c);//a b
// 	printf("%c\n",b);
// 	printf("%c%c%c",a,b,c);
// 
int a=1,b,c,d=9;
scanf("%2d%*3d%1d%4d",&a,&b,&c,&d);//12324322342
printf("%d %d %d %d\n",a,b,c,d);//12 3 2234 9

char s[]="Myname is Muntasir mamun Nahid";
printf("%-7.5s\n",s);//Mynam'space''space' 
printf("%7.5s\n",s);//' '' 'Mynam

int x=sqrt(24.6);
printf("%.2f\n",(float)x);
}
