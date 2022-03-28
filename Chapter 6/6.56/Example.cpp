#include "stdafx.h"
#include <iostream>
using namespace std;

void question();
int x, y;
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
			cout << "No. Please try again.\n";
			cin >> ans;
		}
		if (ans == (x*y))
		{
			cout << "Very good.\n";
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
