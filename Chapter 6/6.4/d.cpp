#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int inToDouble(int number);

int main()
{
	int x;
	cin >> x;
	cout << fixed << setprecision(2);

	cout << inToDouble(x) << endl;
}

int inToDouble(int number)
{
	return static_cast<double>(number);
}
