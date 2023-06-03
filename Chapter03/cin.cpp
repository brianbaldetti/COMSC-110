//
//  main.cpp
//  cin
//
//  Created by brian on 2/14/22.
//
#include <iostream>
using namespace std;

int main()
{
    double pounds, kilograms;
    
    cout << "This program converts your weight in kilograms to pounds.\n";
    cout << "Please enter your weight in kilograms: \n";
    cin >> kilograms;
    
    pounds = 2.2 * kilograms;
    
    cout << "Your weight in pounds is: " << pounds << endl;
    
    return 0;
}
