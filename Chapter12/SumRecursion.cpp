//
//  main.cpp
//  SumRecursion
//
//  Created by brian on 5/6/22.
//  practice using sum recursion algorithms
//
#include <iostream>
using namespace std;

int sum(int);

int main()
{
    cout << sum(5) << endl;
    
    return 0;
}

int sum(int num)
{
    return num == 1 ? num : num + sum(num - 1);
}
