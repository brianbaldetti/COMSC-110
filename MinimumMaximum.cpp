//
//  main.cpp
//  MinimumMaximum
//
//  Created by brian on 3/2/22.
//  Finds smaller and larger number of two numbers
//
#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    
    cout << "Enter two numbers seperated by spaces: ";
    cin >> num1 >> num2;
    
    num1 > num2 ? cout << "First number is larger.\n" : cout << "Second number is larger.\n";
    
    return 0;
}
