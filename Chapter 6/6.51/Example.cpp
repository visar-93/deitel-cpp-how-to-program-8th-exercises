#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int tripleByValue(int );
void tripleByReference(int &);

int main()
{
	int count;
	cin >> count;
	cout << count << "   triplebyvalue   " << tripleByValue(count) << "   " << count << endl;;
	cout << count << "   triplebyreference   ";
	tripleByReference(count);
	cout <<  "   " << count << endl;
}

int tripleByValue(int x)
{
	return x= 3 * x;
}
void tripleByReference(int &xref)
{
  xref = 3*xref;
}
