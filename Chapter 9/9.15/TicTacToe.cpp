#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "TicTacToe.h"
using namespace std;

TicTacToe::TicTacToe()  // initialize board empty
{
	for (int r = 0; r < 3; ++r)
		for (int c = 0; c < 3; ++c)
			board[r][c] = ' ';

	char1 = 'x';
	char2 = 'O';
}
bool TicTacToe::checkValidity(int i, int j) // chech if that cell is empty
{
	while (i >= 0 && i < 3 && j >= 0 && j < 3)
	{
		if (board[i][j] == ' ')
			return true;
		else if (board[i][j] != ' ')
			return false;
	}
}
void TicTacToe::PrintResult()
{
	cout << "  " << setw(2) << "0" << " " << setw(2) << "1" << " " << setw(2) << "2" << " \n";
	for (int r = 0; r < 3; ++r)
	{
		cout << r << " ";
		for (int c = 0; c < 3; ++c)
		{
			cout << setw(2) << board[r][c] << "|";
		}
		cout << endl;
		cout << "  ---------- \n";
	}
}
void TicTacToe::makeMove()
{
	int x = 0, y = 0;
	for (int game = 0; game <= 8; game++)
	{
		while (x >= 0 && x < 3 && y >= 0 && y < 3)
		{
			if (game % 2 == 0)
			{
				cout << "Player1: \n";
				cout << "Enter x: ";
				cin >> x;
				cout << "Enter y: ";
				cin >> y;

				if (x < 0 || x>3 || y < 0 || y >3)
				{
					cout << "Entered wrong cell.\n Try again!\n";
					cout << "Enter x: ";
					cin >> x;
					cout << "Enter y: ";
					cin >> y;
				}
				if (checkValidity(x, y) == true)
				{
					board[x][y] = char1;
					PrintResult();
					break;
				}
				else if (checkValidity(x, y) == false)
				{
					cout << "This cell is taken.\nChoose another one.\n";
					cout << "Free cells are: ";
					for (int i = 0; i < 3; ++i)
						for (int j = 0; j < 3; ++j)
						{
							if (checkValidity(i, j) == true)
								cout << i << j << ", ";
						}

					cout << "\nEnter x: ";
					cin >> x;
					cout << "Enter y: ";
					cin >> y;
					if (checkValidity(x, y) == true)
					{
						board[x][y] = char1;
						PrintResult();
						break;
					}
				}
			}
			else if (game % 2 != 0)
			{
				cout << "Player2: \n";
				cout << "Enter x: ";
				cin >> x;
				cout << "Enter y: ";
				cin >> y;
				if (x < 0 || x>3 || y < 0 || y >3)
				{
					cout << "Entered wrong cell.\n Try again!\n";
					cout << "Enter x: ";
					cin >> x;
					cout << "Enter y: ";
					cin >> y;
				}
				if (checkValidity(x, y) == true)
				{
					board[x][y] = char2;
					PrintResult();
					break;
				}
				else if (checkValidity(x, y) == false)
				{
					cout << "This cell is taken.\nChoose another one.\n";
					cout << "Free cells are: ";
					for (int i = 0; i < 3; ++i)
						for (int j = 0; j < 3; ++j)
						{
							if (checkValidity(i, j) == true)
								cout << i << j << ", ";
						}

					cout << "\nEnter x: ";
					cin >> x;
					cout << "Enter y: ";
					cin >> y;
					if (checkValidity(x, y) == true)
					{
						board[x][y] = char2;
						PrintResult();
						break;
					}
				}
			}
		}
		if (StatusOfGame() == 1)
		{
			cout << "Player 1 WON!\n";
			break;
		}
		else if (StatusOfGame() == 2)
		{
			cout << "Player 2 WON!\n";
			break;
		}
		else if (StatusOfGame() == 4)
		{
			cout << "Game is DRAW!\n";
			break;
		}
	}
}
int TicTacToe::StatusOfGame()
{
	int gameStatus = 0;
	//check for win in diagonals for player 1

	if (board[0][0] == 'x' && board[0][0] == board[1][1] &&
		board[0][0] == board[2][2])
	{
		gameStatus = 1;
		return gameStatus;
	}
	else if (board[2][0] == 'x' && board[2][0] == board[1][1]
		&& board[2][0] == board[0][2])
	{
		gameStatus = 1;
		return gameStatus;
	}
	//check for win in diagonals for player 2
	if (board[0][0] == 'O' && board[0][0] == board[1][1] &&
		board[0][0] == board[2][2])
	{
		gameStatus = 2;
		return gameStatus;
	}
	else if (board[2][0] == 'O' && board[2][0] == board[1][1]
		&& board[2][0] == board[0][2])
	{
		gameStatus = 2;
		return gameStatus;
	}
	//check for win in rows
	for (int a = 0; a < 3; ++a)
	{
		if (board[a][0] == 'x' && board[a][0] == board[a][1]
			&& board[a][0] == board[a][2])
		{
			gameStatus = 1;
			return gameStatus;
		}
		else if (board[a][0] == 'O' && board[a][0] == board[a][1]
			&& board[a][0] == board[a][2])
		{
			gameStatus = 2;
			return gameStatus;
		}
	}


	//check for win in columns

	for (int a = 0; a < 3; ++a)
	{
		if (board[0][a] == 'x' && board[0][a] == board[1][a]
			&& board[0][a] == board[2][a])
		{
			gameStatus = 1;
			return gameStatus;
		}
		else if (board[0][a] == 'O' && board[0][a] == board[1][a]
			&& board[0][a] == board[2][a])
		{
			gameStatus = 2;
			return gameStatus;
		}
	}

	// check for a completed game
	for (int r = 0; r < 3; ++r)
		for (int c = 0; c < 3; ++c)
		{
			if (board[r][c] == ' ')
			{
				gameStatus = 3;
				return gameStatus;
			}
		}
	int counter = 0;
	for (int r = 0; r < 3; ++r)
	{
		for (int c = 0; c < 3; ++c)
		{
			if (board[r][c] != ' ')
			{
				counter++;
			}
		}
		if (counter == 9 && gameStatus != 1 && gameStatus != 2)
		{
			gameStatus = 4;
			return gameStatus;
		}
	}
}
