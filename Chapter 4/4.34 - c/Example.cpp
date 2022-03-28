#include "stdafx.h"
#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
	double e=1.00;
	int i = 1;
	double x = 1.00;
	int n=50;
	int p;

	cout << "Enter the number which you want to calculate e value \n";
	cin >> p;

	while (i <= n)
	{
		x = (x*p) / i; // 1!x2 = 2!, 2!x3 = 3!,  so there we put 1! x 3 = 3!, therefore it means that 1 /3
		e = e + x;
		i++;
	}
	cout << e << endl;
}
