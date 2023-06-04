//
//  main.cpp
//  charArray
//
//  Created by brian on 4/4/22.
//  Test using a char array instead of string
//
#include <iostream>
using namespace std;

int main()
{
    //first charArray initiation
    char charArray1[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    cout << charArray1;
    cout << "\n\n\n\n";
    
    char charArray2[6] = {'G', 'H', 'I', 'J', 'K', 'L'};
    cout << charArray2;
    cout << "\n\n\n\n";
    
    char charArray3[] = "MNOPQR";
    cout << charArray3;
    cout << "\n\n\n\n";
    
    char charArray4[6] = "STUVW";
    cout << charArray4;
    cout << "\n\n\n\n";
    
    return 0;
}
