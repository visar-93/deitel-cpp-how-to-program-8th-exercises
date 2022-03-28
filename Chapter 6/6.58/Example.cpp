#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

void question();
void correctAnswer();
void wrongAnswer();

int x, y,c,w;

int main()
{
	int countc = 1, countw = 1;
	int begin;
	int ans;
	cout << "Are you ready to start with multiply questions ?\nPress 1 to start, 2 to end.";
	cin >> begin;
	while (begin == 1)
	{
		question();
		cin >> ans;
		while (ans != (x*y))
		{
			wrongAnswer();
			++countw;
			break;
		}

		if (ans == (x*y))
		{
			correctAnswer();
			++countc;
			continue;
		}
		if ((countc + countw) == 10)
		{
			cout << "You answered " << countc << " correctly.\n";
			cout << "You answered " << countw << " wrong.\n";
			cout << "Your percentage is: " << setprecision(2) << 100 * countc / (countc + countw) << " %.";
			if ((100 * countc / (countc + countw)) >= 75)
				cout << "Congratulations, you are ready to go to the next level.\n";
			else
				cout << "Please ask your teacher for extra help.\n\n";
			return main();
		}
	
	}
};
void question()
{
	x = 1 + rand() % 9;
	y = 1 + rand() % 9;

	cout << "How much is " << x << " times " << y << "?\n";
}
void wrongAnswer()
{
	c = 1 + rand() % 4;
	if (c == 1)
	{
		cout << "No. Please try again.\n";
	}
	if (c == 2)
	{
		cout << "Wrong. Try once more.\n";
	}
	if (c == 3)
	{
		cout << "Don't give up!\n";
	}
	if (c == 4)
	{
		cout << "No. Keep trying.\n";
	}
}
void correctAnswer()
{
	w = 1 + rand() % 4;
	if (w == 1)
	{
		cout << "Very good!\n";
	}
	if (w == 2)
	{
		cout << "Excellent!\n";
	}
	if (w == 3)
	{
		cout << "Nice work!\n";
	}
	if (w == 4)
	{
		cout << "Keep up the good work!\n";
	}
}
