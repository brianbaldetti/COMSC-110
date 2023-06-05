//
//  main.cpp
//  ReverseArray
//
//  Created by brian on 5/19/22.
//  function receives an array as a arguement and returns a pointer to the array in reverse
//
#include <iostream>
using namespace std;

int* reverse(int[], int);

int main()
{
    int test[] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int* test1[10] = reverse(test, 10);
    
    cout << test1[1] << endl;
    
    return 0;
}

int* reverse(int array[], int size)
{
    int* reversal = nullptr;
    reversal = new int[size];
    
    for (int i = 0; i < size; i++)
    {
        reversal[i] = array[size - (i + 1)];
    }
    
    return reversal;
}
