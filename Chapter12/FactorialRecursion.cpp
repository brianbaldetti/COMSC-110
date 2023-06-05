//
//  main.cpp
//  FactorialRecursion
//
//  Created by brian on 5/6/22.
//  practice creating and using a recursive func that finds factorials of the arguement
//
#include <iostream>
using namespace std;

//func prototype
int factorial(int);

int main()
{
    cout << factorial(6) << endl;
    
    return 0;
}

int factorial(int num)
{
    return num == 1 ?  1 : num * factorial(num - 1);
}
