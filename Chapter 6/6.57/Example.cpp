#include "stdafx.h"
#include <iostream>
using namespace std;

void question();
void correctAnswer();
void wrongAnswer();

int x, y,c,w;

int main()
{
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
			cin >> ans;
		}
		if (ans == (x*y))
		{
			correctAnswer();
			continue;
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
