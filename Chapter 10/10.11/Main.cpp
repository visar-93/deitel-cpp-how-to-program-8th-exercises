#include "stdafx.h"
#include <iostream>
#include "DeckOfCards.h"
using namespace std;

int main()
{
	DeckOfCards deck;
	deck.printDeck();
	cout << endl;
	deck.shuffle();
	deck.printDeck();
	cout << endl;
	
	while (deck.moreCards())
	{
		cout << "Pulled card " << deck.dealCard().toString();
		cout << endl;
		cout << "Cards left: " << deck.getSize();
		cout << endl;
		cout << endl;
	}
	
	cout << endl << endl;
	deck.letsPlay();
	cout << endl;
    return 0;
}

