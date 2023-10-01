#include <iostream>
#include "func.h"
#include <string>

using std:: string;




using std::cin; using std::cout;

int main() 
{
	int choice = 0;
	string gcContent;
	string dnaContent2;
	char input = 'n';
	double gcPercent;
	
	do
	{

	cout << "Select an option 1-3" << "\n";
    cout << "1.) Get GC Content" << "\n";
    cout << "2.) Get DNA Content" << "\n";
    cout << "3.) Exit" << "\n";
    
    cin >>  choice;

    
		if (choice >= 1 && choice <= 3)
		{
			if (choice == 1)
			{
				cout << "Enter a DNA sequence" << "\n";
				cin >> gcContent; 
				
				gcPercent = getGCcontent(gcContent);

				cout << "The GC content is: " << gcPercent << "\n";

			}

			else if (choice == 2)
			{
				cout << "Enter DNA sequence" << "\n"; 
				cin >> dnaContent2;

				string dnaCompliment = getDnaComplement(dnaContent2);

				cout << "The DNA compliment is: " << dnaCompliment << "\n";


			}

			else if (choice == 3)
			{
				cout << "Are you sure you want to exit?" << "\n";
				cin >> input; 

			}
		}
	
	
	} while (input == 'n' || input == 'N' );
	
}


