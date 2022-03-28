#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void flipto100();
void flipCoin();
void report();

int frequencyf1 = 0;
int frequencyf2 = 0;
int frequency = 0;

int main()
{
	int flip = 0;

	for (frequency = 1; (flip != -1); frequency++)
	{
		cout << "Enter 1 to flip the coin\nEnter -1 to end\n";
		cin >> flip;
		if (flip == -1)
		{
			break;
		}
		if (flip != 1 && flip != -1)
		{
			cout << "Toss again!\n";
		}

		flipCoin();
	}
	report();

	//flipto100();
};

void flipCoin()
{
	int count;
	int toss;

	toss = (1 + rand() % 2);

	switch (toss)
	{
	case 1:
		cout << " 1  HEAD  " << endl;
		frequencyf1++;
		break;
	case 2:
		cout << " 2  TAIL  " << endl;
		frequencyf2++;
		break;

	default:
		cout << "Program should never get here!";
	}

}
void report()
{
	cout << "You tossed coin " << frequency-1 << " times. \nNow you can see which side cames the most\n";
	cout << setw(10) << "Side" << setw(20) << "Frequency" << endl;
	cout << setw(10) << "HEAD" << setw(20) << frequencyf1 << endl
		<< setw(10) << "TAIL" << setw(20) << frequencyf2 << endl;
}

void flipto100()
{
	int count;
	int toss;
	int frequency1 = 0;
	int frequency2 = 0;

	for (count = 1; count <= 100; count++)
	{
		toss = (1 + rand() % 2);

		switch (toss)
		{
		case 1:
			cout << " 1  HEAD  " << endl;
			frequency1++;
			break;
		case 2:
			cout << " 2  TAIL  " << endl;
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
