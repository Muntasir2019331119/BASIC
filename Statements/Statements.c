/*
A statement is a command given to the computer that instructs the computer to take a specific action, such as display to the screen, or collect input. 
A computer program is made up of a series of statements.


Contents:
1)	Compound Statements
2)	Expression Statements
3)  Control Statements
    i)Selection Statements
    ii)Iteration Statements
    iii)Jump Statements
4)Labeled Statements

#--------------------
Labeled Statements:
A statement can be preceded by a label. Three types of labels exist in C.
A simple identifier followed by a colon (:) is a label. Usually, this label is the target of a goto statement.
Within "switch" statements, "case" and "default" labeled statements exist.
A statement of the form case constant-expression : statement

##------------------

Compound Statements:
A compound statement is the way C groups multiple statements into a single statement. It consists of multiple statements and declarations within braces (i.e. { and }).

##-------------------

Expression Statements:
An expression statement consists of an optional expression followed by a semicolon (;). If the expression is present, the statement may have a value. 
If no expression is present, the statement is often called the null statement.
##----------------

Selection Statements
Three types of selection statements exist in C:

1)if ( expression ) statement

In this type of if-statement, the sub-statement will only be executed iff the expression is non-zero.

2)if ( expression ) statement else statement


3)Switch statements are also a type of selection statement. They have the format

switch ( expression ) statement
##--------------------

Iteration Statements:
C has three kinds of iteration statements. The first is a while-statement with the form

while ( expression ) statement

The substatement of a while runs repeatedly as long as the control expression evaluates to non-zero at the beginning of each iteration.
If the control expression evaluates to zero the first time through, the substatement may not run at all.

The second is a do-while statement of the form

do statement while ( expression ) ;

This is similar to a while loop, except that the controlling expression is evaluated at the end of the loop instead of the beginning 
and consequently the sub-statement must execute at least once.

The third type of iteration statement is the for-statement. 

for ( expressionopt ; expressionopt ; expressionopt ) statement

##-------------------------------

Jump Statements:

C has four types of jump statements. The first, the goto statement, is used sparingly and has the form

goto identifier ;

This statement transfers control flow to the statement labeled with the given identifier. The statement must be within the same function as the goto.

The second, the break statement, with the form

break ;

is used within iteration statements and switch statements to pass control flow to the statement following the while, do-while, for, or switch.

The third, the continue statement, with the form

continue ;

is used within the substatement of iteration statements to transfer control flow to the place just before the end of the substatement. 
In for statements the iteration expression  will then be executed before the controlling expression is evaluated.

The fourth type of jump statement is the return statement with the form

return expression ;

This statement returns from the function. If the function return type is void, the function may not return a value; otherwise, 
the expression represents the value to be returned.
##---------------------------
*/
