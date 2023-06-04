//
//  main.cpp
//  MarkUp
//  Calculates retail price from items wholesale price, also performs input validation
//  Created by brian on 3/14/22.
//
#include <iostream>
using namespace std;

double calculateRetail(double, double);

int main()
{
    double wholesalePrice, markupPercent;
    
    cout << "What is the items wholesale price: ";
    cin >> wholesalePrice >> markupPercent;
    
    cout << "What is the itmes markup percent: ";
    cin >> markupPercent;
    
    cout << "The retail price of the item is: " << calculateRetail(wholesalePrice, markupPercent) << endl;
    
    return 0;
}

double calculateRetail(double wholesale, double markup)
{
    double retail;
    
    if (wholesale >= 0 && markup >= 0)
    {
        retail = wholesale * (markup / 100 + 1);
        return retail;
    }
    
    
    return 0;
}
