#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void deleteBy(string& sRef, string z);

int main()
{
	string sentence = "";
	
	cout << "Enter a sentence: \n";
	getline(cin, sentence);
	
	deleteBy(sentence, "by");
	deleteBy(sentence, "BY");

	cout << endl << sentence << endl;

	return 0;
}
void deleteBy(string& sRef, string z)
{
	int x = sRef.find(z);
	while (x <= sRef.length())
	{
		sRef.erase(x, 2);
		x = sRef.find(z);
	}
}



