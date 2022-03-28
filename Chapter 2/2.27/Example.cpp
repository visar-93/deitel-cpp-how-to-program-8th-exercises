#include "stdafx.h"
#include <iostream>
using namespace std;

int main()

{
char key;
cout << "Please enter the letter key: ";
cin >> key;

cout << "The integer equivalent of character for key is: " << static_cast<int>(key) << endl;

	return 0;
}
