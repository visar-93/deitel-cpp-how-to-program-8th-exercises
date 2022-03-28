#include "stdafx.h"
#include <iostream>
using namespace std;

// function template isEqualTo definition
template<  class T>
bool isEqualTo(const T &value1, const T value2)
{
	return value1 == value2;
}

class SomeClass
{
	friend ostream &operator<<(ostream &, SomeClass &);
public:
	SomeClass(int s, int t)
	{
		x = s;
		y = t;
	}

	bool operator==(const SomeClass &right) const
	{
		return x == right.x && y == right.y;
	}
private:
	int x;
	double y;
};

ostream &operator<<(ostream &output, SomeClass &object)
{
	output << "(" << object.x << ", " << object.y << ")";
	return output;
}

int main()
{
	int a, b;
	cout << "Enter two integer values: ";
	cin >> a >> b;

	cout << a << " and " << b << " are "
		<< (isEqualTo(a, b) ? "equal" : "not equal") << endl;

	char c, d;
	cout << "\nEnter two character values: ";
	cin >> c >> d;
	cout << c << " and " << d << " are "
		<< (isEqualTo(c, d) ? "equal" : "not equal") << endl;

	double e, f;

	cout << "\nEnter two double values: ";
	cin >> e >> f;

	cout << e << " and " << f << " are "
		<< (isEqualTo(e, f) ? "equal" : "not equal") << endl;

	SomeClass g(1, 1.1), h(1, 1.1);
	cout << "\nThe class objects " << g << " and " << h << " are "
		<< (isEqualTo(g, h) ? "equal" : "not equal") << endl;

	return 0;
}
