//
//  main.cpp
//  CombinedAssignmentOperators
//
//  Created by brian on 2/14/22.
//
#include <iostream>
using namespace std;

int main()
{
    int total, subtotal, tax, shipping, fee;
    total = subtotal = tax = shipping = fee = 10;
    
    total += 1; //total = 11
    subtotal -= 1; //total = 9
    tax *= 1; //total = 10
    shipping /= 1; //total = 10
    fee %= 1; //total = 0
    
    cout << total <<endl << subtotal << endl << tax << endl << shipping << endl << fee << endl;
    
    return 0;
}
