//
//  main.cpp
//  LargestAndSmallest
//
//  Created by brian on 4/5/22.
//  Finds the smallest and largest element of an array of 10 ints
//
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    int arr[SIZE];
    
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter #" << (i + 1) << " int to be added to the array: ";
        cin >> arr[i];
    }
    
    int smallest = arr[0], largest = arr[0];
    
    for (int range : arr)
    {
        if (smallest > range)
            smallest = range;
        if (largest < range)
            largest = range;
    }
    
    cout << "The largest element is :" << largest << endl;
    cout << "The smalest element is :" << smallest << endl;
    
    return 0;
}
