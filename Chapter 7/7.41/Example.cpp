#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double topicAverage(double[], const int);
int maximumTopic(double[], const int);
int minimumTopic(double[], const int);
int main()
{

	cout << "Please welcome to the importance Poll for your beloved dogs.\n"
		<< " Please rate each topic with scores from 1(less important) to 10(most important).\n";

	const int rows = 5;
	const int columns = 10;

	string topics[rows] =
	{ "Our dogs should sleep with us in bed",
	"All dogs can eat everything, they don't have allergies or obesity issues",
	"Dogs diet is important, it should be kept in limits of breed standart weight",
	"Dogs need more bath than grooming",
	"Small dogs require less exercise than medium and large dogs" };

	double responses[rows][columns];
	double issueArray[rows];
	int personRate;
	int topic;
	int rate;

	cout << "Let's start!\n";
	for (personRate = 0; personRate < columns; ++personRate)
	{
		cout << "\nRating nr. " << personRate + 1 << ": \n";

		for (topic = 0; topic < rows; ++topic)
		{
			cout << topics[topic] << "  :";
			cin >> rate;
			while (rate < 1 || rate > 10)
			{
				cout << "Entered wrong numb1er, please rate again: ";
				cin >> rate;
			}
			responses[topic][personRate] = rate;
		}
	}

	cout << endl;
	cout << "Below you can find report or Poll for our belowed dogs:\n\n";
	cout << "        ";
	for (int rated = 0; rated < columns; ++rated)
		cout << setw(7) << " Person " << setw(2) << rated + 1;

	cout << "        Total Rated for Topic" << endl;

	for (int topic = 0; topic < rows; ++topic)
	{
		cout << "Topic " << setw(2) << topic + 1;

		for (int person = 0; person < columns; ++person)
			cout << setw(6) << responses[topic][person] << "    ";

		cout << "    ";
		double average = topicAverage(responses[topic], columns);
		issueArray[topic] = average;
		cout << setw(15) << average << endl;
	}
	cout << endl << endl;

	int max;
	max = maximumTopic(issueArray, rows);
	cout << "The topic that receives the highest rates is:\n"
		<< topics[max] << "\n"
		<< "With total " << issueArray[max] * columns<< " scores\n\n";
	int min;
	min = minimumTopic(issueArray, rows);
	cout << "The topic that receives the lowest rates is:\n"
		<< topics[min] << "\n"
		<< "With total " << issueArray[min] * columns<< " scores\n";
 	cout << endl;

	return 0;
}
double topicAverage(double sumOfRow[], const int row)
{
	double total = 0.00;
	for (int i = 0; i < row; ++i)
		total += sumOfRow[i];

	return total / row;
}
int maximumTopic(double array[], const int col)
{
	int i,k;
	double maximum = 0.00;
	for (i = 0; i < col; ++i)
	{
		if (array[i] > maximum)
		{
			maximum = array[i];
			k = i;
		}
	}
	return k;
}
int minimumTopic(double array[], const int col)
{
	double minimum = 100.00;
	int j,k;
	for (j = 0; j < col; ++j)
	{
		if (array[j] < minimum)
		{
			minimum = array[j];
			k = j;
		}
	}
	return k;
}
