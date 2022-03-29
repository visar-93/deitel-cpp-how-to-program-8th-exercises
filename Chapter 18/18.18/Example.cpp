#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentence = "";
	int middle = 0;
	
	cout << "Enter a sentence: \n";
	getline(cin, sentence);

	middle = sentence.size() / 2;

	sentence.insert(middle, "******");

	cout << sentence << endl;

	return 0;
}
