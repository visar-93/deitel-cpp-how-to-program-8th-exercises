#include "stdafx.h"
#include <iostream>
#include<iomanip>
using namespace std;

double findMinimum(double x, double y, double z);

int main()
{
	double num1, num2, num3;

	cout << "Enter 3 numbers: \n";
	cin >> num1 >> num2 >> num3;
	cout << "\nThe smallest number is: " << findMinimum(num1, num2, num3) << endl;
}
double findMinimum(double x, double y, double z)
{
	double smallestValue;

	smallestValue = x;

	if (smallestValue > y)
		smallestValue = y;

	if (smallestValue > z)
		smallestValue = z;

	return smallestValue;
}

//PERFECT NUMBER FINDER
// for (div = 1, i = 0; div <= number; div++)
// 		{
// 			prod = number / div;
// 			if (prod == 1)
// 			{
// 				break;
// 			}
// 			if (number%div == 0)
// 			{
// 				a[i] = div;
// 				i++;
// 			}
// 			else
// 			{
// 				break;
// 			}
// 			sum = sum + div;
// 		}

// 		cout << sum << endl;
// 		if (sum != number)
// 		{
// 			cout << "Number " << number << " is not perfect\n";
// 		}
// 		else
// 		{
// 			cout << "Number " << number << " is perfect\n";
// 			for (int i = 0; i < 1000; i++)
// 			{
// 				if (a[i] <= 0)
// 					break;
// 				cout << a[i] << " ";
// 			}
// 			cout << "number is: " << sum << endl;
// 		}
