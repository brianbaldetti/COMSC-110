//
//  main.cpp
//  RecursiveConversion
//
//  Created by brian on 5/6/22.
//
#include <iostream>
using namespace std;

void sign(int);

int main()
{
    sign(3);
    
    return 0;
}

void sign(int num)
{
    if (num > 0)
    {
        cout << "No Parking\n";
        sign(--num);
    }
}


