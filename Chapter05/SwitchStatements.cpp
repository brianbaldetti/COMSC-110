//
//  main.cpp
//  switchStatements
//
//  Created by brian on 2/28/22.
//  Test switch statements
//
#include <iostream>

using namespace std;

int main()
{
    int selection;
    
    cout << "What formula do you want to see?\n";
    cout << "1 = Area of circle\n";
    cout << "2 = Area of rectangle\n";
    cout << "3 = Area of cylinder\n";
    cout << "4 = None\n";
    
    cin >> selection;
    
    switch (selection)
    {
        case 1:
            cout << "Pi times radius squared";
            break;
        case 2:
            cout << "Length times width";
            break;
        case 3:
            cout << "Pi times radius squared times height";
            break;
        default:
            cout << "error msg\n";
            break;
    }
    
    return 0;
}
