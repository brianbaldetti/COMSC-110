//
//  main.cpp
//  ifElseStatement
//
//  Created by brian on 2/28/22.
//  Test if/else statements
//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double sales = 5000000, comissionRate;
    
    if (sales >= 50000)
        comissionRate = .20;
    else
        comissionRate = .10;
    
    cout << setprecision(2) << fixed << sales << " " << comissionRate << endl;
    
    return 0;
}
