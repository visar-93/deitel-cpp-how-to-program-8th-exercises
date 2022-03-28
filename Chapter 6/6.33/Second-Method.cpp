#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void flipto100();

int main()
{
	flipto100();
};

void flipto100()
{
	int count;
	int toss;
	int frequency1 = 0;
	int frequency2 = 0;

	for (count = 1; count <= 100; count++)
	{
		toss = (rand() % 2);

		switch (toss)
		{
		case 1:
			cout << toss % 2 << endl;
			frequency1++;
			break;
		case 0:
			cout << toss % 2  << endl;
			frequency2++;
			break;

		default:
			cout << "Program should never get here!";
		}
	}
	cout << setw(10) << "Side" << setw(20) << "Frequency" << endl;
	cout << setw(10) << "HEAD" << setw(20) << frequency1 << endl
		<< setw(10) << "TAIL" << setw(20) << frequency2 << endl;
}
