#include "stdafx.h"
#include <iostream>
using namespace std;


int main()

{
int x;
int y;
int sum;
int quot;
int prod;
int dif;
int dif_1;

cout << "Please enter the integer x: \n";
cin >> x;
cout << "Please enter the integer y: \n";
cin >> y;

sum = x + y;
quot = x - y;
prod = x * y;
dif = x / y;
dif_1 = x % y;

cout << "The sum of two integers is: " << sum << endl;
cout << "The quotient of two integers is: " << quot << endl;
cout << "The product of two integers is: " << prod << endl;
cout << "The difference of two integers is: " << dif << " and the residue is: " << dif_1 << endl;

	return 0;
}
