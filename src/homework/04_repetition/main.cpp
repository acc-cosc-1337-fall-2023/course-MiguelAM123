//write include statements
#include <iostream>
#include "repetition.h"

//write using statements

using std::cin; using std::cout;

int main() 
{
	int num = 0;
	int choice = 0;
	int gcdnum = 0;
	int gcdnum2 = 0;
	int gcdvalue = 0;
	int factorialTotal = 0;
	char input = 'n';

	
	do
	{

	cout << "Select an option 1-3" << "\n";
    cout << "1.) Factorial" << "\n";
    cout << "2.) Greatest Common Divisor" << "\n";
    cout << "3.) Exit" << "\n";
    
    cin >>  choice;

    
		if (choice >= 1 && choice <= 3)
		{
			if (choice == 1)
			{
				cout << "Enter a Number" << "\n";
				cin >> num; 
				cout << "The factorial of " << num; 

				factorialTotal = factorial(num);

				cout << " is " << factorialTotal << "\n";

			}

			else if (choice == 2)
			{
				cout << "Enter the first number" << "\n";
				cin >> gcdnum;
				cout << "Enter the second number" << "\n";
				cin >> gcdnum2; 

				gcdvalue = gcd(gcdnum, gcdnum2);

				cout << "The greatest common divisor is " << gcdvalue << "\n";



			}

			else if (choice == 3)
			{
				cout << "Are you sure you want to exit?" << "\n";
				cin >> input; 

			}
		}
	
	
	} while (input == 'n' || input == 'N' );
	
}
