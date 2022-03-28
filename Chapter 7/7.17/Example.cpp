// You will write a program that will calculate the sum of two dices rolled 36000 times,
// and check which is the most frequented sum of dices
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()

{
	const int arraySize = 13; // initialize array size, in this exercise array element's will be sum of dices each roll
	int sumofdices[arraySize] = {}; // declare array
	int dice1, dice2; // declare variable dice1, dice2
	
	srand(time(0));

	for (int roll = 1; roll <= 36000; ++roll) // loop for roll 36000 times each dice and calculate their sum
	{
		dice1 = 1 + rand() % 6;
		dice2 = 1 + rand() % 6;
		sumofdices[dice1 + dice2]++; // increment the value of array element equal to dice's sum
	}

	cout << "Sum of dices " << setw(13) << "Frequency " << endl;

	for (int sum = 2; sum < arraySize; ++sum) // loop for display the frequency of each sum of rrolled dices
		cout << setw(7) << sum << setw(13) << sumofdices[sum] << endl; 

	cout << endl;
	return 0;
}
