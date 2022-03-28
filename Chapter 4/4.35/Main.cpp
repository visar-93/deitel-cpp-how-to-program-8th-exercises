#include "stdafx.h"
#include  <iostream>
#include "Crypto.h"
using namespace std;

int main()
{
	Crypto enCrypted;

	int num, num1;

	cout << "Please enter a four digit number: ";
	cin >> num;
	string enc = enCrypted.encrypt(num);
	cout << "Encrypted msg: " << enc << "\n";

	string dec = enCrypted.decrypt(stoi(enc));

	cout << "Decrypted msg: " << dec << "\n";
 	
	return 0;
}

