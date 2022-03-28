// Angle Form
#include"stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double sidea, sideb, sidec;
	double sum;

	cout << "Enter the angle of side a: \n";
	cin >> sidea;

	cout << "Enter the angle of side b: \n";
	cin >> sideb;
	cout << "Enter the angle of side c: \n";
	cin >> sidec;

	cout << endl;

	sum = sidea + sideb + sidec;

	if (sum == 180)
	{
		cout << "They could present the sides of a triangle\n";
	}
	else
		cout << "They could NOT present the sides of a triangle\n";
	
}
