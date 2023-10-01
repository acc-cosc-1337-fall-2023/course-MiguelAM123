//add include statements
#include "func.h"
#include <string>

using std:: string;


//add function code here

double getGCcontent(const string& gcString)
{
    int strIndex = 0;
    int gCount = 0;
    int cCount = 0;
    int stringSize = gcString.size();
    int count = 0;
    
    for (; count <= stringSize; count++, strIndex++)
    {
        if (gcString[strIndex] == 'G' || gcString[strIndex] == 'g')
            gCount += 1;

        if (gcString[strIndex] == 'C' || gcString[strIndex] == 'c')
            cCount += 1;


    }

    double totalGC = gCount + cCount;
    double GCpercent = totalGC / stringSize;
    return GCpercent;

}



string getReverseString(string dnaString)
{
    string reversed = dnaString;
    int strlen = dnaString.size();
    int indexPlace = 0;

    for (; strlen > 0; strlen--, indexPlace++)
    {
        char temp = dnaString[strlen - 1];
        reversed[indexPlace] = temp;
    }
    
    return reversed; 
}



string getDnaComplement(string dnaCompliment)
{
    int strlen = dnaCompliment.size();
    int indexPlace = 0;

    string compliment = getReverseString(dnaCompliment);


    for (; strlen > 0; indexPlace++, strlen--)
    {
        char letter = compliment[indexPlace];
        
        switch (letter)
        {
        case 'A': compliment[indexPlace] = 'T';
            
            break;

        case 'T': compliment[indexPlace] = 'A';

            break;

        case 'C': compliment[indexPlace] = 'G';

            break;

        case 'G': compliment[indexPlace] = 'C';

            break;

        
        default: 
            break;
        }
    }

    return compliment;
}