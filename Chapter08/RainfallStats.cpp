//
//  main.cpp
//  RainfallStats
//
//  Created by brian on 4/5/22.
//  used to store the rainfall for each month and calculate the avg, lowest, and highest rainfall values
//
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int MONTHS = 12;
    double rainfall[MONTHS];
    double inputVal = -1;
    
    for (int i = 0; i < MONTHS; i++)
    {
        cout << "Enter the rainfall for the #" << (i + 1) << " month: ";
        cin >> inputVal;
            
        if (inputVal < 0)
        {
            cout << "Please enter a valid amount of rainfall for the #" << (i + 1) << " month!\n";
            i--;
        }
        else
            rainfall[i] = inputVal;
    }
    
    double avg = rainfall[0], low = rainfall[0], high = rainfall[0];
    
    for (int i = 1; i < MONTHS; i++)
    {
        avg += rainfall[i];
        
        if (low > rainfall[i])
            low = rainfall[i];
        if (high < rainfall[i])
            high = rainfall[i];
    }
    
    cout << fixed << setprecision(2) << endl;
    cout << "The lowest value is: " << low << endl;
    cout << "The highest value is: " << high << endl;
    cout << "The average is: " << (avg / 12) << endl << endl;
    
    
    
    return 0;
}
