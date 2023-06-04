//
//  main.cpp
//  SquareDisplay
//  draws a square on screen
//  Created by brian on 3/11/22.
//
#include <iostream>
using namespace std;

int main()
{
    int squareLength;
    
    cout << "Enter a length for the sides of a square: ";
    cin >> squareLength;
    
    for (int i = 0; i < squareLength; i++)
    {
        for (int i = 0; i < squareLength; i++)
        {
            cout << "X ";
        }
        
        cout << endl;
    }
    
    return 0;
}
