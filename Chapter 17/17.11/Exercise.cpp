#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>
#include "HardwareShop.h"
using namespace std;

int enterOptions();
void readList(fstream &);
void updateList(fstream &);
void newTool(fstream &);
void deleteTool(fstream &);
void outputLine(ostream&, const HardwareShop &);
int getPartNumber(const char * const);

enum Options { PRINT = 1, UPDATE, NEW, DELETE, END };

int main()
{
	fstream inOutShop("hardware.dat", ios::in | ios::out | ios::binary);

	if (!inOutShop)
	{
		cerr << "File could not be opened." << endl;
		exit(1);
	}

	int option;

	while ((option = enterOptions()) != END)
	{
		switch (option)
		{
		case PRINT:
			readList(inOutShop);
			break;
		case UPDATE:
			updateList(inOutShop);
			break;
		case NEW:
			newTool(inOutShop);
			break;
		case DELETE:
			deleteTool(inOutShop);
			break;
		default:
			cerr << "Incorrect option" << endl;
			break;
		}

		inOutShop.clear();
	}
	return 0;
}

int enterOptions()
{
	cout << "\nSelect Option" << endl
		<< "1- store a formatted text file of accounts" << endl
		<< "   called \"hardware.dat\" for printing" << endl
		<< "2- update a tool" << endl
		<< "3- add a new tool" << endl
		<< "4- delete an account" << endl
		<< "5- end program\n?";

	int menuOption;
	cin >> menuOption;
	return menuOption;
}

void readList(fstream &readfromFile)
{
	ofstream outPrintFile("list.txt", ios::out);

	if (!outPrintFile)
	{
		cerr << "File could not be created." << endl;
		exit(1);
	}

	outPrintFile << left << setw(10) << "Part No." << setw(20)
		<< "Part Description" << setw(10) << "Quantity" << right
		<< setw(10) << "Unit Price" << endl;

	readfromFile.seekg(0);

	HardwareShop shop;
	readfromFile.read(reinterpret_cast<char * >(&shop),
		sizeof(HardwareShop));

	while (!readfromFile.eof())
	{
		if (shop.getPartNo() != 0)
			outputLine(cout, shop);

		readfromFile.read(reinterpret_cast<char * >(&shop),
			sizeof(HardwareShop));
	}
}

void updateList(fstream &updateList)
{
	int partNumber = getPartNumber("Enter part to update");

	updateList.seekg((partNumber - 1) * sizeof(HardwareShop));

	HardwareShop shop;
	updateList.read(reinterpret_cast<char *> (&shop),
		sizeof(HardwareShop));

	if (shop.getPartNo() != 0)
	{
		outputLine(cout, shop);

		int newQuantity;
		cout << "\nEnter quantity: ";
		cin >> newQuantity;
		shop.setQuantity(newQuantity);
		double newCost;
		cout << "\nEnter unit price: ";
		cin >> newCost;
		shop.setCost(newCost);

		outputLine(cout, shop);

		updateList.seekp((partNumber - 1) * sizeof(HardwareShop));

		updateList.write(reinterpret_cast<const char*>(&shop),
			sizeof(HardwareShop));
	}
	else
		cerr << "Product with no#" << partNumber
		<< " has no information." << endl;
}

void newTool(fstream &insertInFile)
{
	int partNumber = getPartNumber("Enter new part number");

	insertInFile.seekg((partNumber - 1) * sizeof(HardwareShop));

	HardwareShop shop;

	insertInFile.read(reinterpret_cast<char *> (&shop),
		sizeof(HardwareShop));

	if (shop.getPartNo() == 0)
	{
		string tool;
		int qty;
		double price;

		cout << "Enter part name, quantity and unit price\n?";
		cin >> setw(20) >> tool;
		cin >> setw(10) >> qty;
		cin >> setw(10) >> price;

		shop.setTool(tool);
		shop.setQuantity(qty);
		shop.setCost(price);
		shop.setPartNo(partNumber);

		insertInFile.seekp((partNumber - 1) * sizeof(HardwareShop));

		insertInFile.write(reinterpret_cast<const char*> (&shop),
			sizeof(HardwareShop));
	}
	else
		cerr << "Product with no #" << partNumber
		<< " already contains information." << endl;
}

void deleteTool(fstream &deleteFromFile)
{
	int partNumber = getPartNumber("Enter part to delete");

	deleteFromFile.seekg((partNumber - 1) * sizeof(HardwareShop));
	
	HardwareShop shop;
	deleteFromFile.read(reinterpret_cast<char *>(&shop), 
		sizeof(HardwareShop));
	
	if (shop.getPartNo() != 0)
	{
		HardwareShop blankShop;

		deleteFromFile.seekp((partNumber - 1) * sizeof(HardwareShop));

		deleteFromFile.write(reinterpret_cast<const char*>(&blankShop),
			sizeof(HardwareShop));

		cout << "Product with no #" << partNumber << " is deletet.\n";
	}
	else
		cerr << "Product with no #" << partNumber << " is empty.\n";
}

void outputLine(ostream &output, const HardwareShop &record)
{
	output << left << setw(10) << record.getPartNo()
		<< setw(20) << record.getTool()
		<< setw(10) << record.getQuantity()
		<< setw(10) << setprecision(2) << right << fixed
		<< showpoint << record.getCost() << endl;
}

int getPartNumber(const char * const prompt)
{
	int partNumber;

	do
	{
		cout << prompt << " (1 - 100): ";
		cin >> partNumber;
	} while (partNumber < 1 || partNumber > 100);

	return partNumber;
}
