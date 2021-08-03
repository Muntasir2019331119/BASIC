A structure is a user-defined data type in C/C++. A structure creates a data type that can be used to group items of possibly different types into a single type.

How to pass structure as an argument to the functions?

Passing of structure to the function can be done in two ways:

By passing all the elements to the function individually.
By passing the entire structure to the function.


Examples 1: Using Call By Value Method

// C++ program to pass structure as an argument
// to the functions using Call By Value Method
  
#include <bits/stdc++.h>
using namespace std;
  
struct Distance {
    int kilometer;
    int meter;
};
  
// accepts distance as its parameters
void TotalDistance(Distance d1, Distance d2)
{
    // creating a new instance of the structure
    Distance d;
  
    // assigning value to new instance of structure
    d.kilometer = d1.kilometer
                  + d2.kilometer
                  + (d1.meter + d2.meter)
                        / 1000;
  
    d.meter = (d1.meter + d2.meter) % 1000;
  
    cout << "Total distance:";
    cout << "kilometer: "
         << d.kilometer << endl;
  
    cout << "meter: " << d.meter
         << endl;
}
  
// Function that initialises the value
// and calls TotalDistance function
void initializeFunction()
{
    // creating two instances of Distance
    Distance Distance1, Distance2;
  
    // assigning values to structure elements
    Distance1.kilometer = 10;
    Distance1.meter = 455;
  
    Distance2.kilometer = 9;
    Distance2.meter = 745;
  
    // calling function with (structure)
    // distance as parameters
    TotalDistance(Distance1, Distance2);
}
  
// Driver code0
int main()
{
  
    // Calling function to do required task
    initializeFunction();
  
    return 0;
}
Output:
Total distance:kilometer: 20
meter: 200







Examples 2: Using Call By Reference Method


// C++ program to pass structure as an argument
// to the functions using Call By Reference Method
  
#include <bits/stdc++.h>
using namespace std;
  
struct number {
    int n;
};
  
// Accepts structure as an argument
// using call by reference method
void increment(number& n2)
{
    n2.n++;
}
  
void initializeFunction()
{
    number n1;
  
    // assigning value to n
    n1.n = 10;
  
    cout << " number before calling "
         << "increment function:"
         << n1.n << endl;
  
    // calling increment function
    increment(n1);
  
    cout << "number after calling"
         << " increment function:" << n1.n;
}
  
// Driver code
int main()
{
    // Calling function to do required task
    initializeFunction();
  
    return 0;
}
Output:
number before calling increment function:10
number after calling increment function:11




//##----------------------------Return a structure from the functions----------------------------------##

To return a structure from a function the return type should be a structure only.

// C++ program to return a structure from
// a function using Call By Value Method

#include <iostream>
#include <stdlib.h>

using namespace std;

// required structure
struct Employee {
	int Id;
	string Name;
};

// return type of the function is structure
Employee data(Employee E)
{

	// Assigning the values to elements
	E.Id = 45;
	E.Name = "aman";

	// returning structure
	return (E);
}

// Driver code
int main()
{

	// creating object of Employee
	Employee Emp;

	// calling function data to assign value
	Emp = data(Emp);

	// display the output
	cout << "Employee Id: " << Emp.Id;
	cout << "\nEmployee Name: " << Emp.Name;

	return 0;
}
