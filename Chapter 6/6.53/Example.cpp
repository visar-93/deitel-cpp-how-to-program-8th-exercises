#include "stdafx.h"
#include <iostream>
using namespace std;

template <typename T>
T minimum(T value1, T value2)
{
	T minimum = value1;
	if (value2 < minimum)
		minimum = value2;

	return minimum;
}

int main()
{
	cout << "Enter two int type numbers: \n";
	int a, b;
	cin >> a >> b;
	cout << "Minimum is : " << minimum(a, b);

	cout << "\nEnter two double type numbers: \n";
	double x, y;
	cin >> x >> y;
	cout << "Minimum is : " << minimum(x, y);

	cout << "\nEnter two char type characters: \n";
	char i, j;
	cin >> i >> j;
	cout << "Minimum is : " << minimum(i, j);
};
