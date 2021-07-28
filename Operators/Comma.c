/*
1) Comma as an operator: 
The comma operator (represented by the token, ) is a binary operator that evaluates its first operand and discards the result, it then evaluates the second operand
and returns this value (and type). The comma operator has the lowest precedence of any C operator, and acts as a sequence point. 
 
//2nd value ta assigned hoye thakey..
int i = (5, 10); // 10 is assigned to i
int j = (f1(), f2()); /* f1() is called (evaluated) first followed by f2().
                      The returned value of f2() is assigned to j 




2) Comma as a separator: 
Comma acts as a separator when used with function calls and definitions, function like macros, variable declarations, enum declarations, and similar constructs. 
 
int a = 1, b = 2;
void fun(x, y);


int x = 10;
    int y = (x++, ++x);
    printf("%d", y);//12
##------------------------------------------------------------##
	int x = 10, y;

	// The following is equivalent
	// to y = x + 2 and x += 3,
	// with two printings
	y = (x++,
		printf("x = %d\n", x),
		++x,
		printf("x = %d\n", x),
		x++);

	// Note that last expression is evaluated
	// but side effect is not updated to y
	printf("y = %d\n", y);
	printf("x = %d\n", x);

x = 11
x = 12
y = 12
x = 13

##--------------------------------------------------------##
 int a = 5;
 
    a = 2, 3, 4;
    printf("%d",a);//2

    // Comma in place of semicolon

	// Can't use Comma before any keyword


*/
