#include "stdafx.h"
#include <iostream>
using namespace std;

int main()

{
int x, y, z;
int sum;
int avg;
int prod;
int small;
int large;

cout << "Enter three integers: \n";
cin >> x >> y >> z;

sum = x + y + z;
avg = (x + y + z) / 3;
prod = x * y * z;

cout << "Sum is: " << sum << endl;
cout << "Average is: " << avg << endl;
cout << "Product is: " << prod << endl;

if (x < y & x < z)
	cout << "Smallest is: " << x << endl;
if (y < x & y < z)
	cout << "Smallest is: " << y << endl;
if (z < x & z < y)
	cout << "Smallest is: " << z << endl;

if (x > y & x > z)
	cout << "Largest is: " << x << endl;
if (y > x & y > z)
	cout << "Largest is: " << y << endl;
if (z > x & z > y)
	cout << "Largest is: " << z << endl;

	return 0;

}
