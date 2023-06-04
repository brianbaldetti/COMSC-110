//
//  main.cpp
//  TheGreatestAndLeastOfThese
//
//  Created by brian on 3/10/22.
//
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int input = 0, max = 0, min = 0, count = 0;
    
    do
    {
        cout << "Enter a int: ";
        cin >> input;
        
        if (count == 0)
        {
            max = input;
            min = input;
        }
        else
        {
            if (input > max)
                max = input;
            if (input < min && input != -99)
                min = input;
        }
        
        count++;
    } while (input != -99);
    
    cout << "Max is: " << max << endl;
    cout << "Min is: " << min << endl;
    
    return 0;
}
