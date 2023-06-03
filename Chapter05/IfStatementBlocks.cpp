//
//  main.cpp
//  ifStatementBlocks
//
//  Created by brian on 2/28/22.
//  test if statement blocks
//
#include <iostream>

using namespace std;

int main()
{
    double sales = 5001000, comissionRate, bonus;
    
    if (sales > 50000)
    {
        comissionRate = .25;
        bonus = 250;
    }
    
    cout << sales << " " << comissionRate << " " << bonus << endl;
    
    return 0;
}
