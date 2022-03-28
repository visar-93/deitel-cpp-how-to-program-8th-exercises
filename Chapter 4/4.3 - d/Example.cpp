#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int q;
	int divisor;

	cout << "Enter q ";
	cin >> q;
	cout << endl;
	cout << "Enter divisor ";
	cin >> divisor;
	cout << endl;
	
	q%=divisor;
	q = q % divisor;

	cout << q;
    return 0;
}
