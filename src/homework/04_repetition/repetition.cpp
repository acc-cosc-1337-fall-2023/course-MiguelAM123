//add include statements
#include "repetition.h"


//add function(s) code here


int factorial(int num)
{
    int total = 1;
    while (num > 0)
    {
        total *= num;
        num--;
    }
    return total;
}


int gcd(int num1, int num2)
{
    int placeholder = 0;

    while (num1 != num2) 
        {
           if (num1 < num2)
           {
                placeholder = num1;
                num1 = num2; 
                num2 = placeholder;
           }
        
            num1 = num1 - num2;

        }
    return num1;
}


