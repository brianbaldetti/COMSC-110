//
//  main.cpp
//  WinningDivisions
//  finds the highest earning company division and outputs the division and the earning numbers
//  Created by brian on 3/17/22.
//
#include <iostream>
#include <string>
using namespace std;

double getSales(string);
void findHighest(double, double, double, double);

string div1 = "Northeast", div2 = "Southeast", div3 = "Northwest", div4 = "Southwest";

int main()
{
    double sales1, sales2, sales3, sales4;
    
    sales1 = getSales(div1);
    sales2 = getSales(div2);
    sales3 = getSales(div3);
    sales4 = getSales(div4);
    
    findHighest(sales1, sales2, sales3, sales4);
}

double getSales(string division)
{
    double quarterlySales = -1;
    
    do
    {
        cout << "What is the " << division << " divisions quarterly sales total: ";
        cin >> quarterlySales;
        
        if (quarterlySales < 0)
            cout << "Please enter a valid sales figure!\n";
        
    } while (quarterlySales < 0);
    
    return quarterlySales;
}

void findHighest(double num1, double num2, double num3, double num4)
{
    if (num1 > num2 && num1 > num3 && num1 > num4)
        cout << "The " << div1 << " division has the highest sales.\n";
    else if (num2 > num3 && num2 > num4)
        cout << "The " << div2 << " division has the highest sales.\n";
    else if (num3 > num4)
        cout << "The " << div3 << " division has the highest sales.\n";
    else if (num4 > num1 && num4 > num2 && num4 > num3)
        cout << "The " << div4 << " division has the highest sales.\n";
    else
        cout << "No division has the highest sales over the other division.\n";
}
