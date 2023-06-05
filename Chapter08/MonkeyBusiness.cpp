//
//  main.cpp
//  MonkeyBusiness
//
//  Created by brian on 4/6/22.
//  calculates the amount of food that a group of 3 monkeys eats during weekdays
//
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double monkeys[3][5], avg, total, least, most;
    
    for (int row = 0; row < 3; row += 1)
    {
        cout << "Enter the food for monkey #" << (row + 1) << " on the given dates:\n";
        for (int col = 0; col < 5; col += 1)
        {
            cout << "\tEnter the pounds of food consumed on day #" << (col + 1) << " : ";
            cin >> monkeys[row][col];
            
            if (monkeys[row][col] < 0)
            {
                cout << "Error! Please enter a number greater than or equal to 0.\n";
                col--;
            }
        }
    }
    
    least = monkeys[0][0];
    most = monkeys[0][0];
    
    for (auto& row : monkeys)
    {
        for (auto& col : row)
        {
            total += col;
            
            if (least > col)
                least = col;
            if (most < col)
                most = col;
        }
    }
    
    avg = total / 15;
    
    cout << fixed << setprecision(2);
    cout << "\nThe average amount of food eated by any given monkeys in the family for a given day of the week is: " << avg << " pounds of food.\n";
    cout << "The least amount of food eaten by any monkey on a given day is: " << least << " pound of food.\n";
    cout << "The most amount of food eaten by any monkey on a given day is: " << most << " pound of food.\n\n\n\n\n";

    return 0;
}
