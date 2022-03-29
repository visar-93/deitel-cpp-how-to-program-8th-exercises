#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "Tree.h"
using namespace std;

int main()
{
	Tree<int> intTree; // create Tree of int values
	int intValue;

	cout << "Enter 10 integer values:\n";

	// insert 10 integers to intTree
	for (int i = 0; i < 10; ++i)
	{
		cin >> intValue;
		intTree.insertNode(intValue);
	}

	cout << "\nPreOrder traversal\n";
	intTree.preOrderTraversal();

	cout << "\nInOrderTraversal\n";
	intTree.inOrderTraversal();

	cout << "\nPostOrderTraversal\n";
	intTree.postOrderTraversal();

	Tree<double>doubleTree; // create Tree of double values
	double doubleValue;

	cout << fixed << setprecision(1)
		<< "\n\nEnter 10 double values:\n";

	// insert 10 doubles to doubleTree
	for (int j = 0; j < 10; ++j)
	{
		cin >> doubleValue;
		doubleTree.insertNode(doubleValue);
	}

	cout << "\nPreOrder traversal\n";
	doubleTree.preOrderTraversal();

	cout << "\nInOrder traversal\n";
	doubleTree.inOrderTraversal();

	cout << "\nPostOrder traversal\n";
	doubleTree.postOrderTraversal();
	cout << endl;

	return 0;
}

