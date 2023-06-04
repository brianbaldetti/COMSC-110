//
//  main.cpp
//  CelsiusToFarenheitTable
//
//  Created by brian on 3/10/22.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Celcius:  Farenheit:        \n";
    
    for(double i = 0; i <= 20; i++)
    {
        cout << setw(8) << i << setw(12) << (i * (5.0/4) + 32) << endl;
    }
    
    cout << endl << endl;
    return 0;
}
