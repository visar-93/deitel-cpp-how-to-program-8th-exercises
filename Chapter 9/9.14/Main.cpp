#include "stdafx.h"
#include "HugeInteger.h"
#include <iostream>
using namespace std;

int main()
{
	string x;
	cin >> x;
	HugeInteger obj = HugeInteger();

	obj.input(x);
	HugeInteger obj2 = HugeInteger();
	obj2.input("1234");

	HugeInteger obj3 = obj.add(obj2);
	HugeInteger obj5 = obj.multiply(obj2);
	HugeInteger obj4 = obj.substract(obj2);

	cout << obj3.output();
	cout << endl;
	cout << obj4.output();
	cout << endl;
	cout << obj5.output();
	cout << endl;

	if (obj.isGreaterThan(obj2) == 1)
		cout << "OBJ is greater than OBJ 2\n";
	if (obj.isLessThan(obj2) == 1)
		cout << "OBJ is less than OBJ 2\n";
	if (obj4.isEqualTo(obj) == 1)
		cout << "OBJ4 is equal to OBJ \n";
	if (obj3.isNotEqualTo(obj5) == 1)
		cout << "OBJ3 is not equal to OBJ5 \n";

	return 0;
}
