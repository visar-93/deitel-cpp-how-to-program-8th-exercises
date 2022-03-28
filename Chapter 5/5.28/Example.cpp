#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "The twelve days of Christmas:\n\n\n";

	for (int day = 1; day <= 12; day++)
	{
		switch (day)
		{
		case 1:
			cout << "On the first day of Christmas\nMy true love sent to me :\n ";
			break;

		case 2:
			cout << "\n\nOn the second day of Christmas\nMy true love sent to me : ";
			break;

		case 3:
			cout << "\n\nOn the third day of Christmas\nMy true love sent to me : ";
			break;

		case 4:
			cout << "\n\nOn the fourth day of Christmas\nMy true love sent to me : ";
			break;

		case 5:
			cout << "\n\nOn the fifth day of Christmas\nMy true love sent to me : ";
			break;

		case 6:
			cout << "\n\nOn the sixth day of Chirstmas\nMy true love sent to me : ";
			break;
			
		case 7:
			cout << "\n\nOn the seventh day of Christmas\nMy true love sent to me : ";
			break;

		case 8:
			cout << "\n\nOn the eighth day of Christmas\nMy true love sent to me : ";
			break;

		case 9:
			cout << "\n\nOn the ninth day of Christmas\nMy true love sent to me : ";
			break;

		case 10:
			cout << "\n\nOn the tenth day of Christmas\nMy true love sent to me : ";
			break;

		case 11:
			cout << "\n\nOn the eleventh day of Christmas\nMy true love sent to me : ";
			break;

		case 12:
			cout << "\n\nOn the twelfth day of Christmas\nMy true love sent to me : ";
			break;
		}

		switch (day)
		{
		case 12:
			cout << "\n12 Drummers Drumming";

		case 11:
			cout << "\nEleven Pipers Piping";

		case 10:
			cout << "\nTen Lords a Leaping";

		case 9:
			cout << "\nNine Ladies Dancing";

		case 8:
			cout << "\nEight Maids a Milking";

		case 7:
			cout << "\nSeven Swans a Swimming";

		case 6:
			cout << "\nSix Geese a Laying";

		case 5:
			cout << "\nFive Golden Rings";

		case 4:
			cout << "\nFour Calling Birds*";

		case 3:
			cout << "\nThree French Hens";

		case 2:
			cout << "\nTwo Turtle Doves\nand ";

		case 1:
			cout << "A Partridge in a Pear Tree";
		}
	}
	cout << endl;

	return 0;
}
