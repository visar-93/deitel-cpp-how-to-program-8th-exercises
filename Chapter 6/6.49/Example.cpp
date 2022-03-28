#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int rollDice();
void crack();

enum Status { CONTINUE, WON, LOST };
Status gameStatus;

int main()
{
	string ans;
	double bankbalance=1000.00;
	double wager=0;
	cout << "Do you want to play the game?\n";
	cin >> ans;

	if (ans == "Yes" || ans == "yes")
	{
		cout << "Your balance is: 1000.00$.\n";

		while (wager <= bankbalance)
		{
			cout << "How much do you want to put wager in this hand?\n";
			cin >> wager;

			while (wager > bankbalance)
			{
				cout << "Your wager is higher than your balance.\nRe-enter your wager!\n";
				cin >> wager;
			}

			cout << endl;
			crack();
			cout << endl;

			if (gameStatus == WON)
			{
				bankbalance = bankbalance + wager;
				cout << "You earned on this hand " << wager << "$. Your total balance is: " << bankbalance <<"$. You're up big.Now's the time to cash in your chips!."
					<< "\nYou want to play again?\n";
				cin >> ans;
				if (ans == "Yes" || ans == "yes")
				{
					continue;
				}
				else
					break;
			}
			if (gameStatus == LOST)
			{
				bankbalance = bankbalance - wager;
				cout << "You lost on this hand " << wager << "$. Your total balance is : " << bankbalance << "$. Oh, you're going for broke, huh.\n"
					<< "Aw cmon, take a chance.\n"
					<< "\nYou want to play again?\n";
				cin >> ans;
				if (ans == "Yes" || ans == "yes")
				{
					continue;
				}
				else
					break;
			}
		}
	}
	if (ans == "No" || ans == "no")
	{
		cout << "Oh you're a little scared huh, that's ok.\n";
	}
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
void crack()
{
	srand(time(0));
	int myPoint;

	int sumOfDice = rollDice();

	switch (sumOfDice)
	{
	case 7:
	case 11:
		gameStatus = WON;
		break;
	case 2:
	case 3:
	case 12:
		gameStatus = LOST;
		break;
	default:
		gameStatus = CONTINUE;
		myPoint = sumOfDice;
		cout << "Point is " << myPoint << endl;
		break;
	}
	while (gameStatus == CONTINUE)
	{
		sumOfDice = rollDice();
		if (sumOfDice == myPoint)
			gameStatus = WON;
		else
			if (sumOfDice == 7)
				gameStatus = LOST;
	}
	if (gameStatus == WON)
		cout << "Player wins" << endl;
	else
		cout << "Player loses" << endl;
}


