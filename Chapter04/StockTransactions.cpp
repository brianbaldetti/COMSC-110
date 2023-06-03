//
//  main.cpp
//  StockTransactions
//
//  Created by brian on 2/22/22.
//  Calculates stock transaction
//
#include <iostream>

using namespace std;

int main()
{
    //defines variables
    const float COMISSION = .02;
    double shares, purSharePrice, purPrice, soldSharePrice, soldPrice, firstComission, secondComission, transactionAmount;
    
    //ask user for shares bough, purchase price, and sold price of shares
    cout << "How many shares did you purchase?";
    cin >> shares;
    cout << "\nWhat was the purchase price per share?";
    cin >> purSharePrice;
    cout << "\nWhat was the selling price per share?";
    cin >> soldSharePrice;
    
    //calculates purchase price, first comission, sold price, second comission
    purPrice = shares * purSharePrice;
    firstComission = purPrice * COMISSION;
    soldPrice = shares * soldSharePrice;
    secondComission = soldPrice * COMISSION;
    transactionAmount = soldPrice - purPrice - firstComission - secondComission;
    
    //outputs the purchase price, sold price, first comissioin, second comission, transaction amount
    cout << "\nYou payed " << purPrice << " dollars for the stock and " << firstComission << " dollars to the broker.\n";
    cout << "You sold the stock for " << soldPrice << " dollars and payed " << secondComission << " dollars to the broker.\n";
    cout << "Your total transaction value was: " << transactionAmount << " dollars.\n";
    
    return 0;
}
