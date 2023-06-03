//
//  main.cpp
//  OverflowTest
//
//  Created by brian on 2/14/22.
//
#include <iostream>
using namespace std;

int main()
{
    float test = 2.0e38 * 1000; //overflows test
    cout << test << endl;
    
    test = 2.0e-38 / 2.0e38; //underflows test
    cout << test << endl;
    
    return 0;
}
