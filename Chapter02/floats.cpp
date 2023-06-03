//
//  main.cpp
//  Floats
//
//  Created by brian on 2/9/22.
//
#include <iostream>
using namespace std;

int main()
{
    float singlePercision; //declares a float
    double doublePercision; //declares a double
    long double longDoublePercision; //declares a long doulbe
    
    singlePercision = 1.21921E10; //doulbes can be defined by sci notation
    doublePercision = 13432042084.239130182903891;
    longDoublePercision = 3.1;
    
    int floatToInt;
    floatToInt = longDoublePercision; //casting a doulbe to an int causes the double to be rounded DOWN to the nearest whole number
    
    float test = 2312.31F; //stores floating point literal as a float rather than double
    
    cout << singlePercision << endl << longDoublePercision << '\n';
    cout << floatToInt << endl;
    cout << test << endl;
    
    return 0;
}
