//
//  main.cpp
//  FallingDistance
//  uses while loop and func to calculates the distance an object falles in a given time (in seconds)
//  Created by brian on 3/17/22.
//
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double fallingDistance(double);

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << fixed << setprecision(2) << setw(6) << fallingDistance(i) << " m" << endl;
    }
    
    return 0;
}

double fallingDistance(double seconds)
{
    const double g = 9.8;
    
    return (.5 * g * pow(seconds, 2.0));
}
