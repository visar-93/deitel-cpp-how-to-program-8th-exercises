#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe
{
public:
	TicTacToe();
	void PrintResult();
	bool checkValidity(int i, int j);
	void makeMove();
	int StatusOfGame();
private:
	char board[3][3];
	int char1, char2;
};

#endif // !TICTACTOE_H
