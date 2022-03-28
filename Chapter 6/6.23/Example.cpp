#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include<string>
using namespace std;

void squareOfAsterics();

int main()
{
	squareOfAsterics();
	cout << endl;
}
void squareOfAsterics()
{
	int i;
	int j;
	int num;
	string fig;
	cout << "Please enter e number: ";
	cin >> num;
	cout << "Please enter a character: ";
	cin >> fig;

	for (i = 1; i <= num; i++)
	{
		cout << "\n";

		for (j = 1; j <= num; j++)
			cout << fig;
	}
}
