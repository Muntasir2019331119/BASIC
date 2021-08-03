#include<stdio.h>
int main()
{
// Switch statement in C tests the value of a variable and compares it with multiple cases. Once the case match is found, 
 //a block of statements associated with that particular case is executed.

// switch( expression )
// {
//       case Label1:  Statement-Block1;
//                     break;
//       case Label2:  Statement-Block2;
//                     break;
//       default:  Statement-Block2;
//                 break;
// }


// If we don't use break after statement , all statemants after the matching statements are executed .
    int main()
    {
//##--------------------------------------------------------------------------##
        int a = 0;
        switch (a)  // Integer(int,char,long,short) must be passed to switch    // float and pointers are not allowed
        {
        case 0: puts("0");          // If there is a match, the corresponding statements after the matching label are executed until break .
            break;
        case 1: puts("1");
            break;

        // case a:      // Invalid  // Case labels must be integer constant


        // case 1:
        // case 2-1:     // Invalid  // Duplicate case values are not allowed.

        default: puts("error");     // default statement is optional
            break;
        }

        // Output without break : 0
        //                        1
        //                        error

        // Output with break : 0

//##------------------------------------------------------------------------------##


        int i, d = 10;
        scanf("%d", &i);
        switch (i) {
            i += 2; //this line will not be execute..
        //nothing execute in switch without "case"
        case 1: i++; puts("Only one?"); d++; printf("%d %i", d, i); break; //only one?11 2
        //but senond case will not execute..ekbar jeta fulfill korey dhukche just oitai execute hobey..
        //we have to use break.otherwise it will also execute the next case..
        //i++ will not execute.switch a dhukar shomoy jeta thakbey shetai kaj korbey khali..
        case 2: puts("I want more"); break;
        case 3: //this means case 3 and 4 er jonno same jinish...
        case 4: puts("OK"); break;
        default: puts("Don't care");//for default
        }


//##-----------------------------------------------------------------------------##


        int b = 5;

        switch ((int)(a > b))   // boolean should be converted to integer
        {
            a = a + b; // The statements written above cases are never executed

        default : puts("Equal");      // The default block can be placed anywhere
            break;
        case 1: puts("a is bigger.");
            break;
        case 0: puts("b is bigger.");
        }



//##-----------------------------------------------------------------------------##
        // Nested Switch
        char ch1 = 'A', ch2 = 'B';
        switch (ch1)
        {
        case 'A':
            printf("This A is part of outer switch\n" );
            switch (ch2)
            {
            case 'A':
                printf("This A is part of inner switch\n" );
                break;
            case 'B':
                printf("This B is part of inner switch\n" );
                break;
            }
            break;
        case 'B': printf("This B is part of outer switch\n" );
            break;
        }


//##----------------------------------------------------------------------------##




    }
