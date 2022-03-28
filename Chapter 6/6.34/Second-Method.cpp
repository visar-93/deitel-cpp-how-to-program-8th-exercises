#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

void guessNumber();

int main()
{
	guessNumber();
	cout << endl;
};
void guessNumber()
{
	cout << "Would you like to play a game ?\nLet's play Guess my Number!\n";

	int i;
	int num;
	int guess;
	string ans;

	for (i = 1; ans != "n"; i++)
	{
		num = (1 + rand() % 1000);//to test set the rande 1 to 10

		cout << "I have a number between 1 and 1000.\nCan you guess my number ?\n";
		cin >> guess;

		if (guess == num)
		{
			cout << "Excellent! You guessed the number!\n"
				<< "Would you like to play again (y or n)?\n";
			cin >> ans;
			if (ans == "y")
			{
				continue;
			}
			else if (ans == "n")
			{
				break;
			}
		}
		if (guess > num)
		{
			cout << "Too high. Try again.\n";
		}
		if (guess < num)
		{
			cout << "Too low. Try again.\n";
		}
	}
}
