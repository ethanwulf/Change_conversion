#include<iostream>

using namespace std;

int main() {

	int change{};
	int dollars{};
	int quarters{};
	int dimes{};
	int nickels{};
	int pennies{};

	cout << "Enter the amount of change you have: ";
	cin >> change;

	dollars = change / 100;
	change %= 100;
	cout << "Number of dollars: " << dollars << endl;
	cout << "Update change after dollar conversion: " << change << endl;

	quarters = change / 25;
	change %= 25;
	cout << "Number of quarters: " << quarters << endl;
	cout << "Update change after quarters conversion: " << change << endl;

	dimes = change / 10;
	change %= 10;
	cout << "Number of dimes: " << dimes << endl;
	cout << "Update change after dimes conversion: " << change << endl;

	nickels = change / 5;
	change = change % 5;
	cout << "Number of nickels: " << nickels << endl;
	cout << "Update change after nickels conversion: " << change << endl;

	pennies = change;
	cout << "Number of pennies: " << pennies << endl;

	return 0;
} 