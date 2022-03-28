#include "stdafx.h"
#include <iostream>
using namespace std;

void lastVal();
int x = 7;
int main()
{
	int x;
	cin >> x;

	{
		int x = 1;
		int count;
		for (count = 0; count <= 10; ++count)
			x = x + count;
		cout << "x for count " << x << endl;
	}	

	cout << "entered x is " << x << endl;
	cout << "global x is : " << ::x << endl;
	lastVal();
	cout << "entered x is " << x << endl;
	lastVal();
}

void lastVal()
{
	static double x = 10;
	cout << "lastVal() x is " << x << endl;
	++x;
}
