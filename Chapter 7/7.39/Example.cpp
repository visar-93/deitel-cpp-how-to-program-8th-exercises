// You will write a program that will calculate the sum of two dices rolled 36000 times,
// and check which is the most frequented sum of dices
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

void sumOfDice(vector<int> &);
void frequencyOfDice(vector <int> &);

int main()
{
	vector<int> sumOfDices(13);
	sumOfDice(sumOfDices);
	cout << endl;
	frequencyOfDice(sumOfDices);
	cout << endl;
	return 0;

}
void sumOfDice(vector<int> &array)
{
	int dice1, dice2; // declare variable dice1, dice2

	srand(time(0));

	for (size_t roll = 1; roll <= 36000; ++roll) // loop for roll 36000 times each dice and calculate their sum
	{
		dice1 = 1 + rand() % 6;
		dice2 = 1 + rand() % 6;
		array[dice1 + dice2]++; // increment the value of array element equal to dice's sum
	}
}
void frequencyOfDice(vector <int> &array)
{
	
	cout << "Sum of dices " << setw(13) << "Frequency " << endl;

	for (size_t i = 2; i < array.size(); ++i) // loop for display the frequency of each sum of rrolled dices
		cout << setw(7) << i << setw(13) << array[i] << endl;

	cout << endl;
}
