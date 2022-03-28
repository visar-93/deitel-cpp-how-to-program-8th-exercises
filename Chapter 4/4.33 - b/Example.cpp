// Angle form
#include"stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	
	cout << "Enter the angle of side a: \n";
	cin >> a;

	cout << "Enter the angle of side b: \n";
	cin >> b;
	cout << "Enter the angle of side c: \n";
	cin >> c;

	cout << endl;

		if ((a+b)==90 || (a+c)==90 || b+c==90 && (a+b+c)==180)
	{
		cout << "They could present the sides of a triangle\n";
	}
	else
		cout << "They could NOT present the sides of a triangle\n";
	
}
