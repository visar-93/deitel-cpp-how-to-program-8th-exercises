#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include<string>
#include "Tree.h"
#include "Tree2.h"
#include "String2.h"
using namespace std;

int main()
{
	Tree2<String1> stringTree; 
	char sentence[80], *tokenPtr;

	cout << "Enter a sentence:\n";
	cin.getline(sentence, 80);

	tokenPtr = strtok(sentence, " ");

	while (tokenPtr != 0)
	{
		String1 *newString = new String1(tokenPtr);
		stringTree.insertNode(*newString);
		tokenPtr = strtok(0, " ");
	}

	cout << "\nPreorder traversal\n";
	stringTree.preOrderTraversal();
	cout << endl;
	cout << "\nInorder traversal\n";
	stringTree.inOrderTraversal();
	cout << endl;
	cout << "\nPostorder traversal\n";
	stringTree.postOrderTraversal();
	cout << endl<< endl;

	cout << "\n\nThere are " << stringTree.getDepth()
		<< " levels in this binary tree\n";

	return 0;
}


