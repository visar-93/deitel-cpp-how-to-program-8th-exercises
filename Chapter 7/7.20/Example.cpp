#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

bool isSeatAvailaible(bool[], int, int);

int main()
{
	const int seatNumber = 10;
	bool reservation[seatNumber] = {};
	int res = 0;
	int select = 0;
	int flyClass;
	int seat;
	string ans;

	cout << "Welcome to the Cyprus Airlines\n";
	cout << "Please reserve your seats\n";

	while (res != -1)
	{
		cout << "To continue with reservation please type 1, to cancel press -1\n";
		cin >> res;

		if (res == -1)
			break;

		cout << "Please type 1 for First Class: \nOr type 2 for Economy Class: \n";
		cin >> flyClass;

		if (flyClass == 1)
		{
			int free;
			cout << "Free seats are as below: \n";
			for (free = 0; free < (seatNumber - 5); ++free)
			{
				if (reservation[free] == false)
				{
					cout << "Seat no. " << free + 1 << endl;
				}
			}

			while (select != -1)
			{
				cout << "To select the seats press 1, to cancel press -1\n";
				cin >> select;
				if (select == -1)
					break;

				cout << "Please choose which seat you want to assign : ";
				cin >> free;

				if (free > (seatNumber - 5) && free < 0)
				{
					cout << "There is no seat with that no. in First Class\n";
					break;
				}
				
				if (isSeatAvailaible(reservation, seatNumber, free))
				{
					reservation[free] = true;
				}
				else
				{
					cout << "The selected seat is not available\n"
						<< "Please select another one: \n";
					continue;
				}
				if (reservation[0] == true && reservation[1] == true && reservation[2] == true &&
					reservation[3] == true && reservation[4] == true)
				{
					cout << "All seats in First Class are taken.\n"
						<< "Is it acceptable for you to be placed in Economic Class (y or n) ?\n";
					cin >> ans;
					if (ans == "y")
					{
						cout << "Free seats are as below: \n";
						for (free = 5; free < seatNumber; ++free)
						{
							if (reservation[free] == false)
							{
								cout << "Seat no. " << free + 1 << endl;
							}
						}

						while (select != -1)
						{
							cout << "To select the seats press 1, to cancel press -1\n";
							cin >> select;
							if (select == -1)
								break;

							cout << "Please choose which seat you want to assign : ";
							cin >> free;

							if (free > seatNumber && free < 6)
							{
								cout << "There is no seat with that no. in Economic Class\n";
								break;
							}

							if (isSeatAvailaible(reservation, seatNumber, free))
							{
								reservation[free] = true;
							}
							else
							{
								cout << "The selected seat is not available\n"
									<< "Please select another one: \n";
								continue;
							}
						}
					}
					else
					{
						cout << "Next flight leaves in 3 hours." << endl;
						break;
					}
				}
			}	
			cout << endl;
		} 
		else if (flyClass == 2)
		{
			int free;
			cout << "Free seats are as below: \n";
			for (free = 5; free < seatNumber; ++free)
			{
				if (reservation[free] == false)
				{
					cout << "Seat no. " << free + 1 << endl;
				}
			}

			while (select != -1)
			{
				cout << "To select the seats press 1, to cancel press -1\n";
				cin >> select;
				if (select == -1)
					break;

				cout << "Please choose which seat you want to assign : ";
				cin >> free;

				if (free > seatNumber && free < 5)
				{
					cout << "There is no seat with that no. in First Class\n";
					break;
				}

				if (isSeatAvailaible(reservation, seatNumber, free))
				{
					reservation[free] = true;
				}
				else
				{
					cout << "The selected seat is not available\n"
						<< "Please select another one: \n";
					continue;
				}
				if (reservation[5] == true && reservation[6] == true && reservation[7] == true &&
					reservation[8] == true && reservation[9] == true)
				{
					cout << "All seats in Economic Class are taken.\n"
						<< "Is it acceptable for you to be placed in First Class (y or n) ?\n";
					cin >> ans;
					if (ans == "y")
					{
						cout << "Free seats are as below: \n";
						for (free = 0; free < (seatNumber - 5); ++free)
						{
							if (reservation[free] == false)
							{
								cout << "Seat no. " << free + 1 << endl;
							}
						}

						while (select != -1)
						{
							cout << "To select the seats press 1, to cancel press -1\n";
							cin >> select;
							if (select == -1)
								break;

							cout << "Please choose which seat you want to assign : ";
							cin >> free;

							if (free > (seatNumber - 5) && free < 1)
							{
								cout << "There is no seat with that no. in First Class\n";
								break;
							}

							if (isSeatAvailaible(reservation, seatNumber, free))
							{
								reservation[free] = true;
							}
							else
							{
								cout << "The selected seat is not available\n"
									<< "Please select another one: \n";
								continue;
							}
						}
					}
					else
					{
						cout << "Next flight leaves in 3 hours." << endl;
						break;
					}
				}
			}
		}
	}
	cout << endl;
	cout << "Selected seats are as below. \n\n"
		<< setw(6) << "Class" << setw(6) << "      " << "Seat no. " << endl;

	for (int i = 0; i < (seatNumber - 5); i++)
	{
		if ((reservation[i] <= 5) && (reservation[i] == true))
		{
			cout << setw(6) << "First" << "      " << setw(6) << i + 1 << endl;
		}
	}
	for (int i = 5; i < seatNumber; i++)
	{
		if ((reservation[i] <= seatNumber) && (reservation[i] == true))
		{
			cout << setw(6) << "Economic" << "      " << setw(6) << i + 1 << endl;
		}
	}
	cout << endl;
}

bool isSeatAvailaible(bool a[], int size, int seat)
{
	if (seat >= size || seat < 0) return false;
	return a[seat] == false;
}
