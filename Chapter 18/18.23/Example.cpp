#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string string1 = "Butkerflies";
	string::const_iterator it = string1.begin();
	string::const_iterator it1 = string1.begin();

	advance(it, 3);
	advance(it1,8);
	string1.erase(it);
	cout << string1 << endl;
	string1.erase(it,it1);
	cout << string1 << endl;
	
}
