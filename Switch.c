#include<stdio.h>
int main()
{
    int i,d=10;
    scanf("%d",&i);
    switch(i) {
        i+=2;//this line will not be execute..
        //nothing execute in switch without "case"
        case 1: i++;puts("Only one?");d++;printf("%d %i",d,i);break;//only one?11 2//but senond case will not execute..ekbar jeta fulfill korey dhukche just oitai execute hobey..
        //we have to use break.otherwise it will also execute the next case..
        //i++ will not execute.switch a dhukar shomoy jeta thakbey shetai kaj korbey khali..
        case 2: puts("I want more"); break;
        case 3: //this means case 3 and 4 er jonno same jinish...
        case 4: puts("OK"); break;
        default: puts("Don't care");//for default
}
}
