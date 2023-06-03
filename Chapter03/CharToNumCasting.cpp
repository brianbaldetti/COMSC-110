//
//  main.cpp
//  CharToNumCasting
//
//  Created by brian on 2/14/22.
//  cast a char to a number
//
#include <iostream>
using namespace std;

int main()
{
    char letter;
    int charnum;
    
    cout << "Enter a letter to convert to ANSII. ";
    cin >> letter;
    
    charnum = static_cast<int>(letter);
    cout << "\nThe letter converted to ANSII is : " << charnum << endl;
    
    return 0;
}
