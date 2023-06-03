//
//  main.cpp
//  RunningARace
//
//  Created by brian on 3/2/22.
//  Calculates third, second, and first place or race runners and verifies input
//
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string string1, string2, string3;
    double double1, double2, double3;
    
    cout << "Enter the name of the first runner and their time: ";
    getline(cin, string1);
    cin >> double1;
    
    cout << "Enter the name of the second runner and their time: ";
    getline(cin, string2);
    cin >> double2;
    
    cout << "Enter the name of the third runner and their time: ";
    getline(cin, string3);
    cin >> double3;
    
    if (double1 <= 0 || double2 <= 0 || double3 <= 0)
    {
        cout << "Times much be positive!";
    }
    else if (double1 == double2 || double1 == double3)
    {
        cout << "There is a tie!";
    }
    else
    {
        if (double1 < double2 && double1 < double3)
        {
            cout << string1 << " is first with a time of: " << double1;
        }
        else if (double2 < double1 && double2 < double3)
        {
            cout << string2 << " is first with a time of: " << double2;
        }
        else
        {
            cout << string3 << " is first with a time of: " << double3;
        }
    }
}
