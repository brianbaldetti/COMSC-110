//
//  main.cpp
//  Operators
//
//  Created by brian on 2/9/22.
//
#include <iostream>
using namespace std;

int main()
{
    float itemPrice = 69.69;
    float discount = .20;
    float cashPay = 20.00;
    
    float discountPrice, remainder, cardPay;
    
    discountPrice = itemPrice * (1 - discount);
    remainder = discountPrice - cashPay;
    cardPay = remainder;
    
    cout << "Full price was: " << itemPrice << "\nDiscount price was: " << discountPrice << "\nAmount payed in cash was: " << cashPay << "\nAmount payed with card was: " << cardPay << '\n';
    
    return 0;
}
