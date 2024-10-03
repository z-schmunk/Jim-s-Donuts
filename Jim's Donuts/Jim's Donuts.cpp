#include <iostream>
#include <string>

using namespace std;

int main() {
	int numregdo, numfando, numappfr, pennies, nickles, dimes, quarters, dollars, regdodoz, fandodoz;
	const int PENNIES = 1, NICKLES = 5, DIMES = 10, QUARTERS = 25, DOLLARS = 100, TAX = .075;
	double regdocost, fandocost, appfrcost, owe, pay, changeDue;

	cout << "Number of regualar donuts ordered: \n";
	cin >> numregdo;

	if (numregdo >= 12) {
			regdodoz = numregdo % 12;
			numregdo = numregdo - (regdodoz * 12);
	}
	regdodoz = regdodoz * 7.99;
	numregdo = numregdo * 0.75;
	regdocost = regdodoz + numregdo;

	cout << "Number of fancy donuts ordered: \n";
	cin >> numfando;

	if (numfando >= 12) {
			fandodoz = numfando % 12;
			numfando = numfando - (fandodoz * 12);
	}
	fandodoz = fandodoz * 8.49;
	numfando = numfando * 0.85;
	fandocost = numfando + fandodoz;

	cout << "Number of apple fritters ordered: \n";
	cin >> numappfr;

	appfrcost = numappfr * 1.50;

	owe = (regdocost + fandocost + appfrcost);

	owe = owe + (owe * TAX);
	//figure out set precision \ floating point error

	cout << "Customer owes $" << owe << endl;
		
	cout << "Customer pays $ \n";
	cin >> pay;

	changeDue = (pay - owe) * 100;

	cout << "Change due is $" << changeDue / 100 << " - ";
	dollars = changeDue;

	if (changeDue >= 100) {
	cout << dollars / 100 << " dollars, ";
	changeDue = changeDue - (DOLLARS * (dollars / 100));
	}

	if (changeDue >= 25) {
	quarters = changeDue / QUARTERS;
	if (quarters == 1) {
		cout << quarters << " quarter, ";
	}
	else if (quarters > 1) {
		cout << quarters << " quarters, ";
	}
	changeDue = changeDue - (quarters * QUARTERS);
	}

	if (changeDue >= 10) {
	dimes = changeDue / DIMES;
	if (dimes == 1) {
		cout << dimes << " dime, ";
	}
	else if (dimes > 1) {
		cout << dimes << " dimes, ";
	}
	changeDue = changeDue - (dimes * DIMES);
	}

	if (changeDue >= 5) {
	nickles = changeDue / NICKLES;
	if (nickles == 1) {
		cout << nickles << " nickle, ";
	}
	else if (nickles > 1) {
		cout << nickles << " nickles, ";
	}
	changeDue = changeDue - (nickles * NICKLES);
	}

	if (changeDue >= 0) {
	pennies = changeDue / PENNIES;
	if (pennies == 1) {
		cout << pennies << " penny, ";
	}
	else if (pennies > 1) {
		cout << pennies << " pennies.";
	}
	changeDue = changeDue - (pennies * PENNIES);
	}
}