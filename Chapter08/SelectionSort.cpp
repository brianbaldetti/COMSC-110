//
//  main.cpp
//  SelectionSort
//
//  Created by brian on 4/6/22.
//  practice using selection sort algorithm
//
#include <iostream>
using namespace std;

void swap(int&, int&);
void selectionSort(int[], int);

int main()
{
    const int SIZE = 10;
    int intArray[SIZE] = {1, 2, 3, 4, 5, 6, 19, 01, 0, 38};
    
    selectionSort(intArray, SIZE);
    
    for (auto range : intArray)
        cout << range << " ";
    cout << endl;
}

void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

void selectionSort(int array[], int size)
{
    int minIndex, minValue;
    
    for (int i = 0; i < (size - 1); i++)
    {
        minIndex = i;
        minValue = array[i];
        
        for (int j = (i + 1); j < size; j++)
        {
            if (minValue > array[j])
            {
                minValue = array[j];
                minIndex = j;
            }
        }
        
        swap(array[i], array[minIndex]);
    }
}
