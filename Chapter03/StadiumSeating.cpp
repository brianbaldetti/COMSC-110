//
//  main.cpp
//  StadiumSeating
//
//  Created by brian on 2/15/22.
//  program finds revenue generated from ticket sales
//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int CLASS_A = 15, CLASS_B = 12, CLASS_C = 9;
    double amountA, amountB, amountC, total;
    
    cout << "How many class A tickets were sold? ";
    cin >> amountA;
    cout << "\nHow many class B tickets were sold? ";
    cin >> amountB;
    cout << "\nHow many class C tickets were sold? ";
    cin >> amountC;
    
    total = (amountA * CLASS_A) + (amountB * CLASS_B) + (amountC * CLASS_C);
    
    cout << setprecision(2) << fixed;
    cout << "\nThe total revenue generated from ticket sales was: " << total << ".\n";
    
    return 0;
}
