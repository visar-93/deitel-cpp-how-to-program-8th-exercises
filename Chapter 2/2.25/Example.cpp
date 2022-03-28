#include "stdafx.h"
#include <iostream>
using namespace std;

int main()

{
int x, y, z;

cout << "Please enter the integer x: ";
cin >> x;
cout << "Please enter the integer y: ";
cin >> y;

z = x % y;

if (z == 0)
cout << "The integer x is a multiple of integer y. \n";
if (z != 0)
cout << "The integer x is not a multiple of integer y. \n";

	return 0;
}
