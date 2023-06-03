//
//  main.cpp
//  BoxOffice
//
//  Created by brian on 2/15/22.
//  calculates revenue from theater ticket sales
//
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double ADULT_TICKET = 10, CHILD_TICKET = 6, COMISSION_PAY = .80;
    double adultTicketsSold, childTicketSold, grossProfit, netProfit, distPay;
    
    cout << "How many adult tickets were sold? ";
    cin >> adultTicketsSold;
    cout << "\nHow many children tickets were sold? ";
    cin >> childTicketSold;
    
    grossProfit = (ADULT_TICKET * adultTicketsSold) + (CHILD_TICKET * childTicketSold);
    distPay = grossProfit * COMISSION_PAY;
    netProfit = grossProfit - distPay;
    
    cout << setprecision(2) << fixed;
    cout << "\nAdult tickets sold: " << setw(6) << adultTicketsSold;
    cout << "\nChild tickets sold: " << setw(6) << childTicketSold;
    cout << "\nGross profit: " << setw(6) << grossProfit;
    cout << "\nDistributer pay: " << setw(6) << distPay;
    cout << "\nNet Profit: " << setw(6) << netProfit << endl;
    
    return 0;
    
}
