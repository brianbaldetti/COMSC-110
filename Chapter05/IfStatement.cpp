//
//  main.cpp
//  ifStatement
//
//  Created by brian on 2/28/22.
//  Test using if statement to check if value is 20
//
#include <iostream>

using namespace std;

int main()
{
    const double OVERTIME = 1.5;
    double payRate = 10, hours = 40.5;
    
    if (hours > 40)
        payRate *= OVERTIME;
    
    cout << payRate << " " << hours << endl;
    
    return 0;
}
