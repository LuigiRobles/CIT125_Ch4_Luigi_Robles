//CIT125 Luigi Robles
// Ch. 4 Pg. 92 Fig 4-21 
// 06-19-2020 Summer Term

#include <iostream> // preprocessing directive
using namespace std;

int main()
{
	// declaring variables
	double salePrice = 0.0;
	double taxRate = 0.0;
	double salesTax = 0.0;
	double cost = 0.0;

	// enter input items, input part of IPO
	cout << "Enter the sale price: ";
	cin >> salePrice; // Input for sale price
	cout << "Enter the sales tax rate: ";
	cin >> taxRate; // Input for tax rate

	// calculate sales tax and cost
	salesTax = salePrice * taxRate; // processing part of IPO
	cost = salePrice + salesTax; // processing algorithm

	// display output items 
	cout << "Cost: $" << cost << endl; // output part of IPO

	return 0;
} // end of main function


