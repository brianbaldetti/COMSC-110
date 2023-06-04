//
//  main.cpp
//  CharactersForASCIICodes
//  program displays the ASCII char values of 0-127
//  Created by brian on 3/9/22.
//
#include <iostream>
using namespace std;

int main()
{
    for (int i = 0, j = 1; i <= 127; i++, j++)
    {
        char numValue = i;
        cout << numValue << " ";
        
        if ((j % 12) == 0)
            cout << endl;
    }
    cout << endl;

    return 0;
}
