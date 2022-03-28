#include "stdafx.h"
#include <iostream>
using namespace std;

template <typename T>
T maximum(T value1, T value2)
{
	T maximum = value1;
	if (value2 > maximum)
		maximum = value2;

	return maximum;
}

int main()
{
	cout << "Enter two int type numbers: \n";
	int a, b;
	cin >> a >> b;
	cout << "The larger is : " << maximum(a, b);

	cout << "\nEnter two double type numbers: \n";
	double x, y;
	cin >> x >> y;
	cout << "The larger is : " << maximum(x, y);

	cout << "\nEnter two char type characters: \n";
	char i, j;
	cin >> i >> j;
	cout << "The larger is : " << maximum(i, j);
};
