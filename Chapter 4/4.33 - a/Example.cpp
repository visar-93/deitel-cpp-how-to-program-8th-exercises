// Length Form
#include"stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	
	cout << "Enter the length of side a: \n";
	cin >> a;

	cout << "Enter the length of side b: \n";
	cin >> b;
	cout << "Enter the length of side c: \n";
	cin >> c;

	cout << endl;

		if (((a*a)+(b*b))==(c*c) || ((a*a) + (c*c)) == (b*b) || ((b*b) + (c*c))== (a*a))
	{
		cout << "They could present the sides of a triangle\n";
	}
	else
		cout << "They could NOT present the sides of a triangle\n";
	
}
