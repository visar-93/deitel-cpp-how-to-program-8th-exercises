#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int stop, month, option;
	double jant = 0.00, febt = 0.00, mart = 0.00, aprt = 0.00, mayt = 0.00, junt = 0.00, jult = 0.00, augt = 0.00, sept = 0.00, octt = 0.00, novt = 0.00, dect = 0.00;
	double janr = 0.00, febr = 0.00, marr = 0.00, aprr = 0.00, mayr = 0.00, junr = 0.00, julr = 0.00, augr = 0.00, sepr = 0.00, octr = 0.00, novr = 0.00, decr = 0.00;
	double jan = 0, feb = 0, mar = 0, apr = 0, may = 0, jun = 0, jul = 0, aug = 0, sep = 0, oct = 0, nov = 0, dec = 0, total = 0;
	double house, food, clothe, transport, education, healthcare, vacations, other;
	double yeart = 0.00, yearr = 0.00, yearg = 0.00, yearh = 0.00;;

	cout << "FairTax Calculation\n\n";

	cout << "Please select with which option you want to calculate taxes: \n"
		<< "1) Selecting months manualy\n"
		<< "2) Listing months automaticaly\n";
	cin >> option;

	if (option == 1)
	{
		cout << "Please enter the month (with numbers 1-12) for which you want to calculate taxes:\nEnter EOF to end.\n ";
		cin >> stop;

		while (stop != EOF)
		{

			for (month = 1; month <= 12; ++month)
			{
				switch (month)
				{
				case 1:
				{
					cout << "January Tax Calculation: \n\n";
					cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
					cout << "Expenses: \n";
					cout << "Housing: ";
					cin >> house;
					cout << "Food: ";
					cin >> food;;
					cout << "Clothing: ";
					cin >> clothe;
					cout << "Transportation: ";
					cin >> transport;
					cout << "Education: ";
					cin >> education;
					cout << "Health Care: ";
					cin >> healthcare;
					cout << "Vacation: ";
					cin >> vacations;
					cout << "Other Expenses: ";
					cin >> other;

					jan = house + food + clothe + transport + education + healthcare + vacations + other;
					jant = 0.23 * jan;
					janr = (fmod(jan, 77) * 0.30) + ((jan - fmod(jan, 77)) * 0.30);

					cout << "Total Expenses for January are: " << jan << "$.\n";
					cout << "Taxes in format 23% of total expeces are: " << jant << "$.\n";
					cout << "Taxes in format 30% for each 77$ spent are: " << janr << "$.\n";

					break;
				}
				case 2:
				{
					cout << "February Tax Calculation: \n\n";
					cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
					cout << "Expenses: \n";
					cout << "Housing: ";
					cin >> house;
					cout << "Food: ";
					cin >> food;;
					cout << "Clothing: ";
					cin >> clothe;
					cout << "Transportation: ";
					cin >> transport;
					cout << "Education: ";
					cin >> education;
					cout << "Health Care: ";
					cin >> healthcare;
					cout << "Vacation: ";
					cin >> vacations;
					cout << "Other Expenses: ";
					cin >> other;

					feb = house + food + clothe + transport + education + healthcare + vacations + other;
					febt = 0.23 * feb;
					febr = (fmod(feb, 77) * 0.30) + ((feb - fmod(feb, 77)) * 0.30);

					cout << "Total Expenses for February are: " << feb << "$.\n";
					cout << "Taxes in format 23% of total expeces are: " << febt << "$.\n";
					cout << "Taxes in format 30% for each 77$ spent are: " << febr << "$.\n";
					break;
				}
				case 3:
				{
					cout << "March Tax Calculation: \n\n";
					cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
					cout << "Expenses: \n";
					cout << "Housing: ";
					cin >> house;
					cout << "Food: ";
					cin >> food;;
					cout << "Clothing: ";
					cin >> clothe;
					cout << "Transportation: ";
					cin >> transport;
					cout << "Education: ";
					cin >> education;
					cout << "Health Care: ";
					cin >> healthcare;
					cout << "Vacation: ";
					cin >> vacations;
					cout << "Other Expenses: ";
					cin >> other;

					mar = house + food + clothe + transport + education + healthcare + vacations + other;
					mart = 0.23 * mar;
					marr = (fmod(mar, 77) * 0.30) + ((mar - fmod(mar, 77)) * 0.30);

					cout << "Total Expenses for March are: " << feb << "$.\n";
					cout << "Taxes in format 23% of total expeces are: " << febt << "$.\n";
					cout << "Taxes in format 30% for each 77$ spent are: " << febr << "$.\n";
					break;
				}
				case 4:
				{
					cout << "April Tax Calculation: \n\n";
					cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
					cout << "Expenses: \n";
					cout << "Housing: ";
					cin >> house;
					cout << "Food: ";
					cin >> food;;
					cout << "Clothing: ";
					cin >> clothe;
					cout << "Transportation: ";
					cin >> transport;
					cout << "Education: ";
					cin >> education;
					cout << "Health Care: ";
					cin >> healthcare;
					cout << "Vacation: ";
					cin >> vacations;
					cout << "Other Expenses: ";
					cin >> other;

					apr = house + food + clothe + transport + education + healthcare + vacations + other;
					aprt = 0.23 * apr;
					aprr = (fmod(apr, 77) * 0.30) + ((apr - fmod(apr, 77)) * 0.30);

					cout << "Total Expenses for April are: " << apr << "$.\n";
					cout << "Taxes in format 23% of total expeces are: " << apr << "$.\n";
					cout << "Taxes in format 30% for each 77$ spent are: " << apr << "$.\n";


					break;
				}
				case 5:
				{
					cout << "May Tax Calculation: \n\n";
					cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
					cout << "Expenses: \n";
					cout << "Housing: ";
					cin >> house;
					cout << "Food: ";
					cin >> food;;
					cout << "Clothing: ";
					cin >> clothe;
					cout << "Transportation: ";
					cin >> transport;
					cout << "Education: ";
					cin >> education;
					cout << "Health Care: ";
					cin >> healthcare;
					cout << "Vacation: ";
					cin >> vacations;
					cout << "Other Expenses: ";
					cin >> other;

					may = house + food + clothe + transport + education + healthcare + vacations + other;
					mayt = 0.23 * may;
					mayr = (fmod(may, 77) * 0.30) + ((may - fmod(may, 77)) * 0.30);

					cout << "Total Expenses for May are: " << may << "$.\n";
					cout << "Taxes in format 23% of total expeces are: " << mayt << "$.\n";
					cout << "Taxes in format 30% for each 77$ spent are: " << mayr << "$.\n";

					break;
				}
				case 6:
				{
					cout << "June Tax Calculation: \n\n";
					cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
					cout << "Expenses: \n";
					cout << "Housing: ";
					cin >> house;
					cout << "Food: ";
					cin >> food;;
					cout << "Clothing: ";
					cin >> clothe;
					cout << "Transportation: ";
					cin >> transport;
					cout << "Education: ";
					cin >> education;
					cout << "Health Care: ";
					cin >> healthcare;
					cout << "Vacation: ";
					cin >> vacations;
					cout << "Other Expenses: ";
					cin >> other;

					jun = house + food + clothe + transport + education + healthcare + vacations + other;
					junt = 0.23 * jun;
					junr = (fmod(jun, 77) * 0.30) + ((jun - fmod(jun, 77)) * 0.30);

					cout << "Total Expenses for June are: " << jun << "$.\n";
					cout << "Taxes in format 23% of total expeces are: " << junt << "$.\n";
					cout << "Taxes in format 30% for each 77$ spent are: " << junr << "$.\n";
					break;
				}
				case 7:
				{
					cout << "July Tax Calculation: \n\n";
					cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
					cout << "Expenses: \n";
					cout << "Housing: ";
					cin >> house;
					cout << "Food: ";
					cin >> food;;
					cout << "Clothing: ";
					cin >> clothe;
					cout << "Transportation: ";
					cin >> transport;
					cout << "Education: ";
					cin >> education;
					cout << "Health Care: ";
					cin >> healthcare;
					cout << "Vacation: ";
					cin >> vacations;
					cout << "Other Expenses: ";
					cin >> other;

					jul = house + food + clothe + transport + education + healthcare + vacations + other;
					jult = 0.23 * jul;
					julr = (fmod(jul, 77) * 0.30) + ((jul - fmod(jul, 77)) * 0.30);

					cout << "Total Expenses for July are: " << jul << "$.\n";
					cout << "Taxes in format 23% of total expeces are: " << jult << "$.\n";
					cout << "Taxes in format 30% for each 77$ spent are: " << julr << "$.\n";
					break;
				}
				case 8:
				{
					cout << "August Tax Calculation: \n\n";
					cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
					cout << "Expenses: \n";
					cout << "Housing: ";
					cin >> house;
					cout << "Food: ";
					cin >> food;;
					cout << "Clothing: ";
					cin >> clothe;
					cout << "Transportation: ";
					cin >> transport;
					cout << "Education: ";
					cin >> education;
					cout << "Health Care: ";
					cin >> healthcare;
					cout << "Vacation: ";
					cin >> vacations;
					cout << "Other Expenses: ";
					cin >> other;

					aug = house + food + clothe + transport + education + healthcare + vacations + other;
					augt = 0.23 * aug;
					augr = (fmod(aug, 77) * 0.30) + ((aug - fmod(aug, 77)) * 0.30);

					cout << "Total Expenses for August are: " << aug << "$.\n";
					cout << "Taxes in format 23% of total expeces are: " << augt << "$.\n";
					cout << "Taxes in format 30% for each 77$ spent are: " << augr << "$.\n";
					break;
				}
				case 9:
				{
					cout << "September Tax Calculation: \n\n";
					cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
					cout << "Expenses: \n";
					cout << "Housing: ";
					cin >> house;
					cout << "Food: ";
					cin >> food;;
					cout << "Clothing: ";
					cin >> clothe;
					cout << "Transportation: ";
					cin >> transport;
					cout << "Education: ";
					cin >> education;
					cout << "Health Care: ";
					cin >> healthcare;
					cout << "Vacation: ";
					cin >> vacations;
					cout << "Other Expenses: ";
					cin >> other;

					sep = house + food + clothe + transport + education + healthcare + vacations + other;
					sept = 0.23 * sep;
					sepr = (fmod(sep, 77) * 0.30) + ((sep - fmod(sep, 77)) * 0.30);

					cout << "Total Expenses for September are: " << sep << "$.\n";
					cout << "Taxes in format 23% of total expeces are: " << sept << "$.\n";
					cout << "Taxes in format 30% for each 77$ spent are: " << sepr << "$.\n";
					break;
				}
				case 10:
				{
					cout << "October Tax Calculation: \n\n";
					cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
					cout << "Expenses: \n";
					cout << "Housing: ";
					cin >> house;
					cout << "Food: ";
					cin >> food;;
					cout << "Clothing: ";
					cin >> clothe;
					cout << "Transportation: ";
					cin >> transport;
					cout << "Education: ";
					cin >> education;
					cout << "Health Care: ";
					cin >> healthcare;
					cout << "Vacation: ";
					cin >> vacations;
					cout << "Other Expenses: ";
					cin >> other;

					oct = house + food + clothe + transport + education + healthcare + vacations + other;
					octt = 0.23 * oct;
					octr = (fmod(oct, 77) * 0.30) + ((oct - fmod(oct, 77)) * 0.30);

					cout << "Total Expenses for October are: " << oct << "$.\n";
					cout << "Taxes in format 23% of total expeces are: " << octt << "$.\n";
					cout << "Taxes in format 30% for each 77$ spent are: " << octr << "$.\n";
					break;
				}
				case 11:
				{
					cout << "November Tax Calculation: \n\n";
					cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
					cout << "Expenses: \n";
					cout << "Housing: ";
					cin >> house;
					cout << "Food: ";
					cin >> food;;
					cout << "Clothing: ";
					cin >> clothe;
					cout << "Transportation: ";
					cin >> transport;
					cout << "Education: ";
					cin >> education;
					cout << "Health Care: ";
					cin >> healthcare;
					cout << "Vacation: ";
					cin >> vacations;
					cout << "Other Expenses: ";
					cin >> other;

					nov = house + food + clothe + transport + education + healthcare + vacations + other;
					novt = 0.23 * nov;
					novr = (fmod(nov, 77) * 0.30) + ((nov - fmod(nov, 77)) * 0.30);

					cout << "Total Expenses for November are: " << nov << "$.\n";
					cout << "Taxes in format 23% of total expeces are: " << novt << "$.\n";
					cout << "Taxes in format 30% for each 77$ spent are: " << novr << "$.\n";
					break;
				}
				case 12:
				{
					cout << "December Tax Calculation: \n\n";
					cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
					cout << "Expenses: \n";
					cout << "Housing: ";
					cin >> house;
					cout << "Food: ";
					cin >> food;;
					cout << "Clothing: ";
					cin >> clothe;
					cout << "Transportation: ";
					cin >> transport;
					cout << "Education: ";
					cin >> education;
					cout << "Health Care: ";
					cin >> healthcare;
					cout << "Vacation: ";
					cin >> vacations;
					cout << "Other Expenses: ";
					cin >> other;

					dec = house + food + clothe + transport + education + healthcare + vacations + other;
					dect = 0.23 * dec;
					decr = (fmod(dec, 77) * 0.30) + ((dec - fmod(dec, 77)) * 0.30);

					cout << "Total Expenses for December are: " << dec << "$.\n";
					cout << "Taxes in format 23% of total expeces are: " << dect << "$.\n";
					cout << "Taxes in format 30% for each 77$ spent are: " << decr << "$.\n";
					break;
				}
				}
				total = jan + feb + mar + apr + may + jun + jul + aug + sep + oct + nov + dec;
				yeart = jant + febt + mart + aprt + mayt + junt + jult + augt + sept + octt + novt + dect;
				yearr = janr + febr + marr + aprr + mayr + junr + julr + augr + sepr + octr + novr + decr;
				
				cout << "\nYearly total amount for selected months is: " << total << "$.\n";
				cout << "Yearly tax amount in format 23% of total expenses is: " << yeart << "$.\n";
				cout << "Yearly tax amount in format 30% for each 77$ spent is: " << yearr << "$.\n";
				
			}
		}
	}

	else if (option == 2)
	{
		cout << "Please enter the monthly expenses in order to calculate taxes:\nEnter EOF to end.\n ";

		for (month = 1; month <= 12; ++month)
		{
			switch (month)
			{
			case 1:
			{
				cout << "January Tax Calculation: \n\n";
				cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
				cout << "Expenses: \n";
				cout << "Housing: ";
				cin >> house;
				cout << "Food: ";
				cin >> food;;
				cout << "Clothing: ";
				cin >> clothe;
				cout << "Transportation: ";
				cin >> transport;
				cout << "Education: ";
				cin >> education;
				cout << "Health Care: ";
				cin >> healthcare;
				cout << "Vacation: ";
				cin >> vacations;
				cout << "Other Expenses: ";
				cin >> other;

				jan = house + food + clothe + transport + education + healthcare + vacations + other;
				jant = 0.23 * jan;
				janr = (fmod(jan, 77) * 0.30) + ((jan - fmod(jan, 77)) * 0.30);

				cout << "Total Expenses for January are: " << jan << "$.\n";
				cout << "Taxes in format 23% of total expeces are: " << jant << "$.\n";
				cout << "Taxes in format 30% for each 77$ spent are: " << janr << "$.\n";

				break;
			}
			case 2:
			{
				cout << "February Tax Calculation: \n\n";
				cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
				cout << "Expenses: \n";
				cout << "Housing: ";
				cin >> house;
				cout << "Food: ";
				cin >> food;;
				cout << "Clothing: ";
				cin >> clothe;
				cout << "Transportation: ";
				cin >> transport;
				cout << "Education: ";
				cin >> education;
				cout << "Health Care: ";
				cin >> healthcare;
				cout << "Vacation: ";
				cin >> vacations;
				cout << "Other Expenses: ";
				cin >> other;

				feb = house + food + clothe + transport + education + healthcare + vacations + other;
				febt = 0.23 * feb;
				febr = (fmod(feb, 77) * 0.30) + ((feb - fmod(feb, 77)) * 0.30);

				cout << "Total Expenses for February are: " << feb << "$.\n";
				cout << "Taxes in format 23% of total expeces are: " << febt << "$.\n";
				cout << "Taxes in format 30% for each 77$ spent are: " << febr << "$.\n";
				break;
			}
			case 3:
			{
				cout << "March Tax Calculation: \n\n";
				cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
				cout << "Expenses: \n";
				cout << "Housing: ";
				cin >> house;
				cout << "Food: ";
				cin >> food;;
				cout << "Clothing: ";
				cin >> clothe;
				cout << "Transportation: ";
				cin >> transport;
				cout << "Education: ";
				cin >> education;
				cout << "Health Care: ";
				cin >> healthcare;
				cout << "Vacation: ";
				cin >> vacations;
				cout << "Other Expenses: ";
				cin >> other;

				mar = house + food + clothe + transport + education + healthcare + vacations + other;
				mart = 0.23 * mar;
				marr = (fmod(mar, 77) * 0.30) + ((mar - fmod(mar, 77)) * 0.30);

				cout << "Total Expenses for March are: " << feb << "$.\n";
				cout << "Taxes in format 23% of total expeces are: " << febt << "$.\n";
				cout << "Taxes in format 30% for each 77$ spent are: " << febr << "$.\n";
				break;
			}
			case 4:
			{
				cout << "April Tax Calculation: \n\n";
				cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
				cout << "Expenses: \n";
				cout << "Housing: ";
				cin >> house;
				cout << "Food: ";
				cin >> food;;
				cout << "Clothing: ";
				cin >> clothe;
				cout << "Transportation: ";
				cin >> transport;
				cout << "Education: ";
				cin >> education;
				cout << "Health Care: ";
				cin >> healthcare;
				cout << "Vacation: ";
				cin >> vacations;
				cout << "Other Expenses: ";
				cin >> other;

				apr = house + food + clothe + transport + education + healthcare + vacations + other;
				aprt = 0.23 * apr;
				aprr = (fmod(apr, 77) * 0.30) + ((apr - fmod(apr, 77)) * 0.30);

				cout << "Total Expenses for April are: " << apr << "$.\n";
				cout << "Taxes in format 23% of total expeces are: " << apr << "$.\n";
				cout << "Taxes in format 30% for each 77$ spent are: " << apr << "$.\n";


				break;
			}
			case 5:
			{
				cout << "May Tax Calculation: \n\n";
				cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
				cout << "Expenses: \n";
				cout << "Housing: ";
				cin >> house;
				cout << "Food: ";
				cin >> food;;
				cout << "Clothing: ";
				cin >> clothe;
				cout << "Transportation: ";
				cin >> transport;
				cout << "Education: ";
				cin >> education;
				cout << "Health Care: ";
				cin >> healthcare;
				cout << "Vacation: ";
				cin >> vacations;
				cout << "Other Expenses: ";
				cin >> other;

				may = house + food + clothe + transport + education + healthcare + vacations + other;
				mayt = 0.23 * may;
				mayr = (fmod(may, 77) * 0.30) + ((may - fmod(may, 77)) * 0.30);

				cout << "Total Expenses for May are: " << may << "$.\n";
				cout << "Taxes in format 23% of total expeces are: " << mayt << "$.\n";
				cout << "Taxes in format 30% for each 77$ spent are: " << mayr << "$.\n";

				break;
			}
			case 6:
			{
				cout << "June Tax Calculation: \n\n";
				cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
				cout << "Expenses: \n";
				cout << "Housing: ";
				cin >> house;
				cout << "Food: ";
				cin >> food;;
				cout << "Clothing: ";
				cin >> clothe;
				cout << "Transportation: ";
				cin >> transport;
				cout << "Education: ";
				cin >> education;
				cout << "Health Care: ";
				cin >> healthcare;
				cout << "Vacation: ";
				cin >> vacations;
				cout << "Other Expenses: ";
				cin >> other;

				jun = house + food + clothe + transport + education + healthcare + vacations + other;
				junt = 0.23 * jun;
				junr = (fmod(jun, 77) * 0.30) + ((jun - fmod(jun, 77)) * 0.30);

				cout << "Total Expenses for June are: " << jun << "$.\n";
				cout << "Taxes in format 23% of total expeces are: " << junt << "$.\n";
				cout << "Taxes in format 30% for each 77$ spent are: " << junr << "$.\n";
				break;
			}
			case 7:
			{
				cout << "July Tax Calculation: \n\n";
				cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
				cout << "Expenses: \n";
				cout << "Housing: ";
				cin >> house;
				cout << "Food: ";
				cin >> food;;
				cout << "Clothing: ";
				cin >> clothe;
				cout << "Transportation: ";
				cin >> transport;
				cout << "Education: ";
				cin >> education;
				cout << "Health Care: ";
				cin >> healthcare;
				cout << "Vacation: ";
				cin >> vacations;
				cout << "Other Expenses: ";
				cin >> other;

				jul = house + food + clothe + transport + education + healthcare + vacations + other;
				jult = 0.23 * jul;
				julr = (fmod(jul, 77) * 0.30) + ((jul - fmod(jul, 77)) * 0.30);

				cout << "Total Expenses for July are: " << jul << "$.\n";
				cout << "Taxes in format 23% of total expeces are: " << jult << "$.\n";
				cout << "Taxes in format 30% for each 77$ spent are: " << julr << "$.\n";
				break;
			}
			case 8:
			{
				cout << "August Tax Calculation: \n\n";
				cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
				cout << "Expenses: \n";
				cout << "Housing: ";
				cin >> house;
				cout << "Food: ";
				cin >> food;;
				cout << "Clothing: ";
				cin >> clothe;
				cout << "Transportation: ";
				cin >> transport;
				cout << "Education: ";
				cin >> education;
				cout << "Health Care: ";
				cin >> healthcare;
				cout << "Vacation: ";
				cin >> vacations;
				cout << "Other Expenses: ";
				cin >> other;

				aug = house + food + clothe + transport + education + healthcare + vacations + other;
				augt = 0.23 * aug;
				augr = (fmod(aug, 77) * 0.30) + ((aug - fmod(aug, 77)) * 0.30);

				cout << "Total Expenses for August are: " << aug << "$.\n";
				cout << "Taxes in format 23% of total expeces are: " << augt << "$.\n";
				cout << "Taxes in format 30% for each 77$ spent are: " << augr << "$.\n";
				break;
			}
			case 9:
			{
				cout << "September Tax Calculation: \n\n";
				cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
				cout << "Expenses: \n";
				cout << "Housing: ";
				cin >> house;
				cout << "Food: ";
				cin >> food;;
				cout << "Clothing: ";
				cin >> clothe;
				cout << "Transportation: ";
				cin >> transport;
				cout << "Education: ";
				cin >> education;
				cout << "Health Care: ";
				cin >> healthcare;
				cout << "Vacation: ";
				cin >> vacations;
				cout << "Other Expenses: ";
				cin >> other;

				sep = house + food + clothe + transport + education + healthcare + vacations + other;
				sept = 0.23 * sep;
				sepr = (fmod(sep, 77) * 0.30) + ((sep - fmod(sep, 77)) * 0.30);

				cout << "Total Expenses for September are: " << sep << "$.\n";
				cout << "Taxes in format 23% of total expeces are: " << sept << "$.\n";
				cout << "Taxes in format 30% for each 77$ spent are: " << sepr << "$.\n";
				break;
			}
			case 10:
			{
				cout << "October Tax Calculation: \n\n";
				cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
				cout << "Expenses: \n";
				cout << "Housing: ";
				cin >> house;
				cout << "Food: ";
				cin >> food;;
				cout << "Clothing: ";
				cin >> clothe;
				cout << "Transportation: ";
				cin >> transport;
				cout << "Education: ";
				cin >> education;
				cout << "Health Care: ";
				cin >> healthcare;
				cout << "Vacation: ";
				cin >> vacations;
				cout << "Other Expenses: ";
				cin >> other;

				oct = house + food + clothe + transport + education + healthcare + vacations + other;
				octt = 0.23 * oct;
				octr = (fmod(oct, 77) * 0.30) + ((oct - fmod(oct, 77)) * 0.30);

				cout << "Total Expenses for October are: " << oct << "$.\n";
				cout << "Taxes in format 23% of total expeces are: " << octt << "$.\n";
				cout << "Taxes in format 30% for each 77$ spent are: " << octr << "$.\n";
				break;
			}
			case 11:
			{
				cout << "November Tax Calculation: \n\n";
				cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
				cout << "Expenses: \n";
				cout << "Housing: ";
				cin >> house;
				cout << "Food: ";
				cin >> food;;
				cout << "Clothing: ";
				cin >> clothe;
				cout << "Transportation: ";
				cin >> transport;
				cout << "Education: ";
				cin >> education;
				cout << "Health Care: ";
				cin >> healthcare;
				cout << "Vacation: ";
				cin >> vacations;
				cout << "Other Expenses: ";
				cin >> other;

				nov = house + food + clothe + transport + education + healthcare + vacations + other;
				novt = 0.23 * nov;
				novr = (fmod(nov, 77) * 0.30) + ((nov - fmod(nov, 77)) * 0.30);

				cout << "Total Expenses for November are: " << nov << "$.\n";
				cout << "Taxes in format 23% of total expeces are: " << novt << "$.\n";
				cout << "Taxes in format 30% for each 77$ spent are: " << novr << "$.\n";
				break;
			}
			case 12:
			{
				cout << "December Tax Calculation: \n\n";
				cout << "Please enter the amount for each category below (if you don't have expenses put 0)\n";
				cout << "Expenses: \n";
				cout << "Housing: ";
				cin >> house;
				cout << "Food: ";
				cin >> food;;
				cout << "Clothing: ";
				cin >> clothe;
				cout << "Transportation: ";
				cin >> transport;
				cout << "Education: ";
				cin >> education;
				cout << "Health Care: ";
				cin >> healthcare;
				cout << "Vacation: ";
				cin >> vacations;
				cout << "Other Expenses: ";
				cin >> other;

				dec = house + food + clothe + transport + education + healthcare + vacations + other;
				dect = 0.23 * dec;
				decr = (fmod(dec, 77) * 0.30) + ((dec - fmod(dec, 77)) * 0.30);

				cout << "Total Expenses for December are: " << dec << "$.\n";
				cout << "Taxes in format 23% of total expeces are: " << dect << "$.\n";
				cout << "Taxes in format 30% for each 77$ spent are: " << decr << "$.\n";
				break;
			}
			}
			total = jan + feb + mar + apr + may + jun + jul + aug + sep + oct + nov + dec;
			yeart = jant + febt + mart + aprt + mayt + junt + jult + augt + sept + octt + novt + dect;
			yearr = janr + febr + marr + aprr + mayr + junr + julr + augr + sepr + octr + novr + decr;

			cout << "\nYearly total amount is: " << total << "$.\n";
			cout << "Yearly tax amount in format 23% of total expenses is: " << yeart << "$.\n";
			cout << "Yearly tax amount in format 30% for each 77$ spent is: " << yearr << "$.\n";
		}
	}
	return 0;
}
