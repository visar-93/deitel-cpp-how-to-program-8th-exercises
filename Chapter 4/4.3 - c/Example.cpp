#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x;
	int total;

	cout << "Enter x ";
	cin >> x;
	cout << endl;
	cout << "Enter total ";
	cin >> total;
	cout << endl;
	
	--x;
	total = total - x;

	cout << x << endl;
	cout << total << endl;

    return 0;
}
