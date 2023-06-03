//
//  main.cpp
//  logicalOperators
//
//  Created by brian on 2/28/22.
//  Test logical operators
//
#include <iostream>

using namespace std;

int main()
{
    int speed = 500;
    
    if (speed >= 0 && speed <= 200)
        cout << "The number is valid.\n";
    else
        cout << "The number isn't valid.\n";

    
    return 0;
}
