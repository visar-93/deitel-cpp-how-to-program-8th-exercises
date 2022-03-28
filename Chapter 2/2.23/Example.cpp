#include "stdafx.h"
#include <iostream>
using namespace std;

int main()

{
int a, b, c, d, e;

cout << "Please enter the integer a: ";
cin >> a;
cout << "Please enter the integer b: ";
cin >> b;
cout << "Please enter the integer c: ";
cin >> c;
cout << "Please enter the integer d: ";
cin >> d;
cout << "Please enter the integer e: ";
cin >> e;

if (a > b & a > c & a > d & a > e)
cout << "The largest is a " << a << endl;

if (b > a & b > c & b > d & b > e)
cout << "The largest is b " << b <<endl;

if (c > a & c > b & c > d & c > e)
cout << "The largest is c " << c << endl;

if (d > a & d > b & d > c & d > e)
cout << "The largest is d " << d << endl;

if (e > a & e > b & e > c & e > d)
cout << "The largest is e " << e << endl;


if (a < b & a < c & a < d & a < e)
cout << "The smallest is a " << a << endl;

if (b < a & b < c & b < d & b < e)
cout << "The smallest is b " << b << endl;

if (c < a & c < b & c < d & c < e)
cout << "The smallest is c " << c << endl;

if (d < a & d < b & d < c & d < e)
cout << "The smallest is d " << d << endl;
if (e < a & e < b & e < c & e < d)
cout << "The smallest is e " << e <<endl;

	return 0;

}
