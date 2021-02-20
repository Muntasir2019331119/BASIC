#include<bits/stdc++.h>
using namespace std;
/*
The Fibonacci numbers are the numbers in the following integer sequence.
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..

In mathematical terms, the sequence Fn of Fibonacci numbers is defined by the recurrence relation

Fn = Fn-1 + Fn-2

with seed values

F0 = 0 and F1 = 1.
*/
recursive way:
int fibo(int n)
{
if(n<=1)
	return n;
else
	return fibo(n-1)+fibo(n-2);
}
/*
Time Complexity: T(n) = T(n-1) + T(n-2) which is exponential.

We can observe that this implementation does a lot of repeated work (see the following recursion tree). So this is a bad implementation for nth Fibonacci number.

                          fib(5)
                     /                \
               fib(4)                fib(3)
             /        \              /       \
         fib(3)      fib(2)         fib(2)   fib(1)
        /    \       /    \        /      \
  fib(2)   fib(1)  fib(1) fib(0) fib(1) fib(0)
  /     \
fib(1) fib(0)

*/


//normal way
int fibo(int n)
{
	int a = 0, b = 1, c;
	cout << a << "," << b << ",";
	if (n == 0)
		return a;
	else
	{
		for (int i = 2; i <= n; i++)
		{
			c = a + b;
			a = b;
			b = c;
			cout << c << ",\n"[i == n];
		}
		return b;
	}

}
int main()
{
	int n;
	cin >> n;
	cout << fibo(n) << endl;
	//getchar();
	return 0;
}