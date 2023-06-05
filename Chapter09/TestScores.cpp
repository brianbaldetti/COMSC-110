//
//  main.cpp
//  TestScores
//
//  Created by brian on 4/20/22.
//  creates a array of test scores using a user defined size then sorts and averages the test scores before displaying them to the screen
//
#include <iostream>
#include <iomanip>
using namespace std;

void selectionSort(double*, int);
double averageScore(double*, int);
void swap(double*, double*);

int main()
{
    //initiallizes variables
    int size = -1;
    double* arrayPtr = nullptr;

    //creates user defined array
    cout << "Enter the size of the list of test scores: ";
    cin >> size;
    arrayPtr = new double[size];
    
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value for the #" << (i + 1) << " value: ";
        cin >> *(arrayPtr + i);
        
        if (*(arrayPtr + i) < 0)
        {
            cout << "Please enter a non-negative number.\nTry Again.\n";
            i--;
        }
    }
    
    selectionSort(arrayPtr, size);
    
    cout << fixed << setprecision(2);
    cout << "The test scores in ascending order are:\n";
    for (int i = 0; i < size; i++)
    {
        cout << setw(4) << *(arrayPtr + i) << endl;
    }
    cout << "And the average is: " << averageScore(arrayPtr, size) << endl << endl;
    
    
    delete arrayPtr;
    
    return 0;
}

void selectionSort(double* ptrArray, int ptrArraySize)
{
    for (int i = 0; i < (ptrArraySize - 1); i++)
    {
        int lowIndex = i;
        double lowValue = *(ptrArray + i);
        
        for (int j = (i + 1); j < ptrArraySize; j++)
        {
            if (*(ptrArray + j) < lowValue)
            {
                lowValue = *(ptrArray + j);
                lowIndex = j;
            }
        }
        
        swap(*(ptrArray + i), *(ptrArray + lowIndex));
    }
}

void swap(double* a, double* b)
{
    double temp = *a;
    *a = *b;
    *b = temp;
}

double averageScore(double* ptrArray, int ptrArraySize)
{
    double total = 0;
    
    for (int i = 0; i < ptrArraySize; i++)
    {
        total += ptrArray[i];
    }
    
    return total / ptrArraySize;
}
