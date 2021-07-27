/*

The process in which a function calls itself directly or indirectly is called recursion and 
the corresponding function is called as recursive function. 
Using recursive algorithm, certain problems can be solved quite easily.


Recursion:
1. Call itself
2. Base case
3. Towards Base case


How a particular problem is solved using recursion? 
The idea is to represent a problem in terms of one or more smaller problems,
 and add one or more base conditions that stop the recursion.
 For example, we compute factorial n if we know factorial of (n-1).
  The base case for factorial would be n = 0. We return 1 when n = 0. 


 Why Stack Overflow error occurs in recursion?
If the base case is not reached or not defined, then the stack overflow problem may arise Let us take an example to understand this.

int fact(int n)
{
    // wrong base case (it may cause
    // stack overflow).
    if (n == 100) 
        return 1;

    else
        return n*fact(n-1);
}


A function fun is called direct recursive if it calls the same function fun. A function fun is called 
indirect recursive if it calls another function say fun_new and fun_new calls fun directly or indirectly.


void Recursion(int n)
{
	if(n==0) return;//base case

	printf("%d\n",n);

	// Recursion(n--); // This will lead to infinity loop .
	Recursion(n-1);  
}

void Iteration()
{
	iny i,j,k,l;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			
		}
	}
}
int main()
{
	Recursion(10);




*/
