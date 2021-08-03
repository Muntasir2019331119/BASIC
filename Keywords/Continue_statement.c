/*
Continue is also a loop control statement just like the break statement.
continue statement is opposite to that of break statement, instead of terminating the
loop, it forces to execute the next iteration of the loop.
As the name suggest the continue statement forces the loop to continue or execute the next iteration.
When the continue statement is executed in the loop, the code inside the loop 
following the continue statement will be skipped and next iteration of the loop will
begin.

Example:
*/
#include <stdio.h>
  
int main() {
    // loop from 1 to 10 
    for (int i = 1; i <= 10; i++) { 
  
        // If i is equals to 6, 
        // continue to next iteration 
        // without printing 
        if (i == 6) 
            continue; 
  
        else
            // otherwise print the value of i 
            printf("%d ", i); 
    } 
  
    return 0; 
}

Output:
1 2 3 4 5 7 8 9 10 

