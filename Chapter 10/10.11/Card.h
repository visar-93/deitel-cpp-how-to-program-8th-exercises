#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

#ifndef CARD_H
#define CARD_H

const int faceSize = 13;
const int suitSize = 4;

class Card
{
public:
	Card(int f, int s);// constructor that receives two int and initializes data members face and suit
	string toString(); // returns the card as string in the form "face of suit"
	string faceSeperate(); // returns the face of the dealed card to compare with other cards
	string suitSeperate(); // returns the suit of the dealed card to compare with other cards
	static string arrayFace[faceSize]; // static arrays representing the faces
	static string arraySuit[suitSize]; // static arrays representing the suits
private:
	int face; // data member
	int suit; // data member
};

// CCP PART

// initializing arrays with elements
string Card::arrayFace[faceSize] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K" };
string Card::arraySuit[suitSize] = { "Hearts","Diamonds","Clubs","Spades" };

Card::Card(int f, int s) // initialize data members face and suit
{
	face = f;
	suit = s;
}

string Card::toString() // create a variable card of type string 
{
	string card;
	card = Card::arrayFace[face] + " of " + Card::arraySuit[suit];

	return card;
}

string Card::faceSeperate()
{
	string faceS;
	faceS = Card::arrayFace[face];

	return faceS;
}

string Card::suitSeperate()
{
	string suitS;
	suitS = Card::arraySuit[suit];

	return suitS;
}

#endif // !CARD_H
