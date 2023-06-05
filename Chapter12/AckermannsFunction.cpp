//
//  main.cpp
//  AckermannsFunction
//
//  Created by brian on 5/9/22.
// test creating and using ackermans functions
//
#include <iostream>
using namespace std;

int ackermanns(int, int);

int main()
{
    cout << ackermanns(3, 2) << endl;
    
    return 0;
}

int ackermanns(int a, int b)
{
    if (a == 0)
        return b + 1;
    if (b == 0)
        return ackermanns(a - 1, 1);
    else
        return ackermanns(a - 1, ackermanns(a, b - 1));
}
