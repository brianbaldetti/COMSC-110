//
//  main.cpp
//  TypeConversion
//
//  Created by brian on 2/14/22.
//
//  program test type conversions
#include <iostream>
using namespace std;

int main()
{
    double a = 3 / 2; //returns 1 since operants are ints
    int b = 3.0 / 2; //returns 1 since b is an int
    
    cout << a << endl;
    cout << b << endl;
    
    return 0;
}
