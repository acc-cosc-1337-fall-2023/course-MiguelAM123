#include "hwexpressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here

double getSalesTax(double mealAmount)
{
	double salesTax = .0675;
	double salesTaxTotal = mealAmount * salesTax;
	return salesTaxTotal;


}

double getTipAmount(double mealAmount, double tipRate)
{
	double totalTip = mealAmount * tipRate;
	return totalTip;
}
