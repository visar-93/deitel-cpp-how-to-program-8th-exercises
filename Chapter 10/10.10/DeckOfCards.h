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
private:

	int currentCard; // 
	vector<Card> deck; // vector of class Card to store the Cards
};

// CPP PART

DeckOfCards::DeckOfCards()
{
	currentCard = 51; // initialize currentCard to max value

	deck = {}; // initialize empty vector
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
		int j = (rand() % deckSize); // j is equal to random card in total 52 cards
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

int DeckOfCards::getSize() // the function that returns the size of the deck
{
	return currentCard + 1;
}
