//
//  main.cpp
//  Population
//  calculates population growth over time period of days
//  Created by brian on 3/10/22.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double startingPopulation, increasePercent, numDays, counter = 0;
    
    cout << "What is the starting number of organisms: ";
    cin >> startingPopulation;
    
    cout << "What is the average percentage daily population increase: ";
    cin >> increasePercent;
    increasePercent /= 100;
    
    cout << "How many days will the organisms multiply: ";
    cin >> numDays;
    
    if (startingPopulation >= 2 && increasePercent >= 0 && numDays >= 1)
    {
        for (int i = 1; i <= numDays; i++)
        {
            counter += startingPopulation * increasePercent;
            cout << "The population for day #" << i << " is: " << setw(4) << counter << endl;
        }
    }
    else
        cout << "\nPlease enter valid data.\n";
    
    
    cout << endl << endl << endl;
    return 0;
}
