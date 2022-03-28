#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

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

	cout << "emtered x is " << x << endl;
}
