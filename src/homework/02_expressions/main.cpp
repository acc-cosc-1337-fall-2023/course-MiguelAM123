//write include statements
#include <iostream>
#include "hwexpressions.h"

//write namespace using statement for cout
using std::cin; using std::cout;
int main()

{
	double mealAmount;
	double tipRate;
	double taxAmount;
	double tipAmount;
	double total;
	
	
	cout << "Enter meal amount and tip amount ", "\n";
	cout << "seperated by a space. ", "\n";
	cin >> mealAmount >> tipRate;


	cout << "Meal Amount: " << mealAmount<< "\n";
	
	taxAmount = getSalesTax(mealAmount);
	cout << "Sales Tax: "<< taxAmount << "\n" ;
	
	tipAmount = getTipAmount(mealAmount, tipRate);
	cout << "Tip Amount: "<< tipAmount << "\n" ;

	
	total = mealAmount + tipAmount + taxAmount;
	cout << "Total: " << total << "\n" ;


	return 0;
}
