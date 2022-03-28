#include "stdafx.h"
#include <iostream>
#include<iomanip>
using namespace std;

int greatestComonDivisor(int num1,int num2);

int main()
{
	int num1, num2;
	cout << "Enter number 1 and number 2: \n";
	cin >> num1;
	cin >> num2;
	cout << "The greatest Comon Divisor is: " << greatestComonDivisor(num1,num2) << endl;
	cout << endl;
};

int greatestComonDivisor(int num1, int num2)
{
	int i;
	int j=0;

	for (i = 1; (i <= num1 || i <=num2); i++)
	{
		if (num1%i == 0 && num2%i == 0)
		{
			j = i;
		}
    }
	return j;
}
