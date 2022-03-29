// tokenizing is not with str_tok but whith other function
#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Repalcement(string &sRef);
void str_split(vector<string> &vect, string &str, char delimiter);

int main()
{
	vector<string> splittingString = {};
	string sentence = "";
	
	cout << "Enter a sentence: \n";
	getline(cin, sentence);
	
	Repalcement(sentence);

	cout << endl << sentence << endl;
	
	cout << "Splitting sentence into tokens: \n";
	str_split(splittingString, sentence, ' ');

	for (size_t i = 0; i < splittingString.size(); ++i)
	{
		cout << splittingString[i] << endl;
	}

	cout << endl;

	return 0;
}
void Repalcement(string &stringRef)
{
	int position = stringRef.find(".");
	while (position != string::npos)
	{
		stringRef.replace(position, 1, " ");
		position = stringRef.find(".", position + 1);
	}

	position = stringRef.find(",");
	while (position != string::npos)
	{
		stringRef.replace(position, 1, " ");
		position = stringRef.find(",", position + 1);
	}
	
	position = stringRef.find("!");
	while (position != string::npos)
	{
		stringRef.replace(position, 1, " ");
		position = stringRef.find("!", position + 1);
	}

	position = stringRef.find("?");
	while (position != string::npos)
	{
		stringRef.replace(position, 1, " ");
		position = stringRef.find("?", position + 1);
	}
}

void str_split(vector<string> &vect, string &str, char delimiter)
{
	string chunk = "";
	for (size_t i = 0; i < str.size(); i++) {
		if (str[i] == delimiter) {
			vect.push_back(chunk);
			chunk = "";
		}
		else {
			chunk += str[i];
		}
	}
	if (chunk != "") vect.push_back(chunk);
}

