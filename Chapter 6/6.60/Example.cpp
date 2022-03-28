#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

void questionType1Level1();
void questionType1Level2();
void questionType2Level1();
void questionType2Level2();
void questionType3Level1();
void questionType3Level2();
void questionType4Level1();
void questionType4Level2();
void questionType5Level1();
void questionType5Level2();
void correctAnswer();
void wrongAnswer();

int x, y, c, w;

int main()
{
	int countc = 0, countw = 0;
	int begin;
	int level;
	int ans;
	cout << "Please select which of arithmetic problems do you want to study.\n"
		<< "1. Addition problems only\n"
		<< "2. Subtraction problems only\n"
		<< "3. Multiplication problems only\n"
		<< "4. Division problems only\n"
		<< "5. A random mixture of all these types\n";
	cin >> begin;

	if (begin == 1)
	{
		cout << "Chose the difficulty level 1 or 2: \n";
		cin >> level;

		while (begin == 1)
		{
			if (level == 1)
			{
				questionType1Level1();
				cin >> ans;
				while (ans != (x+y))
				{
					wrongAnswer();
					++countw;
					break;
				}

				if (ans == (x+y))
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
			if (level == 2)
			{
				questionType1Level2();
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
		}
	}

	if (begin == 2)
	{
		cout << "Chose the difficulty level 1 or 2: \n";
		cin >> level;

		while (begin == 2)
		{


			if (level == 1)
			{
				questionType2Level1();
				cin >> ans;
				while (ans != (x - y))
				{
					wrongAnswer();
					++countw;
					break;
				}

				if (ans == (x - y))
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
			if (level == 2)
			{
				questionType2Level2();
				cin >> ans;
				while (ans != (x-y))
				{
					wrongAnswer();
					++countw;
					break;
				}

				if (ans == (x-y))
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
		}
	}
	if (begin == 3)
	{
		cout << "Chose the difficulty level 1 or 2: \n";
		cin >> level;

		while (begin == 3)
		{


			if (level == 1)
			{
				questionType3Level1();
				cin >> ans;
				while (ans != (x * y))
				{
					wrongAnswer();
					++countw;
					break;
				}

				if (ans == (x * y))
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
			if (level == 2)
			{
				questionType3Level2();
				cin >> ans;
				while (ans != (x * y))
				{
					wrongAnswer();
					++countw;
					break;
				}

				if (ans == (x * y))
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
		}
	}
	if (begin == 4)
	{
		cout << "Chose the difficulty level 1 or 2: \n";
		cin >> level;

		while (begin == 4)
		{
			if (level == 1)
			{
				questionType4Level1();
				cin >> ans;
				while (ans != (x / y))
				{
					wrongAnswer();
					++countw;
					break;
				}

				if (ans == (x / y))
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
			if (level == 2)
			{
				questionType4Level2();
				cin >> ans;
				while (ans != (x / y))
				{
					wrongAnswer();
					++countw;
					break;
				}

				if (ans == (x / y))
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
		}
	}
	if (begin == 5)
	{
		cout << "Chose the difficulty level 1 or 2: \n";
		cin >> level;

		while (begin == 5)
		{
			c = 1 + rand() % 4;
			if (level == 1)
			{
				if (c == 1)
				{
					questionType1Level1();
					cin >> ans;
					while (ans != (x + y))
					{
						wrongAnswer();
						++countw;
						break;
					}

					if (ans == (x + y))
					{
						correctAnswer();
						++countc;
						//continue;
					}
					questionType4Level1();
					cin >> ans;
					while (ans != (x / y))
					{
						wrongAnswer();
						++countw;
						break;
					}

					if (ans == (x / y))
					{
						correctAnswer();
						++countc;
						//continue;
					}
				}
				if (c == 2)
				{
					questionType2Level1();
					cin >> ans;
					while (ans != (x - y))
					{
						wrongAnswer();
						++countw;
						break;
					}

					if (ans == (x - y))
					{
						correctAnswer();
						++countc;
						//continue;
					}
					questionType3Level1();
					cin >> ans;
					while (ans != (x * y))
					{
						wrongAnswer();
						++countw;
						break;
					}

					if (ans == (x * y))
					{
						correctAnswer();
						++countc;
						//continue;
					}
				}
				if (c == 3)
				{
					questionType1Level1();
					cin >> ans;
					while (ans != (x + y))
					{
						wrongAnswer();
						++countw;
						break;
					}

					if (ans == (x + y))
					{
						correctAnswer();
						++countc;
						// continue;
					}
					questionType3Level1();
					cin >> ans;
					while (ans != (x * y))
					{
						wrongAnswer();
						++countw;
						break;
					}

					if (ans == (x * y))
					{
						correctAnswer();
						++countc;
						// continue;
					}
				}
				if (c == 4)
				{
					questionType2Level1();
					cin >> ans;
					while (ans != (x - y))
					{
						wrongAnswer();
						++countw;
						break;
					}

					if (ans == (x - y))
					{
						correctAnswer();
						++countc;
						//continue;
					}
					questionType4Level1();
					cin >> ans;
					while (ans != (x / y))
					{
						wrongAnswer();
						++countw;
						break;
					}

					if (ans == (x / y))
					{
						correctAnswer();
						++countc;
						//continue;
					}
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
			if (level == 2)
			{
				if (c == 1)
				{
					questionType1Level2();
					cin >> ans;
					while (ans != (x + y))
					{
						wrongAnswer();
						++countw;
						break;
					}

					if (ans == (x + y))
					{
						correctAnswer();
						++countc;
						//continue;
					}
					questionType4Level2();
					cin >> ans;
					while (ans != (x / y))
					{
						wrongAnswer();
						++countw;
						break;
					}

					if (ans == (x / y))
					{
						correctAnswer();
						++countc;
						//continue;
					}
				}
				if (c == 2)
				{
					questionType2Level2();
					cin >> ans;
					while (ans != (x - y))
					{
						wrongAnswer();
						++countw;
						break;
					}

					if (ans == (x - y))
					{
						correctAnswer();
						++countc;
						//continue;
					}
					questionType3Level2();
					cin >> ans;
					while (ans != (x * y))
					{
						wrongAnswer();
						++countw;
						break;
					}

					if (ans == (x * y))
					{
						correctAnswer();
						++countc;
						//continue;
					}
				}
				if (c == 3)
				{
					questionType1Level2();
					cin >> ans;
					while (ans != (x + y))
					{
						wrongAnswer();
						++countw;
						break;
					}

					if (ans == (x + y))
					{
						correctAnswer();
						++countc;
						//continue;
					}
					questionType3Level2();
					cin >> ans;
					while (ans != (x * y))
					{
						wrongAnswer();
						++countw;
						break;
					}

					if (ans == (x * y))
					{
						correctAnswer();
						++countc;
						//continue;
					}
				}
				if (c == 4)
				{
					questionType2Level2();
					cin >> ans;
					while (ans != (x - y))
					{
						wrongAnswer();
						++countw;
						break;
					}

					if (ans == (x - y))
					{
						correctAnswer();
						++countc;
						//continue;
					}
					questionType4Level2();
					cin >> ans;
					while (ans != (x / y))
					{
						wrongAnswer();
						++countw;
						break;
					}

					if (ans == (x / y))
					{
						correctAnswer();
						++countc;
						//continue;
					}
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
		}
	}
};
void questionType1Level1()
{
	x = 1 + rand() % 9;
	y = 1 + rand() % 9;

	cout << "How much is " << x << " plus " << y << "?\n";
}
void questionType1Level2()
{
	x = 10 + rand() % 11;
	y = 10 + rand() % 11;

	cout << "How much is " << x << " plus " << y << "?\n";
}
void questionType2Level1()
{
	x = 1 + rand() % 9;
	y = 1 + rand() % 9;

	cout << "How much is " << x << " minus " << y << "?\n";
}
void questionType2Level2()
{
	x = 10 + rand() % 11;
	y = 10 + rand() % 11;

	cout << "How much is " << x << " minus " << y << "?\n";
}
void questionType3Level1()
{
	x = 1 + rand() % 9;
	y = 1 + rand() % 9;

	cout << "How much is " << x << " times " << y << "?\n";
}
void questionType3Level2()
{
	x = 10 + rand() % 11;
	y = 10 + rand() % 11;

	cout << "How much is " << x << " times " << y << "?\n";
}
void questionType4Level1()
{
	x = 1 + rand() % 9;
	y = 1 + rand() % 9;

	cout << "How much is " << x << " divide " << y << "?\n";
}
void questionType4Level2()
{
	x = 10 + rand() % 11;
	y = 10 + rand() % 11;

	cout << "How much is " << x << " divide " << y << "?\n";
}
void questionType5Level1()
{
	x = 1 + rand() % 9;
	y = 1 + rand() % 9;
	c = 1 + rand() % 4;

	if (c == 1)
	{
		void questionType1Level1();
		void questionType4Level1();
	}
	if (c == 2)
	{
		void questionType2Level1();
		void questionType3Level1();
	}
	if (c == 3)
	{
		void questionType1Level1();
		void questionType3Level1();
	}
	if (c == 4)
	{
		void questionType2Level1();
		void questionType4Level1();
	}
	
}
void questionType5Level2()
{
	x = 10 + rand() % 11;
	y = 10 + rand() % 11;
	c = 1 + rand() % 4;

	if (c == 1)
	{
		void questionType1Level2();
		void questionType4Level2();
	}
	if (c == 2)
	{
		void questionType2Level2();
		void questionType3Level2();
	}
	if (c == 3)
	{
		void questionType1Level2();
		void questionType3Level2();
	}
	if (c == 4)
	{
		void questionType2Level2();
		void questionType4Level2();
	}
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

