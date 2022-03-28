#include "stdafx.h"
#include <iostream>
using namespace std;

int main()

{
//Option 2 

int num;//The five digit number that will be entered from keyboard
int first, second, third, fourth, fifth; //Digits from the entered number 
int second2, third3, fourth4;//Digits that will be appeared in console separately 

cout << "Enter a number with five digits: ";//Appears in console and requests from user to enter a number with five digits

cin >> num; //The user enters the number with five digits

first = num / 10000;//When you divide the number of five digits with 10000 you will earn the first digit only because we declared the type of variable as 'int' and it won't show the residue(the part after the first digit).

second = num % 10000;//When you use modulus with 10000 for a number of five digits it will show you the residue without the first digit (it means the other four digits) which it will help us to determine the second digit separately).

second2 = second / 1000;//From the variable second where with modulus operator we made a four digit number we will divide it with 1000 and we will earn the second digit seperately without residue(because of variable declared as int type).

third = num % 1000;//When you use modulus with 1000 for a number of five digits it will show you the residue without the two first digits (it means the other last three digits) which it will help us to determine the third digit separately).

third3 = third / 100;//From the variable third where with modulus operator we made a three digit number we will divide it with 100 and we will earn the third digit separately without residue(because of variable declared as int type).

fourth = num % 100;//When you use modulus with 100 for a number of five digits it will show you the residue without the three first digits (it means the other last two digits) which it will help us to determine the fourth digit separately).

fourth4 = fourth / 10;//From the variable fourth where with modulus operator we made a two digit number we will divide it with 10 and we will earn the fourth digit separately without residue(because of variable declared as int type).

fifth = num % 10;//When you use modulus with 10 for a number of five digits it will show you the residue without the four first digits (it means the last digit) which it will help us to determine the fifth digit separately).


cout << first << "   " << second2 << "   " << third3 << "   " << fourth4 << "   " <<fifth<<  endl;

	return 0;
}
