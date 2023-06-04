//
//  main.cpp
//  SumOfNumbers
//  finds the sum of numbers from 1 through the user defined input
//  Created by brian on 3/9/22.
//
#include <iostream>
using namespace std;

int main()
{
    //holds user defined variable
    double input, sum = 0;
    
    //ask user for user defined variable
    cout << "Enter a positive number to create a sum of integers: ";
    cin >> input;
    
    //input validation and loop
    if (input >= 0)
    {
        for (int i = 1; i <= input; i++)
        {
            sum += i;
        }
        cout << "The value of the sum of integers is: " << sum << endl;
    }
    else
        cout << "Enter a positive value please.\n";
    
    return 0;
}
