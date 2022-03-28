#include "stdafx.h"
#include <iostream>
using namespace std;

int main()

{
//Option 1
int num;

cout << "Enter an number with five digits: ";
cin >> num;

cout << num / 10000 << " ";
num = num % 10000;
cout << num / 1000 << " ";
num = num % 1000;
cout << num / 100 << " ";
num = num % 100;
cout << num / 10 << " ";
num = num % 10;
cout << num << endl;

	return 0;
}
