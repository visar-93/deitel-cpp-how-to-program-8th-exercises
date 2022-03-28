// Length form
#include"stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double sidea, sideb, sidec;
	
	cout << "Enter the length of side a: \n";
	cin >> sidea;

	cout << "Enter the length of side b: \n";
	cin >> sideb;
	cout << "Enter the length of side c: \n";
	cin >> sidec;

	cout << endl;

		if ((sidea+sideb)>sidec || (sidea+sidec)>sideb || (sideb+sidec)>sidea)
	{
		cout << "They could present the sides of a triangle\n";
	}
	else
		cout << "They could NOT present the sides of a triangle\n";
	
}
