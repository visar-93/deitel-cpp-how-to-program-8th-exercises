#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial(unsigned long);

int main()
{
	//calculate the factorials of 0 through 10
	/*for (int counter = 1; counter <= 10; ++counter)
		cout << setw(2) << counter << "! = " << counter << " * " << counter-1 << "! = "
		<<factorial(counter) << endl;*/
	int x = 10;
	factorial(x);
}

int cnt = 0;

//recursive definition of function factorial
unsigned long factorial(unsigned long number)
{
	cout << setw(2 + cnt) << number << " * " << (number - 1) << "!" << "\n";
	cnt += 2;

	if (number <= 1)
		return 1;
	else // recursion step
		return number * factorial(number - 1);
}
