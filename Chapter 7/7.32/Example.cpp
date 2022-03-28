#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Funksioni testPolindrome i cili kerkon nje vektor qe permban 
// elemente te tipit char (karaktere), dhe dy variabla te tipit int
bool testPalindrome(const char[], int, int);

int main()
{
	const int SIZE = 80;// deklarimi i madhesise se vektorit(gjithsej 80 karaktere)
	char c, string[SIZE], copy[SIZE];// deklarimi i variables c, vektorit string dhe copy
	int count = 0, copyCount, i; // deklarimi i numeruesve

	cout << "Enter a sentence:\n";

	//Kushti perderisa variabla "c" e shtypur nga perdoruesi ndryshon prej
	//rreshtit te ri dhe count eshte me e vogel se SIZE(madhesia e vektorit)
	//variabla c(karakteret e shtypura nga perdoruesei) ruhen ne lokacionin
	// string[count++], ky ne kete rast count i bjen te jete 1;

	while ((c = cin.get()) != '\n' && count < SIZE)
		string[count++] = c;

	string[count] = '\0'; // terminate cstring

	// make a copy of cstring without spaces

	//copyCount dhe i inicializohen me vleren 0, dhe string[i] ndryshon prej '\0'
	//, counteri i inkrementohet ;
	for (copyCount = 0, i = 0; string[i] != '\0'; ++i)
		if (string[i] != ' ') // Nese string[i](karakteret e ruajtura ne elementin i te vektorit string) 
			copy[copyCount++] = string[i];//ndryshojne prej hapesires, elementi copy[copyCount++] permban vleren e tij
	//Nese kushti per kthim TRUE nuk ka qen i vertet, deri ne realizimin e tij thirret funksioni rekursiv copyCount-1
	if (testPalindrome(copy, 0, copyCount - 1))
		cout << '\"' << string << "\" is a palindrome" << endl;
	else
		cout << '\"' << string << "\" is not a palindrome" << endl;

	return 0;
}

bool testPalindrome(const char array[], int left, int right)
{
	if (left == right || left > right)
		return true;
	else if (array[left] != array[right])
		return false;
	else
		return testPalindrome(array, left + 1, right - 1);
}
