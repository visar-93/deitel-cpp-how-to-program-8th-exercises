#include"stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	int n;
	int factor = 1;

	cout << "Please enter the number (different than 0): \n";
	cin >> n;
	
	if (n != 0)
	{
		while (i <= n - 1)
		{
			factor = factor * (n - i);
			i++;
		}
		cout << factor << endl;
	}
	else
	{
		cout << "Factorial of 0 is equal to 0\n";
	}	
}
