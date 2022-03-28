#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

int x;
int y;

cout << "Please enter the integer x: \n";
cin >> x;
cout << "Please enter the integer y: \n";
cin >> y;

if (x > y)
cout << "x is larger then y \n";
if (x < y)
	cout << "y is larger then x \n";
if (x == y)
cout << "x is equal to y \n";

return 0;

}
