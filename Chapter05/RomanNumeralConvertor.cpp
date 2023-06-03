//
//  main.cpp
//  RomanNumeralConvertor
//
//  Created by brian on 3/2/22.
//  Converts numbers from 1-10 into roman numerals
//
#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number within the range of 1-10: ";
    int number;
    cin >> number;
    
    switch (number)
    {
        case 1:
            cout << "I";
            break;
        case 2:
            cout << "II";
            break;
        case 3:
            cout << "III";
            break;
        case 4:
            cout << "IV";
            break;
        case 5:
            cout << "V";
            break;
        case 6:
            cout << "VI";
            break;
        case 7:
            cout << "VII";
            break;
        case 8:
            cout << "IIX";
            break;
        case 9:
            cout << "IX";
            break;
        case 10:
            cout << "X";
            break;
        default:
            cout << "The number that you have entered is not valid!";
    }
    cout << "\n";
    
    return 0;
}
