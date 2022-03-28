#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDice();

int main()
{
	enum Status { CONTINUE, WON, LOST };

	int myPoint;
	Status gameStatus;
	int play;
	const int sumOf = 20;
	int frequencyw[sumOf] = {};
	int frequencyl[sumOf] = {};
	int winfirst = 0;
	int lostfirst = 0;

	srand(time(0));

	for (play = 1; play <= 1000; ++play)
	{
		cout << "\n\nGame " << play << " \n\n";

		int sumOfDice = rollDice();

		switch (sumOfDice)
		{
		case 7:
		case 11:
			gameStatus = WON;
			++winfirst;
			break;
		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			++lostfirst;
			break;
		default:
			gameStatus = CONTINUE;
			myPoint = sumOfDice;
			cout << "Point is " << myPoint << endl;
			break;
		}

		while (gameStatus == CONTINUE)
		{
			for (int roll = 1; roll < sumOf; ++roll)
			{
				sumOfDice = rollDice();
				if (sumOfDice == myPoint)
				{
					gameStatus = WON;
					frequencyw[roll]++;
					cout << "Roll " << frequencyw[roll] << endl;
					break;
				}
				else
					if (sumOfDice == 7)
					{
						gameStatus = LOST;
						frequencyl[roll]++;
						break;
					}
			}
		}

		if (gameStatus == WON)
			cout << "Player wins" << endl;
		else
			cout << "Player loses" << endl;

	}
	cout << endl << endl;
	cout << "Win on first roll: " << winfirst << endl;
	cout << "Won on second roll: " << frequencyw[1] << endl;
	cout << "Won on third roll: " << frequencyw[2] << endl;
	cout << "Won on fourth roll: " << frequencyw[3] << endl;
	cout << "Won on fifth roll: " << frequencyw[4] << endl;
	cout << "Won on sixth roll: " << frequencyw[5] << endl;
	cout << "Won on seventh roll: " << frequencyw[6] << endl;
	cout << "Won on eighth roll: " << frequencyw[7] << endl;
	cout << "Won on nineth roll: " << frequencyw[8] << endl;
	cout << "Won on tenth roll: " << frequencyw[9] << endl;
	cout << "Won on twentith roll: " << frequencyw[19] << endl;
	cout << endl;
	cout << "Lost on first roll: " << lostfirst << endl;
	cout << "Lost on second roll: " << frequencyl[1] << endl;
	cout << "Lost on third roll: " << frequencyl[2] << endl;
	cout << "Lost on fourth roll: " << frequencyl[3] << endl;
	cout << "Lost on fifth roll: " << frequencyl[4] << endl;
	cout << "Lost on sixth roll: " << frequencyl[5] << endl;
	cout << "Lost on seventh roll: " << frequencyl[6] << endl;
	cout << "Lost on eighth roll: " << frequencyl[7] << endl;
	cout << "Lost on nineth roll: " << frequencyl[8] << endl;
	cout << "Lost on tenth roll: " << frequencyl[9] << endl;
	cout << "Lost on twentith roll: " << frequencyl[19] << endl;

	return 0;
}

int rollDice()
{
	int die1 = 1 + rand() % 6;
	int die2 = 1 + rand() % 6;

	int sum = die1 + die2;

	cout << "Player rolled " << die1 << " + " << die2
		<< " = " << sum << endl;
	return sum;
}

