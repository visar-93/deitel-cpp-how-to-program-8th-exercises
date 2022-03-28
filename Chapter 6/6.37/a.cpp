#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int fibonacci(int n);

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;

   cout << "Fibonacci series are: \n"
	    << num << "    " << fibonacci(num) << endl;
}

int fibonacci(int n)
{
	if ((n == 0) || (n == 1))
		return n;
	else
		return fibonacci(n - 1) + fibonacci(n - 2); 
}
