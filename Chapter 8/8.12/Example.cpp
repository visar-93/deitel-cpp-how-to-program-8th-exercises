#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

const int RACE_END = 70; // declaring array size as global variable
// which will be used from functions of tortoise and hare movements, and showing the positions
void moveTortoise(int * const);//function which performs moves of tortoise, requests an const pointer to an integer value
void moveHare(int * const);//function which performs moves of hare, requests an const pointer to an integer value
void printCurrentPositions(const int * const, const int * const);//function which prints positions of hare and tortoise in each loop

int main()
{
	int tortoise = 1, hare = 1, timer = 0;//initializing torotise and hare positions to 1, timer to 0

	srand(time(0));

	cout << "ON YOUR MARK, GET SET\nBANG !!!!"
		<< "\nAND THEY'RE OFF !!!!\n";

	while (tortoise != RACE_END && hare != RACE_END) //the loop will continue until tortoise and hare are equal to race_end=70
	{
		moveTortoise(&tortoise);//calling moveTortoise function whith the address of tortoise(reference of tortoise)
		moveHare(&hare);//calling moveTortoise function whith the address of hare(reference of hare)
		printCurrentPositions(&tortoise, &hare);//calling printCurrentPositions function whith the address of tortoise and hare(reference of tortoise and hare)
		++timer;

	}

	if (tortoise >= hare)
		cout << "\nTORTOISE WINS!!! YAY!!!\n";
	else
		cout << "Hare wins. Yuch.\n";

	cout << "TIME ELAPSED = " << timer << " seconds" << endl;

	return 0;
}

void moveTortoise(int * const turtlePtr)
{
	int x = 1 + rand() % 10;

	if (x >= 1 && x <= 5) // fast plod
		* turtlePtr += 3;
	else if (x == 6 || x == 7) // slip
		* turtlePtr -= 6;
	else // slow plod
		++(*turtlePtr);

	if (*turtlePtr < 1)
		* turtlePtr = 1;
	else if (*turtlePtr > RACE_END)
		* turtlePtr = RACE_END;
}

void moveHare(int * const rabbitPtr)
{
	int y = 1 + rand() % 10;

	if (y == 3 || y == 4) // big hop
		* rabbitPtr += 9;
	else if (y == 5) // big slip
		* rabbitPtr -= 12;
	else if (y >= 6 && y <= 8) // small hop
		++(*rabbitPtr);
	else if (y > 8) // small slip
		* rabbitPtr -= 2;

	if (*rabbitPtr < 1)
		* rabbitPtr = 1;
	else if (*rabbitPtr > RACE_END)
		* rabbitPtr = RACE_END;
}

void printCurrentPositions(const int * const snapperPtr,
	const int * const bunnyPtr)
{
	if (*bunnyPtr == *snapperPtr)
		cout << setw(*bunnyPtr) << "OUCH!!!";
	else if (*bunnyPtr < *snapperPtr)
		cout << setw(*bunnyPtr) << 'H'
		<< setw(*snapperPtr - *bunnyPtr) << 'T';
	else
		cout << setw(*snapperPtr) << 'T'
		<< setw(*bunnyPtr - *snapperPtr) << 'H';

	cout << '\n';
}
