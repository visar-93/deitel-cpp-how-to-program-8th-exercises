#include "stdafx.h"
#include <iostream>
using namespace std;

int main()

{
int x, y;

cout << "Please the integer x: ";
cin >> x;
y = x % 2;

if (y == 0)
cout << "Integer x is an even number \n";
if (y != 0)
cout << "Integer x is an odd number \n";

	return 0;
}
