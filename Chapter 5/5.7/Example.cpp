#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int x;
	int y;

	cout << "Enter two integers in range 1-20: ";
	cin >> x >> y;

	for (int i = 1; i <= y; ++i)
	{
		for (int j = 1; j <= y; j++)
			cout << '@';
		cout << endl;
	}
	return 0;
}
