//
//  main.cpp
//  BubbleSort
//
//  Created by brian on 4/6/22.
//  practice using bubble sort algorithm in ascending order
//
#include <fstream>
#include <iostream>
using namespace std;

void swap(int&, int&);
void ascending(int[], int);
void decending(int[], int);
void bubbleSort(int[], int);

int main()
{
    const int SIZE = 5;
    int intArray[SIZE] = {3, 8, 9, 10, 1};
    
    bubbleSort(intArray, SIZE);
    
    for (auto range : intArray)
        cout << range << " ";
    cout << endl;
    
    return 0;
}

void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

void ascending(int array[], int arraySize)
{
    for (int i = 0; i < (arraySize - 1); i++)
    {
        for (int j = 0; j < (arraySize -1); j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

void decending(int arr[], int arraySize)
{
    for(int i = 0; i < (arraySize -1); i++)
    {
        for (int j = 0; j < (arraySize - 1); j++)
        {
            if (arr[j] < arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
        }
    }
}

void bubbleSort(int array[], int arraySize)
{
    for (int i = 0; i < (arraySize - 1); i++)
    {
        if (array[i] > array[i + 1])
        {
            swap(array[i], array[i + 1]);
            i = 0;
        }
    }
}
