//
//  main.cpp
//  RecursiveArraySum
//
//  Created by brian on 5/6/22.
//
#include <iostream>
using namespace std;

int ArraySum(int[], int);

int main()
{
    int testArr[3] = {1, 30, -1};
    cout << ArraySum(testArr, 3) << endl;
    
    return 0;
}

int ArraySum(int arr[], int length)
{
    if (length > 0)
    {
        int index = arr[length - 1];
        return index + ArraySum(arr, --length);
    }
    
    return 0;
}
