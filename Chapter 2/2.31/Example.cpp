#include "stdafx.h"
#include <iostream>
#include <string> // was used for exercise 2.31
using namespace std;


int main()

{
cout << "Welcome to share my ride app\n\n";

int opt, seat, people;
string curr_pos, dest;
double dist, road_t, fuel_cons,fuel_price, fuel_calc, fuel_calc1, total;
cout << "Please select your type or travel from the options below: \n"
<< "1. Travel from country to another country\n"
<< "2. Travel from city to another city\n"
<< "3. Travel in the city\n";
cin >> opt;

if (opt == 1) {
	cout << "You selected Travel from country to another country\n";
	cout << "Please write your current city: ";
	cin >> curr_pos;
	cout << "Please write your destination: ";
	cin >> dest;
	cout << "Please write the distance from your current adres to your destination in Km: ";
	cin >> dist;
	cout << "Please enter the road tax in Euro in Countries during your travel: ";
	cin >> road_t;
	cout << "Please enter the number of seats of your vehicle: ";
	cin >> seat;
	cout << "Please enter your vehicles average fuel consumption in unit l/100km: ";
	cin >> fuel_cons;

	fuel_calc = fuel_cons / 100;
	cout << "Fuel consumption for 1km is equal to: " << fuel_calc << endl;
	cout << "Please enter the price of fuel in unit l/Euro: ";
	cin >> fuel_price;

	fuel_calc1 = fuel_price * fuel_calc * dist;

	cout << "The total fuel cost for your travels is: " << fuel_calc1 << "Euro" << endl;
	total = road_t + fuel_calc1;
	cout << "Total Price including fuel cost and road taxes is: " << total << "Euro" << endl;
    }

if (opt == 2) {
	cout << "You selected Travel from city to another city\n";
	cout << "Please write your current city: ";
	cin >> curr_pos;
	cout << "Please write your destination: ";
	cin >> dest;
	cout << "Please write the distance from your current adres to your destination in Km: ";
	cin >> dist;
	cout << "Please enter the road tax in € (if you use highway) during your travel: ";
	cin >> road_t;
	cout << "Please enter the number of seats of your vehicle: ";
	cin >> seat;
	cout << "Please enter your vehicles average fuel consumption in unit l/100km: ";
	cin >> fuel_cons;

	fuel_calc = fuel_cons / 100;
	cout << "Fuel consumption for 1km is equal to: " << fuel_calc << endl;
	cout << "Please enter the price of fuel in unit l/Euro: ";
	cin >> fuel_price;

	fuel_calc1 = fuel_price * fuel_calc * dist;

	cout << "The total fuel cost for your travels is: " << fuel_calc1 << "Euro" << endl;
	total = road_t + fuel_calc1;
	cout << "Total Price including fuel cost and road taxes is: " << total << "Euro" << endl;
    }

if (opt == 3) {

	cout << "You selected Travel in city\n";
	cout << "Please write your current adress: ";
	cin >> curr_pos;
	cout << "Please write your destination: ";
	cin >> dest;
	cout << "Please write the distance from your current adres to your destination in Km: ";
	cin >> dist;
	
	cout << "Please enter the number of seats of your vehicle: ";
	cin >> seat;
	cout << "Please enter your vehicles fuel consumption in unit l/100km: ";
	cin >> fuel_cons;

	fuel_calc = fuel_cons / 100;
	cout << "Fuel consumption for 1km is equal to: " << fuel_calc << endl;
	cout << "Please enter the price of fuel in unit l/Euro: ";
	cin >> fuel_price;

	fuel_calc1 = fuel_price * fuel_calc * dist;
	total = fuel_calc1 + 0;
	cout << "The total fuel cost for your travels is: " << fuel_calc1 << "Euro" << endl;
	cout << "Total Price is: " << total << "Euro" << endl;
    }

cout << "Please enter the number of people that you can travel with: ";
cin >> people;
cout << "If you share your travel with " << people << "people, the cost for one person will be: " << total / people <<
"€, which it meats you will save: " << total - (total / people) << "Euro. \n";

return 0;
		
}

