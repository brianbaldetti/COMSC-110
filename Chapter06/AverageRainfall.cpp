//
//  main.cpp
//  AverageRainfall
//
//  Created by brian on 3/9/22.
//
#include <iostream>
using namespace std;

int main()
{
    int numYears;
    
    cout << "How many years would you like to average the monthly rainfall for: ";
    cin >> numYears;
    
    int count = 1;
    while (count <= numYears)
    {
        for (int i = 1; i <= 12; i++)
        {
            double jan, feb, march, april, may, june, july, aug, sep, oct, nov, dec;
            
            cout << "What is the rainfall for each month: ";
            cin >> jan >> feb >> march >> april >> may >> june >> july >> aug >> sep >> oct >> nov >> dec;
            
            
        }
    }
}
