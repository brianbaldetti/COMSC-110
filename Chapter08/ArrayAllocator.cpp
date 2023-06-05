//
//  main.cpp
//  ArrayAllocator
//
//  Created by brian on 4/19/22.
//  function that dynamically allocates an array of integers and returns a pointer to the array
#include <iostream>
using namespace std;

int* arrayAllocator(int);

int main()
{
    int* ptr = new int[3];
    *(ptr + 0) = 1;
    *(ptr + 1) = 2;
    *(ptr + 2) = 3;
    
    int x = 25;
    int *xPtr = &x;
    xPtr[0] = 24;
    
    cout << *xPtr << endl;
    
    for (int i = 0; i < 3; i++)
    {
        cout << *(ptr + i) << endl;
    }
    
    return 0;
}

int* arrayAllocator(int num)
{
    int* arrayPtr = nullptr;
    
    arrayPtr = new int[num];
    
    return arrayPtr;
}
