#include "stdafx.h"
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <iomanip>
#include "Card.h"
using namespace std;

const int cardInDeck = 52;
//string Card::arrayFace[faceSize] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K" };
//string Card::arraySuit[suitSize] = { "Hearts","Diamonds","Clubs","Spades" };

class DeckOfCards
{
public:

	DeckOfCards(); // default constructor
	void shuffle();
	Card dealCard();
	bool moreCards();
	void printDeck();
	int getSize();
	void letsPlay();
	void Calculate(string handFace[], string handSuit[], string tableFace[], string tableSuit[]);
	// function Calculate() calculate the cards and will show the result of cards
	void printCurrent(int i);
	Card hand(int i);
	static int getCardWeight(string number);
private:

	int currentCard; // 
	vector<Card> deck; // vector of class Card to store the Cards
};

// CPP PART

DeckOfCards::DeckOfCards()
{
	currentCard = 51; // initialize currentCard to max value

	deck = {}; // initialize empty vector
	;
	for (int i = 0; i < faceSize; i++)
	{
		for (int j = 0; j < suitSize; j++)
		{
			Card c = Card(i, j); // create an object of class C that receives two int
			deck.push_back(c); // fill vector with combinations of cards
		}
	}
}

void DeckOfCards::shuffle() // functions that shuffles Cards in the deck
{
	int deckSize = deck.size(); // int that is equal with the size of deck vector
	for (int i = 0; i < deckSize; i++)
	{
		int j = ((rand()) % deckSize); // j is equal to random card in total 52 cards
		Card temp = deck[i]; // create Card class object that is equal with the current Card
		deck[i] = deck[j]; // swap random card with current card
		deck[j] = temp;
	}
}

Card DeckOfCards::dealCard()//deal card function that returns the next Card  object from the deck
{
	if (currentCard < 0) return deck[0];
	int index = currentCard;
	currentCard--;
	return deck[index];
}

bool DeckOfCards::moreCards() // function that checks if there are more Cards from deck
{
	return currentCard >= 0;
}

void DeckOfCards::printDeck()
{
	for (int i = 0; i < cardInDeck; ++i)
	{
		cout << left;
		cout << setw(20) << deck[i].toString();
		cout << endl;
	}
}

void DeckOfCards::printCurrent(int i)
{
	cout << endl;
	cout << setw(20) << deck[i].toString();
	cout << endl;
}

int DeckOfCards::getSize() // the function that returns the size of the deck
{
	return currentCard + 1;
}

void DeckOfCards::letsPlay()
{
	DeckOfCards run;
	string hand[2];
	string table[5];
	string faceHand[2];
	string suitHand[2];
	string faceTable[5];
	string suitTable[5];
	run.shuffle();
	cout << "Cards of deck after shuffle:\n";
	run.printDeck();

	cout << "\n\nPlayer pulls two cards.\n";

	for (int i = 0; i < 2; i++)
	{
		run.hand(i);
		cout << "Pulled Card on hand: " << run.hand(i).toString() << endl;
		hand[i] = run.hand(i).toString();
		faceHand[i] = run.hand(i).faceSeperate();
		suitHand[i] = run.hand(i).suitSeperate();
	}

	cout << "\n\nCards on the table: \n";
	for (int j = 2; j < 7; j++)
	{
		run.hand(j);
		run.printCurrent(j);
		table[j - 2] = run.hand(j).toString();
		faceTable[j - 2] = run.hand(j).faceSeperate();
		suitTable[j - 2] = run.hand(j).suitSeperate();
	}
	cout << endl << endl;
	Calculate(faceHand, suitHand, faceTable, suitTable);
}
Card DeckOfCards::hand(int i)
{
	if (i < 0)
		return deck[0];

	return deck[i];
}

void DeckOfCards::Calculate(string handFace[], string handSuit[], string tableFace[], string tableSuit[])
{
	int i, j;
	DeckOfCards calculator;
	int counterFace = 0;
	int counterSuit = 0;
	string allCardFace[7];
	string allCardSuit[7];

	allCardFace[0] = handFace[0];
	allCardFace[1] = handFace[1];
	allCardFace[2] = tableFace[0];
	allCardFace[3] = tableFace[1];
	allCardFace[4] = tableFace[2];
	allCardFace[5] = tableFace[3];
	allCardFace[6] = tableFace[4];
	allCardSuit[0] = handSuit[0];
	allCardSuit[1] = handSuit[1];
	allCardSuit[2] = tableSuit[0];
	allCardSuit[3] = tableSuit[1];
	allCardSuit[4] = tableSuit[2];
	allCardSuit[5] = tableSuit[3];
	allCardSuit[6] = tableSuit[4];


	for (i = 0; i < 2; ++i)
	{
		for (j = 0; j < 5; ++j)
		{
			if (handFace[i] == tableFace[j])
				++counterFace;
			if (handSuit[i] == tableSuit[j])
				++counterSuit;
		}
	}
	if (counterFace == 1)
	{
		cout << "Hand contains a pair: ";
		for (int i = 0; i < 2; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				if (handFace[i] == tableFace[j])
					cout << setw(3) << handFace[i] << " of " << handSuit[i] << " and "
					<< setw(2) << tableFace[j] << " of " << tableSuit[j] << endl;
			}
		}
	}

	else if (counterFace == 2)
	{
		cout << "Hand contains two pair: ";
		for (int i = 0; i < 2; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				if (handFace[i] == tableFace[j])
					cout << setw(3) << handFace[i] << " of " << handSuit[i] << " and "
					<< setw(3) << tableFace[j] << " of " << tableSuit[j];
			}
		}
	}

	else if (counterFace == 3)
	{
		cout << "Hand contains three of a kind: ";
		for (int i = 0; i < 2; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				if (handFace[i] == tableFace[j])
					cout << setw(3) << handFace[i] << " of " << handSuit[i] << " and "
					<< setw(3) << tableFace[j] << " of " << tableSuit[j];
			}
		}
	}
	else if (counterFace == 4)
	{
		cout << "Hand contains four of a kind: ";
		for (int i = 0; i < 2; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				if (handFace[i] == tableFace[j])
					cout << setw(3) << handFace[i] << " of " << handSuit[i] << " and "
					<< setw(3) << tableFace[j] << " of " << tableSuit[j];
			}
		}
	}
	else if (counterSuit == 5)
	{
		cout << "Hand contains a flush: ";
		for (int i = 0; i < 2; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				if (handSuit[i] == tableSuit[j])
					cout << setw(3) << handFace[i] << " of " << handSuit[i] << " and "
					<< setw(3) << tableFace[j] << " of " << tableSuit[j];
			}
		}
	}
	else
	{
		int maximum=0, k=0;
		for (int i = 0; i < 7; ++i)
		{
			if (getCardWeight(allCardFace[i]) > maximum)
			{
				maximum = getCardWeight(allCardFace[i]);
				k = i;			
			}
		}
		cout << "The Highest Card is: " << allCardFace[k] << " of " << allCardSuit[k] << ".\n\n";
	}

	cout << endl;
}

int DeckOfCards::getCardWeight(string number)
{
	if (number == "A")
		return 13;
	else if (number == "K")
		return 12;
	else if (number == "Q")
		return 11;
	else if (number == "J")
		return 10;
	else if (number == "10")
		return 9;
	else if (number == "9")
		return 8;
	else if (number == "8")
		return 7;
	else if (number == "7")
		return 6;
	else if (number == "6")
		return 5;
	else if (number == "5")
		return 4;
	else if (number == "4")
		return 3;
	else if (number == "3")
		return 2;
	else if (number == "2")
		return 1;
}
