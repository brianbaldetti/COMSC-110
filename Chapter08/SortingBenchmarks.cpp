//
//  main.cpp
//  SortingBenchmarks
//
//  Created by brian on 4/12/22.
//  compares the efficiency of the bubble sort and sequential sort algorithms
//
#include <iostream>
using namespace std;

void bubbleSort(int[], int);
void sequentialSort(int[], int);
void switchFunc(int&, int&);

int main()
{
    const int SIZE = 20;
    int array1[] = {1, 4, 65, 2, 4, 6, 1, 9, 23, 32, 76, 12, 12, 75, 85, 23, 12, 34, 65, 23};
    int array2[] = {1, 4, 65, 2, 4, 6, 1, 9, 23, 32, 76, 12, 12, 75, 85, 23, 12, 34, 65, 23};
    
    bubbleSort(array1, SIZE);
    sequentialSort(array2, SIZE);
    
    for (int i = 0; i < SIZE; i++)
    {
        cout << array1[i] << " ";
    }
    
    return 0;
}

void bubbleSort(int array[], int arraySize)
{
    int count = 0;
    for (int i = 0; i < arraySize - 1; i++)
    {
        for (int j = 0; j < arraySize - 1; j++)
        {
            if (array[i] < array[j + 1])
            {
                switchFunc(array[i], array[j + 1]);
            }
            
            count++;
        }
    }
    
    cout << count << endl;
}

void sequentialSort(int array[], int arraySize)
{
    int count = 0;
    
    for (int i = 0; i < arraySize - 1; i++)
    {
        int low = array[i];
        int lowIndex = i;
        for (int j = i + 1; j < arraySize; i++)
        {
            if (low > array[j])
            {
                low = array[j];
                lowIndex = j;
            }
            count++;
            
            switchFunc(array[lowIndex], array[i]);
        }
    }
    
    cout << count << endl;
}

void switchFunc(int& a, int& b)
{
    int c = a;
    a = b;
    b = c;
    
}


