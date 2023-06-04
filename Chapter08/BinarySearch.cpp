//
//  main.cpp
//  BinarySearch
//
//  Created by brian on 4/7/22.
//  performs a binary search on an array for a given value
//
#include <iostream>
using namespace std;

int binarySearch(int[], int, int);

int main()
{
    const int SIZE = 10;
    int arrayInt[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    cout << binarySearch(arrayInt, SIZE, 5) << endl;
    
    
    
    return 0;
}

int binarySearch(int array[], int size, int searchElement)
{
    int start = 0, end = (size - 1), position = - 1, middle;
    
    
    while (position == -1 && start <= end)
    {
        middle = (start + end) / 2;
        
        if(array[middle] == searchElement)
        {
            position = middle;
            return position;
        }
        else if(array[middle] > searchElement)
        {
            end = middle - 1;
        }
        else
        {
            start = middle + 1;
        }
    }
    
    return position;
}
