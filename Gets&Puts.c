#include<stdio.h>
int main()
{	char m, n[10], o[1];
	scanf("%c%1s%1s", &m, &n, &o); //a b c
	printf("%c %c %c", m, n[0], o[0]);
}